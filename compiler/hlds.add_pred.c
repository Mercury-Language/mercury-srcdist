/*
** Automatically generated from `add_pred.m'
** by the Mercury compiler,
** version rotd-2022-09-25
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


// :- module hlds.add_pred.
// :- implementation.

/*
INIT mercury__hlds__add_pred__init
ENDINIT
*/

#include "hlds.add_pred.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.make_hlds_types.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_pred__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_EnumFunctorDesc hlds__add_pred__hlds__add_pred__enum_functor_desc_part_of_predmode_0_0;

static const MR_EnumFunctorDesc hlds__add_pred__hlds__add_pred__enum_functor_desc_part_of_predmode_0_1;

static const MR_EnumFunctorDescPtr hlds__add_pred__hlds__add_pred__enum_ordinal_ordered_part_of_predmode_0[2];

static const MR_EnumFunctorDescPtr hlds__add_pred__hlds__add_pred__enum_name_ordered_part_of_predmode_0[2];

static const MR_Integer hlds__add_pred__hlds__add_pred__functor_number_map_part_of_predmode_0[2];

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_mode_decl__736__1_2_p_0(
  MR_Word WithInst_22,
  MR_Word HeadVar__2_58);

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__143__1_2_p_0(
  MR_Word WithInst_21,
  MR_Word HeadVar__2_70);

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__142__1_2_p_0(
  MR_Word WithType_20,
  MR_Word HeadVar__2_66);

static void MR_CALL 
hlds__add_pred__check_pred_if_field_access_function_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredStatus_7,
  MR_Word ItemPredDecl_8,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
hlds__add_pred__check_preds_if_field_access_function_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__add_pred__module_add_pred_decl_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__add_pred__module_add_pred_decl_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__add_pred__add_new_pred_20_p_0(
  MR_Word PredOrigin_21,
  MR_Word Context_22,
  MR_Word SeqNum_23,
  MR_Word PredStatus0_24,
  MR_Word NeedQual_25,
  MR_Word PredOrFunc_26,
  MR_Word PredModuleName_27,
  MR_String PredName_28,
  MR_Word TVarSet_29,
  MR_Word ExistQVars_30,
  MR_Word Types_31,
  MR_Word Constraints_32,
  MR_Word PredmodeDecl_33,
  MR_Word Purity_34,
  MR_Word Markers0_35,
  MR_Word * Succeeded_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_72,
  MR_Word * STATE_VARIABLE_ModuleInfo_73,
  MR_Word STATE_VARIABLE_Specs_0_74,
  MR_Word * STATE_VARIABLE_Specs_75);

static void MR_CALL 
hlds__add_pred__add_builtin_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word CompilationTarget_8,
  MR_Word PredId_9,
  MR_Word HeadTypes0_10,
  MR_Word STATE_VARIABLE_PredInfo_0_61,
  MR_Word * STATE_VARIABLE_PredInfo_62);

static void MR_CALL 
hlds__add_pred__report_any_unqualified_type_5_p_0(
  MR_Word PredSymName_6,
  MR_Word Context_7,
  MR_Word Type_8,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static void MR_CALL 
hlds__add_pred__report_any_unqualified_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
hlds__add_pred__check_for_modeless_predmode_decl_8_p_0(
  MR_Word PredStatus_9,
  MR_Word PredOrFunc_10,
  MR_Word PredSymName_11,
  MR_Word ArgTypes_12,
  MR_Word MaybeDetism_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
hlds__add_pred__record_pred_origin_7_p_0(
  MR_Word PredOrFunc_8,
  MR_Word PredSymName_9,
  MR_Word UserArity_10,
  MR_Word Origin_11,
  MR_Word Context_12,
  MR_Word * PredOrigin_13,
  MR_Word * Markers_14);

static MR_bool MR_CALL 
hlds__add_pred__module_add_mode_decl_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__add_pred__module_do_add_mode_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PartOfPredmode_12,
  MR_Word IsClassMethod_13,
  MR_Word ItemMercuryStatus_14,
  MR_Word ItemModeDecl_15,
  MR_Word STATE_VARIABLE_PredInfo_0_54,
  MR_Word * STATE_VARIABLE_PredInfo_55,
  MR_Integer * ProcId_17,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57);

static void MR_CALL 
hlds__add_pred__unspecified_det_for_local_4_p_0(
  MR_Word PFSymNameArity_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
hlds__add_pred__unspecified_det_for_exported_4_p_0(
  MR_Word PFSymNameArity_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
hlds__add_pred__unspecified_det_for_method_4_p_0(
  MR_Word PFSymNameArity_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static MR_bool MR_CALL 
hlds__add_pred____Unify____part_of_predmode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__add_pred____Compare____part_of_predmode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__add_pred_scalar_common_1[90][2];

static /* final */ const MR_Box hlds__add_pred_scalar_common_2[4][1];

static /* final */ const MR_Box hlds__add_pred_scalar_common_3[2][3];

static /* final */ const MR_Box hlds__add_pred_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__add_pred_scalar_common_5[1][8];




static /* final */ const MR_Box hlds__add_pred_scalar_common_1[90][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: you cannot declare a"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose name is a variable."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for a predicate whose name is a variable."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[7])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: you cannot declare a mode"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: predicate"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the modes of its arguments."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[7])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declares a determinism without declaring"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unqualified type"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in automatically generated interface file."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The problem is that the definition of this type"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not visible in the source file of the"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[7])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or a missing"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "either a typo in the type name,"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The cause is probably"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "module."))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (&hlds__add_pred_scalar_common_2[3]))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: mode declaration in the"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "section for"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is in the"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[7])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so it may not have a separate mode declaration."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[7])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "combined with a mode declaration,"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type class method"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for exported"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for local"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of local predicates.)"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[7])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to automatically infer the determinism"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option if you want the compiler"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--infer-det"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[67])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Use the"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--no-infer-det"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[73])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "you specified the"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(This is an error because"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In declaration of"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[7])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: a field access function for an exported field"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[82])))
  },
  /* row  85 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[85])))
  },
  /* row  88 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[79])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_pred_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__add_pred_scalar_common_2[4][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "prolog"))
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__add_pred_scalar_common_3[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[40]))),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__add_pred_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box hlds__add_pred_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__add_pred__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__add_pred__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_pred__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_EnumFunctorDesc hlds__add_pred__hlds__add_pred__enum_functor_desc_part_of_predmode_0_0 = {
  (MR_String) "not_part_of_predmode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__add_pred__hlds__add_pred__enum_functor_desc_part_of_predmode_0_1 = {
  (MR_String) "part_of_predmode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__add_pred__hlds__add_pred__enum_ordinal_ordered_part_of_predmode_0[2] = {
  &hlds__add_pred__hlds__add_pred__enum_functor_desc_part_of_predmode_0_0,
  &hlds__add_pred__hlds__add_pred__enum_functor_desc_part_of_predmode_0_1
};

static const MR_EnumFunctorDescPtr hlds__add_pred__hlds__add_pred__enum_name_ordered_part_of_predmode_0[2] = {
  &hlds__add_pred__hlds__add_pred__enum_functor_desc_part_of_predmode_0_0,
  &hlds__add_pred__hlds__add_pred__enum_functor_desc_part_of_predmode_0_1
};

static const MR_Integer hlds__add_pred__hlds__add_pred__functor_number_map_part_of_predmode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__add_pred__hlds__add_pred__type_ctor_info_part_of_predmode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__add_pred____Unify____part_of_predmode_0_0_10001)),
  ((MR_Box) (hlds__add_pred____Compare____part_of_predmode_0_0_10001)),
  (MR_String) "hlds.add_pred",
  (MR_String) "part_of_predmode",
  { hlds__add_pred__hlds__add_pred__enum_name_ordered_part_of_predmode_0 },
  { hlds__add_pred__hlds__add_pred__enum_ordinal_ordered_part_of_predmode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__add_pred__hlds__add_pred__functor_number_map_part_of_predmode_0,

};

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_mode_decl__736__1_2_p_0(
  MR_Word WithInst_22,
  MR_Word HeadVar__2_58)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[1]), ((MR_Box) (WithInst_22)), ((MR_Box) (HeadVar__2_58)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__143__1_2_p_0(
  MR_Word WithInst_21,
  MR_Word HeadVar__2_70)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[1]), ((MR_Box) (WithInst_21)), ((MR_Box) (HeadVar__2_70)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__142__1_2_p_0(
  MR_Word WithType_20,
  MR_Word HeadVar__2_66)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[0]), ((MR_Box) (WithType_20)), ((MR_Box) (HeadVar__2_66)));
  return succeeded;
}

void MR_CALL 
hlds__add_pred____Compare____part_of_predmode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
hlds__add_pred____Unify____part_of_predmode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__add_pred__check_pred_if_field_access_function_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredStatus_7,
  MR_Word ItemPredDecl_8,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 0))));
  MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word TypesAndModes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 2))));
  MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_8, (MR_Integer) 12))));

  switch (PredOrFunc_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word PredFormArity_24;
        MR_Word UserArity_25;
        MR_Integer UserArityInt_30;
        MR_Word FieldName_32;
        MR_Integer Var_33;
        MR_Word AccessType_31;

        PredFormArity_24 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_12);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_25, PredFormArity_24);
        UserArityInt_30 = (MR_Integer) (UserArity_25);
        succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_6, SymName_10, &Var_33, &AccessType_31, &FieldName_32);
        if (succeeded)
          succeeded = (UserArityInt_30 == Var_33);
        if (succeeded)
        {
          MR_Word CtorFieldTable_34;
          MR_Word TypeInfo_38_52;
          MR_Word FieldDefn_35;
          MR_Word DefnStatus_37;
          MR_Word Var_43;
          MR_Word Var_45;
          MR_Word Var_51;
          MR_Box conv0_Var_43;
          MR_Word Var_46;

          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_6, &CtorFieldTable_34);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__add_pred_scalar_common_1[5]), CtorFieldTable_34, ((MR_Box) (FieldName_32)), &conv0_Var_43);
          if (succeeded)
          {
            Var_43 = ((MR_Word) (conv0_Var_43));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FieldDefn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0))));
              Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1))));
              TypeInfo_38_52 = (MR_Word) (&hlds__add_pred_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_52, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_51)));
              if (succeeded)
              {
                Var_46 = (MR_Word) (PredStatus_7);
                succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 12U));
                if (succeeded)
                {
                  DefnStatus_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_35, (MR_Integer) 1))));
                  Var_45 = (MR_Word) (DefnStatus_37);
                  succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 12U));
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word PredFormArity_41;
            MR_Word PFSymNameArity_42;
            MR_Word Pieces_53;
            MR_Word Spec_54;
            MR_Word Var_57;
            MR_Word Var_58;

            parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_25, &PredFormArity_41);
            {
              PFSymNameArity_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PFSymNameArity_42, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), PFSymNameArity_42, 1) = ((MR_Box) (SymName_10));
              MR_hl_field(MR_mktag(0), PFSymNameArity_42, 2) = ((MR_Box) (PredFormArity_41));
            }
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (PFSymNameArity_42));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
              MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[87])));
            }
            {
              Pieces_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[80])));
              MR_hl_field(MR_mktag(1), Pieces_53, 1) = ((MR_Box) (Var_57));
            }
            {
              Spec_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_54, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.report_field_status_mismatch\'/4"));
              MR_hl_field(MR_mktag(1), Spec_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_54, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), Spec_54, 3) = ((MR_Box) (Context_22));
              MR_hl_field(MR_mktag(1), Spec_54, 4) = ((MR_Box) (Pieces_53));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_27 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_54));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
            }
          }
          else
            *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
        }
        else
          *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
      break;
  }
}

static void MR_CALL 
hlds__add_pred__check_preds_if_field_access_function_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_27;

  hlds__add_pred__check_pred_if_field_access_function_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_27));
}

void MR_CALL 
hlds__add_pred__check_preds_if_field_access_function_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_4 = STATE_VARIABLE_Specs_0_3;
    else
    {
      MR_Word SecList_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word SecLists_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SectionInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecList_10, (MR_Integer) 0))));
      MR_Word ItemPredSecls_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecList_10, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_13, (MR_Integer) 0))));
      MR_Word PredStatus_17;
      MR_Word Var_20;
      MR_Word STATE_VARIABLE_Specs_21_21;
      MR_Box conv1_STATE_VARIABLE_Specs_21_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_3;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_15, &PredStatus_17);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&hlds__add_pred_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (hlds__add_pred__check_preds_if_field_access_function_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (PredStatus_17));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__add_pred_scalar_common_1[4]), Var_20, ItemPredSecls_14, ((MR_Box) (STATE_VARIABLE_Specs_0_3)), &conv1_STATE_VARIABLE_Specs_21_21);
      STATE_VARIABLE_Specs_21_21 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_21_21));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = SecLists_11;
      next_value_of_STATE_VARIABLE_Specs_0_3 = STATE_VARIABLE_Specs_21_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Specs_0_3 = next_value_of_STATE_VARIABLE_Specs_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__add_pred__module_add_pred_decl_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__143__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__add_pred__module_add_pred_decl_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__142__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
hlds__add_pred__module_add_pred_decl_9_p_0(
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word NeedQual_12,
  MR_Word ItemPredDecl_13,
  MR_Word * MaybePredProcId_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
{
  MR_bool succeeded;
  MR_Word PredSymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 0))));
  MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word ArgTypesAndModes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 2))));
  MR_Word WithType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 3))));
  MR_Word WithInst_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 4))));
  MR_Word MaybeDetism_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 5))));
  MR_Word Origin_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 6))));
  MR_Word TypeVarSet_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 7))));
  MR_Word InstVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 8))));
  MR_Word ExistQVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 9))));
  MR_Word Purity_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 10))) & (MR_Integer) 3);
  MR_Word Constraints_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 11))));
  MR_Word Context_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 12))));
  MR_Word SeqNum_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_13, (MR_Integer) 13))));
  MR_Word PredModuleName_32;
  MR_String PredName_33;
  MR_Word Var_63;
  MR_Word Var_67;

  if (((MR_tag((MR_Word) PredSymName_17)) == (MR_Integer) 1))
  {
    PredModuleName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSymName_17, (MR_Integer) 0))));
    PredName_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredSymName_17, (MR_Integer) 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_pred.module_add_pred_decl\'/9", (MR_String) "unqualified PredSymName");
      return;
    }
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&hlds__add_pred_scalar_common_4[1]));
    MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (hlds__add_pred__module_add_pred_decl_9_p_0_1));
    MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (WithType_20));
    MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140hlds.add_pred.module_add_pred_decl\'/9", (MR_String) "WithType != no");
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&hlds__add_pred_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (hlds__add_pred__module_add_pred_decl_9_p_0_2));
    MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (WithInst_21));
    MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_67, (MR_String) "predicate \140hlds.add_pred.module_add_pred_decl\'/9", (MR_String) "WithInst != no");
  succeeded = (strcmp(PredName_33, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_String PredOrFuncStr_34;
    MR_Word Pieces_35;
    MR_Word Spec_36;
    MR_Word Var_73;
    MR_Word Var_74;

    PredOrFuncStr_34 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_18);
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (PredOrFuncStr_34));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[9])));
    }
    {
      Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[6])));
      MR_hl_field(MR_mktag(1), Pieces_35, 1) = ((MR_Box) (Var_73));
    }
    {
      Spec_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.module_add_pred_decl\'/9"));
      MR_hl_field(MR_mktag(1), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_36, 3) = ((MR_Box) (Context_29));
      MR_hl_field(MR_mktag(1), Spec_36, 4) = ((MR_Box) (Pieces_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_60 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_59));
    }
    *MaybePredProcId_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_0_57;
  }
  else
  {
    MR_Word ArgTypes_37;
    MR_Word MaybeArgModes0_38;
    MR_Integer PredFormArityInt_39;
    MR_Word MaybeArgModes_41;
    MR_Word PredmodeDecl_47;
    MR_Word UserArity_49;
    MR_Word PredOrigin_50;
    MR_Word Markers_51;
    MR_Word Succeeded_52;
    MR_Word Var_89;
    MR_Word STATE_VARIABLE_ModuleInfo_90_90;
    MR_Word STATE_VARIABLE_Specs_91_91;
    MR_Word ArgModes0_40;

    parse_tree__prog_util__split_types_and_modes_3_p_0(ArgTypesAndModes_19, &ArgTypes_37, &MaybeArgModes0_38);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_37, &PredFormArityInt_39);
    succeeded = (PredOrFunc_18 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MaybeDetism_22 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeArgModes0_38 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgModes0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes0_38, (MR_Integer) 0))));
          succeeded = (ArgModes0_40 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MaybeArgModes_41 = (MR_Word) ((MR_Unsigned) 0U);
      PredmodeDecl_47 = (MR_Integer) 0;
    }
    else
    {
      succeeded = (PredOrFunc_18 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (MaybeArgModes0_38 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (MaybeDetism_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Integer FuncArityInt_43;
        MR_Word InMode_44;
        MR_Word InModes_45;
        MR_Word OutMode_46;
        MR_Word Var_86;
        MR_Word Var_87;

        parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArityInt_43, PredFormArityInt_39);
        parse_tree__prog_mode__in_mode_1_p_0(&InMode_44);
        mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FuncArityInt_43, ((MR_Box) (InMode_44)), &InModes_45);
        parse_tree__prog_mode__out_mode_1_p_0(&OutMode_46);
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (OutMode_46));
          MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InModes_45, Var_87);
        {
          MaybeArgModes_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeArgModes_41, 0) = ((MR_Box) (Var_86));
        }
        PredmodeDecl_47 = (MR_Integer) 1;
      }
      else
      {
        MaybeArgModes_41 = MaybeArgModes0_38;
        if ((MaybeArgModes_41 == (MR_Word) ((MR_Unsigned) 0U)))
          PredmodeDecl_47 = (MR_Integer) 0;
        else
          PredmodeDecl_47 = (MR_Integer) 1;
      }
    }
    Var_89 = (MR_Word) (PredFormArityInt_39);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &UserArity_49, Var_89);
    hlds__add_pred__record_pred_origin_7_p_0(PredOrFunc_18, PredSymName_17, UserArity_49, Origin_23, Context_29, &PredOrigin_50, &Markers_51);
    hlds__add_pred__add_new_pred_20_p_0(PredOrigin_50, Context_29, SeqNum_30, PredStatus_11, NeedQual_12, PredOrFunc_18, PredModuleName_32, PredName_33, TypeVarSet_24, ExistQVars_26, ArgTypes_37, Constraints_28, PredmodeDecl_47, Purity_27, Markers_51, &Succeeded_52, STATE_VARIABLE_ModuleInfo_0_57, &STATE_VARIABLE_ModuleInfo_90_90, STATE_VARIABLE_Specs_0_59, &STATE_VARIABLE_Specs_91_91);
    if ((MaybeArgModes_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybePredProcId_14 = (MR_Word) ((MR_Unsigned) 0U);
      hlds__add_pred__check_for_modeless_predmode_decl_8_p_0(PredStatus_11, PredOrFunc_18, PredSymName_17, ArgTypes_37, MaybeDetism_22, Context_29, STATE_VARIABLE_Specs_91_91, STATE_VARIABLE_Specs_60);
      *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_90_90;
    }
    else
    {
      MR_Word ArgModes_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes_41, (MR_Integer) 0))));

      switch (Succeeded_52) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *MaybePredProcId_14 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_90_90;
            *STATE_VARIABLE_Specs_60 = STATE_VARIABLE_Specs_91_91;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IsClassMethod_54;
            MR_Word ItemModeDecl_55;
            MR_Word PredProcId_56;
            MR_Word Var_93;

            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_51, (MR_Integer) 11);
            if (succeeded)
              IsClassMethod_54 = (MR_Integer) 1;
            else
              IsClassMethod_54 = (MR_Integer) 0;
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (PredOrFunc_18));
            }
            {
              ItemModeDecl_55 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemModeDecl_55, 0) = ((MR_Box) (PredSymName_17));
              MR_hl_field(MR_mktag(0), ItemModeDecl_55, 1) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(0), ItemModeDecl_55, 2) = ((MR_Box) (ArgModes_53));
              MR_hl_field(MR_mktag(0), ItemModeDecl_55, 3) = ((MR_Box) (WithInst_21));
              MR_hl_field(MR_mktag(0), ItemModeDecl_55, 4) = ((MR_Box) (MaybeDetism_22));
              MR_hl_field(MR_mktag(0), ItemModeDecl_55, 5) = ((MR_Box) (InstVarSet_25));
              MR_hl_field(MR_mktag(0), ItemModeDecl_55, 6) = ((MR_Box) (Context_29));
              MR_hl_field(MR_mktag(0), ItemModeDecl_55, 7) = ((MR_Box) (SeqNum_30));
            }
            hlds__add_pred__module_add_mode_decl_10_p_0((MR_Integer) 1, IsClassMethod_54, ItemMercuryStatus_10, PredStatus_11, ItemModeDecl_55, &PredProcId_56, STATE_VARIABLE_ModuleInfo_90_90, STATE_VARIABLE_ModuleInfo_58, STATE_VARIABLE_Specs_91_91, STATE_VARIABLE_Specs_60);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePredProcId_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcId_56));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
hlds__add_pred__add_new_pred_20_p_0(
  MR_Word PredOrigin_21,
  MR_Word Context_22,
  MR_Word SeqNum_23,
  MR_Word PredStatus0_24,
  MR_Word NeedQual_25,
  MR_Word PredOrFunc_26,
  MR_Word PredModuleName_27,
  MR_String PredName_28,
  MR_Word TVarSet_29,
  MR_Word ExistQVars_30,
  MR_Word Types_31,
  MR_Word Constraints_32,
  MR_Word PredmodeDecl_33,
  MR_Word Purity_34,
  MR_Word Markers0_35,
  MR_Word * Succeeded_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_72,
  MR_Word * STATE_VARIABLE_ModuleInfo_73,
  MR_Word STATE_VARIABLE_Specs_0_74,
  MR_Word * STATE_VARIABLE_Specs_75)
{
  MR_bool succeeded;
  MR_Word PredStatus_39;
  MR_Word PredFormArity_40;
  MR_Word PredSymName_41;
  MR_Word MaybeCurUserDecl_45;
  MR_Word PredTable0_47;
  MR_Word ClausesInfo_48;
  MR_Word Proofs_49;
  MR_Word ConstraintMap_50;
  MR_Word PurityMarkers_51;
  MR_Word Markers_52;
  MR_Word VarNameRemap_53;
  MR_Word PredInfo0_54;
  MR_Word PredIds_55;
  MR_Word DefnThisModule_71;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word STATE_VARIABLE_Specs_86_86;
  MR_Word Var_76 = (MR_Word) (PredStatus0_24);
  MR_Word ItemExport_43;
  MR_Word OldItemStatus_42;

  succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    PredStatus_39 = (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_pred_scalar_common_2[2]))));
  else
    PredStatus_39 = PredStatus0_24;
  PredFormArity_40 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_31);
  {
    PredSymName_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), PredSymName_41, 0) = ((MR_Box) (PredModuleName_27));
    MR_hl_field(MR_mktag(1), PredSymName_41, 1) = ((MR_Box) (PredName_28));
  }
  OldItemStatus_42 = (MR_Word) (PredStatus_39);
  switch (MR_tag((MR_Word) OldItemStatus_42)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(OldItemStatus_42)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          {
            ItemExport_43 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            ItemExport_43 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            ItemExport_43 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  if (succeeded)
  {
    MR_Word DeclSection_44;
    MR_Word Var_79;

    switch (ItemExport_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        DeclSection_44 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        DeclSection_44 = (MR_Integer) 1;
        break;
    }
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = (MR_Box) (((((MR_Unsigned) (DeclSection_44) << 1)) | (MR_Unsigned) (PredmodeDecl_33)));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (SeqNum_23));
    }
    {
      MaybeCurUserDecl_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeCurUserDecl_45, 0) = ((MR_Box) (Var_79));
    }
  }
  else
    MaybeCurUserDecl_45 = (MR_Word) ((MR_Unsigned) 0U);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_72, &PredTable0_47);
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (PredFormArity_40));
  }
  Var_82 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
  hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_26, Var_81, Var_82, &ClausesInfo_48);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_49);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_50);
  hlds__hlds_pred__purity_to_markers_2_p_0(Purity_34, &PurityMarkers_51);
  hlds__hlds_pred__add_markers_3_p_0(PurityMarkers_51, Markers0_35, &Markers_52);
  mercury__map__init_1_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_53);
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_26, PredModuleName_27, PredName_28, PredFormArity_40, Context_22, PredOrigin_21, PredStatus_39, MaybeCurUserDecl_45, (MR_Word) (&hlds__add_pred_scalar_common_2[0]), Markers_52, Types_31, TVarSet_29, ExistQVars_30, Constraints_32, Proofs_49, ConstraintMap_50, ClausesInfo_48, VarNameRemap_53, &PredInfo0_54);
  hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredTable0_47, (MR_Integer) 0, PredOrFunc_26, PredModuleName_27, PredName_28, PredFormArity_40, &PredIds_55);
  if ((PredIds_55 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PQInfo_62;
    MR_Word PredId_63;
    MR_Word PredTable1_64;
    MR_Word PredTable_70;

    *Succeeded_36 = (MR_Integer) 1;
    hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_72, &PQInfo_62);
    hlds__pred_table__predicate_table_insert_qual_6_p_0(PredInfo0_54, NeedQual_25, PQInfo_62, &PredId_63, PredTable0_47, &PredTable1_64);
    succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo0_54);
    if (succeeded)
    {
      MR_Word Globals_65;
      MR_Word CompilationTarget_66;
      MR_Word PredInfo_67;
      MR_Word PredIdTable1_68;
      MR_Word PredIdTable_69;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_72, &Globals_65);
      libs__globals__get_target_2_p_0(Globals_65, &CompilationTarget_66);
      hlds__add_pred__add_builtin_6_p_0(STATE_VARIABLE_ModuleInfo_0_72, CompilationTarget_66, PredId_63, Types_31, PredInfo0_54, &PredInfo_67);
      hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredTable1_64, &PredIdTable1_68);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_63)), ((MR_Box) (PredInfo_67)), PredIdTable1_68, &PredIdTable_69);
      hlds__pred_table__predicate_table_set_pred_id_table_3_p_0(PredIdTable_69, PredTable1_64, &PredTable_70);
    }
    else
      PredTable_70 = PredTable1_64;
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_70, STATE_VARIABLE_ModuleInfo_0_72, STATE_VARIABLE_ModuleInfo_73);
    STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_0_74;
  }
  else
  {
    MR_Word OrigPred_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_55, (MR_Integer) 0))));
    MR_Word OrigPredInfo_58;
    MR_Word OrigContext_59;
    MR_Word Var_84;

    *Succeeded_36 = (MR_Integer) 0;
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_72, OrigPred_56, &OrigPredInfo_58);
    hlds__hlds_pred__pred_info_get_context_2_p_0(OrigPredInfo_58, &OrigContext_59);
    Var_84 = (MR_Word) (PredStatus0_24);
    succeeded = (Var_84 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_0_74;
    else
    {
      MR_String PredOrFuncStr_60;
      MR_Word UserArity_61;

      PredOrFuncStr_60 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_26);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_26, &UserArity_61, PredFormArity_40);
      hlds__make_hlds_error__report_multiply_defined_8_p_0(PredOrFuncStr_60, PredSymName_41, UserArity_61, Context_22, OrigContext_59, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_74, &STATE_VARIABLE_Specs_86_86);
    }
    *STATE_VARIABLE_ModuleInfo_73 = STATE_VARIABLE_ModuleInfo_0_72;
  }
  DefnThisModule_71 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus0_24);
  switch (DefnThisModule_71) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      hlds__add_pred__report_any_unqualified_types_5_p_0(PredSymName_41, Context_22, Types_31, STATE_VARIABLE_Specs_86_86, STATE_VARIABLE_Specs_75);
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_75 = STATE_VARIABLE_Specs_86_86;
      break;
  }
}

static void MR_CALL 
hlds__add_pred__add_builtin_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word CompilationTarget_8,
  MR_Word PredId_9,
  MR_Word HeadTypes0_10,
  MR_Word STATE_VARIABLE_PredInfo_0_61,
  MR_Word * STATE_VARIABLE_PredInfo_62)
{
  MR_bool succeeded;
  MR_Word ModuleName_12;
  MR_String Name_13;
  MR_Word Context_14;
  MR_Word ClausesInfo0_15;
  MR_Word VarSet0_16;
  MR_Word ProcArgVector_17;
  MR_Word HeadVars0_18;
  MR_Word GoalInfo0_19;
  MR_Word NonLocals_20;
  MR_Word GoalInfo1_21;
  MR_Word GoalExpr_23;
  MR_Word GoalInfo_24;
  MR_Word HeadVars_25;
  MR_Word HeadTypes_26;
  MR_Word VarSet_27;
  MR_Word Stub_28;
  MR_Word ExplicitVarTypes_52;
  MR_Word VarTable_53;
  MR_Word RttiVarMaps_54;
  MR_Word TVarNameMap_55;
  MR_Word Markers_60;
  MR_Word Var_108;
  MR_Word STATE_VARIABLE_PredInfo_111_111;
  MR_Word Var_123;

  ModuleName_12 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_61);
  Name_13 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_61);
  hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_0_61, &Context_14);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_61, &ClausesInfo0_15);
  hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo0_15, &VarSet0_16);
  hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(ClausesInfo0_15, &ProcArgVector_17);
  HeadVars0_18 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__add_pred_scalar_common_1[3]), ProcArgVector_17);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_14, &GoalInfo0_19);
  NonLocals_20 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars0_18);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_20, GoalInfo0_19, &GoalInfo1_21);
  Var_123 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_123);
  if (succeeded)
  {
    if ((strcmp(Name_13, (MR_String) "builtin_compound_eq") == 0))
      succeeded = MR_TRUE;
    else
    if ((strcmp(Name_13, (MR_String) "builtin_compound_lt") == 0))
      succeeded = MR_TRUE;
    else
    if ((strcmp(Name_13, (MR_String) "store_at_ref_impure") == 0))
      switch (CompilationTarget_8) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
      }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
  {
    GoalExpr_23 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_3[0]));
    GoalInfo_24 = GoalInfo1_21;
    HeadVars_25 = HeadVars0_18;
    HeadTypes_26 = HeadTypes0_10;
    VarSet_27 = VarSet0_16;
    Stub_28 = (MR_Integer) 1;
  }
  else
  {
    {
      MR_Word Var_124;

      Var_124 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_124);
      if (succeeded)
        succeeded = (strcmp(Name_13, (MR_String) "trace_get_io_state") == 0);
    }
    if (!(succeeded))
    {
      MR_Word Var_125;

      Var_125 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_125);
      if (succeeded)
        succeeded = (strcmp(Name_13, (MR_String) "unsafe_get_io_state") == 0);
    }
    if (succeeded)
    {
      MR_Word LHS_31;
      MR_Word UnifyMode_33;
      MR_Word Unification_34;
      MR_Word AssignExpr_36;
      MR_Word GoalInfoWithZero_37;
      MR_Word AssignGoal_38;
      MR_Word CastExpr_39;
      MR_Word GoalInfoWithZeroHeadVars_40;
      MR_Word CastGoal_41;
      MR_Word ConjExpr_42;
      MR_Word ConjGoal_43;
      MR_Word Var_65;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_75;
      MR_Word Var_82;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_92;
      MR_Word Var_94;
      MR_Word Var_95;

      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &LHS_31, VarSet0_16, &VarSet_27);
      {
        HeadVars_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVars_25, 0) = ((MR_Box) (LHS_31));
        MR_hl_field(MR_mktag(1), HeadVars_25, 1) = ((MR_Box) (HeadVars0_18));
      }
      Var_65 = parse_tree__builtin_lib_types__int_type_0_f_0();
      {
        HeadTypes_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadTypes_26, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), HeadTypes_26, 1) = ((MR_Box) (HeadTypes0_10));
      }
      Var_71 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_72 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_73 = parse_tree__prog_mode__ground_inst_0_f_0();
      {
        UnifyMode_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyMode_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), UnifyMode_33, 1) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), UnifyMode_33, 2) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), UnifyMode_33, 3) = ((MR_Box) (Var_73));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (UnifyMode_33));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unification_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_34, 0) = ((MR_Box) (LHS_31));
        MR_hl_field(MR_mktag(0), Unification_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[40])));
        MR_hl_field(MR_mktag(0), Unification_34, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_34, 3) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), Unification_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_34, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_34, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        AssignExpr_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AssignExpr_36, 0) = ((MR_Box) (LHS_31));
        MR_hl_field(MR_mktag(1), AssignExpr_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_3[1])));
        MR_hl_field(MR_mktag(1), AssignExpr_36, 2) = ((MR_Box) (UnifyMode_33));
        MR_hl_field(MR_mktag(1), AssignExpr_36, 3) = ((MR_Box) (Unification_34));
        MR_hl_field(MR_mktag(1), AssignExpr_36, 4) = ((MR_Box) (&hlds__add_pred_scalar_common_1[41]));
      }
      Var_82 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_31);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_82, GoalInfo0_19, &GoalInfoWithZero_37);
      {
        AssignGoal_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AssignGoal_38, 0) = ((MR_Box) (AssignExpr_36));
        MR_hl_field(MR_mktag(0), AssignGoal_38, 1) = ((MR_Box) (GoalInfoWithZero_37));
      }
      Var_86 = parse_tree__prog_mode__in_mode_0_f_0();
      Var_88 = parse_tree__prog_mode__uo_mode_0_f_0();
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_87));
      }
      {
        CastExpr_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CastExpr_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), CastExpr_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_2[2])));
        MR_hl_field(MR_mktag(3), CastExpr_39, 2) = ((MR_Box) (HeadVars_25));
        MR_hl_field(MR_mktag(3), CastExpr_39, 3) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(3), CastExpr_39, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), CastExpr_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      Var_92 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_25);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_92, GoalInfo0_19, &GoalInfoWithZeroHeadVars_40);
      {
        CastGoal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CastGoal_41, 0) = ((MR_Box) (CastExpr_39));
        MR_hl_field(MR_mktag(0), CastGoal_41, 1) = ((MR_Box) (GoalInfoWithZeroHeadVars_40));
      }
      {
        Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (CastGoal_41));
        MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (AssignGoal_38));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
      }
      {
        ConjExpr_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConjExpr_42, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConjExpr_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), ConjExpr_42, 2) = ((MR_Box) (Var_94));
      }
      {
        ConjGoal_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConjGoal_43, 0) = ((MR_Box) (ConjExpr_42));
        MR_hl_field(MR_mktag(0), ConjGoal_43, 1) = ((MR_Box) (GoalInfoWithZeroHeadVars_40));
      }
      {
        GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), GoalExpr_23, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), GoalExpr_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[42])));
        MR_hl_field(MR_mktag(3), GoalExpr_23, 2) = ((MR_Box) (ConjGoal_43));
      }
      GoalInfo_24 = GoalInfo1_21;
      Stub_28 = (MR_Integer) 0;
    }
    else
    {
      {
        MR_Word Var_126;

        Var_126 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_126);
        if (succeeded)
          succeeded = (strcmp(Name_13, (MR_String) "trace_set_io_state") == 0);
      }
      if (!(succeeded))
      {
        MR_Word Var_127;

        Var_127 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, Var_127);
        if (succeeded)
          succeeded = (strcmp(Name_13, (MR_String) "unsafe_set_io_state") == 0);
      }
      if (succeeded)
      {
        MR_Word ConjGoal_117;

        GoalInfo_24 = GoalInfo1_21;
        {
          ConjGoal_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ConjGoal_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_3[0])));
          MR_hl_field(MR_mktag(0), ConjGoal_117, 1) = ((MR_Box) (GoalInfo1_21));
        }
        {
          GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), GoalExpr_23, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), GoalExpr_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[43])));
          MR_hl_field(MR_mktag(3), GoalExpr_23, 2) = ((MR_Box) (ConjGoal_117));
        }
        HeadVars_25 = HeadVars0_18;
        HeadTypes_26 = HeadTypes0_10;
        VarSet_27 = VarSet0_16;
        Stub_28 = (MR_Integer) 0;
      }
      else
      {
        MR_Word SymName_45;
        MR_Integer ModeId_46;
        MR_Word Purity_48;

        {
          SymName_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SymName_45, 0) = ((MR_Box) (ModuleName_12));
          MR_hl_field(MR_mktag(1), SymName_45, 1) = ((MR_Box) (Name_13));
        }
        ModeId_46 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        {
          GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), GoalExpr_23, 0) = ((MR_Box) (PredId_9));
          MR_hl_field(MR_mktag(2), GoalExpr_23, 1) = ((MR_Box) (ModeId_46));
          MR_hl_field(MR_mktag(2), GoalExpr_23, 2) = ((MR_Box) (HeadVars0_18));
          MR_hl_field(MR_mktag(2), GoalExpr_23, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), GoalExpr_23, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), GoalExpr_23, 5) = ((MR_Box) (SymName_45));
        }
        hlds__hlds_pred__pred_info_get_purity_2_p_0(STATE_VARIABLE_PredInfo_0_61, &Purity_48);
        hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity_48, GoalInfo1_21, &GoalInfo_24);
        HeadVars_25 = HeadVars0_18;
        HeadTypes_26 = HeadTypes0_10;
        VarSet_27 = VarSet0_16;
        Stub_28 = (MR_Integer) 0;
      }
    }
  }
  parse_tree__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_25, HeadTypes_26, &ExplicitVarTypes_52);
  hlds__hlds_pred__corresponding_vars_types_to_var_table_5_p_0(ModuleInfo_7, VarSet_27, HeadVars_25, HeadTypes_26, &VarTable_53);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_54);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__add_pred_scalar_common_1[2]), &TVarNameMap_55);
  Var_108 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  switch (Stub_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goal_49;
        MR_Word Clause_50;
        MR_Word ClausesRep_51;
        MR_Word ClausesInfo_56;
        MR_Word Markers0_57;
        MR_Word Var_105;

        {
          Goal_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Goal_49, 0) = ((MR_Box) (GoalExpr_23));
          MR_hl_field(MR_mktag(0), Goal_49, 1) = ((MR_Box) (GoalInfo_24));
        }
        {
          Clause_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Clause_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Clause_50, 1) = ((MR_Box) (Goal_49));
          MR_hl_field(MR_mktag(0), Clause_50, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Clause_50, 3) = ((MR_Box) (Context_14));
          MR_hl_field(MR_mktag(0), Clause_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Clause_50));
          MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__hlds_clauses__set_clause_list_2_p_0(Var_105, &ClausesRep_51);
        {
          ClausesInfo_56 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClausesInfo_56, 0) = ((MR_Box) (VarSet_27));
          MR_hl_field(MR_mktag(0), ClausesInfo_56, 1) = ((MR_Box) (ExplicitVarTypes_52));
          MR_hl_field(MR_mktag(0), ClausesInfo_56, 2) = ((MR_Box) (VarTable_53));
          MR_hl_field(MR_mktag(0), ClausesInfo_56, 3) = ((MR_Box) (RttiVarMaps_54));
          MR_hl_field(MR_mktag(0), ClausesInfo_56, 4) = ((MR_Box) (TVarNameMap_55));
          MR_hl_field(MR_mktag(0), ClausesInfo_56, 5) = ((MR_Box) (ProcArgVector_17));
          MR_hl_field(MR_mktag(0), ClausesInfo_56, 6) = ((MR_Box) (ClausesRep_51));
          MR_hl_field(MR_mktag(0), ClausesInfo_56, 7) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(0), ClausesInfo_56, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        }
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_56, STATE_VARIABLE_PredInfo_0_61, &STATE_VARIABLE_PredInfo_111_111);
        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_111_111, &Markers0_57);
        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 8, Markers0_57, &Markers_60);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Markers2_59;
        MR_Word ClausesRep_133;
        MR_Word ClausesInfo_134;
        MR_Word Markers0_135;
        MR_Word Markers1_136;

        hlds__hlds_clauses__set_clause_list_2_p_0((MR_Word) ((MR_Unsigned) 0U), &ClausesRep_133);
        {
          ClausesInfo_134 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClausesInfo_134, 0) = ((MR_Box) (VarSet_27));
          MR_hl_field(MR_mktag(0), ClausesInfo_134, 1) = ((MR_Box) (ExplicitVarTypes_52));
          MR_hl_field(MR_mktag(0), ClausesInfo_134, 2) = ((MR_Box) (VarTable_53));
          MR_hl_field(MR_mktag(0), ClausesInfo_134, 3) = ((MR_Box) (RttiVarMaps_54));
          MR_hl_field(MR_mktag(0), ClausesInfo_134, 4) = ((MR_Box) (TVarNameMap_55));
          MR_hl_field(MR_mktag(0), ClausesInfo_134, 5) = ((MR_Box) (ProcArgVector_17));
          MR_hl_field(MR_mktag(0), ClausesInfo_134, 6) = ((MR_Box) (ClausesRep_133));
          MR_hl_field(MR_mktag(0), ClausesInfo_134, 7) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(0), ClausesInfo_134, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        }
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_134, STATE_VARIABLE_PredInfo_0_61, &STATE_VARIABLE_PredInfo_111_111);
        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_111_111, &Markers0_135);
        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 8, Markers0_135, &Markers1_136);
        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, Markers1_136, &Markers2_59);
        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 1, Markers2_59, &Markers_60);
      }
      break;
  }
  hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_60, STATE_VARIABLE_PredInfo_111_111, STATE_VARIABLE_PredInfo_62);
}

static void MR_CALL 
hlds__add_pred__report_any_unqualified_type_5_p_0(
  MR_Word PredSymName_6,
  MR_Word Context_7,
  MR_Word Type_8,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_8, (MR_Integer) 0))));
          MR_Word ArgTypes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_8, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_Specs_71_71;

          if (((MR_tag((MR_Word) TypeCtorSymName_10)) == (MR_Integer) 1))
            STATE_VARIABLE_Specs_71_71 = STATE_VARIABLE_Specs_0_30;
          else
          {
            MR_String TypeCtorName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorSymName_10, (MR_Integer) 0))));

            if (((MR_tag((MR_Word) PredSymName_6)) == (MR_Integer) 1))
            {
              MR_Word PredModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSymName_6, (MR_Integer) 0))));
              MR_Word Pieces_18;
              MR_Word Spec_19;
              MR_Word Var_34;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word Var_39;
              MR_Word Var_42;
              MR_Word Var_45;
              MR_Word Var_46;

              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (TypeCtorName_15));
              }
              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (PredModuleName_16));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
                MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[39])));
              }
              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[27])));
                MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
              }
              {
                Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[26])));
                MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
              }
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[25])));
                MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
              }
              {
                Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
                MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
              }
              {
                Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[24])));
                MR_hl_field(MR_mktag(1), Pieces_18, 1) = ((MR_Box) (Var_34));
              }
              {
                Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.report_any_unqualified_type\'/5"));
                MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Context_7));
                MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (Pieces_18));
              }
              {
                STATE_VARIABLE_Specs_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_71_71, 0) = ((MR_Box) (Spec_19));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_71_71, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
              }
            }
            else
              STATE_VARIABLE_Specs_71_71 = STATE_VARIABLE_Specs_0_30;
          }
          hlds__add_pred__report_any_unqualified_types_5_p_0(PredSymName_6, Context_7, ArgTypes_11, STATE_VARIABLE_Specs_71_71, STATE_VARIABLE_Specs_31);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_8, (MR_Integer) 1))));

              hlds__add_pred__report_any_unqualified_types_5_p_0(PredSymName_6, Context_7, ArgTypes_78, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_8, (MR_Integer) 2))));

              hlds__add_pred__report_any_unqualified_types_5_p_0(PredSymName_6, Context_7, ArgTypes_80, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_8, (MR_Integer) 2))));

              hlds__add_pred__report_any_unqualified_types_5_p_0(PredSymName_6, Context_7, ArgTypes_82, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_8, (MR_Integer) 1))));
              MR_Word next_value_of_Type_8 = SubType_26;

              // direct tailcall eliminated
              ;
              Type_8 = next_value_of_Type_8;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__add_pred__report_any_unqualified_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Types_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_18_18;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__add_pred__report_any_unqualified_type_5_p_0(HeadVar__1_1, HeadVar__2_2, Type_13, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Types_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_18_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__add_pred__check_for_modeless_predmode_decl_8_p_0(
  MR_Word PredStatus_9,
  MR_Word PredOrFunc_10,
  MR_Word PredSymName_11,
  MR_Word ArgTypes_12,
  MR_Word MaybeDetism_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded = (MaybeDetism_13 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_26;

  if (succeeded)
  {
    succeeded = (PredOrFunc_10 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (ArgTypes_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_26 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_9);
        succeeded = (Var_26 == (MR_Integer) 1);
      }
    }
  }
  if (succeeded)
  {
    MR_Word PredModuleName_19;
    MR_String Var_27;
    MR_Word Var_28;
    MR_Word Var_48;

    succeeded = ((MR_tag((MR_Word) PredSymName_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      PredModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSymName_11, (MR_Integer) 0))));
      Var_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredSymName_11, (MR_Integer) 1))));
      succeeded = (strcmp(Var_27, (MR_String) "is") == 0);
      if (succeeded)
      {
        Var_28 = (MR_Word) (&hlds__add_pred_scalar_common_2[1]);
        Var_48 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(Var_28);
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PredModuleName_19, Var_48);
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
    else
    {
      MR_Integer PredFormArity_20;
      MR_Word SNA_21;
      MR_Word DetPieces_22;
      MR_Word DetSpec_23;
      MR_Word Var_32;
      MR_Word Var_33;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_12, &PredFormArity_20);
      {
        SNA_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SNA_21, 0) = ((MR_Box) (PredSymName_11));
        MR_hl_field(MR_mktag(0), SNA_21, 1) = ((MR_Box) (PredFormArity_20));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (SNA_21));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[23])));
      }
      {
        DetPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DetPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[19])));
        MR_hl_field(MR_mktag(1), DetPieces_22, 1) = ((MR_Box) (Var_32));
      }
      {
        DetSpec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DetSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.check_for_modeless_predmode_decl\'/8"));
        MR_hl_field(MR_mktag(1), DetSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), DetSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), DetSpec_23, 3) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(1), DetSpec_23, 4) = ((MR_Box) (DetPieces_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_25 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DetSpec_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
      }
    }
  }
  else
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
}

static void MR_CALL 
hlds__add_pred__record_pred_origin_7_p_0(
  MR_Word PredOrFunc_8,
  MR_Word PredSymName_9,
  MR_Word UserArity_10,
  MR_Word Origin_11,
  MR_Word Context_12,
  MR_Word * PredOrigin_13,
  MR_Word * Markers_14)
{
  MR_Word Markers0_15;

  hlds__hlds_pred__init_markers_1_p_0(&Markers0_15);
  if ((Origin_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_8));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (PredSymName_9));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (UserArity_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *PredOrigin_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
    }
    *Markers_14 = Markers0_15;
  }
  else
  {
    MR_Word CompilerAttrs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_11, (MR_Integer) 0))));
    MR_Word CompilerOrigin_17 = (MR_Word) (CompilerAttrs_16);

    switch (MR_tag((MR_Word) CompilerOrigin_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CompilerOrigin_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String File_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Context_12, (MR_Integer) 0))));
              MR_Integer Line_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Context_12, (MR_Integer) 1))));
              MR_Word Var_36;

              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (File_27));
                MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (Line_28));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *PredOrigin_13 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_36));
              }
              *Markers_14 = Markers0_15;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_37;
              MR_String File_38 = ((MR_String) ((MR_hl_field(MR_mktag(0), Context_12, (MR_Integer) 0))));
              MR_Integer Line_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Context_12, (MR_Integer) 1))));

              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (File_38));
                MR_hl_field(MR_mktag(3), Var_37, 2) = ((MR_Box) (Line_39));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *PredOrigin_13 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_37));
              }
              *Markers_14 = Markers0_15;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClassId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompilerOrigin_17, (MR_Integer) 0))));
          MR_Word MethodId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompilerOrigin_17, (MR_Integer) 1))));
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_30, 0) = ((MR_Box) (ClassId_18));
            MR_hl_field(MR_mktag(2), Var_30, 1) = ((MR_Box) (MethodId_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *PredOrigin_13 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
          }
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 11, Markers0_15, Markers_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CompilerOrigin_17, (MR_Integer) 0))));
          MR_Word SolverPredKind_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), CompilerOrigin_17, (MR_Integer) 1))) & (MR_Integer) 3);
          MR_Word Var_32;

          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) (TypeCtor_20));
            MR_hl_field(MR_mktag(2), Var_32, 1) = (MR_Box) ((MR_Unsigned) (SolverPredKind_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *PredOrigin_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
          }
          *Markers_14 = Markers0_15;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CompilerOrigin_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CompilerOrigin_17, (MR_Integer) 1))));
              MR_String MutableName_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), CompilerOrigin_17, (MR_Integer) 2))));
              MR_Word MutablePredKind_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompilerOrigin_17, (MR_Integer) 3))) & (MR_Integer) 15);
              MR_Word Var_34;

              {
                Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (ModuleName_24));
                MR_hl_field(MR_mktag(3), Var_34, 2) = ((MR_Box) (MutableName_25));
                MR_hl_field(MR_mktag(3), Var_34, 3) = (MR_Box) ((MR_Unsigned) (MutablePredKind_26));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *PredOrigin_13 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_34));
              }
              hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 24, Markers0_15, Markers_14);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PFSymNameArity_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CompilerOrigin_17, (MR_Integer) 1))));
              MR_Word TablingPredKind_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompilerOrigin_17, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Var_33;

              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (PFSymNameArity_22));
                MR_hl_field(MR_mktag(3), Var_33, 2) = (MR_Box) ((MR_Unsigned) (TablingPredKind_23));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *PredOrigin_13 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_33));
              }
              *Markers_14 = Markers0_15;
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
hlds__add_pred__module_add_mode_decl_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__add_pred__IntroducedFrom__pred__module_add_mode_decl__736__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
hlds__add_pred__module_add_mode_decl_10_p_0(
  MR_Word PartOfPredmode_11,
  MR_Word IsClassMethod_12,
  MR_Word ItemMercuryStatus_13,
  MR_Word PredStatus_14,
  MR_Word ItemModeDecl_15,
  MR_Word * PredProcId_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50)
{
  MR_bool succeeded;
  MR_Word PredSymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_15, (MR_Integer) 0))));
  MR_Word MaybePredOrFunc_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_15, (MR_Integer) 1))));
  MR_Word Modes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_15, (MR_Integer) 2))));
  MR_Word WithInst_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_15, (MR_Integer) 3))));
  MR_Word Context_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_15, (MR_Integer) 6))));
  MR_Word PredModuleName_28;
  MR_String PredName_29;
  MR_Word PredOrFunc_30;
  MR_Word Var_55;

  if (((MR_tag((MR_Word) PredSymName_19)) == (MR_Integer) 1))
  {
    PredModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSymName_19, (MR_Integer) 0))));
    PredName_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredSymName_19, (MR_Integer) 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_pred.module_add_mode_decl\'/10", (MR_String) "unqualified PredSymName");
      return;
    }
  if ((MaybePredOrFunc_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_pred.module_add_mode_decl\'/10", (MR_String) "no pred_or_func on mode declaration");
      return;
    }
  else
    PredOrFunc_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_20, (MR_Integer) 0))));
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&hlds__add_pred_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (hlds__add_pred__module_add_mode_decl_10_p_0_1));
    MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (WithInst_22));
    MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140hlds.add_pred.module_add_mode_decl\'/10", (MR_String) "WithInst != no");
  succeeded = (strcmp(PredName_29, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_Word Spec_32;
    MR_Word Var_59;
    MR_Integer Var_60;

    Var_59 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    Var_60 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *PredProcId_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_60));
    }
    {
      Spec_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.module_add_mode_decl\'/10"));
      MR_hl_field(MR_mktag(1), Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_32, 3) = ((MR_Box) (Context_25));
      MR_hl_field(MR_mktag(1), Spec_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[13])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_50 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_49));
    }
    *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
  }
  else
  {
    MR_Word PredFormArity_33;
    MR_Word PredicateTable0_34;
    MR_Word PredIds_35;
    MR_Word PredId_37;
    MR_Word PredicateTable1_40;
    MR_Word PredIdTable0_41;
    MR_Word PredInfo0_42;
    MR_Word PredInfo_43;
    MR_Integer ProcId_44;
    MR_Word PredIdTable_45;
    MR_Word PredicateTable_46;
    MR_Word STATE_VARIABLE_ModuleInfo_77_77;
    MR_Word STATE_VARIABLE_Specs_78_78;
    MR_Word PredIdPrime_36;
    MR_Word Var_74;
    MR_Box conv0_PredInfo0_42;

    PredFormArity_33 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_21);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &PredicateTable0_34);
    hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredicateTable0_34, (MR_Integer) 0, PredOrFunc_30, PredModuleName_28, PredName_29, PredFormArity_33, &PredIds_35);
    succeeded = (PredIds_35 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PredIdPrime_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_35, (MR_Integer) 0))));
      Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_35, (MR_Integer) 1))));
      succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      PredId_37 = PredIdPrime_36;
      STATE_VARIABLE_Specs_78_78 = STATE_VARIABLE_Specs_0_49;
      STATE_VARIABLE_ModuleInfo_77_77 = STATE_VARIABLE_ModuleInfo_0_47;
    }
    else
    {
      MR_Word UserArity_38;
      MR_Word Origin_39;
      MR_Word Var_75;

      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_30, &UserArity_38, PredFormArity_33);
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_75, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_30));
        MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (PredSymName_19));
        MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) (UserArity_38));
      }
      {
        Origin_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Origin_39, 0) = ((MR_Box) (Var_75));
      }
      hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(PredOrFunc_30, PredModuleName_28, PredName_29, PredFormArity_33, PredStatus_14, IsClassMethod_12, Context_25, Origin_39, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[17])), &PredId_37, STATE_VARIABLE_ModuleInfo_0_47, &STATE_VARIABLE_ModuleInfo_77_77, STATE_VARIABLE_Specs_0_49, &STATE_VARIABLE_Specs_78_78);
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_77_77, &PredicateTable1_40);
    hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable1_40, &PredIdTable0_41);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_41, ((MR_Box) (PredId_37)), &conv0_PredInfo0_42);
    PredInfo0_42 = ((MR_Word) (conv0_PredInfo0_42));
    hlds__add_pred__module_do_add_mode_10_p_0(STATE_VARIABLE_ModuleInfo_77_77, PartOfPredmode_11, IsClassMethod_12, ItemMercuryStatus_13, ItemModeDecl_15, PredInfo0_42, &PredInfo_43, &ProcId_44, STATE_VARIABLE_Specs_78_78, STATE_VARIABLE_Specs_50);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_37)), ((MR_Box) (PredInfo_43)), PredIdTable0_41, &PredIdTable_45);
    hlds__pred_table__predicate_table_set_pred_id_table_3_p_0(PredIdTable_45, PredicateTable1_40, &PredicateTable_46);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_46, STATE_VARIABLE_ModuleInfo_77_77, STATE_VARIABLE_ModuleInfo_48);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *PredProcId_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_44));
    }
  }
}

static void MR_CALL 
hlds__add_pred__module_do_add_mode_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PartOfPredmode_12,
  MR_Word IsClassMethod_13,
  MR_Word ItemMercuryStatus_14,
  MR_Word ItemModeDecl_15,
  MR_Word STATE_VARIABLE_PredInfo_0_54,
  MR_Word * STATE_VARIABLE_PredInfo_55,
  MR_Integer * ProcId_17,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  MR_bool succeeded;
  MR_String PredName_19;
  MR_Word PredOrFunc_20;
  MR_Word Modes_23;
  MR_Word MaybeDetism_25;
  MR_Word InstVarSet_26;
  MR_Word Context_27;
  MR_Word SeqNum_28;
  MR_Word PredFormArity_29;
  MR_Word DetismDecl_30;
  MR_Word MaybeCurUserDecl_37;
  MR_Word STATE_VARIABLE_Specs_58_58;
  MR_Word Var_123;

  PredName_19 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_54);
  PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_0_54);
  Modes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_15, (MR_Integer) 2))));
  MaybeDetism_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_15, (MR_Integer) 4))));
  InstVarSet_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_15, (MR_Integer) 5))));
  Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_15, (MR_Integer) 6))));
  SeqNum_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_15, (MR_Integer) 7))));
  PredFormArity_29 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_23);
  if ((MaybeDetism_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredStatus_31;
    MR_Word PredModule_32;
    MR_Word PredSymName_33;
    MR_Word PFSymNameArity_34;

    DetismDecl_30 = (MR_Integer) 2;
    hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_0_54, &PredStatus_31);
    PredModule_32 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_54);
    {
      PredSymName_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_33, 0) = ((MR_Box) (PredModule_32));
      MR_hl_field(MR_mktag(1), PredSymName_33, 1) = ((MR_Box) (PredName_19));
    }
    {
      PFSymNameArity_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PFSymNameArity_34, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
      MR_hl_field(MR_mktag(0), PFSymNameArity_34, 1) = ((MR_Box) (PredSymName_33));
      MR_hl_field(MR_mktag(0), PFSymNameArity_34, 2) = ((MR_Box) (PredFormArity_29));
    }
    switch (IsClassMethod_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__add_pred__unspecified_det_for_method_4_p_0(PFSymNameArity_34, Context_27, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_58_58);
        break;
      case (MR_Integer) 0:
        {
          MR_Word IsExported_35;

          IsExported_35 = hlds__status__pred_status_is_exported_1_f_0(PredStatus_31);
          switch (IsExported_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__add_pred__unspecified_det_for_local_4_p_0(PFSymNameArity_34, Context_27, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_58_58);
              break;
            case (MR_Integer) 1:
              hlds__add_pred__unspecified_det_for_exported_4_p_0(PFSymNameArity_34, Context_27, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_58_58);
              break;
          }
        }
        break;
    }
  }
  else
  {
    DetismDecl_30 = (MR_Integer) 0;
    STATE_VARIABLE_Specs_58_58 = STATE_VARIABLE_Specs_0_56;
  }
  hlds__hlds_pred__pred_info_get_cur_user_decl_info_2_p_0(STATE_VARIABLE_PredInfo_0_54, &MaybeCurUserDecl_37);
  if ((MaybeCurUserDecl_37 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
  else
  {
    MR_Word CurUserDecl_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCurUserDecl_37, (MR_Integer) 0))));
    MR_Word PredDeclSection_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CurUserDecl_38, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word PredIsPredMode_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CurUserDecl_38, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ItemExport_42;

    succeeded = (PartOfPredmode_12 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) ItemMercuryStatus_14)) == (MR_Integer) 0);
      if (succeeded)
        ItemExport_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_14, (MR_Integer) 0))) & (MR_Integer) 3);
    }
    if (succeeded)
    {
      MR_Word ModeDeclSection_43;
      MR_Word STATE_VARIABLE_Specs_96_96;

      switch (ItemExport_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          ModeDeclSection_43 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          ModeDeclSection_43 = (MR_Integer) 1;
          break;
      }
      succeeded = (PredDeclSection_39 == ModeDeclSection_43);
      if (succeeded)
        STATE_VARIABLE_Specs_96_96 = STATE_VARIABLE_Specs_58_58;
      else
      {
        MR_String ModeSectionStr_44;
        MR_String PredSectionStr_45;
        MR_Word PFSNA1_46;
        MR_Word SectionPieces_47;
        MR_Word SectionSpec_48;
        MR_Word Var_61;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_74;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_82;
        MR_Word Var_85;
        MR_Word Var_86;

        switch (ModeDeclSection_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ModeSectionStr_44 = (MR_String) "implementation";
            break;
          case (MR_Integer) 0:
            ModeSectionStr_44 = (MR_String) "interface";
            break;
        }
        switch (PredDeclSection_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            PredSectionStr_45 = (MR_String) "implementation";
            break;
          case (MR_Integer) 0:
            PredSectionStr_45 = (MR_String) "interface";
            break;
        }
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (PredName_19));
        }
        {
          PFSNA1_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PFSNA1_46, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
          MR_hl_field(MR_mktag(0), PFSNA1_46, 1) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(0), PFSNA1_46, 2) = ((MR_Box) (PredFormArity_29));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_65, 0) = ((MR_Box) (ModeSectionStr_44));
        }
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (PFSNA1_46));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 27U));
          MR_hl_field(MR_mktag(3), Var_78, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) (PredSectionStr_45));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[50])));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[48])));
          MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[14])));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_79));
        }
        {
          Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[47])));
          MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[45])));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
        }
        {
          SectionPieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SectionPieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[44])));
          MR_hl_field(MR_mktag(1), SectionPieces_47, 1) = ((MR_Box) (Var_64));
        }
        {
          SectionSpec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SectionSpec_48, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.module_do_add_mode\'/10"));
          MR_hl_field(MR_mktag(1), SectionSpec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), SectionSpec_48, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), SectionSpec_48, 3) = ((MR_Box) (Context_27));
          MR_hl_field(MR_mktag(1), SectionSpec_48, 4) = ((MR_Box) (SectionPieces_47));
        }
        {
          STATE_VARIABLE_Specs_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_96_96, 0) = ((MR_Box) (SectionSpec_48));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_96_96, 1) = ((MR_Box) (STATE_VARIABLE_Specs_58_58));
        }
      }
      switch (PredIsPredMode_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_96_96;
          break;
        case (MR_Integer) 1:
          {
            MR_Word PFSNA2_49;
            MR_Word PredModePieces_50;
            MR_Word PredModeSpec_51;
            MR_Word Var_97;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Word Var_102;
            MR_Word Var_105;
            MR_Word Var_106;

            {
              Var_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (PredName_19));
            }
            {
              PFSNA2_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PFSNA2_49, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
              MR_hl_field(MR_mktag(0), PFSNA2_49, 1) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(0), PFSNA2_49, 2) = ((MR_Box) (PredFormArity_29));
            }
            {
              Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_101, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(MR_mktag(3), Var_101, 1) = ((MR_Box) (PFSNA2_49));
            }
            {
              Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 27U));
              MR_hl_field(MR_mktag(3), Var_106, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
            }
            {
              Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
              MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[57])));
            }
            {
              Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[52])));
              MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_105));
            }
            {
              Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
              MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_102));
            }
            {
              PredModePieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PredModePieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[51])));
              MR_hl_field(MR_mktag(1), PredModePieces_50, 1) = ((MR_Box) (Var_100));
            }
            {
              PredModeSpec_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PredModeSpec_51, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.module_do_add_mode\'/10"));
              MR_hl_field(MR_mktag(1), PredModeSpec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), PredModeSpec_51, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), PredModeSpec_51, 3) = ((MR_Box) (Context_27));
              MR_hl_field(MR_mktag(1), PredModeSpec_51, 4) = ((MR_Box) (PredModePieces_50));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_57 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredModeSpec_51));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_96_96));
            }
          }
          break;
      }
    }
    else
      *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
  }
  {
    Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Modes_23));
  }
  hlds__add_pred__add_new_proc_14_p_0(ModuleInfo_11, Context_27, SeqNum_28, InstVarSet_26, Modes_23, Var_123, (MR_Word) ((MR_Unsigned) 0U), DetismDecl_30, MaybeDetism_25, (MR_Integer) 1, (MR_Integer) 1, STATE_VARIABLE_PredInfo_0_54, STATE_VARIABLE_PredInfo_55, ProcId_17);
}

static void MR_CALL 
hlds__add_pred__unspecified_det_for_local_4_p_0(
  MR_Word PFSymNameArity_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  MR_Word MainPieces_8;
  MR_Word Msg_10;
  MR_Word Spec_11;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_64;

  {
    Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (PFSymNameArity_5));
  }
  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[50])));
  }
  {
    MainPieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MainPieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[61])));
    MR_hl_field(MR_mktag(1), MainPieces_8, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (MainPieces_8));
  }
  {
    Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[89])));
  }
  {
    Msg_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Msg_10, 0) = ((MR_Box) (Context_6));
    MR_hl_field(MR_mktag(2), Msg_10, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Msg_10));
    MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.unspecified_det_for_local\'/4"));
    MR_hl_field(MR_mktag(3), Spec_11, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 221) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(3), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Spec_11, 3) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(3), Spec_11, 4) = ((MR_Box) (Var_64));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_13 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
  }
}

static void MR_CALL 
hlds__add_pred__unspecified_det_for_exported_4_p_0(
  MR_Word PFSymNameArity_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  MR_Word Pieces_8;
  MR_Word Spec_9;
  MR_Word Var_14;
  MR_Word Var_15;

  {
    Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (PFSymNameArity_5));
  }
  {
    Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
    MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[50])));
  }
  {
    Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[60])));
    MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_14));
  }
  {
    Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.unspecified_det_for_exported\'/4"));
    MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), Spec_9, 3) = ((MR_Box) (Context_6));
    MR_hl_field(MR_mktag(1), Spec_9, 4) = ((MR_Box) (Pieces_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_11 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
  }
}

static void MR_CALL 
hlds__add_pred__unspecified_det_for_method_4_p_0(
  MR_Word PFSymNameArity_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  MR_Word Pieces_8;
  MR_Word Spec_9;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_18;

  {
    Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (PFSymNameArity_5));
  }
  {
    Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[50])));
  }
  {
    Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[59])));
    MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
  }
  {
    Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[58])));
    MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_14));
  }
  {
    Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.unspecified_det_for_method\'/4"));
    MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), Spec_9, 3) = ((MR_Box) (Context_6));
    MR_hl_field(MR_mktag(1), Spec_9, 4) = ((MR_Box) (Pieces_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_11 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
  }
}

void MR_CALL 
hlds__add_pred__add_new_proc_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word InstVarSet_18,
  MR_Word ArgModes_19,
  MR_Word MaybeDeclaredArgModes_20,
  MR_Word MaybeArgLives_21,
  MR_Word DetismDecl_22,
  MR_Word MaybeDetism_23,
  MR_Word IsAddressTaken_24,
  MR_Word HasParallelConj_25,
  MR_Word STATE_VARIABLE_PredInfo_0_34,
  MR_Word * STATE_VARIABLE_PredInfo_35,
  MR_Integer * ProcId_27)
{
  MR_Word ArgTypes_28;
  MR_Word VarNameRemap_29;
  MR_Word ProcInfo0_30;
  MR_Word ProcInfo_31;
  MR_Word ProcTable0_32;
  MR_Word ProcTable_33;

  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_0_34, &ArgTypes_28);
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(STATE_VARIABLE_PredInfo_0_34, &VarNameRemap_29);
  hlds__hlds_pred__proc_info_init_13_p_0(ModuleInfo_15, Context_16, SeqNum_17, ArgTypes_28, MaybeDeclaredArgModes_20, ArgModes_19, MaybeArgLives_21, DetismDecl_22, MaybeDetism_23, IsAddressTaken_24, HasParallelConj_25, VarNameRemap_29, &ProcInfo0_30);
  hlds__hlds_pred__proc_info_set_inst_varset_3_p_0(InstVarSet_18, ProcInfo0_30, &ProcInfo_31);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_34, &ProcTable0_32);
  hlds__hlds_pred__next_proc_id_2_p_0(ProcTable0_32, ProcId_27);
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (*ProcId_27)), ((MR_Box) (ProcInfo_31)), ProcTable0_32, &ProcTable_33);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_33, STATE_VARIABLE_PredInfo_0_34, STATE_VARIABLE_PredInfo_35);
}

void MR_CALL 
hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(
  MR_Word PredOrFunc_15,
  MR_Word PredModuleName_16,
  MR_String PredName_17,
  MR_Word PredFormArity_18,
  MR_Word Status_19,
  MR_Word IsClassMethod_20,
  MR_Word Context_21,
  MR_Word PredOrigin_22,
  MR_Word DescPieces_23,
  MR_Word * PredId_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  MR_bool succeeded;
  MR_Word PredSymName_27;
  MR_Word ClausesInfo_29;
  MR_Word STATE_VARIABLE_Specs_35_35;
  MR_Word Var_38;
  MR_Word Var_39;

  {
    PredSymName_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), PredSymName_27, 0) = ((MR_Box) (PredModuleName_16));
    MR_hl_field(MR_mktag(1), PredSymName_27, 1) = ((MR_Box) (PredName_17));
  }
  hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0(STATE_VARIABLE_ModuleInfo_0_31, PredOrFunc_15, PredSymName_27, PredFormArity_18, Status_19, IsClassMethod_20, Context_21, DescPieces_23, STATE_VARIABLE_Specs_0_33, &STATE_VARIABLE_Specs_35_35);
  switch (PredOrFunc_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word UserArity_28;
        MR_Integer UserArityInt_41;
        MR_Word FieldName_43;
        MR_Integer Var_44;
        MR_Word AccessType_42;

        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_28, PredFormArity_18);
        UserArityInt_41 = (MR_Integer) (UserArity_28);
        succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(STATE_VARIABLE_ModuleInfo_0_31, PredSymName_27, &Var_44, &AccessType_42, &FieldName_43);
        if (succeeded)
          succeeded = (UserArityInt_41 == Var_44);
        if (succeeded)
        {
          MR_Word CtorFieldTable_45;
          MR_Word TypeInfo_38_63;
          MR_Word FieldDefn_46;
          MR_Word DefnStatus_48;
          MR_Word Var_54;
          MR_Word Var_56;
          MR_Word Var_62;
          MR_Box conv0_Var_54;
          MR_Word Var_57;

          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &CtorFieldTable_45);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__add_pred_scalar_common_1[5]), CtorFieldTable_45, ((MR_Box) (FieldName_43)), &conv0_Var_54);
          if (succeeded)
          {
            Var_54 = ((MR_Word) (conv0_Var_54));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FieldDefn_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 0))));
              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 1))));
              TypeInfo_38_63 = (MR_Word) (&hlds__add_pred_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_63, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_62)));
              if (succeeded)
              {
                Var_57 = (MR_Word) (Status_19);
                succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 12U));
                if (succeeded)
                {
                  DefnStatus_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_46, (MR_Integer) 1))));
                  Var_56 = (MR_Word) (DefnStatus_48);
                  succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 12U));
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word PredFormArity_52;
            MR_Word PFSymNameArity_53;
            MR_Word Pieces_64;
            MR_Word Spec_65;
            MR_Word Var_68;
            MR_Word Var_69;

            parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_28, &PredFormArity_52);
            {
              PFSymNameArity_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PFSymNameArity_53, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), PFSymNameArity_53, 1) = ((MR_Box) (PredSymName_27));
              MR_hl_field(MR_mktag(0), PFSymNameArity_53, 2) = ((MR_Box) (PredFormArity_52));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (PFSymNameArity_53));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[87])));
            }
            {
              Pieces_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[80])));
              MR_hl_field(MR_mktag(1), Pieces_64, 1) = ((MR_Box) (Var_68));
            }
            {
              Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.report_field_status_mismatch\'/4"));
              MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), Spec_65, 3) = ((MR_Box) (Context_21));
              MR_hl_field(MR_mktag(1), Spec_65, 4) = ((MR_Box) (Pieces_64));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_34 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_65));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_35_35));
            }
          }
          else
            *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_35_35;
        }
        else
          *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_35_35;
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_35_35;
      break;
  }
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (PredFormArity_18));
  }
  Var_39 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
  hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_15, Var_38, Var_39, &ClausesInfo_29);
  hlds__add_pred__add_implicit_pred_decl_12_p_0(PredOrFunc_15, PredModuleName_16, PredName_17, PredFormArity_18, Status_19, Context_21, PredOrigin_22, (MR_Word) (&hlds__add_pred_scalar_common_2[0]), ClausesInfo_29, PredId_24, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
}

void MR_CALL 
hlds__add_pred__add_implicit_pred_decl_12_p_0(
  MR_Word PredOrFunc_13,
  MR_Word PredModuleName_14,
  MR_String PredName_15,
  MR_Word PredFormArity_16,
  MR_Word PredStatus_17,
  MR_Word Context_18,
  MR_Word PredOrigin_19,
  MR_Word GoalType_20,
  MR_Word ClausesInfo_21,
  MR_Word * PredId_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53)
{
  MR_bool succeeded;
  MR_Word Markers0_25;
  MR_Word TVarSet0_26;
  MR_Integer PredFormArityInt_27;
  MR_Word TypeVars_28;
  MR_Word TVarSet_29;
  MR_Word Types_30;
  MR_Word Proofs_33;
  MR_Word ConstraintMap_34;
  MR_Word VarNameRemap_35;
  MR_Word PredInfo0_36;
  MR_Word Markers1_37;
  MR_Word Markers_38;
  MR_Word PredInfo_39;
  MR_Word PredicateTable0_40;
  MR_Word PredIds_41;
  MR_Word Var_55;

  hlds__hlds_pred__init_markers_1_p_0(&Markers0_25);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_26);
  PredFormArityInt_27 = (MR_Integer) (PredFormArity_16);
  parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_String) "T", PredFormArityInt_27, &TypeVars_28, TVarSet0_26, &TVarSet_29);
  Var_55 = mercury__map__init_0_f_0((MR_Word) (&hlds__add_pred_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_55, TypeVars_28, &Types_30);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_33);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_34);
  mercury__map__init_1_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_35);
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_13, PredModuleName_14, PredName_15, PredFormArity_16, Context_18, PredOrigin_19, PredStatus_17, (MR_Word) ((MR_Unsigned) 0U), GoalType_20, Markers0_25, Types_30, TVarSet_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__add_pred_scalar_common_1[18]), Proofs_33, ConstraintMap_34, ClausesInfo_21, VarNameRemap_35, &PredInfo0_36);
  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, Markers0_25, &Markers1_37);
  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 4, Markers1_37, &Markers_38);
  hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_38, PredInfo0_36, &PredInfo_39);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_52, &PredicateTable0_40);
  hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredicateTable0_40, (MR_Integer) 0, PredOrFunc_13, PredModuleName_14, PredName_15, PredFormArity_16, &PredIds_41);
  if ((PredIds_41 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MQInfo_42;
    MR_Word PredicateTable_43;

    hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_52, &MQInfo_42);
    hlds__pred_table__predicate_table_insert_qual_6_p_0(PredInfo_39, (MR_Integer) 1, MQInfo_42, PredId_22, PredicateTable0_40, &PredicateTable_43);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_43, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53);
  }
  else
  {
    MR_Word Var_63;

    succeeded = ((MR_tag((MR_Word) PredOrigin_19)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrigin_19, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_63, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word PredSymName_49;
      MR_String NameString_50;
      MR_String UnexpectedMsg_51;
      MR_String Var_89;
      MR_String Var_91;
      MR_String Var_92;
      MR_String Var_94;
      MR_String Var_95;
      MR_String Var_97;

      {
        PredSymName_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_49, 0) = ((MR_Box) (PredModuleName_14));
        MR_hl_field(MR_mktag(1), PredSymName_49, 1) = ((MR_Box) (PredName_15));
      }
      NameString_50 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredSymName_49);
      Var_89 = mercury__string__f_43_43_2_f_0(NameString_50, (MR_String) ").\n");
      Var_91 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_89);
      Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "an existing predicate", Var_91);
      Var_94 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_92);
      Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "with a name that is identical to the name of", Var_94);
      Var_97 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_95);
      UnexpectedMsg_51 = mercury__string__f_43_43_2_f_0((MR_String) "Attempted to introduce a predicate for a promise", Var_97);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_pred.add_implicit_pred_decl\'/12", UnexpectedMsg_51);
        return;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_pred.add_implicit_pred_decl\'/12", (MR_String) "search succeeded");
        return;
      }
  }
}

static MR_bool MR_CALL 
hlds__add_pred____Unify____part_of_predmode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__add_pred____Unify____part_of_predmode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__add_pred____Compare____part_of_predmode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__add_pred____Compare____part_of_predmode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__add_pred__init(void)
{
}

void mercury__hlds__add_pred__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__add_pred__hlds__add_pred__type_ctor_info_part_of_predmode_0);
}

void mercury__hlds__add_pred__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__add_pred__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.add_pred.
