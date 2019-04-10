/*
** Automatically generated from `add_pred.m'
** by the Mercury compiler,
** version rotd-2019-04-10
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
hlds__add_pred__add_new_pred_20_p_0(
  MR_Word Origin_21,
  MR_Word Context_22,
  MR_Integer ItemNumber_23,
  MR_Word MaybeItemMercuryStatus_24,
  MR_Word PredStatus0_25,
  MR_Word NeedQual_26,
  MR_Word PredOrFunc_27,
  MR_Word PredName_28,
  MR_Word TVarSet_29,
  MR_Word ExistQVars_30,
  MR_Word Types_31,
  MR_Word Constraints_32,
  MR_Word MaybeModes_33,
  MR_Word Purity_34,
  MR_Word Markers0_35,
  MR_Word * Succeeded_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_75,
  MR_Word * STATE_VARIABLE_ModuleInfo_76,
  MR_Word STATE_VARIABLE_Specs_0_77,
  MR_Word * STATE_VARIABLE_Specs_78);

static void MR_CALL 
hlds__add_pred__unqualified_pred_error_5_p_0(
  MR_Word PredName_6,
  MR_Integer Arity_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__add_pred__add_builtin_5_p_0(
  MR_Word PredId_6,
  MR_Word HeadTypes0_7,
  MR_Word CompilationTarget_8,
  MR_Word STATE_VARIABLE_PredInfo_0_58,
  MR_Word * STATE_VARIABLE_PredInfo_59);

static void MR_CALL 
hlds__add_pred__module_do_add_mode_13_p_0(
  MR_Word Context_14,
  MR_Integer ItemNumber_15,
  MR_Word MaybeItemMercuryStatus_16,
  MR_Integer Arity_17,
  MR_Word InstVarSet_18,
  MR_Word Modes_19,
  MR_Word MaybeDet_20,
  MR_Word IsClassMethod_21,
  MR_Word STATE_VARIABLE_PredInfo_0_51,
  MR_Word * STATE_VARIABLE_PredInfo_52,
  MR_Integer * ProcId_23,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54);

static void MR_CALL 
hlds__add_pred__unspecified_det_for_exported_6_p_0(
  MR_Word Name_7,
  MR_Integer Arity_8,
  MR_Word PredOrFunc_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__add_pred__unspecified_det_for_method_6_p_0(
  MR_Word Name_7,
  MR_Integer Arity_8,
  MR_Word PredOrFunc_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__add_pred__unspecified_det_for_local_6_p_0(
  MR_Word Name_7,
  MR_Integer Arity_8,
  MR_Word PredOrFunc_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static MR_String MR_CALL 
hlds__add_pred__decl_section_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
hlds__add_pred__item_decl_section_1_f_0(
  MR_Word ItemExport_3);

static void MR_CALL 
hlds__add_pred__maybe_check_field_access_function_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word FuncName_9,
  MR_Integer FuncArity_10,
  MR_Word FuncStatus_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
hlds__add_pred__preds_do_add_implicit_11_p_0(
  MR_Word ModuleName_12,
  MR_Word PredName_13,
  MR_Integer PredArity_14,
  MR_Word PredOrFunc_15,
  MR_Word PredStatus_16,
  MR_Word Context_17,
  MR_Word Origin_18,
  MR_Word ClausesInfo_19,
  MR_Word * PredId_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44);


static /* final */ const MR_Box hlds__add_pred_scalar_common_1[70][2];

static /* final */ const MR_Box hlds__add_pred_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__add_pred_scalar_common_3[1][1];




static /* final */ const MR_Box hlds__add_pred_scalar_common_1[70][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the modes of its arguments."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declares a determinism without declaring"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[3])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so it may not have a separate mode declaration."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[3])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "combined with a mode declaration,"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of local predicates.)"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[3])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to automatically infer the determinism"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option if you want the compiler"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--infer-det"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Use the"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--no-infer-det"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "you specified the"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(This is an error because"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have been qualified by the parser."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[3])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[3])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: a field access function for an exported field"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In declaration of"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for local"))
  },
  /* row 49 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[36])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_pred_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type class method"))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for exported"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: mode declaration in the"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "section"))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose"))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Internal error: the unqualified predicate name"))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: predicate"))
  },
};

static /* final */ const MR_Box hlds__add_pred_scalar_common_2[3][3] = {
  /* row 0 */
  {
    (MR_Box) (((MR_Unsigned) 193U << 1)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[64]))),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__add_pred_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
hlds__add_pred__check_pred_if_field_access_function_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word SectionItem_6,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_Word SectionInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_6, (MR_Integer) 0))));
    MR_Word ItemPredDecl_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_6, (MR_Integer) 1))));
    MR_Word ItemMercuryStatus_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_8, (MR_Integer) 0))));
    MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_9, (MR_Integer) 0))));
    MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_9, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_9, (MR_Integer) 2))));
    MR_Word Context_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_9, (MR_Integer) 12))));

    switch (PredOrFunc_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer PredArity_26;
          MR_Integer FuncArity_27;
          MR_Word PredStatus_28;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_14, &PredArity_26);
          parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArity_27, PredArity_26);
          hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_10, &PredStatus_28);
          hlds__add_pred__maybe_check_field_access_function_7_p_0(ModuleInfo_5, SymName_12, FuncArity_27, PredStatus_28, Context_24, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
        break;
    }
  }
}

void MR_CALL 
hlds__add_pred__preds_add_implicit_for_assertion_10_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word ModuleName_12,
  MR_Word PredName_13,
  MR_Integer PredArity_14,
  MR_Word PredOrFunc_15,
  MR_Word HeadVars_16,
  MR_Word Status_17,
  MR_Word Context_18,
  MR_Word * PredId_19)
{
  {
    MR_Word ClausesInfo_20;
    MR_String FileName_21;
    MR_Integer LineNum_22;
    MR_Word Origin_23;
    MR_Word Markers0_40;
    MR_Word TVarSet0_41;
    MR_Word TypeVars_42;
    MR_Word TVarSet_43;
    MR_Word Types_44;
    MR_Word Proofs_47;
    MR_Word ConstraintMap_48;
    MR_Word VarNameRemap_49;
    MR_Word PredInfo0_50;
    MR_Word Markers1_51;
    MR_Word Markers_52;
    MR_Word PredInfo_53;
    MR_Word PredicateTable0_54;
    MR_Word PredIds_55;
    MR_Word Var_61;

    hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(HeadVars_16, &ClausesInfo_20);
    mercury__term__context_file_2_p_0(Context_18, &FileName_21);
    mercury__term__context_line_2_p_0(Context_18, &LineNum_22);
    {
      Origin_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Origin_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Origin_23, 1) = ((MR_Box) (FileName_21));
      MR_hl_field(MR_mktag(3), Origin_23, 2) = ((MR_Box) (LineNum_22));
    }
    hlds__hlds_pred__init_markers_1_p_0(&Markers0_40);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_41);
    parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_String) "T", PredArity_14, &TypeVars_42, TVarSet0_41, &TVarSet_43);
    Var_61 = mercury__map__init_0_f_0((MR_Word) (&hlds__add_pred_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_61, TypeVars_42, &Types_44);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_47);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_48);
    mercury__map__init_1_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_49);
    hlds__hlds_pred__pred_info_init_19_p_0(ModuleName_12, PredName_13, PredArity_14, PredOrFunc_15, Context_18, Origin_23, Status_17, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), Markers0_40, Types_44, TVarSet_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__add_pred_scalar_common_1[46]), Proofs_47, ConstraintMap_48, ClausesInfo_20, VarNameRemap_49, &PredInfo0_50);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, Markers0_40, &Markers1_51);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 4, Markers1_51, &Markers_52);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_52, PredInfo0_50, &PredInfo_53);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &PredicateTable0_54);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable0_54, (MR_Integer) 0, PredOrFunc_15, PredName_13, PredArity_14, &PredIds_55);
    if ((PredIds_55 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MQInfo_56;
      MR_Word PredicateTable_57;

      hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &MQInfo_56);
      hlds__pred_table__predicate_table_insert_qual_6_p_0(PredInfo_53, (MR_Integer) 1, MQInfo_56, PredId_19, PredicateTable0_54, &PredicateTable_57);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_57, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_pred.preds_do_add_implicit\'/11", (MR_String) "search succeeded");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__add_pred__module_add_pred_or_func_21_p_0(
  MR_Word Origin_22,
  MR_Word Context_23,
  MR_Integer ItemNumber_24,
  MR_Word MaybeItemMercuryStatus_25,
  MR_Word PredStatus_26,
  MR_Word NeedQual_27,
  MR_Word PredOrFunc_28,
  MR_Word PredName_29,
  MR_Word TypeVarSet_30,
  MR_Word InstVarSet_31,
  MR_Word ExistQVars_32,
  MR_Word TypesAndModes_33,
  MR_Word Constraints_34,
  MR_Word MaybeDet_35,
  MR_Word Purity_36,
  MR_Word Markers_37,
  MR_Word * MaybePredProcId_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66)
{
  {
    MR_bool succeeded;
    MR_Word Types_41;
    MR_Word MaybeModes0_42;
    MR_Integer Arity_43;
    MR_Word Modes0_44;

    parse_tree__prog_util__split_types_and_modes_3_p_0(TypesAndModes_33, &Types_41, &MaybeModes0_42);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_41, &Arity_43);
    succeeded = (PredOrFunc_28 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MaybeDet_35 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeModes0_42 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Modes0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes0_42, (MR_Integer) 0))));
          succeeded = (Modes0_44 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word Succeeded_52;

      hlds__add_pred__add_new_pred_20_p_0(Origin_22, Context_23, ItemNumber_24, MaybeItemMercuryStatus_25, PredStatus_26, NeedQual_27, PredOrFunc_28, PredName_29, TypeVarSet_30, ExistQVars_32, Types_41, Constraints_34, (MR_Word) ((MR_Unsigned) 0U), Purity_36, Markers_37, &Succeeded_52, STATE_VARIABLE_ModuleInfo_0_63, STATE_VARIABLE_ModuleInfo_64, STATE_VARIABLE_Specs_0_65, STATE_VARIABLE_Specs_66);
      *MaybePredProcId_38 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word MaybeModes_205;
      MR_Word Succeeded_206;
      MR_Word STATE_VARIABLE_ModuleInfo_70_213;
      MR_Word STATE_VARIABLE_Specs_71_214;

      succeeded = (PredOrFunc_28 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (MaybeModes0_42 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (MaybeDet_35 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Integer FuncArity_47;
        MR_Word InMode_48;
        MR_Word InModes_49;
        MR_Word OutMode_50;
        MR_Word ArgModes_51;
        MR_Word Var_68;

        parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArity_47, Arity_43);
        parse_tree__prog_mode__in_mode_1_p_0(&InMode_48);
        mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FuncArity_47, ((MR_Box) (InMode_48)), &InModes_49);
        parse_tree__prog_mode__out_mode_1_p_0(&OutMode_50);
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (OutMode_50));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InModes_49, Var_68, &ArgModes_51);
        {
          MaybeModes_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeModes_205, 0) = ((MR_Box) (ArgModes_51));
        }
      }
      else
        MaybeModes_205 = MaybeModes0_42;
      hlds__add_pred__add_new_pred_20_p_0(Origin_22, Context_23, ItemNumber_24, MaybeItemMercuryStatus_25, PredStatus_26, NeedQual_27, PredOrFunc_28, PredName_29, TypeVarSet_30, ExistQVars_32, Types_41, Constraints_34, MaybeModes_205, Purity_36, Markers_37, &Succeeded_206, STATE_VARIABLE_ModuleInfo_0_63, &STATE_VARIABLE_ModuleInfo_70_213, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_71_214);
      if ((MaybeModes_205 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_118;
        MR_Word Var_107;
        MR_String Var_108;
        MR_Word Var_109;

        *MaybePredProcId_38 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = (MaybeDet_35 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (PredOrFunc_28 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Types_41 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) PredName_29)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredName_29, (MR_Integer) 0))));
                Var_108 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredName_29, (MR_Integer) 1))));
                Var_109 = mdbcomp__builtin_modules__mercury_int_module_0_f_0();
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_107, Var_109);
                if (succeeded)
                  succeeded = (strcmp(Var_108, (MR_String) "is") == 0);
              }
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_118 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_26);
                succeeded = (Var_118 == (MR_Integer) 1);
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word DetPieces_120;
          MR_Word DetMsg_121;
          MR_Word DetSpec_122;
          MR_Word Var_125;
          MR_Word Var_126;
          MR_Word Var_127;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Var_134;

          {
            Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (PredName_29));
            MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (Arity_43));
          }
          {
            Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (Var_127));
          }
          {
            Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
            MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[7])));
          }
          {
            DetPieces_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DetPieces_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[69])));
            MR_hl_field(MR_mktag(1), DetPieces_120, 1) = ((MR_Box) (Var_125));
          }
          {
            Var_130 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (DetPieces_120));
          }
          {
            Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
            MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            DetMsg_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DetMsg_121, 0) = ((MR_Box) (Context_23));
            MR_hl_field(MR_mktag(0), DetMsg_121, 1) = ((MR_Box) (Var_129));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (DetMsg_121));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            DetSpec_122 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DetSpec_122, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), DetSpec_122, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), DetSpec_122, 2) = ((MR_Box) (Var_134));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_66 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DetSpec_122));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_71_214));
          }
        }
        else
          *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_71_214;
        *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_70_213;
      }
      else
      {
        MR_Word Modes_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_205, (MR_Integer) 0))));

        switch (Succeeded_206) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *MaybePredProcId_38 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_70_213;
              *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_71_214;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IsClassMethod_54;
              MR_Word PredProcId_56;

              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_37, (MR_Integer) 11);
              if (succeeded)
                IsClassMethod_54 = (MR_Integer) 1;
              else
                IsClassMethod_54 = (MR_Integer) 0;
              hlds__add_pred__module_add_mode_15_p_0(Context_23, ItemNumber_24, (MR_Word) ((MR_Unsigned) 0U), PredStatus_26, PredOrFunc_28, PredName_29, InstVarSet_31, Modes_53, MaybeDet_35, IsClassMethod_54, &PredProcId_56, STATE_VARIABLE_ModuleInfo_70_213, STATE_VARIABLE_ModuleInfo_64, STATE_VARIABLE_Specs_71_214, STATE_VARIABLE_Specs_66);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybePredProcId_38 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcId_56));
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
  MR_Word Origin_21,
  MR_Word Context_22,
  MR_Integer ItemNumber_23,
  MR_Word MaybeItemMercuryStatus_24,
  MR_Word PredStatus0_25,
  MR_Word NeedQual_26,
  MR_Word PredOrFunc_27,
  MR_Word PredName_28,
  MR_Word TVarSet_29,
  MR_Word ExistQVars_30,
  MR_Word Types_31,
  MR_Word Constraints_32,
  MR_Word MaybeModes_33,
  MR_Word Purity_34,
  MR_Word Markers0_35,
  MR_Word * Succeeded_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_75,
  MR_Word * STATE_VARIABLE_ModuleInfo_76,
  MR_Word STATE_VARIABLE_Specs_0_77,
  MR_Word * STATE_VARIABLE_Specs_78)
{
  {
    MR_bool succeeded;
    MR_Word PredStatus_39;
    MR_Word ModuleName_40;
    MR_Integer PredArity_41;
    MR_Word Var_79 = (MR_Word) (PredStatus0_25);

    succeeded = (Var_79 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      PredStatus_39 = (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_pred_scalar_common_3[0]))));
    else
      PredStatus_39 = PredStatus0_25;
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_75, &ModuleName_40);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_31, &PredArity_41);
    if (((MR_tag((MR_Word) PredName_28)) == (MR_Integer) 1))
    {
      MR_Word MNameOfPred_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredName_28, (MR_Integer) 0))));
      MR_String PName_44 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredName_28, (MR_Integer) 1))));
      MR_Word CurUserDecl_50;
      MR_Word PredTable0_51;
      MR_Word ClausesInfo_52;
      MR_Word Proofs_53;
      MR_Word ConstraintMap_54;
      MR_Word PurityMarkers_55;
      MR_Word Markers_56;
      MR_Word VarNameRemap_57;
      MR_Word PredInfo0_58;
      MR_Word PredIds_59;
      MR_Word Var_83;
      MR_Word ItemExport_46;
      MR_Word ItemMercuryStatus_45;

      succeeded = (MaybeItemMercuryStatus_24 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ItemMercuryStatus_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemMercuryStatus_24, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) ItemMercuryStatus_45)) == (MR_Integer) 0);
        if (succeeded)
          ItemExport_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_45, (MR_Integer) 0))) & (MR_Integer) 3);
      }
      if (succeeded)
      {
        MR_Word DeclSection_47;
        MR_Word PredmodeDecl_48;
        MR_Word Var_82;

        DeclSection_47 = hlds__add_pred__item_decl_section_1_f_0(ItemExport_46);
        if ((MaybeModes_33 == (MR_Word) ((MR_Unsigned) 0U)))
          PredmodeDecl_48 = (MR_Integer) 0;
        else
          PredmodeDecl_48 = (MR_Integer) 1;
        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_82, 0) = (MR_Box) (((((MR_Unsigned) (DeclSection_47) << 1)) | (MR_Unsigned) (PredmodeDecl_48)));
          MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (ItemNumber_23));
        }
        {
          CurUserDecl_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CurUserDecl_50, 0) = ((MR_Box) (Var_82));
        }
      }
      else
        CurUserDecl_50 = (MR_Word) ((MR_Unsigned) 0U);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_75, &PredTable0_51);
      Var_83 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
      hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_27, PredArity_41, Var_83, &ClausesInfo_52);
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_53);
      mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_54);
      hlds__hlds_pred__purity_to_markers_2_p_0(Purity_34, &PurityMarkers_55);
      hlds__hlds_pred__add_markers_3_p_0(PurityMarkers_55, Markers0_35, &Markers_56);
      mercury__map__init_1_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_57);
      hlds__hlds_pred__pred_info_init_19_p_0(ModuleName_40, PredName_28, PredArity_41, PredOrFunc_27, Context_22, Origin_21, PredStatus_39, CurUserDecl_50, (MR_Word) ((MR_Unsigned) 12U), Markers_56, Types_31, TVarSet_29, ExistQVars_30, Constraints_32, Proofs_53, ConstraintMap_54, ClausesInfo_52, VarNameRemap_57, &PredInfo0_58);
      hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredTable0_51, (MR_Integer) 0, PredOrFunc_27, MNameOfPred_43, PName_44, PredArity_41, &PredIds_59);
      if ((PredIds_59 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PQInfo_66;
        MR_Word PredId_67;
        MR_Word PredTable1_68;
        MR_Word PredTable_74;

        *Succeeded_36 = (MR_Integer) 1;
        hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_75, &PQInfo_66);
        hlds__pred_table__predicate_table_insert_qual_6_p_0(PredInfo0_58, NeedQual_26, PQInfo_66, &PredId_67, PredTable0_51, &PredTable1_68);
        succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo0_58);
        if (succeeded)
        {
          MR_Word Globals_69;
          MR_Word CompilationTarget_70;
          MR_Word PredInfo_71;
          MR_Word Preds1_72;
          MR_Word Preds_73;

          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_75, &Globals_69);
          libs__globals__get_target_2_p_0(Globals_69, &CompilationTarget_70);
          hlds__add_pred__add_builtin_5_p_0(PredId_67, Types_31, CompilationTarget_70, PredInfo0_58, &PredInfo_71);
          hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable1_68, &Preds1_72);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_67)), ((MR_Box) (PredInfo_71)), Preds1_72, &Preds_73);
          hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_73, PredTable1_68, &PredTable_74);
        }
        else
          PredTable_74 = PredTable1_68;
        hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_74, STATE_VARIABLE_ModuleInfo_0_75, STATE_VARIABLE_ModuleInfo_76);
        *STATE_VARIABLE_Specs_78 = STATE_VARIABLE_Specs_0_77;
      }
      else
      {
        MR_Word OrigPred_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_59, (MR_Integer) 0))));
        MR_Word OrigPredInfo_62;
        MR_Word OrigContext_63;
        MR_String DeclString_64;
        MR_Integer PorFArity_65;
        MR_Word Var_87;

        *Succeeded_36 = (MR_Integer) 0;
        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_75, OrigPred_60, &OrigPredInfo_62);
        hlds__hlds_pred__pred_info_get_context_2_p_0(OrigPredInfo_62, &OrigContext_63);
        DeclString_64 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_27);
        parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_27, &PorFArity_65, PredArity_41);
        Var_87 = (MR_Word) (PredStatus0_25);
        succeeded = (Var_87 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          *STATE_VARIABLE_Specs_78 = STATE_VARIABLE_Specs_0_77;
        else
        {
          hlds__make_hlds_error__report_multiple_def_error_8_p_0(PredName_28, PorFArity_65, DeclString_64, Context_22, OrigContext_63, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
        }
        *STATE_VARIABLE_ModuleInfo_76 = STATE_VARIABLE_ModuleInfo_0_75;
      }
    }
    else
    {
      *Succeeded_36 = (MR_Integer) 0;
      hlds__hlds_module__module_info_incr_errors_2_p_0(STATE_VARIABLE_ModuleInfo_0_75, STATE_VARIABLE_ModuleInfo_76);
      hlds__add_pred__unqualified_pred_error_5_p_0(PredName_28, PredArity_41, Context_22, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
    }
  }
}

static void MR_CALL 
hlds__add_pred__unqualified_pred_error_5_p_0(
  MR_Word PredName_6,
  MR_Integer Arity_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word Pieces_10;
    MR_Word Msg_11;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_31;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (PredName_6));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Arity_7));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[38])));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[68])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Pieces_10));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Msg_11));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
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
    MR_Word Var_107;
    MR_Word STATE_VARIABLE_PredInfo_110_110;
    MR_Word Var_125;

    Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_58);
    Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_58);
    hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_0_58, &Context_12);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_58, &ClausesInfo0_13);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo0_13, &VarSet0_14);
    hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(ClausesInfo0_13, &ProcArgVector_15);
    HeadVars0_16 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__add_pred_scalar_common_1[0]), ProcArgVector_15);
    hlds__hlds_goal__goal_info_init_2_p_0(Context_12, &GoalInfo0_17);
    NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars0_16);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_18, GoalInfo0_17, &GoalInfo1_19);
    Var_125 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_125);
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
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
        }
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
    {
      GoalExpr_21 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_2[1]));
      GoalInfo_22 = GoalInfo1_19;
      HeadVars_23 = HeadVars0_16;
      HeadTypes_24 = HeadTypes0_7;
      VarSet_25 = VarSet0_14;
      Stub_26 = (MR_Integer) 1;
    }
    else
    {
      {
        MR_Word Var_126;

        Var_126 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_126);
        if (succeeded)
          succeeded = (strcmp(Name_11, (MR_String) "trace_get_io_state") == 0);
      }
      if (!(succeeded))
      {
        MR_Word Var_127;

        Var_127 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_127);
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
        MR_Word Var_66;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_73;
        MR_Word Var_80;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_90;
        MR_Word Var_92;
        MR_Word Var_93;

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
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (Var_68));
        }
        Var_70 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_71 = parse_tree__prog_mode__ground_inst_0_f_0();
        {
          Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (Var_71));
        }
        {
          UnifyMode_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UnifyMode_31, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), UnifyMode_31, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (UnifyMode_31));
          MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Unification_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Unification_32, 0) = ((MR_Box) (LHS_29));
          MR_hl_field(MR_mktag(0), Unification_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[64])));
          MR_hl_field(MR_mktag(0), Unification_32, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Unification_32, 3) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(0), Unification_32, 4) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), Unification_32, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Unification_32, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          AssignExpr_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AssignExpr_34, 0) = ((MR_Box) (LHS_29));
          MR_hl_field(MR_mktag(1), AssignExpr_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_2[2])));
          MR_hl_field(MR_mktag(1), AssignExpr_34, 2) = ((MR_Box) (UnifyMode_31));
          MR_hl_field(MR_mktag(1), AssignExpr_34, 3) = ((MR_Box) (Unification_32));
          MR_hl_field(MR_mktag(1), AssignExpr_34, 4) = ((MR_Box) (&hlds__add_pred_scalar_common_1[65]));
        }
        Var_80 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_29);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_80, GoalInfo0_17, &GoalInfoWithZero_35);
        {
          AssignGoal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AssignGoal_36, 0) = ((MR_Box) (AssignExpr_34));
          MR_hl_field(MR_mktag(0), AssignGoal_36, 1) = ((MR_Box) (GoalInfoWithZero_35));
        }
        Var_84 = parse_tree__prog_mode__in_mode_0_f_0();
        Var_86 = parse_tree__prog_mode__uo_mode_0_f_0();
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_85));
        }
        {
          CastExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), CastExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), CastExpr_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_3[0])));
          MR_hl_field(MR_mktag(3), CastExpr_37, 2) = ((MR_Box) (HeadVars_23));
          MR_hl_field(MR_mktag(3), CastExpr_37, 3) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(3), CastExpr_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), CastExpr_37, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        Var_90 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_23);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_90, GoalInfo0_17, &GoalInfoWithZeroHeadVars_38);
        {
          CastGoal_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CastGoal_39, 0) = ((MR_Box) (CastExpr_37));
          MR_hl_field(MR_mktag(0), CastGoal_39, 1) = ((MR_Box) (GoalInfoWithZeroHeadVars_38));
        }
        {
          Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (CastGoal_39));
          MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (AssignGoal_36));
          MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
        }
        {
          ConjExpr_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConjExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConjExpr_40, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ConjExpr_40, 2) = ((MR_Box) (Var_92));
        }
        {
          ConjGoal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ConjGoal_41, 0) = ((MR_Box) (ConjExpr_40));
          MR_hl_field(MR_mktag(0), ConjGoal_41, 1) = ((MR_Box) (GoalInfoWithZeroHeadVars_38));
        }
        {
          GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[66])));
          MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (ConjGoal_41));
        }
        GoalInfo_22 = GoalInfo1_19;
        Stub_26 = (MR_Integer) 0;
      }
      else
      {
        {
          MR_Word Var_128;

          Var_128 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_128);
          if (succeeded)
            succeeded = (strcmp(Name_11, (MR_String) "trace_set_io_state") == 0);
        }
        if (!(succeeded))
        {
          MR_Word Var_129;

          Var_129 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_129);
          if (succeeded)
            succeeded = (strcmp(Name_11, (MR_String) "unsafe_set_io_state") == 0);
        }
        if (succeeded)
        {
          MR_Word ConjGoal_116;

          GoalInfo_22 = GoalInfo1_19;
          {
            ConjGoal_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConjGoal_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_2[1])));
            MR_hl_field(MR_mktag(0), ConjGoal_116, 1) = ((MR_Box) (GoalInfo_22));
          }
          {
            GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[67])));
            MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (ConjGoal_116));
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
    hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_23, HeadTypes_24, &VarTypes_50);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__add_pred_scalar_common_1[1]), &TVarNameMap_51);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_52);
    Var_107 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    switch (Stub_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_47;
          MR_Word Clause_48;
          MR_Word ClausesRep_49;
          MR_Word ClausesInfo_53;
          MR_Word Markers0_54;
          MR_Word Var_104;

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
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Clause_48));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__hlds_clauses__set_clause_list_2_p_0(Var_104, &ClausesRep_49);
          {
            ClausesInfo_53 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 0) = ((MR_Box) (VarSet_25));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 1) = ((MR_Box) (TVarNameMap_51));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 2) = ((MR_Box) (VarTypes_50));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 3) = ((MR_Box) (VarTypes_50));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 4) = ((MR_Box) (ProcArgVector_15));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 5) = ((MR_Box) (ClausesRep_49));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 6) = ((MR_Box) (Var_107));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 7) = ((MR_Box) (RttiVarMaps_52));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          }
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_53, STATE_VARIABLE_PredInfo_0_58, &STATE_VARIABLE_PredInfo_110_110);
          hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_110_110, &Markers0_54);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 8, Markers0_54, &Markers_57);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Markers2_56;
          MR_Word ClausesRep_135;
          MR_Word ClausesInfo_136;
          MR_Word Markers0_137;
          MR_Word Markers1_138;

          hlds__hlds_clauses__set_clause_list_2_p_0((MR_Word) ((MR_Unsigned) 0U), &ClausesRep_135);
          {
            ClausesInfo_136 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClausesInfo_136, 0) = ((MR_Box) (VarSet_25));
            MR_hl_field(MR_mktag(0), ClausesInfo_136, 1) = ((MR_Box) (TVarNameMap_51));
            MR_hl_field(MR_mktag(0), ClausesInfo_136, 2) = ((MR_Box) (VarTypes_50));
            MR_hl_field(MR_mktag(0), ClausesInfo_136, 3) = ((MR_Box) (VarTypes_50));
            MR_hl_field(MR_mktag(0), ClausesInfo_136, 4) = ((MR_Box) (ProcArgVector_15));
            MR_hl_field(MR_mktag(0), ClausesInfo_136, 5) = ((MR_Box) (ClausesRep_135));
            MR_hl_field(MR_mktag(0), ClausesInfo_136, 6) = ((MR_Box) (Var_107));
            MR_hl_field(MR_mktag(0), ClausesInfo_136, 7) = ((MR_Box) (RttiVarMaps_52));
            MR_hl_field(MR_mktag(0), ClausesInfo_136, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          }
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_136, STATE_VARIABLE_PredInfo_0_58, &STATE_VARIABLE_PredInfo_110_110);
          hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_110_110, &Markers0_137);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 8, Markers0_137, &Markers1_138);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, Markers1_138, &Markers2_56);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 1, Markers2_56, &Markers_57);
        }
        break;
    }
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_57, STATE_VARIABLE_PredInfo_110_110, STATE_VARIABLE_PredInfo_59);
  }
}

void MR_CALL 
hlds__add_pred__module_add_mode_15_p_0(
  MR_Word Context_16,
  MR_Integer ItemNumber_17,
  MR_Word MaybeItemMercuryStatus_18,
  MR_Word PredStatus_19,
  MR_Word PredOrFunc_20,
  MR_Word PredName_21,
  MR_Word InstVarSet_22,
  MR_Word Modes_23,
  MR_Word MaybeDet_24,
  MR_Word IsClassMethod_25,
  MR_Word * PredProcId_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName0_29;
    MR_Word ModuleName_30;
    MR_Integer Arity_31;
    MR_Word PredicateTable0_32;
    MR_Word PredIds_33;
    MR_Word PredId_35;
    MR_Word PredicateTable1_36;
    MR_Word Preds0_37;
    MR_Word PredInfo0_38;
    MR_Word PredInfo_39;
    MR_Integer ProcId_40;
    MR_Word Preds_41;
    MR_Word PredicateTable_42;
    MR_Word STATE_VARIABLE_ModuleInfo_49_49;
    MR_Word STATE_VARIABLE_Specs_52_52;
    MR_Word PredIdPrime_34;
    MR_Word Var_48;
    MR_Box conv0_PredInfo0_38;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &ModuleName0_29);
    mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(PredName_21, ModuleName0_29, &ModuleName_30);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_23, &Arity_31);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &PredicateTable0_32);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable0_32, (MR_Integer) 0, PredOrFunc_20, PredName_21, Arity_31, &PredIds_33);
    succeeded = (PredIds_33 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PredIdPrime_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_33, (MR_Integer) 0))));
      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_33, (MR_Integer) 1))));
      succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      PredId_35 = PredIdPrime_34;
      STATE_VARIABLE_Specs_52_52 = STATE_VARIABLE_Specs_0_45;
      STATE_VARIABLE_ModuleInfo_49_49 = STATE_VARIABLE_ModuleInfo_0_43;
    }
    else
    {
      MR_Word Var_50;

      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (PredName_21));
      }
      hlds__add_pred__preds_add_implicit_report_error_14_p_0(STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_49_49, ModuleName_30, PredName_21, Arity_31, PredOrFunc_20, PredStatus_19, IsClassMethod_25, Context_16, Var_50, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[11])), &PredId_35, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_52_52);
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_49_49, &PredicateTable1_36);
    hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable1_36, &Preds0_37);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds0_37, ((MR_Box) (PredId_35)), &conv0_PredInfo0_38);
    PredInfo0_38 = ((MR_Word) (conv0_PredInfo0_38));
    hlds__add_pred__module_do_add_mode_13_p_0(Context_16, ItemNumber_17, MaybeItemMercuryStatus_18, Arity_31, InstVarSet_22, Modes_23, MaybeDet_24, IsClassMethod_25, PredInfo0_38, &PredInfo_39, &ProcId_40, STATE_VARIABLE_Specs_52_52, STATE_VARIABLE_Specs_46);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_35)), ((MR_Box) (PredInfo_39)), Preds0_37, &Preds_41);
    hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_41, PredicateTable1_36, &PredicateTable_42);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_42, STATE_VARIABLE_ModuleInfo_49_49, STATE_VARIABLE_ModuleInfo_44);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *PredProcId_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_35));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_40));
    }
  }
}

static void MR_CALL 
hlds__add_pred__module_do_add_mode_13_p_0(
  MR_Word Context_14,
  MR_Integer ItemNumber_15,
  MR_Word MaybeItemMercuryStatus_16,
  MR_Integer Arity_17,
  MR_Word InstVarSet_18,
  MR_Word Modes_19,
  MR_Word MaybeDet_20,
  MR_Word IsClassMethod_21,
  MR_Word STATE_VARIABLE_PredInfo_0_51,
  MR_Word * STATE_VARIABLE_PredInfo_52,
  MR_Integer * ProcId_23,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  {
    MR_bool succeeded;
    MR_String PredName_25;
    MR_Word PredOrFunc_26;
    MR_Word DetismDecl_27;
    MR_Word MaybeCurUserDecl_33;
    MR_Word STATE_VARIABLE_Specs_57_57;
    MR_Word Var_140;

    PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_51);
    PredOrFunc_26 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_0_51);
    if ((MaybeDet_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredStatus_28;
      MR_Word PredModule_29;
      MR_Word PredSymName_30;

      DetismDecl_27 = (MR_Integer) 2;
      hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_0_51, &PredStatus_28);
      PredModule_29 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_51);
      {
        PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_30, 0) = ((MR_Box) (PredModule_29));
        MR_hl_field(MR_mktag(1), PredSymName_30, 1) = ((MR_Box) (PredName_25));
      }
      switch (IsClassMethod_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__add_pred__unspecified_det_for_method_6_p_0(PredSymName_30, Arity_17, PredOrFunc_26, Context_14, STATE_VARIABLE_Specs_0_53, &STATE_VARIABLE_Specs_57_57);
          break;
        case (MR_Integer) 0:
          {
            MR_Word IsExported_31;

            IsExported_31 = hlds__status__pred_status_is_exported_1_f_0(PredStatus_28);
            switch (IsExported_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__add_pred__unspecified_det_for_local_6_p_0(PredSymName_30, Arity_17, PredOrFunc_26, Context_14, STATE_VARIABLE_Specs_0_53, &STATE_VARIABLE_Specs_57_57);
                break;
              case (MR_Integer) 1:
                hlds__add_pred__unspecified_det_for_exported_6_p_0(PredSymName_30, Arity_17, PredOrFunc_26, Context_14, STATE_VARIABLE_Specs_0_53, &STATE_VARIABLE_Specs_57_57);
                break;
            }
          }
          break;
      }
    }
    else
    {
      DetismDecl_27 = (MR_Integer) 0;
      STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_53;
    }
    hlds__hlds_pred__pred_info_get_cur_user_decl_info_2_p_0(STATE_VARIABLE_PredInfo_0_51, &MaybeCurUserDecl_33);
    if ((MaybeCurUserDecl_33 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_57_57;
    else
    {
      MR_Word CurUserDecl_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCurUserDecl_33, (MR_Integer) 0))));
      MR_Word PredDeclSection_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CurUserDecl_34, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word PredIsPredMode_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CurUserDecl_34, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ItemExport_39;
      MR_Word ItemMercuryStatus_38;

      succeeded = (MaybeItemMercuryStatus_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ItemMercuryStatus_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemMercuryStatus_16, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) ItemMercuryStatus_38)) == (MR_Integer) 0);
        if (succeeded)
          ItemExport_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_38, (MR_Integer) 0))) & (MR_Integer) 3);
      }
      if (succeeded)
      {
        MR_Word ModeDeclSection_40;
        MR_Word STATE_VARIABLE_Specs_106_106;

        ModeDeclSection_40 = hlds__add_pred__item_decl_section_1_f_0(ItemExport_39);
        succeeded = (PredDeclSection_35 == ModeDeclSection_40);
        if (succeeded)
          STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_57_57;
        else
        {
          MR_String ModeSectionStr_41;
          MR_String PredSectionStr_42;
          MR_Word SectionPieces_43;
          MR_Word SectionMsg_44;
          MR_Word SectionSpec_45;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_65;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_77;
          MR_Word Var_80;
          MR_Word Var_82;
          MR_Word Var_85;
          MR_Word Var_88;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_99;
          MR_Word Var_100;
          MR_Word Var_104;

          ModeSectionStr_41 = hlds__add_pred__decl_section_to_string_1_f_0(ModeDeclSection_40);
          PredSectionStr_42 = hlds__add_pred__decl_section_to_string_1_f_0(PredDeclSection_35);
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (ModeSectionStr_41));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), Var_69, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
          }
          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (PredName_25));
          }
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (Arity_17));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_92, 0) = ((MR_Box) (PredSectionStr_42));
          }
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[13])));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[61])));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[60])));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_88));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[59])));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[58])));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[57])));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_74));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[56])));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[55])));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
          }
          {
            SectionPieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SectionPieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[54])));
            MR_hl_field(MR_mktag(1), SectionPieces_43, 1) = ((MR_Box) (Var_60));
          }
          {
            Var_100 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (SectionPieces_43));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            SectionMsg_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SectionMsg_44, 0) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(0), SectionMsg_44, 1) = ((MR_Box) (Var_99));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (SectionMsg_44));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            SectionSpec_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SectionSpec_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), SectionSpec_45, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), SectionSpec_45, 2) = ((MR_Box) (Var_104));
          }
          {
            STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (SectionSpec_45));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (STATE_VARIABLE_Specs_57_57));
          }
        }
        switch (PredIsPredMode_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_106_106;
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredModePieces_46;
              MR_Word PredModeMsg_47;
              MR_Word PredModeSpec_48;
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word Var_111;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word Var_118;
              MR_Word Var_132;
              MR_Word Var_133;
              MR_Word Var_137;

              {
                Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(MR_mktag(3), Var_110, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
              }
              {
                Var_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (PredName_25));
              }
              {
                Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (Var_114));
                MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (Arity_17));
              }
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (Var_113));
              }
              {
                Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_110));
                MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[18])));
              }
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[63])));
                MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_118));
              }
              {
                Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
                MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_115));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
                MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_111));
              }
              {
                PredModePieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), PredModePieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[62])));
                MR_hl_field(MR_mktag(1), PredModePieces_46, 1) = ((MR_Box) (Var_109));
              }
              {
                Var_133 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (PredModePieces_46));
              }
              {
                Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Var_133));
                MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                PredModeMsg_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredModeMsg_47, 0) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(0), PredModeMsg_47, 1) = ((MR_Box) (Var_132));
              }
              {
                Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (PredModeMsg_47));
                MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                PredModeSpec_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredModeSpec_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), PredModeSpec_48, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(0), PredModeSpec_48, 2) = ((MR_Box) (Var_137));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_54 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredModeSpec_48));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_106_106));
              }
            }
            break;
        }
      }
      else
        *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_57_57;
    }
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (Modes_19));
    }
    hlds__add_pred__add_new_proc_14_p_0(Context_14, ItemNumber_15, Arity_17, InstVarSet_18, Modes_19, Var_140, (MR_Word) ((MR_Unsigned) 0U), DetismDecl_27, MaybeDet_20, (MR_Integer) 1, (MR_Integer) 1, STATE_VARIABLE_PredInfo_0_51, STATE_VARIABLE_PredInfo_52, ProcId_23);
  }
}

static void MR_CALL 
hlds__add_pred__unspecified_det_for_exported_6_p_0(
  MR_Word Name_7,
  MR_Integer Arity_8,
  MR_Word PredOrFunc_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word Pieces_12;
    MR_Word Msg_13;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_35;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_9));
    }
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (Arity_8));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[13])));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[53])));
      MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Pieces_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Msg_13));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
hlds__add_pred__unspecified_det_for_method_6_p_0(
  MR_Word Name_7,
  MR_Integer Arity_8,
  MR_Word PredOrFunc_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word Pieces_12;
    MR_Word Msg_13;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_38;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_9));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Arity_8));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[13])));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[52])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[51])));
      MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Pieces_12));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Msg_13));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
hlds__add_pred__unspecified_det_for_local_6_p_0(
  MR_Word Name_7,
  MR_Integer Arity_8,
  MR_Word PredOrFunc_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_Word MainPieces_12;
    MR_Word InnerComponents_14;
    MR_Word Msg_15;
    MR_Word Spec_17;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_60;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_75;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_9));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (Arity_8));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[13])));
    }
    {
      MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[48])));
      MR_hl_field(MR_mktag(1), MainPieces_12, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (MainPieces_12));
    }
    {
      InnerComponents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InnerComponents_14, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), InnerComponents_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[50])));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 193) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (InnerComponents_14));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_15, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Msg_15, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Msg_15));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_2[0])));
      MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_75));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
    }
  }
}

static MR_String MR_CALL 
hlds__add_pred__decl_section_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "implementation";
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "interface";
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__add_pred__item_decl_section_1_f_0(
  MR_Word ItemExport_3)
{
  {
    MR_Word DeclSection_4;

    switch (ItemExport_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        DeclSection_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        DeclSection_4 = (MR_Integer) 1;
        break;
    }
    return DeclSection_4;
  }
}

void MR_CALL 
hlds__add_pred__add_new_proc_14_p_0(
  MR_Word Context_15,
  MR_Integer ItemNumber_16,
  MR_Integer Arity_17,
  MR_Word InstVarSet_18,
  MR_Word ArgModes_19,
  MR_Word MaybeDeclaredArgModes_20,
  MR_Word MaybeArgLives_21,
  MR_Word DetismDecl_22,
  MR_Word MaybeDet_23,
  MR_Word IsAddressTaken_24,
  MR_Word HasParallelConj_25,
  MR_Word PredInfo0_26,
  MR_Word * PredInfo_27,
  MR_Integer * ModeId_28)
{
  {
    MR_Word Procs0_29;
    MR_Word ArgTypes_30;
    MR_Word VarNameRemap_31;
    MR_Word NewProc0_32;
    MR_Word NewProc_33;
    MR_Word Procs_34;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_26, &Procs0_29);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_26, &ArgTypes_30);
    hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_26, &VarNameRemap_31);
    hlds__hlds_pred__next_mode_id_2_p_0(Procs0_29, ModeId_28);
    hlds__hlds_pred__proc_info_init_13_p_0(Context_15, ItemNumber_16, Arity_17, ArgTypes_30, MaybeDeclaredArgModes_20, ArgModes_19, MaybeArgLives_21, DetismDecl_22, MaybeDet_23, IsAddressTaken_24, HasParallelConj_25, VarNameRemap_31, &NewProc0_32);
    hlds__hlds_pred__proc_info_set_inst_varset_3_p_0(InstVarSet_18, NewProc0_32, &NewProc_33);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (*ModeId_28)), ((MR_Box) (NewProc_33)), Procs0_29, &Procs_34);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_34, PredInfo0_26, PredInfo_27);
  }
}

void MR_CALL 
hlds__add_pred__preds_add_implicit_report_error_14_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word ModuleName_16,
  MR_Word PredName_17,
  MR_Integer PredArity_18,
  MR_Word PredOrFunc_19,
  MR_Word Status_20,
  MR_Word IsClassMethod_21,
  MR_Word Context_22,
  MR_Word Origin_23,
  MR_Word DescPieces_24,
  MR_Word * PredId_25,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_Word ClausesInfo_28;
    MR_Word STATE_VARIABLE_Specs_33_33;
    MR_Word Var_36;

    hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredName_17, PredArity_18, PredOrFunc_19, Status_20, IsClassMethod_21, Context_22, DescPieces_24, STATE_VARIABLE_Specs_0_31, &STATE_VARIABLE_Specs_33_33);
    switch (PredOrFunc_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer FuncArity_27;

          parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArity_27, PredArity_18);
          hlds__add_pred__maybe_check_field_access_function_7_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredName_17, FuncArity_27, Status_20, Context_22, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_32);
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_33_33;
        break;
    }
    Var_36 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
    hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_19, PredArity_18, Var_36, &ClausesInfo_28);
    hlds__add_pred__preds_do_add_implicit_11_p_0(ModuleName_16, PredName_17, PredArity_18, PredOrFunc_19, Status_20, Context_22, Origin_23, ClausesInfo_28, PredId_25, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
  }
}

static void MR_CALL 
hlds__add_pred__maybe_check_field_access_function_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word FuncName_9,
  MR_Integer FuncArity_10,
  MR_Word FuncStatus_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    MR_bool succeeded;
    MR_Word FieldName_15;
    MR_Integer Var_19;
    MR_Word AccessType_14;

    succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_8, FuncName_9, &Var_19, &AccessType_14, &FieldName_15);
    if (succeeded)
      succeeded = (FuncArity_10 == Var_19);
    if (succeeded)
    {
      MR_Integer PredArity_30;
      MR_Word FuncCallId_31;
      MR_Word CtorFieldTable_32;
      MR_Word TypeInfo_39_49;
      MR_Word FieldDefn_33;
      MR_Word DefnStatus_35;
      MR_Word Var_41;
      MR_Word Var_43;
      MR_Word Var_48;
      MR_Box conv0_Var_41;
      MR_Word Var_44;

      parse_tree__prog_util__adjust_func_arity_3_p_0((MR_Integer) 1, FuncArity_10, &PredArity_30);
      {
        FuncCallId_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FuncCallId_31, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), FuncCallId_31, 1) = ((MR_Box) (FuncName_9));
        MR_hl_field(MR_mktag(0), FuncCallId_31, 2) = ((MR_Box) (PredArity_30));
      }
      hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_8, &CtorFieldTable_32);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__add_pred_scalar_common_1[2]), CtorFieldTable_32, ((MR_Box) (FieldName_15)), &conv0_Var_41);
      if (succeeded)
      {
        Var_41 = ((MR_Word) (conv0_Var_41));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FieldDefn_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
          TypeInfo_39_49 = (MR_Word) (&hlds__add_pred_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_49, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_48)));
          if (succeeded)
          {
            Var_44 = (MR_Word) (FuncStatus_11);
            succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 12U));
            if (succeeded)
            {
              DefnStatus_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_33, (MR_Integer) 1))));
              Var_43 = (MR_Word) (DefnStatus_35);
              succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 12U));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Pieces_55;
        MR_Word Msg_56;
        MR_Word Spec_57;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_81;

        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (FuncCallId_31));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[45])));
        }
        {
          Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[47])));
          MR_hl_field(MR_mktag(1), Pieces_55, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Pieces_55));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_56, 0) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), Msg_56, 1) = ((MR_Box) (Var_76));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Msg_56));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_57, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_57, 2) = ((MR_Box) (Var_81));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_57));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
        }
      }
      else
        *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
    }
    else
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
  }
}

static void MR_CALL 
hlds__add_pred__preds_do_add_implicit_11_p_0(
  MR_Word ModuleName_12,
  MR_Word PredName_13,
  MR_Integer PredArity_14,
  MR_Word PredOrFunc_15,
  MR_Word PredStatus_16,
  MR_Word Context_17,
  MR_Word Origin_18,
  MR_Word ClausesInfo_19,
  MR_Word * PredId_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44)
{
  {
    MR_Word Markers0_23;
    MR_Word TVarSet0_24;
    MR_Word TypeVars_25;
    MR_Word TVarSet_26;
    MR_Word Types_27;
    MR_Word Proofs_30;
    MR_Word ConstraintMap_31;
    MR_Word VarNameRemap_32;
    MR_Word PredInfo0_33;
    MR_Word Markers1_34;
    MR_Word Markers_35;
    MR_Word PredInfo_36;
    MR_Word PredicateTable0_37;
    MR_Word PredIds_38;
    MR_Word Var_46;

    hlds__hlds_pred__init_markers_1_p_0(&Markers0_23);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_24);
    parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_String) "T", PredArity_14, &TypeVars_25, TVarSet0_24, &TVarSet_26);
    Var_46 = mercury__map__init_0_f_0((MR_Word) (&hlds__add_pred_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_46, TypeVars_25, &Types_27);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_30);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_31);
    mercury__map__init_1_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_32);
    hlds__hlds_pred__pred_info_init_19_p_0(ModuleName_12, PredName_13, PredArity_14, PredOrFunc_15, Context_17, Origin_18, PredStatus_16, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), Markers0_23, Types_27, TVarSet_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__add_pred_scalar_common_1[46]), Proofs_30, ConstraintMap_31, ClausesInfo_19, VarNameRemap_32, &PredInfo0_33);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, Markers0_23, &Markers1_34);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 4, Markers1_34, &Markers_35);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_35, PredInfo0_33, &PredInfo_36);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &PredicateTable0_37);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable0_37, (MR_Integer) 0, PredOrFunc_15, PredName_13, PredArity_14, &PredIds_38);
    if ((PredIds_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MQInfo_39;
      MR_Word PredicateTable_40;

      hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &MQInfo_39);
      hlds__pred_table__predicate_table_insert_qual_6_p_0(PredInfo_36, (MR_Integer) 1, MQInfo_39, PredId_20, PredicateTable0_37, &PredicateTable_40);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_40, STATE_VARIABLE_ModuleInfo_0_43, STATE_VARIABLE_ModuleInfo_44);
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_pred.preds_do_add_implicit\'/11", (MR_String) "search succeeded");
        return;
      }
    }
  }
}

void mercury__hlds__add_pred__init(void)
{
}

void mercury__hlds__add_pred__init_type_tables(void)
{
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
