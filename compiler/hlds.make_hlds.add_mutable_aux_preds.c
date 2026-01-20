/*
** Automatically generated from `add_mutable_aux_preds.m'
** by the Mercury compiler,
** version rotd-2026-01-20
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


// :- module hlds.make_hlds.add_mutable_aux_preds.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_mutable_aux_preds__init
ENDINIT
*/

#include "hlds.make_hlds.add_mutable_aux_preds.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.error_msg_inst.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static MR_Box MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__implement_mutables_sec_loop_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__implement_mutables_sec_loop_20_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredDeclCord_0_5,
  MR_Word * STATE_VARIABLE_PredDeclCord_6,
  MR_Word STATE_VARIABLE_ClauseInfoCord_0_7,
  MR_Word * STATE_VARIABLE_ClauseInfoCord_8,
  MR_Word STATE_VARIABLE_ForeignProcCord_0_9,
  MR_Word * STATE_VARIABLE_ForeignProcCord_10,
  MR_Word STATE_VARIABLE_ForeignDeclCodeCord_0_11,
  MR_Word * STATE_VARIABLE_ForeignDeclCodeCord_12,
  MR_Word STATE_VARIABLE_ForeignBodyCodeCord_0_13,
  MR_Word * STATE_VARIABLE_ForeignBodyCodeCord_14,
  MR_Word STATE_VARIABLE_FPEInfoCord_0_15,
  MR_Word * STATE_VARIABLE_FPEInfoCord_16,
  MR_Word STATE_VARIABLE_PredTargetNames_0_17,
  MR_Word * STATE_VARIABLE_PredTargetNames_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_101_109_101_110_116_95_109_117_116_97_98_108_101_115_95_108_111_111_112_95_95_91_50_93_95_48_22_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DefinedMutables_0_5,
  MR_Word * STATE_VARIABLE_DefinedMutables_6,
  MR_Word STATE_VARIABLE_PredDeclCord_0_7,
  MR_Word * STATE_VARIABLE_PredDeclCord_8,
  MR_Word STATE_VARIABLE_ClauseInfoCord_0_9,
  MR_Word * STATE_VARIABLE_ClauseInfoCord_10,
  MR_Word STATE_VARIABLE_ForeignProcCord_0_11,
  MR_Word * STATE_VARIABLE_ForeignProcCord_12,
  MR_Word STATE_VARIABLE_ForeignDeclCodeCord_0_13,
  MR_Word * STATE_VARIABLE_ForeignDeclCodeCord_14,
  MR_Word STATE_VARIABLE_ForeignBodyCodeCord_0_15,
  MR_Word * STATE_VARIABLE_ForeignBodyCodeCord_16,
  MR_Word STATE_VARIABLE_FPEInfoCord_0_17,
  MR_Word * STATE_VARIABLE_FPEInfoCord_18,
  MR_Word STATE_VARIABLE_PredTargetNames_0_19,
  MR_Word * STATE_VARIABLE_PredTargetNames_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ModuleParams_7,
  MR_Word ItemMutable_8,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ModuleParams_10,
  MR_Word Context_11,
  MR_Word InstVarSet_12,
  MR_Word ParentInsts_13,
  MR_Word Inst_14,
  MR_Word STATE_VARIABLE_Specs_0_68,
  MR_Word * STATE_VARIABLE_Specs_69);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_bound_functors_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Context_10,
  MR_Word InstVarSet_11,
  MR_Word ParentInsts_12,
  MR_Word Inst_13,
  MR_Word Uniq_14,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Context_10,
  MR_Word InstVarSet_11,
  MR_Word ParentInsts_12,
  MR_Word Inst_13,
  MR_Word ProblemPieces_14,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);


static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[61][2];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[1][7];




static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[61][2] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this definition of the mutable"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is a"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The first definition is here."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "trailed"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in non-trailing grade."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is constrained, and thus"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not appear"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not appear in"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not defined."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has uniqueness"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the inst"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the expansion of the named inst"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "clobbered"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "mostly_clobbered"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "mostly_unique"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "unique"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[59])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__implement_mutables_if_local_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word UndefInstCtors_15,
  MR_Word SecList_16,
  MR_Word * PredDecls_17,
  MR_Word * ClauseInfos_18,
  MR_Word * ForeignProcs_19,
  MR_Word * ForeignDeclCodes_20,
  MR_Word * ForeignBodyCodes_21,
  MR_Word * FPEInfoCord_22,
  MR_Word STATE_VARIABLE_PredTargetNames_0_30,
  MR_Word * STATE_VARIABLE_PredTargetNames_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  MR_Word PredDeclCord_25;
  MR_Word ClauseInfoCord_26;
  MR_Word ForeignProcCord_27;
  MR_Word ForeignDeclCodeCord_28;
  MR_Word ForeignBodyCodeCord_29;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;

  Var_34 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
  Var_35 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0]));
  Var_36 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1]));
  Var_37 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]));
  Var_38 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0));
  Var_39 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0));
  Var_40 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_fproc_export_info_0));
  hlds__make_hlds__add_mutable_aux_preds__implement_mutables_sec_loop_20_p_0(ModuleInfo_14, UndefInstCtors_15, SecList_16, Var_34, Var_35, &PredDeclCord_25, Var_36, &ClauseInfoCord_26, Var_37, &ForeignProcCord_27, Var_38, &ForeignDeclCodeCord_28, Var_39, &ForeignBodyCodeCord_29, Var_40, FPEInfoCord_22, STATE_VARIABLE_PredTargetNames_0_30, STATE_VARIABLE_PredTargetNames_31, STATE_VARIABLE_Specs_0_32, STATE_VARIABLE_Specs_33);
  *PredDecls_17 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0]), PredDeclCord_25);
  *ClauseInfos_18 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1]), ClauseInfoCord_26);
  *ForeignProcs_19 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]), ForeignProcCord_27);
  *ForeignDeclCodes_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), ForeignDeclCodeCord_28);
  *ForeignBodyCodes_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), ForeignBodyCodeCord_29);
}

static MR_Box MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__implement_mutables_sec_loop_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = backend_libs__foreign__exported_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_3;
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__implement_mutables_sec_loop_20_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredDeclCord_0_5,
  MR_Word * STATE_VARIABLE_PredDeclCord_6,
  MR_Word STATE_VARIABLE_ClauseInfoCord_0_7,
  MR_Word * STATE_VARIABLE_ClauseInfoCord_8,
  MR_Word STATE_VARIABLE_ForeignProcCord_0_9,
  MR_Word * STATE_VARIABLE_ForeignProcCord_10,
  MR_Word STATE_VARIABLE_ForeignDeclCodeCord_0_11,
  MR_Word * STATE_VARIABLE_ForeignDeclCodeCord_12,
  MR_Word STATE_VARIABLE_ForeignBodyCodeCord_0_13,
  MR_Word * STATE_VARIABLE_ForeignBodyCodeCord_14,
  MR_Word STATE_VARIABLE_FPEInfoCord_0_15,
  MR_Word * STATE_VARIABLE_FPEInfoCord_16,
  MR_Word STATE_VARIABLE_PredTargetNames_0_17,
  MR_Word * STATE_VARIABLE_PredTargetNames_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      *STATE_VARIABLE_PredTargetNames_18 = STATE_VARIABLE_PredTargetNames_0_17;
      *STATE_VARIABLE_FPEInfoCord_16 = STATE_VARIABLE_FPEInfoCord_0_15;
      *STATE_VARIABLE_ForeignBodyCodeCord_14 = STATE_VARIABLE_ForeignBodyCodeCord_0_13;
      *STATE_VARIABLE_ForeignDeclCodeCord_12 = STATE_VARIABLE_ForeignDeclCodeCord_0_11;
      *STATE_VARIABLE_ForeignProcCord_10 = STATE_VARIABLE_ForeignProcCord_0_9;
      *STATE_VARIABLE_ClauseInfoCord_8 = STATE_VARIABLE_ClauseInfoCord_0_7;
      *STATE_VARIABLE_PredDeclCord_6 = STATE_VARIABLE_PredDeclCord_0_5;
    }
    else
    {
      MR_Word SecSubList_50 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word SecSubLists_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word SectionInfo_61 = ((MR_Word) ((MR_hl_field(0, SecSubList_50, 0))));
      MR_Word ItemMutables_62 = ((MR_Word) ((MR_hl_field(0, SecSubList_50, 1))));
      MR_Word ItemMercuryStatus_63 = ((MR_Word) ((MR_hl_field(0, SectionInfo_61, 0))));
      MR_Word STATE_VARIABLE_DefinedMutables_1_94;
      MR_Word STATE_VARIABLE_ForeignDeclCodeCord_1_98;
      MR_Word STATE_VARIABLE_ForeignBodyCodeCord_1_99;
      MR_Word STATE_VARIABLE_FPEInfoCord_1_100;
      MR_Word STATE_VARIABLE_PredTargetNames_1_101;
      MR_Word STATE_VARIABLE_Specs_1_102;
      MR_Word STATE_VARIABLE_PredDeclCord_1_104;
      MR_Word STATE_VARIABLE_ClauseInfoCord_1_106;
      MR_Word STATE_VARIABLE_ForeignProcCord_1_108;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PredDeclCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ClauseInfoCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ForeignProcCord_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ForeignDeclCodeCord_0_11;
      MR_Word next_value_of_STATE_VARIABLE_ForeignBodyCodeCord_0_13;
      MR_Word next_value_of_STATE_VARIABLE_FPEInfoCord_0_15;
      MR_Word next_value_of_STATE_VARIABLE_PredTargetNames_0_17;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_19;

      if (((MR_tag((MR_Word) ItemMercuryStatus_63)) == (MR_Integer) 1))
      {
        STATE_VARIABLE_DefinedMutables_1_94 = HeadVar__4_4;
        STATE_VARIABLE_PredDeclCord_1_104 = STATE_VARIABLE_PredDeclCord_0_5;
        STATE_VARIABLE_ClauseInfoCord_1_106 = STATE_VARIABLE_ClauseInfoCord_0_7;
        STATE_VARIABLE_ForeignProcCord_1_108 = STATE_VARIABLE_ForeignProcCord_0_9;
        STATE_VARIABLE_ForeignDeclCodeCord_1_98 = STATE_VARIABLE_ForeignDeclCodeCord_0_11;
        STATE_VARIABLE_ForeignBodyCodeCord_1_99 = STATE_VARIABLE_ForeignBodyCodeCord_0_13;
        STATE_VARIABLE_FPEInfoCord_1_100 = STATE_VARIABLE_FPEInfoCord_0_15;
        STATE_VARIABLE_PredTargetNames_1_101 = STATE_VARIABLE_PredTargetNames_0_17;
        STATE_VARIABLE_Specs_1_102 = STATE_VARIABLE_Specs_0_19;
      }
      else
      {
        MR_Word Globals_66;
        MR_Word ModuleName_67;
        MR_Word TypeNameFunc_68;
        MR_Word ModuleParams_69;
        MR_Word PredDeclSubCord_70;
        MR_Word ClauseInfoSubCord_71;
        MR_Word ForeignProcSubCord_72;
        MR_Word PredDeclSubList_73;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_103;

        hlds__hlds_module__module_info_get_globals_2_p_0(HeadVar__1_1, &Globals_66);
        hlds__hlds_module__module_info_get_name_2_p_0(HeadVar__1_1, &ModuleName_67);
        {
          TypeNameFunc_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeNameFunc_68, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[0]));
          MR_hl_field(0, TypeNameFunc_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__implement_mutables_sec_loop_20_p_0_1));
          MR_hl_field(0, TypeNameFunc_68, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, TypeNameFunc_68, 3) = ((MR_Box) (HeadVar__1_1));
        }
        {
          ModuleParams_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ModuleParams_69, 0) = ((MR_Box) (Globals_66));
          MR_hl_field(0, ModuleParams_69, 1) = ((MR_Box) (ModuleName_67));
          MR_hl_field(0, ModuleParams_69, 2) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(0, ModuleParams_69, 3) = ((MR_Box) (TypeNameFunc_68));
        }
        Var_95 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0));
        Var_96 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0));
        Var_97 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0));
        hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_101_109_101_110_116_95_109_117_116_97_98_108_101_115_95_108_111_111_112_95_95_91_50_93_95_48_22_p_0(HeadVar__1_1, ModuleParams_69, ItemMutables_62, HeadVar__4_4, &STATE_VARIABLE_DefinedMutables_1_94, Var_95, &PredDeclSubCord_70, Var_96, &ClauseInfoSubCord_71, Var_97, &ForeignProcSubCord_72, STATE_VARIABLE_ForeignDeclCodeCord_0_11, &STATE_VARIABLE_ForeignDeclCodeCord_1_98, STATE_VARIABLE_ForeignBodyCodeCord_0_13, &STATE_VARIABLE_ForeignBodyCodeCord_1_99, STATE_VARIABLE_FPEInfoCord_0_15, &STATE_VARIABLE_FPEInfoCord_1_100, STATE_VARIABLE_PredTargetNames_0_17, &STATE_VARIABLE_PredTargetNames_1_101, STATE_VARIABLE_Specs_0_19, &STATE_VARIABLE_Specs_1_102);
        Var_103 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PredDeclSubCord_70);
        {
          PredDeclSubList_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredDeclSubList_73, 0) = ((MR_Box) (SectionInfo_61));
          MR_hl_field(0, PredDeclSubList_73, 1) = ((MR_Box) (Var_103));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0]), ((MR_Box) (PredDeclSubList_73)), STATE_VARIABLE_PredDeclCord_0_5, &STATE_VARIABLE_PredDeclCord_1_104);
        succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ClauseInfoSubCord_71);
        if (succeeded)
          STATE_VARIABLE_ClauseInfoCord_1_106 = STATE_VARIABLE_ClauseInfoCord_0_7;
        else
        {
          MR_Word ClauseInfoSubList_74;
          MR_Word Var_105;

          Var_105 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ClauseInfoSubCord_71);
          {
            ClauseInfoSubList_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ClauseInfoSubList_74, 0) = ((MR_Box) (ItemMercuryStatus_63));
            MR_hl_field(0, ClauseInfoSubList_74, 1) = ((MR_Box) (Var_105));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1]), ((MR_Box) (ClauseInfoSubList_74)), STATE_VARIABLE_ClauseInfoCord_0_7, &STATE_VARIABLE_ClauseInfoCord_1_106);
        }
        succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), ForeignProcSubCord_72);
        if (succeeded)
          STATE_VARIABLE_ForeignProcCord_1_108 = STATE_VARIABLE_ForeignProcCord_0_9;
        else
        {
          MR_Word ForeignProcSubList_75;
          MR_Word Var_107;

          Var_107 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), ForeignProcSubCord_72);
          {
            ForeignProcSubList_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ForeignProcSubList_75, 0) = ((MR_Box) (ItemMercuryStatus_63));
            MR_hl_field(0, ForeignProcSubList_75, 1) = ((MR_Box) (Var_107));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]), ((MR_Box) (ForeignProcSubList_75)), STATE_VARIABLE_ForeignProcCord_0_9, &STATE_VARIABLE_ForeignProcCord_1_108);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = SecSubLists_51;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_DefinedMutables_1_94;
      next_value_of_STATE_VARIABLE_PredDeclCord_0_5 = STATE_VARIABLE_PredDeclCord_1_104;
      next_value_of_STATE_VARIABLE_ClauseInfoCord_0_7 = STATE_VARIABLE_ClauseInfoCord_1_106;
      next_value_of_STATE_VARIABLE_ForeignProcCord_0_9 = STATE_VARIABLE_ForeignProcCord_1_108;
      next_value_of_STATE_VARIABLE_ForeignDeclCodeCord_0_11 = STATE_VARIABLE_ForeignDeclCodeCord_1_98;
      next_value_of_STATE_VARIABLE_ForeignBodyCodeCord_0_13 = STATE_VARIABLE_ForeignBodyCodeCord_1_99;
      next_value_of_STATE_VARIABLE_FPEInfoCord_0_15 = STATE_VARIABLE_FPEInfoCord_1_100;
      next_value_of_STATE_VARIABLE_PredTargetNames_0_17 = STATE_VARIABLE_PredTargetNames_1_101;
      next_value_of_STATE_VARIABLE_Specs_0_19 = STATE_VARIABLE_Specs_1_102;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_PredDeclCord_0_5 = next_value_of_STATE_VARIABLE_PredDeclCord_0_5;
      STATE_VARIABLE_ClauseInfoCord_0_7 = next_value_of_STATE_VARIABLE_ClauseInfoCord_0_7;
      STATE_VARIABLE_ForeignProcCord_0_9 = next_value_of_STATE_VARIABLE_ForeignProcCord_0_9;
      STATE_VARIABLE_ForeignDeclCodeCord_0_11 = next_value_of_STATE_VARIABLE_ForeignDeclCodeCord_0_11;
      STATE_VARIABLE_ForeignBodyCodeCord_0_13 = next_value_of_STATE_VARIABLE_ForeignBodyCodeCord_0_13;
      STATE_VARIABLE_FPEInfoCord_0_15 = next_value_of_STATE_VARIABLE_FPEInfoCord_0_15;
      STATE_VARIABLE_PredTargetNames_0_17 = next_value_of_STATE_VARIABLE_PredTargetNames_0_17;
      STATE_VARIABLE_Specs_0_19 = next_value_of_STATE_VARIABLE_Specs_0_19;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_101_109_101_110_116_95_109_117_116_97_98_108_101_115_95_108_111_111_112_95_95_91_50_93_95_48_22_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DefinedMutables_0_5,
  MR_Word * STATE_VARIABLE_DefinedMutables_6,
  MR_Word STATE_VARIABLE_PredDeclCord_0_7,
  MR_Word * STATE_VARIABLE_PredDeclCord_8,
  MR_Word STATE_VARIABLE_ClauseInfoCord_0_9,
  MR_Word * STATE_VARIABLE_ClauseInfoCord_10,
  MR_Word STATE_VARIABLE_ForeignProcCord_0_11,
  MR_Word * STATE_VARIABLE_ForeignProcCord_12,
  MR_Word STATE_VARIABLE_ForeignDeclCodeCord_0_13,
  MR_Word * STATE_VARIABLE_ForeignDeclCodeCord_14,
  MR_Word STATE_VARIABLE_ForeignBodyCodeCord_0_15,
  MR_Word * STATE_VARIABLE_ForeignBodyCodeCord_16,
  MR_Word STATE_VARIABLE_FPEInfoCord_0_17,
  MR_Word * STATE_VARIABLE_FPEInfoCord_18,
  MR_Word STATE_VARIABLE_PredTargetNames_0_19,
  MR_Word * STATE_VARIABLE_PredTargetNames_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
      *STATE_VARIABLE_PredTargetNames_20 = STATE_VARIABLE_PredTargetNames_0_19;
      *STATE_VARIABLE_FPEInfoCord_18 = STATE_VARIABLE_FPEInfoCord_0_17;
      *STATE_VARIABLE_ForeignBodyCodeCord_16 = STATE_VARIABLE_ForeignBodyCodeCord_0_15;
      *STATE_VARIABLE_ForeignDeclCodeCord_14 = STATE_VARIABLE_ForeignDeclCodeCord_0_13;
      *STATE_VARIABLE_ForeignProcCord_12 = STATE_VARIABLE_ForeignProcCord_0_11;
      *STATE_VARIABLE_ClauseInfoCord_10 = STATE_VARIABLE_ClauseInfoCord_0_9;
      *STATE_VARIABLE_PredDeclCord_8 = STATE_VARIABLE_PredDeclCord_0_7;
      *STATE_VARIABLE_DefinedMutables_6 = STATE_VARIABLE_DefinedMutables_0_5;
    }
    else
    {
      MR_Word ItemMutable_56 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ItemMutables_57 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_String MutableName_67 = ((MR_String) ((MR_hl_field(0, ItemMutable_56, 0))));
      MR_Word Context_68 = ((MR_Word) ((MR_hl_field(0, ItemMutable_56, 8))));
      MR_Word STATE_VARIABLE_Specs_1_131;
      MR_Word STATE_VARIABLE_DefinedMutables_1_132;
      MR_Word STATE_VARIABLE_ForeignDeclCodeCord_1_134;
      MR_Word STATE_VARIABLE_ForeignBodyCodeCord_1_135;
      MR_Word STATE_VARIABLE_PredTargetNames_1_136;
      MR_Word STATE_VARIABLE_PredDeclCord_1_137;
      MR_Word STATE_VARIABLE_ClauseInfoCord_1_138;
      MR_Word STATE_VARIABLE_ForeignProcCord_1_139;
      MR_Word STATE_VARIABLE_FPEInfoCord_1_140;
      MR_Word OldContext_69;
      MR_Box conv0_OldContext_69;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DefinedMutables_0_5;
      MR_Word next_value_of_STATE_VARIABLE_PredDeclCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ClauseInfoCord_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ForeignProcCord_0_11;
      MR_Word next_value_of_STATE_VARIABLE_ForeignDeclCodeCord_0_13;
      MR_Word next_value_of_STATE_VARIABLE_ForeignBodyCodeCord_0_15;
      MR_Word next_value_of_STATE_VARIABLE_FPEInfoCord_0_17;
      MR_Word next_value_of_STATE_VARIABLE_PredTargetNames_0_19;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_21;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), STATE_VARIABLE_DefinedMutables_0_5, ((MR_Box) (MutableName_67)), &conv0_OldContext_69);
      if (succeeded)
      {
        OldContext_69 = ((MR_Word) (conv0_OldContext_69));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Pieces_70;
        MR_Word Spec_72;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_104;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_129;

        {
          Var_102 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_102, 0) = ((MR_Box) (MutableName_67));
        }
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_100 = parse_tree__error_spec__color_as_subject_1_f_0(Var_101);
        Var_110 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[8])));
        Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_110, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])));
        Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[6])), Var_109);
        Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_104);
        Pieces_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[4])), Var_99);
        {
          Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_127, 0) = ((MR_Box) (Context_68));
          MR_hl_field(0, Var_127, 1) = ((MR_Box) (Pieces_70));
        }
        {
          Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_129, 0) = ((MR_Box) (OldContext_69));
          MR_hl_field(0, Var_129, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])));
        }
        {
          Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
          MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
          MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_128));
        }
        {
          Spec_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_72, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.implement_mutables_loop\'/22"));
          MR_hl_field(2, Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_72, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(2, Spec_72, 3) = ((MR_Box) (Var_126));
        }
        {
          STATE_VARIABLE_Specs_1_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_131, 0) = ((MR_Box) (Spec_72));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_131, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
        }
        STATE_VARIABLE_PredTargetNames_1_136 = STATE_VARIABLE_PredTargetNames_0_19;
        STATE_VARIABLE_FPEInfoCord_1_140 = STATE_VARIABLE_FPEInfoCord_0_17;
        STATE_VARIABLE_ForeignBodyCodeCord_1_135 = STATE_VARIABLE_ForeignBodyCodeCord_0_15;
        STATE_VARIABLE_ForeignDeclCodeCord_1_134 = STATE_VARIABLE_ForeignDeclCodeCord_0_13;
        STATE_VARIABLE_ForeignProcCord_1_139 = STATE_VARIABLE_ForeignProcCord_0_11;
        STATE_VARIABLE_ClauseInfoCord_1_138 = STATE_VARIABLE_ClauseInfoCord_0_9;
        STATE_VARIABLE_PredDeclCord_1_137 = STATE_VARIABLE_PredDeclCord_0_7;
        STATE_VARIABLE_DefinedMutables_1_132 = STATE_VARIABLE_DefinedMutables_0_5;
      }
      else
      {
        MR_Word PredDecls_73;
        MR_Word ClauseInfos_74;
        MR_Word ForeignProcs_75;
        MR_Word FPEInfo_76;

        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (MutableName_67)), ((MR_Box) (Context_68)), STATE_VARIABLE_DefinedMutables_0_5, &STATE_VARIABLE_DefinedMutables_1_132);
        hlds__make_hlds__add_mutable_aux_preds__check_mutable_5_p_0(HeadVar__1_1, HeadVar__3_3, ItemMutable_56, STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_1_131);
        parse_tree__prog_mutable__implement_mutable_12_p_0(HeadVar__3_3, ItemMutable_56, &PredDecls_73, &ClauseInfos_74, &ForeignProcs_75, &FPEInfo_76, STATE_VARIABLE_ForeignDeclCodeCord_0_13, &STATE_VARIABLE_ForeignDeclCodeCord_1_134, STATE_VARIABLE_ForeignBodyCodeCord_0_15, &STATE_VARIABLE_ForeignBodyCodeCord_1_135, STATE_VARIABLE_PredTargetNames_0_19, &STATE_VARIABLE_PredTargetNames_1_136);
        mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PredDecls_73, STATE_VARIABLE_PredDeclCord_0_7, &STATE_VARIABLE_PredDeclCord_1_137);
        mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ClauseInfos_74, STATE_VARIABLE_ClauseInfoCord_0_9, &STATE_VARIABLE_ClauseInfoCord_1_138);
        mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), ForeignProcs_75, STATE_VARIABLE_ForeignProcCord_0_11, &STATE_VARIABLE_ForeignProcCord_1_139);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_fproc_export_info_0), ((MR_Box) (FPEInfo_76)), STATE_VARIABLE_FPEInfoCord_0_17, &STATE_VARIABLE_FPEInfoCord_1_140);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ItemMutables_57;
      next_value_of_STATE_VARIABLE_DefinedMutables_0_5 = STATE_VARIABLE_DefinedMutables_1_132;
      next_value_of_STATE_VARIABLE_PredDeclCord_0_7 = STATE_VARIABLE_PredDeclCord_1_137;
      next_value_of_STATE_VARIABLE_ClauseInfoCord_0_9 = STATE_VARIABLE_ClauseInfoCord_1_138;
      next_value_of_STATE_VARIABLE_ForeignProcCord_0_11 = STATE_VARIABLE_ForeignProcCord_1_139;
      next_value_of_STATE_VARIABLE_ForeignDeclCodeCord_0_13 = STATE_VARIABLE_ForeignDeclCodeCord_1_134;
      next_value_of_STATE_VARIABLE_ForeignBodyCodeCord_0_15 = STATE_VARIABLE_ForeignBodyCodeCord_1_135;
      next_value_of_STATE_VARIABLE_FPEInfoCord_0_17 = STATE_VARIABLE_FPEInfoCord_1_140;
      next_value_of_STATE_VARIABLE_PredTargetNames_0_19 = STATE_VARIABLE_PredTargetNames_1_136;
      next_value_of_STATE_VARIABLE_Specs_0_21 = STATE_VARIABLE_Specs_1_131;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DefinedMutables_0_5 = next_value_of_STATE_VARIABLE_DefinedMutables_0_5;
      STATE_VARIABLE_PredDeclCord_0_7 = next_value_of_STATE_VARIABLE_PredDeclCord_0_7;
      STATE_VARIABLE_ClauseInfoCord_0_9 = next_value_of_STATE_VARIABLE_ClauseInfoCord_0_9;
      STATE_VARIABLE_ForeignProcCord_0_11 = next_value_of_STATE_VARIABLE_ForeignProcCord_0_11;
      STATE_VARIABLE_ForeignDeclCodeCord_0_13 = next_value_of_STATE_VARIABLE_ForeignDeclCodeCord_0_13;
      STATE_VARIABLE_ForeignBodyCodeCord_0_15 = next_value_of_STATE_VARIABLE_ForeignBodyCodeCord_0_15;
      STATE_VARIABLE_FPEInfoCord_0_17 = next_value_of_STATE_VARIABLE_FPEInfoCord_0_17;
      STATE_VARIABLE_PredTargetNames_0_19 = next_value_of_STATE_VARIABLE_PredTargetNames_0_19;
      STATE_VARIABLE_Specs_0_21 = next_value_of_STATE_VARIABLE_Specs_0_21;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ModuleParams_7,
  MR_Word ItemMutable_8,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  MR_bool succeeded;
  MR_Word OrigInst_13 = ((MR_Word) ((MR_hl_field(0, ItemMutable_8, 3))));
  MR_Word Inst_14 = ((MR_Word) ((MR_hl_field(0, ItemMutable_8, 4))));
  MR_Word MutAttrs_17 = ((MR_Word) ((MR_hl_field(0, ItemMutable_8, 7))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(0, ItemMutable_8, 8))));
  MR_Word Globals_20;
  MR_Word Const_22;
  MR_Word UseTrail_23;
  MR_Word DummyInstVarSet_28;
  MR_Word ExpandedInstSpecs_29;
  MR_Word STATE_VARIABLE_Specs_1_67;
  MR_Word Local_25;
  MR_Word Var_38;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_20);
  Const_22 = ((MR_Word) ((MR_hl_field(0, MutAttrs_17, 1))));
  libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 90, &UseTrail_23);
  succeeded = (Const_22 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Local_25 = ((MR_Word) ((MR_hl_field(1, Const_22, 1))));
    Var_38 = parse_tree__prog_item__mutable_thread_local_trailed_1_f_0(Local_25);
    succeeded = (Var_38 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (UseTrail_23 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word TrailPieces_26;
    MR_Word TrailSpec_27;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_55;
    MR_Word Var_56;

    Var_44 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[19])));
    Var_56 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21])));
    Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])));
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_55);
    TrailPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[13])), Var_43);
    {
      TrailSpec_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TrailSpec_27, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable\'/5"));
      MR_hl_field(0, TrailSpec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, TrailSpec_27, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, TrailSpec_27, 3) = ((MR_Box) (Context_18));
      MR_hl_field(0, TrailSpec_27, 4) = ((MR_Box) (TrailPieces_26));
    }
    {
      STATE_VARIABLE_Specs_1_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_67, 0) = ((MR_Box) (TrailSpec_27));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_67, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_35));
    }
  }
  else
    STATE_VARIABLE_Specs_1_67 = STATE_VARIABLE_Specs_0_35;
  DummyInstVarSet_28 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
  hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_8_p_0(ModuleInfo_6, ModuleParams_7, Context_18, DummyInstVarSet_28, (MR_Word) ((MR_Unsigned) 0U), Inst_14, (MR_Word) ((MR_Unsigned) 0U), &ExpandedInstSpecs_29);
  if ((ExpandedInstSpecs_29 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_1_67;
  else
  {
    MR_Word UnexpandedInstSpecs_32;

    hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_8_p_0(ModuleInfo_6, ModuleParams_7, Context_18, DummyInstVarSet_28, (MR_Word) ((MR_Unsigned) 0U), OrigInst_13, (MR_Word) ((MR_Unsigned) 0U), &UnexpandedInstSpecs_32);
    if ((UnexpandedInstSpecs_32 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ExpandedInstSpecs_29, STATE_VARIABLE_Specs_1_67);
    else
      *STATE_VARIABLE_Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), UnexpandedInstSpecs_32, STATE_VARIABLE_Specs_1_67);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ModuleParams_10,
  MR_Word Context_11,
  MR_Word InstVarSet_12,
  MR_Word ParentInsts_13,
  MR_Word Inst_14,
  MR_Word STATE_VARIABLE_Specs_0_68,
  MR_Word * STATE_VARIABLE_Specs_69)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_96;
              MR_Word FreePieces_133;

              Var_96 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32])));
              FreePieces_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])));
              hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_11, InstVarSet_12, ParentInsts_13, Inst_14, FreePieces_133, STATE_VARIABLE_Specs_0_68, STATE_VARIABLE_Specs_69);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/8", (MR_String) "not_reached");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_147 = ((MR_Unsigned) ((MR_hl_field(1, Inst_14, 0))) & (MR_Integer) 7);

          hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(ModuleInfo_9, Context_11, InstVarSet_12, ParentInsts_13, Inst_14, Uniq_147, STATE_VARIABLE_Specs_0_68, STATE_VARIABLE_Specs_69);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_20 = ((MR_Word) ((MR_hl_field(2, Inst_14, 2))));
          MR_Word STATE_VARIABLE_Specs_2_71;
          MR_Word Uniq_132 = ((MR_Unsigned) ((MR_hl_field(2, Inst_14, 0))) & (MR_Integer) 7);

          hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(ModuleInfo_9, Context_11, InstVarSet_12, ParentInsts_13, Inst_14, Uniq_132, STATE_VARIABLE_Specs_0_68, &STATE_VARIABLE_Specs_2_71);
          hlds__make_hlds__add_mutable_aux_preds__check_mutable_bound_functors_8_p_0(ModuleInfo_9, ModuleParams_10, Context_11, InstVarSet_12, ParentInsts_13, BoundFunctors_20, STATE_VARIABLE_Specs_2_71, STATE_VARIABLE_Specs_69);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_14, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_21 = ((MR_Word) ((MR_hl_field(3, Inst_14, 1))));

              switch (MR_tag((MR_Word) InstName_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word UserInstSymName_22 = ((MR_Word) ((MR_hl_field(0, InstName_21, 0))));
                    MR_Word UserInstArgs_23 = ((MR_Word) ((MR_hl_field(0, InstName_21, 1))));
                    MR_Integer UserInstArity_24;
                    MR_Word UserInstCtor_25;

                    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), UserInstArgs_23, &UserInstArity_24);
                    {
                      UserInstCtor_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, UserInstCtor_25, 0) = ((MR_Box) (UserInstSymName_22));
                      MR_hl_field(0, UserInstCtor_25, 1) = ((MR_Box) (UserInstArity_24));
                    }
                    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ((MR_Box) (UserInstCtor_25)), ParentInsts_13);
                    if (succeeded)
                      *STATE_VARIABLE_Specs_69 = STATE_VARIABLE_Specs_0_68;
                    else
                    {
                      MR_String UserInstBaseName_27;
                      MR_Word UserInstModuleName_26;
                      MR_Word Var_145;

                      succeeded = ((MR_tag((MR_Word) UserInstSymName_22)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        UserInstModuleName_26 = ((MR_Word) ((MR_hl_field(1, UserInstSymName_22, 0))));
                        UserInstBaseName_27 = ((MR_String) ((MR_hl_field(1, UserInstSymName_22, 1))));
                        Var_145 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(UserInstModuleName_26, Var_145);
                        if (succeeded)
                        {
                          succeeded = (UserInstArity_24 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            if ((strcmp(UserInstBaseName_27, (MR_String) "dead") == 0))
                              succeeded = MR_TRUE;
                            else
                            if ((strcmp(UserInstBaseName_27, (MR_String) "mostly_dead") == 0))
                              succeeded = MR_TRUE;
                            else
                              succeeded = MR_FALSE;
                          }
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word FreePieces_28;
                        MR_Word UnqualInstName_29;
                        MR_Word UnqualInst_30;
                        MR_Word Var_73;
                        MR_Word Var_85;

                        Var_73 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32])));
                        FreePieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])));
                        {
                          Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_85, 0) = ((MR_Box) (UserInstBaseName_27));
                        }
                        {
                          UnqualInstName_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, UnqualInstName_29, 0) = ((MR_Box) (Var_85));
                          MR_hl_field(0, UnqualInstName_29, 1) = ((MR_Box) (UserInstArgs_23));
                        }
                        {
                          UnqualInst_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, UnqualInst_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, UnqualInst_30, 1) = ((MR_Box) (UnqualInstName_29));
                        }
                        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_11, InstVarSet_12, ParentInsts_13, UnqualInst_30, FreePieces_28, STATE_VARIABLE_Specs_0_68, STATE_VARIABLE_Specs_69);
                      }
                      else
                      {
                        MR_Word InstTable_31;
                        MR_Word UserInstTable_32;
                        MR_Word STATE_VARIABLE_Specs_5_87;
                        MR_Word InstDefn_33;
                        MR_Box conv0_InstDefn_33;

                        hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_8_p_0(ModuleInfo_9, ModuleParams_10, Context_11, InstVarSet_12, ParentInsts_13, UserInstArgs_23, STATE_VARIABLE_Specs_0_68, &STATE_VARIABLE_Specs_5_87);
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_9, &InstTable_31);
                        hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_31, &UserInstTable_32);
                        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_32, ((MR_Box) (UserInstCtor_25)), &conv0_InstDefn_33);
                        if (succeeded)
                        {
                          InstDefn_33 = ((MR_Word) (conv0_InstDefn_33));
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          MR_Word DefnInstVarSet_34 = ((MR_Word) ((MR_hl_field(0, InstDefn_33, 0))));
                          MR_Word InstBody_36 = ((MR_Word) ((MR_hl_field(0, InstDefn_33, 2))));
                          MR_Word EqvInst_40 = (MR_Word) (InstBody_36);
                          MR_Word DefnParentInsts_41;
                          MR_Word next_value_of_InstVarSet_12;
                          MR_Word next_value_of_ParentInsts_13;
                          MR_Word next_value_of_Inst_14;
                          MR_Word next_value_of_STATE_VARIABLE_Specs_0_68;

                          {
                            DefnParentInsts_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, DefnParentInsts_41, 0) = ((MR_Box) (UserInstCtor_25));
                            MR_hl_field(1, DefnParentInsts_41, 1) = ((MR_Box) (ParentInsts_13));
                          }
                          // direct tailcall eliminated
                          ;
                          next_value_of_InstVarSet_12 = DefnInstVarSet_34;
                          next_value_of_ParentInsts_13 = DefnParentInsts_41;
                          next_value_of_Inst_14 = EqvInst_40;
                          next_value_of_STATE_VARIABLE_Specs_0_68 = STATE_VARIABLE_Specs_5_87;
                          InstVarSet_12 = next_value_of_InstVarSet_12;
                          ParentInsts_13 = next_value_of_ParentInsts_13;
                          Inst_14 = next_value_of_Inst_14;
                          STATE_VARIABLE_Specs_0_68 = next_value_of_STATE_VARIABLE_Specs_0_68;
                          continue;
                        }
                        else
                        {
                          MR_Word UndefInstCtors_42 = ((MR_Word) ((MR_hl_field(0, ModuleParams_10, 2))));

                          succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), UndefInstCtors_42, ((MR_Box) (UserInstCtor_25)));
                          if (succeeded)
                            *STATE_VARIABLE_Specs_69 = STATE_VARIABLE_Specs_5_87;
                          else
                          {
                            MR_Word UndefinedPieces_43;

                            UndefinedPieces_43 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34])));
                            hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_11, InstVarSet_12, ParentInsts_13, Inst_14, UndefinedPieces_43, STATE_VARIABLE_Specs_5_87, STATE_VARIABLE_Specs_69);
                          }
                        }
                      }
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/8", (MR_String) "non-user inst");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ConstrainedPieces_66;
              MR_Word Var_113;
              MR_Word Var_114;

              Var_114 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])));
              Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])));
              ConstrainedPieces_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23])), Var_113);
              hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_11, InstVarSet_12, ParentInsts_13, Inst_14, ConstrainedPieces_66, STATE_VARIABLE_Specs_0_68, STATE_VARIABLE_Specs_69);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_16 = ((MR_Unsigned) ((MR_hl_field(3, Inst_14, 1))) & (MR_Integer) 7);

              hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(ModuleInfo_9, Context_11, InstVarSet_12, ParentInsts_13, Inst_14, Uniq_16, STATE_VARIABLE_Specs_0_68, STATE_VARIABLE_Specs_69);
            }
            break;
          case (MR_Integer) 3:
            *STATE_VARIABLE_Specs_69 = STATE_VARIABLE_Specs_0_68;
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    else
    {
      MR_Word Inst_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Insts_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word STATE_VARIABLE_Specs_1_27;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, Inst_22, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Insts_23;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_27;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_bound_functors_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    else
    {
      MR_Word BoundFunctor_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word BoundFunctors_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word ArgInsts_26 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_22, 1))));
      MR_Word STATE_VARIABLE_Specs_1_29;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_8_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, ArgInsts_26, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_29);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = BoundFunctors_23;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_29;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Context_10,
  MR_Word InstVarSet_11,
  MR_Word ParentInsts_12,
  MR_Word Inst_13,
  MR_Word Uniq_14,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_bool succeeded;

  switch (Uniq_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        MR_Word UniqPieces_18;
        MR_Word Var_66;

        succeeded = ((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_66 = ((MR_Unsigned) ((MR_hl_field(1, Inst_13, 0))) & (MR_Integer) 7);
          succeeded = (Uniq_14 == Var_66);
        }
        if (succeeded)
        {
          MR_Word Var_21;

          Var_21 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])));
          UniqPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])));
        }
        else
        {
          MR_Word Var_48;
          MR_Word Var_49;

          Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])));
          Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])));
          UniqPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[51])), Var_48);
        }
        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_10, InstVarSet_11, ParentInsts_12, Inst_13, UniqPieces_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word UniqPieces_102;
        MR_Word Var_69;

        succeeded = ((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_69 = ((MR_Unsigned) ((MR_hl_field(1, Inst_13, 0))) & (MR_Integer) 7);
          succeeded = (Uniq_14 == Var_69);
        }
        if (succeeded)
        {
          MR_Word Var_70;

          Var_70 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])));
          UniqPieces_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])));
        }
        else
        {
          MR_Word Var_79;
          MR_Word Var_80;

          Var_80 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])));
          Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])));
          UniqPieces_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[54])), Var_79);
        }
        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_10, InstVarSet_11, ParentInsts_12, Inst_13, UniqPieces_102, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word UniqPieces_153;
        MR_Word Var_120;

        succeeded = ((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_120 = ((MR_Unsigned) ((MR_hl_field(1, Inst_13, 0))) & (MR_Integer) 7);
          succeeded = (Uniq_14 == Var_120);
        }
        if (succeeded)
        {
          MR_Word Var_121;

          Var_121 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])));
          UniqPieces_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_121, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])));
        }
        else
        {
          MR_Word Var_130;
          MR_Word Var_131;

          Var_131 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])));
          Var_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_131, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])));
          UniqPieces_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[57])), Var_130);
        }
        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_10, InstVarSet_11, ParentInsts_12, Inst_13, UniqPieces_153, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word UniqPieces_204;
        MR_Word Var_171;

        succeeded = ((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_171 = ((MR_Unsigned) ((MR_hl_field(1, Inst_13, 0))) & (MR_Integer) 7);
          succeeded = (Uniq_14 == Var_171);
        }
        if (succeeded)
        {
          MR_Word Var_172;

          Var_172 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])));
          UniqPieces_204 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_172, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])));
        }
        else
        {
          MR_Word Var_181;
          MR_Word Var_182;

          Var_182 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])));
          Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_182, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])));
          UniqPieces_204 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[60])), Var_181);
        }
        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_10, InstVarSet_11, ParentInsts_12, Inst_13, UniqPieces_204, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Context_10,
  MR_Word InstVarSet_11,
  MR_Word ParentInsts_12,
  MR_Word Inst_13,
  MR_Word ProblemPieces_14,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_Word ParentPieces_16;
  MR_Word InstPieces_17;
  MR_Word Pieces_18;
  MR_Word Spec_19;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;

  hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(ParentInsts_12, &ParentPieces_16);
  InstPieces_17 = hlds__error_msg_inst__error_msg_inst_10_f_0(ModuleInfo_9, InstVarSet_11, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[41])), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[43])), Inst_13);
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[12])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (ParentPieces_16));
  }
  Var_44 = parse_tree__error_spec__color_as_subject_1_f_0(InstPieces_17);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProblemPieces_14, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])));
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_45);
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[45])), Var_43);
  Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_38);
  {
    Spec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.invalid_inst_in_mutable\'/8"));
    MR_hl_field(0, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_19, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_19, 4) = ((MR_Box) (Pieces_18));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_21 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstCtor_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word InstCtors_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word HeadPieces_6;
    MR_Word TailPieces_7;
    MR_Word InstName_9 = ((MR_Word) ((MR_hl_field(0, InstCtor_3, 0))));
    MR_Integer InstArity_10 = ((MR_Integer) ((MR_hl_field(0, InstCtor_3, 1))));
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (InstName_9));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (InstArity_10));
    }
    {
      Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_14, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[48])));
    }
    {
      HeadPieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadPieces_6, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[46])));
      MR_hl_field(1, HeadPieces_6, 1) = ((MR_Box) (Var_13));
    }
    hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(InstCtors_4, &TailPieces_7);
    *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_6, TailPieces_7);
  }
}

void mercury__hlds__make_hlds__add_mutable_aux_preds__init(void)
{
}

void mercury__hlds__make_hlds__add_mutable_aux_preds__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_mutable_aux_preds__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_mutable_aux_preds__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_mutable_aux_preds.
