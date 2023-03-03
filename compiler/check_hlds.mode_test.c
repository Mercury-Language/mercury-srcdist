/*
** Automatically generated from `mode_test.m'
** by the Mercury compiler,
** version rotd-2023-03-03
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


// :- module check_hlds.mode_test.
// :- implementation.

/*
INIT mercury__check_hlds__mode_test__init
ENDINIT
*/

#include "check_hlds.mode_test.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"










#include "array.mh"



MR_bool MR_CALL 
check_hlds__mode_test__init_final_insts_is_unused_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InitialInst_5,
  MR_Word FinalInst_6)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_4, InitialInst_5);
  if (succeeded)
    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_4, FinalInst_6);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__mode_test__mode_is_unused_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Mode_4)
{
  MR_bool succeeded;
  MR_Word InitialInst_5;
  MR_Word FinalInst_6;

  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_3, Mode_4, &InitialInst_5, &FinalInst_6);
  succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, InitialInst_5);
  if (succeeded)
    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, FinalInst_6);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__mode_test__init_final_insts_is_fully_output_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InitialInst_5,
  MR_Word FinalInst_6)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_4, InitialInst_5);
  if (succeeded)
    succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_4, FinalInst_6);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__mode_test__mode_is_fully_output_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Mode_4)
{
  MR_bool succeeded;
  MR_Word InitialInst_5;
  MR_Word FinalInst_6;

  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_3, Mode_4, &InitialInst_5, &FinalInst_6);
  succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, InitialInst_5);
  if (succeeded)
    succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_3, FinalInst_6);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__mode_test__init_final_insts_is_output_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InitialInst_5,
  MR_Word FinalInst_6)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_4, InitialInst_5);
  if (succeeded)
    succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_4, FinalInst_6);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__mode_test__mode_is_output_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Mode_4)
{
  MR_bool succeeded;
  MR_Word InitialInst_5;
  MR_Word FinalInst_6;

  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_3, Mode_4, &InitialInst_5, &FinalInst_6);
  succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_3, InitialInst_5);
  if (succeeded)
    succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_3, FinalInst_6);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__mode_test__init_inst_is_fully_input_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word InitialInst_4)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_3, InitialInst_4);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__mode_test__mode_is_fully_input_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Mode_4)
{
  MR_bool succeeded;
  MR_Word InitialInst_5;
  MR_Word _FinalInst_6;

  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_3, Mode_4, &InitialInst_5, &_FinalInst_6);
  succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_3, InitialInst_5);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__mode_test__init_inst_is_input_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word InitialInst_4)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_3, InitialInst_4);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__mode_test__mode_is_input_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Mode_4)
{
  MR_bool succeeded;
  MR_Word InitialInst_5;
  MR_Word _FinalInst_6;

  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_3, Mode_4, &InitialInst_5, &_FinalInst_6);
  succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_3, InitialInst_5);
  return succeeded;
}

void mercury__check_hlds__mode_test__init(void)
{
}

void mercury__check_hlds__mode_test__init_type_tables(void)
{
}

void mercury__check_hlds__mode_test__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__mode_test__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.mode_test.
