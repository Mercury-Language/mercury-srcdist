/*
** Automatically generated from `add_mutable_aux_preds.m'
** by the Mercury compiler,
** version rotd-2022-08-02
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
#include "bimap.mih"
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
#include "ops.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.set_of_var.mih"
#include "hlds.make_hlds.make_hlds_types.mih"




static MR_Box MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__implement_mutables_sec_loop_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__implement_mutables_sec_loop_18_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PredDeclCord_0_3,
  MR_Word * STATE_VARIABLE_PredDeclCord_4,
  MR_Word STATE_VARIABLE_ClauseInfoCord_0_5,
  MR_Word * STATE_VARIABLE_ClauseInfoCord_6,
  MR_Word STATE_VARIABLE_ForeignProcCord_0_7,
  MR_Word * STATE_VARIABLE_ForeignProcCord_8,
  MR_Word STATE_VARIABLE_ForeignDeclCodeCord_0_9,
  MR_Word * STATE_VARIABLE_ForeignDeclCodeCord_10,
  MR_Word STATE_VARIABLE_ForeignBodyCodeCord_0_11,
  MR_Word * STATE_VARIABLE_ForeignBodyCodeCord_12,
  MR_Word STATE_VARIABLE_FPEInfoCord_0_13,
  MR_Word * STATE_VARIABLE_FPEInfoCord_14,
  MR_Word STATE_VARIABLE_PredTargetNames_0_15,
  MR_Word * STATE_VARIABLE_PredTargetNames_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_101_109_101_110_116_95_109_117_116_97_98_108_101_115_95_108_111_111_112_95_95_91_50_93_95_48_20_p_0(
  MR_Word HeadVar__1_1,
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
hlds__make_hlds__add_mutable_aux_preds__check_mutable_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ItemMutable_6,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word InstVarSet_10,
  MR_Word ParentInsts_11,
  MR_Word Inst_12,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_bound_insts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

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


static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[49][2];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[1][7];




static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[49][2] = {
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration in non-trailing grade."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: trailed"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may not appear in"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is abstract, and thus"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is constrained, and thus"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not defined."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has uniqueness"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "clobbered"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which may not appear in"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "mostly_clobbered"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "mostly_unique"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "unique"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the inst"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the expansion of the named inst"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[5])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[47])))
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



void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__implement_mutables_if_local_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word SecList_14,
  MR_Word * PredDecls_15,
  MR_Word * ClauseInfos_16,
  MR_Word * ForeignProcs_17,
  MR_Word * ForeignDeclCodes_18,
  MR_Word * ForeignBodyCodes_19,
  MR_Word * FPEInfos_20,
  MR_Word STATE_VARIABLE_PredTargetNames_0_29,
  MR_Word * STATE_VARIABLE_PredTargetNames_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_Word PredDeclCord_23;
  MR_Word ClauseInfoCord_24;
  MR_Word ForeignProcCord_25;
  MR_Word ForeignDeclCodeCord_26;
  MR_Word ForeignBodyCodeCord_27;
  MR_Word FPEInfoCord_28;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;

  Var_33 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0]));
  Var_34 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1]));
  Var_35 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3]));
  Var_36 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0));
  Var_37 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0));
  Var_38 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[4]));
  hlds__make_hlds__add_mutable_aux_preds__implement_mutables_sec_loop_18_p_0(ModuleInfo_13, SecList_14, Var_33, &PredDeclCord_23, Var_34, &ClauseInfoCord_24, Var_35, &ForeignProcCord_25, Var_36, &ForeignDeclCodeCord_26, Var_37, &ForeignBodyCodeCord_27, Var_38, &FPEInfoCord_28, STATE_VARIABLE_PredTargetNames_0_29, STATE_VARIABLE_PredTargetNames_30, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
  *PredDecls_15 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0]), PredDeclCord_23);
  *ClauseInfos_16 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1]), ClauseInfoCord_24);
  *ForeignProcs_17 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3]), ForeignProcCord_25);
  *ForeignDeclCodes_18 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), ForeignDeclCodeCord_26);
  *ForeignBodyCodes_19 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), ForeignBodyCodeCord_27);
  *FPEInfos_20 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[4]), FPEInfoCord_28);
}

static MR_Box MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__implement_mutables_sec_loop_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = backend_libs__foreign__exported_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_3;
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__implement_mutables_sec_loop_18_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PredDeclCord_0_3,
  MR_Word * STATE_VARIABLE_PredDeclCord_4,
  MR_Word STATE_VARIABLE_ClauseInfoCord_0_5,
  MR_Word * STATE_VARIABLE_ClauseInfoCord_6,
  MR_Word STATE_VARIABLE_ForeignProcCord_0_7,
  MR_Word * STATE_VARIABLE_ForeignProcCord_8,
  MR_Word STATE_VARIABLE_ForeignDeclCodeCord_0_9,
  MR_Word * STATE_VARIABLE_ForeignDeclCodeCord_10,
  MR_Word STATE_VARIABLE_ForeignBodyCodeCord_0_11,
  MR_Word * STATE_VARIABLE_ForeignBodyCodeCord_12,
  MR_Word STATE_VARIABLE_FPEInfoCord_0_13,
  MR_Word * STATE_VARIABLE_FPEInfoCord_14,
  MR_Word STATE_VARIABLE_PredTargetNames_0_15,
  MR_Word * STATE_VARIABLE_PredTargetNames_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
      *STATE_VARIABLE_PredTargetNames_16 = STATE_VARIABLE_PredTargetNames_0_15;
      *STATE_VARIABLE_FPEInfoCord_14 = STATE_VARIABLE_FPEInfoCord_0_13;
      *STATE_VARIABLE_ForeignBodyCodeCord_12 = STATE_VARIABLE_ForeignBodyCodeCord_0_11;
      *STATE_VARIABLE_ForeignDeclCodeCord_10 = STATE_VARIABLE_ForeignDeclCodeCord_0_9;
      *STATE_VARIABLE_ForeignProcCord_8 = STATE_VARIABLE_ForeignProcCord_0_7;
      *STATE_VARIABLE_ClauseInfoCord_6 = STATE_VARIABLE_ClauseInfoCord_0_5;
      *STATE_VARIABLE_PredDeclCord_4 = STATE_VARIABLE_PredDeclCord_0_3;
    }
    else
    {
      MR_Word SecSubList_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word SecSubLists_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SectionInfo_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecSubList_45, (MR_Integer) 0))));
      MR_Word ItemMutables_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecSubList_45, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_55, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_ForeignDeclCodeCord_90_90;
      MR_Word STATE_VARIABLE_ForeignBodyCodeCord_91_91;
      MR_Word STATE_VARIABLE_FPEInfoCord_92_92;
      MR_Word STATE_VARIABLE_PredTargetNames_93_93;
      MR_Word STATE_VARIABLE_Specs_94_94;
      MR_Word STATE_VARIABLE_PredDeclCord_96_96;
      MR_Word STATE_VARIABLE_ClauseInfoCord_98_98;
      MR_Word STATE_VARIABLE_ForeignProcCord_100_100;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PredDeclCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ClauseInfoCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ForeignProcCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ForeignDeclCodeCord_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ForeignBodyCodeCord_0_11;
      MR_Word next_value_of_STATE_VARIABLE_FPEInfoCord_0_13;
      MR_Word next_value_of_STATE_VARIABLE_PredTargetNames_0_15;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_17;

      if (((MR_tag((MR_Word) ItemMercuryStatus_57)) == (MR_Integer) 1))
      {
        STATE_VARIABLE_PredDeclCord_96_96 = STATE_VARIABLE_PredDeclCord_0_3;
        STATE_VARIABLE_ClauseInfoCord_98_98 = STATE_VARIABLE_ClauseInfoCord_0_5;
        STATE_VARIABLE_ForeignProcCord_100_100 = STATE_VARIABLE_ForeignProcCord_0_7;
        STATE_VARIABLE_ForeignDeclCodeCord_90_90 = STATE_VARIABLE_ForeignDeclCodeCord_0_9;
        STATE_VARIABLE_ForeignBodyCodeCord_91_91 = STATE_VARIABLE_ForeignBodyCodeCord_0_11;
        STATE_VARIABLE_FPEInfoCord_92_92 = STATE_VARIABLE_FPEInfoCord_0_13;
        STATE_VARIABLE_PredTargetNames_93_93 = STATE_VARIABLE_PredTargetNames_0_15;
        STATE_VARIABLE_Specs_94_94 = STATE_VARIABLE_Specs_0_17;
      }
      else
      {
        MR_Word Globals_60;
        MR_Word ModuleName_61;
        MR_Word TypeNameFunc_62;
        MR_Word ModuleParams_63;
        MR_Word PredDeclSubCord_64;
        MR_Word ClauseInfoSubCord_65;
        MR_Word ForeignProcSubCord_66;
        MR_Word PredDeclSubList_67;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_95;

        hlds__hlds_module__module_info_get_globals_2_p_0(HeadVar__1_1, &Globals_60);
        hlds__hlds_module__module_info_get_name_2_p_0(HeadVar__1_1, &ModuleName_61);
        {
          TypeNameFunc_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeNameFunc_62, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), TypeNameFunc_62, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__implement_mutables_sec_loop_18_p_0_1));
          MR_hl_field(MR_mktag(0), TypeNameFunc_62, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), TypeNameFunc_62, 3) = ((MR_Box) (HeadVar__1_1));
        }
        {
          ModuleParams_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ModuleParams_63, 0) = ((MR_Box) (Globals_60));
          MR_hl_field(MR_mktag(0), ModuleParams_63, 1) = ((MR_Box) (ModuleName_61));
          MR_hl_field(MR_mktag(0), ModuleParams_63, 2) = ((MR_Box) (TypeNameFunc_62));
        }
        Var_87 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0));
        Var_88 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0));
        Var_89 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]));
        hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_101_109_101_110_116_95_109_117_116_97_98_108_101_115_95_108_111_111_112_95_95_91_50_93_95_48_20_p_0(HeadVar__1_1, ModuleParams_63, ItemMutables_56, Var_87, &PredDeclSubCord_64, Var_88, &ClauseInfoSubCord_65, Var_89, &ForeignProcSubCord_66, STATE_VARIABLE_ForeignDeclCodeCord_0_9, &STATE_VARIABLE_ForeignDeclCodeCord_90_90, STATE_VARIABLE_ForeignBodyCodeCord_0_11, &STATE_VARIABLE_ForeignBodyCodeCord_91_91, STATE_VARIABLE_FPEInfoCord_0_13, &STATE_VARIABLE_FPEInfoCord_92_92, STATE_VARIABLE_PredTargetNames_0_15, &STATE_VARIABLE_PredTargetNames_93_93, STATE_VARIABLE_Specs_0_17, &STATE_VARIABLE_Specs_94_94);
        Var_95 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PredDeclSubCord_64);
        {
          PredDeclSubList_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredDeclSubList_67, 0) = ((MR_Box) (SectionInfo_55));
          MR_hl_field(MR_mktag(0), PredDeclSubList_67, 1) = ((MR_Box) (Var_95));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0]), ((MR_Box) (PredDeclSubList_67)), STATE_VARIABLE_PredDeclCord_0_3, &STATE_VARIABLE_PredDeclCord_96_96);
        succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ClauseInfoSubCord_65);
        if (succeeded)
          STATE_VARIABLE_ClauseInfoCord_98_98 = STATE_VARIABLE_ClauseInfoCord_0_5;
        else
        {
          MR_Word ClauseInfoSubList_68;
          MR_Word Var_97;

          Var_97 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ClauseInfoSubCord_65);
          {
            ClauseInfoSubList_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClauseInfoSubList_68, 0) = ((MR_Box) (ItemMercuryStatus_57));
            MR_hl_field(MR_mktag(0), ClauseInfoSubList_68, 1) = ((MR_Box) (Var_97));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1]), ((MR_Box) (ClauseInfoSubList_68)), STATE_VARIABLE_ClauseInfoCord_0_5, &STATE_VARIABLE_ClauseInfoCord_98_98);
        }
        succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]), ForeignProcSubCord_66);
        if (succeeded)
          STATE_VARIABLE_ForeignProcCord_100_100 = STATE_VARIABLE_ForeignProcCord_0_7;
        else
        {
          MR_Word ForeignProcSubList_69;
          MR_Word Var_99;

          Var_99 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]), ForeignProcSubCord_66);
          {
            ForeignProcSubList_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ForeignProcSubList_69, 0) = ((MR_Box) (ItemMercuryStatus_57));
            MR_hl_field(MR_mktag(0), ForeignProcSubList_69, 1) = ((MR_Box) (Var_99));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3]), ((MR_Box) (ForeignProcSubList_69)), STATE_VARIABLE_ForeignProcCord_0_7, &STATE_VARIABLE_ForeignProcCord_100_100);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = SecSubLists_46;
      next_value_of_STATE_VARIABLE_PredDeclCord_0_3 = STATE_VARIABLE_PredDeclCord_96_96;
      next_value_of_STATE_VARIABLE_ClauseInfoCord_0_5 = STATE_VARIABLE_ClauseInfoCord_98_98;
      next_value_of_STATE_VARIABLE_ForeignProcCord_0_7 = STATE_VARIABLE_ForeignProcCord_100_100;
      next_value_of_STATE_VARIABLE_ForeignDeclCodeCord_0_9 = STATE_VARIABLE_ForeignDeclCodeCord_90_90;
      next_value_of_STATE_VARIABLE_ForeignBodyCodeCord_0_11 = STATE_VARIABLE_ForeignBodyCodeCord_91_91;
      next_value_of_STATE_VARIABLE_FPEInfoCord_0_13 = STATE_VARIABLE_FPEInfoCord_92_92;
      next_value_of_STATE_VARIABLE_PredTargetNames_0_15 = STATE_VARIABLE_PredTargetNames_93_93;
      next_value_of_STATE_VARIABLE_Specs_0_17 = STATE_VARIABLE_Specs_94_94;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PredDeclCord_0_3 = next_value_of_STATE_VARIABLE_PredDeclCord_0_3;
      STATE_VARIABLE_ClauseInfoCord_0_5 = next_value_of_STATE_VARIABLE_ClauseInfoCord_0_5;
      STATE_VARIABLE_ForeignProcCord_0_7 = next_value_of_STATE_VARIABLE_ForeignProcCord_0_7;
      STATE_VARIABLE_ForeignDeclCodeCord_0_9 = next_value_of_STATE_VARIABLE_ForeignDeclCodeCord_0_9;
      STATE_VARIABLE_ForeignBodyCodeCord_0_11 = next_value_of_STATE_VARIABLE_ForeignBodyCodeCord_0_11;
      STATE_VARIABLE_FPEInfoCord_0_13 = next_value_of_STATE_VARIABLE_FPEInfoCord_0_13;
      STATE_VARIABLE_PredTargetNames_0_15 = next_value_of_STATE_VARIABLE_PredTargetNames_0_15;
      STATE_VARIABLE_Specs_0_17 = next_value_of_STATE_VARIABLE_Specs_0_17;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_109_112_108_101_109_101_110_116_95_109_117_116_97_98_108_101_115_95_108_111_111_112_95_95_91_50_93_95_48_20_p_0(
  MR_Word HeadVar__1_1,
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_Word ItemMutable_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ItemMutables_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word PredDecls_61;
      MR_Word ClauseInfos_62;
      MR_Word ForeignProcs_63;
      MR_Word FPEInfo_64;
      MR_Word STATE_VARIABLE_Specs_81_81;
      MR_Word STATE_VARIABLE_ForeignDeclCodeCord_82_82;
      MR_Word STATE_VARIABLE_ForeignBodyCodeCord_83_83;
      MR_Word STATE_VARIABLE_PredTargetNames_84_84;
      MR_Word STATE_VARIABLE_PredDeclCord_85_85;
      MR_Word Var_86;
      MR_Word STATE_VARIABLE_ClauseInfoCord_87_87;
      MR_Word Var_88;
      MR_Word STATE_VARIABLE_ForeignProcCord_89_89;
      MR_Word Var_90;
      MR_Word STATE_VARIABLE_FPEInfoCord_91_91;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PredDeclCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ClauseInfoCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ForeignProcCord_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ForeignDeclCodeCord_0_11;
      MR_Word next_value_of_STATE_VARIABLE_ForeignBodyCodeCord_0_13;
      MR_Word next_value_of_STATE_VARIABLE_FPEInfoCord_0_15;
      MR_Word next_value_of_STATE_VARIABLE_PredTargetNames_0_17;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_19;

      hlds__make_hlds__add_mutable_aux_preds__check_mutable_4_p_0(HeadVar__1_1, ItemMutable_51, STATE_VARIABLE_Specs_0_19, &STATE_VARIABLE_Specs_81_81);
      parse_tree__prog_mutable__implement_mutable_12_p_0(HeadVar__3_3, ItemMutable_51, &PredDecls_61, &ClauseInfos_62, &ForeignProcs_63, &FPEInfo_64, STATE_VARIABLE_ForeignDeclCodeCord_0_11, &STATE_VARIABLE_ForeignDeclCodeCord_82_82, STATE_VARIABLE_ForeignBodyCodeCord_0_13, &STATE_VARIABLE_ForeignBodyCodeCord_83_83, STATE_VARIABLE_PredTargetNames_0_17, &STATE_VARIABLE_PredTargetNames_84_84);
      Var_86 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PredDecls_61);
      STATE_VARIABLE_PredDeclCord_85_85 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), STATE_VARIABLE_PredDeclCord_0_5, Var_86);
      Var_88 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ClauseInfos_62);
      STATE_VARIABLE_ClauseInfoCord_87_87 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), STATE_VARIABLE_ClauseInfoCord_0_7, Var_88);
      Var_90 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]), ForeignProcs_63);
      STATE_VARIABLE_ForeignProcCord_89_89 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]), STATE_VARIABLE_ForeignProcCord_0_9, Var_90);
      mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[4]), ((MR_Box) (FPEInfo_64)), STATE_VARIABLE_FPEInfoCord_0_15, &STATE_VARIABLE_FPEInfoCord_91_91);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ItemMutables_52;
      next_value_of_STATE_VARIABLE_PredDeclCord_0_5 = STATE_VARIABLE_PredDeclCord_85_85;
      next_value_of_STATE_VARIABLE_ClauseInfoCord_0_7 = STATE_VARIABLE_ClauseInfoCord_87_87;
      next_value_of_STATE_VARIABLE_ForeignProcCord_0_9 = STATE_VARIABLE_ForeignProcCord_89_89;
      next_value_of_STATE_VARIABLE_ForeignDeclCodeCord_0_11 = STATE_VARIABLE_ForeignDeclCodeCord_82_82;
      next_value_of_STATE_VARIABLE_ForeignBodyCodeCord_0_13 = STATE_VARIABLE_ForeignBodyCodeCord_83_83;
      next_value_of_STATE_VARIABLE_FPEInfoCord_0_15 = STATE_VARIABLE_FPEInfoCord_91_91;
      next_value_of_STATE_VARIABLE_PredTargetNames_0_17 = STATE_VARIABLE_PredTargetNames_84_84;
      next_value_of_STATE_VARIABLE_Specs_0_19 = STATE_VARIABLE_Specs_81_81;
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
hlds__make_hlds__add_mutable_aux_preds__check_mutable_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ItemMutable_6,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  MR_bool succeeded;
  MR_Word OrigInst_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 3))));
  MR_Word Inst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 4))));
  MR_Word MutAttrs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 7))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_6, (MR_Integer) 8))));
  MR_Word Globals_18;
  MR_Word Const_21;
  MR_Word UseTrail_22;
  MR_Word DummyInstVarSet_27;
  MR_Word ExpandedInstSpecs_28;
  MR_Word STATE_VARIABLE_Specs_52_52;
  MR_Word CompilationTarget_19;
  MR_Word Local_24;
  MR_Word Var_37;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_18);
  libs__globals__get_target_2_p_0(Globals_18, &CompilationTarget_19);
  Const_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutAttrs_15, (MR_Integer) 1))));
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 264, &UseTrail_22);
  succeeded = (Const_21 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Local_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_21, (MR_Integer) 1))));
    Var_37 = parse_tree__prog_item__mutable_thread_local_trailed_1_f_0(Local_24);
    succeeded = (Var_37 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (UseTrail_22 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word TrailSpec_26;

    {
      TrailSpec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TrailSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable\'/4"));
      MR_hl_field(MR_mktag(1), TrailSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), TrailSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), TrailSpec_26, 3) = ((MR_Box) (Context_16));
      MR_hl_field(MR_mktag(1), TrailSpec_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])));
    }
    {
      STATE_VARIABLE_Specs_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_52_52, 0) = ((MR_Box) (TrailSpec_26));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_52_52, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
    }
  }
  else
    STATE_VARIABLE_Specs_52_52 = STATE_VARIABLE_Specs_0_34;
  DummyInstVarSet_27 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
  hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(ModuleInfo_5, Context_16, DummyInstVarSet_27, (MR_Word) ((MR_Unsigned) 0U), Inst_12, (MR_Word) ((MR_Unsigned) 0U), &ExpandedInstSpecs_28);
  if ((ExpandedInstSpecs_28 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_52_52;
  else
  {
    MR_Word UnexpandedInstSpecs_31;

    hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(ModuleInfo_5, Context_16, DummyInstVarSet_27, (MR_Word) ((MR_Unsigned) 0U), OrigInst_11, (MR_Word) ((MR_Unsigned) 0U), &UnexpandedInstSpecs_31);
    if ((UnexpandedInstSpecs_31 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ExpandedInstSpecs_28, STATE_VARIABLE_Specs_52_52);
    else
      *STATE_VARIABLE_Specs_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), UnexpandedInstSpecs_31, STATE_VARIABLE_Specs_52_52);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word InstVarSet_10,
  MR_Word ParentInsts_11,
  MR_Word Inst_12,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/7", (MR_String) "not_reached");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_12, (MR_Integer) 0))) & (MR_Integer) 7);

          hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, Uniq_14, STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BoundInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Specs_72_72;
              MR_Word Uniq_131 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 1))) & (MR_Integer) 7);

              hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, Uniq_131, STATE_VARIABLE_Specs_0_69, &STATE_VARIABLE_Specs_72_72);
              hlds__make_hlds__add_mutable_aux_preds__check_mutable_bound_insts_7_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, BoundInsts_18, STATE_VARIABLE_Specs_72_72, STATE_VARIABLE_Specs_70);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_138 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 1))) & (MR_Integer) 7);

              hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, Uniq_138, STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            }
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_0_69;
            break;
          case (MR_Integer) 3:
            hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[20])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) InstName_19)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word UserInstSymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_19, (MR_Integer) 0))));
                    MR_Word UserInstArgs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_19, (MR_Integer) 1))));
                    MR_Integer UserInstArity_22;
                    MR_Word UserInstCtor_23;

                    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), UserInstArgs_21, &UserInstArity_22);
                    {
                      UserInstCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), UserInstCtor_23, 0) = ((MR_Box) (UserInstSymName_20));
                      MR_hl_field(MR_mktag(0), UserInstCtor_23, 1) = ((MR_Box) (UserInstArity_22));
                    }
                    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ((MR_Box) (UserInstCtor_23)), ParentInsts_11);
                    if (succeeded)
                      *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_0_69;
                    else
                    {
                      MR_String UserInstBaseName_25;
                      MR_Word UserInstModuleName_24;
                      MR_Word Var_137;

                      succeeded = ((MR_tag((MR_Word) UserInstSymName_20)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        UserInstModuleName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserInstSymName_20, (MR_Integer) 0))));
                        UserInstBaseName_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), UserInstSymName_20, (MR_Integer) 1))));
                        Var_137 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(UserInstModuleName_24, Var_137);
                        if (succeeded)
                        {
                          succeeded = (UserInstArity_22 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            if ((strcmp(UserInstBaseName_25, (MR_String) "dead") == 0))
                              succeeded = MR_TRUE;
                            else
                            if ((strcmp(UserInstBaseName_25, (MR_String) "mostly_dead") == 0))
                              succeeded = MR_TRUE;
                            else
                              succeeded = MR_FALSE;
                          }
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word UnqualInstName_27;
                        MR_Word UnqualInst_28;
                        MR_Word Var_83;

                        {
                          Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (UserInstBaseName_25));
                        }
                        {
                          UnqualInstName_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), UnqualInstName_27, 0) = ((MR_Box) (Var_83));
                          MR_hl_field(MR_mktag(0), UnqualInstName_27, 1) = ((MR_Box) (UserInstArgs_21));
                        }
                        {
                          UnqualInst_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), UnqualInst_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), UnqualInst_28, 1) = ((MR_Box) (UnqualInstName_27));
                        }
                        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, UnqualInst_28, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
                      }
                      else
                      {
                        MR_Word InstTable_29;
                        MR_Word UserInstTable_30;
                        MR_Word STATE_VARIABLE_Specs_85_85;
                        MR_Word InstDefn_31;
                        MR_Box conv0_InstDefn_31;

                        hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_7_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, UserInstArgs_21, STATE_VARIABLE_Specs_0_69, &STATE_VARIABLE_Specs_85_85);
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_8, &InstTable_29);
                        hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_29, &UserInstTable_30);
                        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_30, ((MR_Box) (UserInstCtor_23)), &conv0_InstDefn_31);
                        if (succeeded)
                        {
                          InstDefn_31 = ((MR_Word) (conv0_InstDefn_31));
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          MR_Word DefnInstVarSet_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_31, (MR_Integer) 0))));
                          MR_Word InstBody_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_31, (MR_Integer) 2))));
                          MR_Word EqvInst_38 = (MR_Word) (InstBody_34);
                          MR_Word DefnParentInsts_39;
                          MR_Word next_value_of_InstVarSet_10;
                          MR_Word next_value_of_ParentInsts_11;
                          MR_Word next_value_of_Inst_12;
                          MR_Word next_value_of_STATE_VARIABLE_Specs_0_69;

                          {
                            DefnParentInsts_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), DefnParentInsts_39, 0) = ((MR_Box) (UserInstCtor_23));
                            MR_hl_field(MR_mktag(1), DefnParentInsts_39, 1) = ((MR_Box) (ParentInsts_11));
                          }
                          // direct tailcall eliminated
                          ;
                          next_value_of_InstVarSet_10 = DefnInstVarSet_32;
                          next_value_of_ParentInsts_11 = DefnParentInsts_39;
                          next_value_of_Inst_12 = EqvInst_38;
                          next_value_of_STATE_VARIABLE_Specs_0_69 = STATE_VARIABLE_Specs_85_85;
                          InstVarSet_10 = next_value_of_InstVarSet_10;
                          ParentInsts_11 = next_value_of_ParentInsts_11;
                          Inst_12 = next_value_of_Inst_12;
                          STATE_VARIABLE_Specs_0_69 = next_value_of_STATE_VARIABLE_Specs_0_69;
                          continue;
                        }
                        else
                          hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22])), STATE_VARIABLE_Specs_85_85, STATE_VARIABLE_Specs_70);
                      }
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/7", (MR_String) "non-user inst");
                    return;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/7", (MR_String) "non-user inst");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[18])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
    else
    {
      MR_Word Inst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Insts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_24_24;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Inst_19, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Insts_20;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_24_24;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_bound_insts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
    else
    {
      MR_Word BoundInst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word BoundInsts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ArgInsts_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_19, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_26_26;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, ArgInsts_23, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = BoundInsts_20;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_26_26;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
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
        MR_Word Var_47;

        succeeded = ((((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 1))) & (MR_Integer) 7);
          succeeded = (Uniq_14 == Var_47);
        }
        if (succeeded)
          UniqPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16]));
        else
          UniqPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[42]));
        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_10, InstVarSet_11, ParentInsts_12, Inst_13, UniqPieces_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word UniqPieces_65;
        MR_Word Var_50;

        succeeded = ((((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 1))) & (MR_Integer) 7);
          succeeded = (Uniq_14 == Var_50);
        }
        if (succeeded)
          UniqPieces_65 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16]));
        else
          UniqPieces_65 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[44]));
        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_10, InstVarSet_11, ParentInsts_12, Inst_13, UniqPieces_65, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word UniqPieces_89;
        MR_Word Var_74;

        succeeded = ((((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 1))) & (MR_Integer) 7);
          succeeded = (Uniq_14 == Var_74);
        }
        if (succeeded)
          UniqPieces_89 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16]));
        else
          UniqPieces_89 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[46]));
        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_10, InstVarSet_11, ParentInsts_12, Inst_13, UniqPieces_89, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      break;
    case (MR_Integer) 1:
      {
        MR_Word UniqPieces_113;
        MR_Word Var_98;

        succeeded = ((((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 1))) & (MR_Integer) 7);
          succeeded = (Uniq_14 == Var_98);
        }
        if (succeeded)
          UniqPieces_113 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16]));
        else
          UniqPieces_113 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[48]));
        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_10, InstVarSet_11, ParentInsts_12, Inst_13, UniqPieces_113, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
      }
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
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_40;

  hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(ParentInsts_12, &ParentPieces_16);
  InstPieces_17 = hlds__error_msg_inst__error_msg_inst_8_f_0(ModuleInfo_9, InstVarSet_11, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33])), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35])), Inst_13);
  {
    Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[36])));
    MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (ParentPieces_16));
  }
  {
    Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[37])));
    MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (InstPieces_17));
  }
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ProblemPieces_14, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[5])));
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_37, Var_40);
  Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_33, Var_36);
  {
    Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.invalid_inst_in_mutable\'/8"));
    MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Context_10));
    MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (Pieces_18));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_21 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
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
    MR_Word InstCtor_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word InstCtors_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadPieces_6;
    MR_Word TailPieces_7;
    MR_Word InstName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtor_3, (MR_Integer) 0))));
    MR_Integer InstArity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstCtor_3, (MR_Integer) 1))));
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (InstName_11));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (InstArity_12));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[40])));
    }
    {
      HeadPieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadPieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), HeadPieces_6, 1) = ((MR_Box) (Var_15));
    }
    hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(InstCtors_4, &TailPieces_7);
    *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_6, TailPieces_7);
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
