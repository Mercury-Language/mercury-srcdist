/*
** Automatically generated from `intermod_status.m'
** by the Mercury compiler,
** version rotd-2025-11-06
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module transform_hlds.intermod_status.
// :- implementation.

/*
INIT mercury__transform_hlds__intermod_status__init
ENDINIT
*/

#include "transform_hlds.intermod_status.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.status.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"












MR_Word MR_CALL 
transform_hlds__intermod_status__pred_status_to_write_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word ToWrite_4;
  MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

  switch (MR_tag((MR_Word) OldStatus_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OldStatus_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 4:
          ToWrite_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 5:
          ToWrite_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 6:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 7:
          ToWrite_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 8:
          ToWrite_4 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Status_6 = ((MR_Word) ((MR_hl_field(1, OldStatus_3, 0))));
        MR_Word Var_7;

        Var_7 = hlds__status__old_status_is_exported_1_f_0(Status_6);
        ToWrite_4 = mercury__bool__not_1_f_0(Var_7);
      }
      break;
    case (MR_Integer) 2:
      ToWrite_4 = (MR_Integer) 0;
      break;
  }
  return ToWrite_4;
}

MR_Word MR_CALL 
transform_hlds__intermod_status__instance_status_to_write_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word ToWrite_4;
  MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

  switch (MR_tag((MR_Word) OldStatus_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OldStatus_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 4:
          ToWrite_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 5:
          ToWrite_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 6:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 7:
          ToWrite_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 8:
          ToWrite_4 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Status_6 = ((MR_Word) ((MR_hl_field(1, OldStatus_3, 0))));
        MR_Word Var_7;

        Var_7 = hlds__status__old_status_is_exported_1_f_0(Status_6);
        ToWrite_4 = mercury__bool__not_1_f_0(Var_7);
      }
      break;
    case (MR_Integer) 2:
      ToWrite_4 = (MR_Integer) 0;
      break;
  }
  return ToWrite_4;
}

MR_Word MR_CALL 
transform_hlds__intermod_status__typeclass_status_to_write_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word ToWrite_4;
  MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

  switch (MR_tag((MR_Word) OldStatus_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OldStatus_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 4:
          ToWrite_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 5:
          ToWrite_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 6:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 7:
          ToWrite_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 8:
          ToWrite_4 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Status_6 = ((MR_Word) ((MR_hl_field(1, OldStatus_3, 0))));
        MR_Word Var_7;

        Var_7 = hlds__status__old_status_is_exported_1_f_0(Status_6);
        ToWrite_4 = mercury__bool__not_1_f_0(Var_7);
      }
      break;
    case (MR_Integer) 2:
      ToWrite_4 = (MR_Integer) 0;
      break;
  }
  return ToWrite_4;
}

MR_Word MR_CALL 
transform_hlds__intermod_status__mode_status_to_write_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word ToWrite_4;
  MR_Word InstModeStatus_3 = (MR_Word) (HeadVar__1_1);

  if (((MR_tag((MR_Word) InstModeStatus_3)) == (MR_Integer) 1))
    ToWrite_4 = (MR_Integer) 0;
  else
  {
    MR_Word InstModeExport_5 = ((MR_Unsigned) ((MR_hl_field(0, InstModeStatus_3, 0))) & (MR_Integer) 3);

    switch (InstModeExport_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        ToWrite_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        ToWrite_4 = (MR_Integer) 1;
        break;
    }
  }
  return ToWrite_4;
}

MR_Word MR_CALL 
transform_hlds__intermod_status__inst_status_to_write_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word ToWrite_4;
  MR_Word InstModeStatus_3 = (MR_Word) (HeadVar__1_1);

  if (((MR_tag((MR_Word) InstModeStatus_3)) == (MR_Integer) 1))
    ToWrite_4 = (MR_Integer) 0;
  else
  {
    MR_Word InstModeExport_5 = ((MR_Unsigned) ((MR_hl_field(0, InstModeStatus_3, 0))) & (MR_Integer) 3);

    switch (InstModeExport_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        ToWrite_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        ToWrite_4 = (MR_Integer) 1;
        break;
    }
  }
  return ToWrite_4;
}

MR_Word MR_CALL 
transform_hlds__intermod_status__type_status_to_write_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word ToWrite_4;
  MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

  switch (MR_tag((MR_Word) OldStatus_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OldStatus_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 4:
          ToWrite_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 5:
          ToWrite_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 6:
          ToWrite_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 7:
          ToWrite_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 8:
          ToWrite_4 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Status_6 = ((MR_Word) ((MR_hl_field(1, OldStatus_3, 0))));
        MR_Word Var_7;

        Var_7 = hlds__status__old_status_is_exported_1_f_0(Status_6);
        ToWrite_4 = mercury__bool__not_1_f_0(Var_7);
      }
      break;
    case (MR_Integer) 2:
      ToWrite_4 = (MR_Integer) 0;
      break;
  }
  return ToWrite_4;
}

void mercury__transform_hlds__intermod_status__init(void)
{
}

void mercury__transform_hlds__intermod_status__init_type_tables(void)
{
}

void mercury__transform_hlds__intermod_status__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__intermod_status__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.intermod_status.
