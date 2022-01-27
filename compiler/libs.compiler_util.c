/*
** Automatically generated from `compiler_util.m'
** by the Mercury compiler,
** version rotd-2015-11-30
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module libs.compiler_util. */
/* :- implementation. */

/*
INIT mercury__libs__compiler_util__init
ENDINIT
*/

#include "libs.compiler_util.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"










#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 49 "compiler_util.m"
void MR_CALL 
libs__compiler_util__report_warning_to_stream_5_p_0(
#line 49 "compiler_util.m"
  MR_Word libs__compiler_util__Globals_6,
#line 49 "compiler_util.m"
  MR_Word libs__compiler_util__Stream_7,
#line 49 "compiler_util.m"
  MR_String libs__compiler_util__Message_8)
#line 49 "compiler_util.m"
{
#line 89 "compiler_util.m"
  {
#line 89 "compiler_util.m"
    MR_bool libs__compiler_util__succeeded;
#line 89 "compiler_util.m"
    MR_Word libs__compiler_util__HaltAtWarn_18;

#line 77 "compiler_util.m"
    {
#line 77 "compiler_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compiler_util__Globals_6, (MR_Integer) 2, &libs__compiler_util__HaltAtWarn_18);
    }
#line 81 "compiler_util.m"
#line 81 "compiler_util.m"
    switch (libs__compiler_util__HaltAtWarn_18) {
#line 81 "compiler_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 81 "compiler_util.m"
      case (MR_Integer) 0:
#line 82 "compiler_util.m"
        {
#line 82 "compiler_util.m"
        }
#line 81 "compiler_util.m"
        break;
#line 81 "compiler_util.m"
      case (MR_Integer) 1:
#line 79 "compiler_util.m"
        {
#line 80 "compiler_util.m"
          {
#line 80 "compiler_util.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
#line 79 "compiler_util.m"
        }
#line 81 "compiler_util.m"
        break;
#line 81 "compiler_util.m"
    }
#line 91 "compiler_util.m"
    {
#line 91 "compiler_util.m"
      mercury__io__write_string_4_p_0(libs__compiler_util__Stream_7, libs__compiler_util__Message_8);
    }
#line 89 "compiler_util.m"
  }
#line 49 "compiler_util.m"
}

#line 44 "compiler_util.m"
void MR_CALL 
libs__compiler_util__report_warning_4_p_0(
#line 44 "compiler_util.m"
  MR_Word libs__compiler_util__Globals_5,
#line 44 "compiler_util.m"
  MR_String libs__compiler_util__Message_6)
#line 44 "compiler_util.m"
{
#line 85 "compiler_util.m"
  {
#line 85 "compiler_util.m"
    MR_bool libs__compiler_util__succeeded;
#line 85 "compiler_util.m"
    MR_Word libs__compiler_util__HaltAtWarn_16;

#line 77 "compiler_util.m"
    {
#line 77 "compiler_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compiler_util__Globals_5, (MR_Integer) 2, &libs__compiler_util__HaltAtWarn_16);
    }
#line 81 "compiler_util.m"
#line 81 "compiler_util.m"
    switch (libs__compiler_util__HaltAtWarn_16) {
#line 81 "compiler_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 81 "compiler_util.m"
      case (MR_Integer) 0:
#line 82 "compiler_util.m"
        {
#line 82 "compiler_util.m"
        }
#line 81 "compiler_util.m"
        break;
#line 81 "compiler_util.m"
      case (MR_Integer) 1:
#line 79 "compiler_util.m"
        {
#line 80 "compiler_util.m"
          {
#line 80 "compiler_util.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
#line 79 "compiler_util.m"
        }
#line 81 "compiler_util.m"
        break;
#line 81 "compiler_util.m"
    }
#line 87 "compiler_util.m"
    {
#line 87 "compiler_util.m"
      mercury__io__write_string_3_p_0(libs__compiler_util__Message_6);
    }
#line 85 "compiler_util.m"
  }
#line 44 "compiler_util.m"
}

#line 39 "compiler_util.m"
void MR_CALL 
libs__compiler_util__record_warning_3_p_0(
#line 39 "compiler_util.m"
  MR_Word libs__compiler_util__Globals_4)
#line 39 "compiler_util.m"
{
#line 76 "compiler_util.m"
  {
#line 76 "compiler_util.m"
    MR_bool libs__compiler_util__succeeded;
#line 76 "compiler_util.m"
    MR_Word libs__compiler_util__HaltAtWarn_6;

#line 77 "compiler_util.m"
    {
#line 77 "compiler_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compiler_util__Globals_4, (MR_Integer) 2, &libs__compiler_util__HaltAtWarn_6);
    }
#line 81 "compiler_util.m"
#line 81 "compiler_util.m"
    switch (libs__compiler_util__HaltAtWarn_6) {
#line 81 "compiler_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 81 "compiler_util.m"
      case (MR_Integer) 0:
#line 82 "compiler_util.m"
        {
#line 82 "compiler_util.m"
        }
#line 81 "compiler_util.m"
        break;
#line 81 "compiler_util.m"
      case (MR_Integer) 1:
#line 79 "compiler_util.m"
        {
#line 80 "compiler_util.m"
          {
#line 80 "compiler_util.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
#line 79 "compiler_util.m"
        }
#line 81 "compiler_util.m"
        break;
#line 81 "compiler_util.m"
    }
#line 76 "compiler_util.m"
  }
#line 39 "compiler_util.m"
}

#line 31 "compiler_util.m"
void MR_CALL 
libs__compiler_util__add_warning_4_p_0(
#line 31 "compiler_util.m"
  MR_Word libs__compiler_util__Phase_5,
#line 31 "compiler_util.m"
  MR_Word libs__compiler_util__Pieces_6,
#line 31 "compiler_util.m"
  MR_Word libs__compiler_util__STATE_VARIABLE_Specs_0_10,
#line 31 "compiler_util.m"
  MR_Word * libs__compiler_util__STATE_VARIABLE_Specs_11)
#line 31 "compiler_util.m"
{
#line 69 "compiler_util.m"
  {
#line 69 "compiler_util.m"
    MR_bool libs__compiler_util__succeeded;
#line 69 "compiler_util.m"
    MR_Word libs__compiler_util__Msg_8;
#line 69 "compiler_util.m"
    MR_Word libs__compiler_util__Spec_9;
#line 69 "compiler_util.m"
    MR_Word libs__compiler_util__V_15_15;
#line 69 "compiler_util.m"
    MR_Word libs__compiler_util__V_16_16;
#line 69 "compiler_util.m"
    MR_Word libs__compiler_util__V_19_19;

#line 70 "compiler_util.m"
    {
#line 70 "compiler_util.m"
      libs__compiler_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 70 "compiler_util.m"
      MR_hl_field(MR_mktag(0), libs__compiler_util__V_16_16, 0) = ((MR_Box) (libs__compiler_util__Pieces_6));
#line 70 "compiler_util.m"
    }
#line 70 "compiler_util.m"
    {
#line 70 "compiler_util.m"
      libs__compiler_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 70 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__V_15_15, 0) = ((MR_Box) (libs__compiler_util__V_16_16));
#line 70 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 70 "compiler_util.m"
    }
#line 70 "compiler_util.m"
    {
#line 70 "compiler_util.m"
      libs__compiler_util__Msg_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 70 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__Msg_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 70 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__Msg_8, 1) = ((MR_Box) ((MR_Integer) 1));
#line 70 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__Msg_8, 2) = ((MR_Box) ((MR_Integer) 0));
#line 70 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__Msg_8, 3) = ((MR_Box) (libs__compiler_util__V_15_15));
#line 70 "compiler_util.m"
    }
#line 71 "compiler_util.m"
    {
#line 71 "compiler_util.m"
      libs__compiler_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 71 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__V_19_19, 0) = ((MR_Box) (libs__compiler_util__Msg_8));
#line 71 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 71 "compiler_util.m"
    }
#line 71 "compiler_util.m"
    {
#line 71 "compiler_util.m"
      libs__compiler_util__Spec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 71 "compiler_util.m"
      MR_hl_field(MR_mktag(0), libs__compiler_util__Spec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 71 "compiler_util.m"
      MR_hl_field(MR_mktag(0), libs__compiler_util__Spec_9, 1) = ((MR_Box) (libs__compiler_util__Phase_5));
#line 71 "compiler_util.m"
      MR_hl_field(MR_mktag(0), libs__compiler_util__Spec_9, 2) = ((MR_Box) (libs__compiler_util__V_19_19));
#line 71 "compiler_util.m"
    }
#line 72 "compiler_util.m"
    {
#line 72 "compiler_util.m"
      MR_Word base;
#line 72 "compiler_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 72 "compiler_util.m"
      *libs__compiler_util__STATE_VARIABLE_Specs_11 = base;
#line 72 "compiler_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__compiler_util__Spec_9));
#line 72 "compiler_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__compiler_util__STATE_VARIABLE_Specs_0_10));
#line 72 "compiler_util.m"
    }
#line 69 "compiler_util.m"
  }
#line 31 "compiler_util.m"
}

#line 28 "compiler_util.m"
void MR_CALL 
libs__compiler_util__add_error_4_p_0(
#line 28 "compiler_util.m"
  MR_Word libs__compiler_util__Phase_5,
#line 28 "compiler_util.m"
  MR_Word libs__compiler_util__Pieces_6,
#line 28 "compiler_util.m"
  MR_Word libs__compiler_util__STATE_VARIABLE_Specs_0_10,
#line 28 "compiler_util.m"
  MR_Word * libs__compiler_util__STATE_VARIABLE_Specs_11)
#line 28 "compiler_util.m"
{
#line 64 "compiler_util.m"
  {
#line 64 "compiler_util.m"
    MR_bool libs__compiler_util__succeeded;
#line 64 "compiler_util.m"
    MR_Word libs__compiler_util__Msg_8;
#line 64 "compiler_util.m"
    MR_Word libs__compiler_util__Spec_9;
#line 64 "compiler_util.m"
    MR_Word libs__compiler_util__V_15_15;
#line 64 "compiler_util.m"
    MR_Word libs__compiler_util__V_16_16;
#line 64 "compiler_util.m"
    MR_Word libs__compiler_util__V_19_19;

#line 65 "compiler_util.m"
    {
#line 65 "compiler_util.m"
      libs__compiler_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 65 "compiler_util.m"
      MR_hl_field(MR_mktag(0), libs__compiler_util__V_16_16, 0) = ((MR_Box) (libs__compiler_util__Pieces_6));
#line 65 "compiler_util.m"
    }
#line 65 "compiler_util.m"
    {
#line 65 "compiler_util.m"
      libs__compiler_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 65 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__V_15_15, 0) = ((MR_Box) (libs__compiler_util__V_16_16));
#line 65 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 65 "compiler_util.m"
    }
#line 65 "compiler_util.m"
    {
#line 65 "compiler_util.m"
      libs__compiler_util__Msg_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 65 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__Msg_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 65 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__Msg_8, 1) = ((MR_Box) ((MR_Integer) 1));
#line 65 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__Msg_8, 2) = ((MR_Box) ((MR_Integer) 0));
#line 65 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__Msg_8, 3) = ((MR_Box) (libs__compiler_util__V_15_15));
#line 65 "compiler_util.m"
    }
#line 66 "compiler_util.m"
    {
#line 66 "compiler_util.m"
      libs__compiler_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 66 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__V_19_19, 0) = ((MR_Box) (libs__compiler_util__Msg_8));
#line 66 "compiler_util.m"
      MR_hl_field(MR_mktag(1), libs__compiler_util__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 66 "compiler_util.m"
    }
#line 66 "compiler_util.m"
    {
#line 66 "compiler_util.m"
      libs__compiler_util__Spec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 66 "compiler_util.m"
      MR_hl_field(MR_mktag(0), libs__compiler_util__Spec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 66 "compiler_util.m"
      MR_hl_field(MR_mktag(0), libs__compiler_util__Spec_9, 1) = ((MR_Box) (libs__compiler_util__Phase_5));
#line 66 "compiler_util.m"
      MR_hl_field(MR_mktag(0), libs__compiler_util__Spec_9, 2) = ((MR_Box) (libs__compiler_util__V_19_19));
#line 66 "compiler_util.m"
    }
#line 67 "compiler_util.m"
    {
#line 67 "compiler_util.m"
      MR_Word base;
#line 67 "compiler_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 67 "compiler_util.m"
      *libs__compiler_util__STATE_VARIABLE_Specs_11 = base;
#line 67 "compiler_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__compiler_util__Spec_9));
#line 67 "compiler_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__compiler_util__STATE_VARIABLE_Specs_0_10));
#line 67 "compiler_util.m"
    }
#line 64 "compiler_util.m"
  }
#line 28 "compiler_util.m"
}

void mercury__libs__compiler_util__init(void)
{
}

void mercury__libs__compiler_util__init_type_tables(void)
{
}

void mercury__libs__compiler_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.compiler_util. */
