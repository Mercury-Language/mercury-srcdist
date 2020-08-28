/*
** Automatically generated from `add_pred.m'
** by the Mercury compiler,
** version rotd-2020-08-26
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
#include "enum.mih"
#include "getopt_io.mih"
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
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.equiv_type.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__127__1_2_p_0(
  MR_Word WithInst_19,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__126__1_2_p_0(
  MR_Word WithType_18,
  MR_Word HeadVar__2_73);

static MR_bool MR_CALL 
hlds__add_pred__module_add_pred_decl_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__add_pred__module_add_pred_decl_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__add_pred__add_new_pred_19_p_0(
  MR_Word PredOrigin_20,
  MR_Word Context_21,
  MR_Integer SeqNum_22,
  MR_Word PredStatus0_23,
  MR_Word NeedQual_24,
  MR_Word PredOrFunc_25,
  MR_Word PredSymName_26,
  MR_Word TVarSet_27,
  MR_Word ExistQVars_28,
  MR_Word Types_29,
  MR_Word Constraints_30,
  MR_Word MaybeModes_31,
  MR_Word Purity_32,
  MR_Word Markers0_33,
  MR_Word * Succeeded_34,
  MR_Word STATE_VARIABLE_ModuleInfo_0_73,
  MR_Word * STATE_VARIABLE_ModuleInfo_74,
  MR_Word STATE_VARIABLE_Specs_0_75,
  MR_Word * STATE_VARIABLE_Specs_76);

static void MR_CALL 
hlds__add_pred__unqualified_pred_error_5_p_0(
  MR_Word PredSymName_6,
  MR_Integer Arity_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

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
  MR_Integer SeqNum_15,
  MR_Word MaybeItemMercuryStatus_16,
  MR_Integer Arity_17,
  MR_Word InstVarSet_18,
  MR_Word Modes_19,
  MR_Word MaybeDetism_20,
  MR_Word IsClassMethod_21,
  MR_Word STATE_VARIABLE_PredInfo_0_52,
  MR_Word * STATE_VARIABLE_PredInfo_53,
  MR_Integer * ProcId_23,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55);

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
  MR_Word PredSymName_13,
  MR_Integer PredArity_14,
  MR_Word PredOrFunc_15,
  MR_Word PredStatus_16,
  MR_Word Context_17,
  MR_Word PredOrigin_18,
  MR_Word ClausesInfo_19,
  MR_Word * PredId_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44);


static /* final */ const MR_Box hlds__add_pred_scalar_common_1[71][2];

static /* final */ const MR_Box hlds__add_pred_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__add_pred_scalar_common_3[2][1];

static /* final */ const MR_Box hlds__add_pred_scalar_common_4[2][5];




static /* final */ const MR_Box hlds__add_pred_scalar_common_1[71][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the modes of its arguments."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declares a determinism without declaring"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[5])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so it may not have a separate mode declaration."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[5])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "combined with a mode declaration,"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of local predicates.)"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[5])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to automatically infer the determinism"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option if you want the compiler"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--infer-det"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Use the"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--no-infer-det"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "you specified the"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(This is an error because"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have been qualified by the parser."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[5])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must also be exported."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[5])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: a field access function for an exported field"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In declaration of"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type class method"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for exported"))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no determinism declaration for local"))
  },
  /* row 54 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[38])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_pred_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: mode declaration in the"))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "section"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose"))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is in the"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has its"))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Internal error: the unqualified predicate name"))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: predicate"))
  },
};

static /* final */ const MR_Box hlds__add_pred_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[65]))),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__add_pred_scalar_common_3[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "prolog"))
  },
};

static /* final */ const MR_Box hlds__add_pred_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_pred__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__127__1_2_p_0(
  MR_Word WithInst_19,
  MR_Word HeadVar__2_77)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[1]), ((MR_Box) (WithInst_19)), ((MR_Box) (HeadVar__2_77)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__126__1_2_p_0(
  MR_Word WithType_18,
  MR_Word HeadVar__2_73)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[0]), ((MR_Box) (WithType_18)), ((MR_Box) (HeadVar__2_73)));
    return succeeded;
  }
}

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
  MR_Word PredSymName_13,
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
    MR_Word PredOrigin_23;
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
      PredOrigin_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), PredOrigin_23, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), PredOrigin_23, 1) = ((MR_Box) (FileName_21));
      MR_hl_field(MR_mktag(3), PredOrigin_23, 2) = ((MR_Box) (LineNum_22));
    }
    hlds__hlds_pred__init_markers_1_p_0(&Markers0_40);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_41);
    parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_String) "T", PredArity_14, &TypeVars_42, TVarSet0_41, &TVarSet_43);
    Var_61 = mercury__map__init_0_f_0((MR_Word) (&hlds__add_pred_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_61, TypeVars_42, &Types_44);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_47);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_48);
    mercury__map__init_1_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_49);
    hlds__hlds_pred__pred_info_init_19_p_0(ModuleName_12, PredSymName_13, PredArity_14, PredOrFunc_15, Context_18, PredOrigin_23, Status_17, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), Markers0_40, Types_44, TVarSet_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__add_pred_scalar_common_1[48]), Proofs_47, ConstraintMap_48, ClausesInfo_20, VarNameRemap_49, &PredInfo0_50);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, Markers0_40, &Markers1_51);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 4, Markers1_51, &Markers_52);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_52, PredInfo0_50, &PredInfo_53);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &PredicateTable0_54);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable0_54, (MR_Integer) 0, PredOrFunc_15, PredSymName_13, PredArity_14, &PredIds_55);
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_pred.preds_do_add_implicit\'/11", (MR_String) "search succeeded");
        return;
      }
  }
}

static MR_bool MR_CALL 
hlds__add_pred__module_add_pred_decl_8_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__127__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__add_pred__module_add_pred_decl_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__add_pred__IntroducedFrom__pred__module_add_pred_decl__126__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
hlds__add_pred__module_add_pred_decl_8_p_0(
  MR_Word PredStatus_9,
  MR_Word NeedQual_10,
  MR_Word ItemPredDecl_11,
  MR_Word * MaybePredProcId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_Specs_0_68,
  MR_Word * STATE_VARIABLE_Specs_69)
{
  {
    MR_bool succeeded;
    MR_Word PredSymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 0))));
    MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 2))));
    MR_Word WithType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 3))));
    MR_Word WithInst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 4))));
    MR_Word MaybeDetism_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 5))));
    MR_Word Origin_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 6))));
    MR_Word TypeVarSet_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 7))));
    MR_Word InstVarSet_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 8))));
    MR_Word ExistQVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 9))));
    MR_Word Purity_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 10))) & (MR_Integer) 3);
    MR_Word Constraints_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 11))));
    MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 12))));
    MR_Integer SeqNum_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 13))));
    MR_Word Markers0_29;
    MR_Word PredOrigin_32;
    MR_Word Markers_33;
    MR_Word Types_44;
    MR_Word MaybeModes0_45;
    MR_Integer Arity_46;
    MR_Word Var_70;
    MR_Word Var_74;
    MR_Word Modes0_47;

    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&hlds__add_pred_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (hlds__add_pred__module_add_pred_decl_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (WithType_18));
      MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140hlds.add_pred.module_add_pred_decl\'/8", (MR_String) "WithType != no");
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&hlds__add_pred_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (hlds__add_pred__module_add_pred_decl_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (WithInst_19));
      MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140hlds.add_pred.module_add_pred_decl\'/8", (MR_String) "WithInst != no");
    hlds__hlds_pred__init_markers_1_p_0(&Markers0_29);
    if ((Origin_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        PredOrigin_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), PredOrigin_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), PredOrigin_32, 1) = ((MR_Box) (PredSymName_15));
      }
      Markers_33 = Markers0_29;
    }
    else
    {
      MR_Word CompilerAttrs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_21, (MR_Integer) 0))));
      MR_Word CompilerOrigin_31 = (MR_Word) (CompilerAttrs_30);

      switch (MR_tag((MR_Word) CompilerOrigin_31)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(CompilerOrigin_31)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                PredOrigin_32 = (MR_Word) ((MR_Unsigned) 0U);
                Markers_33 = Markers0_29;
              }
              break;
            case (MR_Integer) 1:
              {
                PredOrigin_32 = (MR_Word) ((MR_Unsigned) 4U);
                Markers_33 = Markers0_29;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ClassId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompilerOrigin_31, (MR_Integer) 0))));
            MR_Word MethodId_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompilerOrigin_31, (MR_Integer) 1))));

            {
              PredOrigin_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), PredOrigin_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), PredOrigin_32, 1) = ((MR_Box) (ClassId_34));
              MR_hl_field(MR_mktag(3), PredOrigin_32, 2) = ((MR_Box) (MethodId_35));
            }
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 10, Markers0_29, &Markers_33);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeCtorName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CompilerOrigin_31, (MR_Integer) 0))));
            MR_Integer TypeCtorArity_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), CompilerOrigin_31, (MR_Integer) 1))));
            MR_Word SolverPredKind_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), CompilerOrigin_31, (MR_Integer) 2))) & (MR_Integer) 3);

            {
              PredOrigin_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), PredOrigin_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), PredOrigin_32, 1) = ((MR_Box) (TypeCtorName_36));
              MR_hl_field(MR_mktag(3), PredOrigin_32, 2) = ((MR_Box) (TypeCtorArity_37));
              MR_hl_field(MR_mktag(3), PredOrigin_32, 3) = (MR_Box) ((MR_Unsigned) (SolverPredKind_38));
            }
            Markers_33 = Markers0_29;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CompilerOrigin_31, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CompilerOrigin_31, (MR_Integer) 1))));
                MR_String MutableName_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), CompilerOrigin_31, (MR_Integer) 2))));
                MR_Word MutablePredKind_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompilerOrigin_31, (MR_Integer) 3))) & (MR_Integer) 15);

                {
                  PredOrigin_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PredOrigin_32, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), PredOrigin_32, 1) = ((MR_Box) (ModuleName_39));
                  MR_hl_field(MR_mktag(3), PredOrigin_32, 2) = ((MR_Box) (MutableName_40));
                  MR_hl_field(MR_mktag(3), PredOrigin_32, 3) = (MR_Box) ((MR_Unsigned) (MutablePredKind_41));
                }
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 23, Markers0_29, &Markers_33);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PFSymNameArity_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CompilerOrigin_31, (MR_Integer) 1))));
                MR_Word TablingPredKind_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompilerOrigin_31, (MR_Integer) 2))) & (MR_Integer) 1);

                {
                  PredOrigin_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PredOrigin_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), PredOrigin_32, 1) = ((MR_Box) (PFSymNameArity_42));
                  MR_hl_field(MR_mktag(3), PredOrigin_32, 2) = (MR_Box) ((MR_Unsigned) (TablingPredKind_43));
                }
                Markers_33 = Markers0_29;
              }
              break;
          }
          break;
      }
    }
    parse_tree__prog_util__split_types_and_modes_3_p_0(TypesAndModes_17, &Types_44, &MaybeModes0_45);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_44, &Arity_46);
    succeeded = (PredOrFunc_16 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MaybeDetism_20 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeModes0_45 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Modes0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes0_45, (MR_Integer) 0))));
          succeeded = (Modes0_47 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word Succeeded_55;

      hlds__add_pred__add_new_pred_19_p_0(PredOrigin_32, Context_27, SeqNum_28, PredStatus_9, NeedQual_10, PredOrFunc_16, PredSymName_15, TypeVarSet_22, ExistQVars_24, Types_44, Constraints_26, (MR_Word) ((MR_Unsigned) 0U), Purity_25, Markers_33, &Succeeded_55, STATE_VARIABLE_ModuleInfo_0_66, STATE_VARIABLE_ModuleInfo_67, STATE_VARIABLE_Specs_0_68, STATE_VARIABLE_Specs_69);
      *MaybePredProcId_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word MaybeModes_231;
      MR_Word Succeeded_232;
      MR_Word STATE_VARIABLE_ModuleInfo_83_239;
      MR_Word STATE_VARIABLE_Specs_84_240;

      succeeded = (PredOrFunc_16 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (MaybeModes0_45 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (MaybeDetism_20 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Integer FuncArity_50;
        MR_Word InMode_51;
        MR_Word InModes_52;
        MR_Word OutMode_53;
        MR_Word ArgModes_54;
        MR_Word Var_81;

        parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArity_50, Arity_46);
        parse_tree__prog_mode__in_mode_1_p_0(&InMode_51);
        mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FuncArity_50, ((MR_Box) (InMode_51)), &InModes_52);
        parse_tree__prog_mode__out_mode_1_p_0(&OutMode_53);
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (OutMode_53));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InModes_52, Var_81, &ArgModes_54);
        {
          MaybeModes_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeModes_231, 0) = ((MR_Box) (ArgModes_54));
        }
      }
      else
        MaybeModes_231 = MaybeModes0_45;
      hlds__add_pred__add_new_pred_19_p_0(PredOrigin_32, Context_27, SeqNum_28, PredStatus_9, NeedQual_10, PredOrFunc_16, PredSymName_15, TypeVarSet_22, ExistQVars_24, Types_44, Constraints_26, MaybeModes_231, Purity_25, Markers_33, &Succeeded_232, STATE_VARIABLE_ModuleInfo_0_66, &STATE_VARIABLE_ModuleInfo_83_239, STATE_VARIABLE_Specs_0_68, &STATE_VARIABLE_Specs_84_240);
      if ((MaybeModes_231 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_125;

        *MaybePredProcId_12 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = (MaybeDetism_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (PredOrFunc_16 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Types_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_125 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_9);
              succeeded = (Var_125 == (MR_Integer) 1);
            }
          }
        }
        if (succeeded)
        {
          MR_Word PredModuleName_134;
          MR_String Var_135;

          succeeded = ((MR_tag((MR_Word) PredSymName_15)) == (MR_Integer) 1);
          if (succeeded)
          {
            PredModuleName_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSymName_15, (MR_Integer) 0))));
            Var_135 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredSymName_15, (MR_Integer) 1))));
            succeeded = (strcmp(Var_135, (MR_String) "is") == 0);
            if (succeeded)
            {
              {
                MR_Word Var_126;

                Var_126 = mdbcomp__builtin_modules__mercury_int_module_0_f_0();
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PredModuleName_134, Var_126);
              }
              if (!(succeeded))
              {
                MR_Word Var_129;

                Var_129 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) (&hlds__add_pred_scalar_common_3[1]));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PredModuleName_134, Var_129);
              }
            }
          }
          if (succeeded)
            *STATE_VARIABLE_Specs_69 = STATE_VARIABLE_Specs_84_240;
          else
          {
            MR_Word DetPieces_140;
            MR_Word DetSpec_141;
            MR_Word Var_144;
            MR_Word Var_145;
            MR_Word Var_146;

            {
              Var_146 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (PredSymName_15));
              MR_hl_field(MR_mktag(0), Var_146, 1) = ((MR_Box) (Arity_46));
            }
            {
              Var_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_145, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_145, 1) = ((MR_Box) (Var_146));
            }
            {
              Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Var_145));
              MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[9])));
            }
            {
              DetPieces_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DetPieces_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[70])));
              MR_hl_field(MR_mktag(1), DetPieces_140, 1) = ((MR_Box) (Var_144));
            }
            {
              DetSpec_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DetSpec_141, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.module_add_pred_decl\'/8"));
              MR_hl_field(MR_mktag(1), DetSpec_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), DetSpec_141, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), DetSpec_141, 3) = ((MR_Box) (Context_27));
              MR_hl_field(MR_mktag(1), DetSpec_141, 4) = ((MR_Box) (DetPieces_140));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_69 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DetSpec_141));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_84_240));
            }
          }
        }
        else
          *STATE_VARIABLE_Specs_69 = STATE_VARIABLE_Specs_84_240;
        *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_83_239;
      }
      else
      {
        MR_Word Modes_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_231, (MR_Integer) 0))));

        switch (Succeeded_232) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *MaybePredProcId_12 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_83_239;
              *STATE_VARIABLE_Specs_69 = STATE_VARIABLE_Specs_84_240;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IsClassMethod_57;
              MR_Word PredProcId_59;

              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_33, (MR_Integer) 10);
              if (succeeded)
                IsClassMethod_57 = (MR_Integer) 1;
              else
                IsClassMethod_57 = (MR_Integer) 0;
              hlds__add_pred__module_add_mode_15_p_0(Context_27, SeqNum_28, (MR_Word) ((MR_Unsigned) 0U), PredStatus_9, PredOrFunc_16, PredSymName_15, InstVarSet_23, Modes_56, MaybeDetism_20, IsClassMethod_57, &PredProcId_59, STATE_VARIABLE_ModuleInfo_83_239, STATE_VARIABLE_ModuleInfo_67, STATE_VARIABLE_Specs_84_240, STATE_VARIABLE_Specs_69);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybePredProcId_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcId_59));
              }
            }
            break;
        }
      }
    }
  }
}

static void MR_CALL 
hlds__add_pred__add_new_pred_19_p_0(
  MR_Word PredOrigin_20,
  MR_Word Context_21,
  MR_Integer SeqNum_22,
  MR_Word PredStatus0_23,
  MR_Word NeedQual_24,
  MR_Word PredOrFunc_25,
  MR_Word PredSymName_26,
  MR_Word TVarSet_27,
  MR_Word ExistQVars_28,
  MR_Word Types_29,
  MR_Word Constraints_30,
  MR_Word MaybeModes_31,
  MR_Word Purity_32,
  MR_Word Markers0_33,
  MR_Word * Succeeded_34,
  MR_Word STATE_VARIABLE_ModuleInfo_0_73,
  MR_Word * STATE_VARIABLE_ModuleInfo_74,
  MR_Word STATE_VARIABLE_Specs_0_75,
  MR_Word * STATE_VARIABLE_Specs_76)
{
  {
    MR_bool succeeded;
    MR_Word PredStatus_37;
    MR_Word ModuleName_38;
    MR_Integer PredArity_39;
    MR_Word Var_77 = (MR_Word) (PredStatus0_23);

    succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      PredStatus_37 = (MR_Word) (((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_pred_scalar_common_3[0]))));
    else
      PredStatus_37 = PredStatus0_23;
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_73, &ModuleName_38);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_29, &PredArity_39);
    if (((MR_tag((MR_Word) PredSymName_26)) == (MR_Integer) 1))
    {
      MR_Word MNameOfPred_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSymName_26, (MR_Integer) 0))));
      MR_String PName_42 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredSymName_26, (MR_Integer) 1))));
      MR_Word CurUserDecl_48;
      MR_Word PredTable0_49;
      MR_Word ClausesInfo_50;
      MR_Word Proofs_51;
      MR_Word ConstraintMap_52;
      MR_Word PurityMarkers_53;
      MR_Word Markers_54;
      MR_Word VarNameRemap_55;
      MR_Word PredInfo0_56;
      MR_Word PredIds_57;
      MR_Word Var_81;
      MR_Word ItemExport_44;
      MR_Word OldItemStatus_43 = (MR_Word) (PredStatus_37);

      switch (MR_tag((MR_Word) OldItemStatus_43)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(OldItemStatus_43)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 3:
              {
                ItemExport_44 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 7:
              {
                ItemExport_44 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 8:
              {
                ItemExport_44 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        MR_Word DeclSection_45;
        MR_Word PredmodeDecl_46;
        MR_Word Var_80;

        DeclSection_45 = hlds__add_pred__item_decl_section_1_f_0(ItemExport_44);
        if ((MaybeModes_31 == (MR_Word) ((MR_Unsigned) 0U)))
          PredmodeDecl_46 = (MR_Integer) 0;
        else
          PredmodeDecl_46 = (MR_Integer) 1;
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_80, 0) = (MR_Box) (((((MR_Unsigned) (DeclSection_45) << 1)) | (MR_Unsigned) (PredmodeDecl_46)));
          MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (SeqNum_22));
        }
        {
          CurUserDecl_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CurUserDecl_48, 0) = ((MR_Box) (Var_80));
        }
      }
      else
        CurUserDecl_48 = (MR_Word) ((MR_Unsigned) 0U);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_73, &PredTable0_49);
      Var_81 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
      hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_25, PredArity_39, Var_81, &ClausesInfo_50);
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_51);
      mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_52);
      hlds__hlds_pred__purity_to_markers_2_p_0(Purity_32, &PurityMarkers_53);
      hlds__hlds_pred__add_markers_3_p_0(PurityMarkers_53, Markers0_33, &Markers_54);
      mercury__map__init_1_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_55);
      hlds__hlds_pred__pred_info_init_19_p_0(ModuleName_38, PredSymName_26, PredArity_39, PredOrFunc_25, Context_21, PredOrigin_20, PredStatus_37, CurUserDecl_48, (MR_Word) ((MR_Unsigned) 12U), Markers_54, Types_29, TVarSet_27, ExistQVars_28, Constraints_30, Proofs_51, ConstraintMap_52, ClausesInfo_50, VarNameRemap_55, &PredInfo0_56);
      hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredTable0_49, (MR_Integer) 0, PredOrFunc_25, MNameOfPred_41, PName_42, PredArity_39, &PredIds_57);
      if ((PredIds_57 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PQInfo_64;
        MR_Word PredId_65;
        MR_Word PredTable1_66;
        MR_Word PredTable_72;

        *Succeeded_34 = (MR_Integer) 1;
        hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_73, &PQInfo_64);
        hlds__pred_table__predicate_table_insert_qual_6_p_0(PredInfo0_56, NeedQual_24, PQInfo_64, &PredId_65, PredTable0_49, &PredTable1_66);
        succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo0_56);
        if (succeeded)
        {
          MR_Word Globals_67;
          MR_Word CompilationTarget_68;
          MR_Word PredInfo_69;
          MR_Word Preds1_70;
          MR_Word Preds_71;

          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_73, &Globals_67);
          libs__globals__get_target_2_p_0(Globals_67, &CompilationTarget_68);
          hlds__add_pred__add_builtin_5_p_0(PredId_65, Types_29, CompilationTarget_68, PredInfo0_56, &PredInfo_69);
          hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable1_66, &Preds1_70);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_65)), ((MR_Box) (PredInfo_69)), Preds1_70, &Preds_71);
          hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_71, PredTable1_66, &PredTable_72);
        }
        else
          PredTable_72 = PredTable1_66;
        hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_72, STATE_VARIABLE_ModuleInfo_0_73, STATE_VARIABLE_ModuleInfo_74);
        *STATE_VARIABLE_Specs_76 = STATE_VARIABLE_Specs_0_75;
      }
      else
      {
        MR_Word OrigPred_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_57, (MR_Integer) 0))));
        MR_Word OrigPredInfo_60;
        MR_Word OrigContext_61;
        MR_String DeclString_62;
        MR_Integer PorFArity_63;
        MR_Word Var_85;

        *Succeeded_34 = (MR_Integer) 0;
        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_73, OrigPred_58, &OrigPredInfo_60);
        hlds__hlds_pred__pred_info_get_context_2_p_0(OrigPredInfo_60, &OrigContext_61);
        DeclString_62 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_25);
        parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_25, &PorFArity_63, PredArity_39);
        Var_85 = (MR_Word) (PredStatus0_23);
        succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          *STATE_VARIABLE_Specs_76 = STATE_VARIABLE_Specs_0_75;
        else
          hlds__make_hlds_error__report_multiple_def_error_8_p_0(PredSymName_26, PorFArity_63, DeclString_62, Context_21, OrigContext_61, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_75, STATE_VARIABLE_Specs_76);
        *STATE_VARIABLE_ModuleInfo_74 = STATE_VARIABLE_ModuleInfo_0_73;
      }
    }
    else
    {
      *Succeeded_34 = (MR_Integer) 0;
      hlds__hlds_module__module_info_incr_errors_2_p_0(STATE_VARIABLE_ModuleInfo_0_73, STATE_VARIABLE_ModuleInfo_74);
      hlds__add_pred__unqualified_pred_error_5_p_0(PredSymName_26, PredArity_39, Context_21, STATE_VARIABLE_Specs_0_75, STATE_VARIABLE_Specs_76);
    }
  }
}

static void MR_CALL 
hlds__add_pred__unqualified_pred_error_5_p_0(
  MR_Word PredSymName_6,
  MR_Integer Arity_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  {
    MR_Word Pieces_10;
    MR_Word Spec_11;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (PredSymName_6));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Arity_7));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[40])));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[69])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_16));
    }
    {
      Spec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.unqualified_pred_error\'/5"));
      MR_hl_field(MR_mktag(1), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_11, 3) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(1), Spec_11, 4) = ((MR_Box) (Pieces_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
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
    MR_Word Var_105;
    MR_Word STATE_VARIABLE_PredInfo_108_108;
    MR_Word Var_123;

    Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_58);
    Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_58);
    hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_0_58, &Context_12);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_58, &ClausesInfo0_13);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo0_13, &VarSet0_14);
    hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(ClausesInfo0_13, &ProcArgVector_15);
    HeadVars0_16 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__add_pred_scalar_common_1[2]), ProcArgVector_15);
    hlds__hlds_goal__goal_info_init_2_p_0(Context_12, &GoalInfo0_17);
    NonLocals_18 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars0_16);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_18, GoalInfo0_17, &GoalInfo1_19);
    Var_123 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_123);
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
      GoalExpr_21 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_2[0]));
      GoalInfo_22 = GoalInfo1_19;
      HeadVars_23 = HeadVars0_16;
      HeadTypes_24 = HeadTypes0_7;
      VarSet_25 = VarSet0_14;
      Stub_26 = (MR_Integer) 1;
    }
    else
    {
      {
        MR_Word Var_124;

        Var_124 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_124);
        if (succeeded)
          succeeded = (strcmp(Name_11, (MR_String) "trace_get_io_state") == 0);
      }
      if (!(succeeded))
      {
        MR_Word Var_125;

        Var_125 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_125);
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
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_71;
        MR_Word Var_78;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_88;
        MR_Word Var_90;
        MR_Word Var_91;

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
        Var_67 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_68 = parse_tree__prog_mode__ground_inst_0_f_0();
        Var_69 = parse_tree__prog_mode__ground_inst_0_f_0();
        {
          UnifyMode_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UnifyMode_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), UnifyMode_31, 1) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), UnifyMode_31, 2) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), UnifyMode_31, 3) = ((MR_Box) (Var_69));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (UnifyMode_31));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Unification_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Unification_32, 0) = ((MR_Box) (LHS_29));
          MR_hl_field(MR_mktag(0), Unification_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[65])));
          MR_hl_field(MR_mktag(0), Unification_32, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Unification_32, 3) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), Unification_32, 4) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), Unification_32, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Unification_32, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          AssignExpr_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AssignExpr_34, 0) = ((MR_Box) (LHS_29));
          MR_hl_field(MR_mktag(1), AssignExpr_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_2[1])));
          MR_hl_field(MR_mktag(1), AssignExpr_34, 2) = ((MR_Box) (UnifyMode_31));
          MR_hl_field(MR_mktag(1), AssignExpr_34, 3) = ((MR_Box) (Unification_32));
          MR_hl_field(MR_mktag(1), AssignExpr_34, 4) = ((MR_Box) (&hlds__add_pred_scalar_common_1[66]));
        }
        Var_78 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHS_29);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_78, GoalInfo0_17, &GoalInfoWithZero_35);
        {
          AssignGoal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AssignGoal_36, 0) = ((MR_Box) (AssignExpr_34));
          MR_hl_field(MR_mktag(0), AssignGoal_36, 1) = ((MR_Box) (GoalInfoWithZero_35));
        }
        Var_82 = parse_tree__prog_mode__in_mode_0_f_0();
        Var_84 = parse_tree__prog_mode__uo_mode_0_f_0();
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_83));
        }
        {
          CastExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), CastExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), CastExpr_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_3[0])));
          MR_hl_field(MR_mktag(3), CastExpr_37, 2) = ((MR_Box) (HeadVars_23));
          MR_hl_field(MR_mktag(3), CastExpr_37, 3) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(3), CastExpr_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), CastExpr_37, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        Var_88 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_23);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_88, GoalInfo0_17, &GoalInfoWithZeroHeadVars_38);
        {
          CastGoal_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CastGoal_39, 0) = ((MR_Box) (CastExpr_37));
          MR_hl_field(MR_mktag(0), CastGoal_39, 1) = ((MR_Box) (GoalInfoWithZeroHeadVars_38));
        }
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (CastGoal_39));
          MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (AssignGoal_36));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_91));
        }
        {
          ConjExpr_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConjExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConjExpr_40, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ConjExpr_40, 2) = ((MR_Box) (Var_90));
        }
        {
          ConjGoal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ConjGoal_41, 0) = ((MR_Box) (ConjExpr_40));
          MR_hl_field(MR_mktag(0), ConjGoal_41, 1) = ((MR_Box) (GoalInfoWithZeroHeadVars_38));
        }
        {
          GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[67])));
          MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (ConjGoal_41));
        }
        GoalInfo_22 = GoalInfo1_19;
        Stub_26 = (MR_Integer) 0;
      }
      else
      {
        {
          MR_Word Var_126;

          Var_126 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_126);
          if (succeeded)
            succeeded = (strcmp(Name_11, (MR_String) "trace_set_io_state") == 0);
        }
        if (!(succeeded))
        {
          MR_Word Var_127;

          Var_127 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_10, Var_127);
          if (succeeded)
            succeeded = (strcmp(Name_11, (MR_String) "unsafe_set_io_state") == 0);
        }
        if (succeeded)
        {
          MR_Word ConjGoal_114;

          GoalInfo_22 = GoalInfo1_19;
          {
            ConjGoal_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConjGoal_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_2[0])));
            MR_hl_field(MR_mktag(0), ConjGoal_114, 1) = ((MR_Box) (GoalInfo_22));
          }
          {
            GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[68])));
            MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (ConjGoal_114));
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
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__add_pred_scalar_common_1[3]), &TVarNameMap_51);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_52);
    Var_105 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    switch (Stub_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_47;
          MR_Word Clause_48;
          MR_Word ClausesRep_49;
          MR_Word ClausesInfo_53;
          MR_Word Markers0_54;
          MR_Word Var_102;

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
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Clause_48));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__hlds_clauses__set_clause_list_2_p_0(Var_102, &ClausesRep_49);
          {
            ClausesInfo_53 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 0) = ((MR_Box) (VarSet_25));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 1) = ((MR_Box) (TVarNameMap_51));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 2) = ((MR_Box) (VarTypes_50));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 3) = ((MR_Box) (VarTypes_50));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 4) = ((MR_Box) (ProcArgVector_15));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 5) = ((MR_Box) (ClausesRep_49));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 6) = ((MR_Box) (Var_105));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 7) = ((MR_Box) (RttiVarMaps_52));
            MR_hl_field(MR_mktag(0), ClausesInfo_53, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          }
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_53, STATE_VARIABLE_PredInfo_0_58, &STATE_VARIABLE_PredInfo_108_108);
          hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_108_108, &Markers0_54);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 7, Markers0_54, &Markers_57);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Markers2_56;
          MR_Word ClausesRep_133;
          MR_Word ClausesInfo_134;
          MR_Word Markers0_135;
          MR_Word Markers1_136;

          hlds__hlds_clauses__set_clause_list_2_p_0((MR_Word) ((MR_Unsigned) 0U), &ClausesRep_133);
          {
            ClausesInfo_134 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClausesInfo_134, 0) = ((MR_Box) (VarSet_25));
            MR_hl_field(MR_mktag(0), ClausesInfo_134, 1) = ((MR_Box) (TVarNameMap_51));
            MR_hl_field(MR_mktag(0), ClausesInfo_134, 2) = ((MR_Box) (VarTypes_50));
            MR_hl_field(MR_mktag(0), ClausesInfo_134, 3) = ((MR_Box) (VarTypes_50));
            MR_hl_field(MR_mktag(0), ClausesInfo_134, 4) = ((MR_Box) (ProcArgVector_15));
            MR_hl_field(MR_mktag(0), ClausesInfo_134, 5) = ((MR_Box) (ClausesRep_133));
            MR_hl_field(MR_mktag(0), ClausesInfo_134, 6) = ((MR_Box) (Var_105));
            MR_hl_field(MR_mktag(0), ClausesInfo_134, 7) = ((MR_Box) (RttiVarMaps_52));
            MR_hl_field(MR_mktag(0), ClausesInfo_134, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          }
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_134, STATE_VARIABLE_PredInfo_0_58, &STATE_VARIABLE_PredInfo_108_108);
          hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_108_108, &Markers0_135);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 7, Markers0_135, &Markers1_136);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, Markers1_136, &Markers2_56);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 1, Markers2_56, &Markers_57);
        }
        break;
    }
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_57, STATE_VARIABLE_PredInfo_108_108, STATE_VARIABLE_PredInfo_59);
  }
}

void MR_CALL 
hlds__add_pred__module_add_mode_15_p_0(
  MR_Word Context_16,
  MR_Integer SeqNum_17,
  MR_Word MaybeItemMercuryStatus_18,
  MR_Word PredStatus_19,
  MR_Word PredOrFunc_20,
  MR_Word PredSymName_21,
  MR_Word InstVarSet_22,
  MR_Word Modes_23,
  MR_Word MaybeDetism_24,
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
    mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(PredSymName_21, ModuleName0_29, &ModuleName_30);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_23, &Arity_31);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &PredicateTable0_32);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable0_32, (MR_Integer) 0, PredOrFunc_20, PredSymName_21, Arity_31, &PredIds_33);
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
        MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (PredSymName_21));
      }
      hlds__add_pred__preds_add_implicit_report_error_14_p_0(STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_49_49, ModuleName_30, PredSymName_21, Arity_31, PredOrFunc_20, PredStatus_19, IsClassMethod_25, Context_16, Var_50, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[13])), &PredId_35, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_52_52);
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_49_49, &PredicateTable1_36);
    hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable1_36, &Preds0_37);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds0_37, ((MR_Box) (PredId_35)), &conv0_PredInfo0_38);
    PredInfo0_38 = ((MR_Word) (conv0_PredInfo0_38));
    hlds__add_pred__module_do_add_mode_13_p_0(Context_16, SeqNum_17, MaybeItemMercuryStatus_18, Arity_31, InstVarSet_22, Modes_23, MaybeDetism_24, IsClassMethod_25, PredInfo0_38, &PredInfo_39, &ProcId_40, STATE_VARIABLE_Specs_52_52, STATE_VARIABLE_Specs_46);
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
  MR_Integer SeqNum_15,
  MR_Word MaybeItemMercuryStatus_16,
  MR_Integer Arity_17,
  MR_Word InstVarSet_18,
  MR_Word Modes_19,
  MR_Word MaybeDetism_20,
  MR_Word IsClassMethod_21,
  MR_Word STATE_VARIABLE_PredInfo_0_52,
  MR_Word * STATE_VARIABLE_PredInfo_53,
  MR_Integer * ProcId_23,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55)
{
  {
    MR_bool succeeded;
    MR_String PredName_25;
    MR_Word PredOrFunc_26;
    MR_Word DetismDecl_27;
    MR_Word MaybeCurUserDecl_34;
    MR_Word STATE_VARIABLE_Specs_58_58;
    MR_Word Var_128;

    PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(STATE_VARIABLE_PredInfo_0_52);
    PredOrFunc_26 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(STATE_VARIABLE_PredInfo_0_52);
    if ((MaybeDetism_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredStatus_28;
      MR_Word PredModule_29;
      MR_Word PredSymName_30;
      MR_Word PFSymNameArity_31;

      DetismDecl_27 = (MR_Integer) 2;
      hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_0_52, &PredStatus_28);
      PredModule_29 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_0_52);
      {
        PredSymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_30, 0) = ((MR_Box) (PredModule_29));
        MR_hl_field(MR_mktag(1), PredSymName_30, 1) = ((MR_Box) (PredName_25));
      }
      {
        PFSymNameArity_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PFSymNameArity_31, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
        MR_hl_field(MR_mktag(0), PFSymNameArity_31, 1) = ((MR_Box) (PredSymName_30));
        MR_hl_field(MR_mktag(0), PFSymNameArity_31, 2) = ((MR_Box) (Arity_17));
      }
      switch (IsClassMethod_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__add_pred__unspecified_det_for_method_4_p_0(PFSymNameArity_31, Context_14, STATE_VARIABLE_Specs_0_54, &STATE_VARIABLE_Specs_58_58);
          break;
        case (MR_Integer) 0:
          {
            MR_Word IsExported_32;

            IsExported_32 = hlds__status__pred_status_is_exported_1_f_0(PredStatus_28);
            switch (IsExported_32) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__add_pred__unspecified_det_for_local_4_p_0(PFSymNameArity_31, Context_14, STATE_VARIABLE_Specs_0_54, &STATE_VARIABLE_Specs_58_58);
                break;
              case (MR_Integer) 1:
                hlds__add_pred__unspecified_det_for_exported_4_p_0(PFSymNameArity_31, Context_14, STATE_VARIABLE_Specs_0_54, &STATE_VARIABLE_Specs_58_58);
                break;
            }
          }
          break;
      }
    }
    else
    {
      DetismDecl_27 = (MR_Integer) 0;
      STATE_VARIABLE_Specs_58_58 = STATE_VARIABLE_Specs_0_54;
    }
    hlds__hlds_pred__pred_info_get_cur_user_decl_info_2_p_0(STATE_VARIABLE_PredInfo_0_52, &MaybeCurUserDecl_34);
    if ((MaybeCurUserDecl_34 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_58_58;
    else
    {
      MR_Word CurUserDecl_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCurUserDecl_34, (MR_Integer) 0))));
      MR_Word PredDeclSection_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CurUserDecl_35, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word PredIsPredMode_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CurUserDecl_35, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ItemExport_40;
      MR_Word ItemMercuryStatus_39;

      succeeded = (MaybeItemMercuryStatus_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ItemMercuryStatus_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemMercuryStatus_16, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) ItemMercuryStatus_39)) == (MR_Integer) 0);
        if (succeeded)
          ItemExport_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_39, (MR_Integer) 0))) & (MR_Integer) 3);
      }
      if (succeeded)
      {
        MR_Word ModeDeclSection_41;
        MR_Word STATE_VARIABLE_Specs_99_99;

        ModeDeclSection_41 = hlds__add_pred__item_decl_section_1_f_0(ItemExport_40);
        succeeded = (PredDeclSection_36 == ModeDeclSection_41);
        if (succeeded)
          STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_58_58;
        else
        {
          MR_String ModeSectionStr_42;
          MR_String PredSectionStr_43;
          MR_Word SNA1_44;
          MR_Word SectionPieces_45;
          MR_Word SectionSpec_46;
          MR_Word Var_59;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_67;
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
          MR_Word Var_89;

          ModeSectionStr_42 = hlds__add_pred__decl_section_to_string_1_f_0(ModeDeclSection_41);
          PredSectionStr_43 = hlds__add_pred__decl_section_to_string_1_f_0(PredDeclSection_36);
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (PredName_25));
          }
          {
            SNA1_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SNA1_44, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(0), SNA1_44, 1) = ((MR_Box) (Arity_17));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_63, 0) = ((MR_Box) (ModeSectionStr_42));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 18U));
            MR_hl_field(MR_mktag(3), Var_71, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (SNA1_44));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_89, 0) = ((MR_Box) (PredSectionStr_43));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[15])));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[62])));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_88));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[61])));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[60])));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[59])));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[58])));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[57])));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
          }
          {
            SectionPieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SectionPieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[56])));
            MR_hl_field(MR_mktag(1), SectionPieces_45, 1) = ((MR_Box) (Var_62));
          }
          {
            SectionSpec_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SectionSpec_46, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.module_do_add_mode\'/13"));
            MR_hl_field(MR_mktag(1), SectionSpec_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), SectionSpec_46, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), SectionSpec_46, 3) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(1), SectionSpec_46, 4) = ((MR_Box) (SectionPieces_45));
          }
          {
            STATE_VARIABLE_Specs_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 0) = ((MR_Box) (SectionSpec_46));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 1) = ((MR_Box) (STATE_VARIABLE_Specs_58_58));
          }
        }
        switch (PredIsPredMode_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_99_99;
            break;
          case (MR_Integer) 1:
            {
              MR_Word SNA2_47;
              MR_Word PredModePieces_48;
              MR_Word PredModeSpec_49;
              MR_Word Var_100;
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_110;

              {
                Var_100 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (PredName_25));
              }
              {
                SNA2_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SNA2_47, 0) = ((MR_Box) (Var_100));
                MR_hl_field(MR_mktag(0), SNA2_47, 1) = ((MR_Box) (Arity_17));
              }
              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                MR_hl_field(MR_mktag(3), Var_104, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_26));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (SNA2_47));
              }
              {
                Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_104));
                MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[20])));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[64])));
                MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_110));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
                MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_107));
              }
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
                MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_105));
              }
              {
                PredModePieces_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), PredModePieces_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[63])));
                MR_hl_field(MR_mktag(1), PredModePieces_48, 1) = ((MR_Box) (Var_103));
              }
              {
                PredModeSpec_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), PredModeSpec_49, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.module_do_add_mode\'/13"));
                MR_hl_field(MR_mktag(1), PredModeSpec_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), PredModeSpec_49, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(1), PredModeSpec_49, 3) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(1), PredModeSpec_49, 4) = ((MR_Box) (PredModePieces_48));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_55 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredModeSpec_49));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_99_99));
              }
            }
            break;
        }
      }
      else
        *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_58_58;
    }
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Modes_19));
    }
    hlds__add_pred__add_new_proc_14_p_0(Context_14, SeqNum_15, Arity_17, InstVarSet_18, Modes_19, Var_128, (MR_Word) ((MR_Unsigned) 0U), DetismDecl_27, MaybeDetism_20, (MR_Integer) 1, (MR_Integer) 1, STATE_VARIABLE_PredInfo_0_52, STATE_VARIABLE_PredInfo_53, ProcId_23);
  }
}

static void MR_CALL 
hlds__add_pred__unspecified_det_for_local_4_p_0(
  MR_Word PFSymNameArity_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
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
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (PFSymNameArity_5));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[15])));
    }
    {
      MainPieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[53])));
      MR_hl_field(MR_mktag(1), MainPieces_8, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (MainPieces_8));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[55])));
    }
    {
      Msg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg_10, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(1), Msg_10, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Msg_10));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.unspecified_det_for_local\'/4"));
      MR_hl_field(MR_mktag(2), Spec_11, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 200) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(MR_mktag(2), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), Spec_11, 3) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(2), Spec_11, 4) = ((MR_Box) (Var_64));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
    }
  }
}

static void MR_CALL 
hlds__add_pred__unspecified_det_for_exported_4_p_0(
  MR_Word PFSymNameArity_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  {
    MR_Word Pieces_8;
    MR_Word Spec_9;
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (PFSymNameArity_5));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[15])));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[52])));
      MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_14));
    }
    {
      Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.unspecified_det_for_exported\'/4"));
      MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
}

static void MR_CALL 
hlds__add_pred__unspecified_det_for_method_4_p_0(
  MR_Word PFSymNameArity_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  {
    MR_Word Pieces_8;
    MR_Word Spec_9;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (PFSymNameArity_5));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[15])));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[51])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[50])));
      MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_14));
    }
    {
      Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.unspecified_det_for_method\'/4"));
      MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 16U));
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
  MR_Integer SeqNum_16,
  MR_Integer Arity_17,
  MR_Word InstVarSet_18,
  MR_Word ArgModes_19,
  MR_Word MaybeDeclaredArgModes_20,
  MR_Word MaybeArgLives_21,
  MR_Word DetismDecl_22,
  MR_Word MaybeDetism_23,
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
    hlds__hlds_pred__proc_info_init_13_p_0(Context_15, SeqNum_16, Arity_17, ArgTypes_30, MaybeDeclaredArgModes_20, ArgModes_19, MaybeArgLives_21, DetismDecl_22, MaybeDetism_23, IsAddressTaken_24, HasParallelConj_25, VarNameRemap_31, &NewProc0_32);
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
  MR_Word PredSymName_17,
  MR_Integer PredArity_18,
  MR_Word PredOrFunc_19,
  MR_Word Status_20,
  MR_Word IsClassMethod_21,
  MR_Word Context_22,
  MR_Word PredOrigin_23,
  MR_Word DescPieces_24,
  MR_Word * PredId_25,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_Word ClausesInfo_28;
    MR_Word STATE_VARIABLE_Specs_33_33;
    MR_Word Var_36;

    hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredSymName_17, PredArity_18, PredOrFunc_19, Status_20, IsClassMethod_21, Context_22, DescPieces_24, STATE_VARIABLE_Specs_0_31, &STATE_VARIABLE_Specs_33_33);
    switch (PredOrFunc_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer FuncArity_27;

          parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArity_27, PredArity_18);
          hlds__add_pred__maybe_check_field_access_function_7_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredSymName_17, FuncArity_27, Status_20, Context_22, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_32);
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_33_33;
        break;
    }
    Var_36 = hlds__hlds_clauses__init_clause_item_numbers_user_0_f_0();
    hlds__hlds_clauses__clauses_info_init_4_p_0(PredOrFunc_19, PredArity_18, Var_36, &ClausesInfo_28);
    hlds__add_pred__preds_do_add_implicit_11_p_0(ModuleName_16, PredSymName_17, PredArity_18, PredOrFunc_19, Status_20, Context_22, PredOrigin_23, ClausesInfo_28, PredId_25, STATE_VARIABLE_ModuleInfo_0_29, STATE_VARIABLE_ModuleInfo_30);
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
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__add_pred_scalar_common_1[4]), CtorFieldTable_32, ((MR_Box) (FieldName_15)), &conv0_Var_41);
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
          TypeInfo_39_49 = (MR_Word) (&hlds__add_pred_scalar_common_1[4]);
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
        MR_Word Spec_56;
        MR_Word Var_59;
        MR_Word Var_60;

        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (FuncCallId_31));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_pred_scalar_common_1[47])));
        }
        {
          Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_pred_scalar_common_1[49])));
          MR_hl_field(MR_mktag(1), Pieces_55, 1) = ((MR_Box) (Var_59));
        }
        {
          Spec_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_56, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_pred.report_field_status_mismatch\'/4"));
          MR_hl_field(MR_mktag(1), Spec_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_56, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_56, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), Spec_56, 4) = ((MR_Box) (Pieces_55));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_56));
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
  MR_Word PredSymName_13,
  MR_Integer PredArity_14,
  MR_Word PredOrFunc_15,
  MR_Word PredStatus_16,
  MR_Word Context_17,
  MR_Word PredOrigin_18,
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
    Var_46 = mercury__map__init_0_f_0((MR_Word) (&hlds__add_pred_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_46, TypeVars_25, &Types_27);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_30);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_31);
    mercury__map__init_1_p_0((MR_Word) (&hlds__add_pred_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_32);
    hlds__hlds_pred__pred_info_init_19_p_0(ModuleName_12, PredSymName_13, PredArity_14, PredOrFunc_15, Context_17, PredOrigin_18, PredStatus_16, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), Markers0_23, Types_27, TVarSet_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__add_pred_scalar_common_1[48]), Proofs_30, ConstraintMap_31, ClausesInfo_19, VarNameRemap_32, &PredInfo0_33);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 2, Markers0_23, &Markers1_34);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 4, Markers1_34, &Markers_35);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_35, PredInfo0_33, &PredInfo_36);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &PredicateTable0_37);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable0_37, (MR_Integer) 0, PredOrFunc_15, PredSymName_13, PredArity_14, &PredIds_38);
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_pred.preds_do_add_implicit\'/11", (MR_String) "search succeeded");
        return;
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
