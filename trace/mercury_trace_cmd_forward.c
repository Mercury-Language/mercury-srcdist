/*
** vim: ts=4 sw=4 expandtab
*/
/*
** Copyright (C) 1998-2007 The University of Melbourne.
** This file may only be copied under the terms of the GNU Library General
** Public License - see the file COPYING.LIB in the Mercury distribution.
*/

/*
** This module implements the mdb commands in the "forward" category.
**
** The structure of these files is:
**
** - all the #includes
** - local macros and declarations of local static functions
** - one function for each command in the category
** - any auxiliary functions
** - any command argument strings
** - option processing functions.
*/

#include "mercury_std.h"
#include "mercury_getopt.h"

#include "mercury_trace_internal.h"
#include "mercury_trace_cmds.h"
#include "mercury_trace_cmd_forward.h"
#include "mercury_trace_cmd_parameter.h"
#include "mercury_trace_util.h"

/****************************************************************************/

static  MR_bool     MR_trace_options_movement_cmd(MR_TraceCmdInfo *cmd,
                        char ***words, int *word_count);

/****************************************************************************/

MR_Next
MR_trace_cmd_step(char **words, int word_count, MR_TraceCmdInfo *cmd,
    MR_EventInfo *event_info, MR_Code **jumpaddr)
{
    MR_Unsigned n;

    cmd->MR_trace_strict = MR_FALSE;
    cmd->MR_trace_print_level = MR_default_print_level;
    MR_init_trace_check_integrity(cmd);
    if (! MR_trace_options_movement_cmd(cmd, &words, &word_count)) {
        ; /* the usage message has already been printed */
    } else if (word_count == 1) {
        cmd->MR_trace_cmd = MR_CMD_STEP;
        return STOP_INTERACTING;
    } else if (word_count == 2 && MR_trace_is_natural_number(words[1], &n)) {
        cmd->MR_trace_cmd = MR_CMD_GOTO;
        cmd->MR_trace_stop_event = MR_trace_event_number + n;
        return STOP_INTERACTING;
    } else {
        MR_trace_usage_cur_cmd();
    }

    return KEEP_INTERACTING;
}

MR_Next
MR_trace_cmd_goto(char **words, int word_count, MR_TraceCmdInfo *cmd,
    MR_EventInfo *event_info, MR_Code **jumpaddr)
{
    MR_Unsigned n;
    const char  *generator_name;

    cmd->MR_trace_strict = MR_TRUE;
    cmd->MR_trace_print_level = MR_default_print_level;
    MR_init_trace_check_integrity(cmd);
    if (! MR_trace_options_movement_cmd(cmd, &words, &word_count)) {
        ; /* the usage message has already been printed */
    } else if (word_count == 2 && MR_trace_is_natural_number(words[1], &n)) {
        generator_name = NULL;
        if (MR_trace_event_number < n
            || !MR_cur_generator_is_named(generator_name))
        {
            cmd->MR_trace_cmd = MR_CMD_GOTO;
            cmd->MR_trace_stop_event = n;
            cmd->MR_trace_stop_generator = generator_name;
            return STOP_INTERACTING;
        } else {
            /* XXX this message is misleading */
            fflush(MR_mdb_out);
            fprintf(MR_mdb_err, "The debugger cannot go to a past event.\n");
        }
#ifdef  MR_USE_MINIMAL_MODEL_OWN_STACKS
    } else if (word_count == 3 && MR_trace_is_natural_number(words[1], &n)) {
        generator_name = words[2];
        if (MR_trace_event_number < n
            || !MR_cur_generator_is_named(generator_name))
        {
            cmd->MR_trace_cmd = MR_CMD_GOTO;
            cmd->MR_trace_stop_event = n;
            /*
            ** We don't ever deallocate the memory allocated here,
            ** but this memory leak leaks only negligible amounts of memory.
            */
            cmd->MR_trace_stop_generator = strdup(generator_name);
            return STOP_INTERACTING;
        } else {
            /* XXX this message is misleading */
            fflush(MR_mdb_out);
            fprintf(MR_mdb_err, "The debugger cannot go to a past event.\n");
        }
#endif
    } else {
        MR_trace_usage_cur_cmd();
    }

    return KEEP_INTERACTING;
}

MR_Next
MR_trace_cmd_next(char **words, int word_count, MR_TraceCmdInfo *cmd,
    MR_EventInfo *event_info, MR_Code **jumpaddr)
{
    MR_Unsigned     depth;
    MR_Unsigned     stop_depth;
    MR_Unsigned     n;

    depth = event_info->MR_call_depth;
    cmd->MR_trace_strict = MR_TRUE;
    cmd->MR_trace_print_level = MR_default_print_level;
    MR_init_trace_check_integrity(cmd);
    if (! MR_trace_options_movement_cmd(cmd, &words, &word_count)) {
        ; /* the usage message has already been printed */
        return KEEP_INTERACTING;
    } else if (word_count == 2 && MR_trace_is_natural_number(words[1], &n)) {
        stop_depth = depth - n;
    } else if (word_count == 1) {
        stop_depth = depth;
    } else {
        MR_trace_usage_cur_cmd();
        return KEEP_INTERACTING;
    }

    if (depth == stop_depth && MR_port_is_final(event_info->MR_trace_port)) {
        MR_trace_do_noop();
    } else {
        cmd->MR_trace_cmd = MR_CMD_NEXT;
        cmd->MR_trace_stop_depth = stop_depth;
        return STOP_INTERACTING;
    }

    return KEEP_INTERACTING;
}

MR_Next
MR_trace_cmd_finish(char **words, int word_count, MR_TraceCmdInfo *cmd,
    MR_EventInfo *event_info, MR_Code **jumpaddr)
{
    MR_Unsigned depth;
    MR_Unsigned stop_depth;
    MR_Unsigned n;

    depth = event_info->MR_call_depth;
    cmd->MR_trace_strict = MR_TRUE;
    cmd->MR_trace_print_level = MR_default_print_level;
    MR_init_trace_check_integrity(cmd);
    if (! MR_trace_options_movement_cmd(cmd, &words, &word_count)) {
        ; /* the usage message has already been printed */
        return KEEP_INTERACTING;
    } else if (word_count == 2 && MR_trace_is_natural_number(words[1], &n)) {
        stop_depth = depth - n;
    } else if (word_count == 1) {
        stop_depth = depth;
    } else {
        MR_trace_usage_cur_cmd();
        return KEEP_INTERACTING;
    }

    if (depth == stop_depth && MR_port_is_final(event_info->MR_trace_port)) {
        MR_trace_do_noop();
    } else {
        cmd->MR_trace_cmd = MR_CMD_FINISH;
        cmd->MR_trace_stop_depth = stop_depth;
        return STOP_INTERACTING;
    }

    return KEEP_INTERACTING;
}

MR_Next
MR_trace_cmd_fail(char **words, int word_count, MR_TraceCmdInfo *cmd,
    MR_EventInfo *event_info, MR_Code **jumpaddr)
{
    MR_Determinism  detism;
    MR_Unsigned     depth;
    MR_Unsigned     stop_depth;
    MR_Unsigned     n;

    detism = event_info->MR_event_sll->MR_sll_entry->MR_sle_detism;
    depth = event_info->MR_call_depth;

    cmd->MR_trace_strict = MR_TRUE;
    cmd->MR_trace_print_level = MR_default_print_level;
    MR_init_trace_check_integrity(cmd);
    if (! MR_trace_options_movement_cmd(cmd, &words, &word_count)) {
        ; /* the usage message has already been printed */
        return KEEP_INTERACTING;
    } else if (word_count == 2 && MR_trace_is_natural_number(words[1], &n)) {
        stop_depth = depth - n;
    } else if (word_count == 1) {
        stop_depth = depth;
    } else {
        MR_trace_usage_cur_cmd();
        return KEEP_INTERACTING;
    }

    if (MR_DETISM_DET_STACK(detism)) {
        fflush(MR_mdb_out);
        fprintf(MR_mdb_err, "mdb: cannot continue until failure: "
            "selected procedure has determinism %s.\n",
            MR_detism_names[detism]);
        return KEEP_INTERACTING;
    }

    if (depth == stop_depth && event_info->MR_trace_port == MR_PORT_FAIL) {
        MR_trace_do_noop();
    } else if (depth == stop_depth &&
        event_info->MR_trace_port == MR_PORT_EXCEPTION)
    {
        fflush(MR_mdb_out);
        fprintf(MR_mdb_err, "mdb: cannot continue until failure: "
            "the call has raised an exception.\n");
    } else {
        cmd->MR_trace_cmd = MR_CMD_FAIL;
        cmd->MR_trace_stop_depth = stop_depth;
        return STOP_INTERACTING;
    }

    return KEEP_INTERACTING;
}

MR_Next
MR_trace_cmd_exception(char **words, int word_count, MR_TraceCmdInfo *cmd,
    MR_EventInfo *event_info, MR_Code **jumpaddr)
{
    cmd->MR_trace_strict = MR_TRUE;
    cmd->MR_trace_print_level = MR_default_print_level;
    MR_init_trace_check_integrity(cmd);
    if (! MR_trace_options_movement_cmd(cmd, &words, &word_count)) {
        ; /* the usage message has already been printed */
    } else if (word_count == 1) {
        if (event_info->MR_trace_port != MR_PORT_EXCEPTION) {
            cmd->MR_trace_cmd = MR_CMD_EXCP;
            return STOP_INTERACTING;
        } else {
            MR_trace_do_noop();
        }
    } else {
        MR_trace_usage_cur_cmd();
    }

    return KEEP_INTERACTING;
}

MR_Next
MR_trace_cmd_return(char **words, int word_count, MR_TraceCmdInfo *cmd,
    MR_EventInfo *event_info, MR_Code **jumpaddr)
{
    cmd->MR_trace_strict = MR_TRUE;
    cmd->MR_trace_print_level = MR_default_print_level;
    MR_init_trace_check_integrity(cmd);
    if (! MR_trace_options_movement_cmd(cmd, &words, &word_count)) {
        ; /* the usage message has already been printed */
    } else if (word_count == 1) {
        if (event_info->MR_trace_port == MR_PORT_EXIT) {
            cmd->MR_trace_cmd = MR_CMD_RETURN;
            return STOP_INTERACTING;
        } else {
            MR_trace_do_noop();
        }
    } else {
        MR_trace_usage_cur_cmd();
    }

    return KEEP_INTERACTING;
}

MR_Next
MR_trace_cmd_user(char **words, int word_count, MR_TraceCmdInfo *cmd,
    MR_EventInfo *event_info, MR_Code **jumpaddr)
{
    cmd->MR_trace_strict = MR_TRUE;
    cmd->MR_trace_print_level = MR_default_print_level;
    MR_init_trace_check_integrity(cmd);
    if (! MR_trace_options_movement_cmd(cmd, &words, &word_count)) {
        ; /* the usage message has already been printed */
    } else if (word_count == 1) {
        cmd->MR_trace_cmd = MR_CMD_USER;
        return STOP_INTERACTING;
    } else {
        MR_trace_usage_cur_cmd();
    }

    return KEEP_INTERACTING;
}

MR_Next
MR_trace_cmd_forward(char **words, int word_count, MR_TraceCmdInfo *cmd,
    MR_EventInfo *event_info, MR_Code **jumpaddr)
{
    cmd->MR_trace_strict = MR_TRUE;
    cmd->MR_trace_print_level = MR_default_print_level;
    MR_init_trace_check_integrity(cmd);
    if (! MR_trace_options_movement_cmd(cmd, &words, &word_count)) {
        ; /* the usage message has already been printed */
    } else if (word_count == 1) {
        MR_TracePort    port;

        port = event_info->MR_trace_port;
        if (port == MR_PORT_FAIL ||
            port == MR_PORT_REDO ||
            port == MR_PORT_EXCEPTION)
        {
            cmd->MR_trace_cmd = MR_CMD_RESUME_FORWARD;
            return STOP_INTERACTING;
        } else {
            MR_trace_do_noop();
        }
    } else {
        MR_trace_usage_cur_cmd();
    }

    return KEEP_INTERACTING;
}

MR_Next
MR_trace_cmd_mindepth(char **words, int word_count, MR_TraceCmdInfo *cmd,
    MR_EventInfo *event_info, MR_Code **jumpaddr)
{
    MR_Unsigned newdepth;

    cmd->MR_trace_strict = MR_TRUE;
    cmd->MR_trace_print_level = MR_default_print_level;
    MR_init_trace_check_integrity(cmd);
    if (! MR_trace_options_movement_cmd(cmd, &words, &word_count)) {
        ; /* the usage message has already been printed */
    } else if (word_count == 2 &&
        MR_trace_is_natural_number(words[1], &newdepth))
    {
        cmd->MR_trace_cmd = MR_CMD_MIN_DEPTH;
        cmd->MR_trace_stop_depth = newdepth;
        return STOP_INTERACTING;
    } else {
        MR_trace_usage_cur_cmd();
    }

    return KEEP_INTERACTING;
}

MR_Next
MR_trace_cmd_maxdepth(char **words, int word_count, MR_TraceCmdInfo *cmd,
    MR_EventInfo *event_info, MR_Code **jumpaddr)
{
    MR_Unsigned newdepth;

    cmd->MR_trace_strict = MR_TRUE;
    cmd->MR_trace_print_level = MR_default_print_level;
    MR_init_trace_check_integrity(cmd);
    if (! MR_trace_options_movement_cmd(cmd, &words, &word_count)) {
        ; /* the usage message has already been printed */
    } else if (word_count == 2 &&
        MR_trace_is_natural_number(words[1], &newdepth))
    {
        cmd->MR_trace_cmd = MR_CMD_MAX_DEPTH;
        cmd->MR_trace_stop_depth = newdepth;
        return STOP_INTERACTING;
    } else {
        MR_trace_usage_cur_cmd();
    }

    return KEEP_INTERACTING;
}

MR_Next
MR_trace_cmd_continue(char **words, int word_count, MR_TraceCmdInfo *cmd,
    MR_EventInfo *event_info, MR_Code **jumpaddr)
{
    cmd->MR_trace_strict = MR_FALSE;
    cmd->MR_trace_print_level = (MR_TraceCmdType) -1;
    MR_init_trace_check_integrity(cmd);
    if (! MR_trace_options_movement_cmd(cmd, &words, &word_count)) {
        ; /* the usage message has already been printed */
    } else if (word_count == 1) {
        cmd->MR_trace_cmd = MR_CMD_TO_END;
        if (cmd->MR_trace_print_level == (MR_TraceCmdType) -1) {
            /*
            ** The user did not specify the print level;
            ** select the intelligent default.
            */
            if (cmd->MR_trace_strict) {
                cmd->MR_trace_print_level = MR_PRINT_LEVEL_NONE;
            } else {
                cmd->MR_trace_print_level = MR_PRINT_LEVEL_SOME;
            }
        }
        return STOP_INTERACTING;
    } else {
        MR_trace_usage_cur_cmd();
    }

    return KEEP_INTERACTING;
}

/****************************************************************************/

const char *const    MR_trace_movement_cmd_args[] =
    { "-N", "-S", "-a", "-i", "-n", "-s",
    "--none", "--some", "--all", "--integrity",
    "--strict", "--no-strict", NULL };

/****************************************************************************/

static struct MR_option MR_trace_movement_cmd_opts[] =
{
    { "all",        MR_no_argument, NULL,   'a' },
    { "none",       MR_no_argument, NULL,   'n' },
    { "some",       MR_no_argument, NULL,   's' },
    { "nostrict",   MR_no_argument, NULL,   'N' },
    { "strict",     MR_no_argument, NULL,   'S' },
#ifdef  MR_TRACE_CHECK_INTEGRITY
    { "integrity",  MR_no_argument, NULL,   'i' },
#endif
    { NULL,         MR_no_argument, NULL,   0 }
};

static MR_bool
MR_trace_options_movement_cmd(MR_TraceCmdInfo *cmd,
    char ***words, int *word_count)
{
    int c;

#ifdef  MR_TRACE_CHECK_INTEGRITY
  #define   MR_TRACE_MOVEMENT_OPTS  "NSains"
#else
  #define   MR_TRACE_MOVEMENT_OPTS  "NSans"
#endif

    MR_optind = 0;
    while ((c = MR_getopt_long(*word_count, *words, MR_TRACE_MOVEMENT_OPTS,
        MR_trace_movement_cmd_opts, NULL)) != EOF)
    {
        switch (c) {

            case 'N':
                cmd->MR_trace_strict = MR_FALSE;
                break;

            case 'S':
                cmd->MR_trace_strict = MR_TRUE;
                break;

            case 'a':
                cmd->MR_trace_print_level = MR_PRINT_LEVEL_ALL;
                break;

            case 'n':
                cmd->MR_trace_print_level = MR_PRINT_LEVEL_NONE;
                break;

            case 's':
                cmd->MR_trace_print_level = MR_PRINT_LEVEL_SOME;
                break;

#ifdef  MR_TRACE_CHECK_INTEGRITY
            case 'i':
                cmd->MR_trace_check_integrity = MR_TRUE;
                break;
#endif

            default:
                MR_trace_usage_cur_cmd();
                return MR_FALSE;
        }
    }

    *words = *words + MR_optind - 1;
    *word_count = *word_count - MR_optind + 1;
    return MR_TRUE;
}
