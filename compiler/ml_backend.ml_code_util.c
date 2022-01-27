/*
** Automatically generated from `ml_code_util.m'
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


/* :- module ml_backend.ml_code_util. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_code_util__init
ENDINIT
*/

#include "ml_backend.ml_code_util.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "counter.mih"
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
#include "ml_backend.ml_accurate_gc.mih"
#include "ml_backend.ml_call_gen.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 162 "ml_backend.ml_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 165 "ml_backend.ml_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "ml_backend.ml_code_util.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "ml_backend.ml_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_code_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

#line 174 "ml_backend.ml_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

#line 177 "ml_backend.ml_code_util.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 180 "ml_backend.ml_code_util.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0;

#line 183 "ml_backend.ml_code_util.c"
static const MR_VA_TypeInfo_Struct4 ml_backend__ml_code_util____vti_pred_4list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;

#line 186 "ml_backend.ml_code_util.c"
static MR_bool MR_CALL 
ml_backend__ml_code_util____Unify____gen_pred_0_0_10001(
#line 189 "ml_backend.ml_code_util.c"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1,
#line 191 "ml_backend.ml_code_util.c"
  MR_Box ml_backend__ml_code_util__wrapper_arg_2);

#line 194 "ml_backend.ml_code_util.c"
static void MR_CALL 
ml_backend__ml_code_util____Compare____gen_pred_0_0_10001(
#line 197 "ml_backend.ml_code_util.c"
  MR_Box * ml_backend__ml_code_util__wrapper_arg_1,
#line 199 "ml_backend.ml_code_util.c"
  MR_Box ml_backend__ml_code_util__wrapper_arg_2,
#line 201 "ml_backend.ml_code_util.c"
  MR_Box ml_backend__ml_code_util__wrapper_arg_3);

#line 1851 "ml_code_util.m"
static void MR_CALL 
ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
#line 1851 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
#line 1851 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__2_2,
#line 1851 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_3,
#line 1851 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__HeadVar__4_4,
#line 1851 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__HeadVar__5_5);

#line 1939 "ml_code_util.m"
static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1939__1_2_f_0(
#line 1939 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__MLDS_Module_25,
#line 1939 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_75);

#line 1905 "ml_code_util.m"
static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1905__1_1_f_0(
#line 1905 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_66);

#line 1876 "ml_code_util.m"
static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1876__1_1_f_0(
#line 1876 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_27);

#line 883 "ml_code_util.m"
static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__883__1_1_f_0(
#line 883 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_20);

#line 593 "ml_code_util.m"
static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__593__1_1_f_0(
#line 593 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_29);

#line 603 "ml_code_util.m"
static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__603__1_1_f_0(
#line 603 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_22);

#line 2068 "ml_code_util.m"
static void MR_CALL 
ml_backend__ml_code_util__lookup_ground_rval_3_p_0(
#line 2068 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__FinalConstVarMap_4,
#line 2068 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Var_5,
#line 2068 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Rval_6);

#line 997 "ml_code_util.m"
static void MR_CALL 
ml_backend__ml_code_util__ml_gen_arg_decls_9_p_0(
#line 997 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_10,
#line 997 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVars_11,
#line 997 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadTypes_12,
#line 997 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadModes_13,
#line 997 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CopyOut_14,
#line 997 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__FuncArgs_15,
#line 997 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__RetTypes_16,
#line 997 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_28,
#line 997 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29);

#line 912 "ml_code_util.m"
static void MR_CALL 
ml_backend__ml_code_util__ml_gen_params_base_9_p_0(
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_10,
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVarNames_11,
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadTypes_12,
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadModes_13,
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__PredOrFunc_14,
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CodeModel_15,
#line 912 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__FuncParams_16,
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_42,
#line 912 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_43);

#line 2065 "ml_code_util.m"
static void MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0_1(
#line 2065 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 2065 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1,
#line 2065 "ml_code_util.m"
  MR_Box * ml_backend__ml_code_util__wrapper_arg_2);

#line 1939 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_p_0_2(
#line 1939 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1939 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

#line 1905 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_p_0_1(
#line 1905 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1905 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

#line 1876 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0_1(
#line 1876 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1876 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

#line 1839 "ml_code_util.m"
static void MR_CALL 
ml_backend__ml_code_util__ml_initial_cont_4_p_0_1(
#line 1839 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1839 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1,
#line 1839 "ml_code_util.m"
  MR_Box * ml_backend__ml_code_util__wrapper_arg_2);

#line 1299 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_var_names_2_f_0_1(
#line 1299 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1299 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

#line 883 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0_1(
#line 883 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 883 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

#line 1299 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_5_p_0_1(
#line 1299 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1299 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

#line 1299 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_3_f_0_1(
#line 1299 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1299 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

#line 593 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_append_return_statement_6_p_0_2(
#line 593 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 593 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);

#line 603 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_append_return_statement_6_p_0_1(
#line 603 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 603 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1);


static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_1[25][2];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_2[9][3];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_3[5][6];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_4[17][1];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_5[2][5];




static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_1[25][2] = {
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_2[1])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "env_ptr_arg")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "cont")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "cont_env_ptr")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "dummy_var")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "closure_layout_ptr")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "type_params")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "type_info")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "succeeded")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "passed_cont")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "env_ptr")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[5])))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_code_util__ml_append_return_statement_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_code_util__ml_append_return_statement_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_5[1])),
    ((MR_Box) (ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_3[5][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[2])),
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[3])),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_4[17][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "}\n"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "MR_deallocate(allocated_mem);\n"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[7])))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[8])))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[9])))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 10 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "{\n"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "MR_MemoryList allocated_mem = NULL;\n"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) " = (MR_C_Pointer) MR_make_type_info_maybe_existq(\n\t"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ", ((MR_Closure_Layout *)\n\t"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[21])))))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_code_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 749 "ml_backend.ml_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_util__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 757 "ml_backend.ml_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 765 "ml_backend.ml_code_util.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 773 "ml_backend.ml_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_code_util__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 782 "ml_backend.ml_code_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0
  }
};

#line 791 "ml_backend.ml_code_util.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 799 "ml_backend.ml_code_util.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
  }
};

#line 807 "ml_backend.ml_code_util.c"
static const MR_VA_TypeInfo_Struct4 ml_backend__ml_code_util____vti_pred_4list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
    (MR_TypeInfo) &ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0,
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0,
    (MR_TypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0
  }
};

#line 819 "ml_backend.ml_code_util.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_code_util__ml_backend__ml_code_util__type_ctor_info_gen_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_code_util____Unify____gen_pred_0_0_10001)),
  ((MR_Box) (ml_backend__ml_code_util____Compare____gen_pred_0_0_10001)),
  (MR_String) "ml_backend.ml_code_util",
  (MR_String) "gen_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_code_util____vti_pred_4list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_statement_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 836 "ml_backend.ml_code_util.c"
static MR_bool MR_CALL 
ml_backend__ml_code_util____Unify____gen_pred_0_0_10001(
#line 839 "ml_backend.ml_code_util.c"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1,
#line 841 "ml_backend.ml_code_util.c"
  MR_Box ml_backend__ml_code_util__wrapper_arg_2)
#line 843 "ml_backend.ml_code_util.c"
{
#line 845 "ml_backend.ml_code_util.c"
  {
#line 847 "ml_backend.ml_code_util.c"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 850 "ml_backend.ml_code_util.c"
    {
#line 852 "ml_backend.ml_code_util.c"
      ml_backend__ml_code_util__succeeded = ml_backend__ml_code_util____Unify____gen_pred_0_0(((MR_Word) ml_backend__ml_code_util__wrapper_arg_1), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_2));
    }
#line 855 "ml_backend.ml_code_util.c"
    return ml_backend__ml_code_util__succeeded;
#line 857 "ml_backend.ml_code_util.c"
  }
#line 859 "ml_backend.ml_code_util.c"
}

#line 862 "ml_backend.ml_code_util.c"
static void MR_CALL 
ml_backend__ml_code_util____Compare____gen_pred_0_0_10001(
#line 865 "ml_backend.ml_code_util.c"
  MR_Box * ml_backend__ml_code_util__wrapper_arg_1,
#line 867 "ml_backend.ml_code_util.c"
  MR_Box ml_backend__ml_code_util__wrapper_arg_2,
#line 869 "ml_backend.ml_code_util.c"
  MR_Box ml_backend__ml_code_util__wrapper_arg_3)
#line 871 "ml_backend.ml_code_util.c"
{
#line 873 "ml_backend.ml_code_util.c"
  {
#line 875 "ml_backend.ml_code_util.c"
    MR_Word ml_backend__ml_code_util__conv0_HeadVar__1_1;

#line 878 "ml_backend.ml_code_util.c"
    {
#line 880 "ml_backend.ml_code_util.c"
      ml_backend__ml_code_util____Compare____gen_pred_0_0(&ml_backend__ml_code_util__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_code_util__wrapper_arg_2), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_3));
    }
#line 883 "ml_backend.ml_code_util.c"
    *ml_backend__ml_code_util__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_code_util__conv0_HeadVar__1_1));
#line 885 "ml_backend.ml_code_util.c"
  }
#line 887 "ml_backend.ml_code_util.c"
}

#line 1851 "ml_code_util.m"
static void MR_CALL 
ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
#line 1851 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
#line 1851 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__2_2,
#line 1851 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_3,
#line 1851 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__HeadVar__4_4,
#line 1851 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__HeadVar__5_5)
#line 1851 "ml_code_util.m"
{
#line 1854 "ml_code_util.m"
  {
#line 1854 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 1854 "ml_code_util.m"
    if ((ml_backend__ml_code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1854 "ml_code_util.m"
      if ((ml_backend__ml_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1854 "ml_code_util.m"
        {
#line 1854 "ml_code_util.m"
          *ml_backend__ml_code_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1854 "ml_code_util.m"
          *ml_backend__ml_code_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1854 "ml_code_util.m"
        }
#line 1854 "ml_code_util.m"
      else
#line 1870 "ml_code_util.m"
        {
#line 1871 "ml_code_util.m"
          {
#line 1871 "ml_code_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_skip_dummy_argument_types\'/5", (MR_String) "length mismatch");
#line 1871 "ml_code_util.m"
            return;
          }
#line 1870 "ml_code_util.m"
        }
#line 1854 "ml_code_util.m"
    else
#line 1854 "ml_code_util.m"
      {
#line 1854 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1854 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1854 "ml_code_util.m"
        if ((ml_backend__ml_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1868 "ml_code_util.m"
          {
#line 1869 "ml_code_util.m"
            {
#line 1869 "ml_code_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_skip_dummy_argument_types\'/5", (MR_String) "length mismatch");
#line 1869 "ml_code_util.m"
              return;
            }
#line 1868 "ml_code_util.m"
          }
#line 1854 "ml_code_util.m"
        else
#line 1856 "ml_code_util.m"
          {
#line 1856 "ml_code_util.m"
            MR_Box ml_backend__ml_code_util__Var_9 = (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 0));
#line 1856 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1856 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__Types1_14;
#line 1856 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__Vars1_15;
#line 1856 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__IsDummy_16;

#line 1857 "ml_code_util.m"
            {
#line 1857 "ml_code_util.m"
              ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ml_backend__ml_code_util__V_34_34, ml_backend__ml_code_util__Vars0_10, ml_backend__ml_code_util__ModuleInfo_3, &ml_backend__ml_code_util__Types1_14, &ml_backend__ml_code_util__Vars1_15);
            }
#line 1858 "ml_code_util.m"
            {
#line 1858 "ml_code_util.m"
              ml_backend__ml_code_util__IsDummy_16 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_3, ml_backend__ml_code_util__V_35_35);
            }
#line 1863 "ml_code_util.m"
#line 1863 "ml_code_util.m"
            switch (ml_backend__ml_code_util__IsDummy_16) {
#line 1863 "ml_code_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1863 "ml_code_util.m"
              case (MR_Integer) 0:
#line 1860 "ml_code_util.m"
                {
#line 1861 "ml_code_util.m"
                  *ml_backend__ml_code_util__HeadVar__4_4 = ml_backend__ml_code_util__Types1_14;
#line 1862 "ml_code_util.m"
                  *ml_backend__ml_code_util__HeadVar__5_5 = ml_backend__ml_code_util__Vars1_15;
#line 1860 "ml_code_util.m"
                }
#line 1863 "ml_code_util.m"
                break;
#line 1863 "ml_code_util.m"
              case (MR_Integer) 1:
#line 1864 "ml_code_util.m"
                {
#line 1865 "ml_code_util.m"
                  {
#line 1865 "ml_code_util.m"
                    MR_Word base;
#line 1865 "ml_code_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "ml_code_util.m"
                    *ml_backend__ml_code_util__HeadVar__4_4 = base;
#line 1865 "ml_code_util.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__V_35_35));
#line 1865 "ml_code_util.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Types1_14));
#line 1865 "ml_code_util.m"
                  }
#line 1866 "ml_code_util.m"
                  {
#line 1866 "ml_code_util.m"
                    MR_Word base;
#line 1866 "ml_code_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1866 "ml_code_util.m"
                    *ml_backend__ml_code_util__HeadVar__5_5 = base;
#line 1866 "ml_code_util.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ml_backend__ml_code_util__Var_9;
#line 1866 "ml_code_util.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Vars1_15));
#line 1866 "ml_code_util.m"
                  }
#line 1864 "ml_code_util.m"
                }
#line 1863 "ml_code_util.m"
                break;
#line 1863 "ml_code_util.m"
            }
#line 1856 "ml_code_util.m"
          }
#line 1854 "ml_code_util.m"
      }
#line 1854 "ml_code_util.m"
  }
#line 1851 "ml_code_util.m"
}

#line 1939 "ml_code_util.m"
static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1939__1_2_f_0(
#line 1939 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__MLDS_Module_25,
#line 1939 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_75)
#line 1939 "ml_code_util.m"
{
#line 1939 "ml_code_util.m"
  {
#line 1939 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1939 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__LambdaHeadVar__2_76;
#line 1939 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Data_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__LambdaHeadVar__1_75, (MR_Integer) 0)));
#line 1939 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Type_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__LambdaHeadVar__1_75, (MR_Integer) 1)));
#line 1940 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___GC_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__LambdaHeadVar__1_75, (MR_Integer) 2)));
#line 1941 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__VarName_33;
#line 1941 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_77_77;

#line 1941 "ml_code_util.m"
    ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__Data_110)) == (MR_mktag((MR_Integer) 1)));
#line 1941 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1941 "ml_code_util.m"
      {
#line 1941 "ml_code_util.m"
        ml_backend__ml_code_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Data_110, (MR_Integer) 0)));
#line 1941 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 1941 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1941 "ml_code_util.m"
          ml_backend__ml_code_util__VarName_33 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_code_util__V_77_77), (MR_Integer) 1);
#line 1941 "ml_code_util.m"
      }
#line 1941 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1942 "ml_code_util.m"
      {
#line 1942 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_78_78;
#line 1942 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_79_79;

#line 1942 "ml_code_util.m"
        {
#line 1942 "ml_code_util.m"
          ml_backend__ml_code_util__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1942 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_79_79, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Module_25));
#line 1942 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_79_79, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1942 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_79_79, 2) = ((MR_Box) (ml_backend__ml_code_util__VarName_33));
#line 1942 "ml_code_util.m"
        }
#line 1942 "ml_code_util.m"
        {
#line 1942 "ml_code_util.m"
          ml_backend__ml_code_util__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1942 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_78_78, 0) = ((MR_Box) (ml_backend__ml_code_util__V_79_79));
#line 1942 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_78_78, 1) = ((MR_Box) (ml_backend__ml_code_util__Type_111));
#line 1942 "ml_code_util.m"
        }
#line 1942 "ml_code_util.m"
        {
#line 1942 "ml_code_util.m"
          ml_backend__ml_code_util__LambdaHeadVar__2_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1942 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__LambdaHeadVar__2_76, 0) = ((MR_Box) (ml_backend__ml_code_util__V_78_78));
#line 1942 "ml_code_util.m"
        }
#line 1942 "ml_code_util.m"
      }
#line 1941 "ml_code_util.m"
    else
#line 1945 "ml_code_util.m"
      {
#line 1945 "ml_code_util.m"
        {
#line 1945 "ml_code_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_call_current_success_cont_indirectly\'/4", (MR_String) "expected variable name in continuation parameters");
        }
#line 1945 "ml_code_util.m"
      }
#line 1939 "ml_code_util.m"
    return ml_backend__ml_code_util__LambdaHeadVar__2_76;
#line 1939 "ml_code_util.m"
  }
#line 1939 "ml_code_util.m"
}

#line 1905 "ml_code_util.m"
static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1905__1_1_f_0(
#line 1905 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_66)
#line 1905 "ml_code_util.m"
{
#line 1905 "ml_code_util.m"
  {
#line 1905 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1905 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__LambdaHeadVar__2_67;

#line 1905 "ml_code_util.m"
    {
#line 1905 "ml_code_util.m"
      ml_backend__ml_code_util__LambdaHeadVar__2_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1905 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__LambdaHeadVar__2_67, 0) = ((MR_Box) (ml_backend__ml_code_util__LambdaHeadVar__1_66));
#line 1905 "ml_code_util.m"
    }
#line 1905 "ml_code_util.m"
    return ml_backend__ml_code_util__LambdaHeadVar__2_67;
#line 1905 "ml_code_util.m"
  }
#line 1905 "ml_code_util.m"
}

#line 1876 "ml_code_util.m"
static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1876__1_1_f_0(
#line 1876 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_27)
#line 1876 "ml_code_util.m"
{
#line 1876 "ml_code_util.m"
  {
#line 1876 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1876 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__LambdaHeadVar__2_28;

#line 1876 "ml_code_util.m"
    {
#line 1876 "ml_code_util.m"
      ml_backend__ml_code_util__LambdaHeadVar__2_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1876 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__LambdaHeadVar__2_28, 0) = ((MR_Box) (ml_backend__ml_code_util__LambdaHeadVar__1_27));
#line 1876 "ml_code_util.m"
    }
#line 1876 "ml_code_util.m"
    return ml_backend__ml_code_util__LambdaHeadVar__2_28;
#line 1876 "ml_code_util.m"
  }
#line 1876 "ml_code_util.m"
}

#line 883 "ml_code_util.m"
static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__883__1_1_f_0(
#line 883 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_20)
#line 883 "ml_code_util.m"
{
#line 883 "ml_code_util.m"
  {
#line 883 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 883 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__LambdaHeadVar__2_21;
#line 883 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__N_17;
#line 883 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_22_22;
#line 883 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__LambdaHeadVar__1_20, (MR_Integer) 0)));
#line 883 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__Name_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__LambdaHeadVar__1_20, (MR_Integer) 1)));

#line 885 "ml_code_util.m"
    {
#line 885 "ml_code_util.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_code_util__Var_24, &ml_backend__ml_code_util__N_17);
    }
#line 886 "ml_code_util.m"
    {
#line 886 "ml_code_util.m"
      ml_backend__ml_code_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 886 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_22_22, 0) = ((MR_Box) (ml_backend__ml_code_util__N_17));
#line 886 "ml_code_util.m"
    }
#line 886 "ml_code_util.m"
    {
#line 886 "ml_code_util.m"
      ml_backend__ml_code_util__LambdaHeadVar__2_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 886 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__LambdaHeadVar__2_21, 0) = ((MR_Box) (ml_backend__ml_code_util__Name_25));
#line 886 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__LambdaHeadVar__2_21, 1) = ((MR_Box) (ml_backend__ml_code_util__V_22_22));
#line 886 "ml_code_util.m"
    }
#line 883 "ml_code_util.m"
    return ml_backend__ml_code_util__LambdaHeadVar__2_21;
#line 883 "ml_code_util.m"
  }
#line 883 "ml_code_util.m"
}

#line 593 "ml_code_util.m"
static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__593__1_1_f_0(
#line 593 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_29)
#line 593 "ml_code_util.m"
{
#line 593 "ml_code_util.m"
  {
#line 593 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 593 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__LambdaHeadVar__2_30;

#line 593 "ml_code_util.m"
    {
#line 593 "ml_code_util.m"
      ml_backend__ml_code_util__LambdaHeadVar__2_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 593 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__LambdaHeadVar__2_30, 0) = ((MR_Box) (ml_backend__ml_code_util__LambdaHeadVar__1_29));
#line 593 "ml_code_util.m"
    }
#line 593 "ml_code_util.m"
    return ml_backend__ml_code_util__LambdaHeadVar__2_30;
#line 593 "ml_code_util.m"
  }
#line 593 "ml_code_util.m"
}

#line 603 "ml_code_util.m"
static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__603__1_1_f_0(
#line 603 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__LambdaHeadVar__1_22)
#line 603 "ml_code_util.m"
{
#line 603 "ml_code_util.m"
  {
#line 603 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 603 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__LambdaHeadVar__2_23;

#line 603 "ml_code_util.m"
    {
#line 603 "ml_code_util.m"
      ml_backend__ml_code_util__LambdaHeadVar__2_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 603 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__LambdaHeadVar__2_23, 0) = ((MR_Box) (ml_backend__ml_code_util__LambdaHeadVar__1_22));
#line 603 "ml_code_util.m"
    }
#line 603 "ml_code_util.m"
    return ml_backend__ml_code_util__LambdaHeadVar__2_23;
#line 603 "ml_code_util.m"
  }
#line 603 "ml_code_util.m"
}

#line 68 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util____Compare____gen_pred_0_0(
#line 68 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__HeadVar__1_1,
#line 68 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__2_2,
#line 68 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__3_3)
#line 68 "ml_code_util.m"
{
#line 68 "ml_code_util.m"
  {
#line 68 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 68 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Cast_HeadVar1_4 = ml_backend__ml_code_util__HeadVar__2_2;
#line 68 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Cast_HeadVar2_5 = ml_backend__ml_code_util__HeadVar__3_3;

#line 68 "ml_code_util.m"
    {
#line 68 "ml_code_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_3[0], ml_backend__ml_code_util__HeadVar__1_1, ((MR_Box) (ml_backend__ml_code_util__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_code_util__Cast_HeadVar2_5)));
    }
#line 68 "ml_code_util.m"
  }
#line 68 "ml_code_util.m"
}

#line 68 "ml_code_util.m"
MR_bool MR_CALL 
ml_backend__ml_code_util____Unify____gen_pred_0_0(
#line 68 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
#line 68 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__2_2)
#line 68 "ml_code_util.m"
{
#line 68 "ml_code_util.m"
  {
#line 68 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 68 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Cast_HeadVar1_3 = ml_backend__ml_code_util__HeadVar__1_1;
#line 68 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Cast_HeadVar2_4 = ml_backend__ml_code_util__HeadVar__2_2;

#line 68 "ml_code_util.m"
    {
#line 68 "ml_code_util.m"
      ml_backend__ml_code_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ml_backend__ml_code_util__Cast_HeadVar1_3, (MR_Word) ml_backend__ml_code_util__Cast_HeadVar2_4);
    }
#line 68 "ml_code_util.m"
    return ml_backend__ml_code_util__succeeded;
#line 68 "ml_code_util.m"
  }
#line 68 "ml_code_util.m"
}

#line 2068 "ml_code_util.m"
static void MR_CALL 
ml_backend__ml_code_util__lookup_ground_rval_3_p_0(
#line 2068 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__FinalConstVarMap_4,
#line 2068 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Var_5,
#line 2068 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Rval_6)
#line 2068 "ml_code_util.m"
{
#line 2071 "ml_code_util.m"
  {
#line 2071 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 2071 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__GroundTerm_7;
#line 2082 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__conv0_GroundTerm_7;
#line 2083 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_8_8;
#line 2083 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_9_9;

#line 2082 "ml_code_util.m"
    {
#line 2082 "ml_code_util.m"
      mercury__map__lookup_3_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ml_backend__ml_code_util__FinalConstVarMap_4, ((MR_Box) (ml_backend__ml_code_util__Var_5)), &ml_backend__ml_code_util__conv0_GroundTerm_7);
    }
#line 2082 "ml_code_util.m"
    ml_backend__ml_code_util__GroundTerm_7 = ((MR_Word) ml_backend__ml_code_util__conv0_GroundTerm_7);
#line 2083 "ml_code_util.m"
    *ml_backend__ml_code_util__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GroundTerm_7, (MR_Integer) 0)));
#line 2083 "ml_code_util.m"
    ml_backend__ml_code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GroundTerm_7, (MR_Integer) 1)));
#line 2083 "ml_code_util.m"
    ml_backend__ml_code_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GroundTerm_7, (MR_Integer) 2)));
#line 2071 "ml_code_util.m"
  }
#line 2068 "ml_code_util.m"
}

#line 997 "ml_code_util.m"
static void MR_CALL 
ml_backend__ml_code_util__ml_gen_arg_decls_9_p_0(
#line 997 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_10,
#line 997 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVars_11,
#line 997 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadTypes_12,
#line 997 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadModes_13,
#line 997 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CopyOut_14,
#line 997 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__FuncArgs_15,
#line 997 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__RetTypes_16,
#line 997 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_28,
#line 997 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29)
#line 997 "ml_code_util.m"
{
#line 1004 "ml_code_util.m"
  {
#line 1004 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__HeadVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1005 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1005 "ml_code_util.m"
      {
#line 1006 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__HeadTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1005 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1007 "ml_code_util.m"
          ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__HeadModes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1005 "ml_code_util.m"
      }
#line 1004 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1009 "ml_code_util.m"
      {
#line 1009 "ml_code_util.m"
        *ml_backend__ml_code_util__FuncArgs_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1010 "ml_code_util.m"
        *ml_backend__ml_code_util__RetTypes_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1009 "ml_code_util.m"
        *ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29 = ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_28;
#line 1009 "ml_code_util.m"
      }
#line 1004 "ml_code_util.m"
    else
#line 1011 "ml_code_util.m"
      {
#line 1011 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Var_18;
#line 1011 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Vars_19;
#line 1011 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Type_20;
#line 1011 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Types_21;
#line 1011 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Mode_22;
#line 1011 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Modes_23;

#line 1012 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__HeadVars_11)) == (MR_mktag((MR_Integer) 1)));
#line 1012 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1012 "ml_code_util.m"
          {
#line 1012 "ml_code_util.m"
            ml_backend__ml_code_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVars_11, (MR_Integer) 0)));
#line 1012 "ml_code_util.m"
            ml_backend__ml_code_util__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVars_11, (MR_Integer) 1)));
#line 1013 "ml_code_util.m"
            ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__HeadTypes_12)) == (MR_mktag((MR_Integer) 1)));
#line 1013 "ml_code_util.m"
            if (ml_backend__ml_code_util__succeeded)
#line 1013 "ml_code_util.m"
              {
#line 1013 "ml_code_util.m"
                ml_backend__ml_code_util__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadTypes_12, (MR_Integer) 0)));
#line 1013 "ml_code_util.m"
                ml_backend__ml_code_util__Types_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadTypes_12, (MR_Integer) 1)));
#line 1014 "ml_code_util.m"
                ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__HeadModes_13)) == (MR_mktag((MR_Integer) 1)));
#line 1014 "ml_code_util.m"
                if (ml_backend__ml_code_util__succeeded)
#line 1014 "ml_code_util.m"
                  {
#line 1014 "ml_code_util.m"
                    ml_backend__ml_code_util__Mode_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadModes_13, (MR_Integer) 0)));
#line 1014 "ml_code_util.m"
                    ml_backend__ml_code_util__Modes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadModes_13, (MR_Integer) 1)));
#line 1014 "ml_code_util.m"
                  }
#line 1013 "ml_code_util.m"
              }
#line 1012 "ml_code_util.m"
          }
#line 1011 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1017 "ml_code_util.m"
          {
#line 1017 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__FuncArgs0_24;
#line 1017 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__RetTypes0_25;
#line 1017 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_30_30;

#line 1016 "ml_code_util.m"
            {
#line 1016 "ml_code_util.m"
              ml_backend__ml_code_util__ml_gen_arg_decls_9_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__Vars_19, ml_backend__ml_code_util__Types_21, ml_backend__ml_code_util__Modes_23, ml_backend__ml_code_util__CopyOut_14, &ml_backend__ml_code_util__FuncArgs0_24, &ml_backend__ml_code_util__RetTypes0_25, ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_28, &ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_30_30);
            }
#line 1021 "ml_code_util.m"
            {
#line 1021 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_31_31;

#line 1021 "ml_code_util.m"
              {
#line 1021 "ml_code_util.m"
                ml_backend__ml_code_util__V_31_31 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__Type_20);
              }
#line 1021 "ml_code_util.m"
              ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_31_31 == (MR_Integer) 0);
#line 1021 "ml_code_util.m"
            }
#line 1022 "ml_code_util.m"
            if (!(ml_backend__ml_code_util__succeeded))
#line 1022 "ml_code_util.m"
              ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Mode_22 == (MR_Integer) 2);
#line 1018 "ml_code_util.m"
            if (ml_backend__ml_code_util__succeeded)
#line 1025 "ml_code_util.m"
              {
#line 1025 "ml_code_util.m"
                *ml_backend__ml_code_util__FuncArgs_15 = ml_backend__ml_code_util__FuncArgs0_24;
#line 1026 "ml_code_util.m"
                *ml_backend__ml_code_util__RetTypes_16 = ml_backend__ml_code_util__RetTypes0_25;
#line 1025 "ml_code_util.m"
                *ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29 = ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_30_30;
#line 1025 "ml_code_util.m"
              }
#line 1018 "ml_code_util.m"
            else
#line 1027 "ml_code_util.m"
              {
#line 1029 "ml_code_util.m"
                ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Mode_22 == (MR_Integer) 1);
#line 1029 "ml_code_util.m"
                if (ml_backend__ml_code_util__succeeded)
#line 1030 "ml_code_util.m"
                  ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__CopyOut_14 == (MR_Integer) 1);
#line 1027 "ml_code_util.m"
                if (ml_backend__ml_code_util__succeeded)
#line 1032 "ml_code_util.m"
                  {
#line 1032 "ml_code_util.m"
                    MR_Word ml_backend__ml_code_util__RetType_26;

#line 1032 "ml_code_util.m"
                    {
#line 1032 "ml_code_util.m"
                      ml_backend__ml_code_util__RetType_26 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__Type_20);
                    }
#line 1033 "ml_code_util.m"
                    {
#line 1033 "ml_code_util.m"
                      MR_Word base;
#line 1033 "ml_code_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "ml_code_util.m"
                      *ml_backend__ml_code_util__RetTypes_16 = base;
#line 1033 "ml_code_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__RetType_26));
#line 1033 "ml_code_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__RetTypes0_25));
#line 1033 "ml_code_util.m"
                    }
#line 1034 "ml_code_util.m"
                    *ml_backend__ml_code_util__FuncArgs_15 = ml_backend__ml_code_util__FuncArgs0_24;
#line 1032 "ml_code_util.m"
                    *ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29 = ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_30_30;
#line 1032 "ml_code_util.m"
                  }
#line 1027 "ml_code_util.m"
                else
#line 1037 "ml_code_util.m"
                  {
#line 1037 "ml_code_util.m"
                    MR_Word ml_backend__ml_code_util__FuncArg_27;
#line 1037 "ml_code_util.m"
                    MR_Word ml_backend__ml_code_util__MLDS_Type_44;
#line 1037 "ml_code_util.m"
                    MR_Word ml_backend__ml_code_util__MLDS_ArgType_45;
#line 1037 "ml_code_util.m"
                    MR_Word ml_backend__ml_code_util__Name_46;
#line 1037 "ml_code_util.m"
                    MR_Word ml_backend__ml_code_util__GCStatement_49;
#line 1037 "ml_code_util.m"
                    MR_Word ml_backend__ml_code_util__V_51_51;

#line 1053 "ml_code_util.m"
                    {
#line 1053 "ml_code_util.m"
                      ml_backend__ml_code_util__MLDS_Type_44 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__Type_20);
                    }
#line 1057 "ml_code_util.m"
#line 1057 "ml_code_util.m"
                    switch (ml_backend__ml_code_util__Mode_22) {
#line 1057 "ml_code_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1057 "ml_code_util.m"
                      case (MR_Integer) 0:
#line 1056 "ml_code_util.m"
                        ml_backend__ml_code_util__MLDS_ArgType_45 = ml_backend__ml_code_util__MLDS_Type_44;
#line 1057 "ml_code_util.m"
                        break;
#line 1057 "ml_code_util.m"
                      case (MR_Integer) 1:
#line 1057 "ml_code_util.m"
                      case (MR_Integer) 2:
#line 1061 "ml_code_util.m"
                        {
#line 1061 "ml_code_util.m"
                          ml_backend__ml_code_util__MLDS_ArgType_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "ml_code_util.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MLDS_ArgType_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1061 "ml_code_util.m"
                          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MLDS_ArgType_45, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_44));
#line 1061 "ml_code_util.m"
                        }
#line 1057 "ml_code_util.m"
                        break;
#line 1057 "ml_code_util.m"
                    }
#line 1063 "ml_code_util.m"
                    ml_backend__ml_code_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_code_util__Var_18);
#line 1063 "ml_code_util.m"
                    {
#line 1063 "ml_code_util.m"
                      ml_backend__ml_code_util__Name_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "ml_code_util.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Name_46, 0) = ((MR_Box) (ml_backend__ml_code_util__V_51_51));
#line 1063 "ml_code_util.m"
                    }
#line 1070 "ml_code_util.m"
                    if ((ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1071 "ml_code_util.m"
                      {
#line 1072 "ml_code_util.m"
                        ml_backend__ml_code_util__GCStatement_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1073 "ml_code_util.m"
                        *ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1071 "ml_code_util.m"
                      }
#line 1070 "ml_code_util.m"
                    else
#line 1065 "ml_code_util.m"
                      {
#line 1065 "ml_code_util.m"
                        MR_Word ml_backend__ml_code_util__Info0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_30_30, (MR_Integer) 0)));
#line 1065 "ml_code_util.m"
                        MR_Word ml_backend__ml_code_util__Context_48;
#line 1065 "ml_code_util.m"
                        MR_Word ml_backend__ml_code_util__Info_50;

#line 1067 "ml_code_util.m"
                        {
#line 1067 "ml_code_util.m"
                          mercury__term__context_init_1_p_0(&ml_backend__ml_code_util__Context_48);
                        }
#line 1068 "ml_code_util.m"
                        {
#line 1068 "ml_code_util.m"
                          ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(ml_backend__ml_code_util__Var_18, ml_backend__ml_code_util__Type_20, ml_backend__ml_code_util__Context_48, &ml_backend__ml_code_util__GCStatement_49, ml_backend__ml_code_util__Info0_47, &ml_backend__ml_code_util__Info_50);
                        }
#line 1069 "ml_code_util.m"
                        {
#line 1069 "ml_code_util.m"
                          MR_Word base;
#line 1069 "ml_code_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "ml_code_util.m"
                          *ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_29 = base;
#line 1069 "ml_code_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Info_50));
#line 1069 "ml_code_util.m"
                        }
#line 1065 "ml_code_util.m"
                      }
#line 1075 "ml_code_util.m"
                    {
#line 1075 "ml_code_util.m"
                      ml_backend__ml_code_util__FuncArg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "ml_code_util.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FuncArg_27, 0) = ((MR_Box) (ml_backend__ml_code_util__Name_46));
#line 1075 "ml_code_util.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FuncArg_27, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ArgType_45));
#line 1075 "ml_code_util.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FuncArg_27, 2) = ((MR_Box) (ml_backend__ml_code_util__GCStatement_49));
#line 1075 "ml_code_util.m"
                    }
#line 1038 "ml_code_util.m"
                    {
#line 1038 "ml_code_util.m"
                      MR_Word base;
#line 1038 "ml_code_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "ml_code_util.m"
                      *ml_backend__ml_code_util__FuncArgs_15 = base;
#line 1038 "ml_code_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__FuncArg_27));
#line 1038 "ml_code_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__FuncArgs0_24));
#line 1038 "ml_code_util.m"
                    }
#line 1039 "ml_code_util.m"
                    *ml_backend__ml_code_util__RetTypes_16 = ml_backend__ml_code_util__RetTypes0_25;
#line 1037 "ml_code_util.m"
                  }
#line 1027 "ml_code_util.m"
              }
#line 1017 "ml_code_util.m"
          }
#line 1011 "ml_code_util.m"
        else
#line 1042 "ml_code_util.m"
          {
#line 1042 "ml_code_util.m"
            {
#line 1042 "ml_code_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_arg_decls\'/9", (MR_String) "length mismatch");
#line 1042 "ml_code_util.m"
              return;
            }
#line 1042 "ml_code_util.m"
          }
#line 1011 "ml_code_util.m"
      }
#line 1004 "ml_code_util.m"
  }
#line 997 "ml_code_util.m"
}

#line 912 "ml_code_util.m"
static void MR_CALL 
ml_backend__ml_code_util__ml_gen_params_base_9_p_0(
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_10,
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVarNames_11,
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadTypes_12,
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadModes_13,
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__PredOrFunc_14,
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CodeModel_15,
#line 912 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__FuncParams_16,
#line 912 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_42,
#line 912 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_43)
#line 912 "ml_code_util.m"
{
#line 918 "ml_code_util.m"
  {
#line 918 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 918 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Globals_18;
#line 918 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__FuncArgs_26;
#line 918 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__RetTypes_32;

#line 919 "ml_code_util.m"
    {
#line 919 "ml_code_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_code_util__ModuleInfo_10, &ml_backend__ml_code_util__Globals_18);
    }
#line 1809 "ml_backend.ml_code_util.c"
#line 1810 "ml_backend.ml_code_util.c"
    switch (ml_backend__ml_code_util__CodeModel_15) {
#line 1812 "ml_backend.ml_code_util.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1814 "ml_backend.ml_code_util.c"
      case (MR_Integer) 0:
#line 1816 "ml_backend.ml_code_util.c"
      case (MR_Integer) 1:
#line 1818 "ml_backend.ml_code_util.c"
        {
#line 1820 "ml_backend.ml_code_util.c"
          MR_Word ml_backend__ml_code_util__CopyOut_19;
#line 1822 "ml_backend.ml_code_util.c"
          MR_Word ml_backend__ml_code_util__FuncArgs0_20;
#line 1824 "ml_backend.ml_code_util.c"
          MR_Word ml_backend__ml_code_util__RetTypes0_21;

#line 2131 "ml_code_util.m"
          {
#line 2131 "ml_code_util.m"
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_code_util__Globals_18, (MR_Integer) 255, &ml_backend__ml_code_util__CopyOut_19);
          }
#line 921 "ml_code_util.m"
          {
#line 921 "ml_code_util.m"
            ml_backend__ml_code_util__ml_gen_arg_decls_9_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__HeadVarNames_11, ml_backend__ml_code_util__HeadTypes_12, ml_backend__ml_code_util__HeadModes_13, ml_backend__ml_code_util__CopyOut_19, &ml_backend__ml_code_util__FuncArgs0_20, &ml_backend__ml_code_util__RetTypes0_21, ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_42, ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_43);
          }
#line 947 "ml_code_util.m"
#line 947 "ml_code_util.m"
          switch (ml_backend__ml_code_util__CodeModel_15) {
#line 947 "ml_code_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 947 "ml_code_util.m"
            case (MR_Integer) 0:
#line 927 "ml_code_util.m"
              {
#line 928 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__TypeCtorInfo_66_66;
#line 928 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__TypeCtorInfo_67_67;
#line 928 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__ResultMode_23;
#line 928 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__ResultType_25;
#line 928 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__V_61_61;
#line 930 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__V_22_22;
#line 930 "ml_code_util.m"
                MR_Box ml_backend__ml_code_util__conv0_ResultMode_23;
#line 932 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__V_24_24;
#line 932 "ml_code_util.m"
                MR_Box ml_backend__ml_code_util__conv1_ResultType_25;

#line 928 "ml_code_util.m"
                ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__RetTypes0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 928 "ml_code_util.m"
                if (ml_backend__ml_code_util__succeeded)
#line 928 "ml_code_util.m"
                  {
#line 929 "ml_code_util.m"
                    ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__PredOrFunc_14 == (MR_Integer) 1);
#line 928 "ml_code_util.m"
                    if (ml_backend__ml_code_util__succeeded)
#line 928 "ml_code_util.m"
                      {
#line 1877 "ml_backend.ml_code_util.c"
                        ml_backend__ml_code_util__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_mode_0;
#line 930 "ml_code_util.m"
                        {
#line 930 "ml_code_util.m"
                          parse_tree__prog_util__pred_args_to_func_args_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_66_66, ml_backend__ml_code_util__HeadModes_13, &ml_backend__ml_code_util__V_22_22, &ml_backend__ml_code_util__conv0_ResultMode_23);
                        }
#line 930 "ml_code_util.m"
                        ml_backend__ml_code_util__ResultMode_23 = ((MR_Word) ml_backend__ml_code_util__conv0_ResultMode_23);
#line 931 "ml_code_util.m"
                        ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__ResultMode_23 == (MR_Integer) 1);
#line 928 "ml_code_util.m"
                        if (ml_backend__ml_code_util__succeeded)
#line 928 "ml_code_util.m"
                          {
#line 1892 "ml_backend.ml_code_util.c"
                            ml_backend__ml_code_util__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 932 "ml_code_util.m"
                            {
#line 932 "ml_code_util.m"
                              parse_tree__prog_util__pred_args_to_func_args_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_67_67, ml_backend__ml_code_util__HeadTypes_12, &ml_backend__ml_code_util__V_24_24, &ml_backend__ml_code_util__conv1_ResultType_25);
                            }
#line 932 "ml_code_util.m"
                            ml_backend__ml_code_util__ResultType_25 = ((MR_Word) ml_backend__ml_code_util__conv1_ResultType_25);
#line 933 "ml_code_util.m"
                            {
#line 933 "ml_code_util.m"
                              ml_backend__ml_code_util__V_61_61 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__ResultType_25);
                            }
#line 933 "ml_code_util.m"
                            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_61_61 == (MR_Integer) 1);
#line 928 "ml_code_util.m"
                          }
#line 928 "ml_code_util.m"
                      }
#line 928 "ml_code_util.m"
                  }
#line 927 "ml_code_util.m"
                if (ml_backend__ml_code_util__succeeded)
#line 935 "ml_code_util.m"
                  {
#line 935 "ml_code_util.m"
                    MR_Word ml_backend__ml_code_util__RetArg_27;
#line 935 "ml_code_util.m"
                    MR_Word ml_backend__ml_code_util__RetTypePtr_29;
#line 935 "ml_code_util.m"
                    MR_Box ml_backend__ml_code_util__conv2_RetArg_27;
#line 936 "ml_code_util.m"
                    MR_Word ml_backend__ml_code_util___RetArgName_28;
#line 936 "ml_code_util.m"
                    MR_Word ml_backend__ml_code_util___GCStatement_30;
#line 937 "ml_code_util.m"
                    MR_Word ml_backend__ml_code_util__RetType_31;

#line 935 "ml_code_util.m"
                    {
#line 935 "ml_code_util.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__ml_code_util__FuncArgs0_20, &ml_backend__ml_code_util__FuncArgs_26, &ml_backend__ml_code_util__conv2_RetArg_27);
                    }
#line 935 "ml_code_util.m"
                    ml_backend__ml_code_util__RetArg_27 = ((MR_Word) ml_backend__ml_code_util__conv2_RetArg_27);
#line 936 "ml_code_util.m"
                    ml_backend__ml_code_util___RetArgName_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RetArg_27, (MR_Integer) 0)));
#line 936 "ml_code_util.m"
                    ml_backend__ml_code_util__RetTypePtr_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RetArg_27, (MR_Integer) 1)));
#line 936 "ml_code_util.m"
                    ml_backend__ml_code_util___GCStatement_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RetArg_27, (MR_Integer) 2)));
#line 937 "ml_code_util.m"
                    ml_backend__ml_code_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_code_util__RetTypePtr_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__RetTypePtr_29, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 937 "ml_code_util.m"
                    if (ml_backend__ml_code_util__succeeded)
#line 937 "ml_code_util.m"
                      {
#line 937 "ml_code_util.m"
                        ml_backend__ml_code_util__RetType_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__RetTypePtr_29, (MR_Integer) 1)));
#line 938 "ml_code_util.m"
                        {
#line 938 "ml_code_util.m"
                          ml_backend__ml_code_util__RetTypes_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "ml_code_util.m"
                          MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__RetTypes_32, 0) = ((MR_Box) (ml_backend__ml_code_util__RetType_31));
#line 938 "ml_code_util.m"
                          MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__RetTypes_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "ml_code_util.m"
                        }
#line 937 "ml_code_util.m"
                      }
#line 937 "ml_code_util.m"
                    else
#line 940 "ml_code_util.m"
                      {
#line 940 "ml_code_util.m"
                        {
#line 940 "ml_code_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_params_base\'/9", (MR_String) "output mode function result doesn\'t have pointer type");
#line 940 "ml_code_util.m"
                          return;
                        }
#line 940 "ml_code_util.m"
                      }
#line 935 "ml_code_util.m"
                  }
#line 927 "ml_code_util.m"
                else
#line 944 "ml_code_util.m"
                  {
#line 944 "ml_code_util.m"
                    ml_backend__ml_code_util__FuncArgs_26 = ml_backend__ml_code_util__FuncArgs0_20;
#line 945 "ml_code_util.m"
                    ml_backend__ml_code_util__RetTypes_32 = ml_backend__ml_code_util__RetTypes0_21;
#line 944 "ml_code_util.m"
                  }
#line 927 "ml_code_util.m"
              }
#line 947 "ml_code_util.m"
              break;
#line 947 "ml_code_util.m"
            case (MR_Integer) 1:
#line 948 "ml_code_util.m"
              {
#line 950 "ml_code_util.m"
                ml_backend__ml_code_util__FuncArgs_26 = ml_backend__ml_code_util__FuncArgs0_20;
#line 951 "ml_code_util.m"
                {
#line 951 "ml_code_util.m"
                  ml_backend__ml_code_util__RetTypes_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "ml_code_util.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__RetTypes_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 951 "ml_code_util.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__RetTypes_32, 1) = ((MR_Box) (ml_backend__ml_code_util__RetTypes0_21));
#line 951 "ml_code_util.m"
                }
#line 948 "ml_code_util.m"
              }
#line 947 "ml_code_util.m"
              break;
#line 947 "ml_code_util.m"
          }
#line 2015 "ml_backend.ml_code_util.c"
        }
#line 2017 "ml_backend.ml_code_util.c"
        break;
#line 2019 "ml_backend.ml_code_util.c"
      case (MR_Integer) 2:
#line 2021 "ml_backend.ml_code_util.c"
        {
#line 2023 "ml_backend.ml_code_util.c"
          MR_Word ml_backend__ml_code_util__ContType_33;
#line 2025 "ml_backend.ml_code_util.c"
          MR_Word ml_backend__ml_code_util__ContArg_36;
#line 2027 "ml_backend.ml_code_util.c"
          MR_Word ml_backend__ml_code_util__NestedFunctions_41;
#line 2029 "ml_backend.ml_code_util.c"
          MR_Word ml_backend__ml_code_util__CopyOut_76;
#line 2031 "ml_backend.ml_code_util.c"
          MR_Word ml_backend__ml_code_util__FuncArgs0_77;
#line 2033 "ml_backend.ml_code_util.c"
          MR_Word ml_backend__ml_code_util__RetTypes0_78;

#line 2126 "ml_code_util.m"
          {
#line 2126 "ml_code_util.m"
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_code_util__Globals_18, (MR_Integer) 256, &ml_backend__ml_code_util__CopyOut_76);
          }
#line 921 "ml_code_util.m"
          {
#line 921 "ml_code_util.m"
            ml_backend__ml_code_util__ml_gen_arg_decls_9_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__HeadVarNames_11, ml_backend__ml_code_util__HeadTypes_12, ml_backend__ml_code_util__HeadModes_13, ml_backend__ml_code_util__CopyOut_76, &ml_backend__ml_code_util__FuncArgs0_77, &ml_backend__ml_code_util__RetTypes0_78, ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_0_42, ml_backend__ml_code_util__STATE_VARIABLE_MaybeInfo_43);
          }
#line 960 "ml_code_util.m"
#line 960 "ml_code_util.m"
          switch (ml_backend__ml_code_util__CopyOut_76) {
#line 960 "ml_code_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 960 "ml_code_util.m"
            case (MR_Integer) 0:
#line 961 "ml_code_util.m"
              {
#line 962 "ml_code_util.m"
                ml_backend__ml_code_util__ContType_33 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[23]);
#line 963 "ml_code_util.m"
                ml_backend__ml_code_util__RetTypes_32 = ml_backend__ml_code_util__RetTypes0_78;
#line 961 "ml_code_util.m"
              }
#line 960 "ml_code_util.m"
              break;
#line 960 "ml_code_util.m"
            case (MR_Integer) 1:
#line 957 "ml_code_util.m"
              {
#line 958 "ml_code_util.m"
                {
#line 958 "ml_code_util.m"
                  ml_backend__ml_code_util__ContType_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "ml_code_util.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContType_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 958 "ml_code_util.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContType_33, 1) = ((MR_Box) (ml_backend__ml_code_util__RetTypes0_78));
#line 958 "ml_code_util.m"
                }
#line 959 "ml_code_util.m"
                ml_backend__ml_code_util__RetTypes_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 957 "ml_code_util.m"
              }
#line 960 "ml_code_util.m"
              break;
#line 960 "ml_code_util.m"
          }
#line 969 "ml_code_util.m"
          {
#line 969 "ml_code_util.m"
            ml_backend__ml_code_util__ContArg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 969 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ContArg_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[3])));
#line 969 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ContArg_36, 1) = ((MR_Box) (ml_backend__ml_code_util__ContType_33));
#line 969 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ContArg_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 969 "ml_code_util.m"
          }
#line 981 "ml_code_util.m"
          {
#line 981 "ml_code_util.m"
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_code_util__Globals_18, (MR_Integer) 254, &ml_backend__ml_code_util__NestedFunctions_41);
          }
#line 986 "ml_code_util.m"
#line 986 "ml_code_util.m"
          switch (ml_backend__ml_code_util__NestedFunctions_41) {
#line 986 "ml_code_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 986 "ml_code_util.m"
            case (MR_Integer) 0:
#line 987 "ml_code_util.m"
              {
#line 987 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__V_55_55;

#line 988 "ml_code_util.m"
                {
#line 988 "ml_code_util.m"
                  ml_backend__ml_code_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 988 "ml_code_util.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_55_55, 0) = ((MR_Box) (ml_backend__ml_code_util__ContArg_36));
#line 988 "ml_code_util.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[24])));
#line 988 "ml_code_util.m"
                }
#line 988 "ml_code_util.m"
                {
#line 988 "ml_code_util.m"
                  ml_backend__ml_code_util__FuncArgs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__ml_code_util__FuncArgs0_77, ml_backend__ml_code_util__V_55_55);
                }
#line 987 "ml_code_util.m"
              }
#line 986 "ml_code_util.m"
              break;
#line 986 "ml_code_util.m"
            case (MR_Integer) 1:
#line 984 "ml_code_util.m"
              {
#line 984 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__V_58_58;

#line 985 "ml_code_util.m"
                {
#line 985 "ml_code_util.m"
                  ml_backend__ml_code_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "ml_code_util.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_58_58, 0) = ((MR_Box) (ml_backend__ml_code_util__ContArg_36));
#line 985 "ml_code_util.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 985 "ml_code_util.m"
                }
#line 985 "ml_code_util.m"
                {
#line 985 "ml_code_util.m"
                  ml_backend__ml_code_util__FuncArgs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__ml_code_util__FuncArgs0_77, ml_backend__ml_code_util__V_58_58);
                }
#line 984 "ml_code_util.m"
              }
#line 986 "ml_code_util.m"
              break;
#line 986 "ml_code_util.m"
          }
#line 2161 "ml_backend.ml_code_util.c"
        }
#line 2163 "ml_backend.ml_code_util.c"
        break;
#line 2165 "ml_backend.ml_code_util.c"
    }
#line 991 "ml_code_util.m"
    {
#line 991 "ml_code_util.m"
      MR_Word base;
#line 991 "ml_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 991 "ml_code_util.m"
      *ml_backend__ml_code_util__FuncParams_16 = base;
#line 991 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__FuncArgs_26));
#line 991 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__RetTypes_32));
#line 991 "ml_code_util.m"
    }
#line 918 "ml_code_util.m"
  }
#line 912 "ml_code_util.m"
}

#line 547 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__fixup_builtin_module_1_f_0(
#line 547 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleName0_3)
#line 547 "ml_code_util.m"
{
#line 2135 "ml_code_util.m"
  {
#line 2135 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__ModuleName0_3)) == (MR_mktag((MR_Integer) 0)));
#line 2135 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleName_4;
#line 2135 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__V_5_5;

#line 2135 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 2135 "ml_code_util.m"
      {
#line 2135 "ml_code_util.m"
        ml_backend__ml_code_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ModuleName0_3, (MR_Integer) 0)));
#line 2135 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = (strcmp(ml_backend__ml_code_util__V_5_5, (MR_String) "") == 0);
#line 2135 "ml_code_util.m"
      }
#line 2135 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 2136 "ml_code_util.m"
      {
#line 2136 "ml_code_util.m"
        ml_backend__ml_code_util__ModuleName_4 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      }
#line 2135 "ml_code_util.m"
    else
#line 2138 "ml_code_util.m"
      ml_backend__ml_code_util__ModuleName_4 = ml_backend__ml_code_util__ModuleName0_3;
#line 2135 "ml_code_util.m"
    return ml_backend__ml_code_util__ModuleName_4;
#line 2135 "ml_code_util.m"
  }
#line 547 "ml_code_util.m"
}

#line 539 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__get_copy_out_option_2_f_0(
#line 539 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Globals_4,
#line 539 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CodeModel_5)
#line 539 "ml_code_util.m"
{
#line 2125 "ml_code_util.m"
  {
#line 2125 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 2125 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__CopyOut_6;

#line 2125 "ml_code_util.m"
#line 2125 "ml_code_util.m"
    switch (ml_backend__ml_code_util__CodeModel_5) {
#line 2125 "ml_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2125 "ml_code_util.m"
      case (MR_Integer) 0:
#line 2125 "ml_code_util.m"
      case (MR_Integer) 1:
#line 2130 "ml_code_util.m"
        {
#line 2131 "ml_code_util.m"
          {
#line 2131 "ml_code_util.m"
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_code_util__Globals_4, (MR_Integer) 255, &ml_backend__ml_code_util__CopyOut_6);
          }
#line 2130 "ml_code_util.m"
        }
#line 2125 "ml_code_util.m"
        break;
#line 2125 "ml_code_util.m"
      case (MR_Integer) 2:
#line 2125 "ml_code_util.m"
        {
#line 2126 "ml_code_util.m"
          {
#line 2126 "ml_code_util.m"
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_code_util__Globals_4, (MR_Integer) 256, &ml_backend__ml_code_util__CopyOut_6);
          }
#line 2125 "ml_code_util.m"
        }
#line 2125 "ml_code_util.m"
        break;
#line 2125 "ml_code_util.m"
    }
#line 2125 "ml_code_util.m"
    return ml_backend__ml_code_util__CopyOut_6;
#line 2125 "ml_code_util.m"
  }
#line 539 "ml_code_util.m"
}

#line 526 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(
#line 526 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__OutVars_11,
#line 526 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__FieldTypes_12,
#line 526 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__FieldIds_13,
#line 526 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VectorCommon_14,
#line 526 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__StructType_15,
#line 526 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__IndexRval_16,
#line 526 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_17,
#line 526 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Statements_18,
#line 526 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_29,
#line 526 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_30)
#line 526 "ml_code_util.m"
{
#line 2095 "ml_code_util.m"
  {
#line 2095 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__OutVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 2096 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 2096 "ml_code_util.m"
      {
#line 2097 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__FieldTypes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2096 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 2098 "ml_code_util.m"
          ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__FieldIds_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2096 "ml_code_util.m"
      }
#line 2095 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 2100 "ml_code_util.m"
      {
#line 2100 "ml_code_util.m"
        *ml_backend__ml_code_util__Statements_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2100 "ml_code_util.m"
        *ml_backend__ml_code_util__STATE_VARIABLE_Info_30 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_29;
#line 2100 "ml_code_util.m"
      }
#line 2095 "ml_code_util.m"
    else
#line 2101 "ml_code_util.m"
      {
#line 2101 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__HeadOutVar_20;
#line 2101 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__TailOutVars_21;
#line 2101 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__HeadFieldType_22;
#line 2101 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__TailFieldTypes_23;
#line 2101 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__HeadFieldId_24;
#line 2101 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__TailFieldIds_25;

#line 2102 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__OutVars_11)) == (MR_mktag((MR_Integer) 1)));
#line 2102 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 2102 "ml_code_util.m"
          {
#line 2102 "ml_code_util.m"
            ml_backend__ml_code_util__HeadOutVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__OutVars_11, (MR_Integer) 0)));
#line 2102 "ml_code_util.m"
            ml_backend__ml_code_util__TailOutVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__OutVars_11, (MR_Integer) 1)));
#line 2103 "ml_code_util.m"
            ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__FieldTypes_12)) == (MR_mktag((MR_Integer) 1)));
#line 2103 "ml_code_util.m"
            if (ml_backend__ml_code_util__succeeded)
#line 2103 "ml_code_util.m"
              {
#line 2103 "ml_code_util.m"
                ml_backend__ml_code_util__HeadFieldType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__FieldTypes_12, (MR_Integer) 0)));
#line 2103 "ml_code_util.m"
                ml_backend__ml_code_util__TailFieldTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__FieldTypes_12, (MR_Integer) 1)));
#line 2104 "ml_code_util.m"
                ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__FieldIds_13)) == (MR_mktag((MR_Integer) 1)));
#line 2104 "ml_code_util.m"
                if (ml_backend__ml_code_util__succeeded)
#line 2104 "ml_code_util.m"
                  {
#line 2104 "ml_code_util.m"
                    ml_backend__ml_code_util__HeadFieldId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__FieldIds_13, (MR_Integer) 0)));
#line 2104 "ml_code_util.m"
                    ml_backend__ml_code_util__TailFieldIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__FieldIds_13, (MR_Integer) 1)));
#line 2104 "ml_code_util.m"
                  }
#line 2103 "ml_code_util.m"
              }
#line 2102 "ml_code_util.m"
          }
#line 2101 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 2106 "ml_code_util.m"
          {
#line 2106 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__HeadOutVarLval_26;
#line 2106 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__HeadStatement_27;
#line 2106 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__TailStatements_28;
#line 2106 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__BaseRval_47;
#line 2106 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__FieldLval_48;
#line 2106 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__AtomicStmt_49;
#line 2106 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__Stmt_50;
#line 2106 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__V_53_53;

#line 2106 "ml_code_util.m"
            {
#line 2106 "ml_code_util.m"
              ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_29, ml_backend__ml_code_util__HeadOutVar_20, &ml_backend__ml_code_util__HeadOutVarLval_26);
            }
#line 2087 "ml_code_util.m"
            {
#line 2087 "ml_code_util.m"
              ml_backend__ml_code_util__BaseRval_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__BaseRval_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2087 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__BaseRval_47, 1) = ((MR_Box) (ml_backend__ml_code_util__VectorCommon_14));
#line 2087 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__BaseRval_47, 2) = ((MR_Box) (ml_backend__ml_code_util__IndexRval_16));
#line 2087 "ml_code_util.m"
            }
#line 2088 "ml_code_util.m"
            {
#line 2088 "ml_code_util.m"
              ml_backend__ml_code_util__FieldLval_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2088 "ml_code_util.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[16])));
#line 2088 "ml_code_util.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_48, 1) = ((MR_Box) (ml_backend__ml_code_util__BaseRval_47));
#line 2088 "ml_code_util.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_48, 2) = ((MR_Box) (ml_backend__ml_code_util__HeadFieldId_24));
#line 2088 "ml_code_util.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_48, 3) = ((MR_Box) (ml_backend__ml_code_util__HeadFieldType_22));
#line 2088 "ml_code_util.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_48, 4) = ((MR_Box) (ml_backend__ml_code_util__StructType_15));
#line 2088 "ml_code_util.m"
            }
#line 2089 "ml_code_util.m"
            {
#line 2089 "ml_code_util.m"
              ml_backend__ml_code_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2089 "ml_code_util.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_53_53, 0) = ((MR_Box) (ml_backend__ml_code_util__FieldLval_48));
#line 2089 "ml_code_util.m"
            }
#line 2089 "ml_code_util.m"
            {
#line 2089 "ml_code_util.m"
              ml_backend__ml_code_util__AtomicStmt_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2089 "ml_code_util.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__AtomicStmt_49, 0) = ((MR_Box) (ml_backend__ml_code_util__HeadOutVarLval_26));
#line 2089 "ml_code_util.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__AtomicStmt_49, 1) = ((MR_Box) (ml_backend__ml_code_util__V_53_53));
#line 2089 "ml_code_util.m"
            }
#line 2090 "ml_code_util.m"
            {
#line 2090 "ml_code_util.m"
              ml_backend__ml_code_util__Stmt_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2090 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 2090 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_50, 1) = ((MR_Box) (ml_backend__ml_code_util__AtomicStmt_49));
#line 2090 "ml_code_util.m"
            }
#line 2091 "ml_code_util.m"
            {
#line 2091 "ml_code_util.m"
              ml_backend__ml_code_util__HeadStatement_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2091 "ml_code_util.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadStatement_27, 0) = ((MR_Box) (ml_backend__ml_code_util__Stmt_50));
#line 2091 "ml_code_util.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadStatement_27, 1) = ((MR_Box) (ml_backend__ml_code_util__Context_17));
#line 2091 "ml_code_util.m"
            }
#line 2110 "ml_code_util.m"
            {
#line 2110 "ml_code_util.m"
              ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_code_util__TailOutVars_21, ml_backend__ml_code_util__TailFieldTypes_23, ml_backend__ml_code_util__TailFieldIds_25, ml_backend__ml_code_util__VectorCommon_14, ml_backend__ml_code_util__StructType_15, ml_backend__ml_code_util__IndexRval_16, ml_backend__ml_code_util__Context_17, &ml_backend__ml_code_util__TailStatements_28, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_29, ml_backend__ml_code_util__STATE_VARIABLE_Info_30);
            }
#line 2113 "ml_code_util.m"
            {
#line 2113 "ml_code_util.m"
              MR_Word base;
#line 2113 "ml_code_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2113 "ml_code_util.m"
              *ml_backend__ml_code_util__Statements_18 = base;
#line 2113 "ml_code_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__HeadStatement_27));
#line 2113 "ml_code_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__TailStatements_28));
#line 2113 "ml_code_util.m"
            }
#line 2106 "ml_code_util.m"
          }
#line 2101 "ml_code_util.m"
        else
#line 2115 "ml_code_util.m"
          {
#line 2115 "ml_code_util.m"
            {
#line 2115 "ml_code_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_generate_field_assigns\'/10", (MR_String) "mismatched lists");
#line 2115 "ml_code_util.m"
              return;
            }
#line 2115 "ml_code_util.m"
          }
#line 2101 "ml_code_util.m"
      }
#line 2095 "ml_code_util.m"
  }
#line 526 "ml_code_util.m"
}

#line 521 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(
#line 521 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__OutVarLval_11,
#line 521 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__FieldType_12,
#line 521 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__FieldId_13,
#line 521 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VectorCommon_14,
#line 521 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__StructType_15,
#line 521 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__IndexRval_16,
#line 521 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_17,
#line 521 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Statement_18,
#line 521 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_24,
#line 521 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_25)
#line 521 "ml_code_util.m"
{
#line 2086 "ml_code_util.m"
  {
#line 2086 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 2086 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__BaseRval_20;
#line 2086 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__FieldLval_21;
#line 2086 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__AtomicStmt_22;
#line 2086 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Stmt_23;
#line 2086 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_28_28;

#line 2087 "ml_code_util.m"
    {
#line 2087 "ml_code_util.m"
      ml_backend__ml_code_util__BaseRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__BaseRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2087 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__BaseRval_20, 1) = ((MR_Box) (ml_backend__ml_code_util__VectorCommon_14));
#line 2087 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__BaseRval_20, 2) = ((MR_Box) (ml_backend__ml_code_util__IndexRval_16));
#line 2087 "ml_code_util.m"
    }
#line 2088 "ml_code_util.m"
    {
#line 2088 "ml_code_util.m"
      ml_backend__ml_code_util__FieldLval_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2088 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[16])));
#line 2088 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_21, 1) = ((MR_Box) (ml_backend__ml_code_util__BaseRval_20));
#line 2088 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_21, 2) = ((MR_Box) (ml_backend__ml_code_util__FieldId_13));
#line 2088 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_21, 3) = ((MR_Box) (ml_backend__ml_code_util__FieldType_12));
#line 2088 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__FieldLval_21, 4) = ((MR_Box) (ml_backend__ml_code_util__StructType_15));
#line 2088 "ml_code_util.m"
    }
#line 2089 "ml_code_util.m"
    {
#line 2089 "ml_code_util.m"
      ml_backend__ml_code_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2089 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_28_28, 0) = ((MR_Box) (ml_backend__ml_code_util__FieldLval_21));
#line 2089 "ml_code_util.m"
    }
#line 2089 "ml_code_util.m"
    {
#line 2089 "ml_code_util.m"
      ml_backend__ml_code_util__AtomicStmt_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2089 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__AtomicStmt_22, 0) = ((MR_Box) (ml_backend__ml_code_util__OutVarLval_11));
#line 2089 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__AtomicStmt_22, 1) = ((MR_Box) (ml_backend__ml_code_util__V_28_28));
#line 2089 "ml_code_util.m"
    }
#line 2090 "ml_code_util.m"
    {
#line 2090 "ml_code_util.m"
      ml_backend__ml_code_util__Stmt_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2090 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 2090 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_23, 1) = ((MR_Box) (ml_backend__ml_code_util__AtomicStmt_22));
#line 2090 "ml_code_util.m"
    }
#line 2091 "ml_code_util.m"
    {
#line 2091 "ml_code_util.m"
      MR_Word base;
#line 2091 "ml_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2091 "ml_code_util.m"
      *ml_backend__ml_code_util__Statement_18 = base;
#line 2091 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Stmt_23));
#line 2091 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Context_17));
#line 2091 "ml_code_util.m"
    }
#line 2086 "ml_code_util.m"
    *ml_backend__ml_code_util__STATE_VARIABLE_Info_25 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_24;
#line 2086 "ml_code_util.m"
  }
#line 521 "ml_code_util.m"
}

#line 2065 "ml_code_util.m"
static void MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0_1(
#line 2065 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 2065 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1,
#line 2065 "ml_code_util.m"
  MR_Box * ml_backend__ml_code_util__wrapper_arg_2)
#line 2065 "ml_code_util.m"
{
#line 2065 "ml_code_util.m"
  {
#line 2065 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
#line 2065 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__conv0_Rval_6;

#line 2065 "ml_code_util.m"
    {
#line 2065 "ml_code_util.m"
      ml_backend__ml_code_util__lookup_ground_rval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_1), &ml_backend__ml_code_util__conv0_Rval_6);
    }
#line 2065 "ml_code_util.m"
    *ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_Rval_6));
#line 2065 "ml_code_util.m"
  }
#line 2065 "ml_code_util.m"
}

#line 518 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(
#line 518 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Vars_6,
#line 518 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Goal_7,
#line 518 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Soln_8,
#line 518 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_14,
#line 518 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_15)
#line 518 "ml_code_util.m"
{
#line 2061 "ml_code_util.m"
  {
#line 2061 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 2061 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__InitConstVarMap_10;
#line 2061 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__FinalConstVarMap_13;
#line 2061 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_17_17;
#line 2061 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_18_18;
#line 2063 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___Decls_11;
#line 2063 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___Statements_12;

#line 2062 "ml_code_util.m"
    {
#line 2062 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_14, &ml_backend__ml_code_util__InitConstVarMap_10);
    }
#line 2063 "ml_code_util.m"
    {
#line 2063 "ml_code_util.m"
      ml_backend__ml_code_gen__ml_gen_goal_6_p_0((MR_Integer) 0, ml_backend__ml_code_util__Goal_7, &ml_backend__ml_code_util___Decls_11, &ml_backend__ml_code_util___Statements_12, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_14, &ml_backend__ml_code_util__STATE_VARIABLE_Info_17_17);
    }
#line 2064 "ml_code_util.m"
    {
#line 2064 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_17_17, &ml_backend__ml_code_util__FinalConstVarMap_13);
    }
#line 2065 "ml_code_util.m"
    {
#line 2065 "ml_code_util.m"
      ml_backend__ml_code_util__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2065 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_18_18, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[4]));
#line 2065 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_18_18, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0_1));
#line 2065 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2065 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_18_18, 3) = ((MR_Box) (ml_backend__ml_code_util__FinalConstVarMap_13));
#line 2065 "ml_code_util.m"
    }
#line 2065 "ml_code_util.m"
    {
#line 2065 "ml_code_util.m"
      mercury__list__map_3_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_code_util__V_18_18, ml_backend__ml_code_util__Vars_6, ml_backend__ml_code_util__Soln_8);
    }
#line 2066 "ml_code_util.m"
    {
#line 2066 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(ml_backend__ml_code_util__InitConstVarMap_10, ml_backend__ml_code_util__STATE_VARIABLE_Info_17_17, ml_backend__ml_code_util__STATE_VARIABLE_Info_15);
    }
#line 2061 "ml_code_util.m"
  }
#line 518 "ml_code_util.m"
}

#line 515 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arms_5_p_0(
#line 515 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
#line 515 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__2_2,
#line 515 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__HeadVar__3_3,
#line 515 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4,
#line 515 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_5)
#line 515 "ml_code_util.m"
{
#line 2056 "ml_code_util.m"
  {
#line 2056 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 2056 "ml_code_util.m"
    if ((ml_backend__ml_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2056 "ml_code_util.m"
      {
#line 2056 "ml_code_util.m"
        *ml_backend__ml_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2056 "ml_code_util.m"
        *ml_backend__ml_code_util__STATE_VARIABLE_Info_5 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4;
#line 2056 "ml_code_util.m"
      }
#line 2056 "ml_code_util.m"
    else
#line 2057 "ml_code_util.m"
      {
#line 2057 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 2057 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Goals_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2057 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Soln_13;
#line 2057 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Solns_14;
#line 2057 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_18_18;

#line 2058 "ml_code_util.m"
        {
#line 2058 "ml_code_util.m"
          ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(ml_backend__ml_code_util__HeadVar__1_1, ml_backend__ml_code_util__Goal_11, &ml_backend__ml_code_util__Soln_13, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4, &ml_backend__ml_code_util__STATE_VARIABLE_Info_18_18);
        }
#line 2059 "ml_code_util.m"
        {
#line 2059 "ml_code_util.m"
          ml_backend__ml_code_util__ml_generate_constants_for_arms_5_p_0(ml_backend__ml_code_util__HeadVar__1_1, ml_backend__ml_code_util__Goals_12, &ml_backend__ml_code_util__Solns_14, ml_backend__ml_code_util__STATE_VARIABLE_Info_18_18, ml_backend__ml_code_util__STATE_VARIABLE_Info_5);
        }
#line 2057 "ml_code_util.m"
        {
#line 2057 "ml_code_util.m"
          MR_Word base;
#line 2057 "ml_code_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "ml_code_util.m"
          *ml_backend__ml_code_util__HeadVar__3_3 = base;
#line 2057 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Soln_13));
#line 2057 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Solns_14));
#line 2057 "ml_code_util.m"
        }
#line 2057 "ml_code_util.m"
      }
#line 2056 "ml_code_util.m"
  }
#line 515 "ml_code_util.m"
}

#line 508 "ml_code_util.m"
MR_Integer MR_CALL 
ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_f_0(void)
#line 508 "ml_code_util.m"
{
#line 2049 "ml_code_util.m"
  {
#line 2049 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 2049 "ml_code_util.m"
    return (MR_Integer) 4;
#line 2049 "ml_code_util.m"
  }
#line 508 "ml_code_util.m"
}

#line 503 "ml_code_util.m"
MR_Integer MR_CALL 
ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_f_0(void)
#line 503 "ml_code_util.m"
{
#line 2031 "ml_code_util.m"
  {
#line 2031 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 2031 "ml_code_util.m"
    return (MR_Integer) 0;
#line 2031 "ml_code_util.m"
  }
#line 503 "ml_code_util.m"
}

#line 498 "ml_code_util.m"
MR_Integer MR_CALL 
ml_backend__ml_code_util__ml_closure_arg_offset_0_f_0(void)
#line 498 "ml_code_util.m"
{
#line 2024 "ml_code_util.m"
  {
#line 2024 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 2024 "ml_code_util.m"
    return (MR_Integer) 2;
#line 2024 "ml_code_util.m"
  }
#line 498 "ml_code_util.m"
}

#line 487 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_p_0(
#line 487 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__HeadVar__1_1)
#line 487 "ml_code_util.m"
{
#line 2001 "ml_code_util.m"
  {
#line 2001 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 2001 "ml_code_util.m"
    *ml_backend__ml_code_util__HeadVar__1_1 = (MR_Word) &ml_backend__ml_code_util_scalar_common_2[4];
#line 2001 "ml_code_util.m"
  }
#line 487 "ml_code_util.m"
}

#line 482 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(
#line 482 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_3,
#line 482 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__HeadVar__2_2)
#line 482 "ml_code_util.m"
{
#line 1997 "ml_code_util.m"
  {
#line 1997 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1997 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__EnvPtrLval_4;
#line 1997 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleName_13;
#line 1997 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_ModuleName_14;
#line 1997 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_Var_15;

#line 1312 "ml_code_util.m"
    {
#line 1312 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_3, &ml_backend__ml_code_util__ModuleName_13);
    }
#line 1313 "ml_code_util.m"
    {
#line 1313 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_13);
    }
#line 1314 "ml_code_util.m"
    {
#line 1314 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_15, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_14));
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_15, 2) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[22]));
#line 1314 "ml_code_util.m"
    }
#line 1315 "ml_code_util.m"
    {
#line 1315 "ml_code_util.m"
      ml_backend__ml_code_util__EnvPtrLval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnvPtrLval_4, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_15));
#line 1315 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnvPtrLval_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1315 "ml_code_util.m"
    }
#line 1997 "ml_code_util.m"
    {
#line 1997 "ml_code_util.m"
      MR_Word base;
#line 1997 "ml_code_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1997 "ml_code_util.m"
      *ml_backend__ml_code_util__HeadVar__2_2 = base;
#line 1997 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__EnvPtrLval_4));
#line 1997 "ml_code_util.m"
    }
#line 1997 "ml_code_util.m"
  }
#line 482 "ml_code_util.m"
}

#line 1939 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_p_0_2(
#line 1939 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1939 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
#line 1939 "ml_code_util.m"
{
#line 1939 "ml_code_util.m"
  {
#line 1939 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
#line 1939 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
#line 1939 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__conv1_LambdaHeadVar__2_76;

#line 1939 "ml_code_util.m"
    {
#line 1939 "ml_code_util.m"
      ml_backend__ml_code_util__conv1_LambdaHeadVar__2_76 = ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1939__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
#line 1939 "ml_code_util.m"
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv1_LambdaHeadVar__2_76));
#line 1939 "ml_code_util.m"
    return ml_backend__ml_code_util__wrapper_arg_2;
#line 1939 "ml_code_util.m"
  }
#line 1939 "ml_code_util.m"
}

#line 1905 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_p_0_1(
#line 1905 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1905 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
#line 1905 "ml_code_util.m"
{
#line 1905 "ml_code_util.m"
  {
#line 1905 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
#line 1905 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
#line 1905 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__conv0_LambdaHeadVar__2_67;

#line 1905 "ml_code_util.m"
    {
#line 1905 "ml_code_util.m"
      ml_backend__ml_code_util__conv0_LambdaHeadVar__2_67 = ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont_indirectly__1905__1_1_f_0(((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
#line 1905 "ml_code_util.m"
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_LambdaHeadVar__2_67));
#line 1905 "ml_code_util.m"
    return ml_backend__ml_code_util__wrapper_arg_2;
#line 1905 "ml_code_util.m"
  }
#line 1905 "ml_code_util.m"
}

#line 468 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_p_0(
#line 468 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_5,
#line 468 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Statement_6,
#line 468 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_63,
#line 468 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_64)
#line 468 "ml_code_util.m"
{
#line 1896 "ml_code_util.m"
  {
#line 1896 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeCtorInfo_116_116;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__SuccCont_8;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ContinuationFuncRval_9;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__EnvPtrRval_10;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgTypes0_11;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgLvals0_12;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgRvals0_13;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__UseNestedFuncs_15;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgTypes_16;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgRvals_17;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__RetTypes_18;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Signature_19;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ObjectRval_20;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__RetLvals_21;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_Context_23;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredModule_24;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_Module_25;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__InnerFuncParams0_26;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__InnerArgs0_27;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Rets_28;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__InnerArgRvals_29;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__InnerFuncArgType_34;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PassedContArg_37;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__InnerFuncRval_38;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__InnerFuncParams_39;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__InnerStmt_40;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__InnerStatement_41;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Defn_42;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ProxySignature_43;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ProxyArgRvals_44;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_74_74;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_88_88;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_89_89;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_91_91;
#line 1896 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_93_93;
#line 1971 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredLabel_49;
#line 1971 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__ProcId_50;
#line 1971 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__SeqNum_51;
#line 1972 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__EntityName_45;
#line 1972 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__EntityDefn_48;
#line 1972 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_94_94;
#line 1972 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_95_95;
#line 1972 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_46_46;
#line 1972 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_47_47;
#line 1973 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_52_52;
#line 1974 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_53_53;
#line 1974 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_54_54;
#line 1974 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_56_56;
#line 1974 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_57_57;
#line 1974 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_55_55;

#line 1902 "ml_code_util.m"
    {
#line 1902 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_63, &ml_backend__ml_code_util__SuccCont_8);
    }
#line 1903 "ml_code_util.m"
    ml_backend__ml_code_util__ContinuationFuncRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccCont_8, (MR_Integer) 0)));
#line 1903 "ml_code_util.m"
    ml_backend__ml_code_util__EnvPtrRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccCont_8, (MR_Integer) 1)));
#line 1903 "ml_code_util.m"
    ml_backend__ml_code_util__ArgTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccCont_8, (MR_Integer) 2)));
#line 1903 "ml_code_util.m"
    ml_backend__ml_code_util__ArgLvals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccCont_8, (MR_Integer) 3)));
#line 3161 "ml_backend.ml_code_util.c"
    ml_backend__ml_code_util__TypeCtorInfo_116_116 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
#line 1905 "ml_code_util.m"
    {
#line 1905 "ml_code_util.m"
      ml_backend__ml_code_util__ArgRvals0_13 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_code_util__TypeCtorInfo_116_116, (MR_Word) &ml_backend__ml_code_util_scalar_common_2[7], ml_backend__ml_code_util__ArgLvals0_12);
    }
#line 1906 "ml_code_util.m"
    {
#line 1906 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_63, &ml_backend__ml_code_util__UseNestedFuncs_15);
    }
#line 1911 "ml_code_util.m"
#line 1911 "ml_code_util.m"
    switch (ml_backend__ml_code_util__UseNestedFuncs_15) {
#line 1911 "ml_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1911 "ml_code_util.m"
      case (MR_Integer) 0:
#line 1912 "ml_code_util.m"
        {
#line 1912 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_71_71;

#line 1913 "ml_code_util.m"
          {
#line 1913 "ml_code_util.m"
            ml_backend__ml_code_util__ArgTypes_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_code_util__ArgTypes0_11, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[13]));
          }
#line 1914 "ml_code_util.m"
          {
#line 1914 "ml_code_util.m"
            ml_backend__ml_code_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_71_71, 0) = ((MR_Box) (ml_backend__ml_code_util__EnvPtrRval_10));
#line 1914 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1914 "ml_code_util.m"
          }
#line 1914 "ml_code_util.m"
          {
#line 1914 "ml_code_util.m"
            ml_backend__ml_code_util__ArgRvals_17 = mercury__list__f_43_43_2_f_0(ml_backend__ml_code_util__TypeCtorInfo_116_116, ml_backend__ml_code_util__ArgRvals0_13, ml_backend__ml_code_util__V_71_71);
          }
#line 1912 "ml_code_util.m"
        }
#line 1911 "ml_code_util.m"
        break;
#line 1911 "ml_code_util.m"
      case (MR_Integer) 1:
#line 1908 "ml_code_util.m"
        {
#line 1909 "ml_code_util.m"
          ml_backend__ml_code_util__ArgTypes_16 = ml_backend__ml_code_util__ArgTypes0_11;
#line 1910 "ml_code_util.m"
          ml_backend__ml_code_util__ArgRvals_17 = ml_backend__ml_code_util__ArgRvals0_13;
#line 1908 "ml_code_util.m"
        }
#line 1911 "ml_code_util.m"
        break;
#line 1911 "ml_code_util.m"
    }
#line 1916 "ml_code_util.m"
    ml_backend__ml_code_util__RetTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1917 "ml_code_util.m"
    {
#line 1917 "ml_code_util.m"
      ml_backend__ml_code_util__Signature_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1917 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Signature_19, 0) = ((MR_Box) (ml_backend__ml_code_util__ArgTypes_16));
#line 1917 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Signature_19, 1) = ((MR_Box) (ml_backend__ml_code_util__RetTypes_18));
#line 1917 "ml_code_util.m"
    }
#line 1918 "ml_code_util.m"
    ml_backend__ml_code_util__ObjectRval_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1919 "ml_code_util.m"
    ml_backend__ml_code_util__RetLvals_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1922 "ml_code_util.m"
    {
#line 1922 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_Context_23 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_5);
    }
#line 1923 "ml_code_util.m"
    {
#line 1923 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_63, &ml_backend__ml_code_util__PredModule_24);
    }
#line 1924 "ml_code_util.m"
    {
#line 1924 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_Module_25 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__PredModule_24);
    }
#line 1937 "ml_code_util.m"
    {
#line 1937 "ml_code_util.m"
      ml_backend__ml_call_gen__ml_gen_cont_params_4_p_0(ml_backend__ml_code_util__ArgTypes0_11, &ml_backend__ml_code_util__InnerFuncParams0_26, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_63, ml_backend__ml_code_util__STATE_VARIABLE_Info_64);
    }
#line 1938 "ml_code_util.m"
    ml_backend__ml_code_util__InnerArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__InnerFuncParams0_26, (MR_Integer) 0)));
#line 1938 "ml_code_util.m"
    ml_backend__ml_code_util__Rets_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__InnerFuncParams0_26, (MR_Integer) 1)));
#line 1939 "ml_code_util.m"
    {
#line 1939 "ml_code_util.m"
      ml_backend__ml_code_util__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1939 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_74_74, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[3]));
#line 1939 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_74_74, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_p_0_2));
#line 1939 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1939 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_74_74, 3) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Module_25));
#line 1939 "ml_code_util.m"
    }
#line 1939 "ml_code_util.m"
    {
#line 1939 "ml_code_util.m"
      ml_backend__ml_code_util__InnerArgRvals_29 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__ml_code_util__TypeCtorInfo_116_116, ml_backend__ml_code_util__V_74_74, ml_backend__ml_code_util__InnerArgs0_27);
    }
#line 1949 "ml_code_util.m"
    {
#line 1949 "ml_code_util.m"
      ml_backend__ml_code_util__InnerFuncArgType_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1949 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__InnerFuncArgType_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1949 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__InnerFuncArgType_34, 1) = ((MR_Box) (ml_backend__ml_code_util__ArgTypes0_11));
#line 1949 "ml_code_util.m"
    }
#line 1954 "ml_code_util.m"
    {
#line 1954 "ml_code_util.m"
      ml_backend__ml_code_util__PassedContArg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1954 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__PassedContArg_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[15])));
#line 1954 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__PassedContArg_37, 1) = ((MR_Box) (ml_backend__ml_code_util__InnerFuncArgType_34));
#line 1954 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__PassedContArg_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1954 "ml_code_util.m"
    }
#line 1957 "ml_code_util.m"
    {
#line 1957 "ml_code_util.m"
      ml_backend__ml_code_util__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1957 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_89_89, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Module_25));
#line 1957 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_89_89, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1957 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_89_89, 2) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[21]));
#line 1957 "ml_code_util.m"
    }
#line 1957 "ml_code_util.m"
    {
#line 1957 "ml_code_util.m"
      ml_backend__ml_code_util__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1957 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_88_88, 0) = ((MR_Box) (ml_backend__ml_code_util__V_89_89));
#line 1957 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_88_88, 1) = ((MR_Box) (ml_backend__ml_code_util__InnerFuncArgType_34));
#line 1957 "ml_code_util.m"
    }
#line 1957 "ml_code_util.m"
    {
#line 1957 "ml_code_util.m"
      ml_backend__ml_code_util__InnerFuncRval_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1957 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__InnerFuncRval_38, 0) = ((MR_Box) (ml_backend__ml_code_util__V_88_88));
#line 1957 "ml_code_util.m"
    }
#line 1959 "ml_code_util.m"
    {
#line 1959 "ml_code_util.m"
      ml_backend__ml_code_util__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_91_91, 0) = ((MR_Box) (ml_backend__ml_code_util__PassedContArg_37));
#line 1959 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_91_91, 1) = ((MR_Box) (ml_backend__ml_code_util__InnerArgs0_27));
#line 1959 "ml_code_util.m"
    }
#line 1959 "ml_code_util.m"
    {
#line 1959 "ml_code_util.m"
      ml_backend__ml_code_util__InnerFuncParams_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1959 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__InnerFuncParams_39, 0) = ((MR_Box) (ml_backend__ml_code_util__V_91_91));
#line 1959 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__InnerFuncParams_39, 1) = ((MR_Box) (ml_backend__ml_code_util__Rets_28));
#line 1959 "ml_code_util.m"
    }
#line 1961 "ml_code_util.m"
    {
#line 1961 "ml_code_util.m"
      ml_backend__ml_code_util__InnerStmt_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__InnerStmt_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1961 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__InnerStmt_40, 1) = ((MR_Box) (ml_backend__ml_code_util__Signature_19));
#line 1961 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__InnerStmt_40, 2) = ((MR_Box) (ml_backend__ml_code_util__InnerFuncRval_38));
#line 1961 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__InnerStmt_40, 3) = ((MR_Box) (ml_backend__ml_code_util__ObjectRval_20));
#line 1961 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__InnerStmt_40, 4) = ((MR_Box) (ml_backend__ml_code_util__InnerArgRvals_29));
#line 1961 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__InnerStmt_40, 5) = ((MR_Box) (ml_backend__ml_code_util__RetLvals_21));
#line 1961 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__InnerStmt_40, 6) = ((MR_Box) ((MR_Integer) 2));
#line 1961 "ml_code_util.m"
    }
#line 1963 "ml_code_util.m"
    {
#line 1963 "ml_code_util.m"
      ml_backend__ml_code_util__InnerStatement_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1963 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__InnerStatement_41, 0) = ((MR_Box) (ml_backend__ml_code_util__InnerStmt_40));
#line 1963 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__InnerStatement_41, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Context_23));
#line 1963 "ml_code_util.m"
    }
#line 1965 "ml_code_util.m"
    {
#line 1965 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_label_func_6_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_64, (MR_Integer) 1, ml_backend__ml_code_util__InnerFuncParams_39, ml_backend__ml_code_util__Context_5, ml_backend__ml_code_util__InnerStatement_41, &ml_backend__ml_code_util__Defn_42);
    }
#line 1968 "ml_code_util.m"
    {
#line 1968 "ml_code_util.m"
      ml_backend__ml_code_util__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1968 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_93_93, 0) = ((MR_Box) (ml_backend__ml_code_util__InnerFuncArgType_34));
#line 1968 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_93_93, 1) = ((MR_Box) (ml_backend__ml_code_util__ArgTypes_16));
#line 1968 "ml_code_util.m"
    }
#line 1968 "ml_code_util.m"
    {
#line 1968 "ml_code_util.m"
      ml_backend__ml_code_util__ProxySignature_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1968 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ProxySignature_43, 0) = ((MR_Box) (ml_backend__ml_code_util__V_93_93));
#line 1968 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ProxySignature_43, 1) = ((MR_Box) (ml_backend__ml_code_util__RetTypes_18));
#line 1968 "ml_code_util.m"
    }
#line 1970 "ml_code_util.m"
    {
#line 1970 "ml_code_util.m"
      ml_backend__ml_code_util__ProxyArgRvals_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1970 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__ProxyArgRvals_44, 0) = ((MR_Box) (ml_backend__ml_code_util__ContinuationFuncRval_9));
#line 1970 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__ProxyArgRvals_44, 1) = ((MR_Box) (ml_backend__ml_code_util__ArgRvals_17));
#line 1970 "ml_code_util.m"
    }
#line 1972 "ml_code_util.m"
    ml_backend__ml_code_util__EntityName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Defn_42, (MR_Integer) 0)));
#line 1972 "ml_code_util.m"
    ml_backend__ml_code_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Defn_42, (MR_Integer) 1)));
#line 1972 "ml_code_util.m"
    ml_backend__ml_code_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Defn_42, (MR_Integer) 2)));
#line 1972 "ml_code_util.m"
    ml_backend__ml_code_util__EntityDefn_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Defn_42, (MR_Integer) 3)));
#line 1973 "ml_code_util.m"
    ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__EntityName_45)) == (MR_mktag((MR_Integer) 2)));
#line 1973 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1973 "ml_code_util.m"
      {
#line 1973 "ml_code_util.m"
        ml_backend__ml_code_util__PredLabel_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__EntityName_45, (MR_Integer) 0)));
#line 1973 "ml_code_util.m"
        ml_backend__ml_code_util__ProcId_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__EntityName_45, (MR_Integer) 1)));
#line 1973 "ml_code_util.m"
        ml_backend__ml_code_util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__EntityName_45, (MR_Integer) 2)));
#line 1973 "ml_code_util.m"
        ml_backend__ml_code_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__EntityName_45, (MR_Integer) 3)));
#line 1973 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 1973 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1973 "ml_code_util.m"
          {
#line 1973 "ml_code_util.m"
            ml_backend__ml_code_util__SeqNum_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_94_94, (MR_Integer) 0)));
#line 1974 "ml_code_util.m"
            ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__EntityDefn_48)) == (MR_mktag((MR_Integer) 2)));
#line 1974 "ml_code_util.m"
            if (ml_backend__ml_code_util__succeeded)
#line 1974 "ml_code_util.m"
              {
#line 1974 "ml_code_util.m"
                ml_backend__ml_code_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__EntityDefn_48, (MR_Integer) 0)));
#line 1974 "ml_code_util.m"
                ml_backend__ml_code_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__EntityDefn_48, (MR_Integer) 1)));
#line 1974 "ml_code_util.m"
                ml_backend__ml_code_util__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__EntityDefn_48, (MR_Integer) 2)));
#line 1974 "ml_code_util.m"
                ml_backend__ml_code_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__EntityDefn_48, (MR_Integer) 3)));
#line 1974 "ml_code_util.m"
                ml_backend__ml_code_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__EntityDefn_48, (MR_Integer) 4)));
#line 1974 "ml_code_util.m"
                ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__V_95_95)) == (MR_mktag((MR_Integer) 1)));
#line 1974 "ml_code_util.m"
                if (ml_backend__ml_code_util__succeeded)
#line 1974 "ml_code_util.m"
                  ml_backend__ml_code_util__V_55_55 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_code_util__V_95_95), (MR_Integer) 1);
#line 1974 "ml_code_util.m"
              }
#line 1973 "ml_code_util.m"
          }
#line 1973 "ml_code_util.m"
      }
#line 1971 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1977 "ml_code_util.m"
      {
#line 1977 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__ProcLabel_58;
#line 1977 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__QualProcLabel_59;
#line 1977 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__ProxyFuncRval_60;
#line 1977 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Stmt_61;
#line 1977 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__BlockStmt_62;
#line 1977 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_97_97;
#line 1977 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_98_98;
#line 1977 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_99_99;
#line 1977 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_101_101;
#line 1977 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_102_102;

#line 1977 "ml_code_util.m"
        {
#line 1977 "ml_code_util.m"
          ml_backend__ml_code_util__ProcLabel_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1977 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ProcLabel_58, 0) = ((MR_Box) (ml_backend__ml_code_util__PredLabel_49));
#line 1977 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ProcLabel_58, 1) = ((MR_Box) (ml_backend__ml_code_util__ProcId_50));
#line 1977 "ml_code_util.m"
        }
#line 1978 "ml_code_util.m"
        {
#line 1978 "ml_code_util.m"
          ml_backend__ml_code_util__QualProcLabel_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1978 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__QualProcLabel_59, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Module_25));
#line 1978 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__QualProcLabel_59, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1978 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__QualProcLabel_59, 2) = ((MR_Box) (ml_backend__ml_code_util__ProcLabel_58));
#line 1978 "ml_code_util.m"
        }
#line 1980 "ml_code_util.m"
        {
#line 1980 "ml_code_util.m"
          ml_backend__ml_code_util__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_98_98, 0) = ((MR_Box) (ml_backend__ml_code_util__QualProcLabel_59));
#line 1980 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_98_98, 1) = ((MR_Box) (ml_backend__ml_code_util__SeqNum_51));
#line 1980 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_98_98, 2) = ((MR_Box) (ml_backend__ml_code_util__ProxySignature_43));
#line 1980 "ml_code_util.m"
        }
#line 1979 "ml_code_util.m"
        {
#line 1979 "ml_code_util.m"
          ml_backend__ml_code_util__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1979 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_97_97, 1) = ((MR_Box) (ml_backend__ml_code_util__V_98_98));
#line 1979 "ml_code_util.m"
        }
#line 1979 "ml_code_util.m"
        {
#line 1979 "ml_code_util.m"
          ml_backend__ml_code_util__ProxyFuncRval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ProxyFuncRval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1979 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ProxyFuncRval_60, 1) = ((MR_Box) (ml_backend__ml_code_util__V_97_97));
#line 1979 "ml_code_util.m"
        }
#line 1983 "ml_code_util.m"
        {
#line 1983 "ml_code_util.m"
          ml_backend__ml_code_util__Stmt_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1983 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_61, 1) = ((MR_Box) (ml_backend__ml_code_util__ProxySignature_43));
#line 1983 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_61, 2) = ((MR_Box) (ml_backend__ml_code_util__ProxyFuncRval_60));
#line 1983 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_61, 3) = ((MR_Box) (ml_backend__ml_code_util__ObjectRval_20));
#line 1983 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_61, 4) = ((MR_Box) (ml_backend__ml_code_util__ProxyArgRvals_44));
#line 1983 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_61, 5) = ((MR_Box) (ml_backend__ml_code_util__RetLvals_21));
#line 1983 "ml_code_util.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_61, 6) = ((MR_Box) ((MR_Integer) 2));
#line 1983 "ml_code_util.m"
        }
#line 1985 "ml_code_util.m"
        {
#line 1985 "ml_code_util.m"
          ml_backend__ml_code_util__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_99_99, 0) = ((MR_Box) (ml_backend__ml_code_util__Defn_42));
#line 1985 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1985 "ml_code_util.m"
        }
#line 1985 "ml_code_util.m"
        {
#line 1985 "ml_code_util.m"
          ml_backend__ml_code_util__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1985 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_102_102, 0) = ((MR_Box) (ml_backend__ml_code_util__Stmt_61));
#line 1985 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_102_102, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Context_23));
#line 1985 "ml_code_util.m"
        }
#line 1985 "ml_code_util.m"
        {
#line 1985 "ml_code_util.m"
          ml_backend__ml_code_util__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_101_101, 0) = ((MR_Box) (ml_backend__ml_code_util__V_102_102));
#line 1985 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1985 "ml_code_util.m"
        }
#line 1985 "ml_code_util.m"
        {
#line 1985 "ml_code_util.m"
          ml_backend__ml_code_util__BlockStmt_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1985 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__BlockStmt_62, 0) = ((MR_Box) (ml_backend__ml_code_util__V_99_99));
#line 1985 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__BlockStmt_62, 1) = ((MR_Box) (ml_backend__ml_code_util__V_101_101));
#line 1985 "ml_code_util.m"
        }
#line 1986 "ml_code_util.m"
        {
#line 1986 "ml_code_util.m"
          MR_Word base;
#line 1986 "ml_code_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1986 "ml_code_util.m"
          *ml_backend__ml_code_util__Statement_6 = base;
#line 1986 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__BlockStmt_62));
#line 1986 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Context_23));
#line 1986 "ml_code_util.m"
        }
#line 1977 "ml_code_util.m"
      }
#line 1971 "ml_code_util.m"
    else
#line 1988 "ml_code_util.m"
      {
#line 1988 "ml_code_util.m"
        {
#line 1988 "ml_code_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_call_current_success_cont_indirectly\'/4", (MR_String) "success continuation generated was not a function");
#line 1988 "ml_code_util.m"
          return;
        }
#line 1988 "ml_code_util.m"
      }
#line 1896 "ml_code_util.m"
  }
#line 468 "ml_code_util.m"
}

#line 1876 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0_1(
#line 1876 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1876 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
#line 1876 "ml_code_util.m"
{
#line 1876 "ml_code_util.m"
  {
#line 1876 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
#line 1876 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
#line 1876 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__conv0_LambdaHeadVar__2_28;

#line 1876 "ml_code_util.m"
    {
#line 1876 "ml_code_util.m"
      ml_backend__ml_code_util__conv0_LambdaHeadVar__2_28 = ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1876__1_1_f_0(((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
#line 1876 "ml_code_util.m"
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_LambdaHeadVar__2_28));
#line 1876 "ml_code_util.m"
    return ml_backend__ml_code_util__wrapper_arg_2;
#line 1876 "ml_code_util.m"
  }
#line 1876 "ml_code_util.m"
}

#line 460 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(
#line 460 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_5,
#line 460 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Statement_6,
#line 460 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_24,
#line 460 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_25)
#line 460 "ml_code_util.m"
{
#line 1873 "ml_code_util.m"
  {
#line 1873 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeCtorInfo_37_37;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__SuccCont_8;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__FuncRval_9;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__EnvPtrRval_10;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgTypes0_11;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgLvals0_12;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgRvals0_13;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__UseNestedFuncs_15;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgTypes_16;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgRvals_17;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Signature_19;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Stmt_23;
#line 1873 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_34_34;

#line 1874 "ml_code_util.m"
    {
#line 1874 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_24, &ml_backend__ml_code_util__SuccCont_8);
    }
#line 1875 "ml_code_util.m"
    ml_backend__ml_code_util__FuncRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccCont_8, (MR_Integer) 0)));
#line 1875 "ml_code_util.m"
    ml_backend__ml_code_util__EnvPtrRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccCont_8, (MR_Integer) 1)));
#line 1875 "ml_code_util.m"
    ml_backend__ml_code_util__ArgTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccCont_8, (MR_Integer) 2)));
#line 1875 "ml_code_util.m"
    ml_backend__ml_code_util__ArgLvals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccCont_8, (MR_Integer) 3)));
#line 3739 "ml_backend.ml_code_util.c"
    ml_backend__ml_code_util__TypeCtorInfo_37_37 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
#line 1876 "ml_code_util.m"
    {
#line 1876 "ml_code_util.m"
      ml_backend__ml_code_util__ArgRvals0_13 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_code_util__TypeCtorInfo_37_37, (MR_Word) &ml_backend__ml_code_util_scalar_common_2[6], ml_backend__ml_code_util__ArgLvals0_12);
    }
#line 1877 "ml_code_util.m"
    {
#line 1877 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_24, &ml_backend__ml_code_util__UseNestedFuncs_15);
    }
#line 1882 "ml_code_util.m"
#line 1882 "ml_code_util.m"
    switch (ml_backend__ml_code_util__UseNestedFuncs_15) {
#line 1882 "ml_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1882 "ml_code_util.m"
      case (MR_Integer) 0:
#line 1883 "ml_code_util.m"
        {
#line 1883 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_32_32;

#line 1884 "ml_code_util.m"
          {
#line 1884 "ml_code_util.m"
            ml_backend__ml_code_util__ArgTypes_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_code_util__ArgTypes0_11, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[13]));
          }
#line 1885 "ml_code_util.m"
          {
#line 1885 "ml_code_util.m"
            ml_backend__ml_code_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1885 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_32_32, 0) = ((MR_Box) (ml_backend__ml_code_util__EnvPtrRval_10));
#line 1885 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1885 "ml_code_util.m"
          }
#line 1885 "ml_code_util.m"
          {
#line 1885 "ml_code_util.m"
            ml_backend__ml_code_util__ArgRvals_17 = mercury__list__f_43_43_2_f_0(ml_backend__ml_code_util__TypeCtorInfo_37_37, ml_backend__ml_code_util__ArgRvals0_13, ml_backend__ml_code_util__V_32_32);
          }
#line 1883 "ml_code_util.m"
        }
#line 1882 "ml_code_util.m"
        break;
#line 1882 "ml_code_util.m"
      case (MR_Integer) 1:
#line 1879 "ml_code_util.m"
        {
#line 1880 "ml_code_util.m"
          ml_backend__ml_code_util__ArgTypes_16 = ml_backend__ml_code_util__ArgTypes0_11;
#line 1881 "ml_code_util.m"
          ml_backend__ml_code_util__ArgRvals_17 = ml_backend__ml_code_util__ArgRvals0_13;
#line 1879 "ml_code_util.m"
        }
#line 1882 "ml_code_util.m"
        break;
#line 1882 "ml_code_util.m"
    }
#line 1888 "ml_code_util.m"
    {
#line 1888 "ml_code_util.m"
      ml_backend__ml_code_util__Signature_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1888 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Signature_19, 0) = ((MR_Box) (ml_backend__ml_code_util__ArgTypes_16));
#line 1888 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Signature_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1888 "ml_code_util.m"
    }
#line 1892 "ml_code_util.m"
    {
#line 1892 "ml_code_util.m"
      ml_backend__ml_code_util__Stmt_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1892 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1892 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_23, 1) = ((MR_Box) (ml_backend__ml_code_util__Signature_19));
#line 1892 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_23, 2) = ((MR_Box) (ml_backend__ml_code_util__FuncRval_9));
#line 1892 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_23, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1892 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_23, 4) = ((MR_Box) (ml_backend__ml_code_util__ArgRvals_17));
#line 1892 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_23, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1892 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_23, 6) = ((MR_Box) ((MR_Integer) 2));
#line 1892 "ml_code_util.m"
    }
#line 1894 "ml_code_util.m"
    {
#line 1894 "ml_code_util.m"
      ml_backend__ml_code_util__V_34_34 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_5);
    }
#line 1894 "ml_code_util.m"
    {
#line 1894 "ml_code_util.m"
      MR_Word base;
#line 1894 "ml_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1894 "ml_code_util.m"
      *ml_backend__ml_code_util__Statement_6 = base;
#line 1894 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Stmt_23));
#line 1894 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_34_34));
#line 1894 "ml_code_util.m"
    }
#line 1873 "ml_code_util.m"
    *ml_backend__ml_code_util__STATE_VARIABLE_Info_25 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_24;
#line 1873 "ml_code_util.m"
  }
#line 460 "ml_code_util.m"
}

#line 1839 "ml_code_util.m"
static void MR_CALL 
ml_backend__ml_code_util__ml_initial_cont_4_p_0_1(
#line 1839 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1839 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1,
#line 1839 "ml_code_util.m"
  MR_Box * ml_backend__ml_code_util__wrapper_arg_2)
#line 1839 "ml_code_util.m"
{
#line 1839 "ml_code_util.m"
  {
#line 1839 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
#line 1839 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__conv0_MLDS_Type_6;

#line 1839 "ml_code_util.m"
    {
#line 1839 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_1), &ml_backend__ml_code_util__conv0_MLDS_Type_6);
    }
#line 1839 "ml_code_util.m"
    *ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_MLDS_Type_6));
#line 1839 "ml_code_util.m"
  }
#line 1839 "ml_code_util.m"
}

#line 454 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_initial_cont_4_p_0(
#line 454 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_5,
#line 454 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__OutputVarLvals0_6,
#line 454 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__OutputVarTypes0_7,
#line 454 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Cont_8)
#line 454 "ml_code_util.m"
{
#line 1835 "ml_code_util.m"
  {
#line 1835 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleInfo_9;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__OutputVarTypes_10;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__OutputVarLvals_11;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_OutputVarTypes_12;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ContLval_13;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ContEnvLval_14;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_15_15;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_17_17;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_24_24;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_25_25;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleName_35;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_ModuleName_36;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_Var_37;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleName_43;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_ModuleName_44;
#line 1835 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_Var_45;

#line 1836 "ml_code_util.m"
    {
#line 1836 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleInfo_9);
    }
#line 1837 "ml_code_util.m"
    {
#line 1837 "ml_code_util.m"
      ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_115_107_105_112_95_100_117_109_109_121_95_97_114_103_117_109_101_110_116_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ml_backend__ml_code_util__OutputVarTypes0_7, ml_backend__ml_code_util__OutputVarLvals0_6, ml_backend__ml_code_util__ModuleInfo_9, &ml_backend__ml_code_util__OutputVarTypes_10, &ml_backend__ml_code_util__OutputVarLvals_11);
    }
#line 1839 "ml_code_util.m"
    {
#line 1839 "ml_code_util.m"
      ml_backend__ml_code_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1839 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_15_15, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[2]));
#line 1839 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_15_15, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_initial_cont_4_p_0_1));
#line 1839 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1839 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_15_15, 3) = ((MR_Box) (ml_backend__ml_code_util__Info_5));
#line 1839 "ml_code_util.m"
    }
#line 1839 "ml_code_util.m"
    {
#line 1839 "ml_code_util.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_code_util__V_15_15, ml_backend__ml_code_util__OutputVarTypes_10, &ml_backend__ml_code_util__MLDS_OutputVarTypes_12);
    }
#line 1845 "ml_code_util.m"
    {
#line 1845 "ml_code_util.m"
      ml_backend__ml_code_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1845 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1845 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_17_17, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_OutputVarTypes_12));
#line 1845 "ml_code_util.m"
    }
#line 1312 "ml_code_util.m"
    {
#line 1312 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleName_35);
    }
#line 1313 "ml_code_util.m"
    {
#line 1313 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_ModuleName_36 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_35);
    }
#line 1314 "ml_code_util.m"
    {
#line 1314 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_37, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_36));
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_37, 2) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[8]));
#line 1314 "ml_code_util.m"
    }
#line 1315 "ml_code_util.m"
    {
#line 1315 "ml_code_util.m"
      ml_backend__ml_code_util__ContLval_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContLval_13, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_37));
#line 1315 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContLval_13, 1) = ((MR_Box) (ml_backend__ml_code_util__V_17_17));
#line 1315 "ml_code_util.m"
    }
#line 1312 "ml_code_util.m"
    {
#line 1312 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleName_43);
    }
#line 1313 "ml_code_util.m"
    {
#line 1313 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_ModuleName_44 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_43);
    }
#line 1314 "ml_code_util.m"
    {
#line 1314 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_45, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_44));
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_45, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_45, 2) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[9]));
#line 1314 "ml_code_util.m"
    }
#line 1315 "ml_code_util.m"
    {
#line 1315 "ml_code_util.m"
      ml_backend__ml_code_util__ContEnvLval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContEnvLval_14, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_45));
#line 1315 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ContEnvLval_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1315 "ml_code_util.m"
    }
#line 1848 "ml_code_util.m"
    {
#line 1848 "ml_code_util.m"
      ml_backend__ml_code_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_24_24, 0) = ((MR_Box) (ml_backend__ml_code_util__ContLval_13));
#line 1848 "ml_code_util.m"
    }
#line 1848 "ml_code_util.m"
    {
#line 1848 "ml_code_util.m"
      ml_backend__ml_code_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_25_25, 0) = ((MR_Box) (ml_backend__ml_code_util__ContEnvLval_14));
#line 1848 "ml_code_util.m"
    }
#line 1848 "ml_code_util.m"
    {
#line 1848 "ml_code_util.m"
      MR_Word base;
#line 1848 "ml_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1848 "ml_code_util.m"
      *ml_backend__ml_code_util__Cont_8 = base;
#line 1848 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__V_24_24));
#line 1848 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_25_25));
#line 1848 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_code_util__MLDS_OutputVarTypes_12));
#line 1848 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_code_util__OutputVarLvals_11));
#line 1848 "ml_code_util.m"
    }
#line 1835 "ml_code_util.m"
  }
#line 454 "ml_code_util.m"
}

#line 441 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_set_cond_var_5_p_0(
#line 441 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_6,
#line 441 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CondVar_7,
#line 441 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Value_8,
#line 441 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_9,
#line 441 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Statement_10)
#line 441 "ml_code_util.m"
{
#line 1829 "ml_code_util.m"
  {
#line 1829 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1829 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__CondVarLval_11;
#line 1829 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Assign_16;
#line 1829 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Stmt_17;
#line 1829 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_18_18;

#line 1830 "ml_code_util.m"
    {
#line 1830 "ml_code_util.m"
      ml_backend__ml_code_util__ml_cond_var_lval_3_p_0(ml_backend__ml_code_util__Info_6, ml_backend__ml_code_util__CondVar_7, &ml_backend__ml_code_util__CondVarLval_11);
    }
#line 584 "ml_code_util.m"
    {
#line 584 "ml_code_util.m"
      ml_backend__ml_code_util__Assign_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_16, 0) = ((MR_Box) (ml_backend__ml_code_util__CondVarLval_11));
#line 584 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_16, 1) = ((MR_Box) (ml_backend__ml_code_util__Value_8));
#line 584 "ml_code_util.m"
    }
#line 585 "ml_code_util.m"
    {
#line 585 "ml_code_util.m"
      ml_backend__ml_code_util__Stmt_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 585 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_17, 1) = ((MR_Box) (ml_backend__ml_code_util__Assign_16));
#line 585 "ml_code_util.m"
    }
#line 586 "ml_code_util.m"
    {
#line 586 "ml_code_util.m"
      ml_backend__ml_code_util__V_18_18 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_9);
    }
#line 586 "ml_code_util.m"
    {
#line 586 "ml_code_util.m"
      MR_Word base;
#line 586 "ml_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "ml_code_util.m"
      *ml_backend__ml_code_util__Statement_10 = base;
#line 586 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Stmt_17));
#line 586 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_18_18));
#line 586 "ml_code_util.m"
    }
#line 1829 "ml_code_util.m"
  }
#line 441 "ml_code_util.m"
}

#line 435 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_test_cond_var_3_p_0(
#line 435 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_4,
#line 435 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CondVar_5,
#line 435 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__CondVarRval_6)
#line 435 "ml_code_util.m"
{
#line 1825 "ml_code_util.m"
  {
#line 1825 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1825 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__CondVarLval_7;

#line 1826 "ml_code_util.m"
    {
#line 1826 "ml_code_util.m"
      ml_backend__ml_code_util__ml_cond_var_lval_3_p_0(ml_backend__ml_code_util__Info_4, ml_backend__ml_code_util__CondVar_5, &ml_backend__ml_code_util__CondVarLval_7);
    }
#line 1827 "ml_code_util.m"
    {
#line 1827 "ml_code_util.m"
      MR_Word base;
#line 1827 "ml_code_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "ml_code_util.m"
      *ml_backend__ml_code_util__CondVarRval_6 = base;
#line 1827 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__CondVarLval_7));
#line 1827 "ml_code_util.m"
    }
#line 1825 "ml_code_util.m"
  }
#line 435 "ml_code_util.m"
}

#line 429 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_cond_var_lval_3_p_0(
#line 429 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_4,
#line 429 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CondVar_5,
#line 429 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__CondVarLval_6)
#line 429 "ml_code_util.m"
{
#line 1821 "ml_code_util.m"
  {
#line 1821 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1821 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_7_7;
#line 1821 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__CondNum_11 = (MR_Integer) ml_backend__ml_code_util__CondVar_5;
#line 1821 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__CondName_12;
#line 1821 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__V_14_14;
#line 1821 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleName_20;
#line 1821 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_ModuleName_21;
#line 1821 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_Var_22;

#line 1814 "ml_code_util.m"
    {
#line 1814 "ml_code_util.m"
      ml_backend__ml_code_util__V_14_14 = mercury__string__int_to_string_1_f_0(ml_backend__ml_code_util__CondNum_11);
    }
#line 1814 "ml_code_util.m"
    {
#line 1814 "ml_code_util.m"
      ml_backend__ml_code_util__CondName_12 = mercury__string__append_2_f_0((MR_String) "cond_", ml_backend__ml_code_util__V_14_14);
    }
#line 1815 "ml_code_util.m"
    {
#line 1815 "ml_code_util.m"
      ml_backend__ml_code_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1815 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_7_7, 0) = ((MR_Box) (ml_backend__ml_code_util__CondName_12));
#line 1815 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1815 "ml_code_util.m"
    }
#line 1312 "ml_code_util.m"
    {
#line 1312 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_4, &ml_backend__ml_code_util__ModuleName_20);
    }
#line 1313 "ml_code_util.m"
    {
#line 1313 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_ModuleName_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_20);
    }
#line 1314 "ml_code_util.m"
    {
#line 1314 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_22, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_21));
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_22, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_22, 2) = ((MR_Box) (ml_backend__ml_code_util__V_7_7));
#line 1314 "ml_code_util.m"
    }
#line 1315 "ml_code_util.m"
    {
#line 1315 "ml_code_util.m"
      MR_Word base;
#line 1315 "ml_code_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "ml_code_util.m"
      *ml_backend__ml_code_util__CondVarLval_6 = base;
#line 1315 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_22));
#line 1315 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1315 "ml_code_util.m"
    }
#line 1821 "ml_code_util.m"
  }
#line 429 "ml_code_util.m"
}

#line 423 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_cond_var_decl_2_f_0(
#line 423 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CondVar_4,
#line 423 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_5)
#line 423 "ml_code_util.m"
{
#line 1817 "ml_code_util.m"
  {
#line 1817 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1817 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVar__3_3;
#line 1817 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_6_6;
#line 1817 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_7_7;
#line 1817 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__CondNum_12 = (MR_Integer) ml_backend__ml_code_util__CondVar_4;
#line 1817 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__CondName_13;
#line 1817 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__V_15_15;

#line 1814 "ml_code_util.m"
    {
#line 1814 "ml_code_util.m"
      ml_backend__ml_code_util__V_15_15 = mercury__string__int_to_string_1_f_0(ml_backend__ml_code_util__CondNum_12);
    }
#line 1814 "ml_code_util.m"
    {
#line 1814 "ml_code_util.m"
      ml_backend__ml_code_util__CondName_13 = mercury__string__append_2_f_0((MR_String) "cond_", ml_backend__ml_code_util__V_15_15);
    }
#line 1815 "ml_code_util.m"
    {
#line 1815 "ml_code_util.m"
      ml_backend__ml_code_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1815 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_7_7, 0) = ((MR_Box) (ml_backend__ml_code_util__CondName_13));
#line 1815 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1815 "ml_code_util.m"
    }
#line 1818 "ml_code_util.m"
    ml_backend__ml_code_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_code_util__V_7_7);
#line 1325 "ml_code_util.m"
    {
#line 1325 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVar__3_3 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_code_util__V_6_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_code_util__Context_5);
    }
#line 1817 "ml_code_util.m"
    return ml_backend__ml_code_util__HeadVar__3_3;
#line 1817 "ml_code_util.m"
  }
#line 423 "ml_code_util.m"
}

#line 416 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_set_success_4_p_0(
#line 416 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_5,
#line 416 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Value_6,
#line 416 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_7,
#line 416 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Statement_8)
#line 416 "ml_code_util.m"
{
#line 1802 "ml_code_util.m"
  {
#line 1802 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1802 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Succeeded_9;
#line 1802 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Assign_14;
#line 1802 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Stmt_15;
#line 1802 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_16_16;

#line 1803 "ml_code_util.m"
    {
#line 1803 "ml_code_util.m"
      ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__Succeeded_9);
    }
#line 584 "ml_code_util.m"
    {
#line 584 "ml_code_util.m"
      ml_backend__ml_code_util__Assign_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_14, 0) = ((MR_Box) (ml_backend__ml_code_util__Succeeded_9));
#line 584 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_14, 1) = ((MR_Box) (ml_backend__ml_code_util__Value_6));
#line 584 "ml_code_util.m"
    }
#line 585 "ml_code_util.m"
    {
#line 585 "ml_code_util.m"
      ml_backend__ml_code_util__Stmt_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 585 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_15, 1) = ((MR_Box) (ml_backend__ml_code_util__Assign_14));
#line 585 "ml_code_util.m"
    }
#line 586 "ml_code_util.m"
    {
#line 586 "ml_code_util.m"
      ml_backend__ml_code_util__V_16_16 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_7);
    }
#line 586 "ml_code_util.m"
    {
#line 586 "ml_code_util.m"
      MR_Word base;
#line 586 "ml_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "ml_code_util.m"
      *ml_backend__ml_code_util__Statement_8 = base;
#line 586 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Stmt_15));
#line 586 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_16_16));
#line 586 "ml_code_util.m"
    }
#line 1802 "ml_code_util.m"
  }
#line 416 "ml_code_util.m"
}

#line 412 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_test_success_2_p_0(
#line 412 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_3,
#line 412 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__SucceededRval_4)
#line 412 "ml_code_util.m"
{
#line 1798 "ml_code_util.m"
  {
#line 1798 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1798 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__SucceededLval_5;

#line 1799 "ml_code_util.m"
    {
#line 1799 "ml_code_util.m"
      ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_code_util__Info_3, &ml_backend__ml_code_util__SucceededLval_5);
    }
#line 1800 "ml_code_util.m"
    {
#line 1800 "ml_code_util.m"
      MR_Word base;
#line 1800 "ml_code_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1800 "ml_code_util.m"
      *ml_backend__ml_code_util__SucceededRval_4 = base;
#line 1800 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__SucceededLval_5));
#line 1800 "ml_code_util.m"
    }
#line 1798 "ml_code_util.m"
  }
#line 412 "ml_code_util.m"
}

#line 406 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_success_lval_2_p_0(
#line 406 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_3,
#line 406 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__SucceededLval_4)
#line 406 "ml_code_util.m"
{
#line 1794 "ml_code_util.m"
  {
#line 1794 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1794 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleName_13;
#line 1794 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_ModuleName_14;
#line 1794 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_Var_15;

#line 1312 "ml_code_util.m"
    {
#line 1312 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_3, &ml_backend__ml_code_util__ModuleName_13);
    }
#line 1313 "ml_code_util.m"
    {
#line 1313 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_13);
    }
#line 1314 "ml_code_util.m"
    {
#line 1314 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_15, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_14));
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_15, 2) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[20]));
#line 1314 "ml_code_util.m"
    }
#line 1315 "ml_code_util.m"
    {
#line 1315 "ml_code_util.m"
      MR_Word base;
#line 1315 "ml_code_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "ml_code_util.m"
      *ml_backend__ml_code_util__SucceededLval_4 = base;
#line 1315 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_15));
#line 1315 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1315 "ml_code_util.m"
    }
#line 1794 "ml_code_util.m"
  }
#line 406 "ml_code_util.m"
}

#line 400 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(
#line 400 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_3)
#line 400 "ml_code_util.m"
{
#line 1790 "ml_code_util.m"
  {
#line 1790 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1790 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVar__2_2;

#line 1325 "ml_code_util.m"
    {
#line 1325 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVar__2_2 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[20]))), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_code_util__Context_3);
    }
#line 1790 "ml_code_util.m"
    return ml_backend__ml_code_util__HeadVar__2_2;
#line 1790 "ml_code_util.m"
  }
#line 400 "ml_code_util.m"
}

#line 393 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_failure_5_p_0(
#line 393 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
#line 393 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_2,
#line 393 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__HeadVar__3_3,
#line 393 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4,
#line 393 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_5)
#line 393 "ml_code_util.m"
{
#line 1768 "ml_code_util.m"
  {
#line 1768 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 1768 "ml_code_util.m"
#line 1768 "ml_code_util.m"
    switch (ml_backend__ml_code_util__HeadVar__1_1) {
#line 1768 "ml_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1768 "ml_code_util.m"
      case (MR_Integer) 0:
#line 1768 "ml_code_util.m"
        {
#line 1769 "ml_code_util.m"
          {
#line 1769 "ml_code_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_failure\'/5", (MR_String) "\140fail\' has determinism \140det\'");
#line 1769 "ml_code_util.m"
            return;
          }
#line 1768 "ml_code_util.m"
        }
#line 1768 "ml_code_util.m"
        break;
#line 1768 "ml_code_util.m"
      case (MR_Integer) 2:
#line 1779 "ml_code_util.m"
        {
#line 1786 "ml_code_util.m"
          *ml_backend__ml_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1779 "ml_code_util.m"
          *ml_backend__ml_code_util__STATE_VARIABLE_Info_5 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4;
#line 1779 "ml_code_util.m"
        }
#line 1768 "ml_code_util.m"
        break;
#line 1768 "ml_code_util.m"
      case (MR_Integer) 1:
#line 1770 "ml_code_util.m"
        {
#line 1770 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__SetSuccessFalse_15;
#line 1770 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__Succeeded_31;
#line 1770 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__Assign_36;
#line 1770 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__Stmt_37;
#line 1770 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_38_38;

#line 1803 "ml_code_util.m"
          {
#line 1803 "ml_code_util.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4, &ml_backend__ml_code_util__Succeeded_31);
          }
#line 584 "ml_code_util.m"
          {
#line 584 "ml_code_util.m"
            ml_backend__ml_code_util__Assign_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "ml_code_util.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_36, 0) = ((MR_Box) (ml_backend__ml_code_util__Succeeded_31));
#line 584 "ml_code_util.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[19])));
#line 584 "ml_code_util.m"
          }
#line 585 "ml_code_util.m"
          {
#line 585 "ml_code_util.m"
            ml_backend__ml_code_util__Stmt_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 585 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_37, 1) = ((MR_Box) (ml_backend__ml_code_util__Assign_36));
#line 585 "ml_code_util.m"
          }
#line 586 "ml_code_util.m"
          {
#line 586 "ml_code_util.m"
            ml_backend__ml_code_util__V_38_38 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_2);
          }
#line 586 "ml_code_util.m"
          {
#line 586 "ml_code_util.m"
            ml_backend__ml_code_util__SetSuccessFalse_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SetSuccessFalse_15, 0) = ((MR_Box) (ml_backend__ml_code_util__Stmt_37));
#line 586 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SetSuccessFalse_15, 1) = ((MR_Box) (ml_backend__ml_code_util__V_38_38));
#line 586 "ml_code_util.m"
          }
#line 1770 "ml_code_util.m"
          {
#line 1770 "ml_code_util.m"
            MR_Word base;
#line 1770 "ml_code_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1770 "ml_code_util.m"
            *ml_backend__ml_code_util__HeadVar__3_3 = base;
#line 1770 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__SetSuccessFalse_15));
#line 1770 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1770 "ml_code_util.m"
          }
#line 1770 "ml_code_util.m"
          *ml_backend__ml_code_util__STATE_VARIABLE_Info_5 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4;
#line 1770 "ml_code_util.m"
        }
#line 1768 "ml_code_util.m"
        break;
#line 1768 "ml_code_util.m"
    }
#line 1768 "ml_code_util.m"
  }
#line 393 "ml_code_util.m"
}

#line 388 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_success_5_p_0(
#line 388 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
#line 388 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_2,
#line 388 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__HeadVar__3_3,
#line 388 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4,
#line 388 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_5)
#line 388 "ml_code_util.m"
{
#line 1742 "ml_code_util.m"
  {
#line 1742 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 1742 "ml_code_util.m"
#line 1742 "ml_code_util.m"
    switch (ml_backend__ml_code_util__HeadVar__1_1) {
#line 1742 "ml_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1742 "ml_code_util.m"
      case (MR_Integer) 0:
#line 1742 "ml_code_util.m"
        {
#line 1749 "ml_code_util.m"
          *ml_backend__ml_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1742 "ml_code_util.m"
          *ml_backend__ml_code_util__STATE_VARIABLE_Info_5 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4;
#line 1742 "ml_code_util.m"
        }
#line 1742 "ml_code_util.m"
        break;
#line 1742 "ml_code_util.m"
      case (MR_Integer) 2:
#line 1759 "ml_code_util.m"
        {
#line 1759 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__CallCont_20;

#line 1766 "ml_code_util.m"
          {
#line 1766 "ml_code_util.m"
            ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_code_util__Context_2, &ml_backend__ml_code_util__CallCont_20, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4, ml_backend__ml_code_util__STATE_VARIABLE_Info_5);
          }
#line 1759 "ml_code_util.m"
          {
#line 1759 "ml_code_util.m"
            MR_Word base;
#line 1759 "ml_code_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1759 "ml_code_util.m"
            *ml_backend__ml_code_util__HeadVar__3_3 = base;
#line 1759 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__CallCont_20));
#line 1759 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1759 "ml_code_util.m"
          }
#line 1759 "ml_code_util.m"
        }
#line 1742 "ml_code_util.m"
        break;
#line 1742 "ml_code_util.m"
      case (MR_Integer) 1:
#line 1750 "ml_code_util.m"
        {
#line 1750 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__SetSuccessTrue_12;
#line 1750 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__Succeeded_30;
#line 1750 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__Assign_35;
#line 1750 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__Stmt_36;
#line 1750 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_37_37;

#line 1803 "ml_code_util.m"
          {
#line 1803 "ml_code_util.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4, &ml_backend__ml_code_util__Succeeded_30);
          }
#line 584 "ml_code_util.m"
          {
#line 584 "ml_code_util.m"
            ml_backend__ml_code_util__Assign_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "ml_code_util.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_35, 0) = ((MR_Box) (ml_backend__ml_code_util__Succeeded_30));
#line 584 "ml_code_util.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[18])));
#line 584 "ml_code_util.m"
          }
#line 585 "ml_code_util.m"
          {
#line 585 "ml_code_util.m"
            ml_backend__ml_code_util__Stmt_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 585 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_36, 1) = ((MR_Box) (ml_backend__ml_code_util__Assign_35));
#line 585 "ml_code_util.m"
          }
#line 586 "ml_code_util.m"
          {
#line 586 "ml_code_util.m"
            ml_backend__ml_code_util__V_37_37 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_2);
          }
#line 586 "ml_code_util.m"
          {
#line 586 "ml_code_util.m"
            ml_backend__ml_code_util__SetSuccessTrue_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SetSuccessTrue_12, 0) = ((MR_Box) (ml_backend__ml_code_util__Stmt_36));
#line 586 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SetSuccessTrue_12, 1) = ((MR_Box) (ml_backend__ml_code_util__V_37_37));
#line 586 "ml_code_util.m"
          }
#line 1750 "ml_code_util.m"
          {
#line 1750 "ml_code_util.m"
            MR_Word base;
#line 1750 "ml_code_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1750 "ml_code_util.m"
            *ml_backend__ml_code_util__HeadVar__3_3 = base;
#line 1750 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__SetSuccessTrue_12));
#line 1750 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1750 "ml_code_util.m"
          }
#line 1750 "ml_code_util.m"
          *ml_backend__ml_code_util__STATE_VARIABLE_Info_5 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_4;
#line 1750 "ml_code_util.m"
        }
#line 1742 "ml_code_util.m"
        break;
#line 1742 "ml_code_util.m"
    }
#line 1742 "ml_code_util.m"
  }
#line 388 "ml_code_util.m"
}

#line 377 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_p_0(
#line 377 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VarName_8,
#line 377 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Type_9,
#line 377 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__ArgNum_10,
#line 377 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_11,
#line 377 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__LocalVarDefn_12,
#line 377 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_33,
#line 377 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_34)
#line 377 "ml_code_util.m"
{
#line 1655 "ml_code_util.m"
  {
#line 1655 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_Context_14;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ClosureLayoutPtrLval_17;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeParamsLval_20;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleInfo_22;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeInfoMercuryType_23;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeInfoType_24;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeInfoLval_25;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeInfoDecl_26;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__GCStatement0_27;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__GCStatement_32;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_43_43;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_99_99;
#line 1655 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_100_100;

#line 1670 "ml_code_util.m"
    {
#line 1670 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_Context_14 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_11);
    }
#line 1676 "ml_code_util.m"
    {
#line 1676 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_33, (MR_Word) &ml_backend__ml_code_util_scalar_common_1[15], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), &ml_backend__ml_code_util__ClosureLayoutPtrLval_17);
    }
#line 1683 "ml_code_util.m"
    {
#line 1683 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_33, (MR_Word) &ml_backend__ml_code_util_scalar_common_1[16], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), &ml_backend__ml_code_util__TypeParamsLval_20);
    }
#line 1689 "ml_code_util.m"
    {
#line 1689 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_33, &ml_backend__ml_code_util__ModuleInfo_22);
    }
#line 1690 "ml_code_util.m"
    {
#line 1690 "ml_code_util.m"
      ml_backend__ml_code_util__TypeInfoMercuryType_23 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 1691 "ml_code_util.m"
    {
#line 1691 "ml_code_util.m"
      ml_backend__ml_code_util__TypeInfoType_24 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_22, ml_backend__ml_code_util__TypeInfoMercuryType_23);
    }
#line 1692 "ml_code_util.m"
    {
#line 1692 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_33, (MR_Word) &ml_backend__ml_code_util_scalar_common_1[17], ml_backend__ml_code_util__TypeInfoType_24, &ml_backend__ml_code_util__TypeInfoLval_25);
    }
#line 1693 "ml_code_util.m"
    {
#line 1693 "ml_code_util.m"
      ml_backend__ml_code_util__TypeInfoDecl_26 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[17]))), ml_backend__ml_code_util__TypeInfoType_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_code_util__MLDS_Context_14);
    }
#line 1696 "ml_code_util.m"
    {
#line 1696 "ml_code_util.m"
      ml_backend__ml_code_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_43_43, 0) = ((MR_Box) (ml_backend__ml_code_util__TypeInfoLval_25));
#line 1696 "ml_code_util.m"
    }
#line 1696 "ml_code_util.m"
    {
#line 1696 "ml_code_util.m"
      ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_p_0(ml_backend__ml_code_util__VarName_8, ml_backend__ml_code_util__Type_9, ml_backend__ml_code_util__V_43_43, ml_backend__ml_code_util__Context_11, &ml_backend__ml_code_util__GCStatement0_27, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_33, ml_backend__ml_code_util__STATE_VARIABLE_Info_34);
    }
#line 1729 "ml_code_util.m"
#line 1729 "ml_code_util.m"
    switch (MR_tag((MR_Word) ml_backend__ml_code_util__GCStatement0_27)) {
#line 1729 "ml_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1729 "ml_code_util.m"
      case (MR_Integer) 0:
#line 1731 "ml_code_util.m"
        ml_backend__ml_code_util__GCStatement_32 = ml_backend__ml_code_util__GCStatement0_27;
#line 1729 "ml_code_util.m"
        break;
#line 1729 "ml_code_util.m"
      case (MR_Integer) 1:
#line 1704 "ml_code_util.m"
        {
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__CallTraceFuncCode_101 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_code_util__GCStatement0_27), (MR_Integer) 1);
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__MakeTypeInfoCode_102;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__GCTraceCode_104;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_105_105;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_107_107;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_110_110;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_113_113;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_114_114;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_115_115;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_120_120;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_121_121;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_122_122;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_123_123;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_126_126;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_127_127;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_128_128;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_129_129;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_130_130;
#line 1704 "ml_code_util.m"
          MR_String ml_backend__ml_code_util__V_131_131;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_141_141;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_143_143;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_144_144;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_145_145;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_146_146;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_147_147;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_149_149;
#line 1704 "ml_code_util.m"
          MR_String ml_backend__ml_code_util__V_151_151;
#line 1704 "ml_code_util.m"
          MR_String ml_backend__ml_code_util__V_158_158;

#line 1708 "ml_code_util.m"
          {
#line 1708 "ml_code_util.m"
            ml_backend__ml_code_util__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1708 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1708 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_114_114, 1) = ((MR_Box) (ml_backend__ml_code_util__TypeInfoLval_25));
#line 1708 "ml_code_util.m"
          }
#line 1711 "ml_code_util.m"
          {
#line 1711 "ml_code_util.m"
            ml_backend__ml_code_util__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1711 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_122_122, 0) = ((MR_Box) (ml_backend__ml_code_util__TypeParamsLval_20));
#line 1711 "ml_code_util.m"
          }
#line 1711 "ml_code_util.m"
          {
#line 1711 "ml_code_util.m"
            ml_backend__ml_code_util__V_121_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1711 "ml_code_util.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__V_121_121, 0) = ((MR_Box) (ml_backend__ml_code_util__V_122_122));
#line 1711 "ml_code_util.m"
          }
#line 1713 "ml_code_util.m"
          {
#line 1713 "ml_code_util.m"
            ml_backend__ml_code_util__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1713 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_128_128, 0) = ((MR_Box) (ml_backend__ml_code_util__ClosureLayoutPtrLval_17));
#line 1713 "ml_code_util.m"
          }
#line 1713 "ml_code_util.m"
          {
#line 1713 "ml_code_util.m"
            ml_backend__ml_code_util__V_127_127 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1713 "ml_code_util.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__V_127_127, 0) = ((MR_Box) (ml_backend__ml_code_util__V_128_128));
#line 1713 "ml_code_util.m"
          }
#line 1717 "ml_code_util.m"
          {
#line 1717 "ml_code_util.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_4[10], ml_backend__ml_code_util__ArgNum_10, &ml_backend__ml_code_util__V_151_151);
          }
#line 1714 "ml_code_util.m"
          {
#line 1714 "ml_code_util.m"
            ml_backend__ml_code_util__V_158_158 = mercury__string__f_43_43_2_f_0(ml_backend__ml_code_util__V_151_151, (MR_String) " - 1],\n\tNULL, NULL, &allocated_mem);\n");
          }
#line 1714 "ml_code_util.m"
          {
#line 1714 "ml_code_util.m"
            ml_backend__ml_code_util__V_131_131 = mercury__string__f_43_43_2_f_0((MR_String) ")->MR_closure_arg_pseudo_type_info[", ml_backend__ml_code_util__V_158_158);
          }
#line 1714 "ml_code_util.m"
          {
#line 1714 "ml_code_util.m"
            ml_backend__ml_code_util__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1714 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_130_130, 0) = ((MR_Box) (ml_backend__ml_code_util__V_131_131));
#line 1714 "ml_code_util.m"
          }
#line 1718 "ml_code_util.m"
          {
#line 1718 "ml_code_util.m"
            ml_backend__ml_code_util__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_129_129, 0) = ((MR_Box) (ml_backend__ml_code_util__V_130_130));
#line 1718 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1718 "ml_code_util.m"
          }
#line 1713 "ml_code_util.m"
          {
#line 1713 "ml_code_util.m"
            ml_backend__ml_code_util__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1713 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_126_126, 0) = ((MR_Box) (ml_backend__ml_code_util__V_127_127));
#line 1713 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_126_126, 1) = ((MR_Box) (ml_backend__ml_code_util__V_129_129));
#line 1713 "ml_code_util.m"
          }
#line 1712 "ml_code_util.m"
          {
#line 1712 "ml_code_util.m"
            ml_backend__ml_code_util__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1712 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_123_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[14])));
#line 1712 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_123_123, 1) = ((MR_Box) (ml_backend__ml_code_util__V_126_126));
#line 1712 "ml_code_util.m"
          }
#line 1711 "ml_code_util.m"
          {
#line 1711 "ml_code_util.m"
            ml_backend__ml_code_util__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1711 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_120_120, 0) = ((MR_Box) (ml_backend__ml_code_util__V_121_121));
#line 1711 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_120_120, 1) = ((MR_Box) (ml_backend__ml_code_util__V_123_123));
#line 1711 "ml_code_util.m"
          }
#line 1710 "ml_code_util.m"
          {
#line 1710 "ml_code_util.m"
            ml_backend__ml_code_util__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1710 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_115_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[13])));
#line 1710 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_115_115, 1) = ((MR_Box) (ml_backend__ml_code_util__V_120_120));
#line 1710 "ml_code_util.m"
          }
#line 1708 "ml_code_util.m"
          {
#line 1708 "ml_code_util.m"
            ml_backend__ml_code_util__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1708 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_113_113, 0) = ((MR_Box) (ml_backend__ml_code_util__V_114_114));
#line 1708 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_113_113, 1) = ((MR_Box) (ml_backend__ml_code_util__V_115_115));
#line 1708 "ml_code_util.m"
          }
#line 1707 "ml_code_util.m"
          {
#line 1707 "ml_code_util.m"
            ml_backend__ml_code_util__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_110_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[12])));
#line 1707 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_110_110, 1) = ((MR_Box) (ml_backend__ml_code_util__V_113_113));
#line 1707 "ml_code_util.m"
          }
#line 1706 "ml_code_util.m"
          {
#line 1706 "ml_code_util.m"
            ml_backend__ml_code_util__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1706 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_107_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[11])));
#line 1706 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_107_107, 1) = ((MR_Box) (ml_backend__ml_code_util__V_110_110));
#line 1706 "ml_code_util.m"
          }
#line 1705 "ml_code_util.m"
          {
#line 1705 "ml_code_util.m"
            ml_backend__ml_code_util__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1705 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1705 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_105_105, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1705 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_105_105, 2) = ((MR_Box) (ml_backend__ml_code_util__V_107_107));
#line 1705 "ml_code_util.m"
          }
#line 1705 "ml_code_util.m"
          {
#line 1705 "ml_code_util.m"
            ml_backend__ml_code_util__MakeTypeInfoCode_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1705 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCode_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1705 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCode_102, 1) = ((MR_Box) (ml_backend__ml_code_util__V_105_105));
#line 1705 "ml_code_util.m"
          }
#line 1723 "ml_code_util.m"
          {
#line 1723 "ml_code_util.m"
            ml_backend__ml_code_util__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1723 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_141_141, 0) = ((MR_Box) (ml_backend__ml_code_util__TypeInfoDecl_26));
#line 1723 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1723 "ml_code_util.m"
          }
#line 1724 "ml_code_util.m"
          {
#line 1724 "ml_code_util.m"
            ml_backend__ml_code_util__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1724 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_144_144, 0) = ((MR_Box) (ml_backend__ml_code_util__MakeTypeInfoCode_102));
#line 1724 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_144_144, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Context_14));
#line 1724 "ml_code_util.m"
          }
#line 1726 "ml_code_util.m"
          {
#line 1726 "ml_code_util.m"
            ml_backend__ml_code_util__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1726 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_147_147, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[6])));
#line 1726 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_147_147, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Context_14));
#line 1726 "ml_code_util.m"
          }
#line 1727 "ml_code_util.m"
          {
#line 1727 "ml_code_util.m"
            ml_backend__ml_code_util__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1727 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_146_146, 0) = ((MR_Box) (ml_backend__ml_code_util__V_147_147));
#line 1727 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1727 "ml_code_util.m"
          }
#line 1725 "ml_code_util.m"
          {
#line 1725 "ml_code_util.m"
            ml_backend__ml_code_util__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1725 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_145_145, 0) = ((MR_Box) (ml_backend__ml_code_util__CallTraceFuncCode_101));
#line 1725 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_145_145, 1) = ((MR_Box) (ml_backend__ml_code_util__V_146_146));
#line 1725 "ml_code_util.m"
          }
#line 1724 "ml_code_util.m"
          {
#line 1724 "ml_code_util.m"
            ml_backend__ml_code_util__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1724 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_143_143, 0) = ((MR_Box) (ml_backend__ml_code_util__V_144_144));
#line 1724 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_143_143, 1) = ((MR_Box) (ml_backend__ml_code_util__V_145_145));
#line 1724 "ml_code_util.m"
          }
#line 1723 "ml_code_util.m"
          {
#line 1723 "ml_code_util.m"
            ml_backend__ml_code_util__GCTraceCode_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1723 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GCTraceCode_104, 0) = ((MR_Box) (ml_backend__ml_code_util__V_141_141));
#line 1723 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GCTraceCode_104, 1) = ((MR_Box) (ml_backend__ml_code_util__V_143_143));
#line 1723 "ml_code_util.m"
          }
#line 1728 "ml_code_util.m"
          {
#line 1728 "ml_code_util.m"
            ml_backend__ml_code_util__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1728 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_149_149, 0) = ((MR_Box) (ml_backend__ml_code_util__GCTraceCode_104));
#line 1728 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_149_149, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Context_14));
#line 1728 "ml_code_util.m"
          }
#line 1728 "ml_code_util.m"
          ml_backend__ml_code_util__GCStatement_32 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_code_util__V_149_149);
#line 1704 "ml_code_util.m"
        }
#line 1729 "ml_code_util.m"
        break;
#line 1729 "ml_code_util.m"
      case (MR_Integer) 2:
#line 1704 "ml_code_util.m"
        {
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__CallTraceFuncCode_28 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_code_util__GCStatement0_27), (MR_Integer) 2);
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__MakeTypeInfoCode_29;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__GCTraceCode_31;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_45_45;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_47_47;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_50_50;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_53_53;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_54_54;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_55_55;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_60_60;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_61_61;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_62_62;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_63_63;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_66_66;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_67_67;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_68_68;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_69_69;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_70_70;
#line 1704 "ml_code_util.m"
          MR_String ml_backend__ml_code_util__V_71_71;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_90_90;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_92_92;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_93_93;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_94_94;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_95_95;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_96_96;
#line 1704 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_98_98;
#line 1704 "ml_code_util.m"
          MR_String ml_backend__ml_code_util__V_161_161;
#line 1704 "ml_code_util.m"
          MR_String ml_backend__ml_code_util__V_168_168;

#line 1708 "ml_code_util.m"
          {
#line 1708 "ml_code_util.m"
            ml_backend__ml_code_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1708 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1708 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_54_54, 1) = ((MR_Box) (ml_backend__ml_code_util__TypeInfoLval_25));
#line 1708 "ml_code_util.m"
          }
#line 1711 "ml_code_util.m"
          {
#line 1711 "ml_code_util.m"
            ml_backend__ml_code_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1711 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_62_62, 0) = ((MR_Box) (ml_backend__ml_code_util__TypeParamsLval_20));
#line 1711 "ml_code_util.m"
          }
#line 1711 "ml_code_util.m"
          {
#line 1711 "ml_code_util.m"
            ml_backend__ml_code_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1711 "ml_code_util.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__V_61_61, 0) = ((MR_Box) (ml_backend__ml_code_util__V_62_62));
#line 1711 "ml_code_util.m"
          }
#line 1713 "ml_code_util.m"
          {
#line 1713 "ml_code_util.m"
            ml_backend__ml_code_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1713 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_68_68, 0) = ((MR_Box) (ml_backend__ml_code_util__ClosureLayoutPtrLval_17));
#line 1713 "ml_code_util.m"
          }
#line 1713 "ml_code_util.m"
          {
#line 1713 "ml_code_util.m"
            ml_backend__ml_code_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1713 "ml_code_util.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__V_67_67, 0) = ((MR_Box) (ml_backend__ml_code_util__V_68_68));
#line 1713 "ml_code_util.m"
          }
#line 1717 "ml_code_util.m"
          {
#line 1717 "ml_code_util.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_4[10], ml_backend__ml_code_util__ArgNum_10, &ml_backend__ml_code_util__V_161_161);
          }
#line 1714 "ml_code_util.m"
          {
#line 1714 "ml_code_util.m"
            ml_backend__ml_code_util__V_168_168 = mercury__string__f_43_43_2_f_0(ml_backend__ml_code_util__V_161_161, (MR_String) " - 1],\n\tNULL, NULL, &allocated_mem);\n");
          }
#line 1714 "ml_code_util.m"
          {
#line 1714 "ml_code_util.m"
            ml_backend__ml_code_util__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) ")->MR_closure_arg_pseudo_type_info[", ml_backend__ml_code_util__V_168_168);
          }
#line 1714 "ml_code_util.m"
          {
#line 1714 "ml_code_util.m"
            ml_backend__ml_code_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1714 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_70_70, 0) = ((MR_Box) (ml_backend__ml_code_util__V_71_71));
#line 1714 "ml_code_util.m"
          }
#line 1718 "ml_code_util.m"
          {
#line 1718 "ml_code_util.m"
            ml_backend__ml_code_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_69_69, 0) = ((MR_Box) (ml_backend__ml_code_util__V_70_70));
#line 1718 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1718 "ml_code_util.m"
          }
#line 1713 "ml_code_util.m"
          {
#line 1713 "ml_code_util.m"
            ml_backend__ml_code_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1713 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_66_66, 0) = ((MR_Box) (ml_backend__ml_code_util__V_67_67));
#line 1713 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_66_66, 1) = ((MR_Box) (ml_backend__ml_code_util__V_69_69));
#line 1713 "ml_code_util.m"
          }
#line 1712 "ml_code_util.m"
          {
#line 1712 "ml_code_util.m"
            ml_backend__ml_code_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1712 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[14])));
#line 1712 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_63_63, 1) = ((MR_Box) (ml_backend__ml_code_util__V_66_66));
#line 1712 "ml_code_util.m"
          }
#line 1711 "ml_code_util.m"
          {
#line 1711 "ml_code_util.m"
            ml_backend__ml_code_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1711 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_60_60, 0) = ((MR_Box) (ml_backend__ml_code_util__V_61_61));
#line 1711 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_60_60, 1) = ((MR_Box) (ml_backend__ml_code_util__V_63_63));
#line 1711 "ml_code_util.m"
          }
#line 1710 "ml_code_util.m"
          {
#line 1710 "ml_code_util.m"
            ml_backend__ml_code_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1710 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[13])));
#line 1710 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_55_55, 1) = ((MR_Box) (ml_backend__ml_code_util__V_60_60));
#line 1710 "ml_code_util.m"
          }
#line 1708 "ml_code_util.m"
          {
#line 1708 "ml_code_util.m"
            ml_backend__ml_code_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1708 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_53_53, 0) = ((MR_Box) (ml_backend__ml_code_util__V_54_54));
#line 1708 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_53_53, 1) = ((MR_Box) (ml_backend__ml_code_util__V_55_55));
#line 1708 "ml_code_util.m"
          }
#line 1707 "ml_code_util.m"
          {
#line 1707 "ml_code_util.m"
            ml_backend__ml_code_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[12])));
#line 1707 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_50_50, 1) = ((MR_Box) (ml_backend__ml_code_util__V_53_53));
#line 1707 "ml_code_util.m"
          }
#line 1706 "ml_code_util.m"
          {
#line 1706 "ml_code_util.m"
            ml_backend__ml_code_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1706 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[11])));
#line 1706 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_47_47, 1) = ((MR_Box) (ml_backend__ml_code_util__V_50_50));
#line 1706 "ml_code_util.m"
          }
#line 1705 "ml_code_util.m"
          {
#line 1705 "ml_code_util.m"
            ml_backend__ml_code_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1705 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1705 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_45_45, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1705 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_45_45, 2) = ((MR_Box) (ml_backend__ml_code_util__V_47_47));
#line 1705 "ml_code_util.m"
          }
#line 1705 "ml_code_util.m"
          {
#line 1705 "ml_code_util.m"
            ml_backend__ml_code_util__MakeTypeInfoCode_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1705 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCode_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1705 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__MakeTypeInfoCode_29, 1) = ((MR_Box) (ml_backend__ml_code_util__V_45_45));
#line 1705 "ml_code_util.m"
          }
#line 1723 "ml_code_util.m"
          {
#line 1723 "ml_code_util.m"
            ml_backend__ml_code_util__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1723 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_90_90, 0) = ((MR_Box) (ml_backend__ml_code_util__TypeInfoDecl_26));
#line 1723 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1723 "ml_code_util.m"
          }
#line 1724 "ml_code_util.m"
          {
#line 1724 "ml_code_util.m"
            ml_backend__ml_code_util__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1724 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_93_93, 0) = ((MR_Box) (ml_backend__ml_code_util__MakeTypeInfoCode_29));
#line 1724 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_93_93, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Context_14));
#line 1724 "ml_code_util.m"
          }
#line 1726 "ml_code_util.m"
          {
#line 1726 "ml_code_util.m"
            ml_backend__ml_code_util__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1726 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_96_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[6])));
#line 1726 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_96_96, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Context_14));
#line 1726 "ml_code_util.m"
          }
#line 1727 "ml_code_util.m"
          {
#line 1727 "ml_code_util.m"
            ml_backend__ml_code_util__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1727 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_95_95, 0) = ((MR_Box) (ml_backend__ml_code_util__V_96_96));
#line 1727 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1727 "ml_code_util.m"
          }
#line 1725 "ml_code_util.m"
          {
#line 1725 "ml_code_util.m"
            ml_backend__ml_code_util__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1725 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_94_94, 0) = ((MR_Box) (ml_backend__ml_code_util__CallTraceFuncCode_28));
#line 1725 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_94_94, 1) = ((MR_Box) (ml_backend__ml_code_util__V_95_95));
#line 1725 "ml_code_util.m"
          }
#line 1724 "ml_code_util.m"
          {
#line 1724 "ml_code_util.m"
            ml_backend__ml_code_util__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1724 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_92_92, 0) = ((MR_Box) (ml_backend__ml_code_util__V_93_93));
#line 1724 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_92_92, 1) = ((MR_Box) (ml_backend__ml_code_util__V_94_94));
#line 1724 "ml_code_util.m"
          }
#line 1723 "ml_code_util.m"
          {
#line 1723 "ml_code_util.m"
            ml_backend__ml_code_util__GCTraceCode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1723 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GCTraceCode_31, 0) = ((MR_Box) (ml_backend__ml_code_util__V_90_90));
#line 1723 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__GCTraceCode_31, 1) = ((MR_Box) (ml_backend__ml_code_util__V_92_92));
#line 1723 "ml_code_util.m"
          }
#line 1728 "ml_code_util.m"
          {
#line 1728 "ml_code_util.m"
            ml_backend__ml_code_util__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1728 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_98_98, 0) = ((MR_Box) (ml_backend__ml_code_util__GCTraceCode_31));
#line 1728 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_98_98, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Context_14));
#line 1728 "ml_code_util.m"
          }
#line 1728 "ml_code_util.m"
          ml_backend__ml_code_util__GCStatement_32 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_code_util__V_98_98);
#line 1704 "ml_code_util.m"
        }
#line 1729 "ml_code_util.m"
        break;
#line 1729 "ml_code_util.m"
    }
#line 1733 "ml_code_util.m"
    ml_backend__ml_code_util__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_code_util__VarName_8);
#line 1734 "ml_code_util.m"
    {
#line 1734 "ml_code_util.m"
      ml_backend__ml_code_util__V_100_100 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_22, ml_backend__ml_code_util__Type_9);
    }
#line 1733 "ml_code_util.m"
    {
#line 1733 "ml_code_util.m"
      *ml_backend__ml_code_util__LocalVarDefn_12 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_code_util__V_99_99, ml_backend__ml_code_util__V_100_100, ml_backend__ml_code_util__GCStatement_32, ml_backend__ml_code_util__MLDS_Context_14);
    }
#line 1655 "ml_code_util.m"
  }
#line 377 "ml_code_util.m"
}

#line 363 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(
#line 363 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CallerType_15,
#line 363 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CalleeType_16,
#line 363 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__BoxPolicy_17,
#line 363 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VarLval_18,
#line 363 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VarName_19,
#line 363 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_20,
#line 363 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ForClosureWrapper_21,
#line 363 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__ArgNum_22,
#line 363 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__ArgLval_23,
#line 363 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__ConvDecls_24,
#line 363 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__ConvInputStatements_25,
#line 363 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__ConvOutputStatements_26,
#line 363 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_46,
#line 363 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_47)
#line 363 "ml_code_util.m"
{
#line 1566 "ml_code_util.m"
  {
#line 1566 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1566 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleInfo_28;
#line 1566 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__BoxedRval_29;
#line 1566 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_48_48;
#line 1573 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_68_68;

#line 1570 "ml_code_util.m"
    {
#line 1570 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_46, &ml_backend__ml_code_util__ModuleInfo_28);
    }
#line 1572 "ml_code_util.m"
    {
#line 1572 "ml_code_util.m"
      ml_backend__ml_code_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1572 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_48_48, 0) = ((MR_Box) (ml_backend__ml_code_util__VarLval_18));
#line 1572 "ml_code_util.m"
    }
#line 1571 "ml_code_util.m"
    {
#line 1571 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_code_util__ModuleInfo_28, ml_backend__ml_code_util__CalleeType_16, ml_backend__ml_code_util__CallerType_15, ml_backend__ml_code_util__BoxPolicy_17, ml_backend__ml_code_util__V_48_48, &ml_backend__ml_code_util__BoxedRval_29);
    }
#line 1573 "ml_code_util.m"
    ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__BoxedRval_29)) == (MR_mktag((MR_Integer) 1)));
#line 1573 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1573 "ml_code_util.m"
      {
#line 1573 "ml_code_util.m"
        ml_backend__ml_code_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__BoxedRval_29, (MR_Integer) 0)));
#line 1573 "ml_code_util.m"
        {
#line 1573 "ml_code_util.m"
          ml_backend__ml_code_util__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_code_util__VarLval_18, ml_backend__ml_code_util__V_68_68);
        }
#line 1573 "ml_code_util.m"
      }
#line 1573 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1574 "ml_code_util.m"
      {
#line 1574 "ml_code_util.m"
        *ml_backend__ml_code_util__ArgLval_23 = ml_backend__ml_code_util__VarLval_18;
#line 1575 "ml_code_util.m"
        *ml_backend__ml_code_util__ConvDecls_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1576 "ml_code_util.m"
        *ml_backend__ml_code_util__ConvInputStatements_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1577 "ml_code_util.m"
        *ml_backend__ml_code_util__ConvOutputStatements_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1574 "ml_code_util.m"
        *ml_backend__ml_code_util__STATE_VARIABLE_Info_47 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_46;
#line 1574 "ml_code_util.m"
      }
#line 1573 "ml_code_util.m"
    else
#line 1595 "ml_code_util.m"
      {
#line 1595 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__ConvVarSeq_30;
#line 1595 "ml_code_util.m"
        MR_String ml_backend__ml_code_util__VarNameStr_31;
#line 1595 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__MaybeNum_32;
#line 1595 "ml_code_util.m"
        MR_Integer ml_backend__ml_code_util__ConvVarNum_33;
#line 1595 "ml_code_util.m"
        MR_String ml_backend__ml_code_util__ConvVarName_34;
#line 1595 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__ArgVarName_35;
#line 1595 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__MLDS_CalleeType_36;
#line 1595 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__ArgVarDecl_39;
#line 1595 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__CallerIsDummy_41;
#line 1595 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49;
#line 1595 "ml_code_util.m"
        MR_String ml_backend__ml_code_util__V_69_69;
#line 1595 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_75_75;
#line 1595 "ml_code_util.m"
        MR_String ml_backend__ml_code_util__V_77_77;
#line 1595 "ml_code_util.m"
        MR_String ml_backend__ml_code_util__V_78_78;
#line 1595 "ml_code_util.m"
        MR_String ml_backend__ml_code_util__V_85_85;
#line 1595 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__ModuleInfo_91;

#line 1595 "ml_code_util.m"
        {
#line 1595 "ml_code_util.m"
          ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(&ml_backend__ml_code_util__ConvVarSeq_30, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_46, &ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49);
        }
#line 1596 "ml_code_util.m"
        ml_backend__ml_code_util__VarNameStr_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__VarName_19, (MR_Integer) 0)));
#line 1596 "ml_code_util.m"
        ml_backend__ml_code_util__MaybeNum_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__VarName_19, (MR_Integer) 1)));
#line 1597 "ml_code_util.m"
        ml_backend__ml_code_util__ConvVarNum_33 = (MR_Integer) ml_backend__ml_code_util__ConvVarSeq_30;
#line 5734 "ml_backend.ml_code_util.c"
        ml_backend__ml_code_util__V_75_75 = (MR_Word) &ml_backend__ml_code_util_scalar_common_4[10];
#line 1598 "ml_code_util.m"
        {
#line 1598 "ml_code_util.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_code_util__V_75_75, ml_backend__ml_code_util__VarNameStr_31, &ml_backend__ml_code_util__V_69_69);
        }
#line 1598 "ml_code_util.m"
        {
#line 1598 "ml_code_util.m"
          ml_backend__ml_code_util__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__ml_code_util__V_69_69);
        }
#line 1598 "ml_code_util.m"
        {
#line 1598 "ml_code_util.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__ml_code_util__V_75_75, ml_backend__ml_code_util__ConvVarNum_33, &ml_backend__ml_code_util__V_78_78);
        }
#line 1598 "ml_code_util.m"
        {
#line 1598 "ml_code_util.m"
          ml_backend__ml_code_util__V_85_85 = mercury__string__f_43_43_2_f_0(ml_backend__ml_code_util__V_78_78, ml_backend__ml_code_util__V_77_77);
        }
#line 1598 "ml_code_util.m"
        {
#line 1598 "ml_code_util.m"
          ml_backend__ml_code_util__ConvVarName_34 = mercury__string__f_43_43_2_f_0((MR_String) "conv", ml_backend__ml_code_util__V_85_85);
        }
#line 1600 "ml_code_util.m"
        {
#line 1600 "ml_code_util.m"
          ml_backend__ml_code_util__ArgVarName_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1600 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ArgVarName_35, 0) = ((MR_Box) (ml_backend__ml_code_util__ConvVarName_34));
#line 1600 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ArgVarName_35, 1) = ((MR_Box) (ml_backend__ml_code_util__MaybeNum_32));
#line 1600 "ml_code_util.m"
        }
#line 788 "ml_code_util.m"
        {
#line 788 "ml_code_util.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49, &ml_backend__ml_code_util__ModuleInfo_91);
        }
#line 789 "ml_code_util.m"
        {
#line 789 "ml_code_util.m"
          ml_backend__ml_code_util__MLDS_CalleeType_36 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_91, ml_backend__ml_code_util__CalleeType_16);
        }
#line 1614 "ml_code_util.m"
#line 1614 "ml_code_util.m"
        switch (ml_backend__ml_code_util__ForClosureWrapper_21) {
#line 1614 "ml_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1614 "ml_code_util.m"
          case (MR_Integer) 0:
#line 1615 "ml_code_util.m"
            {
#line 1615 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__GC_Statements_40;
#line 1615 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_57_57;
#line 1615 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_58_58;

#line 1616 "ml_code_util.m"
              {
#line 1616 "ml_code_util.m"
                ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_p_0(ml_backend__ml_code_util__ArgVarName_35, ml_backend__ml_code_util__CalleeType_16, ml_backend__ml_code_util__CallerType_15, ml_backend__ml_code_util__Context_20, &ml_backend__ml_code_util__GC_Statements_40, ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49, ml_backend__ml_code_util__STATE_VARIABLE_Info_47);
              }
#line 1618 "ml_code_util.m"
              ml_backend__ml_code_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_code_util__ArgVarName_35);
#line 1619 "ml_code_util.m"
              {
#line 1619 "ml_code_util.m"
                ml_backend__ml_code_util__V_58_58 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_20);
              }
#line 1618 "ml_code_util.m"
              {
#line 1618 "ml_code_util.m"
                ml_backend__ml_code_util__ArgVarDecl_39 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_code_util__V_57_57, ml_backend__ml_code_util__MLDS_CalleeType_36, ml_backend__ml_code_util__GC_Statements_40, ml_backend__ml_code_util__V_58_58);
              }
#line 1615 "ml_code_util.m"
            }
#line 1614 "ml_code_util.m"
            break;
#line 1614 "ml_code_util.m"
          case (MR_Integer) 1:
#line 1607 "ml_code_util.m"
            {
#line 1607 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_37_37;
#line 1607 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_38_38;

#line 1607 "ml_code_util.m"
              ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__CallerType_15)) == (MR_mktag((MR_Integer) 0)));
#line 1607 "ml_code_util.m"
              if (ml_backend__ml_code_util__succeeded)
#line 1607 "ml_code_util.m"
                {
#line 1607 "ml_code_util.m"
                  ml_backend__ml_code_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__CallerType_15, (MR_Integer) 0)));
#line 1607 "ml_code_util.m"
                  ml_backend__ml_code_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__CallerType_15, (MR_Integer) 1)));
#line 1608 "ml_code_util.m"
                  {
#line 1608 "ml_code_util.m"
                    ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_p_0(ml_backend__ml_code_util__ArgVarName_35, ml_backend__ml_code_util__CalleeType_16, ml_backend__ml_code_util__ArgNum_22, ml_backend__ml_code_util__Context_20, &ml_backend__ml_code_util__ArgVarDecl_39, ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49, ml_backend__ml_code_util__STATE_VARIABLE_Info_47);
                  }
#line 1607 "ml_code_util.m"
                }
#line 1607 "ml_code_util.m"
              else
#line 1611 "ml_code_util.m"
                {
#line 1611 "ml_code_util.m"
                  {
#line 1611 "ml_code_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_box_or_unbox_lval\'/14", (MR_String) "invalid CalleeType for closure wrapper");
#line 1611 "ml_code_util.m"
                    return;
                  }
#line 1611 "ml_code_util.m"
                }
#line 1607 "ml_code_util.m"
            }
#line 1614 "ml_code_util.m"
            break;
#line 1614 "ml_code_util.m"
        }
#line 1621 "ml_code_util.m"
        {
#line 1621 "ml_code_util.m"
          MR_Word base;
#line 1621 "ml_code_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1621 "ml_code_util.m"
          *ml_backend__ml_code_util__ConvDecls_24 = base;
#line 1621 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__ArgVarDecl_39));
#line 1621 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1621 "ml_code_util.m"
        }
#line 1624 "ml_code_util.m"
        {
#line 1624 "ml_code_util.m"
          ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_47, ml_backend__ml_code_util__ArgVarName_35, ml_backend__ml_code_util__MLDS_CalleeType_36, ml_backend__ml_code_util__ArgLval_23);
        }
#line 1626 "ml_code_util.m"
        {
#line 1626 "ml_code_util.m"
          ml_backend__ml_code_util__CallerIsDummy_41 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_28, ml_backend__ml_code_util__CallerType_15);
        }
#line 1633 "ml_code_util.m"
#line 1633 "ml_code_util.m"
        switch (ml_backend__ml_code_util__CallerIsDummy_41) {
#line 1633 "ml_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1633 "ml_code_util.m"
          case (MR_Integer) 0:
#line 1628 "ml_code_util.m"
            {
#line 1631 "ml_code_util.m"
              *ml_backend__ml_code_util__ConvInputStatements_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1632 "ml_code_util.m"
              *ml_backend__ml_code_util__ConvOutputStatements_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1628 "ml_code_util.m"
            }
#line 1633 "ml_code_util.m"
            break;
#line 1633 "ml_code_util.m"
          case (MR_Integer) 1:
#line 1634 "ml_code_util.m"
            {
#line 1634 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__ConvertedVarRval_42;
#line 1634 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__AssignInputStatement_43;
#line 1634 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__ConvertedArgRval_44;
#line 1634 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__AssignOutputStatement_45;
#line 1634 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_66_66;

#line 1639 "ml_code_util.m"
              {
#line 1639 "ml_code_util.m"
                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_code_util__ModuleInfo_28, ml_backend__ml_code_util__CallerType_15, ml_backend__ml_code_util__CalleeType_16, ml_backend__ml_code_util__BoxPolicy_17, ml_backend__ml_code_util__V_48_48, &ml_backend__ml_code_util__ConvertedVarRval_42);
              }
#line 1641 "ml_code_util.m"
              {
#line 1641 "ml_code_util.m"
                ml_backend__ml_code_util__AssignInputStatement_43 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(*ml_backend__ml_code_util__ArgLval_23, ml_backend__ml_code_util__ConvertedVarRval_42, ml_backend__ml_code_util__Context_20);
              }
#line 1643 "ml_code_util.m"
              {
#line 1643 "ml_code_util.m"
                MR_Word base;
#line 1643 "ml_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1643 "ml_code_util.m"
                *ml_backend__ml_code_util__ConvInputStatements_25 = base;
#line 1643 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__AssignInputStatement_43));
#line 1643 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1643 "ml_code_util.m"
              }
#line 1647 "ml_code_util.m"
              {
#line 1647 "ml_code_util.m"
                ml_backend__ml_code_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1647 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_66_66, 0) = ((MR_Box) (*ml_backend__ml_code_util__ArgLval_23));
#line 1647 "ml_code_util.m"
              }
#line 1646 "ml_code_util.m"
              {
#line 1646 "ml_code_util.m"
                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_code_util__ModuleInfo_28, ml_backend__ml_code_util__CalleeType_16, ml_backend__ml_code_util__CallerType_15, ml_backend__ml_code_util__BoxPolicy_17, ml_backend__ml_code_util__V_66_66, &ml_backend__ml_code_util__ConvertedArgRval_44);
              }
#line 1648 "ml_code_util.m"
              {
#line 1648 "ml_code_util.m"
                ml_backend__ml_code_util__AssignOutputStatement_45 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_code_util__VarLval_18, ml_backend__ml_code_util__ConvertedArgRval_44, ml_backend__ml_code_util__Context_20);
              }
#line 1650 "ml_code_util.m"
              {
#line 1650 "ml_code_util.m"
                MR_Word base;
#line 1650 "ml_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1650 "ml_code_util.m"
                *ml_backend__ml_code_util__ConvOutputStatements_26 = base;
#line 1650 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__AssignOutputStatement_45));
#line 1650 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1650 "ml_code_util.m"
              }
#line 1634 "ml_code_util.m"
            }
#line 1633 "ml_code_util.m"
            break;
#line 1633 "ml_code_util.m"
        }
#line 1595 "ml_code_util.m"
      }
#line 1566 "ml_code_util.m"
  }
#line 363 "ml_code_util.m"
}

#line 341 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(
#line 341 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_7,
#line 341 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__SourceType_8,
#line 341 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__DestType_9,
#line 341 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__BoxPolicy_10,
#line 341 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VarRval_11,
#line 341 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__ArgRval_12)
#line 341 "ml_code_util.m"
{
#line 1491 "ml_code_util.m"
  {
#line 1491 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 1491 "ml_code_util.m"
#line 1491 "ml_code_util.m"
    switch (ml_backend__ml_code_util__BoxPolicy_10) {
#line 1491 "ml_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1491 "ml_code_util.m"
      case (MR_Integer) 1:
#line 1492 "ml_code_util.m"
        *ml_backend__ml_code_util__ArgRval_12 = ml_backend__ml_code_util__VarRval_11;
#line 1491 "ml_code_util.m"
        break;
#line 1491 "ml_code_util.m"
      case (MR_Integer) 0:
#line 1495 "ml_code_util.m"
        {
#line 1497 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_13_13;
#line 1497 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_14_14;
#line 1498 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_15_15;
#line 1498 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_16_16;

#line 1497 "ml_code_util.m"
          ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__SourceType_8)) == (MR_mktag((MR_Integer) 0)));
#line 1497 "ml_code_util.m"
          if (ml_backend__ml_code_util__succeeded)
#line 1497 "ml_code_util.m"
            {
#line 1497 "ml_code_util.m"
              ml_backend__ml_code_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SourceType_8, (MR_Integer) 0)));
#line 1497 "ml_code_util.m"
              ml_backend__ml_code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SourceType_8, (MR_Integer) 1)));
#line 1498 "ml_code_util.m"
              ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__DestType_9)) == (MR_mktag((MR_Integer) 0)));
#line 1498 "ml_code_util.m"
              if (ml_backend__ml_code_util__succeeded)
#line 1498 "ml_code_util.m"
                {
#line 1498 "ml_code_util.m"
                  ml_backend__ml_code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DestType_9, (MR_Integer) 0)));
#line 1498 "ml_code_util.m"
                  ml_backend__ml_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DestType_9, (MR_Integer) 1)));
#line 1498 "ml_code_util.m"
                }
#line 1498 "ml_code_util.m"
              ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
#line 1497 "ml_code_util.m"
            }
#line 1495 "ml_code_util.m"
          if (ml_backend__ml_code_util__succeeded)
#line 1500 "ml_code_util.m"
            {
#line 1500 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__MLDS_DestType_17;
#line 1500 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_32_32;

#line 1500 "ml_code_util.m"
              {
#line 1500 "ml_code_util.m"
                ml_backend__ml_code_util__MLDS_DestType_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__DestType_9);
              }
#line 1501 "ml_code_util.m"
              {
#line 1501 "ml_code_util.m"
                ml_backend__ml_code_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_32_32, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_DestType_17));
#line 1501 "ml_code_util.m"
              }
#line 1501 "ml_code_util.m"
              {
#line 1501 "ml_code_util.m"
                MR_Word base;
#line 1501 "ml_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "ml_code_util.m"
                *ml_backend__ml_code_util__ArgRval_12 = base;
#line 1501 "ml_code_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1501 "ml_code_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_32_32));
#line 1501 "ml_code_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__VarRval_11));
#line 1501 "ml_code_util.m"
              }
#line 1500 "ml_code_util.m"
            }
#line 1495 "ml_code_util.m"
          else
#line 1502 "ml_code_util.m"
            {
#line 1504 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_18_18;
#line 1504 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_19_19;
#line 1505 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_20_20;
#line 1505 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_21_21;

#line 1504 "ml_code_util.m"
              ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__SourceType_8)) == (MR_mktag((MR_Integer) 0)));
#line 1504 "ml_code_util.m"
              if (ml_backend__ml_code_util__succeeded)
#line 1504 "ml_code_util.m"
                {
#line 1504 "ml_code_util.m"
                  ml_backend__ml_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SourceType_8, (MR_Integer) 0)));
#line 1504 "ml_code_util.m"
                  ml_backend__ml_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SourceType_8, (MR_Integer) 1)));
#line 1504 "ml_code_util.m"
                }
#line 1504 "ml_code_util.m"
              ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
#line 1504 "ml_code_util.m"
              if (ml_backend__ml_code_util__succeeded)
#line 1504 "ml_code_util.m"
                {
#line 1505 "ml_code_util.m"
                  ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__DestType_9)) == (MR_mktag((MR_Integer) 0)));
#line 1505 "ml_code_util.m"
                  if (ml_backend__ml_code_util__succeeded)
#line 1505 "ml_code_util.m"
                    {
#line 1505 "ml_code_util.m"
                      ml_backend__ml_code_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DestType_9, (MR_Integer) 0)));
#line 1505 "ml_code_util.m"
                      ml_backend__ml_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DestType_9, (MR_Integer) 1)));
#line 1505 "ml_code_util.m"
                    }
#line 1504 "ml_code_util.m"
                }
#line 1502 "ml_code_util.m"
              if (ml_backend__ml_code_util__succeeded)
#line 1508 "ml_code_util.m"
                {
#line 1508 "ml_code_util.m"
                  MR_Word ml_backend__ml_code_util__MLDS_SourceType_22;
#line 1508 "ml_code_util.m"
                  MR_Word ml_backend__ml_code_util__V_33_33;

#line 1507 "ml_code_util.m"
                  {
#line 1507 "ml_code_util.m"
                    ml_backend__ml_code_util__MLDS_SourceType_22 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__SourceType_8);
                  }
#line 1509 "ml_code_util.m"
                  {
#line 1509 "ml_code_util.m"
                    ml_backend__ml_code_util__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1509 "ml_code_util.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_33_33, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_SourceType_22));
#line 1509 "ml_code_util.m"
                  }
#line 1509 "ml_code_util.m"
                  {
#line 1509 "ml_code_util.m"
                    MR_Word base;
#line 1509 "ml_code_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "ml_code_util.m"
                    *ml_backend__ml_code_util__ArgRval_12 = base;
#line 1509 "ml_code_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1509 "ml_code_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_33_33));
#line 1509 "ml_code_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__VarRval_11));
#line 1509 "ml_code_util.m"
                  }
#line 1508 "ml_code_util.m"
                }
#line 1502 "ml_code_util.m"
              else
#line 1510 "ml_code_util.m"
                {
#line 1512 "ml_code_util.m"
                  MR_Word ml_backend__ml_code_util__V_34_34;
#line 1513 "ml_code_util.m"
                  MR_Word ml_backend__ml_code_util__V_35_35;

#line 1513 "ml_code_util.m"
                  ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__SourceType_8)) == (MR_mktag((MR_Integer) 2)));
#line 1513 "ml_code_util.m"
                  if (ml_backend__ml_code_util__succeeded)
#line 1513 "ml_code_util.m"
                    {
#line 1513 "ml_code_util.m"
                      ml_backend__ml_code_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__SourceType_8, (MR_Integer) 0)));
#line 1513 "ml_code_util.m"
                      ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_35_35 == (MR_Integer) 1);
#line 1513 "ml_code_util.m"
                    }
#line 1513 "ml_code_util.m"
                  ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
#line 1512 "ml_code_util.m"
                  if (ml_backend__ml_code_util__succeeded)
#line 1512 "ml_code_util.m"
                    {
#line 1512 "ml_code_util.m"
                      ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__DestType_9)) == (MR_mktag((MR_Integer) 2)));
#line 1512 "ml_code_util.m"
                      if (ml_backend__ml_code_util__succeeded)
#line 1512 "ml_code_util.m"
                        {
#line 1512 "ml_code_util.m"
                          ml_backend__ml_code_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__DestType_9, (MR_Integer) 0)));
#line 1512 "ml_code_util.m"
                          ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_34_34 == (MR_Integer) 1);
#line 1512 "ml_code_util.m"
                        }
#line 1512 "ml_code_util.m"
                    }
#line 1510 "ml_code_util.m"
                  if (ml_backend__ml_code_util__succeeded)
#line 1515 "ml_code_util.m"
                    {
#line 1515 "ml_code_util.m"
                      MR_Word ml_backend__ml_code_util__V_36_36;
#line 1515 "ml_code_util.m"
                      MR_Word ml_backend__ml_code_util__V_37_37;
#line 1515 "ml_code_util.m"
                      MR_Word ml_backend__ml_code_util__MLDS_DestType_53;

#line 1515 "ml_code_util.m"
                      {
#line 1515 "ml_code_util.m"
                        ml_backend__ml_code_util__MLDS_DestType_53 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__DestType_9);
                      }
#line 1516 "ml_code_util.m"
                      {
#line 1516 "ml_code_util.m"
                        ml_backend__ml_code_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "ml_code_util.m"
                        MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_36_36, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_DestType_53));
#line 1516 "ml_code_util.m"
                      }
#line 1517 "ml_code_util.m"
                      {
#line 1517 "ml_code_util.m"
                        ml_backend__ml_code_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "ml_code_util.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1517 "ml_code_util.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[9])));
#line 1517 "ml_code_util.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_37_37, 2) = ((MR_Box) (ml_backend__ml_code_util__VarRval_11));
#line 1517 "ml_code_util.m"
                      }
#line 1516 "ml_code_util.m"
                      {
#line 1516 "ml_code_util.m"
                        MR_Word base;
#line 1516 "ml_code_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "ml_code_util.m"
                        *ml_backend__ml_code_util__ArgRval_12 = base;
#line 1516 "ml_code_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1516 "ml_code_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_36_36));
#line 1516 "ml_code_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__V_37_37));
#line 1516 "ml_code_util.m"
                      }
#line 1515 "ml_code_util.m"
                    }
#line 1510 "ml_code_util.m"
                  else
#line 1518 "ml_code_util.m"
                    {
#line 1520 "ml_code_util.m"
                      MR_Word ml_backend__ml_code_util__V_40_40;
#line 1521 "ml_code_util.m"
                      MR_Word ml_backend__ml_code_util__V_41_41;

#line 1521 "ml_code_util.m"
                      ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__DestType_9)) == (MR_mktag((MR_Integer) 2)));
#line 1521 "ml_code_util.m"
                      if (ml_backend__ml_code_util__succeeded)
#line 1521 "ml_code_util.m"
                        {
#line 1521 "ml_code_util.m"
                          ml_backend__ml_code_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__DestType_9, (MR_Integer) 0)));
#line 1521 "ml_code_util.m"
                          ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_41_41 == (MR_Integer) 1);
#line 1521 "ml_code_util.m"
                        }
#line 1521 "ml_code_util.m"
                      ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
#line 1520 "ml_code_util.m"
                      if (ml_backend__ml_code_util__succeeded)
#line 1520 "ml_code_util.m"
                        {
#line 1520 "ml_code_util.m"
                          ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__SourceType_8)) == (MR_mktag((MR_Integer) 2)));
#line 1520 "ml_code_util.m"
                          if (ml_backend__ml_code_util__succeeded)
#line 1520 "ml_code_util.m"
                            {
#line 1520 "ml_code_util.m"
                              ml_backend__ml_code_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__SourceType_8, (MR_Integer) 0)));
#line 1520 "ml_code_util.m"
                              ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_40_40 == (MR_Integer) 1);
#line 1520 "ml_code_util.m"
                            }
#line 1520 "ml_code_util.m"
                        }
#line 1518 "ml_code_util.m"
                      if (ml_backend__ml_code_util__succeeded)
#line 1524 "ml_code_util.m"
                        {
#line 1524 "ml_code_util.m"
                          MR_Word ml_backend__ml_code_util__V_42_42;
#line 1524 "ml_code_util.m"
                          MR_Word ml_backend__ml_code_util__V_43_43;
#line 1524 "ml_code_util.m"
                          MR_Word ml_backend__ml_code_util__V_44_44;
#line 1524 "ml_code_util.m"
                          MR_Word ml_backend__ml_code_util__MLDS_DestType_54;
#line 1524 "ml_code_util.m"
                          MR_Word ml_backend__ml_code_util__MLDS_SourceType_55;

#line 1523 "ml_code_util.m"
                          {
#line 1523 "ml_code_util.m"
                            ml_backend__ml_code_util__MLDS_SourceType_55 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__SourceType_8);
                          }
#line 1525 "ml_code_util.m"
                          {
#line 1525 "ml_code_util.m"
                            ml_backend__ml_code_util__MLDS_DestType_54 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__DestType_9);
                          }
#line 1526 "ml_code_util.m"
                          {
#line 1526 "ml_code_util.m"
                            ml_backend__ml_code_util__V_42_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1526 "ml_code_util.m"
                            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__V_42_42, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_DestType_54));
#line 1526 "ml_code_util.m"
                          }
#line 1527 "ml_code_util.m"
                          {
#line 1527 "ml_code_util.m"
                            ml_backend__ml_code_util__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1527 "ml_code_util.m"
                            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_44_44, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_SourceType_55));
#line 1527 "ml_code_util.m"
                          }
#line 1527 "ml_code_util.m"
                          {
#line 1527 "ml_code_util.m"
                            ml_backend__ml_code_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "ml_code_util.m"
                            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1527 "ml_code_util.m"
                            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_43_43, 1) = ((MR_Box) (ml_backend__ml_code_util__V_44_44));
#line 1527 "ml_code_util.m"
                            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_43_43, 2) = ((MR_Box) (ml_backend__ml_code_util__VarRval_11));
#line 1527 "ml_code_util.m"
                          }
#line 1526 "ml_code_util.m"
                          {
#line 1526 "ml_code_util.m"
                            MR_Word base;
#line 1526 "ml_code_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1526 "ml_code_util.m"
                            *ml_backend__ml_code_util__ArgRval_12 = base;
#line 1526 "ml_code_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1526 "ml_code_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_42_42));
#line 1526 "ml_code_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__V_43_43));
#line 1526 "ml_code_util.m"
                          }
#line 1524 "ml_code_util.m"
                        }
#line 1518 "ml_code_util.m"
                      else
#line 1528 "ml_code_util.m"
                        {
#line 1533 "ml_code_util.m"
                          MR_Word ml_backend__ml_code_util__SourceTypeCtor_23;
#line 1533 "ml_code_util.m"
                          MR_Word ml_backend__ml_code_util__SourceTypeArgs_24;
#line 1533 "ml_code_util.m"
                          MR_Word ml_backend__ml_code_util__DestTypeCtor_25;
#line 1533 "ml_code_util.m"
                          MR_Word ml_backend__ml_code_util__DestTypeArgs_26;

#line 1533 "ml_code_util.m"
                          {
#line 1533 "ml_code_util.m"
                            ml_backend__ml_code_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ml_backend__ml_code_util__SourceType_8, &ml_backend__ml_code_util__SourceTypeCtor_23, &ml_backend__ml_code_util__SourceTypeArgs_24);
                          }
#line 1533 "ml_code_util.m"
                          if (ml_backend__ml_code_util__succeeded)
#line 1533 "ml_code_util.m"
                            {
#line 1534 "ml_code_util.m"
                              {
#line 1534 "ml_code_util.m"
                                ml_backend__ml_code_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ml_backend__ml_code_util__DestType_9, &ml_backend__ml_code_util__DestTypeCtor_25, &ml_backend__ml_code_util__DestTypeArgs_26);
                              }
#line 1533 "ml_code_util.m"
                              if (ml_backend__ml_code_util__succeeded)
#line 1533 "ml_code_util.m"
                                {
#line 1536 "ml_code_util.m"
                                  {
#line 1536 "ml_code_util.m"
                                    MR_Word ml_backend__ml_code_util__V_47_47;
#line 1536 "ml_code_util.m"
                                    MR_Word ml_backend__ml_code_util__V_48_48;
#line 1537 "ml_code_util.m"
                                    MR_Word ml_backend__ml_code_util__V_27_27;
#line 1537 "ml_code_util.m"
                                    MR_Word ml_backend__ml_code_util__V_28_28;

#line 1536 "ml_code_util.m"
                                    {
#line 1536 "ml_code_util.m"
                                      ml_backend__ml_code_util__succeeded = parse_tree__prog_type__type_ctor_is_array_1_p_0(ml_backend__ml_code_util__SourceTypeCtor_23);
                                    }
#line 1536 "ml_code_util.m"
                                    if (ml_backend__ml_code_util__succeeded)
#line 1536 "ml_code_util.m"
                                      {
#line 1537 "ml_code_util.m"
                                        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__SourceTypeArgs_24)) == (MR_mktag((MR_Integer) 1)));
#line 1537 "ml_code_util.m"
                                        if (ml_backend__ml_code_util__succeeded)
#line 1537 "ml_code_util.m"
                                          {
#line 1537 "ml_code_util.m"
                                            ml_backend__ml_code_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__SourceTypeArgs_24, (MR_Integer) 0)));
#line 1537 "ml_code_util.m"
                                            ml_backend__ml_code_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__SourceTypeArgs_24, (MR_Integer) 1)));
#line 1537 "ml_code_util.m"
                                            ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__V_47_47)) == (MR_mktag((MR_Integer) 0)));
#line 1537 "ml_code_util.m"
                                            if (ml_backend__ml_code_util__succeeded)
#line 1537 "ml_code_util.m"
                                              {
#line 1537 "ml_code_util.m"
                                                ml_backend__ml_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_47_47, (MR_Integer) 0)));
#line 1537 "ml_code_util.m"
                                                ml_backend__ml_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_47_47, (MR_Integer) 1)));
#line 1537 "ml_code_util.m"
                                                ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1537 "ml_code_util.m"
                                              }
#line 1537 "ml_code_util.m"
                                          }
#line 1536 "ml_code_util.m"
                                      }
#line 1536 "ml_code_util.m"
                                  }
#line 1538 "ml_code_util.m"
                                  if (!(ml_backend__ml_code_util__succeeded))
#line 1539 "ml_code_util.m"
                                    {
#line 1539 "ml_code_util.m"
                                      MR_Word ml_backend__ml_code_util__V_45_45;
#line 1539 "ml_code_util.m"
                                      MR_Word ml_backend__ml_code_util__V_46_46;
#line 1540 "ml_code_util.m"
                                      MR_Word ml_backend__ml_code_util__V_29_29;
#line 1540 "ml_code_util.m"
                                      MR_Word ml_backend__ml_code_util__V_30_30;

#line 1539 "ml_code_util.m"
                                      {
#line 1539 "ml_code_util.m"
                                        ml_backend__ml_code_util__succeeded = parse_tree__prog_type__type_ctor_is_array_1_p_0(ml_backend__ml_code_util__DestTypeCtor_25);
                                      }
#line 1539 "ml_code_util.m"
                                      if (ml_backend__ml_code_util__succeeded)
#line 1539 "ml_code_util.m"
                                        {
#line 1540 "ml_code_util.m"
                                          ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__DestTypeArgs_26)) == (MR_mktag((MR_Integer) 1)));
#line 1540 "ml_code_util.m"
                                          if (ml_backend__ml_code_util__succeeded)
#line 1540 "ml_code_util.m"
                                            {
#line 1540 "ml_code_util.m"
                                              ml_backend__ml_code_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__DestTypeArgs_26, (MR_Integer) 0)));
#line 1540 "ml_code_util.m"
                                              ml_backend__ml_code_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__DestTypeArgs_26, (MR_Integer) 1)));
#line 1540 "ml_code_util.m"
                                              ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 1540 "ml_code_util.m"
                                              if (ml_backend__ml_code_util__succeeded)
#line 1540 "ml_code_util.m"
                                                {
#line 1540 "ml_code_util.m"
                                                  ml_backend__ml_code_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_45_45, (MR_Integer) 0)));
#line 1540 "ml_code_util.m"
                                                  ml_backend__ml_code_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_45_45, (MR_Integer) 1)));
#line 1540 "ml_code_util.m"
                                                  ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1540 "ml_code_util.m"
                                                }
#line 1540 "ml_code_util.m"
                                            }
#line 1539 "ml_code_util.m"
                                        }
#line 1539 "ml_code_util.m"
                                    }
#line 1533 "ml_code_util.m"
                                  if (ml_backend__ml_code_util__succeeded)
#line 1533 "ml_code_util.m"
                                    {
#line 1545 "ml_code_util.m"
                                      {
#line 1545 "ml_code_util.m"
                                        ml_backend__ml_code_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_code_util__SourceType_8, ml_backend__ml_code_util__DestType_9);
                                      }
#line 1545 "ml_code_util.m"
                                      ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
#line 1533 "ml_code_util.m"
                                    }
#line 1533 "ml_code_util.m"
                                }
#line 1533 "ml_code_util.m"
                            }
#line 1528 "ml_code_util.m"
                          if (ml_backend__ml_code_util__succeeded)
#line 1547 "ml_code_util.m"
                            {
#line 1547 "ml_code_util.m"
                              MR_Word ml_backend__ml_code_util__V_49_49;
#line 1547 "ml_code_util.m"
                              MR_Word ml_backend__ml_code_util__MLDS_DestType_56;

#line 1547 "ml_code_util.m"
                              {
#line 1547 "ml_code_util.m"
                                ml_backend__ml_code_util__MLDS_DestType_56 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__DestType_9);
                              }
#line 1548 "ml_code_util.m"
                              {
#line 1548 "ml_code_util.m"
                                ml_backend__ml_code_util__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "ml_code_util.m"
                                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__V_49_49, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_DestType_56));
#line 1548 "ml_code_util.m"
                              }
#line 1548 "ml_code_util.m"
                              {
#line 1548 "ml_code_util.m"
                                MR_Word base;
#line 1548 "ml_code_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "ml_code_util.m"
                                *ml_backend__ml_code_util__ArgRval_12 = base;
#line 1548 "ml_code_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1548 "ml_code_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_49_49));
#line 1548 "ml_code_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__VarRval_11));
#line 1548 "ml_code_util.m"
                              }
#line 1547 "ml_code_util.m"
                            }
#line 1528 "ml_code_util.m"
                          else
#line 1549 "ml_code_util.m"
                            {
#line 1554 "ml_code_util.m"
                              MR_Word ml_backend__ml_code_util__V_51_51;
#line 1554 "ml_code_util.m"
                              MR_Word ml_backend__ml_code_util__V_31_31;

#line 1554 "ml_code_util.m"
                              {
#line 1554 "ml_code_util.m"
                                ml_backend__ml_code_util__V_51_51 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                              }
#line 1554 "ml_code_util.m"
                              {
#line 1554 "ml_code_util.m"
                                ml_backend__ml_code_util__succeeded = parse_tree__prog_type__type_unify_5_p_0(ml_backend__ml_code_util__SourceType_8, ml_backend__ml_code_util__DestType_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_code_util__V_51_51, &ml_backend__ml_code_util__V_31_31);
                              }
#line 1554 "ml_code_util.m"
                              ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
#line 1549 "ml_code_util.m"
                              if (ml_backend__ml_code_util__succeeded)
#line 1556 "ml_code_util.m"
                                {
#line 1556 "ml_code_util.m"
                                  MR_Word ml_backend__ml_code_util__V_52_52;
#line 1556 "ml_code_util.m"
                                  MR_Word ml_backend__ml_code_util__MLDS_DestType_57;

#line 1556 "ml_code_util.m"
                                  {
#line 1556 "ml_code_util.m"
                                    ml_backend__ml_code_util__MLDS_DestType_57 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__DestType_9);
                                  }
#line 1557 "ml_code_util.m"
                                  {
#line 1557 "ml_code_util.m"
                                    ml_backend__ml_code_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "ml_code_util.m"
                                    MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__V_52_52, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_DestType_57));
#line 1557 "ml_code_util.m"
                                  }
#line 1557 "ml_code_util.m"
                                  {
#line 1557 "ml_code_util.m"
                                    MR_Word base;
#line 1557 "ml_code_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "ml_code_util.m"
                                    *ml_backend__ml_code_util__ArgRval_12 = base;
#line 1557 "ml_code_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1557 "ml_code_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_52_52));
#line 1557 "ml_code_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__VarRval_11));
#line 1557 "ml_code_util.m"
                                  }
#line 1556 "ml_code_util.m"
                                }
#line 1549 "ml_code_util.m"
                              else
#line 1560 "ml_code_util.m"
                                *ml_backend__ml_code_util__ArgRval_12 = ml_backend__ml_code_util__VarRval_11;
#line 1549 "ml_code_util.m"
                            }
#line 1528 "ml_code_util.m"
                        }
#line 1518 "ml_code_util.m"
                    }
#line 1510 "ml_code_util.m"
                }
#line 1502 "ml_code_util.m"
            }
#line 1495 "ml_code_util.m"
        }
#line 1491 "ml_code_util.m"
        break;
#line 1491 "ml_code_util.m"
    }
#line 1491 "ml_code_util.m"
  }
#line 341 "ml_code_util.m"
}

#line 333 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(
#line 333 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_9,
#line 333 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_10,
#line 333 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__MLDS_Type_11,
#line 333 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__DoubleWidth_12,
#line 333 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Rval_13,
#line 333 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__BoxedRval_14,
#line 333 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_0_29,
#line 333 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_30)
#line 333 "ml_code_util.m"
{
#line 1445 "ml_code_util.m"
  {
#line 1445 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 1447 "ml_code_util.m"
    if ((ml_backend__ml_code_util__MLDS_Type_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1447 "ml_code_util.m"
      ml_backend__ml_code_util__succeeded = MR_TRUE;
#line 1447 "ml_code_util.m"
    else
#line 1447 "ml_code_util.m"
    if (((MR_tag((MR_Word) ml_backend__ml_code_util__MLDS_Type_11)) == (MR_mktag((MR_Integer) 2))))
#line 1446 "ml_code_util.m"
      {
#line 1446 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_11, (MR_Integer) 0)));
#line 1446 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_11, (MR_Integer) 1)));
#line 1446 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_11, (MR_Integer) 2)));
#line 1446 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_16_16;
#line 1446 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_17_17;

#line 1446 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1446 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1446 "ml_code_util.m"
          {
#line 1446 "ml_code_util.m"
            ml_backend__ml_code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_31_31, (MR_Integer) 0)));
#line 1446 "ml_code_util.m"
            ml_backend__ml_code_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_31_31, (MR_Integer) 1)));
#line 1446 "ml_code_util.m"
          }
#line 1446 "ml_code_util.m"
      }
#line 1447 "ml_code_util.m"
    else
#line 1447 "ml_code_util.m"
      ml_backend__ml_code_util__succeeded = MR_FALSE;
#line 1445 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1450 "ml_code_util.m"
      {
#line 1450 "ml_code_util.m"
        *ml_backend__ml_code_util__BoxedRval_14 = ml_backend__ml_code_util__Rval_13;
#line 1450 "ml_code_util.m"
        *ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_30 = ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_0_29;
#line 1450 "ml_code_util.m"
      }
#line 1445 "ml_code_util.m"
    else
#line 1451 "ml_code_util.m"
      {
#line 1458 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Globals_22;
#line 1458 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Target_23;

#line 1457 "ml_code_util.m"
        if ((ml_backend__ml_code_util__MLDS_Type_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1457 "ml_code_util.m"
          ml_backend__ml_code_util__succeeded = MR_TRUE;
#line 1457 "ml_code_util.m"
        else
#line 1457 "ml_code_util.m"
        if (((MR_tag((MR_Word) ml_backend__ml_code_util__MLDS_Type_11)) == (MR_mktag((MR_Integer) 2))))
#line 1456 "ml_code_util.m"
          {
#line 1456 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_11, (MR_Integer) 0)));
#line 1456 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__V_33_33;
#line 1456 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_11, (MR_Integer) 1)));
#line 1456 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_11, (MR_Integer) 2)));

#line 1456 "ml_code_util.m"
            ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__V_32_32)) == (MR_mktag((MR_Integer) 2)));
#line 1456 "ml_code_util.m"
            if (ml_backend__ml_code_util__succeeded)
#line 1456 "ml_code_util.m"
              {
#line 1456 "ml_code_util.m"
                ml_backend__ml_code_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__V_32_32, (MR_Integer) 0)));
#line 1456 "ml_code_util.m"
                ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_33_33 == (MR_Integer) 1);
#line 1456 "ml_code_util.m"
              }
#line 1456 "ml_code_util.m"
          }
#line 1457 "ml_code_util.m"
        else
#line 1457 "ml_code_util.m"
          ml_backend__ml_code_util__succeeded = MR_FALSE;
#line 1458 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1458 "ml_code_util.m"
          {
#line 1459 "ml_code_util.m"
            {
#line 1459 "ml_code_util.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_code_util__ModuleInfo_9, &ml_backend__ml_code_util__Globals_22);
            }
#line 1460 "ml_code_util.m"
            {
#line 1460 "ml_code_util.m"
              libs__globals__get_target_2_p_0(ml_backend__ml_code_util__Globals_22, &ml_backend__ml_code_util__Target_23);
            }
#line 1461 "ml_code_util.m"
            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__Target_23 == (MR_Integer) 0);
#line 1458 "ml_code_util.m"
          }
#line 1451 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1463 "ml_code_util.m"
          {
#line 1463 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__HaveUnboxedFloats_24;

#line 1463 "ml_code_util.m"
            {
#line 1463 "ml_code_util.m"
              ml_backend__ml_code_util__HaveUnboxedFloats_24 = ml_backend__ml_global_data__ml_global_data_have_unboxed_floats_1_f_0(ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_0_29);
            }
#line 1465 "ml_code_util.m"
            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__HaveUnboxedFloats_24 == (MR_Integer) 1);
#line 1465 "ml_code_util.m"
            if (ml_backend__ml_code_util__succeeded)
#line 1466 "ml_code_util.m"
              ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__DoubleWidth_12 == (MR_Integer) 0);
#line 1464 "ml_code_util.m"
            if (ml_backend__ml_code_util__succeeded)
#line 1469 "ml_code_util.m"
              {
#line 1469 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__ModuleName_25;
#line 1469 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__MLDS_ModuleName_26;
#line 1469 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__Initializer_27;
#line 1469 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__ConstAddrRval_28;

#line 1469 "ml_code_util.m"
                {
#line 1469 "ml_code_util.m"
                  hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_code_util__ModuleInfo_9, &ml_backend__ml_code_util__ModuleName_25);
                }
#line 1470 "ml_code_util.m"
                {
#line 1470 "ml_code_util.m"
                  ml_backend__ml_code_util__MLDS_ModuleName_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_25);
                }
#line 1471 "ml_code_util.m"
                {
#line 1471 "ml_code_util.m"
                  ml_backend__ml_code_util__Initializer_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "ml_code_util.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Initializer_27, 0) = ((MR_Box) (ml_backend__ml_code_util__Rval_13));
#line 1471 "ml_code_util.m"
                }
#line 1472 "ml_code_util.m"
                {
#line 1472 "ml_code_util.m"
                  ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(ml_backend__ml_code_util__MLDS_ModuleName_26, (MR_String) "float", ml_backend__ml_code_util__MLDS_Type_11, ml_backend__ml_code_util__Initializer_27, ml_backend__ml_code_util__Context_10, &ml_backend__ml_code_util__ConstAddrRval_28, ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_0_29, ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_30);
                }
#line 1477 "ml_code_util.m"
                {
#line 1477 "ml_code_util.m"
                  MR_Word base;
#line 1477 "ml_code_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1477 "ml_code_util.m"
                  *ml_backend__ml_code_util__BoxedRval_14 = base;
#line 1477 "ml_code_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1477 "ml_code_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_4[9])));
#line 1477 "ml_code_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__ConstAddrRval_28));
#line 1477 "ml_code_util.m"
                }
#line 1469 "ml_code_util.m"
              }
#line 1464 "ml_code_util.m"
            else
#line 1481 "ml_code_util.m"
              {
#line 1481 "ml_code_util.m"
                MR_Word ml_backend__ml_code_util__V_38_38;

#line 1481 "ml_code_util.m"
                {
#line 1481 "ml_code_util.m"
                  ml_backend__ml_code_util__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1481 "ml_code_util.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_38_38, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_11));
#line 1481 "ml_code_util.m"
                }
#line 1481 "ml_code_util.m"
                {
#line 1481 "ml_code_util.m"
                  MR_Word base;
#line 1481 "ml_code_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1481 "ml_code_util.m"
                  *ml_backend__ml_code_util__BoxedRval_14 = base;
#line 1481 "ml_code_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1481 "ml_code_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_38_38));
#line 1481 "ml_code_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__Rval_13));
#line 1481 "ml_code_util.m"
                }
#line 1481 "ml_code_util.m"
                *ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_30 = ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_0_29;
#line 1481 "ml_code_util.m"
              }
#line 1463 "ml_code_util.m"
          }
#line 1451 "ml_code_util.m"
        else
#line 1484 "ml_code_util.m"
          {
#line 1484 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__V_39_39;

#line 1484 "ml_code_util.m"
            {
#line 1484 "ml_code_util.m"
              ml_backend__ml_code_util__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1484 "ml_code_util.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_39_39, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_11));
#line 1484 "ml_code_util.m"
            }
#line 1484 "ml_code_util.m"
            {
#line 1484 "ml_code_util.m"
              MR_Word base;
#line 1484 "ml_code_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "ml_code_util.m"
              *ml_backend__ml_code_util__BoxedRval_14 = base;
#line 1484 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1484 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_39_39));
#line 1484 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_code_util__Rval_13));
#line 1484 "ml_code_util.m"
            }
#line 1484 "ml_code_util.m"
            *ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_30 = ml_backend__ml_code_util__STATE_VARIABLE_GlobalData_0_29;
#line 1484 "ml_code_util.m"
          }
#line 1451 "ml_code_util.m"
      }
#line 1445 "ml_code_util.m"
  }
#line 333 "ml_code_util.m"
}

#line 330 "ml_code_util.m"
MR_bool MR_CALL 
ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(
#line 330 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_4,
#line 330 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Type_5,
#line 330 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Width_6)
#line 330 "ml_code_util.m"
{
#line 1383 "ml_code_util.m"
  {
#line 1383 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1383 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Globals_7;
#line 1383 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Target_8;
#line 1383 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__UnboxedFloat_9;

#line 1384 "ml_code_util.m"
    {
#line 1384 "ml_code_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_code_util__ModuleInfo_4, &ml_backend__ml_code_util__Globals_7);
    }
#line 1385 "ml_code_util.m"
    {
#line 1385 "ml_code_util.m"
      libs__globals__get_target_2_p_0(ml_backend__ml_code_util__Globals_7, &ml_backend__ml_code_util__Target_8);
    }
#line 1386 "ml_code_util.m"
    {
#line 1386 "ml_code_util.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_code_util__Globals_7, (MR_Integer) 241, &ml_backend__ml_code_util__UnboxedFloat_9);
    }
#line 1395 "ml_code_util.m"
#line 1395 "ml_code_util.m"
    switch (ml_backend__ml_code_util__Target_8) {
#line 1395 "ml_code_util.m"
      default:
#line 1395 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = MR_FALSE;
#line 1395 "ml_code_util.m"
        break;
#line 1395 "ml_code_util.m"
      case (MR_Integer) 0:
#line 1395 "ml_code_util.m"
      case (MR_Integer) 1:
#line 1395 "ml_code_util.m"
      case (MR_Integer) 3:
#line 1391 "ml_code_util.m"
        {
#line 1391 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__Category_10;
#line 1391 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_76_76;

#line 1392 "ml_code_util.m"
          {
#line 1392 "ml_code_util.m"
            ml_backend__ml_code_util__Category_10 = check_hlds__type_util__classify_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_4, ml_backend__ml_code_util__Type_5);
          }
#line 7022 "ml_backend.ml_code_util.c"
          ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__Category_10)) == (MR_mktag((MR_Integer) 1)));
#line 7024 "ml_backend.ml_code_util.c"
          if (ml_backend__ml_code_util__succeeded)
#line 7026 "ml_backend.ml_code_util.c"
            {
#line 7028 "ml_backend.ml_code_util.c"
              ml_backend__ml_code_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Category_10, (MR_Integer) 0)));
#line 1416 "ml_code_util.m"
#line 1416 "ml_code_util.m"
              switch (ml_backend__ml_code_util__V_76_76) {
#line 1416 "ml_code_util.m"
                default:
#line 1416 "ml_code_util.m"
                  ml_backend__ml_code_util__succeeded = MR_FALSE;
#line 1416 "ml_code_util.m"
                  break;
#line 1416 "ml_code_util.m"
                case (MR_Integer) 2:
#line 1420 "ml_code_util.m"
                  ml_backend__ml_code_util__succeeded = MR_TRUE;
#line 1416 "ml_code_util.m"
                  break;
#line 1416 "ml_code_util.m"
                case (MR_Integer) 1:
#line 7047 "ml_backend.ml_code_util.c"
                  {
#line 7049 "ml_backend.ml_code_util.c"
                    ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__UnboxedFloat_9 == (MR_Integer) 0);
#line 7051 "ml_backend.ml_code_util.c"
                    if (ml_backend__ml_code_util__succeeded)
#line 1427 "ml_code_util.m"
#line 1427 "ml_code_util.m"
                      switch (MR_tag((MR_Word) ml_backend__ml_code_util__Width_6)) {
#line 1427 "ml_code_util.m"
                        default:
#line 1427 "ml_code_util.m"
                          ml_backend__ml_code_util__succeeded = MR_FALSE;
#line 1427 "ml_code_util.m"
                          break;
#line 1427 "ml_code_util.m"
                        case (MR_Integer) 0:
#line 1427 "ml_code_util.m"
#line 1427 "ml_code_util.m"
                          switch (MR_unmkbody(ml_backend__ml_code_util__Width_6)) {
#line 1427 "ml_code_util.m"
                            default:
#line 1427 "ml_code_util.m"
                              ml_backend__ml_code_util__succeeded = MR_FALSE;
#line 1427 "ml_code_util.m"
                              break;
#line 1427 "ml_code_util.m"
                            case (MR_Integer) 0:
#line 1429 "ml_code_util.m"
                              ml_backend__ml_code_util__succeeded = MR_TRUE;
#line 1427 "ml_code_util.m"
                              break;
#line 1427 "ml_code_util.m"
                          }
#line 1427 "ml_code_util.m"
                          break;
#line 1427 "ml_code_util.m"
                        case (MR_Integer) 1:
#line 1427 "ml_code_util.m"
                        case (MR_Integer) 2:
#line 1437 "ml_code_util.m"
                          {
#line 1438 "ml_code_util.m"
                            {
#line 1438 "ml_code_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "function \140ml_backend.ml_code_util.ml_must_box_field_type_category\'/3", (MR_String) "partial word for float");
                            }
#line 1437 "ml_code_util.m"
                            ml_backend__ml_code_util__succeeded = MR_TRUE;
#line 1437 "ml_code_util.m"
                          }
#line 1427 "ml_code_util.m"
                          break;
#line 1427 "ml_code_util.m"
                      }
#line 7102 "ml_backend.ml_code_util.c"
                  }
#line 1416 "ml_code_util.m"
                  break;
#line 1416 "ml_code_util.m"
              }
#line 7108 "ml_backend.ml_code_util.c"
            }
#line 1391 "ml_code_util.m"
        }
#line 1395 "ml_code_util.m"
        break;
#line 1395 "ml_code_util.m"
    }
#line 1383 "ml_code_util.m"
    return ml_backend__ml_code_util__succeeded;
#line 1383 "ml_code_util.m"
  }
#line 330 "ml_code_util.m"
}

#line 326 "ml_code_util.m"
MR_String MR_CALL 
ml_backend__ml_code_util__ml_gen_field_name_2_f_0(
#line 326 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__MaybeFieldName_4,
#line 326 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__ArgNum_5)
#line 326 "ml_code_util.m"
{
#line 1372 "ml_code_util.m"
  {
#line 1372 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1372 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__FieldName_6;

#line 1372 "ml_code_util.m"
    if ((ml_backend__ml_code_util__MaybeFieldName_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1375 "ml_code_util.m"
      {
#line 1375 "ml_code_util.m"
        MR_String ml_backend__ml_code_util__V_10_10;

#line 1376 "ml_code_util.m"
        {
#line 1376 "ml_code_util.m"
          ml_backend__ml_code_util__V_10_10 = mercury__string__int_to_string_1_f_0(ml_backend__ml_code_util__ArgNum_5);
        }
#line 1376 "ml_code_util.m"
        {
#line 1376 "ml_code_util.m"
          ml_backend__ml_code_util__FieldName_6 = mercury__string__f_43_43_2_f_0((MR_String) "F", ml_backend__ml_code_util__V_10_10);
        }
#line 1375 "ml_code_util.m"
      }
#line 1372 "ml_code_util.m"
    else
#line 1372 "ml_code_util.m"
      {
#line 1372 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__QualifiedFieldName_7;
#line 1372 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__MaybeFieldName_4, (MR_Integer) 0)));
#line 1371 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util___FieldNameCtxt_8;

#line 1371 "ml_code_util.m"
        ml_backend__ml_code_util__QualifiedFieldName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_11_11, (MR_Integer) 0)));
#line 1371 "ml_code_util.m"
        ml_backend__ml_code_util___FieldNameCtxt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_11_11, (MR_Integer) 1)));
#line 1373 "ml_code_util.m"
        {
#line 1373 "ml_code_util.m"
          ml_backend__ml_code_util__FieldName_6 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_code_util__QualifiedFieldName_7);
        }
#line 1372 "ml_code_util.m"
      }
#line 1372 "ml_code_util.m"
    return ml_backend__ml_code_util__FieldName_6;
#line 1372 "ml_code_util.m"
  }
#line 326 "ml_code_util.m"
}

#line 316 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_format_reserved_object_name_2_f_0(
#line 316 "ml_code_util.m"
  MR_String ml_backend__ml_code_util__CtorName_4,
#line 316 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__CtorArity_5)
#line 316 "ml_code_util.m"
{
#line 1306 "ml_code_util.m"
  {
#line 1306 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1306 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ReservedObjName_6;
#line 1306 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__Name_7;
#line 1306 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__V_9_9;
#line 1306 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__V_10_10;
#line 1306 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__V_12_12;

#line 1308 "ml_code_util.m"
    {
#line 1308 "ml_code_util.m"
      ml_backend__ml_code_util__V_12_12 = mercury__string__int_to_string_1_f_0(ml_backend__ml_code_util__CtorArity_5);
    }
#line 1308 "ml_code_util.m"
    {
#line 1308 "ml_code_util.m"
      ml_backend__ml_code_util__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__ml_code_util__V_12_12);
    }
#line 1308 "ml_code_util.m"
    {
#line 1308 "ml_code_util.m"
      ml_backend__ml_code_util__V_9_9 = mercury__string__f_43_43_2_f_0(ml_backend__ml_code_util__CtorName_4, ml_backend__ml_code_util__V_10_10);
    }
#line 1308 "ml_code_util.m"
    {
#line 1308 "ml_code_util.m"
      ml_backend__ml_code_util__Name_7 = mercury__string__f_43_43_2_f_0((MR_String) "obj_", ml_backend__ml_code_util__V_9_9);
    }
#line 1309 "ml_code_util.m"
    {
#line 1309 "ml_code_util.m"
      ml_backend__ml_code_util__ReservedObjName_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1309 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ReservedObjName_6, 0) = ((MR_Box) (ml_backend__ml_code_util__Name_7));
#line 1309 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ReservedObjName_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1309 "ml_code_util.m"
    }
#line 1306 "ml_code_util.m"
    return ml_backend__ml_code_util__ReservedObjName_6;
#line 1306 "ml_code_util.m"
  }
#line 316 "ml_code_util.m"
}

#line 303 "ml_code_util.m"
MR_String MR_CALL 
ml_backend__ml_code_util__ml_var_name_to_string_1_f_0(
#line 303 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__1_1)
#line 303 "ml_code_util.m"
{
#line 1355 "ml_code_util.m"
  {
#line 1355 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1355 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__HeadVar__2_2;
#line 1355 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1355 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1355 "ml_code_util.m"
    if ((ml_backend__ml_code_util__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1357 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVar__2_2 = ml_backend__ml_code_util__V_12_12;
#line 1355 "ml_code_util.m"
    else
#line 1355 "ml_code_util.m"
      {
#line 1355 "ml_code_util.m"
        MR_Integer ml_backend__ml_code_util__Num_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_11_11, (MR_Integer) 0)));
#line 1355 "ml_code_util.m"
        MR_String ml_backend__ml_code_util__V_6_6;
#line 1355 "ml_code_util.m"
        MR_String ml_backend__ml_code_util__V_8_8;

#line 1356 "ml_code_util.m"
        {
#line 1356 "ml_code_util.m"
          ml_backend__ml_code_util__V_8_8 = mercury__string__int_to_string_1_f_0(ml_backend__ml_code_util__Num_4);
        }
#line 1356 "ml_code_util.m"
        {
#line 1356 "ml_code_util.m"
          ml_backend__ml_code_util__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__ml_code_util__V_8_8);
        }
#line 1356 "ml_code_util.m"
        {
#line 1356 "ml_code_util.m"
          ml_backend__ml_code_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ml_backend__ml_code_util__V_12_12, ml_backend__ml_code_util__V_6_6);
        }
#line 1355 "ml_code_util.m"
      }
#line 1355 "ml_code_util.m"
    return ml_backend__ml_code_util__HeadVar__2_2;
#line 1355 "ml_code_util.m"
  }
#line 303 "ml_code_util.m"
}

#line 299 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0(void)
#line 299 "ml_code_util.m"
{
#line 1335 "ml_code_util.m"
  {
#line 1335 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1335 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__DeclFlags_2;

#line 1342 "ml_code_util.m"
    {
#line 1342 "ml_code_util.m"
      ml_backend__ml_code_util__DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 1335 "ml_code_util.m"
    return ml_backend__ml_code_util__DeclFlags_2;
#line 1335 "ml_code_util.m"
  }
#line 299 "ml_code_util.m"
}

#line 294 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_f_0(void)
#line 294 "ml_code_util.m"
{
#line 1345 "ml_code_util.m"
  {
#line 1345 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1345 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__DeclFlags_2;

#line 1352 "ml_code_util.m"
    {
#line 1352 "ml_code_util.m"
      ml_backend__ml_code_util__DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 4, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 1345 "ml_code_util.m"
    return ml_backend__ml_code_util__DeclFlags_2;
#line 1345 "ml_code_util.m"
  }
#line 294 "ml_code_util.m"
}

#line 289 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(
#line 289 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__DataName_7,
#line 289 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__MLDS_Type_8,
#line 289 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Initializer_9,
#line 289 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__GCStatement_10,
#line 289 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_11)
#line 289 "ml_code_util.m"
{
#line 1329 "ml_code_util.m"
  {
#line 1329 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1329 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Defn_12;
#line 1329 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Name_13;
#line 1329 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__EntityDefn_14;
#line 1329 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__DeclFlags_15;

#line 1330 "ml_code_util.m"
    {
#line 1330 "ml_code_util.m"
      ml_backend__ml_code_util__Name_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Name_13, 0) = ((MR_Box) (ml_backend__ml_code_util__DataName_7));
#line 1330 "ml_code_util.m"
    }
#line 1331 "ml_code_util.m"
    {
#line 1331 "ml_code_util.m"
      ml_backend__ml_code_util__EntityDefn_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__EntityDefn_14, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_8));
#line 1331 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__EntityDefn_14, 1) = ((MR_Box) (ml_backend__ml_code_util__Initializer_9));
#line 1331 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__EntityDefn_14, 2) = ((MR_Box) (ml_backend__ml_code_util__GCStatement_10));
#line 1331 "ml_code_util.m"
    }
#line 1352 "ml_code_util.m"
    {
#line 1352 "ml_code_util.m"
      ml_backend__ml_code_util__DeclFlags_15 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 4, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 1333 "ml_code_util.m"
    {
#line 1333 "ml_code_util.m"
      ml_backend__ml_code_util__Defn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1333 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Defn_12, 0) = ((MR_Box) (ml_backend__ml_code_util__Name_13));
#line 1333 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Defn_12, 1) = ((MR_Box) (ml_backend__ml_code_util__Context_11));
#line 1333 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Defn_12, 2) = ((MR_Box) (ml_backend__ml_code_util__DeclFlags_15));
#line 1333 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Defn_12, 3) = ((MR_Box) (ml_backend__ml_code_util__EntityDefn_14));
#line 1333 "ml_code_util.m"
    }
#line 1329 "ml_code_util.m"
    return ml_backend__ml_code_util__Defn_12;
#line 1329 "ml_code_util.m"
  }
#line 289 "ml_code_util.m"
}

#line 282 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(
#line 282 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__DataName_6,
#line 282 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__MLDS_Type_7,
#line 282 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__GCStatement_8,
#line 282 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_9)
#line 282 "ml_code_util.m"
{
#line 1324 "ml_code_util.m"
  {
#line 1324 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1324 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVar__5_5;

#line 1325 "ml_code_util.m"
    {
#line 1325 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVar__5_5 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_code_util__DataName_6, ml_backend__ml_code_util__MLDS_Type_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_code_util__GCStatement_8, ml_backend__ml_code_util__Context_9);
    }
#line 1324 "ml_code_util.m"
    return ml_backend__ml_code_util__HeadVar__5_5;
#line 1324 "ml_code_util.m"
  }
#line 282 "ml_code_util.m"
}

#line 276 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_decl_6_p_0(
#line 276 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VarName_7,
#line 276 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Type_8,
#line 276 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_9,
#line 276 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Defn_10,
#line 276 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_14,
#line 276 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_15)
#line 276 "ml_code_util.m"
{
#line 1317 "ml_code_util.m"
  {
#line 1317 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1317 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleInfo_12;
#line 1317 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__GCStatement_13;
#line 1317 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_17_17;
#line 1317 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_18_18;
#line 1317 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_19_19;

#line 1318 "ml_code_util.m"
    {
#line 1318 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_14, &ml_backend__ml_code_util__ModuleInfo_12);
    }
#line 1319 "ml_code_util.m"
    {
#line 1319 "ml_code_util.m"
      ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(ml_backend__ml_code_util__VarName_7, ml_backend__ml_code_util__Type_8, ml_backend__ml_code_util__Context_9, &ml_backend__ml_code_util__GCStatement_13, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_14, ml_backend__ml_code_util__STATE_VARIABLE_Info_15);
    }
#line 1320 "ml_code_util.m"
    ml_backend__ml_code_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_code_util__VarName_7);
#line 1321 "ml_code_util.m"
    {
#line 1321 "ml_code_util.m"
      ml_backend__ml_code_util__V_18_18 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_12, ml_backend__ml_code_util__Type_8);
    }
#line 1322 "ml_code_util.m"
    {
#line 1322 "ml_code_util.m"
      ml_backend__ml_code_util__V_19_19 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_9);
    }
#line 1325 "ml_code_util.m"
    {
#line 1325 "ml_code_util.m"
      *ml_backend__ml_code_util__Defn_10 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_code_util__V_17_17, ml_backend__ml_code_util__V_18_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_code_util__GCStatement_13, ml_backend__ml_code_util__V_19_19);
    }
#line 1317 "ml_code_util.m"
  }
#line 276 "ml_code_util.m"
}

#line 271 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(
#line 271 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_5,
#line 271 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VarName_6,
#line 271 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VarType_7,
#line 271 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__QualifiedVarLval_8)
#line 271 "ml_code_util.m"
{
#line 1311 "ml_code_util.m"
  {
#line 1311 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1311 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleName_9;
#line 1311 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_ModuleName_10;
#line 1311 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_Var_11;

#line 1312 "ml_code_util.m"
    {
#line 1312 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleName_9);
    }
#line 1313 "ml_code_util.m"
    {
#line 1313 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_ModuleName_10 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_9);
    }
#line 1314 "ml_code_util.m"
    {
#line 1314 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_11, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_10));
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_11, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1314 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_11, 2) = ((MR_Box) (ml_backend__ml_code_util__VarName_6));
#line 1314 "ml_code_util.m"
    }
#line 1315 "ml_code_util.m"
    {
#line 1315 "ml_code_util.m"
      MR_Word base;
#line 1315 "ml_code_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "ml_code_util.m"
      *ml_backend__ml_code_util__QualifiedVarLval_8 = base;
#line 1315 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_11));
#line 1315 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__VarType_7));
#line 1315 "ml_code_util.m"
    }
#line 1311 "ml_code_util.m"
  }
#line 271 "ml_code_util.m"
}

#line 266 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_var_name_2_f_0(
#line 266 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VarSet_4,
#line 266 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Var_5)
#line 266 "ml_code_util.m"
{
#line 1301 "ml_code_util.m"
  {
#line 1301 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1301 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__UniqueVarName_6;
#line 1301 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1301 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__VarName_7;
#line 1301 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__VarNumber_8;
#line 1301 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_9_9;

#line 1302 "ml_code_util.m"
    {
#line 1302 "ml_code_util.m"
      mercury__varset__lookup_name_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_10_10, ml_backend__ml_code_util__VarSet_4, ml_backend__ml_code_util__Var_5, &ml_backend__ml_code_util__VarName_7);
    }
#line 1303 "ml_code_util.m"
    {
#line 1303 "ml_code_util.m"
      mercury__term__var_to_int_2_p_0(ml_backend__ml_code_util__TypeCtorInfo_10_10, ml_backend__ml_code_util__Var_5, &ml_backend__ml_code_util__VarNumber_8);
    }
#line 1304 "ml_code_util.m"
    {
#line 1304 "ml_code_util.m"
      ml_backend__ml_code_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_9_9, 0) = ((MR_Box) (ml_backend__ml_code_util__VarNumber_8));
#line 1304 "ml_code_util.m"
    }
#line 1304 "ml_code_util.m"
    {
#line 1304 "ml_code_util.m"
      ml_backend__ml_code_util__UniqueVarName_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1304 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__UniqueVarName_6, 0) = ((MR_Box) (ml_backend__ml_code_util__VarName_7));
#line 1304 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__UniqueVarName_6, 1) = ((MR_Box) (ml_backend__ml_code_util__V_9_9));
#line 1304 "ml_code_util.m"
    }
#line 1301 "ml_code_util.m"
    return ml_backend__ml_code_util__UniqueVarName_6;
#line 1301 "ml_code_util.m"
  }
#line 266 "ml_code_util.m"
}

#line 1299 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_var_names_2_f_0_1(
#line 1299 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1299 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
#line 1299 "ml_code_util.m"
{
#line 1299 "ml_code_util.m"
  {
#line 1299 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
#line 1299 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
#line 1299 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__conv0_UniqueVarName_6;

#line 1299 "ml_code_util.m"
    {
#line 1299 "ml_code_util.m"
      ml_backend__ml_code_util__conv0_UniqueVarName_6 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
#line 1299 "ml_code_util.m"
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_UniqueVarName_6));
#line 1299 "ml_code_util.m"
    return ml_backend__ml_code_util__wrapper_arg_2;
#line 1299 "ml_code_util.m"
  }
#line 1299 "ml_code_util.m"
}

#line 262 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_var_names_2_f_0(
#line 262 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VarSet_4,
#line 262 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Vars_5)
#line 262 "ml_code_util.m"
{
#line 1299 "ml_code_util.m"
  {
#line 1299 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1299 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVar__3_3;
#line 1299 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_6_6;

#line 1299 "ml_code_util.m"
    {
#line 1299 "ml_code_util.m"
      ml_backend__ml_code_util__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_6_6, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[1]));
#line 1299 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_6_6, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_gen_var_names_2_f_0_1));
#line 1299 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1299 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_6_6, 3) = ((MR_Box) (ml_backend__ml_code_util__VarSet_4));
#line 1299 "ml_code_util.m"
    }
#line 1299 "ml_code_util.m"
    {
#line 1299 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0, ml_backend__ml_code_util__V_6_6, ml_backend__ml_code_util__Vars_5);
    }
#line 1299 "ml_code_util.m"
    return ml_backend__ml_code_util__HeadVar__3_3;
#line 1299 "ml_code_util.m"
  }
#line 262 "ml_code_util.m"
}

#line 258 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_variable_type_3_p_0(
#line 258 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_4,
#line 258 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Var_5,
#line 258 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Type_6)
#line 258 "ml_code_util.m"
{
#line 1295 "ml_code_util.m"
  {
#line 1295 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1295 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__VarTypes_7;

#line 1296 "ml_code_util.m"
    {
#line 1296 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_code_util__Info_4, &ml_backend__ml_code_util__VarTypes_7);
    }
#line 1297 "ml_code_util.m"
    {
#line 1297 "ml_code_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_code_util__VarTypes_7, ml_backend__ml_code_util__Var_5, ml_backend__ml_code_util__Type_6);
    }
#line 1295 "ml_code_util.m"
  }
#line 258 "ml_code_util.m"
}

#line 253 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_variable_types_3_p_0(
#line 253 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
#line 253 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__2_2,
#line 253 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__HeadVar__3_3)
#line 253 "ml_code_util.m"
{
#line 1290 "ml_code_util.m"
  {
#line 1290 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 1290 "ml_code_util.m"
    if ((ml_backend__ml_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1290 "ml_code_util.m"
      *ml_backend__ml_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1290 "ml_code_util.m"
    else
#line 1291 "ml_code_util.m"
      {
#line 1291 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1291 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1291 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Type_8;
#line 1291 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Types_9;
#line 1291 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__VarTypes_13;

#line 1296 "ml_code_util.m"
        {
#line 1296 "ml_code_util.m"
          ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_code_util__HeadVar__1_1, &ml_backend__ml_code_util__VarTypes_13);
        }
#line 1297 "ml_code_util.m"
        {
#line 1297 "ml_code_util.m"
          hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_code_util__VarTypes_13, ml_backend__ml_code_util__Var_6, &ml_backend__ml_code_util__Type_8);
        }
#line 1293 "ml_code_util.m"
        {
#line 1293 "ml_code_util.m"
          ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_code_util__HeadVar__1_1, ml_backend__ml_code_util__Vars_7, &ml_backend__ml_code_util__Types_9);
        }
#line 1291 "ml_code_util.m"
        {
#line 1291 "ml_code_util.m"
          MR_Word base;
#line 1291 "ml_code_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "ml_code_util.m"
          *ml_backend__ml_code_util__HeadVar__3_3 = base;
#line 1291 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Type_8));
#line 1291 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Types_9));
#line 1291 "ml_code_util.m"
        }
#line 1291 "ml_code_util.m"
      }
#line 1290 "ml_code_util.m"
  }
#line 253 "ml_code_util.m"
}

#line 248 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(
#line 248 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_5,
#line 248 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Var_6,
#line 248 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Type_7,
#line 248 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Lval_8)
#line 248 "ml_code_util.m"
{
#line 1261 "ml_code_util.m"
  {
#line 1261 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1261 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleInfo_9;
#line 1261 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__IsDummy_10;

#line 1262 "ml_code_util.m"
    {
#line 1262 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleInfo_9);
    }
#line 1263 "ml_code_util.m"
    {
#line 1263 "ml_code_util.m"
      ml_backend__ml_code_util__IsDummy_10 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_9, ml_backend__ml_code_util__Type_7);
    }
#line 1274 "ml_code_util.m"
#line 1274 "ml_code_util.m"
    switch (ml_backend__ml_code_util__IsDummy_10) {
#line 1274 "ml_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1274 "ml_code_util.m"
      case (MR_Integer) 0:
#line 1265 "ml_code_util.m"
        {
#line 1265 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__PrivateBuiltin_11;
#line 1265 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__MLDS_Module_12;
#line 1265 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__MLDS_Type_13;
#line 1265 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_19_19;
#line 1265 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__ModuleInfo_29;

#line 1269 "ml_code_util.m"
          {
#line 1269 "ml_code_util.m"
            ml_backend__ml_code_util__PrivateBuiltin_11 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 1270 "ml_code_util.m"
          {
#line 1270 "ml_code_util.m"
            ml_backend__ml_code_util__MLDS_Module_12 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__PrivateBuiltin_11);
          }
#line 788 "ml_code_util.m"
          {
#line 788 "ml_code_util.m"
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleInfo_29);
          }
#line 789 "ml_code_util.m"
          {
#line 789 "ml_code_util.m"
            ml_backend__ml_code_util__MLDS_Type_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_29, ml_backend__ml_code_util__Type_7);
          }
#line 1272 "ml_code_util.m"
          {
#line 1272 "ml_code_util.m"
            ml_backend__ml_code_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_19_19, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Module_12));
#line 1272 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_19_19, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1272 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_19_19, 2) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[14]));
#line 1272 "ml_code_util.m"
          }
#line 1272 "ml_code_util.m"
          {
#line 1272 "ml_code_util.m"
            MR_Word base;
#line 1272 "ml_code_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "ml_code_util.m"
            *ml_backend__ml_code_util__Lval_8 = base;
#line 1272 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ml_backend__ml_code_util__V_19_19));
#line 1272 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_13));
#line 1272 "ml_code_util.m"
          }
#line 1265 "ml_code_util.m"
        }
#line 1274 "ml_code_util.m"
        break;
#line 1274 "ml_code_util.m"
      case (MR_Integer) 1:
#line 1275 "ml_code_util.m"
        {
#line 1275 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__TypeCtorInfo_10_36;
#line 1275 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__VarSet_14;
#line 1275 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__VarName_15;
#line 1275 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__VarLval_16;
#line 1275 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__OutputVars_17;
#line 1275 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__MLDS_Type_24;
#line 1275 "ml_code_util.m"
          MR_String ml_backend__ml_code_util__VarName_33;
#line 1275 "ml_code_util.m"
          MR_Integer ml_backend__ml_code_util__VarNumber_34;
#line 1275 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_35_35;
#line 1275 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__ModuleInfo_40;
#line 1275 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__ModuleName_45;
#line 1275 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__MLDS_ModuleName_46;
#line 1275 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__MLDS_Var_47;

#line 1276 "ml_code_util.m"
          {
#line 1276 "ml_code_util.m"
            ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__VarSet_14);
          }
#line 7965 "ml_backend.ml_code_util.c"
          ml_backend__ml_code_util__TypeCtorInfo_10_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1302 "ml_code_util.m"
          {
#line 1302 "ml_code_util.m"
            mercury__varset__lookup_name_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_10_36, ml_backend__ml_code_util__VarSet_14, ml_backend__ml_code_util__Var_6, &ml_backend__ml_code_util__VarName_33);
          }
#line 1303 "ml_code_util.m"
          {
#line 1303 "ml_code_util.m"
            mercury__term__var_to_int_2_p_0(ml_backend__ml_code_util__TypeCtorInfo_10_36, ml_backend__ml_code_util__Var_6, &ml_backend__ml_code_util__VarNumber_34);
          }
#line 1304 "ml_code_util.m"
          {
#line 1304 "ml_code_util.m"
            ml_backend__ml_code_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_35_35, 0) = ((MR_Box) (ml_backend__ml_code_util__VarNumber_34));
#line 1304 "ml_code_util.m"
          }
#line 1304 "ml_code_util.m"
          {
#line 1304 "ml_code_util.m"
            ml_backend__ml_code_util__VarName_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1304 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__VarName_15, 0) = ((MR_Box) (ml_backend__ml_code_util__VarName_33));
#line 1304 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__VarName_15, 1) = ((MR_Box) (ml_backend__ml_code_util__V_35_35));
#line 1304 "ml_code_util.m"
          }
#line 788 "ml_code_util.m"
          {
#line 788 "ml_code_util.m"
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleInfo_40);
          }
#line 789 "ml_code_util.m"
          {
#line 789 "ml_code_util.m"
            ml_backend__ml_code_util__MLDS_Type_24 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_40, ml_backend__ml_code_util__Type_7);
          }
#line 1312 "ml_code_util.m"
          {
#line 1312 "ml_code_util.m"
            ml_backend__ml_gen_info__ml_gen_info_get_module_name_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__ModuleName_45);
          }
#line 1313 "ml_code_util.m"
          {
#line 1313 "ml_code_util.m"
            ml_backend__ml_code_util__MLDS_ModuleName_46 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__ModuleName_45);
          }
#line 1314 "ml_code_util.m"
          {
#line 1314 "ml_code_util.m"
            ml_backend__ml_code_util__MLDS_Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_47, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_ModuleName_46));
#line 1314 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_47, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1314 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__MLDS_Var_47, 2) = ((MR_Box) (ml_backend__ml_code_util__VarName_15));
#line 1314 "ml_code_util.m"
          }
#line 1315 "ml_code_util.m"
          {
#line 1315 "ml_code_util.m"
            ml_backend__ml_code_util__VarLval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__VarLval_16, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Var_47));
#line 1315 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__VarLval_16, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_24));
#line 1315 "ml_code_util.m"
          }
#line 1282 "ml_code_util.m"
          {
#line 1282 "ml_code_util.m"
            ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(ml_backend__ml_code_util__Info_5, &ml_backend__ml_code_util__OutputVars_17);
          }
#line 1283 "ml_code_util.m"
          {
#line 1283 "ml_code_util.m"
            ml_backend__ml_code_util__succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], ((MR_Box) (ml_backend__ml_code_util__Var_6)), ml_backend__ml_code_util__OutputVars_17);
          }
#line 1283 "ml_code_util.m"
          if (ml_backend__ml_code_util__succeeded)
#line 1284 "ml_code_util.m"
            {
#line 1284 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_18_18;

#line 1284 "ml_code_util.m"
              {
#line 1284 "ml_code_util.m"
                ml_backend__ml_code_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_18_18, 0) = ((MR_Box) (ml_backend__ml_code_util__VarLval_16));
#line 1284 "ml_code_util.m"
              }
#line 1284 "ml_code_util.m"
              {
#line 1284 "ml_code_util.m"
                MR_Word base;
#line 1284 "ml_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "ml_code_util.m"
                *ml_backend__ml_code_util__Lval_8 = base;
#line 1284 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__V_18_18));
#line 1284 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__MLDS_Type_24));
#line 1284 "ml_code_util.m"
              }
#line 1284 "ml_code_util.m"
            }
#line 1283 "ml_code_util.m"
          else
#line 1286 "ml_code_util.m"
            *ml_backend__ml_code_util__Lval_8 = ml_backend__ml_code_util__VarLval_16;
#line 1275 "ml_code_util.m"
        }
#line 1274 "ml_code_util.m"
        break;
#line 1274 "ml_code_util.m"
    }
#line 1261 "ml_code_util.m"
  }
#line 248 "ml_code_util.m"
}

#line 243 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_3_p_0(
#line 243 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_4,
#line 243 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Var_5,
#line 243 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Lval_6)
#line 243 "ml_code_util.m"
{
#line 1246 "ml_code_util.m"
  {
#line 1246 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1246 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__VarLvals_7;
#line 1251 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__VarLval_8;
#line 1251 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__conv0_VarLval_8;

#line 1250 "ml_code_util.m"
    {
#line 1250 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_p_0(ml_backend__ml_code_util__Info_4, &ml_backend__ml_code_util__VarLvals_7);
    }
#line 1251 "ml_code_util.m"
    {
#line 1251 "ml_code_util.m"
      ml_backend__ml_code_util__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_code_util__VarLvals_7, ((MR_Box) (ml_backend__ml_code_util__Var_5)), &ml_backend__ml_code_util__conv0_VarLval_8);
    }
#line 1251 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1251 "ml_code_util.m"
      {
#line 1251 "ml_code_util.m"
        ml_backend__ml_code_util__VarLval_8 = ((MR_Word) ml_backend__ml_code_util__conv0_VarLval_8);
#line 1251 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = MR_TRUE;
#line 1251 "ml_code_util.m"
      }
#line 1251 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1252 "ml_code_util.m"
      *ml_backend__ml_code_util__Lval_6 = ml_backend__ml_code_util__VarLval_8;
#line 1251 "ml_code_util.m"
    else
#line 1257 "ml_code_util.m"
      {
#line 1257 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Type_9;
#line 1257 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__VarTypes_15;

#line 1296 "ml_code_util.m"
        {
#line 1296 "ml_code_util.m"
          ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_code_util__Info_4, &ml_backend__ml_code_util__VarTypes_15);
        }
#line 1297 "ml_code_util.m"
        {
#line 1297 "ml_code_util.m"
          hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_code_util__VarTypes_15, ml_backend__ml_code_util__Var_5, &ml_backend__ml_code_util__Type_9);
        }
#line 1258 "ml_code_util.m"
        {
#line 1258 "ml_code_util.m"
          ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(ml_backend__ml_code_util__Info_4, ml_backend__ml_code_util__Var_5, ml_backend__ml_code_util__Type_9, ml_backend__ml_code_util__Lval_6);
        }
#line 1257 "ml_code_util.m"
      }
#line 1246 "ml_code_util.m"
  }
#line 243 "ml_code_util.m"
}

#line 238 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_list_3_p_0(
#line 238 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__1_1,
#line 238 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVar__2_2,
#line 238 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__HeadVar__3_3)
#line 238 "ml_code_util.m"
{
#line 1241 "ml_code_util.m"
  {
#line 1241 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 1241 "ml_code_util.m"
    if ((ml_backend__ml_code_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1241 "ml_code_util.m"
      *ml_backend__ml_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1241 "ml_code_util.m"
    else
#line 1242 "ml_code_util.m"
      {
#line 1242 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1242 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1242 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Lval_8;
#line 1242 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Lvals_9;

#line 1243 "ml_code_util.m"
        {
#line 1243 "ml_code_util.m"
          ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_code_util__HeadVar__1_1, ml_backend__ml_code_util__Var_6, &ml_backend__ml_code_util__Lval_8);
        }
#line 1244 "ml_code_util.m"
        {
#line 1244 "ml_code_util.m"
          ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_code_util__HeadVar__1_1, ml_backend__ml_code_util__Vars_7, &ml_backend__ml_code_util__Lvals_9);
        }
#line 1242 "ml_code_util.m"
        {
#line 1242 "ml_code_util.m"
          MR_Word base;
#line 1242 "ml_code_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "ml_code_util.m"
          *ml_backend__ml_code_util__HeadVar__3_3 = base;
#line 1242 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__Lval_8));
#line 1242 "ml_code_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__Lvals_9));
#line 1242 "ml_code_util.m"
        }
#line 1242 "ml_code_util.m"
      }
#line 1241 "ml_code_util.m"
  }
#line 238 "ml_code_util.m"
}

#line 227 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_new_label_3_p_0(
#line 227 "ml_code_util.m"
  MR_String * ml_backend__ml_code_util__Label_4,
#line 227 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_7,
#line 227 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_8)
#line 227 "ml_code_util.m"
{
#line 1232 "ml_code_util.m"
  {
#line 1232 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1232 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__LabelNum_6;
#line 1232 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__V_11_11;

#line 1233 "ml_code_util.m"
    {
#line 1233 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_new_label_3_p_0(&ml_backend__ml_code_util__LabelNum_6, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_7, ml_backend__ml_code_util__STATE_VARIABLE_Info_8);
    }
#line 1234 "ml_code_util.m"
    {
#line 1234 "ml_code_util.m"
      ml_backend__ml_code_util__V_11_11 = mercury__string__int_to_string_1_f_0(ml_backend__ml_code_util__LabelNum_6);
    }
#line 1234 "ml_code_util.m"
    {
#line 1234 "ml_code_util.m"
      *ml_backend__ml_code_util__Label_4 = mercury__string__f_43_43_2_f_0((MR_String) "label_", ml_backend__ml_code_util__V_11_11);
    }
#line 1232 "ml_code_util.m"
  }
#line 227 "ml_code_util.m"
}

#line 222 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(
#line 222 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_5,
#line 222 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__RttiProcLabel_6,
#line 222 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__MLDS_PredLabel_7,
#line 222 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__MLDS_Module_8)
#line 222 "ml_code_util.m"
{
#line 1162 "ml_code_util.m"
  {
#line 1162 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1162 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 0)));
#line 1162 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ThisModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 1)));
#line 1162 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 2)));
#line 1162 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__PredName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 3)));
#line 1162 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__PredArity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 4)));
#line 1162 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 6)));
#line 1162 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 7)));
#line 1162 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Detism_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1162 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredIsImported_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1162 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Origin_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 11)));
#line 1162 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__DefiningModule_31;
#line 1163 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 5)));
#line 1163 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___HeadVarsWithNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 8)));
#line 1163 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___ArgModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 9)));
#line 1163 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___PredIsPseudoImported_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1163 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___ProcIsExported_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1163 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___ProcIsImported_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcLabel_6, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1168 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__SpecialPred_25;
#line 1168 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeCtor_26;

#line 1168 "ml_code_util.m"
    ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__Origin_22)) == (MR_mktag((MR_Integer) 0)));
#line 1168 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1168 "ml_code_util.m"
      {
#line 1168 "ml_code_util.m"
        ml_backend__ml_code_util__SpecialPred_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Origin_22, (MR_Integer) 0)));
#line 1168 "ml_code_util.m"
        ml_backend__ml_code_util__TypeCtor_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Origin_22, (MR_Integer) 1)));
#line 1169 "ml_code_util.m"
        {
#line 1169 "ml_code_util.m"
          MR_Integer ml_backend__ml_code_util__TypeArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__TypeCtor_26, (MR_Integer) 1)));
#line 1169 "ml_code_util.m"
          MR_String ml_backend__ml_code_util__TypeName_29;
#line 1169 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__TypeModule_30;
#line 1172 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__TypeCtorSymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__TypeCtor_26, (MR_Integer) 0)));

#line 1177 "ml_code_util.m"
          if (((MR_tag((MR_Word) ml_backend__ml_code_util__TypeCtorSymName_27)) == (MR_mktag((MR_Integer) 1))))
#line 1178 "ml_code_util.m"
            {
#line 1178 "ml_code_util.m"
              ml_backend__ml_code_util__TypeModule_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__TypeCtorSymName_27, (MR_Integer) 0)));
#line 1178 "ml_code_util.m"
              ml_backend__ml_code_util__TypeName_29 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__TypeCtorSymName_27, (MR_Integer) 1)));
#line 1178 "ml_code_util.m"
              ml_backend__ml_code_util__succeeded = MR_TRUE;
#line 1178 "ml_code_util.m"
            }
#line 1177 "ml_code_util.m"
          else
#line 1174 "ml_code_util.m"
            {
#line 1174 "ml_code_util.m"
              ml_backend__ml_code_util__TypeName_29 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__TypeCtorSymName_27, (MR_Integer) 0)));
#line 1175 "ml_code_util.m"
              {
#line 1175 "ml_code_util.m"
                ml_backend__ml_code_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(ml_backend__ml_code_util__TypeCtor_26);
              }
#line 1174 "ml_code_util.m"
              if (ml_backend__ml_code_util__succeeded)
#line 1174 "ml_code_util.m"
                {
#line 1176 "ml_code_util.m"
                  {
#line 1176 "ml_code_util.m"
                    ml_backend__ml_code_util__TypeModule_30 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  }
#line 1176 "ml_code_util.m"
                  ml_backend__ml_code_util__succeeded = MR_TRUE;
#line 1174 "ml_code_util.m"
                }
#line 1174 "ml_code_util.m"
            }
#line 1169 "ml_code_util.m"
          if (ml_backend__ml_code_util__succeeded)
#line 1195 "ml_code_util.m"
            {
#line 1195 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__MaybeDeclaringModule_32;
#line 1184 "ml_code_util.m"
              MR_Integer ml_backend__ml_code_util__V_43_43;

#line 1182 "ml_code_util.m"
              {
#line 1182 "ml_code_util.m"
                ml_backend__ml_code_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_code_util__ThisModule_10, ml_backend__ml_code_util__TypeModule_30);
              }
#line 1182 "ml_code_util.m"
              ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
#line 1182 "ml_code_util.m"
              if (ml_backend__ml_code_util__succeeded)
#line 1182 "ml_code_util.m"
                {
#line 1183 "ml_code_util.m"
                  ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__SpecialPred_25 == (MR_Integer) 0);
#line 1182 "ml_code_util.m"
                  if (ml_backend__ml_code_util__succeeded)
#line 1182 "ml_code_util.m"
                    {
#line 1184 "ml_code_util.m"
                      {
#line 1184 "ml_code_util.m"
                        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&ml_backend__ml_code_util__V_43_43);
                      }
#line 1184 "ml_code_util.m"
                      ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__ProcId_16 == ml_backend__ml_code_util__V_43_43);
#line 1184 "ml_code_util.m"
                      ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
#line 1182 "ml_code_util.m"
                    }
#line 1182 "ml_code_util.m"
                }
#line 1181 "ml_code_util.m"
              if (ml_backend__ml_code_util__succeeded)
#line 1188 "ml_code_util.m"
                {
#line 1188 "ml_code_util.m"
                  ml_backend__ml_code_util__DefiningModule_31 = ml_backend__ml_code_util__ThisModule_10;
#line 1189 "ml_code_util.m"
                  {
#line 1189 "ml_code_util.m"
                    ml_backend__ml_code_util__MaybeDeclaringModule_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "ml_code_util.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__MaybeDeclaringModule_32, 0) = ((MR_Box) (ml_backend__ml_code_util__TypeModule_30));
#line 1189 "ml_code_util.m"
                  }
#line 1188 "ml_code_util.m"
                }
#line 1181 "ml_code_util.m"
              else
#line 1193 "ml_code_util.m"
                {
#line 1193 "ml_code_util.m"
                  ml_backend__ml_code_util__DefiningModule_31 = ml_backend__ml_code_util__TypeModule_30;
#line 1194 "ml_code_util.m"
                  ml_backend__ml_code_util__MaybeDeclaringModule_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1193 "ml_code_util.m"
                }
#line 1196 "ml_code_util.m"
              {
#line 1196 "ml_code_util.m"
                MR_Word base;
#line 1196 "ml_code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "ml_code_util.m"
                *ml_backend__ml_code_util__MLDS_PredLabel_7 = base;
#line 1196 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_code_util__PredName_12));
#line 1196 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_code_util__MaybeDeclaringModule_32));
#line 1196 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_code_util__TypeName_29));
#line 1196 "ml_code_util.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ml_backend__ml_code_util__TypeArity_28));
#line 1196 "ml_code_util.m"
              }
#line 1195 "ml_code_util.m"
            }
#line 1169 "ml_code_util.m"
          else
#line 1199 "ml_code_util.m"
            {
#line 1199 "ml_code_util.m"
              MR_String ml_backend__ml_code_util__V_38_38;
#line 1199 "ml_code_util.m"
              MR_String ml_backend__ml_code_util__V_40_40;

#line 1200 "ml_code_util.m"
              {
#line 1200 "ml_code_util.m"
                ml_backend__ml_code_util__V_40_40 = mercury__string__f_43_43_2_f_0(ml_backend__ml_code_util__PredName_12, (MR_String) "\'");
              }
#line 1200 "ml_code_util.m"
              {
#line 1200 "ml_code_util.m"
                ml_backend__ml_code_util__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred \140", ml_backend__ml_code_util__V_40_40);
              }
#line 1199 "ml_code_util.m"
              {
#line 1199 "ml_code_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_pred_label_from_rtti\'/4", ml_backend__ml_code_util__V_38_38);
#line 1199 "ml_code_util.m"
                return;
              }
#line 1199 "ml_code_util.m"
            }
#line 1169 "ml_code_util.m"
        }
#line 1168 "ml_code_util.m"
      }
#line 1168 "ml_code_util.m"
    else
#line 1217 "ml_code_util.m"
      {
#line 1217 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__NonOutputFunc_34;
#line 1217 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__CodeModel_35;
#line 1217 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__MaybeDeclaringModule_42;
#line 1220 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_33_33;

#line 1205 "ml_code_util.m"
        {
#line 1205 "ml_code_util.m"
          ml_backend__ml_code_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_code_util__ThisModule_10, ml_backend__ml_code_util__PredModule_11);
        }
#line 1205 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
#line 1205 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1206 "ml_code_util.m"
          ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__PredIsImported_20 == (MR_Integer) 0);
#line 1203 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1210 "ml_code_util.m"
          {
#line 1210 "ml_code_util.m"
            ml_backend__ml_code_util__DefiningModule_31 = ml_backend__ml_code_util__ThisModule_10;
#line 1211 "ml_code_util.m"
            {
#line 1211 "ml_code_util.m"
              ml_backend__ml_code_util__MaybeDeclaringModule_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "ml_code_util.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__MaybeDeclaringModule_42, 0) = ((MR_Box) (ml_backend__ml_code_util__PredModule_11));
#line 1211 "ml_code_util.m"
            }
#line 1210 "ml_code_util.m"
          }
#line 1203 "ml_code_util.m"
        else
#line 1215 "ml_code_util.m"
          {
#line 1215 "ml_code_util.m"
            ml_backend__ml_code_util__DefiningModule_31 = ml_backend__ml_code_util__PredModule_11;
#line 1216 "ml_code_util.m"
            ml_backend__ml_code_util__MaybeDeclaringModule_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1215 "ml_code_util.m"
          }
#line 1219 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__PredOrFunc_9 == (MR_Integer) 1);
#line 1219 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1219 "ml_code_util.m"
          {
#line 1220 "ml_code_util.m"
            {
#line 1220 "ml_code_util.m"
              ml_backend__ml_code_util__succeeded = ml_backend__ml_code_util__ml_is_output_det_function_4_p_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__PredId_15, ml_backend__ml_code_util__ProcId_16, &ml_backend__ml_code_util__V_33_33);
            }
#line 1220 "ml_code_util.m"
            ml_backend__ml_code_util__succeeded = !(ml_backend__ml_code_util__succeeded);
#line 1219 "ml_code_util.m"
          }
#line 1218 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1222 "ml_code_util.m"
          ml_backend__ml_code_util__NonOutputFunc_34 = (MR_Integer) 1;
#line 1218 "ml_code_util.m"
        else
#line 1224 "ml_code_util.m"
          ml_backend__ml_code_util__NonOutputFunc_34 = (MR_Integer) 0;
#line 1226 "ml_code_util.m"
        {
#line 1226 "ml_code_util.m"
          hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_code_util__Detism_19, &ml_backend__ml_code_util__CodeModel_35);
        }
#line 1227 "ml_code_util.m"
        {
#line 1227 "ml_code_util.m"
          MR_Word base;
#line 1227 "ml_code_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "ml_code_util.m"
          *ml_backend__ml_code_util__MLDS_PredLabel_7 = base;
#line 1227 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__PredOrFunc_9));
#line 1227 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__MaybeDeclaringModule_42));
#line 1227 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_code_util__PredName_12));
#line 1227 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_code_util__PredArity_13));
#line 1227 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_code_util__CodeModel_35));
#line 1227 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_code_util__NonOutputFunc_34));
#line 1227 "ml_code_util.m"
        }
#line 1217 "ml_code_util.m"
      }
#line 1230 "ml_code_util.m"
    {
#line 1230 "ml_code_util.m"
      *ml_backend__ml_code_util__MLDS_Module_8 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__DefiningModule_31);
    }
#line 1162 "ml_code_util.m"
  }
#line 222 "ml_code_util.m"
}

#line 219 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_pred_label_5_p_0(
#line 219 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_6,
#line 219 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__PredId_7,
#line 219 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__ProcId_8,
#line 219 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__MLDS_PredLabel_9,
#line 219 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__MLDS_Module_10)
#line 219 "ml_code_util.m"
{
#line 1156 "ml_code_util.m"
  {
#line 1156 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1156 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__RttiProcLabel_11;

#line 1157 "ml_code_util.m"
    {
#line 1157 "ml_code_util.m"
      ml_backend__ml_code_util__RttiProcLabel_11 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ml_backend__ml_code_util__ModuleInfo_6, ml_backend__ml_code_util__PredId_7, ml_backend__ml_code_util__ProcId_8);
    }
#line 1158 "ml_code_util.m"
    {
#line 1158 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_code_util__ModuleInfo_6, ml_backend__ml_code_util__RttiProcLabel_11, ml_backend__ml_code_util__MLDS_PredLabel_9, ml_backend__ml_code_util__MLDS_Module_10);
    }
#line 1156 "ml_code_util.m"
  }
#line 219 "ml_code_util.m"
}

#line 214 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(
#line 214 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__MaybeParams_6,
#line 214 "ml_code_util.m"
  MR_Integer * ml_backend__ml_code_util__FuncLabel_7,
#line 214 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__FuncLabelRval_8,
#line 214 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_21,
#line 214 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_22)
#line 214 "ml_code_util.m"
{
#line 1126 "ml_code_util.m"
  {
#line 1126 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1126 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleInfo_10;
#line 1126 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredId_11;
#line 1126 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__ProcId_12;
#line 1126 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredLabel_13;
#line 1126 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredModule_14;
#line 1126 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__UseNestedFuncs_15;
#line 1126 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Signature_17;
#line 1126 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ProcLabel_19;
#line 1126 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__QualProcLabel_20;
#line 1126 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_28_28;
#line 1126 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_29_29;
#line 1126 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__RttiProcLabel_35;

#line 1127 "ml_code_util.m"
    {
#line 1127 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_new_func_label_3_p_0(ml_backend__ml_code_util__FuncLabel_7, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_21, ml_backend__ml_code_util__STATE_VARIABLE_Info_22);
    }
#line 1128 "ml_code_util.m"
    {
#line 1128 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_22, &ml_backend__ml_code_util__ModuleInfo_10);
    }
#line 1129 "ml_code_util.m"
    {
#line 1129 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_22, &ml_backend__ml_code_util__PredId_11);
    }
#line 1130 "ml_code_util.m"
    {
#line 1130 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_22, &ml_backend__ml_code_util__ProcId_12);
    }
#line 1157 "ml_code_util.m"
    {
#line 1157 "ml_code_util.m"
      ml_backend__ml_code_util__RttiProcLabel_35 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__PredId_11, ml_backend__ml_code_util__ProcId_12);
    }
#line 1158 "ml_code_util.m"
    {
#line 1158 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__RttiProcLabel_35, &ml_backend__ml_code_util__PredLabel_13, &ml_backend__ml_code_util__PredModule_14);
    }
#line 1133 "ml_code_util.m"
    {
#line 1133 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_22, &ml_backend__ml_code_util__UseNestedFuncs_15);
    }
#line 1137 "ml_code_util.m"
    if ((ml_backend__ml_code_util__MaybeParams_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "ml_code_util.m"
      {
#line 1138 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__ArgTypes_18;

#line 1142 "ml_code_util.m"
#line 1142 "ml_code_util.m"
        switch (ml_backend__ml_code_util__UseNestedFuncs_15) {
#line 1142 "ml_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1142 "ml_code_util.m"
          case (MR_Integer) 0:
#line 1143 "ml_code_util.m"
            {
#line 1144 "ml_code_util.m"
              ml_backend__ml_code_util__ArgTypes_18 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[13]);
#line 1143 "ml_code_util.m"
            }
#line 1142 "ml_code_util.m"
            break;
#line 1142 "ml_code_util.m"
          case (MR_Integer) 1:
#line 1141 "ml_code_util.m"
            ml_backend__ml_code_util__ArgTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1142 "ml_code_util.m"
            break;
#line 1142 "ml_code_util.m"
        }
#line 1146 "ml_code_util.m"
        {
#line 1146 "ml_code_util.m"
          ml_backend__ml_code_util__Signature_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1146 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Signature_17, 0) = ((MR_Box) (ml_backend__ml_code_util__ArgTypes_18));
#line 1146 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Signature_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1146 "ml_code_util.m"
        }
#line 1138 "ml_code_util.m"
      }
#line 1137 "ml_code_util.m"
    else
#line 1135 "ml_code_util.m"
      {
#line 1135 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__Params_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__MaybeParams_6, (MR_Integer) 0)));

#line 1136 "ml_code_util.m"
        {
#line 1136 "ml_code_util.m"
          ml_backend__ml_code_util__Signature_17 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__ml_code_util__Params_16);
        }
#line 1135 "ml_code_util.m"
      }
#line 1148 "ml_code_util.m"
    {
#line 1148 "ml_code_util.m"
      ml_backend__ml_code_util__ProcLabel_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ProcLabel_19, 0) = ((MR_Box) (ml_backend__ml_code_util__PredLabel_13));
#line 1148 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ProcLabel_19, 1) = ((MR_Box) (ml_backend__ml_code_util__ProcId_12));
#line 1148 "ml_code_util.m"
    }
#line 1149 "ml_code_util.m"
    {
#line 1149 "ml_code_util.m"
      ml_backend__ml_code_util__QualProcLabel_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__QualProcLabel_20, 0) = ((MR_Box) (ml_backend__ml_code_util__PredModule_14));
#line 1149 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__QualProcLabel_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1149 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__QualProcLabel_20, 2) = ((MR_Box) (ml_backend__ml_code_util__ProcLabel_19));
#line 1149 "ml_code_util.m"
    }
#line 1151 "ml_code_util.m"
    {
#line 1151 "ml_code_util.m"
      ml_backend__ml_code_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_29_29, 0) = ((MR_Box) (ml_backend__ml_code_util__QualProcLabel_20));
#line 1151 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_29_29, 1) = ((MR_Box) (*ml_backend__ml_code_util__FuncLabel_7));
#line 1151 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_29_29, 2) = ((MR_Box) (ml_backend__ml_code_util__Signature_17));
#line 1151 "ml_code_util.m"
    }
#line 1151 "ml_code_util.m"
    {
#line 1151 "ml_code_util.m"
      ml_backend__ml_code_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1151 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__V_28_28, 1) = ((MR_Box) (ml_backend__ml_code_util__V_29_29));
#line 1151 "ml_code_util.m"
    }
#line 1150 "ml_code_util.m"
    {
#line 1150 "ml_code_util.m"
      MR_Word base;
#line 1150 "ml_code_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "ml_code_util.m"
      *ml_backend__ml_code_util__FuncLabelRval_8 = base;
#line 1150 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1150 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_28_28));
#line 1150 "ml_code_util.m"
    }
#line 1126 "ml_code_util.m"
  }
#line 214 "ml_code_util.m"
}

#line 206 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_nondet_label_4_f_0(
#line 206 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_6,
#line 206 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__PredId_7,
#line 206 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__ProcId_8,
#line 206 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__SeqNum_9)
#line 206 "ml_code_util.m"
{
#line 1109 "ml_code_util.m"
  {
#line 1109 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1109 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_Name_10;
#line 1109 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_12_12;
#line 1109 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_PredLabel_19;
#line 1109 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__RttiProcLabel_25;
#line 1158 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___MLDS_ModuleName_11;

#line 1110 "ml_code_util.m"
    {
#line 1110 "ml_code_util.m"
      ml_backend__ml_code_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_12_12, 0) = ((MR_Box) (ml_backend__ml_code_util__SeqNum_9));
#line 1110 "ml_code_util.m"
    }
#line 1157 "ml_code_util.m"
    {
#line 1157 "ml_code_util.m"
      ml_backend__ml_code_util__RttiProcLabel_25 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ml_backend__ml_code_util__ModuleInfo_6, ml_backend__ml_code_util__PredId_7, ml_backend__ml_code_util__ProcId_8);
    }
#line 1158 "ml_code_util.m"
    {
#line 1158 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_code_util__ModuleInfo_6, ml_backend__ml_code_util__RttiProcLabel_25, &ml_backend__ml_code_util__MLDS_PredLabel_19, &ml_backend__ml_code_util___MLDS_ModuleName_11);
    }
#line 1121 "ml_code_util.m"
    {
#line 1121 "ml_code_util.m"
      ml_backend__ml_code_util__MLDS_Name_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Name_10, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_PredLabel_19));
#line 1121 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Name_10, 1) = ((MR_Box) (ml_backend__ml_code_util__ProcId_8));
#line 1121 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Name_10, 2) = ((MR_Box) (ml_backend__ml_code_util__V_12_12));
#line 1121 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Name_10, 3) = ((MR_Box) (ml_backend__ml_code_util__PredId_7));
#line 1121 "ml_code_util.m"
    }
#line 1109 "ml_code_util.m"
    return ml_backend__ml_code_util__MLDS_Name_10;
#line 1109 "ml_code_util.m"
  }
#line 206 "ml_code_util.m"
}

#line 199 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(
#line 199 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_6,
#line 199 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__PredId_7,
#line 199 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__ProcId_8,
#line 199 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__MLDS_Name_9,
#line 199 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__MLDS_ModuleName_10)
#line 199 "ml_code_util.m"
{
#line 1101 "ml_code_util.m"
  {
#line 1101 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1101 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_PredLabel_18;
#line 1101 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__RttiProcLabel_24;

#line 1157 "ml_code_util.m"
    {
#line 1157 "ml_code_util.m"
      ml_backend__ml_code_util__RttiProcLabel_24 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ml_backend__ml_code_util__ModuleInfo_6, ml_backend__ml_code_util__PredId_7, ml_backend__ml_code_util__ProcId_8);
    }
#line 1158 "ml_code_util.m"
    {
#line 1158 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_code_util__ModuleInfo_6, ml_backend__ml_code_util__RttiProcLabel_24, &ml_backend__ml_code_util__MLDS_PredLabel_18, ml_backend__ml_code_util__MLDS_ModuleName_10);
    }
#line 1121 "ml_code_util.m"
    {
#line 1121 "ml_code_util.m"
      MR_Word base;
#line 1121 "ml_code_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "ml_code_util.m"
      *ml_backend__ml_code_util__MLDS_Name_9 = base;
#line 1121 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_PredLabel_18));
#line 1121 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_code_util__ProcId_8));
#line 1121 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1121 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ml_backend__ml_code_util__PredId_7));
#line 1121 "ml_code_util.m"
    }
#line 1101 "ml_code_util.m"
  }
#line 199 "ml_code_util.m"
}

#line 187 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_params_8_p_0(
#line 187 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVarNames_9,
#line 187 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadTypes_10,
#line 187 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadModes_11,
#line 187 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__PredOrFunc_12,
#line 187 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CodeModel_13,
#line 187 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__FuncParams_14,
#line 187 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_19,
#line 187 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_20)
#line 187 "ml_code_util.m"
{
#line 898 "ml_code_util.m"
  {
#line 898 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 898 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleInfo_16;
#line 898 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgModes_17;
#line 898 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MaybeInfo_18;
#line 898 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_21_21;

#line 899 "ml_code_util.m"
    {
#line 899 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_19, &ml_backend__ml_code_util__ModuleInfo_16);
    }
#line 900 "ml_code_util.m"
    {
#line 900 "ml_code_util.m"
      check_hlds__mode_util__modes_to_arg_modes_4_p_0(ml_backend__ml_code_util__ModuleInfo_16, ml_backend__ml_code_util__HeadModes_11, ml_backend__ml_code_util__HeadTypes_10, &ml_backend__ml_code_util__ArgModes_17);
    }
#line 903 "ml_code_util.m"
    {
#line 903 "ml_code_util.m"
      ml_backend__ml_code_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 903 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_21_21, 0) = ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_0_19));
#line 903 "ml_code_util.m"
    }
#line 901 "ml_code_util.m"
    {
#line 901 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_params_base_9_p_0(ml_backend__ml_code_util__ModuleInfo_16, ml_backend__ml_code_util__HeadVarNames_9, ml_backend__ml_code_util__HeadTypes_10, ml_backend__ml_code_util__ArgModes_17, ml_backend__ml_code_util__PredOrFunc_12, ml_backend__ml_code_util__CodeModel_13, ml_backend__ml_code_util__FuncParams_14, ml_backend__ml_code_util__V_21_21, &ml_backend__ml_code_util__MaybeInfo_18);
    }
#line 907 "ml_code_util.m"
    if ((ml_backend__ml_code_util__MaybeInfo_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "ml_code_util.m"
      {
#line 909 "ml_code_util.m"
        {
#line 909 "ml_code_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_params\'/8", (MR_String) "missing ml_gen_info");
#line 909 "ml_code_util.m"
          return;
        }
#line 908 "ml_code_util.m"
      }
#line 907 "ml_code_util.m"
    else
#line 905 "ml_code_util.m"
      *ml_backend__ml_code_util__STATE_VARIABLE_Info_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__MaybeInfo_18, (MR_Integer) 0)));
#line 898 "ml_code_util.m"
  }
#line 187 "ml_code_util.m"
}

#line 184 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_params_6_f_0(
#line 184 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_8,
#line 184 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadVarNames_9,
#line 184 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadTypes_10,
#line 184 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__HeadModes_11,
#line 184 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__PredOrFunc_12,
#line 184 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CodeModel_13)
#line 184 "ml_code_util.m"
{
#line 892 "ml_code_util.m"
  {
#line 892 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 892 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__FuncParams_14;
#line 892 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgModes_15;
#line 894 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_16_16;

#line 893 "ml_code_util.m"
    {
#line 893 "ml_code_util.m"
      check_hlds__mode_util__modes_to_arg_modes_4_p_0(ml_backend__ml_code_util__ModuleInfo_8, ml_backend__ml_code_util__HeadModes_11, ml_backend__ml_code_util__HeadTypes_10, &ml_backend__ml_code_util__ArgModes_15);
    }
#line 894 "ml_code_util.m"
    {
#line 894 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_params_base_9_p_0(ml_backend__ml_code_util__ModuleInfo_8, ml_backend__ml_code_util__HeadVarNames_9, ml_backend__ml_code_util__HeadTypes_10, ml_backend__ml_code_util__ArgModes_15, ml_backend__ml_code_util__PredOrFunc_12, ml_backend__ml_code_util__CodeModel_13, &ml_backend__ml_code_util__FuncParams_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_util__V_16_16);
    }
#line 892 "ml_code_util.m"
    return ml_backend__ml_code_util__FuncParams_14;
#line 892 "ml_code_util.m"
  }
#line 184 "ml_code_util.m"
}

#line 883 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0_1(
#line 883 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 883 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
#line 883 "ml_code_util.m"
{
#line 883 "ml_code_util.m"
  {
#line 883 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
#line 883 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
#line 883 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__conv0_LambdaHeadVar__2_21;

#line 883 "ml_code_util.m"
    {
#line 883 "ml_code_util.m"
      ml_backend__ml_code_util__conv0_LambdaHeadVar__2_21 = ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_proc_params_from_rtti__883__1_1_f_0(((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
#line 883 "ml_code_util.m"
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_LambdaHeadVar__2_21));
#line 883 "ml_code_util.m"
    return ml_backend__ml_code_util__wrapper_arg_2;
#line 883 "ml_code_util.m"
  }
#line 883 "ml_code_util.m"
}

#line 178 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0(
#line 178 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_4,
#line 178 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__RttiProcId_5)
#line 178 "ml_code_util.m"
{
#line 876 "ml_code_util.m"
  {
#line 876 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 876 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__FuncParams_6;
#line 876 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 8)));
#line 876 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 5)));
#line 876 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgModes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 9)));
#line 876 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 0)));
#line 876 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Detism_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 876 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__CodeModel_12;
#line 876 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVarNames_13;
#line 877 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 1)));
#line 877 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 2)));
#line 877 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 3)));
#line 877 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 4)));
#line 877 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 6)));
#line 877 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 7)));
#line 877 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 877 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 877 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 11)));
#line 877 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 877 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__RttiProcId_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 888 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_18_18;

#line 882 "ml_code_util.m"
    {
#line 882 "ml_code_util.m"
      hlds__code_model__determinism_to_code_model_2_p_0(ml_backend__ml_code_util__Detism_11, &ml_backend__ml_code_util__CodeModel_12);
    }
#line 883 "ml_code_util.m"
    {
#line 883 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVarNames_13 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_2[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0, (MR_Word) &ml_backend__ml_code_util_scalar_common_2[5], ml_backend__ml_code_util__HeadVars_7);
    }
#line 888 "ml_code_util.m"
    {
#line 888 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_params_base_9_p_0(ml_backend__ml_code_util__ModuleInfo_4, ml_backend__ml_code_util__HeadVarNames_13, ml_backend__ml_code_util__ArgTypes_8, ml_backend__ml_code_util__ArgModes_9, ml_backend__ml_code_util__PredOrFunc_10, ml_backend__ml_code_util__CodeModel_12, &ml_backend__ml_code_util__FuncParams_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_util__V_18_18);
    }
#line 876 "ml_code_util.m"
    return ml_backend__ml_code_util__FuncParams_6;
#line 876 "ml_code_util.m"
  }
#line 178 "ml_code_util.m"
}

#line 1299 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_5_p_0_1(
#line 1299 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1299 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
#line 1299 "ml_code_util.m"
{
#line 1299 "ml_code_util.m"
  {
#line 1299 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
#line 1299 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
#line 1299 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__conv0_UniqueVarName_6;

#line 1299 "ml_code_util.m"
    {
#line 1299 "ml_code_util.m"
      ml_backend__ml_code_util__conv0_UniqueVarName_6 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
#line 1299 "ml_code_util.m"
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_UniqueVarName_6));
#line 1299 "ml_code_util.m"
    return ml_backend__ml_code_util__wrapper_arg_2;
#line 1299 "ml_code_util.m"
  }
#line 1299 "ml_code_util.m"
}

#line 172 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_5_p_0(
#line 172 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__PredId_6,
#line 172 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__ProcId_7,
#line 172 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__FuncParams_8,
#line 172 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_23,
#line 172 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_24)
#line 172 "ml_code_util.m"
{
#line 852 "ml_code_util.m"
  {
#line 852 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 852 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleInfo_10;
#line 852 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredInfo_11;
#line 852 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ProcInfo_12;
#line 852 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__VarSet_13;
#line 852 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVars_14;
#line 852 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredOrFunc_15;
#line 852 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadTypes_16;
#line 852 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadModes_17;
#line 852 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__CodeModel_18;
#line 852 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVarNames_19;
#line 852 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredModule_20;
#line 852 "ml_code_util.m"
    MR_String ml_backend__ml_code_util__PredName_21;
#line 852 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__PredArity_22;
#line 852 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_28_28;

#line 853 "ml_code_util.m"
    {
#line 853 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_0_23, &ml_backend__ml_code_util__ModuleInfo_10);
    }
#line 854 "ml_code_util.m"
    {
#line 854 "ml_code_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__PredId_6, ml_backend__ml_code_util__ProcId_7, &ml_backend__ml_code_util__PredInfo_11, &ml_backend__ml_code_util__ProcInfo_12);
    }
#line 855 "ml_code_util.m"
    {
#line 855 "ml_code_util.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_code_util__ProcInfo_12, &ml_backend__ml_code_util__VarSet_13);
    }
#line 856 "ml_code_util.m"
    {
#line 856 "ml_code_util.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_code_util__ProcInfo_12, &ml_backend__ml_code_util__HeadVars_14);
    }
#line 857 "ml_code_util.m"
    {
#line 857 "ml_code_util.m"
      ml_backend__ml_code_util__PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_code_util__PredInfo_11);
    }
#line 858 "ml_code_util.m"
    {
#line 858 "ml_code_util.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_code_util__PredInfo_11, &ml_backend__ml_code_util__HeadTypes_16);
    }
#line 859 "ml_code_util.m"
    {
#line 859 "ml_code_util.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_code_util__ProcInfo_12, &ml_backend__ml_code_util__HeadModes_17);
    }
#line 860 "ml_code_util.m"
    {
#line 860 "ml_code_util.m"
      ml_backend__ml_code_util__CodeModel_18 = hlds__code_model__proc_info_interface_code_model_1_f_0(ml_backend__ml_code_util__ProcInfo_12);
    }
#line 1299 "ml_code_util.m"
    {
#line 1299 "ml_code_util.m"
      ml_backend__ml_code_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_28_28, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[1]));
#line 1299 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_28_28, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_gen_proc_params_5_p_0_1));
#line 1299 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1299 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_28_28, 3) = ((MR_Box) (ml_backend__ml_code_util__VarSet_13));
#line 1299 "ml_code_util.m"
    }
#line 1299 "ml_code_util.m"
    {
#line 1299 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVarNames_19 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0, ml_backend__ml_code_util__V_28_28, ml_backend__ml_code_util__HeadVars_14);
    }
#line 865 "ml_code_util.m"
    {
#line 865 "ml_code_util.m"
      ml_backend__ml_code_util__PredModule_20 = hlds__hlds_pred__pred_info_module_1_f_0(ml_backend__ml_code_util__PredInfo_11);
    }
#line 866 "ml_code_util.m"
    {
#line 866 "ml_code_util.m"
      ml_backend__ml_code_util__PredName_21 = hlds__hlds_pred__pred_info_name_1_f_0(ml_backend__ml_code_util__PredInfo_11);
    }
#line 867 "ml_code_util.m"
    {
#line 867 "ml_code_util.m"
      ml_backend__ml_code_util__PredArity_22 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ml_backend__ml_code_util__PredInfo_11);
    }
#line 868 "ml_code_util.m"
    {
#line 868 "ml_code_util.m"
      ml_backend__ml_code_util__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(ml_backend__ml_code_util__PredModule_20, ml_backend__ml_code_util__PredName_21, ml_backend__ml_code_util__PredArity_22);
    }
#line 868 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 869 "ml_code_util.m"
      {
#line 869 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__ArgModes_40;
#line 894 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_41_41;

#line 893 "ml_code_util.m"
        {
#line 893 "ml_code_util.m"
          check_hlds__mode_util__modes_to_arg_modes_4_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__HeadModes_17, ml_backend__ml_code_util__HeadTypes_16, &ml_backend__ml_code_util__ArgModes_40);
        }
#line 894 "ml_code_util.m"
        {
#line 894 "ml_code_util.m"
          ml_backend__ml_code_util__ml_gen_params_base_9_p_0(ml_backend__ml_code_util__ModuleInfo_10, ml_backend__ml_code_util__HeadVarNames_19, ml_backend__ml_code_util__HeadTypes_16, ml_backend__ml_code_util__ArgModes_40, ml_backend__ml_code_util__PredOrFunc_15, ml_backend__ml_code_util__CodeModel_18, ml_backend__ml_code_util__FuncParams_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_util__V_41_41);
        }
#line 869 "ml_code_util.m"
        *ml_backend__ml_code_util__STATE_VARIABLE_Info_24 = ml_backend__ml_code_util__STATE_VARIABLE_Info_0_23;
#line 869 "ml_code_util.m"
      }
#line 868 "ml_code_util.m"
    else
#line 872 "ml_code_util.m"
      {
#line 872 "ml_code_util.m"
        ml_backend__ml_code_util__ml_gen_params_8_p_0(ml_backend__ml_code_util__HeadVarNames_19, ml_backend__ml_code_util__HeadTypes_16, ml_backend__ml_code_util__HeadModes_17, ml_backend__ml_code_util__PredOrFunc_15, ml_backend__ml_code_util__CodeModel_18, ml_backend__ml_code_util__FuncParams_8, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_23, ml_backend__ml_code_util__STATE_VARIABLE_Info_24);
      }
#line 852 "ml_code_util.m"
  }
#line 172 "ml_code_util.m"
}

#line 1299 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_3_f_0_1(
#line 1299 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 1299 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
#line 1299 "ml_code_util.m"
{
#line 1299 "ml_code_util.m"
  {
#line 1299 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
#line 1299 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
#line 1299 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__conv0_UniqueVarName_6;

#line 1299 "ml_code_util.m"
    {
#line 1299 "ml_code_util.m"
      ml_backend__ml_code_util__conv0_UniqueVarName_6 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
#line 1299 "ml_code_util.m"
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_UniqueVarName_6));
#line 1299 "ml_code_util.m"
    return ml_backend__ml_code_util__wrapper_arg_2;
#line 1299 "ml_code_util.m"
  }
#line 1299 "ml_code_util.m"
}

#line 170 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_params_3_f_0(
#line 170 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_5,
#line 170 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__PredId_6,
#line 170 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__ProcId_7)
#line 170 "ml_code_util.m"
{
#line 840 "ml_code_util.m"
  {
#line 840 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 840 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__FuncParams_8;
#line 840 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredInfo_9;
#line 840 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ProcInfo_10;
#line 840 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__VarSet_11;
#line 840 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVars_12;
#line 840 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredOrFunc_13;
#line 840 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadTypes_14;
#line 840 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadModes_15;
#line 840 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__CodeModel_16;
#line 840 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVarNames_17;
#line 840 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_20_20;
#line 840 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgModes_32;
#line 894 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_33_33;

#line 841 "ml_code_util.m"
    {
#line 841 "ml_code_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__PredId_6, ml_backend__ml_code_util__ProcId_7, &ml_backend__ml_code_util__PredInfo_9, &ml_backend__ml_code_util__ProcInfo_10);
    }
#line 842 "ml_code_util.m"
    {
#line 842 "ml_code_util.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_code_util__ProcInfo_10, &ml_backend__ml_code_util__VarSet_11);
    }
#line 843 "ml_code_util.m"
    {
#line 843 "ml_code_util.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_code_util__ProcInfo_10, &ml_backend__ml_code_util__HeadVars_12);
    }
#line 844 "ml_code_util.m"
    {
#line 844 "ml_code_util.m"
      ml_backend__ml_code_util__PredOrFunc_13 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_code_util__PredInfo_9);
    }
#line 845 "ml_code_util.m"
    {
#line 845 "ml_code_util.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_code_util__PredInfo_9, &ml_backend__ml_code_util__HeadTypes_14);
    }
#line 846 "ml_code_util.m"
    {
#line 846 "ml_code_util.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_code_util__ProcInfo_10, &ml_backend__ml_code_util__HeadModes_15);
    }
#line 847 "ml_code_util.m"
    {
#line 847 "ml_code_util.m"
      ml_backend__ml_code_util__CodeModel_16 = hlds__code_model__proc_info_interface_code_model_1_f_0(ml_backend__ml_code_util__ProcInfo_10);
    }
#line 1299 "ml_code_util.m"
    {
#line 1299 "ml_code_util.m"
      ml_backend__ml_code_util__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_20_20, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[1]));
#line 1299 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_20_20, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_gen_proc_params_3_f_0_1));
#line 1299 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1299 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_20_20, 3) = ((MR_Box) (ml_backend__ml_code_util__VarSet_11));
#line 1299 "ml_code_util.m"
    }
#line 1299 "ml_code_util.m"
    {
#line 1299 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVarNames_17 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0, ml_backend__ml_code_util__V_20_20, ml_backend__ml_code_util__HeadVars_12);
    }
#line 893 "ml_code_util.m"
    {
#line 893 "ml_code_util.m"
      check_hlds__mode_util__modes_to_arg_modes_4_p_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__HeadModes_15, ml_backend__ml_code_util__HeadTypes_14, &ml_backend__ml_code_util__ArgModes_32);
    }
#line 894 "ml_code_util.m"
    {
#line 894 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_params_base_9_p_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__HeadVarNames_17, ml_backend__ml_code_util__HeadTypes_14, ml_backend__ml_code_util__ArgModes_32, ml_backend__ml_code_util__PredOrFunc_13, ml_backend__ml_code_util__CodeModel_16, &ml_backend__ml_code_util__FuncParams_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_util__V_33_33);
    }
#line 840 "ml_code_util.m"
    return ml_backend__ml_code_util__FuncParams_8;
#line 840 "ml_code_util.m"
  }
#line 170 "ml_code_util.m"
}

#line 157 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_java_mercury_enum_class_0_f_0(void)
#line 157 "ml_code_util.m"
{
#line 829 "ml_code_util.m"
  {
#line 829 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 829 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__EnumClassDefn_2;
#line 829 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__InterfaceModuleName_3;
#line 829 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__EnumClass_4;
#line 829 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_5_5;

#line 831 "ml_code_util.m"
    {
#line 831 "ml_code_util.m"
      ml_backend__ml_code_util__V_5_5 = parse_tree__java_names__java_mercury_runtime_package_name_0_f_0();
    }
#line 830 "ml_code_util.m"
    {
#line 830 "ml_code_util.m"
      ml_backend__ml_code_util__InterfaceModuleName_3 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__V_5_5);
    }
#line 832 "ml_code_util.m"
    {
#line 832 "ml_code_util.m"
      ml_backend__ml_code_util__EnumClass_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 832 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__EnumClass_4, 0) = ((MR_Box) (ml_backend__ml_code_util__InterfaceModuleName_3));
#line 832 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__EnumClass_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 832 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__EnumClass_4, 2) = ((MR_Box) ((MR_String) "MercuryEnum"));
#line 832 "ml_code_util.m"
    }
#line 833 "ml_code_util.m"
    {
#line 833 "ml_code_util.m"
      ml_backend__ml_code_util__EnumClassDefn_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 833 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnumClassDefn_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 833 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnumClassDefn_2, 1) = ((MR_Box) (ml_backend__ml_code_util__EnumClass_4));
#line 833 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnumClassDefn_2, 2) = ((MR_Box) ((MR_Integer) 0));
#line 833 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__EnumClassDefn_2, 3) = ((MR_Box) ((MR_Integer) 0));
#line 833 "ml_code_util.m"
    }
#line 829 "ml_code_util.m"
    return ml_backend__ml_code_util__EnumClassDefn_2;
#line 829 "ml_code_util.m"
  }
#line 157 "ml_code_util.m"
}

#line 152 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0(void)
#line 152 "ml_code_util.m"
{
#line 823 "ml_code_util.m"
  {
#line 823 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 823 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeInterfaceDefn_2;
#line 823 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__InterfaceModuleName_3;
#line 823 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeInterface_4;
#line 823 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_5_5;

#line 825 "ml_code_util.m"
    {
#line 825 "ml_code_util.m"
      ml_backend__ml_code_util__V_5_5 = parse_tree__java_names__java_mercury_runtime_package_name_0_f_0();
    }
#line 824 "ml_code_util.m"
    {
#line 824 "ml_code_util.m"
      ml_backend__ml_code_util__InterfaceModuleName_3 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_code_util__V_5_5);
    }
#line 826 "ml_code_util.m"
    {
#line 826 "ml_code_util.m"
      ml_backend__ml_code_util__TypeInterface_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 826 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__TypeInterface_4, 0) = ((MR_Box) (ml_backend__ml_code_util__InterfaceModuleName_3));
#line 826 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__TypeInterface_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 826 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__TypeInterface_4, 2) = ((MR_Box) ((MR_String) "MercuryType"));
#line 826 "ml_code_util.m"
    }
#line 827 "ml_code_util.m"
    {
#line 827 "ml_code_util.m"
      ml_backend__ml_code_util__TypeInterfaceDefn_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 827 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__TypeInterfaceDefn_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 827 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__TypeInterfaceDefn_2, 1) = ((MR_Box) (ml_backend__ml_code_util__TypeInterface_4));
#line 827 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__TypeInterfaceDefn_2, 2) = ((MR_Box) ((MR_Integer) 0));
#line 827 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__TypeInterfaceDefn_2, 3) = ((MR_Box) ((MR_Integer) 2));
#line 827 "ml_code_util.m"
    }
#line 823 "ml_code_util.m"
    return ml_backend__ml_code_util__TypeInterfaceDefn_2;
#line 823 "ml_code_util.m"
  }
#line 152 "ml_code_util.m"
}

#line 147 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(
#line 147 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__Arity_3)
#line 147 "ml_code_util.m"
{
#line 818 "ml_code_util.m"
  {
#line 818 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 818 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__BoxedTypes_4;
#line 818 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 818 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeVarSet0_5;
#line 818 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__BoxedTypeVars_6;
#line 818 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_8_8;
#line 820 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___TypeVarSet_7;

#line 819 "ml_code_util.m"
    {
#line 819 "ml_code_util.m"
      mercury__varset__init_1_p_0(ml_backend__ml_code_util__TypeCtorInfo_9_9, &ml_backend__ml_code_util__TypeVarSet0_5);
    }
#line 820 "ml_code_util.m"
    {
#line 820 "ml_code_util.m"
      mercury__varset__new_vars_4_p_0(ml_backend__ml_code_util__TypeCtorInfo_9_9, ml_backend__ml_code_util__Arity_3, &ml_backend__ml_code_util__BoxedTypeVars_6, ml_backend__ml_code_util__TypeVarSet0_5, &ml_backend__ml_code_util___TypeVarSet_7);
    }
#line 821 "ml_code_util.m"
    {
#line 821 "ml_code_util.m"
      ml_backend__ml_code_util__V_8_8 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_code_util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 821 "ml_code_util.m"
    {
#line 821 "ml_code_util.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(ml_backend__ml_code_util__V_8_8, ml_backend__ml_code_util__BoxedTypeVars_6, &ml_backend__ml_code_util__BoxedTypes_4);
    }
#line 818 "ml_code_util.m"
    return ml_backend__ml_code_util__BoxedTypes_4;
#line 818 "ml_code_util.m"
  }
#line 147 "ml_code_util.m"
}

#line 140 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_char_type_0_f_0(void)
#line 140 "ml_code_util.m"
{
#line 814 "ml_code_util.m"
  {
#line 814 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 814 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVar__1_1;
#line 814 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_2_2;
#line 814 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_5_5;
#line 814 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_6_6;

#line 815 "ml_code_util.m"
    {
#line 815 "ml_code_util.m"
      ml_backend__ml_code_util__V_2_2 = parse_tree__builtin_lib_types__char_type_0_f_0();
    }
#line 816 "ml_code_util.m"
    {
#line 816 "ml_code_util.m"
      ml_backend__ml_code_util__V_6_6 = parse_tree__builtin_lib_types__char_type_0_f_0();
    }
#line 816 "ml_code_util.m"
    {
#line 816 "ml_code_util.m"
      ml_backend__ml_code_util__V_5_5 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__ml_code_util__V_6_6);
    }
#line 815 "ml_code_util.m"
    {
#line 815 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 815 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 0) = ((MR_Box) (ml_backend__ml_code_util__V_2_2));
#line 815 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[8])));
#line 815 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 2) = ((MR_Box) (ml_backend__ml_code_util__V_5_5));
#line 815 "ml_code_util.m"
    }
#line 814 "ml_code_util.m"
    return ml_backend__ml_code_util__HeadVar__1_1;
#line 814 "ml_code_util.m"
  }
#line 140 "ml_code_util.m"
}

#line 136 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_int_type_0_f_0(void)
#line 136 "ml_code_util.m"
{
#line 810 "ml_code_util.m"
  {
#line 810 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 810 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVar__1_1;
#line 810 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_2_2;
#line 810 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_5_5;
#line 810 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_6_6;

#line 811 "ml_code_util.m"
    {
#line 811 "ml_code_util.m"
      ml_backend__ml_code_util__V_2_2 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 812 "ml_code_util.m"
    {
#line 812 "ml_code_util.m"
      ml_backend__ml_code_util__V_6_6 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 812 "ml_code_util.m"
    {
#line 812 "ml_code_util.m"
      ml_backend__ml_code_util__V_5_5 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__ml_code_util__V_6_6);
    }
#line 811 "ml_code_util.m"
    {
#line 811 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 811 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 0) = ((MR_Box) (ml_backend__ml_code_util__V_2_2));
#line 811 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[7])));
#line 811 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 2) = ((MR_Box) (ml_backend__ml_code_util__V_5_5));
#line 811 "ml_code_util.m"
    }
#line 810 "ml_code_util.m"
    return ml_backend__ml_code_util__HeadVar__1_1;
#line 810 "ml_code_util.m"
  }
#line 136 "ml_code_util.m"
}

#line 132 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_string_type_0_f_0(void)
#line 132 "ml_code_util.m"
{
#line 806 "ml_code_util.m"
  {
#line 806 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 806 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVar__1_1;
#line 806 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_2_2;
#line 806 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_5_5;
#line 806 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_6_6;

#line 807 "ml_code_util.m"
    {
#line 807 "ml_code_util.m"
      ml_backend__ml_code_util__V_2_2 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 808 "ml_code_util.m"
    {
#line 808 "ml_code_util.m"
      ml_backend__ml_code_util__V_6_6 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 808 "ml_code_util.m"
    {
#line 808 "ml_code_util.m"
      ml_backend__ml_code_util__V_5_5 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__ml_code_util__V_6_6);
    }
#line 807 "ml_code_util.m"
    {
#line 807 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 807 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 0) = ((MR_Box) (ml_backend__ml_code_util__V_2_2));
#line 807 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[6])));
#line 807 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__HeadVar__1_1, 2) = ((MR_Box) (ml_backend__ml_code_util__V_5_5));
#line 807 "ml_code_util.m"
    }
#line 806 "ml_code_util.m"
    return ml_backend__ml_code_util__HeadVar__1_1;
#line 806 "ml_code_util.m"
  }
#line 132 "ml_code_util.m"
}

#line 128 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_array_elem_type_1_f_0(
#line 128 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ElemType_3)
#line 128 "ml_code_util.m"
{
#line 793 "ml_code_util.m"
  {
#line 793 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 793 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_Type_4;

#line 793 "ml_code_util.m"
    if (((MR_tag((MR_Word) ml_backend__ml_code_util__ElemType_3)) == (MR_mktag((MR_Integer) 0))))
#line 793 "ml_code_util.m"
      {
#line 793 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__ScalarElem_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ElemType_3, (MR_Integer) 0)));

#line 802 "ml_code_util.m"
#line 802 "ml_code_util.m"
        switch (ml_backend__ml_code_util__ScalarElem_5) {
#line 802 "ml_code_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 802 "ml_code_util.m"
          case (MR_Integer) 2:
#line 804 "ml_code_util.m"
            ml_backend__ml_code_util__MLDS_Type_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 802 "ml_code_util.m"
            break;
#line 802 "ml_code_util.m"
          case (MR_Integer) 1:
#line 803 "ml_code_util.m"
            ml_backend__ml_code_util__MLDS_Type_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 802 "ml_code_util.m"
            break;
#line 802 "ml_code_util.m"
          case (MR_Integer) 0:
#line 806 "ml_code_util.m"
            {
#line 806 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_10_10;
#line 806 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_13_13;
#line 806 "ml_code_util.m"
              MR_Word ml_backend__ml_code_util__V_14_14;

#line 807 "ml_code_util.m"
              {
#line 807 "ml_code_util.m"
                ml_backend__ml_code_util__V_10_10 = parse_tree__builtin_lib_types__string_type_0_f_0();
              }
#line 808 "ml_code_util.m"
              {
#line 808 "ml_code_util.m"
                ml_backend__ml_code_util__V_14_14 = parse_tree__builtin_lib_types__string_type_0_f_0();
              }
#line 808 "ml_code_util.m"
              {
#line 808 "ml_code_util.m"
                ml_backend__ml_code_util__V_13_13 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__ml_code_util__V_14_14);
              }
#line 807 "ml_code_util.m"
              {
#line 807 "ml_code_util.m"
                ml_backend__ml_code_util__MLDS_Type_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 807 "ml_code_util.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_4, 0) = ((MR_Box) (ml_backend__ml_code_util__V_10_10));
#line 807 "ml_code_util.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_4[6])));
#line 807 "ml_code_util.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__MLDS_Type_4, 2) = ((MR_Box) (ml_backend__ml_code_util__V_13_13));
#line 807 "ml_code_util.m"
              }
#line 806 "ml_code_util.m"
            }
#line 802 "ml_code_util.m"
            break;
#line 802 "ml_code_util.m"
        }
#line 793 "ml_code_util.m"
      }
#line 793 "ml_code_util.m"
    else
#line 796 "ml_code_util.m"
      {
#line 797 "ml_code_util.m"
        {
#line 797 "ml_code_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_code_util", (MR_String) "function \140ml_backend.ml_code_util.ml_gen_array_elem_type\'/1", (MR_String) "struct");
        }
#line 796 "ml_code_util.m"
      }
#line 793 "ml_code_util.m"
    return ml_backend__ml_code_util__MLDS_Type_4;
#line 793 "ml_code_util.m"
  }
#line 128 "ml_code_util.m"
}

#line 124 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_type_3_p_0(
#line 124 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_4,
#line 124 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Type_5,
#line 124 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__MLDS_Type_6)
#line 124 "ml_code_util.m"
{
#line 787 "ml_code_util.m"
  {
#line 787 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 787 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleInfo_7;

#line 788 "ml_code_util.m"
    {
#line 788 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__Info_4, &ml_backend__ml_code_util__ModuleInfo_7);
    }
#line 789 "ml_code_util.m"
    {
#line 789 "ml_code_util.m"
      *ml_backend__ml_code_util__MLDS_Type_6 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_7, ml_backend__ml_code_util__Type_5);
    }
#line 787 "ml_code_util.m"
  }
#line 124 "ml_code_util.m"
}

#line 115 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_not_1_f_0(
#line 115 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__X_3)
#line 115 "ml_code_util.m"
{
#line 780 "ml_code_util.m"
  {
#line 780 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 780 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVar__2_2;

#line 780 "ml_code_util.m"
    {
#line 780 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 780 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 780 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_4[5])));
#line 780 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__2_2, 2) = ((MR_Box) (ml_backend__ml_code_util__X_3));
#line 780 "ml_code_util.m"
    }
#line 780 "ml_code_util.m"
    return ml_backend__ml_code_util__HeadVar__2_2;
#line 780 "ml_code_util.m"
  }
#line 115 "ml_code_util.m"
}

#line 112 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_and_2_f_0(
#line 112 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__X_4,
#line 112 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Y_5)
#line 112 "ml_code_util.m"
{
#line 771 "ml_code_util.m"
  {
#line 771 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_code_util__X_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__X_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 771 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__HeadVar__3_3;
#line 772 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_6_6;

#line 772 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 772 "ml_code_util.m"
      {
#line 772 "ml_code_util.m"
        ml_backend__ml_code_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__X_4, (MR_Integer) 1)));
#line 772 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "ml_code_util.m"
      }
#line 771 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 773 "ml_code_util.m"
      ml_backend__ml_code_util__HeadVar__3_3 = ml_backend__ml_code_util__Y_5;
#line 771 "ml_code_util.m"
    else
#line 776 "ml_code_util.m"
      {
#line 774 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_7_7;

#line 774 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_code_util__Y_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Y_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 774 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 774 "ml_code_util.m"
          {
#line 774 "ml_code_util.m"
            ml_backend__ml_code_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Y_5, (MR_Integer) 1)));
#line 774 "ml_code_util.m"
            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "ml_code_util.m"
          }
#line 776 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 775 "ml_code_util.m"
          ml_backend__ml_code_util__HeadVar__3_3 = ml_backend__ml_code_util__X_4;
#line 776 "ml_code_util.m"
        else
#line 777 "ml_code_util.m"
          {
#line 777 "ml_code_util.m"
            {
#line 777 "ml_code_util.m"
              ml_backend__ml_code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 777 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 777 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 777 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_code_util__X_4));
#line 777 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_code_util__Y_5));
#line 777 "ml_code_util.m"
            }
#line 777 "ml_code_util.m"
          }
#line 776 "ml_code_util.m"
      }
#line 771 "ml_code_util.m"
    return ml_backend__ml_code_util__HeadVar__3_3;
#line 771 "ml_code_util.m"
  }
#line 112 "ml_code_util.m"
}

#line 101 "ml_code_util.m"
MR_bool MR_CALL 
ml_backend__ml_code_util__ml_is_output_det_function_4_p_0(
#line 101 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__ModuleInfo_5,
#line 101 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__PredId_6,
#line 101 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__ProcId_7,
#line 101 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__RetArgVar_8)
#line 101 "ml_code_util.m"
{
#line 1077 "ml_code_util.m"
  {
#line 1077 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeCtorInfo_23_23;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeCtorInfo_24_24;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__TypeInfo_25_25;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredInfo_9;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ProcInfo_10;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Modes_11;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgTypes_12;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgVars_13;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ArgModes_14;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__RetArgMode_16;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__RetArgType_18;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_20_20;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_21_21;
#line 1077 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_22_22;
#line 1086 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___InputArgModes_15;
#line 1086 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__conv0_RetArgMode_16;
#line 1087 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___InputArgTypes_17;
#line 1087 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__conv1_RetArgType_18;
#line 1088 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___InputArgVars_19;
#line 1088 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__conv2_RetArgVar_8;

#line 1078 "ml_code_util.m"
    {
#line 1078 "ml_code_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__PredId_6, ml_backend__ml_code_util__ProcId_7, &ml_backend__ml_code_util__PredInfo_9, &ml_backend__ml_code_util__ProcInfo_10);
    }
#line 1079 "ml_code_util.m"
    {
#line 1079 "ml_code_util.m"
      ml_backend__ml_code_util__V_20_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_code_util__PredInfo_9);
    }
#line 1079 "ml_code_util.m"
    ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_20_20 == (MR_Integer) 1);
#line 1077 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 1077 "ml_code_util.m"
      {
#line 1080 "ml_code_util.m"
        {
#line 1080 "ml_code_util.m"
          ml_backend__ml_code_util__V_21_21 = hlds__code_model__proc_info_interface_code_model_1_f_0(ml_backend__ml_code_util__ProcInfo_10);
        }
#line 1080 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_21_21 == (MR_Integer) 0);
#line 1077 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 1077 "ml_code_util.m"
          {
#line 1082 "ml_code_util.m"
            {
#line 1082 "ml_code_util.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_code_util__ProcInfo_10, &ml_backend__ml_code_util__Modes_11);
            }
#line 1083 "ml_code_util.m"
            {
#line 1083 "ml_code_util.m"
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_code_util__PredInfo_9, &ml_backend__ml_code_util__ArgTypes_12);
            }
#line 1084 "ml_code_util.m"
            {
#line 1084 "ml_code_util.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_code_util__ProcInfo_10, &ml_backend__ml_code_util__ArgVars_13);
            }
#line 1085 "ml_code_util.m"
            {
#line 1085 "ml_code_util.m"
              check_hlds__mode_util__modes_to_arg_modes_4_p_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__Modes_11, ml_backend__ml_code_util__ArgTypes_12, &ml_backend__ml_code_util__ArgModes_14);
            }
#line 10234 "ml_backend.ml_code_util.c"
            ml_backend__ml_code_util__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_mode_0;
#line 1086 "ml_code_util.m"
            {
#line 1086 "ml_code_util.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_23_23, ml_backend__ml_code_util__ArgModes_14, &ml_backend__ml_code_util___InputArgModes_15, &ml_backend__ml_code_util__conv0_RetArgMode_16);
            }
#line 1086 "ml_code_util.m"
            ml_backend__ml_code_util__RetArgMode_16 = ((MR_Word) ml_backend__ml_code_util__conv0_RetArgMode_16);
#line 10243 "ml_backend.ml_code_util.c"
            ml_backend__ml_code_util__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1087 "ml_code_util.m"
            {
#line 1087 "ml_code_util.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0(ml_backend__ml_code_util__TypeCtorInfo_24_24, ml_backend__ml_code_util__ArgTypes_12, &ml_backend__ml_code_util___InputArgTypes_17, &ml_backend__ml_code_util__conv1_RetArgType_18);
            }
#line 1087 "ml_code_util.m"
            ml_backend__ml_code_util__RetArgType_18 = ((MR_Word) ml_backend__ml_code_util__conv1_RetArgType_18);
#line 10252 "ml_backend.ml_code_util.c"
            ml_backend__ml_code_util__TypeInfo_25_25 = (MR_Word) &ml_backend__ml_code_util_scalar_common_1[0];
#line 1088 "ml_code_util.m"
            {
#line 1088 "ml_code_util.m"
              parse_tree__prog_util__pred_args_to_func_args_3_p_0(ml_backend__ml_code_util__TypeInfo_25_25, ml_backend__ml_code_util__ArgVars_13, &ml_backend__ml_code_util___InputArgVars_19, &ml_backend__ml_code_util__conv2_RetArgVar_8);
            }
#line 1088 "ml_code_util.m"
            *ml_backend__ml_code_util__RetArgVar_8 = ((MR_Word) ml_backend__ml_code_util__conv2_RetArgVar_8);
#line 1090 "ml_code_util.m"
            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__RetArgMode_16 == (MR_Integer) 1);
#line 1077 "ml_code_util.m"
            if (ml_backend__ml_code_util__succeeded)
#line 1077 "ml_code_util.m"
              {
#line 1091 "ml_code_util.m"
                {
#line 1091 "ml_code_util.m"
                  ml_backend__ml_code_util__V_22_22 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_code_util__ModuleInfo_5, ml_backend__ml_code_util__RetArgType_18);
                }
#line 1091 "ml_code_util.m"
                ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_22_22 == (MR_Integer) 1);
#line 1077 "ml_code_util.m"
              }
#line 1077 "ml_code_util.m"
          }
#line 1077 "ml_code_util.m"
      }
#line 1077 "ml_code_util.m"
    return ml_backend__ml_code_util__succeeded;
#line 1077 "ml_code_util.m"
  }
#line 101 "ml_code_util.m"
}

#line 91 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_label_func_6_p_0(
#line 91 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_7,
#line 91 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__FuncLabel_8,
#line 91 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__FuncParams_9,
#line 91 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_10,
#line 91 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Statement_11,
#line 91 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Func_12)
#line 91 "ml_code_util.m"
{
#line 734 "ml_code_util.m"
  {
#line 734 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 734 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__ModuleInfo_13;
#line 734 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__PredId_14;
#line 734 "ml_code_util.m"
    MR_Integer ml_backend__ml_code_util__ProcId_15;
#line 734 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__FuncName_16;
#line 734 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__DeclFlags_17;
#line 734 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__EnvVarNames_20;
#line 734 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__FuncDefn_21;
#line 734 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_22_22;
#line 734 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_23_23;
#line 734 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_31_31;
#line 734 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__MLDS_PredLabel_38;
#line 734 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__RttiProcLabel_44;
#line 1158 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util___MLDS_ModuleName_30;

#line 736 "ml_code_util.m"
    {
#line 736 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_code_util__Info_7, &ml_backend__ml_code_util__ModuleInfo_13);
    }
#line 737 "ml_code_util.m"
    {
#line 737 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_code_util__Info_7, &ml_backend__ml_code_util__PredId_14);
    }
#line 738 "ml_code_util.m"
    {
#line 738 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_code_util__Info_7, &ml_backend__ml_code_util__ProcId_15);
    }
#line 1110 "ml_code_util.m"
    {
#line 1110 "ml_code_util.m"
      ml_backend__ml_code_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "ml_code_util.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_31_31, 0) = ((MR_Box) (ml_backend__ml_code_util__FuncLabel_8));
#line 1110 "ml_code_util.m"
    }
#line 1157 "ml_code_util.m"
    {
#line 1157 "ml_code_util.m"
      ml_backend__ml_code_util__RttiProcLabel_44 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ml_backend__ml_code_util__ModuleInfo_13, ml_backend__ml_code_util__PredId_14, ml_backend__ml_code_util__ProcId_15);
    }
#line 1158 "ml_code_util.m"
    {
#line 1158 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_code_util__ModuleInfo_13, ml_backend__ml_code_util__RttiProcLabel_44, &ml_backend__ml_code_util__MLDS_PredLabel_38, &ml_backend__ml_code_util___MLDS_ModuleName_30);
    }
#line 1121 "ml_code_util.m"
    {
#line 1121 "ml_code_util.m"
      ml_backend__ml_code_util__FuncName_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__FuncName_16, 0) = ((MR_Box) (ml_backend__ml_code_util__MLDS_PredLabel_38));
#line 1121 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__FuncName_16, 1) = ((MR_Box) (ml_backend__ml_code_util__ProcId_15));
#line 1121 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__FuncName_16, 2) = ((MR_Box) (ml_backend__ml_code_util__V_31_31));
#line 1121 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__FuncName_16, 3) = ((MR_Box) (ml_backend__ml_code_util__PredId_14));
#line 1121 "ml_code_util.m"
    }
#line 763 "ml_code_util.m"
    {
#line 763 "ml_code_util.m"
      ml_backend__ml_code_util__DeclFlags_17 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 4, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 745 "ml_code_util.m"
    {
#line 745 "ml_code_util.m"
      ml_backend__ml_code_util__EnvVarNames_20 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 747 "ml_code_util.m"
    ml_backend__ml_code_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_code_util__Statement_11);
#line 746 "ml_code_util.m"
    {
#line 746 "ml_code_util.m"
      ml_backend__ml_code_util__FuncDefn_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 746 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__FuncDefn_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__FuncDefn_21, 1) = ((MR_Box) (ml_backend__ml_code_util__FuncParams_9));
#line 746 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__FuncDefn_21, 2) = ((MR_Box) (ml_backend__ml_code_util__V_22_22));
#line 746 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__FuncDefn_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__FuncDefn_21, 4) = ((MR_Box) (ml_backend__ml_code_util__EnvVarNames_20));
#line 746 "ml_code_util.m"
    }
#line 748 "ml_code_util.m"
    {
#line 748 "ml_code_util.m"
      ml_backend__ml_code_util__V_23_23 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_10);
    }
#line 748 "ml_code_util.m"
    {
#line 748 "ml_code_util.m"
      MR_Word base;
#line 748 "ml_code_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 748 "ml_code_util.m"
      *ml_backend__ml_code_util__Func_12 = base;
#line 748 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_code_util__FuncName_16));
#line 748 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_code_util__V_23_23));
#line 748 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_code_util__DeclFlags_17));
#line 748 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_code_util__FuncDefn_21));
#line 748 "ml_code_util.m"
    }
#line 734 "ml_code_util.m"
  }
#line 91 "ml_code_util.m"
}

#line 84 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(
#line 84 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_6,
#line 84 "ml_code_util.m"
  MR_Integer ml_backend__ml_code_util__FuncLabel_7,
#line 84 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_8,
#line 84 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Statement_9,
#line 84 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Func_10)
#line 84 "ml_code_util.m"
{
#line 722 "ml_code_util.m"
  {
#line 722 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 722 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__UseNested_11;
#line 722 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__FuncParams_12;

#line 723 "ml_code_util.m"
    {
#line 723 "ml_code_util.m"
      ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_p_0(ml_backend__ml_code_util__Info_6, &ml_backend__ml_code_util__UseNested_11);
    }
#line 727 "ml_code_util.m"
#line 727 "ml_code_util.m"
    switch (ml_backend__ml_code_util__UseNested_11) {
#line 727 "ml_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 727 "ml_code_util.m"
      case (MR_Integer) 0:
#line 728 "ml_code_util.m"
        {
#line 730 "ml_code_util.m"
          ml_backend__ml_code_util__FuncParams_12 = (MR_Word) &ml_backend__ml_code_util_scalar_common_1[11];
#line 728 "ml_code_util.m"
        }
#line 727 "ml_code_util.m"
        break;
#line 727 "ml_code_util.m"
      case (MR_Integer) 1:
#line 725 "ml_code_util.m"
        {
#line 726 "ml_code_util.m"
          ml_backend__ml_code_util__FuncParams_12 = (MR_Word) &ml_backend__ml_code_util_scalar_common_1[12];
#line 725 "ml_code_util.m"
        }
#line 727 "ml_code_util.m"
        break;
#line 727 "ml_code_util.m"
    }
#line 732 "ml_code_util.m"
    {
#line 732 "ml_code_util.m"
      ml_backend__ml_code_util__ml_gen_label_func_6_p_0(ml_backend__ml_code_util__Info_6, ml_backend__ml_code_util__FuncLabel_7, ml_backend__ml_code_util__FuncParams_12, ml_backend__ml_code_util__Context_8, ml_backend__ml_code_util__Statement_9, ml_backend__ml_code_util__Func_10);
    }
#line 722 "ml_code_util.m"
  }
#line 84 "ml_code_util.m"
}

#line 75 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_combine_conj_8_p_0(
#line 75 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__FirstCodeModel_9,
#line 75 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_10,
#line 75 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__DoGenFirst_11,
#line 75 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__DoGenRest_12,
#line 75 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Decls_13,
#line 75 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__Statements_14,
#line 75 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_0_30,
#line 75 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Info_31)
#line 75 "ml_code_util.m"
{
#line 646 "ml_code_util.m"
  {
#line 646 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 646 "ml_code_util.m"
#line 646 "ml_code_util.m"
    switch (ml_backend__ml_code_util__FirstCodeModel_9) {
#line 646 "ml_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 646 "ml_code_util.m"
      case (MR_Integer) 0:
#line 646 "ml_code_util.m"
        {
#line 646 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__FirstDecls_16;
#line 646 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__FirstStatements_17;
#line 646 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__RestDecls_18;
#line 646 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__RestStatements_19;
#line 646 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49;
#line 647 "ml_code_util.m"
          void MR_CALL (* ml_backend__ml_code_util__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DoGenFirst_11, (MR_Integer) 1)));
#line 647 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv3_FirstDecls_16;
#line 647 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv2_FirstStatements_17;
#line 647 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv1_STATE_VARIABLE_Info_49_49;
#line 648 "ml_code_util.m"
          void MR_CALL (* ml_backend__ml_code_util__func_4)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *);
#line 648 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv7_RestDecls_18;
#line 648 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv6_RestStatements_19;
#line 648 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv5_STATE_VARIABLE_Info_31;

#line 647 "ml_code_util.m"
          {
#line 647 "ml_code_util.m"
            ml_backend__ml_code_util__func_0(((MR_Box) ml_backend__ml_code_util__DoGenFirst_11), &ml_backend__ml_code_util__conv3_FirstDecls_16, &ml_backend__ml_code_util__conv2_FirstStatements_17, ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_0_30)), &ml_backend__ml_code_util__conv1_STATE_VARIABLE_Info_49_49);
          }
#line 647 "ml_code_util.m"
          ml_backend__ml_code_util__FirstDecls_16 = ((MR_Word) ml_backend__ml_code_util__conv3_FirstDecls_16);
#line 647 "ml_code_util.m"
          ml_backend__ml_code_util__FirstStatements_17 = ((MR_Word) ml_backend__ml_code_util__conv2_FirstStatements_17);
#line 647 "ml_code_util.m"
          ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49 = ((MR_Word) ml_backend__ml_code_util__conv1_STATE_VARIABLE_Info_49_49);
#line 648 "ml_code_util.m"
          ml_backend__ml_code_util__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DoGenRest_12, (MR_Integer) 1)));
#line 648 "ml_code_util.m"
          {
#line 648 "ml_code_util.m"
            ml_backend__ml_code_util__func_4(((MR_Box) ml_backend__ml_code_util__DoGenRest_12), &ml_backend__ml_code_util__conv7_RestDecls_18, &ml_backend__ml_code_util__conv6_RestStatements_19, ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_49_49)), &ml_backend__ml_code_util__conv5_STATE_VARIABLE_Info_31);
          }
#line 648 "ml_code_util.m"
          ml_backend__ml_code_util__RestDecls_18 = ((MR_Word) ml_backend__ml_code_util__conv7_RestDecls_18);
#line 648 "ml_code_util.m"
          ml_backend__ml_code_util__RestStatements_19 = ((MR_Word) ml_backend__ml_code_util__conv6_RestStatements_19);
#line 648 "ml_code_util.m"
          *ml_backend__ml_code_util__STATE_VARIABLE_Info_31 = ((MR_Word) ml_backend__ml_code_util__conv5_STATE_VARIABLE_Info_31);
#line 649 "ml_code_util.m"
          {
#line 649 "ml_code_util.m"
            *ml_backend__ml_code_util__Decls_13 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_code_util__FirstDecls_16, ml_backend__ml_code_util__RestDecls_18);
          }
#line 650 "ml_code_util.m"
          {
#line 650 "ml_code_util.m"
            *ml_backend__ml_code_util__Statements_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_util__FirstStatements_17, ml_backend__ml_code_util__RestStatements_19);
          }
#line 646 "ml_code_util.m"
        }
#line 646 "ml_code_util.m"
        break;
#line 646 "ml_code_util.m"
      case (MR_Integer) 2:
#line 698 "ml_code_util.m"
        {
#line 698 "ml_code_util.m"
          MR_Integer ml_backend__ml_code_util__RestFuncLabel_24;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__RestFuncLabelRval_25;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__EnvPtrRval_26;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__SuccessCont_27;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__RestStatement_28;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__RestFunc_29;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_33_33;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_36_36;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_37_37;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_38_38;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_40_40;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__FirstDecls_55;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__RestDecls_57;
#line 698 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__RestStatements_58;
#line 707 "ml_code_util.m"
          void MR_CALL (* ml_backend__ml_code_util__func_8)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *);
#line 707 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv11_FirstDecls_55;
#line 707 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv10_Statements_14;
#line 707 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv9_STATE_VARIABLE_Info_37_37;
#line 712 "ml_code_util.m"
          void MR_CALL (* ml_backend__ml_code_util__func_12)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *);
#line 712 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv15_RestDecls_57;
#line 712 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv14_RestStatements_58;
#line 712 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv13_STATE_VARIABLE_Info_31;

#line 701 "ml_code_util.m"
          {
#line 701 "ml_code_util.m"
            ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_code_util__RestFuncLabel_24, &ml_backend__ml_code_util__RestFuncLabelRval_25, ml_backend__ml_code_util__STATE_VARIABLE_Info_0_30, &ml_backend__ml_code_util__STATE_VARIABLE_Info_33_33);
          }
#line 704 "ml_code_util.m"
          {
#line 704 "ml_code_util.m"
            ml_backend__ml_code_util__ml_get_env_ptr_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_33_33, &ml_backend__ml_code_util__EnvPtrRval_26);
          }
#line 705 "ml_code_util.m"
          {
#line 705 "ml_code_util.m"
            ml_backend__ml_code_util__SuccessCont_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 705 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccessCont_27, 0) = ((MR_Box) (ml_backend__ml_code_util__RestFuncLabelRval_25));
#line 705 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccessCont_27, 1) = ((MR_Box) (ml_backend__ml_code_util__EnvPtrRval_26));
#line 705 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccessCont_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 705 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__SuccessCont_27, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 705 "ml_code_util.m"
          }
#line 706 "ml_code_util.m"
          {
#line 706 "ml_code_util.m"
            ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_code_util__SuccessCont_27, ml_backend__ml_code_util__STATE_VARIABLE_Info_33_33, &ml_backend__ml_code_util__STATE_VARIABLE_Info_36_36);
          }
#line 707 "ml_code_util.m"
          ml_backend__ml_code_util__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DoGenFirst_11, (MR_Integer) 1)));
#line 707 "ml_code_util.m"
          {
#line 707 "ml_code_util.m"
            ml_backend__ml_code_util__func_8(((MR_Box) ml_backend__ml_code_util__DoGenFirst_11), &ml_backend__ml_code_util__conv11_FirstDecls_55, &ml_backend__ml_code_util__conv10_Statements_14, ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_36_36)), &ml_backend__ml_code_util__conv9_STATE_VARIABLE_Info_37_37);
          }
#line 707 "ml_code_util.m"
          ml_backend__ml_code_util__FirstDecls_55 = ((MR_Word) ml_backend__ml_code_util__conv11_FirstDecls_55);
#line 707 "ml_code_util.m"
          *ml_backend__ml_code_util__Statements_14 = ((MR_Word) ml_backend__ml_code_util__conv10_Statements_14);
#line 707 "ml_code_util.m"
          ml_backend__ml_code_util__STATE_VARIABLE_Info_37_37 = ((MR_Word) ml_backend__ml_code_util__conv9_STATE_VARIABLE_Info_37_37);
#line 708 "ml_code_util.m"
          {
#line 708 "ml_code_util.m"
            ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_37_37, &ml_backend__ml_code_util__STATE_VARIABLE_Info_38_38);
          }
#line 712 "ml_code_util.m"
          ml_backend__ml_code_util__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DoGenRest_12, (MR_Integer) 1)));
#line 712 "ml_code_util.m"
          {
#line 712 "ml_code_util.m"
            ml_backend__ml_code_util__func_12(((MR_Box) ml_backend__ml_code_util__DoGenRest_12), &ml_backend__ml_code_util__conv15_RestDecls_57, &ml_backend__ml_code_util__conv14_RestStatements_58, ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_38_38)), &ml_backend__ml_code_util__conv13_STATE_VARIABLE_Info_31);
          }
#line 712 "ml_code_util.m"
          ml_backend__ml_code_util__RestDecls_57 = ((MR_Word) ml_backend__ml_code_util__conv15_RestDecls_57);
#line 712 "ml_code_util.m"
          ml_backend__ml_code_util__RestStatements_58 = ((MR_Word) ml_backend__ml_code_util__conv14_RestStatements_58);
#line 712 "ml_code_util.m"
          *ml_backend__ml_code_util__STATE_VARIABLE_Info_31 = ((MR_Word) ml_backend__ml_code_util__conv13_STATE_VARIABLE_Info_31);
#line 713 "ml_code_util.m"
          {
#line 713 "ml_code_util.m"
            ml_backend__ml_code_util__RestStatement_28 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_code_util__RestDecls_57, ml_backend__ml_code_util__RestStatements_58, ml_backend__ml_code_util__Context_10);
          }
#line 715 "ml_code_util.m"
          {
#line 715 "ml_code_util.m"
            ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(*ml_backend__ml_code_util__STATE_VARIABLE_Info_31, ml_backend__ml_code_util__RestFuncLabel_24, ml_backend__ml_code_util__Context_10, ml_backend__ml_code_util__RestStatement_28, &ml_backend__ml_code_util__RestFunc_29);
          }
#line 718 "ml_code_util.m"
          {
#line 718 "ml_code_util.m"
            ml_backend__ml_code_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_40_40, 0) = ((MR_Box) (ml_backend__ml_code_util__RestFunc_29));
#line 718 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "ml_code_util.m"
          }
#line 718 "ml_code_util.m"
          {
#line 718 "ml_code_util.m"
            *ml_backend__ml_code_util__Decls_13 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_code_util__FirstDecls_55, ml_backend__ml_code_util__V_40_40);
          }
#line 698 "ml_code_util.m"
        }
#line 646 "ml_code_util.m"
        break;
#line 646 "ml_code_util.m"
      case (MR_Integer) 1:
#line 666 "ml_code_util.m"
        {
#line 666 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__Succeeded_20;
#line 666 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__IfBody_21;
#line 666 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__IfStmt_22;
#line 666 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__IfStatement_23;
#line 666 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Info_42_42;
#line 666 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_46_46;
#line 666 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_47_47;
#line 666 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__FirstDecls_51;
#line 666 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__FirstStatements_52;
#line 666 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__RestDecls_53;
#line 666 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__RestStatements_54;
#line 666 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__SucceededLval_66;
#line 667 "ml_code_util.m"
          void MR_CALL (* ml_backend__ml_code_util__func_16)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DoGenFirst_11, (MR_Integer) 1)));
#line 667 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv19_FirstDecls_51;
#line 667 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv18_FirstStatements_52;
#line 667 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv17_STATE_VARIABLE_Info_42_42;
#line 669 "ml_code_util.m"
          void MR_CALL (* ml_backend__ml_code_util__func_20)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *);
#line 669 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv23_RestDecls_53;
#line 669 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv22_RestStatements_54;
#line 669 "ml_code_util.m"
          MR_Box ml_backend__ml_code_util__conv21_STATE_VARIABLE_Info_31;

#line 667 "ml_code_util.m"
          {
#line 667 "ml_code_util.m"
            ml_backend__ml_code_util__func_16(((MR_Box) ml_backend__ml_code_util__DoGenFirst_11), &ml_backend__ml_code_util__conv19_FirstDecls_51, &ml_backend__ml_code_util__conv18_FirstStatements_52, ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_0_30)), &ml_backend__ml_code_util__conv17_STATE_VARIABLE_Info_42_42);
          }
#line 667 "ml_code_util.m"
          ml_backend__ml_code_util__FirstDecls_51 = ((MR_Word) ml_backend__ml_code_util__conv19_FirstDecls_51);
#line 667 "ml_code_util.m"
          ml_backend__ml_code_util__FirstStatements_52 = ((MR_Word) ml_backend__ml_code_util__conv18_FirstStatements_52);
#line 667 "ml_code_util.m"
          ml_backend__ml_code_util__STATE_VARIABLE_Info_42_42 = ((MR_Word) ml_backend__ml_code_util__conv17_STATE_VARIABLE_Info_42_42);
#line 1799 "ml_code_util.m"
          {
#line 1799 "ml_code_util.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_code_util__STATE_VARIABLE_Info_42_42, &ml_backend__ml_code_util__SucceededLval_66);
          }
#line 1800 "ml_code_util.m"
          {
#line 1800 "ml_code_util.m"
            ml_backend__ml_code_util__Succeeded_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1800 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Succeeded_20, 0) = ((MR_Box) (ml_backend__ml_code_util__SucceededLval_66));
#line 1800 "ml_code_util.m"
          }
#line 669 "ml_code_util.m"
          ml_backend__ml_code_util__func_20 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__DoGenRest_12, (MR_Integer) 1)));
#line 669 "ml_code_util.m"
          {
#line 669 "ml_code_util.m"
            ml_backend__ml_code_util__func_20(((MR_Box) ml_backend__ml_code_util__DoGenRest_12), &ml_backend__ml_code_util__conv23_RestDecls_53, &ml_backend__ml_code_util__conv22_RestStatements_54, ((MR_Box) (ml_backend__ml_code_util__STATE_VARIABLE_Info_42_42)), &ml_backend__ml_code_util__conv21_STATE_VARIABLE_Info_31);
          }
#line 669 "ml_code_util.m"
          ml_backend__ml_code_util__RestDecls_53 = ((MR_Word) ml_backend__ml_code_util__conv23_RestDecls_53);
#line 669 "ml_code_util.m"
          ml_backend__ml_code_util__RestStatements_54 = ((MR_Word) ml_backend__ml_code_util__conv22_RestStatements_54);
#line 669 "ml_code_util.m"
          *ml_backend__ml_code_util__STATE_VARIABLE_Info_31 = ((MR_Word) ml_backend__ml_code_util__conv21_STATE_VARIABLE_Info_31);
#line 670 "ml_code_util.m"
          {
#line 670 "ml_code_util.m"
            ml_backend__ml_code_util__IfBody_21 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_code_util__RestStatements_54, ml_backend__ml_code_util__Context_10);
          }
#line 671 "ml_code_util.m"
          {
#line 671 "ml_code_util.m"
            ml_backend__ml_code_util__IfStmt_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 671 "ml_code_util.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__IfStmt_22, 0) = ((MR_Box) (ml_backend__ml_code_util__Succeeded_20));
#line 671 "ml_code_util.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__IfStmt_22, 1) = ((MR_Box) (ml_backend__ml_code_util__IfBody_21));
#line 671 "ml_code_util.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__IfStmt_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "ml_code_util.m"
          }
#line 672 "ml_code_util.m"
          {
#line 672 "ml_code_util.m"
            ml_backend__ml_code_util__V_46_46 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_10);
          }
#line 672 "ml_code_util.m"
          {
#line 672 "ml_code_util.m"
            ml_backend__ml_code_util__IfStatement_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__IfStatement_23, 0) = ((MR_Box) (ml_backend__ml_code_util__IfStmt_22));
#line 672 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__IfStatement_23, 1) = ((MR_Box) (ml_backend__ml_code_util__V_46_46));
#line 672 "ml_code_util.m"
          }
#line 673 "ml_code_util.m"
          {
#line 673 "ml_code_util.m"
            *ml_backend__ml_code_util__Decls_13 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_code_util__FirstDecls_51, ml_backend__ml_code_util__RestDecls_53);
          }
#line 674 "ml_code_util.m"
          {
#line 674 "ml_code_util.m"
            ml_backend__ml_code_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_47_47, 0) = ((MR_Box) (ml_backend__ml_code_util__IfStatement_23));
#line 674 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "ml_code_util.m"
          }
#line 674 "ml_code_util.m"
          {
#line 674 "ml_code_util.m"
            *ml_backend__ml_code_util__Statements_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_util__FirstStatements_52, ml_backend__ml_code_util__V_47_47);
          }
#line 666 "ml_code_util.m"
        }
#line 646 "ml_code_util.m"
        break;
#line 646 "ml_code_util.m"
    }
#line 646 "ml_code_util.m"
  }
#line 75 "ml_code_util.m"
}

#line 65 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_block_mlds_3_f_0(
#line 65 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VarDecls_5,
#line 65 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Statements_6,
#line 65 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_7)
#line 65 "ml_code_util.m"
{
#line 628 "ml_code_util.m"
  {
#line 628 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__VarDecls_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Block_8;
#line 628 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__SingleStatement_9;
#line 629 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_10_10;

#line 629 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 629 "ml_code_util.m"
      {
#line 630 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__Statements_6)) == (MR_mktag((MR_Integer) 1)));
#line 630 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 630 "ml_code_util.m"
          {
#line 630 "ml_code_util.m"
            ml_backend__ml_code_util__SingleStatement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Statements_6, (MR_Integer) 0)));
#line 630 "ml_code_util.m"
            ml_backend__ml_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Statements_6, (MR_Integer) 1)));
#line 630 "ml_code_util.m"
            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "ml_code_util.m"
          }
#line 629 "ml_code_util.m"
      }
#line 628 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 632 "ml_code_util.m"
      ml_backend__ml_code_util__Block_8 = ml_backend__ml_code_util__SingleStatement_9;
#line 628 "ml_code_util.m"
    else
#line 634 "ml_code_util.m"
      {
#line 634 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_11_11;

#line 634 "ml_code_util.m"
        {
#line 634 "ml_code_util.m"
          ml_backend__ml_code_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 634 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_11_11, 0) = ((MR_Box) (ml_backend__ml_code_util__VarDecls_5));
#line 634 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_11_11, 1) = ((MR_Box) (ml_backend__ml_code_util__Statements_6));
#line 634 "ml_code_util.m"
        }
#line 634 "ml_code_util.m"
        {
#line 634 "ml_code_util.m"
          ml_backend__ml_code_util__Block_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 634 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Block_8, 0) = ((MR_Box) (ml_backend__ml_code_util__V_11_11));
#line 634 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Block_8, 1) = ((MR_Box) (ml_backend__ml_code_util__Context_7));
#line 634 "ml_code_util.m"
        }
#line 634 "ml_code_util.m"
      }
#line 628 "ml_code_util.m"
    return ml_backend__ml_code_util__Block_8;
#line 628 "ml_code_util.m"
  }
#line 65 "ml_code_util.m"
}

#line 63 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_block_3_f_0(
#line 63 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__VarDecls_5,
#line 63 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Statements_6,
#line 63 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_7)
#line 63 "ml_code_util.m"
{
#line 617 "ml_code_util.m"
  {
#line 617 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__VarDecls_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Block_8;
#line 617 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__SingleStatement_9;
#line 618 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_10_10;

#line 618 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 618 "ml_code_util.m"
      {
#line 619 "ml_code_util.m"
        ml_backend__ml_code_util__succeeded = ((MR_tag((MR_Word) ml_backend__ml_code_util__Statements_6)) == (MR_mktag((MR_Integer) 1)));
#line 619 "ml_code_util.m"
        if (ml_backend__ml_code_util__succeeded)
#line 619 "ml_code_util.m"
          {
#line 619 "ml_code_util.m"
            ml_backend__ml_code_util__SingleStatement_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Statements_6, (MR_Integer) 0)));
#line 619 "ml_code_util.m"
            ml_backend__ml_code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Statements_6, (MR_Integer) 1)));
#line 619 "ml_code_util.m"
            ml_backend__ml_code_util__succeeded = (ml_backend__ml_code_util__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "ml_code_util.m"
          }
#line 618 "ml_code_util.m"
      }
#line 617 "ml_code_util.m"
    if (ml_backend__ml_code_util__succeeded)
#line 621 "ml_code_util.m"
      ml_backend__ml_code_util__Block_8 = ml_backend__ml_code_util__SingleStatement_9;
#line 617 "ml_code_util.m"
    else
#line 623 "ml_code_util.m"
      {
#line 623 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_11_11;
#line 623 "ml_code_util.m"
        MR_Word ml_backend__ml_code_util__V_12_12;

#line 623 "ml_code_util.m"
        {
#line 623 "ml_code_util.m"
          ml_backend__ml_code_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 623 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_11_11, 0) = ((MR_Box) (ml_backend__ml_code_util__VarDecls_5));
#line 623 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__V_11_11, 1) = ((MR_Box) (ml_backend__ml_code_util__Statements_6));
#line 623 "ml_code_util.m"
        }
#line 624 "ml_code_util.m"
        {
#line 624 "ml_code_util.m"
          ml_backend__ml_code_util__V_12_12 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_7);
        }
#line 623 "ml_code_util.m"
        {
#line 623 "ml_code_util.m"
          ml_backend__ml_code_util__Block_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 623 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Block_8, 0) = ((MR_Box) (ml_backend__ml_code_util__V_11_11));
#line 623 "ml_code_util.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Block_8, 1) = ((MR_Box) (ml_backend__ml_code_util__V_12_12));
#line 623 "ml_code_util.m"
        }
#line 623 "ml_code_util.m"
      }
#line 617 "ml_code_util.m"
    return ml_backend__ml_code_util__Block_8;
#line 617 "ml_code_util.m"
  }
#line 63 "ml_code_util.m"
}

#line 593 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_append_return_statement_6_p_0_2(
#line 593 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 593 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
#line 593 "ml_code_util.m"
{
#line 593 "ml_code_util.m"
  {
#line 593 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
#line 593 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
#line 593 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__conv1_LambdaHeadVar__2_30;

#line 593 "ml_code_util.m"
    {
#line 593 "ml_code_util.m"
      ml_backend__ml_code_util__conv1_LambdaHeadVar__2_30 = ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__593__1_1_f_0(((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
#line 593 "ml_code_util.m"
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv1_LambdaHeadVar__2_30));
#line 593 "ml_code_util.m"
    return ml_backend__ml_code_util__wrapper_arg_2;
#line 593 "ml_code_util.m"
  }
#line 593 "ml_code_util.m"
}

#line 603 "ml_code_util.m"
static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_append_return_statement_6_p_0_1(
#line 603 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__closure_arg,
#line 603 "ml_code_util.m"
  MR_Box ml_backend__ml_code_util__wrapper_arg_1)
#line 603 "ml_code_util.m"
{
#line 603 "ml_code_util.m"
  {
#line 603 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__wrapper_arg_2;
#line 603 "ml_code_util.m"
    MR_Box ml_backend__ml_code_util__closure = ml_backend__ml_code_util__closure_arg;
#line 603 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__conv0_LambdaHeadVar__2_23;

#line 603 "ml_code_util.m"
    {
#line 603 "ml_code_util.m"
      ml_backend__ml_code_util__conv0_LambdaHeadVar__2_23 = ml_backend__ml_code_util__IntroducedFrom__func__ml_append_return_statement__603__1_1_f_0(((MR_Word) ml_backend__ml_code_util__wrapper_arg_1));
    }
#line 603 "ml_code_util.m"
    ml_backend__ml_code_util__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_code_util__conv0_LambdaHeadVar__2_23));
#line 603 "ml_code_util.m"
    return ml_backend__ml_code_util__wrapper_arg_2;
#line 603 "ml_code_util.m"
  }
#line 603 "ml_code_util.m"
}

#line 55 "ml_code_util.m"
void MR_CALL 
ml_backend__ml_code_util__ml_append_return_statement_6_p_0(
#line 55 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Info_7,
#line 55 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CodeModel_8,
#line 55 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__CopiedOutputVarLvals_9,
#line 55 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_10,
#line 55 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__STATE_VARIABLE_Statements_0_19,
#line 55 "ml_code_util.m"
  MR_Word * ml_backend__ml_code_util__STATE_VARIABLE_Statements_20)
#line 55 "ml_code_util.m"
{
#line 591 "ml_code_util.m"
  {
#line 591 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;

#line 591 "ml_code_util.m"
#line 591 "ml_code_util.m"
    switch (ml_backend__ml_code_util__CodeModel_8) {
#line 591 "ml_code_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 591 "ml_code_util.m"
      case (MR_Integer) 0:
#line 609 "ml_code_util.m"
        if ((ml_backend__ml_code_util__CopiedOutputVarLvals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "ml_code_util.m"
          *ml_backend__ml_code_util__STATE_VARIABLE_Statements_20 = ml_backend__ml_code_util__STATE_VARIABLE_Statements_0_19;
#line 609 "ml_code_util.m"
        else
#line 602 "ml_code_util.m"
          {
#line 602 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__V_24_24;
#line 602 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__V_26_26;
#line 602 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__CopiedOutputVarRvals_38;
#line 602 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__ReturnStmt_39;
#line 602 "ml_code_util.m"
            MR_Word ml_backend__ml_code_util__ReturnStatement_40;

#line 603 "ml_code_util.m"
            {
#line 603 "ml_code_util.m"
              ml_backend__ml_code_util__CopiedOutputVarRvals_38 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_code_util_scalar_common_2[2], ml_backend__ml_code_util__CopiedOutputVarLvals_9);
            }
#line 605 "ml_code_util.m"
            {
#line 605 "ml_code_util.m"
              ml_backend__ml_code_util__ReturnStmt_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ReturnStmt_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 605 "ml_code_util.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ReturnStmt_39, 1) = ((MR_Box) (ml_backend__ml_code_util__CopiedOutputVarRvals_38));
#line 605 "ml_code_util.m"
            }
#line 607 "ml_code_util.m"
            {
#line 607 "ml_code_util.m"
              ml_backend__ml_code_util__V_24_24 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_10);
            }
#line 606 "ml_code_util.m"
            {
#line 606 "ml_code_util.m"
              ml_backend__ml_code_util__ReturnStatement_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 606 "ml_code_util.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ReturnStatement_40, 0) = ((MR_Box) (ml_backend__ml_code_util__ReturnStmt_39));
#line 606 "ml_code_util.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ReturnStatement_40, 1) = ((MR_Box) (ml_backend__ml_code_util__V_24_24));
#line 606 "ml_code_util.m"
            }
#line 608 "ml_code_util.m"
            {
#line 608 "ml_code_util.m"
              ml_backend__ml_code_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "ml_code_util.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_26_26, 0) = ((MR_Box) (ml_backend__ml_code_util__ReturnStatement_40));
#line 608 "ml_code_util.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "ml_code_util.m"
            }
#line 608 "ml_code_util.m"
            {
#line 608 "ml_code_util.m"
              *ml_backend__ml_code_util__STATE_VARIABLE_Statements_20 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_util__STATE_VARIABLE_Statements_0_19, ml_backend__ml_code_util__V_26_26);
            }
#line 602 "ml_code_util.m"
          }
#line 591 "ml_code_util.m"
        break;
#line 591 "ml_code_util.m"
      case (MR_Integer) 2:
#line 613 "ml_code_util.m"
        *ml_backend__ml_code_util__STATE_VARIABLE_Statements_20 = ml_backend__ml_code_util__STATE_VARIABLE_Statements_0_19;
#line 591 "ml_code_util.m"
        break;
#line 591 "ml_code_util.m"
      case (MR_Integer) 1:
#line 591 "ml_code_util.m"
        {
#line 591 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__Succeeded_12;
#line 591 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__CopiedOutputVarRvals_13;
#line 591 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__ReturnStmt_15;
#line 591 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__ReturnStatement_16;
#line 591 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_31_31;
#line 591 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_32_32;
#line 591 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__V_34_34;
#line 591 "ml_code_util.m"
          MR_Word ml_backend__ml_code_util__SucceededLval_55;

#line 1799 "ml_code_util.m"
          {
#line 1799 "ml_code_util.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_code_util__Info_7, &ml_backend__ml_code_util__SucceededLval_55);
          }
#line 1800 "ml_code_util.m"
          {
#line 1800 "ml_code_util.m"
            ml_backend__ml_code_util__Succeeded_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1800 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__Succeeded_12, 0) = ((MR_Box) (ml_backend__ml_code_util__SucceededLval_55));
#line 1800 "ml_code_util.m"
          }
#line 593 "ml_code_util.m"
          {
#line 593 "ml_code_util.m"
            ml_backend__ml_code_util__CopiedOutputVarRvals_13 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_code_util_scalar_common_2[3], ml_backend__ml_code_util__CopiedOutputVarLvals_9);
          }
#line 595 "ml_code_util.m"
          {
#line 595 "ml_code_util.m"
            ml_backend__ml_code_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_31_31, 0) = ((MR_Box) (ml_backend__ml_code_util__Succeeded_12));
#line 595 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_31_31, 1) = ((MR_Box) (ml_backend__ml_code_util__CopiedOutputVarRvals_13));
#line 595 "ml_code_util.m"
          }
#line 595 "ml_code_util.m"
          {
#line 595 "ml_code_util.m"
            ml_backend__ml_code_util__ReturnStmt_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ReturnStmt_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 595 "ml_code_util.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__ReturnStmt_15, 1) = ((MR_Box) (ml_backend__ml_code_util__V_31_31));
#line 595 "ml_code_util.m"
          }
#line 597 "ml_code_util.m"
          {
#line 597 "ml_code_util.m"
            ml_backend__ml_code_util__V_32_32 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_10);
          }
#line 596 "ml_code_util.m"
          {
#line 596 "ml_code_util.m"
            ml_backend__ml_code_util__ReturnStatement_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 596 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ReturnStatement_16, 0) = ((MR_Box) (ml_backend__ml_code_util__ReturnStmt_15));
#line 596 "ml_code_util.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__ReturnStatement_16, 1) = ((MR_Box) (ml_backend__ml_code_util__V_32_32));
#line 596 "ml_code_util.m"
          }
#line 598 "ml_code_util.m"
          {
#line 598 "ml_code_util.m"
            ml_backend__ml_code_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_34_34, 0) = ((MR_Box) (ml_backend__ml_code_util__ReturnStatement_16));
#line 598 "ml_code_util.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_code_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "ml_code_util.m"
          }
#line 598 "ml_code_util.m"
          {
#line 598 "ml_code_util.m"
            *ml_backend__ml_code_util__STATE_VARIABLE_Statements_20 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_code_util__STATE_VARIABLE_Statements_0_19, ml_backend__ml_code_util__V_34_34);
          }
#line 591 "ml_code_util.m"
        }
#line 591 "ml_code_util.m"
        break;
#line 591 "ml_code_util.m"
    }
#line 591 "ml_code_util.m"
  }
#line 55 "ml_code_util.m"
}

#line 50 "ml_code_util.m"
MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_assign_3_f_0(
#line 50 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Lval_5,
#line 50 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Rval_6,
#line 50 "ml_code_util.m"
  MR_Word ml_backend__ml_code_util__Context_7)
#line 50 "ml_code_util.m"
{
#line 583 "ml_code_util.m"
  {
#line 583 "ml_code_util.m"
    MR_bool ml_backend__ml_code_util__succeeded;
#line 583 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Statement_8;
#line 583 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Assign_9;
#line 583 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__Stmt_10;
#line 583 "ml_code_util.m"
    MR_Word ml_backend__ml_code_util__V_11_11;

#line 584 "ml_code_util.m"
    {
#line 584 "ml_code_util.m"
      ml_backend__ml_code_util__Assign_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_9, 0) = ((MR_Box) (ml_backend__ml_code_util__Lval_5));
#line 584 "ml_code_util.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_code_util__Assign_9, 1) = ((MR_Box) (ml_backend__ml_code_util__Rval_6));
#line 584 "ml_code_util.m"
    }
#line 585 "ml_code_util.m"
    {
#line 585 "ml_code_util.m"
      ml_backend__ml_code_util__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 585 "ml_code_util.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_code_util__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_code_util__Assign_9));
#line 585 "ml_code_util.m"
    }
#line 586 "ml_code_util.m"
    {
#line 586 "ml_code_util.m"
      ml_backend__ml_code_util__V_11_11 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_code_util__Context_7);
    }
#line 586 "ml_code_util.m"
    {
#line 586 "ml_code_util.m"
      ml_backend__ml_code_util__Statement_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Statement_8, 0) = ((MR_Box) (ml_backend__ml_code_util__Stmt_10));
#line 586 "ml_code_util.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_code_util__Statement_8, 1) = ((MR_Box) (ml_backend__ml_code_util__V_11_11));
#line 586 "ml_code_util.m"
    }
#line 583 "ml_code_util.m"
    return ml_backend__ml_code_util__Statement_8;
#line 583 "ml_code_util.m"
  }
#line 50 "ml_code_util.m"
}

void mercury__ml_backend__ml_code_util__init(void)
{
}

void mercury__ml_backend__ml_code_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_code_util__ml_backend__ml_code_util__type_ctor_info_gen_pred_0);
}

void mercury__ml_backend__ml_code_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_code_util. */
