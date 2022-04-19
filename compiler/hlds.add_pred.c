/*
** Automatically generated from `add_pred.m'
** by the Mercury compiler,
** version rotd-2022-04-19
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
hlds__add_pred__IntroducedFrom__pred__module_add_mode_decl__720__1_2_p_0(
  MR_Word WithInst_22,
  MR_Word HeadVar__2_56);

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__141__1_2_p_0(
  MR_Word WithInst_21,
  MR_Word HeadVar__2_69);

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__140__1_2_p_0(
  MR_Word WithType_20,
  MR_Word HeadVar__2_65);

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
hlds__add_pred__add_builtin_5_p_0(
  MR_Word PredId_6,
  MR_Word HeadTypes0_7,
  MR_Word CompilationTarget_8,
  MR_Word STATE_VARIABLE_PredInfo_0_58,
  MR_Word * STATE_VARIABLE_PredInfo_59);

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

static MR_bool MR_CALL 
hlds__add_pred__module_add_mode_decl_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__add_pred__module_do_add_mode_9_p_0(
  MR_Word PartOfPredmode_10,
  MR_Word IsClassMethod_11,
  MR_Word ItemMercuryStatus_12,
  MR_Word ItemModeDecl_13,
  MR_Word STATE_VARIABLE_PredInfo_0_53,
  MR_Word * STATE_VARIABLE_PredInfo_54,
  MR_Integer * ProcId_15,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56);

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
hlds__add_pred__IntroducedFrom__pred__module_add_mode_decl__720__1_2_p_0(
  MR_Word WithInst_22,
  MR_Word HeadVar__2_56)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[1]), ((MR_Box) (WithInst_22)), ((MR_Box) (HeadVar__2_56)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__141__1_2_p_0(
  MR_Word WithInst_21,
  MR_Word HeadVar__2_69)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[1]), ((MR_Box) (WithInst_21)), ((MR_Box) (HeadVar__2_69)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__140__1_2_p_0(
  MR_Word WithType_20,
  MR_Word HeadVar__2_65)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[0]), ((MR_Box) (WithType_20)), ((MR_Box) (HeadVar__2_65)));
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
        MR_Integer UserArityInt_31;
        MR_Word FieldName_33;
        MR_Integer Var_34;
        MR_Word AccessType_32;

        PredFormArity_24 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_12);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_25, PredFormArity_24);
        UserArityInt_31 = (MR_Integer) (UserArity_25);
        succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_6, SymName_10, &Var_34, &AccessType_32, &FieldName_33);
        if (succeeded)
          succeeded = (UserArityInt_31 == Var_34);
        if (succeeded)
        {
          MR_Word CtorFieldTable_35;
          MR_Word TypeInfo_39_53;
          MR_Word FieldDefn_36;
          MR_Word DefnStatus_38;
          MR_Word Var_44;
          MR_Word Var_46;
          MR_Word Var_52;
          MR_Box conv0_Var_44;
          MR_Word Var_47;

          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_6, &CtorFieldTable_35);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__add_pred_scalar_common_1[5]), CtorFieldTable_35, ((MR_Box) (FieldName_33)), &conv0_Var_44);
          if (succeeded)
          {
            Var_44 = ((MR_Word) (conv0_Var_44));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FieldDefn_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))));
              Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1))));
              TypeInfo_39_53 = (MR_Word) (&hlds__add_pred_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_53, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_52)));
              if (succeeded)
              {
                Var_47 = (MR_Word) (PredStatus_7);
                succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 12U));
                if (succeeded)
                {
                  DefnStatus_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_36, (MR_Integer) 1))));
                  Var_46 = (MR_Word) (DefnStatus_38);
                  succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 12U));
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word PredFormArity_42;
            MR_Word PFSymNameArity_43;
            MR_Word Pieces_54;
            MR_Word Spec_55;
            MR_Word Var_58;
            MR_Word Var_59;

            parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_25, &PredFormArity_42);
            {
              PFSymNameArity_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PFSymNameArity_43, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), PFSymNameArity_43, 1) = ((MR_Box) (SymName_10));
              MR_hl_field(MR_mktag(0), PFSymNameArity_43, 2) = ((MR_Box) (PredFormArity_42));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (PFSymNameArity_43));
            }
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[87])));
            }
            {
              Pieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[80])));
              MR_hl_field(MR_mktag(1), Pieces_54, 1) = ((MR_Box) (Var_58));
            }
            {
              Spec_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.report_field_status_mismatch\'/4"));
              MR_hl_field(MR_mktag(1), Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), Spec_55, 3) = ((MR_Box) (Context_22));
              MR_hl_field(MR_mktag(1), Spec_55, 4) = ((MR_Box) (Pieces_54));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_27 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_55));
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

  succeeded = hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__141__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__add_pred__module_add_pred_decl_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__140__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
hlds__add_pred__module_add_pred_decl_9_p_0(
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word NeedQual_12,
  MR_Word ItemPredDecl_13,
  MR_Word * MaybePredProcId_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_56,
  MR_Word * STATE_VARIABLE_ModuleInfo_57,
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59)
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
  MR_Word Var_62;
  MR_Word Var_66;

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
    Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&hlds__add_pred_scalar_common_4[1]));
    MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (hlds__add_pred__module_add_pred_decl_9_p_0_1));
    MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (WithType_20));
    MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140hlds.add_pred.module_add_pred_decl\'/9", (MR_String) "WithType != no");
  {
    Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&hlds__add_pred_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (hlds__add_pred__module_add_pred_decl_9_p_0_2));
    MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (WithInst_21));
    MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140hlds.add_pred.module_add_pred_decl\'/9", (MR_String) "WithInst != no");
  succeeded = (strcmp(PredName_33, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_String PredOrFuncStr_34;
    MR_Word Pieces_35;
    MR_Word Spec_36;
    MR_Word Var_72;
    MR_Word Var_73;

    PredOrFuncStr_34 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_18);
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (PredOrFuncStr_34));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[9])));
    }
    {
      Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[6])));
      MR_hl_field(MR_mktag(1), Pieces_35, 1) = ((MR_Box) (Var_72));
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
      *STATE_VARIABLE_Specs_59 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_58));
    }
    *MaybePredProcId_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_57 = STATE_VARIABLE_ModuleInfo_0_56;
  }
  else
  {
    MR_Word ArgTypes_37;
    MR_Word MaybeArgModes0_38;
    MR_Integer PredFormArity_39;
    MR_Word PredOrigin_49;
    MR_Word Markers_50;
    MR_Word Markers0_100;
    MR_Word ArgModes0_40;

    parse_tree__prog_util__split_types_and_modes_3_p_0(ArgTypesAndModes_19, &ArgTypes_37, &MaybeArgModes0_38);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_37, &PredFormArity_39);
    hlds__hlds_pred__init_markers_1_p_0(&Markers0_100);
    if ((Origin_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        PredOrigin_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), PredOrigin_49, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), PredOrigin_49, 1) = ((MR_Box) (PredSymName_17));
      }
      Markers_50 = Markers0_100;
    }
    else
    {
      MR_Word CompilerAttrs_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_23, (MR_Integer) 0))));
      MR_Word CompilerOrigin_102 = (MR_Word) (CompilerAttrs_101);

      switch (MR_tag((MR_Word) CompilerOrigin_102)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(CompilerOrigin_102)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                PredOrigin_49 = (MR_Word) ((MR_Unsigned) 0U);
                Markers_50 = Markers0_100;
              }
              break;
            case (MR_Integer) 1:
              {
                PredOrigin_49 = (MR_Word) ((MR_Unsigned) 4U);
                Markers_50 = Markers0_100;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ClassId_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompilerOrigin_102, (MR_Integer) 0))));
            MR_Word MethodId_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompilerOrigin_102, (MR_Integer) 1))));

            {
              PredOrigin_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), PredOrigin_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), PredOrigin_49, 1) = ((MR_Box) (ClassId_103));
              MR_hl_field(MR_mktag(3), PredOrigin_49, 2) = ((MR_Box) (MethodId_104));
            }
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 10, Markers0_100, &Markers_50);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeCtorName_105 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CompilerOrigin_102, (MR_Integer) 0))));
            MR_Integer TypeCtorArity_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), CompilerOrigin_102, (MR_Integer) 1))));
            MR_Word SolverPredKind_107 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), CompilerOrigin_102, (MR_Integer) 2))) & (MR_Integer) 3);

            {
              PredOrigin_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), PredOrigin_49, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), PredOrigin_49, 1) = ((MR_Box) (TypeCtorName_105));
              MR_hl_field(MR_mktag(3), PredOrigin_49, 2) = ((MR_Box) (TypeCtorArity_106));
              MR_hl_field(MR_mktag(3), PredOrigin_49, 3) = (MR_Box) ((MR_Unsigned) (SolverPredKind_107));
            }
            Markers_50 = Markers0_100;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CompilerOrigin_102, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CompilerOrigin_102, (MR_Integer) 1))));
                MR_String MutableName_109 = ((MR_String) ((MR_hl_field(MR_mktag(3), CompilerOrigin_102, (MR_Integer) 2))));
                MR_Word MutablePredKind_110 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompilerOrigin_102, (MR_Integer) 3))) & (MR_Integer) 15);

                {
                  PredOrigin_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PredOrigin_49, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), PredOrigin_49, 1) = ((MR_Box) (ModuleName_108));
                  MR_hl_field(MR_mktag(3), PredOrigin_49, 2) = ((MR_Box) (MutableName_109));
                  MR_hl_field(MR_mktag(3), PredOrigin_49, 3) = (MR_Box) ((MR_Unsigned) (MutablePredKind_110));
                }
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 23, Markers0_100, &Markers_50);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PFSymNameArity_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CompilerOrigin_102, (MR_Integer) 1))));
                MR_Word TablingPredKind_112 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompilerOrigin_102, (MR_Integer) 2))) & (MR_Integer) 1);

                {
                  PredOrigin_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PredOrigin_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), PredOrigin_49, 1) = ((MR_Box) (PFSymNameArity_111));
                  MR_hl_field(MR_mktag(3), PredOrigin_49, 2) = (MR_Box) ((MR_Unsigned) (TablingPredKind_112));
                }
                Markers_50 = Markers0_100;
              }
              break;
          }
          break;
      }
    }
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
      MR_Word STATE_VARIABLE_Specs_89_89;
      MR_Word Succeeded_51;

      hlds__add_pred__add_new_pred_20_p_0(PredOrigin_49, Context_29, SeqNum_30, PredStatus_11, NeedQual_12, PredOrFunc_18, PredModuleName_32, PredName_33, TypeVarSet_24, ExistQVars_26, ArgTypes_37, Constraints_28, (MR_Integer) 0, Purity_27, Markers_50, &Succeeded_51, STATE_VARIABLE_ModuleInfo_0_56, STATE_VARIABLE_ModuleInfo_57, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_89_89);
      *MaybePredProcId_14 = (MR_Word) ((MR_Unsigned) 0U);
      hlds__add_pred__check_for_modeless_predmode_decl_8_p_0(PredStatus_11, PredOrFunc_18, PredSymName_17, ArgTypes_37, MaybeDetism_22, Context_29, STATE_VARIABLE_Specs_89_89, STATE_VARIABLE_Specs_59);
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
        MR_Integer FuncArity_43;
        MR_Word InMode_44;
        MR_Word InModes_45;
        MR_Word OutMode_46;
        MR_Word ArgModes_52;
        MR_Word Var_86;
        MR_Word Succeeded_117;
        MR_Word STATE_VARIABLE_ModuleInfo_88_118;
        MR_Word STATE_VARIABLE_Specs_89_119;

        parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArity_43, PredFormArity_39);
        parse_tree__prog_mode__in_mode_1_p_0(&InMode_44);
        mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FuncArity_43, ((MR_Box) (InMode_44)), &InModes_45);
        parse_tree__prog_mode__out_mode_1_p_0(&OutMode_46);
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (OutMode_46));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ArgModes_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InModes_45, Var_86);
        hlds__add_pred__add_new_pred_20_p_0(PredOrigin_49, Context_29, SeqNum_30, PredStatus_11, NeedQual_12, PredOrFunc_18, PredModuleName_32, PredName_33, TypeVarSet_24, ExistQVars_26, ArgTypes_37, Constraints_28, (MR_Integer) 1, Purity_27, Markers_50, &Succeeded_117, STATE_VARIABLE_ModuleInfo_0_56, &STATE_VARIABLE_ModuleInfo_88_118, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_89_119);
        switch (Succeeded_117) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *MaybePredProcId_14 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_ModuleInfo_57 = STATE_VARIABLE_ModuleInfo_88_118;
              *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_89_119;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IsClassMethod_53;
              MR_Word ItemModeDecl_54;
              MR_Word PredProcId_55;
              MR_Word Var_92;

              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_50, (MR_Integer) 10);
              if (succeeded)
                IsClassMethod_53 = (MR_Integer) 1;
              else
                IsClassMethod_53 = (MR_Integer) 0;
              {
                Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (PredOrFunc_18));
              }
              {
                ItemModeDecl_54 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemModeDecl_54, 0) = ((MR_Box) (PredSymName_17));
                MR_hl_field(MR_mktag(0), ItemModeDecl_54, 1) = ((MR_Box) (Var_92));
                MR_hl_field(MR_mktag(0), ItemModeDecl_54, 2) = ((MR_Box) (ArgModes_52));
                MR_hl_field(MR_mktag(0), ItemModeDecl_54, 3) = ((MR_Box) (WithInst_21));
                MR_hl_field(MR_mktag(0), ItemModeDecl_54, 4) = ((MR_Box) (MaybeDetism_22));
                MR_hl_field(MR_mktag(0), ItemModeDecl_54, 5) = ((MR_Box) (InstVarSet_25));
                MR_hl_field(MR_mktag(0), ItemModeDecl_54, 6) = ((MR_Box) (Context_29));
                MR_hl_field(MR_mktag(0), ItemModeDecl_54, 7) = ((MR_Box) (SeqNum_30));
              }
              hlds__add_pred__module_add_mode_decl_10_p_0((MR_Integer) 1, IsClassMethod_53, ItemMercuryStatus_10, PredStatus_11, ItemModeDecl_54, &PredProcId_55, STATE_VARIABLE_ModuleInfo_88_118, STATE_VARIABLE_ModuleInfo_57, STATE_VARIABLE_Specs_89_119, STATE_VARIABLE_Specs_59);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybePredProcId_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcId_55));
              }
            }
            break;
        }
      }
      else
      if ((MaybeArgModes0_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_Specs_89_159;
        MR_Word Succeeded_157;

        hlds__add_pred__add_new_pred_20_p_0(PredOrigin_49, Context_29, SeqNum_30, PredStatus_11, NeedQual_12, PredOrFunc_18, PredModuleName_32, PredName_33, TypeVarSet_24, ExistQVars_26, ArgTypes_37, Constraints_28, (MR_Integer) 0, Purity_27, Markers_50, &Succeeded_157, STATE_VARIABLE_ModuleInfo_0_56, STATE_VARIABLE_ModuleInfo_57, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_89_159);
        *MaybePredProcId_14 = (MR_Word) ((MR_Unsigned) 0U);
        hlds__add_pred__check_for_modeless_predmode_decl_8_p_0(PredStatus_11, PredOrFunc_18, PredSymName_17, ArgTypes_37, MaybeDetism_22, Context_29, STATE_VARIABLE_Specs_89_159, STATE_VARIABLE_Specs_59);
      }
      else
      {
        MR_Word ArgModes_134;
        MR_Word Succeeded_161;
        MR_Word STATE_VARIABLE_ModuleInfo_88_162;
        MR_Word STATE_VARIABLE_Specs_89_163;

        hlds__add_pred__add_new_pred_20_p_0(PredOrigin_49, Context_29, SeqNum_30, PredStatus_11, NeedQual_12, PredOrFunc_18, PredModuleName_32, PredName_33, TypeVarSet_24, ExistQVars_26, ArgTypes_37, Constraints_28, (MR_Integer) 1, Purity_27, Markers_50, &Succeeded_161, STATE_VARIABLE_ModuleInfo_0_56, &STATE_VARIABLE_ModuleInfo_88_162, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_89_163);
        ArgModes_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes0_38, (MR_Integer) 0))));
        switch (Succeeded_161) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *MaybePredProcId_14 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_ModuleInfo_57 = STATE_VARIABLE_ModuleInfo_88_162;
              *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_89_163;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IsClassMethod_122;
              MR_Word ItemModeDecl_123;
              MR_Word PredProcId_124;
              MR_Word Var_126;

              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_50, (MR_Integer) 10);
              if (succeeded)
                IsClassMethod_122 = (MR_Integer) 1;
              else
                IsClassMethod_122 = (MR_Integer) 0;
              {
                Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (PredOrFunc_18));
              }
              {
                ItemModeDecl_123 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemModeDecl_123, 0) = ((MR_Box) (PredSymName_17));
                MR_hl_field(MR_mktag(0), ItemModeDecl_123, 1) = ((MR_Box) (Var_126));
                MR_hl_field(MR_mktag(0), ItemModeDecl_123, 2) = ((MR_Box) (ArgModes_134));
                MR_hl_field(MR_mktag(0), ItemModeDecl_123, 3) = ((MR_Box) (WithInst_21));
                MR_hl_field(MR_mktag(0), ItemModeDecl_123, 4) = ((MR_Box) (MaybeDetism_22));
                MR_hl_field(MR_mktag(0), ItemModeDecl_123, 5) = ((MR_Box) (InstVarSet_25));
                MR_hl_field(MR_mktag(0), ItemModeDecl_123, 6) = ((MR_Box) (Context_29));
                MR_hl_field(MR_mktag(0), ItemModeDecl_123, 7) = ((MR_Box) (SeqNum_30));
              }
              hlds__add_pred__module_add_mode_decl_10_p_0((MR_Integer) 1, IsClassMethod_122, ItemMercuryStatus_10, PredStatus_11, ItemModeDecl_123, &PredProcId_124, STATE_VARIABLE_ModuleInfo_88_162, STATE_VARIABLE_ModuleInfo_57, STATE_VARIABLE_Specs_89_163, STATE_VARIABLE_Specs_59);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybePredProcId_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcId_124));
              }
            }
            break;
        }
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
  Var_81 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
  hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_26, PredFormArity_40, Var_81, &ClausesInfo_48);
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
      hlds__add_pred__add_builtin_5_p_0(PredId_63, Types_31, CompilationTarget_66, PredInfo0_54, &PredInfo_67);
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
hlds__add_pred__add_builtin_5_p_0(
  MR_Word PredId_6,
  MR_Word HeadTypes0_7,
  MR_Word CompilationTarget_8,
  MR_Word STATE_VARIABLE_PredInfo_0_58,
  MR_Word * STATE_VARIABLE_PredInfo_59)
{
  MR_bool succeeded;
  MR_Word Module_10;
  MR_String Name_11;
  MR_Word Context_12;
  MR_Word ClausesInfo0_13;
  MR_Word VarSet0_14;
  MR_Word ProcArgVector_15;
  MR_Word HeadVars0_16;
  MR_Word GoalInfo0_17;
  MR_Word NonLocals_18;
  MR_Word GoalInfo1_19;
  MR_Word GoalExpr_21;
  MR_Word GoalInfo_22;
  MR_Word HeadVars_23;
  MR_Word HeadTypes_24;
  MR_Word VarSet_25;
  MR_Word Stub_26;
  MR_Word VarTypes_50;
  MR_Word TVarNameMap_51;
  MR_Word RttiVarMaps_52;
  MR_Word Markers_57;
  MR_Word Var_106;
  MR_Word STATE_VARIABLE_PredInfo_109_109;
  MR_Word Var_124;

  Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_58);
  Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_58);
  hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_0_58, &Context_12);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_58, &ClausesInfo0_13);
  hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo0_13, &VarSet0_14);
  hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(ClausesInfo0_13, &ProcArgVector_15);
  HeadVars0_16 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__add_pred_scalar_common_1[3]), ProcArgVector_15);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_12, &GoalInfo0_17);
  NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars0_16);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_18, GoalInfo0_17, &GoalInfo1_19);
  Var_124 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_124);
  if (succeeded)
  {
    if ((strcmp(Name_11, (MR_String) "builtin_compound_eq") == 0))
      succeeded = MR_TRUE;
    else
    if ((strcmp(Name_11, (MR_String) "builtin_compound_lt") == 0))
      succeeded = MR_TRUE;
    else
    if ((strcmp(Name_11, (MR_String) "store_at_ref_impure") == 0))
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
    GoalExpr_21 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_3[0]));
    GoalInfo_22 = GoalInfo1_19;
    HeadVars_23 = HeadVars0_16;
    HeadTypes_24 = HeadTypes0_7;
    VarSet_25 = VarSet0_14;
    Stub_26 = (MR_Integer) 1;
  }
  else
  {
    {
      MR_Word Var_125;

      Var_125 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_125);
      if (succeeded)
        succeeded = (strcmp(Name_11, (MR_String) "trace_get_io_state") == 0);
    }
    if (!(succeeded))
    {
      MR_Word Var_126;

      Var_126 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_126);
      if (succeeded)
        succeeded = (strcmp(Name_11, (MR_String) "unsafe_get_io_state") == 0);
    }
    if (succeeded)
    {
      MR_Word LHS_29;
      MR_Word UnifyMode_31;
      MR_Word Unification_32;
      MR_Word AssignExpr_34;
      MR_Word GoalInfoWithZero_35;
      MR_Word AssignGoal_36;
      MR_Word CastExpr_37;
      MR_Word GoalInfoWithZeroHeadVars_38;
      MR_Word CastGoal_39;
      MR_Word ConjExpr_40;
      MR_Word ConjGoal_41;
      MR_Word Var_62;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_72;
      MR_Word Var_79;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_89;
      MR_Word Var_91;
      MR_Word Var_92;

      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &LHS_29, VarSet0_14, &VarSet_25);
      {
        HeadVars_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVars_23, 0) = ((MR_Box) (LHS_29));
        MR_hl_field(MR_mktag(1), HeadVars_23, 1) = ((MR_Box) (HeadVars0_16));
      }
      Var_62 = parse_tree__builtin_lib_types__int_type_0_f_0();
      {
        HeadTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadTypes_24, 0) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(1), HeadTypes_24, 1) = ((MR_Box) (HeadTypes0_7));
      }
      Var_68 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_69 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_70 = parse_tree__prog_mode__ground_inst_0_f_0();
      {
        UnifyMode_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyMode_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), UnifyMode_31, 1) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), UnifyMode_31, 2) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), UnifyMode_31, 3) = ((MR_Box) (Var_70));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (UnifyMode_31));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unification_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_32, 0) = ((MR_Box) (LHS_29));
        MR_hl_field(MR_mktag(0), Unification_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[40])));
        MR_hl_field(MR_mktag(0), Unification_32, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_32, 3) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), Unification_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_32, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_32, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        AssignExpr_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AssignExpr_34, 0) = ((MR_Box) (LHS_29));
        MR_hl_field(MR_mktag(1), AssignExpr_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_3[1])));
        MR_hl_field(MR_mktag(1), AssignExpr_34, 2) = ((MR_Box) (UnifyMode_31));
        MR_hl_field(MR_mktag(1), AssignExpr_34, 3) = ((MR_Box) (Unification_32));
        MR_hl_field(MR_mktag(1), AssignExpr_34, 4) = ((MR_Box) (&hlds__add_pred_scalar_common_1[41]));
      }
      Var_79 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_29);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_79, GoalInfo0_17, &GoalInfoWithZero_35);
      {
        AssignGoal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AssignGoal_36, 0) = ((MR_Box) (AssignExpr_34));
        MR_hl_field(MR_mktag(0), AssignGoal_36, 1) = ((MR_Box) (GoalInfoWithZero_35));
      }
      Var_83 = parse_tree__prog_mode__in_mode_0_f_0();
      Var_85 = parse_tree__prog_mode__uo_mode_0_f_0();
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_84));
      }
      {
        CastExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CastExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), CastExpr_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_2[2])));
        MR_hl_field(MR_mktag(3), CastExpr_37, 2) = ((MR_Box) (HeadVars_23));
        MR_hl_field(MR_mktag(3), CastExpr_37, 3) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(3), CastExpr_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), CastExpr_37, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      Var_89 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_23);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_89, GoalInfo0_17, &GoalInfoWithZeroHeadVars_38);
      {
        CastGoal_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CastGoal_39, 0) = ((MR_Box) (CastExpr_37));
        MR_hl_field(MR_mktag(0), CastGoal_39, 1) = ((MR_Box) (GoalInfoWithZeroHeadVars_38));
      }
      {
        Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (CastGoal_39));
        MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (AssignGoal_36));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
      }
      {
        ConjExpr_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConjExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConjExpr_40, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), ConjExpr_40, 2) = ((MR_Box) (Var_91));
      }
      {
        ConjGoal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConjGoal_41, 0) = ((MR_Box) (ConjExpr_40));
        MR_hl_field(MR_mktag(0), ConjGoal_41, 1) = ((MR_Box) (GoalInfoWithZeroHeadVars_38));
      }
      {
        GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[42])));
        MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (ConjGoal_41));
      }
      GoalInfo_22 = GoalInfo1_19;
      Stub_26 = (MR_Integer) 0;
    }
    else
    {
      {
        MR_Word Var_127;

        Var_127 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_127);
        if (succeeded)
          succeeded = (strcmp(Name_11, (MR_String) "trace_set_io_state") == 0);
      }
      if (!(succeeded))
      {
        MR_Word Var_128;

        Var_128 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_128);
        if (succeeded)
          succeeded = (strcmp(Name_11, (MR_String) "unsafe_set_io_state") == 0);
      }
      if (succeeded)
      {
        MR_Word ConjGoal_115;

        GoalInfo_22 = GoalInfo1_19;
        {
          ConjGoal_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ConjGoal_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_3[0])));
          MR_hl_field(MR_mktag(0), ConjGoal_115, 1) = ((MR_Box) (GoalInfo1_19));
        }
        {
          GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[43])));
          MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (ConjGoal_115));
        }
        HeadVars_23 = HeadVars0_16;
        HeadTypes_24 = HeadTypes0_7;
        VarSet_25 = VarSet0_14;
        Stub_26 = (MR_Integer) 0;
      }
      else
      {
        MR_Word SymName_43;
        MR_Integer ModeId_44;
        MR_Word Purity_46;

        {
          SymName_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SymName_43, 0) = ((MR_Box) (Module_10));
          MR_hl_field(MR_mktag(1), SymName_43, 1) = ((MR_Box) (Name_11));
        }
        ModeId_44 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        {
          GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), GoalExpr_21, 0) = ((MR_Box) (PredId_6));
          MR_hl_field(MR_mktag(2), GoalExpr_21, 1) = ((MR_Box) (ModeId_44));
          MR_hl_field(MR_mktag(2), GoalExpr_21, 2) = ((MR_Box) (HeadVars0_16));
          MR_hl_field(MR_mktag(2), GoalExpr_21, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), GoalExpr_21, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), GoalExpr_21, 5) = ((MR_Box) (SymName_43));
        }
        hlds__hlds_pred__pred_info_get_purity_2_p_0(STATE_VARIABLE_PredInfo_0_58, &Purity_46);
        hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity_46, GoalInfo1_19, &GoalInfo_22);
        HeadVars_23 = HeadVars0_16;
        HeadTypes_24 = HeadTypes0_7;
        VarSet_25 = VarSet0_14;
        Stub_26 = (MR_Integer) 0;
      }
    }
  }
  parse_tree__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_23, HeadTypes_24, &VarTypes_50);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__add_pred_scalar_common_1[2]), &TVarNameMap_51);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_52);
  Var_106 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  switch (Stub_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goal_47;
        MR_Word Clause_48;
        MR_Word ClausesRep_49;
        MR_Word ClausesInfo_53;
        MR_Word Markers0_54;
        MR_Word Var_103;

        {
          Goal_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Goal_47, 0) = ((MR_Box) (GoalExpr_21));
          MR_hl_field(MR_mktag(0), Goal_47, 1) = ((MR_Box) (GoalInfo_22));
        }
        {
          Clause_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Clause_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Clause_48, 1) = ((MR_Box) (Goal_47));
          MR_hl_field(MR_mktag(0), Clause_48, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Clause_48, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), Clause_48, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Clause_48));
          MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__hlds_clauses__set_clause_list_2_p_0(Var_103, &ClausesRep_49);
        {
          ClausesInfo_53 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClausesInfo_53, 0) = ((MR_Box) (VarSet_25));
          MR_hl_field(MR_mktag(0), ClausesInfo_53, 1) = ((MR_Box) (TVarNameMap_51));
          MR_hl_field(MR_mktag(0), ClausesInfo_53, 2) = ((MR_Box) (VarTypes_50));
          MR_hl_field(MR_mktag(0), ClausesInfo_53, 3) = ((MR_Box) (VarTypes_50));
          MR_hl_field(MR_mktag(0), ClausesInfo_53, 4) = ((MR_Box) (ProcArgVector_15));
          MR_hl_field(MR_mktag(0), ClausesInfo_53, 5) = ((MR_Box) (ClausesRep_49));
          MR_hl_field(MR_mktag(0), ClausesInfo_53, 6) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), ClausesInfo_53, 7) = ((MR_Box) (RttiVarMaps_52));
          MR_hl_field(MR_mktag(0), ClausesInfo_53, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        }
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_53, STATE_VARIABLE_PredInfo_0_58, &STATE_VARIABLE_PredInfo_109_109);
        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_109_109, &Markers0_54);
        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 7, Markers0_54, &Markers_57);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Markers2_56;
        MR_Word ClausesRep_134;
        MR_Word ClausesInfo_135;
        MR_Word Markers0_136;
        MR_Word Markers1_137;

        hlds__hlds_clauses__set_clause_list_2_p_0((MR_Word) ((MR_Unsigned) 0U), &ClausesRep_134);
        {
          ClausesInfo_135 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClausesInfo_135, 0) = ((MR_Box) (VarSet_25));
          MR_hl_field(MR_mktag(0), ClausesInfo_135, 1) = ((MR_Box) (TVarNameMap_51));
          MR_hl_field(MR_mktag(0), ClausesInfo_135, 2) = ((MR_Box) (VarTypes_50));
          MR_hl_field(MR_mktag(0), ClausesInfo_135, 3) = ((MR_Box) (VarTypes_50));
          MR_hl_field(MR_mktag(0), ClausesInfo_135, 4) = ((MR_Box) (ProcArgVector_15));
          MR_hl_field(MR_mktag(0), ClausesInfo_135, 5) = ((MR_Box) (ClausesRep_134));
          MR_hl_field(MR_mktag(0), ClausesInfo_135, 6) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), ClausesInfo_135, 7) = ((MR_Box) (RttiVarMaps_52));
          MR_hl_field(MR_mktag(0), ClausesInfo_135, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        }
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_135, STATE_VARIABLE_PredInfo_0_58, &STATE_VARIABLE_PredInfo_109_109);
        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_109_109, &Markers0_136);
        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 7, Markers0_136, &Markers1_137);
        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, Markers1_137, &Markers2_56);
        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 1, Markers2_56, &Markers_57);
      }
      break;
  }
  hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_57, STATE_VARIABLE_PredInfo_109_109, STATE_VARIABLE_PredInfo_59);
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
          MR_Word STATE_VARIABLE_Specs_75_75;

          if (((MR_tag((MR_Word) TypeCtorSymName_10)) == (MR_Integer) 1))
            STATE_VARIABLE_Specs_75_75 = STATE_VARIABLE_Specs_0_30;
          else
          {
            MR_String TypeCtorName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorSymName_10, (MR_Integer) 0))));

            if (((MR_tag((MR_Word) PredSymName_6)) == (MR_Integer) 1))
            {
              MR_Word PredModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSymName_6, (MR_Integer) 0))));
              MR_Word Pieces_18;
              MR_Word Spec_19;
              MR_Word Var_38;
              MR_Word Var_39;
              MR_Word Var_40;
              MR_Word Var_43;
              MR_Word Var_46;
              MR_Word Var_49;
              MR_Word Var_50;

              {
                Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (TypeCtorName_15));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (PredModuleName_16));
              }
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
                MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[39])));
              }
              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[27])));
                MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
              }
              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[26])));
                MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
              }
              {
                Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[25])));
                MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
              }
              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
                MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
              }
              {
                Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[24])));
                MR_hl_field(MR_mktag(1), Pieces_18, 1) = ((MR_Box) (Var_38));
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
                STATE_VARIABLE_Specs_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_75_75, 0) = ((MR_Box) (Spec_19));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_75_75, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
              }
            }
            else
              STATE_VARIABLE_Specs_75_75 = STATE_VARIABLE_Specs_0_30;
          }
          hlds__add_pred__report_any_unqualified_types_5_p_0(PredSymName_6, Context_7, ArgTypes_11, STATE_VARIABLE_Specs_75_75, STATE_VARIABLE_Specs_31);
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
    MR_Word Var_49;

    succeeded = ((MR_tag((MR_Word) PredSymName_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      PredModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSymName_11, (MR_Integer) 0))));
      Var_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredSymName_11, (MR_Integer) 1))));
      succeeded = (strcmp(Var_27, (MR_String) "is") == 0);
      if (succeeded)
      {
        Var_28 = (MR_Word) (&hlds__add_pred_scalar_common_2[1]);
        Var_49 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(Var_28);
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PredModuleName_19, Var_49);
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

static MR_bool MR_CALL 
hlds__add_pred__module_add_mode_decl_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__add_pred__IntroducedFrom__pred__module_add_mode_decl__720__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
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
  MR_Word Var_53;

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
    Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&hlds__add_pred_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (hlds__add_pred__module_add_mode_decl_10_p_0_1));
    MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (WithInst_22));
    MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_53, (MR_String) "predicate \140hlds.add_pred.module_add_mode_decl\'/10", (MR_String) "WithInst != no");
  succeeded = (strcmp(PredName_29, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_Word Spec_32;
    MR_Word Var_57;
    MR_Integer Var_58;

    Var_57 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    Var_58 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *PredProcId_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_58));
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
      *STATE_VARIABLE_Specs_48 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_47));
    }
    *STATE_VARIABLE_ModuleInfo_46 = STATE_VARIABLE_ModuleInfo_0_45;
  }
  else
  {
    MR_Word PredFormArity_33;
    MR_Word PredicateTable0_34;
    MR_Word PredIds_35;
    MR_Word PredId_37;
    MR_Word PredicateTable1_38;
    MR_Word PredIdTable0_39;
    MR_Word PredInfo0_40;
    MR_Word PredInfo_41;
    MR_Integer ProcId_42;
    MR_Word PredIdTable_43;
    MR_Word PredicateTable_44;
    MR_Word STATE_VARIABLE_ModuleInfo_75_75;
    MR_Word STATE_VARIABLE_Specs_76_76;
    MR_Word PredIdPrime_36;
    MR_Word Var_72;
    MR_Box conv0_PredInfo0_40;

    PredFormArity_33 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_21);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &PredicateTable0_34);
    hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredicateTable0_34, (MR_Integer) 0, PredOrFunc_30, PredModuleName_28, PredName_29, PredFormArity_33, &PredIds_35);
    succeeded = (PredIds_35 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PredIdPrime_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_35, (MR_Integer) 0))));
      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_35, (MR_Integer) 1))));
      succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      PredId_37 = PredIdPrime_36;
      STATE_VARIABLE_Specs_76_76 = STATE_VARIABLE_Specs_0_47;
      STATE_VARIABLE_ModuleInfo_75_75 = STATE_VARIABLE_ModuleInfo_0_45;
    }
    else
    {
      MR_Word Var_73;

      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (PredSymName_19));
      }
      hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(PredOrFunc_30, PredModuleName_28, PredName_29, PredFormArity_33, PredStatus_14, IsClassMethod_12, Context_25, Var_73, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[17])), &PredId_37, STATE_VARIABLE_ModuleInfo_0_45, &STATE_VARIABLE_ModuleInfo_75_75, STATE_VARIABLE_Specs_0_47, &STATE_VARIABLE_Specs_76_76);
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_75_75, &PredicateTable1_38);
    hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable1_38, &PredIdTable0_39);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_39, ((MR_Box) (PredId_37)), &conv0_PredInfo0_40);
    PredInfo0_40 = ((MR_Word) (conv0_PredInfo0_40));
    hlds__add_pred__module_do_add_mode_9_p_0(PartOfPredmode_11, IsClassMethod_12, ItemMercuryStatus_13, ItemModeDecl_15, PredInfo0_40, &PredInfo_41, &ProcId_42, STATE_VARIABLE_Specs_76_76, STATE_VARIABLE_Specs_48);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_37)), ((MR_Box) (PredInfo_41)), PredIdTable0_39, &PredIdTable_43);
    hlds__pred_table__predicate_table_set_pred_id_table_3_p_0(PredIdTable_43, PredicateTable1_38, &PredicateTable_44);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_44, STATE_VARIABLE_ModuleInfo_75_75, STATE_VARIABLE_ModuleInfo_46);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *PredProcId_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_42));
    }
  }
}

static void MR_CALL 
hlds__add_pred__module_do_add_mode_9_p_0(
  MR_Word PartOfPredmode_10,
  MR_Word IsClassMethod_11,
  MR_Word ItemMercuryStatus_12,
  MR_Word ItemModeDecl_13,
  MR_Word STATE_VARIABLE_PredInfo_0_53,
  MR_Word * STATE_VARIABLE_PredInfo_54,
  MR_Integer * ProcId_15,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  MR_bool succeeded;
  MR_String PredName_17;
  MR_Word PredOrFunc_18;
  MR_Word Modes_21;
  MR_Word MaybeDetism_23;
  MR_Word InstVarSet_24;
  MR_Word Context_25;
  MR_Word SeqNum_26;
  MR_Word PredFormArity_27;
  MR_Word DetismDecl_28;
  MR_Word MaybeCurUserDecl_35;
  MR_Integer PredFormArityInt_52;
  MR_Word STATE_VARIABLE_Specs_59_59;
  MR_Word Var_122;

  PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_53);
  PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_0_53);
  Modes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 2))));
  MaybeDetism_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 4))));
  InstVarSet_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 5))));
  Context_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 6))));
  SeqNum_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_13, (MR_Integer) 7))));
  PredFormArity_27 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_21);
  if ((MaybeDetism_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredStatus_29;
    MR_Word PredModule_30;
    MR_Word PredSymName_31;
    MR_Word PFSymNameArity_32;

    DetismDecl_28 = (MR_Integer) 2;
    hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_0_53, &PredStatus_29);
    PredModule_30 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_53);
    {
      PredSymName_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_31, 0) = ((MR_Box) (PredModule_30));
      MR_hl_field(MR_mktag(1), PredSymName_31, 1) = ((MR_Box) (PredName_17));
    }
    {
      PFSymNameArity_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PFSymNameArity_32, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
      MR_hl_field(MR_mktag(0), PFSymNameArity_32, 1) = ((MR_Box) (PredSymName_31));
      MR_hl_field(MR_mktag(0), PFSymNameArity_32, 2) = ((MR_Box) (PredFormArity_27));
    }
    switch (IsClassMethod_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__add_pred__unspecified_det_for_method_4_p_0(PFSymNameArity_32, Context_25, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_59_59);
        break;
      case (MR_Integer) 0:
        {
          MR_Word IsExported_33;

          IsExported_33 = hlds__status__pred_status_is_exported_1_f_0(PredStatus_29);
          switch (IsExported_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__add_pred__unspecified_det_for_local_4_p_0(PFSymNameArity_32, Context_25, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_59_59);
              break;
            case (MR_Integer) 1:
              hlds__add_pred__unspecified_det_for_exported_4_p_0(PFSymNameArity_32, Context_25, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_59_59);
              break;
          }
        }
        break;
    }
  }
  else
  {
    DetismDecl_28 = (MR_Integer) 0;
    STATE_VARIABLE_Specs_59_59 = STATE_VARIABLE_Specs_0_55;
  }
  hlds__hlds_pred__pred_info_get_cur_user_decl_info_2_p_0(STATE_VARIABLE_PredInfo_0_53, &MaybeCurUserDecl_35);
  if ((MaybeCurUserDecl_35 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_59_59;
  else
  {
    MR_Word CurUserDecl_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCurUserDecl_35, (MR_Integer) 0))));
    MR_Word PredDeclSection_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CurUserDecl_36, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word PredIsPredMode_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CurUserDecl_36, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ItemExport_40;

    succeeded = (PartOfPredmode_10 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) ItemMercuryStatus_12)) == (MR_Integer) 0);
      if (succeeded)
        ItemExport_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_12, (MR_Integer) 0))) & (MR_Integer) 3);
    }
    if (succeeded)
    {
      MR_Word ModeDeclSection_41;
      MR_Word STATE_VARIABLE_Specs_95_95;

      switch (ItemExport_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          ModeDeclSection_41 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          ModeDeclSection_41 = (MR_Integer) 1;
          break;
      }
      succeeded = (PredDeclSection_37 == ModeDeclSection_41);
      if (succeeded)
        STATE_VARIABLE_Specs_95_95 = STATE_VARIABLE_Specs_59_59;
      else
      {
        MR_String ModeSectionStr_42;
        MR_String PredSectionStr_43;
        MR_Word PFSNA1_44;
        MR_Word SectionPieces_45;
        MR_Word SectionSpec_46;
        MR_Word Var_60;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_73;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_81;
        MR_Word Var_84;
        MR_Word Var_85;

        switch (ModeDeclSection_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ModeSectionStr_42 = (MR_String) "implementation";
            break;
          case (MR_Integer) 0:
            ModeSectionStr_42 = (MR_String) "interface";
            break;
        }
        switch (PredDeclSection_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            PredSectionStr_43 = (MR_String) "implementation";
            break;
          case (MR_Integer) 0:
            PredSectionStr_43 = (MR_String) "interface";
            break;
        }
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (PredName_17));
        }
        {
          PFSNA1_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PFSNA1_44, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
          MR_hl_field(MR_mktag(0), PFSNA1_44, 1) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(0), PFSNA1_44, 2) = ((MR_Box) (PredFormArity_27));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (ModeSectionStr_42));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (PFSNA1_44));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 27U));
          MR_hl_field(MR_mktag(3), Var_77, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_85, 0) = ((MR_Box) (PredSectionStr_43));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[50])));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[48])));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[14])));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[47])));
          MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
        }
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[45])));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
        }
        {
          SectionPieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SectionPieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[44])));
          MR_hl_field(MR_mktag(1), SectionPieces_45, 1) = ((MR_Box) (Var_63));
        }
        {
          SectionSpec_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SectionSpec_46, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.module_do_add_mode\'/9"));
          MR_hl_field(MR_mktag(1), SectionSpec_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), SectionSpec_46, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), SectionSpec_46, 3) = ((MR_Box) (Context_25));
          MR_hl_field(MR_mktag(1), SectionSpec_46, 4) = ((MR_Box) (SectionPieces_45));
        }
        {
          STATE_VARIABLE_Specs_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_95_95, 0) = ((MR_Box) (SectionSpec_46));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_95_95, 1) = ((MR_Box) (STATE_VARIABLE_Specs_59_59));
        }
      }
      switch (PredIsPredMode_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_95_95;
          break;
        case (MR_Integer) 1:
          {
            MR_Word PFSNA2_47;
            MR_Word PredModePieces_48;
            MR_Word PredModeSpec_49;
            MR_Word Var_96;
            MR_Word Var_99;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Word Var_104;
            MR_Word Var_105;

            {
              Var_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (PredName_17));
            }
            {
              PFSNA2_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PFSNA2_47, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
              MR_hl_field(MR_mktag(0), PFSNA2_47, 1) = ((MR_Box) (Var_96));
              MR_hl_field(MR_mktag(0), PFSNA2_47, 2) = ((MR_Box) (PredFormArity_27));
            }
            {
              Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (PFSNA2_47));
            }
            {
              Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) ((MR_Unsigned) 27U));
              MR_hl_field(MR_mktag(3), Var_105, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
            }
            {
              Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
              MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[57])));
            }
            {
              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[52])));
              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_104));
            }
            {
              Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
              MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_101));
            }
            {
              PredModePieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PredModePieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[51])));
              MR_hl_field(MR_mktag(1), PredModePieces_48, 1) = ((MR_Box) (Var_99));
            }
            {
              PredModeSpec_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PredModeSpec_49, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.module_do_add_mode\'/9"));
              MR_hl_field(MR_mktag(1), PredModeSpec_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), PredModeSpec_49, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), PredModeSpec_49, 3) = ((MR_Box) (Context_25));
              MR_hl_field(MR_mktag(1), PredModeSpec_49, 4) = ((MR_Box) (PredModePieces_48));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_56 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredModeSpec_49));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_95_95));
            }
          }
          break;
      }
    }
    else
      *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_59_59;
  }
  PredFormArityInt_52 = (MR_Integer) (PredFormArity_27);
  {
    Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Modes_21));
  }
  hlds__add_pred__add_new_proc_14_p_0(Context_25, SeqNum_26, PredFormArityInt_52, InstVarSet_24, Modes_21, Var_122, (MR_Word) ((MR_Unsigned) 0U), DetismDecl_28, MaybeDetism_23, (MR_Integer) 1, (MR_Integer) 1, STATE_VARIABLE_PredInfo_0_53, STATE_VARIABLE_PredInfo_54, ProcId_15);
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
    MR_hl_field(MR_mktag(3), Spec_11, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 217) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
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
  MR_Word Context_15,
  MR_Word SeqNum_16,
  MR_Integer Arity_17,
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
  hlds__hlds_pred__proc_info_init_13_p_0(Context_15, SeqNum_16, Arity_17, ArgTypes_28, MaybeDeclaredArgModes_20, ArgModes_19, MaybeArgLives_21, DetismDecl_22, MaybeDetism_23, IsAddressTaken_24, HasParallelConj_25, VarNameRemap_29, &ProcInfo0_30);
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
        MR_Integer UserArityInt_40;
        MR_Word FieldName_42;
        MR_Integer Var_43;
        MR_Word AccessType_41;

        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_28, PredFormArity_18);
        UserArityInt_40 = (MR_Integer) (UserArity_28);
        succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(STATE_VARIABLE_ModuleInfo_0_31, PredSymName_27, &Var_43, &AccessType_41, &FieldName_42);
        if (succeeded)
          succeeded = (UserArityInt_40 == Var_43);
        if (succeeded)
        {
          MR_Word CtorFieldTable_44;
          MR_Word TypeInfo_39_62;
          MR_Word FieldDefn_45;
          MR_Word DefnStatus_47;
          MR_Word Var_53;
          MR_Word Var_55;
          MR_Word Var_61;
          MR_Box conv0_Var_53;
          MR_Word Var_56;

          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &CtorFieldTable_44);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__add_pred_scalar_common_1[5]), CtorFieldTable_44, ((MR_Box) (FieldName_42)), &conv0_Var_53);
          if (succeeded)
          {
            Var_53 = ((MR_Word) (conv0_Var_53));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FieldDefn_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 0))));
              Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 1))));
              TypeInfo_39_62 = (MR_Word) (&hlds__add_pred_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_62, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_61)));
              if (succeeded)
              {
                Var_56 = (MR_Word) (Status_19);
                succeeded = (Var_56 != (MR_Word) ((MR_Unsigned) 12U));
                if (succeeded)
                {
                  DefnStatus_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_45, (MR_Integer) 1))));
                  Var_55 = (MR_Word) (DefnStatus_47);
                  succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 12U));
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word PredFormArity_51;
            MR_Word PFSymNameArity_52;
            MR_Word Pieces_63;
            MR_Word Spec_64;
            MR_Word Var_67;
            MR_Word Var_68;

            parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_28, &PredFormArity_51);
            {
              PFSymNameArity_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PFSymNameArity_52, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), PFSymNameArity_52, 1) = ((MR_Box) (PredSymName_27));
              MR_hl_field(MR_mktag(0), PFSymNameArity_52, 2) = ((MR_Box) (PredFormArity_51));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (PFSymNameArity_52));
            }
            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
              MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[87])));
            }
            {
              Pieces_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[80])));
              MR_hl_field(MR_mktag(1), Pieces_63, 1) = ((MR_Box) (Var_67));
            }
            {
              Spec_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.report_field_status_mismatch\'/4"));
              MR_hl_field(MR_mktag(1), Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(1), Spec_64, 3) = ((MR_Box) (Context_21));
              MR_hl_field(MR_mktag(1), Spec_64, 4) = ((MR_Box) (Pieces_63));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_34 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_64));
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
  Var_38 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
  hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_15, PredFormArity_18, Var_38, &ClausesInfo_29);
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52)
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
  MR_Word Var_54;

  hlds__hlds_pred__init_markers_1_p_0(&Markers0_25);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_26);
  PredFormArityInt_27 = (MR_Integer) (PredFormArity_16);
  parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_String) "T", PredFormArityInt_27, &TypeVars_28, TVarSet0_26, &TVarSet_29);
  Var_54 = mercury__map__init_0_f_0((MR_Word) (&hlds__add_pred_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_54, TypeVars_28, &Types_30);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_33);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_34);
  mercury__map__init_1_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_35);
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_13, PredModuleName_14, PredName_15, PredFormArity_16, Context_18, PredOrigin_19, PredStatus_17, (MR_Word) ((MR_Unsigned) 0U), GoalType_20, Markers0_25, Types_30, TVarSet_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__add_pred_scalar_common_1[18]), Proofs_33, ConstraintMap_34, ClausesInfo_21, VarNameRemap_35, &PredInfo0_36);
  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, Markers0_25, &Markers1_37);
  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 4, Markers1_37, &Markers_38);
  hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_38, PredInfo0_36, &PredInfo_39);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &PredicateTable0_40);
  hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredicateTable0_40, (MR_Integer) 0, PredOrFunc_13, PredModuleName_14, PredName_15, PredFormArity_16, &PredIds_41);
  if ((PredIds_41 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MQInfo_42;
    MR_Word PredicateTable_43;

    hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &MQInfo_42);
    hlds__pred_table__predicate_table_insert_qual_6_p_0(PredInfo_39, (MR_Integer) 1, MQInfo_42, PredId_22, PredicateTable0_40, &PredicateTable_43);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_43, STATE_VARIABLE_ModuleInfo_0_51, STATE_VARIABLE_ModuleInfo_52);
  }
  else
  {
    succeeded = ((((MR_tag((MR_Word) PredOrigin_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PredOrigin_19, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      MR_Word PredSymName_48;
      MR_String NameString_49;
      MR_String UnexpectedMsg_50;
      MR_String Var_87;
      MR_String Var_89;
      MR_String Var_90;
      MR_String Var_92;
      MR_String Var_93;
      MR_String Var_95;

      {
        PredSymName_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_48, 0) = ((MR_Box) (PredModuleName_14));
        MR_hl_field(MR_mktag(1), PredSymName_48, 1) = ((MR_Box) (PredName_15));
      }
      NameString_49 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredSymName_48);
      Var_87 = mercury__string__f_43_43_2_f_0(NameString_49, (MR_String) ").\n");
      Var_89 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_87);
      Var_90 = mercury__string__f_43_43_2_f_0((MR_String) "an existing predicate", Var_89);
      Var_92 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_90);
      Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "with a name that is identical to the name of", Var_92);
      Var_95 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_93);
      UnexpectedMsg_50 = mercury__string__f_43_43_2_f_0((MR_String) "Attempted to introduce a predicate for a promise", Var_95);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_pred.add_implicit_pred_decl\'/12", UnexpectedMsg_50);
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
