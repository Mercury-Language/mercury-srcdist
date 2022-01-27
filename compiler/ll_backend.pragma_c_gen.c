/*
** Automatically generated from `pragma_c_gen.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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


/* :- module ll_backend.pragma_c_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__pragma_c_gen__init
ENDINIT
*/

#include "ll_backend.pragma_c_gen.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.name_mangle.mih"
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
#include "hlds.goal_form.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 158 "ll_backend.pragma_c_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 161 "ll_backend.pragma_c_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "ll_backend.pragma_c_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 167 "ll_backend.pragma_c_gen.c"
static const MR_PseudoTypeInfo ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0[5];

#line 170 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDesc ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0;

#line 173 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0[1];

#line 176 "ll_backend.pragma_c_gen.c"
static const MR_DuPtagLayout ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0[1];

#line 179 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_name_ordered_c_arg_0[1];

#line 182 "ll_backend.pragma_c_gen.c"
static const MR_Integer ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__functor_number_map_c_arg_0[1];

#line 185 "ll_backend.pragma_c_gen.c"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001(
#line 188 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_1,
#line 190 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2);

#line 193 "ll_backend.pragma_c_gen.c"
static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001(
#line 196 "ll_backend.pragma_c_gen.c"
  MR_Box * ll_backend__pragma_c_gen__wrapper_arg_1,
#line 198 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2,
#line 200 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_3);

#line 378 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__378__1_2_p_0(
#line 378 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_13,
#line 378 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_44);

#line 376 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__376__1_2_p_0(
#line 376 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_18,
#line 376 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_39);

#line 374 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__374__1_2_p_0(
#line 374 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_17,
#line 374 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_34);

#line 767 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0(
#line 767 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__1_1,
#line 767 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 767 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__3_3);

#line 767 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0(
#line 767 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 767 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2);

#line 1076 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_p_0(
#line 1076 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 1076 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1076 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 1076 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
#line 1076 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_5,
#line 1076 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6);

#line 1044 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(
#line 1044 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__FloatRegType_1,
#line 1044 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1044 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3,
#line 1044 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_4,
#line 1044 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_5);

#line 983 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_p_0(
#line 983 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 983 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2,
#line 983 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 983 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
#line 983 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_5,
#line 983 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6);

#line 963 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(
#line 963 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 963 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PostDeaths_2,
#line 963 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3,
#line 963 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_4);

#line 936 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(
#line 936 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 936 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Module_2,
#line 936 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 936 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4);

#line 877 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(
#line 877 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 877 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2);

#line 857 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(
#line 857 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 857 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2);

#line 845 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(
#line 845 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 845 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2);

#line 822 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(
#line 822 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 822 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_2,
#line 822 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__LastReg_3,
#line 822 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4);

#line 808 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(
#line 808 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 808 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2,
#line 808 "pragma_c_gen.m"
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_3,
#line 808 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4,
#line 808 "pragma_c_gen.m"
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_5);

#line 801 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(
#line 801 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_5,
#line 801 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
#line 801 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ArgInfos_7,
#line 801 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ExtraCArgs_8);

#line 779 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(
#line 779 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 779 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 779 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3);

#line 727 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(
#line 727 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__C_Code_7,
#line 727 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__MaybeContext_8,
#line 727 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashDefine_9,
#line 727 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashUndef_10,
#line 727 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17,
#line 727 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18);

#line 704 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(
#line 704 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
#line 704 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_7,
#line 704 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_8,
#line 704 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashDef_9,
#line 704 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashUndef_10);

#line 436 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_p_0(
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_14,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Attributes_15,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_16,
#line 436 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_17,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_18,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_19,
#line 436 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__C_Code_20,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Context_21,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__GoalInfo_22,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_23,
#line 436 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__Code_24,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_92,
#line 436 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_93);

#line 404 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(
#line 404 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Expr_5,
#line 404 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__CondRval_6,
#line 404 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19,
#line 404 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);

#line 378 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_12_p_0_3(
#line 378 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg);

#line 376 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_12_p_0_2(
#line 376 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg);

#line 374 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_12_p_0_1(
#line 374 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg);


static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_2[2][5];

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_3[1][1];




static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__pragma_c_gen_scalar_common_3[0])))
  },
};

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
};

static /* final */ const MR_Box ll_backend__pragma_c_gen_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 553 "ll_backend.pragma_c_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 561 "ll_backend.pragma_c_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 569 "ll_backend.pragma_c_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 577 "ll_backend.pragma_c_gen.c"
static const MR_PseudoTypeInfo ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_box_policy_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0
};

#line 586 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDesc ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0 = {
  (MR_String) "c_arg",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0,
  NULL,
  NULL,
  NULL
};

#line 601 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0[1] = {
  &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0
};

#line 606 "ll_backend.pragma_c_gen.c"
static const MR_DuPtagLayout ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0
  }
};

#line 615 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_name_ordered_c_arg_0[1] = {
  &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0
};

#line 620 "ll_backend.pragma_c_gen.c"
static const MR_Integer ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__functor_number_map_c_arg_0[1] = {
  (MR_Integer) 0
};

#line 625 "ll_backend.pragma_c_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__type_ctor_info_c_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001)),
  ((MR_Box) (ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001)),
  (MR_String) "ll_backend.pragma_c_gen",
  (MR_String) "c_arg",
  {     ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_name_ordered_c_arg_0 },
  {     ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__functor_number_map_c_arg_0
};

#line 642 "ll_backend.pragma_c_gen.c"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001(
#line 645 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_1,
#line 647 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2)
#line 649 "ll_backend.pragma_c_gen.c"
{
#line 651 "ll_backend.pragma_c_gen.c"
  {
#line 653 "ll_backend.pragma_c_gen.c"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 656 "ll_backend.pragma_c_gen.c"
    {
#line 658 "ll_backend.pragma_c_gen.c"
      ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen____Unify____c_arg_0_0(((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_1), ((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_2));
    }
#line 661 "ll_backend.pragma_c_gen.c"
    return ll_backend__pragma_c_gen__succeeded;
#line 663 "ll_backend.pragma_c_gen.c"
  }
#line 665 "ll_backend.pragma_c_gen.c"
}

#line 668 "ll_backend.pragma_c_gen.c"
static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001(
#line 671 "ll_backend.pragma_c_gen.c"
  MR_Box * ll_backend__pragma_c_gen__wrapper_arg_1,
#line 673 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2,
#line 675 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_3)
#line 677 "ll_backend.pragma_c_gen.c"
{
#line 679 "ll_backend.pragma_c_gen.c"
  {
#line 681 "ll_backend.pragma_c_gen.c"
    MR_Word ll_backend__pragma_c_gen__conv0_HeadVar__1_1;

#line 684 "ll_backend.pragma_c_gen.c"
    {
#line 686 "ll_backend.pragma_c_gen.c"
      ll_backend__pragma_c_gen____Compare____c_arg_0_0(&ll_backend__pragma_c_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_2), ((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_3));
    }
#line 689 "ll_backend.pragma_c_gen.c"
    *ll_backend__pragma_c_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__pragma_c_gen__conv0_HeadVar__1_1));
#line 691 "ll_backend.pragma_c_gen.c"
  }
#line 693 "ll_backend.pragma_c_gen.c"
}

#line 378 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__378__1_2_p_0(
#line 378 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_13,
#line 378 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_44)
#line 378 "pragma_c_gen.m"
{
#line 378 "pragma_c_gen.m"
  {
#line 378 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CodeModel_13 == ll_backend__pragma_c_gen__HeadVar__2_44);

#line 378 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 378 "pragma_c_gen.m"
  }
#line 378 "pragma_c_gen.m"
}

#line 376 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__376__1_2_p_0(
#line 376 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_18,
#line 376 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_39)
#line 376 "pragma_c_gen.m"
{
#line 376 "pragma_c_gen.m"
  {
#line 376 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 376 "pragma_c_gen.m"
    {
#line 376 "pragma_c_gen.m"
      return ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[0], ((MR_Box) (ll_backend__pragma_c_gen__ExtraArgs_18)), ((MR_Box) (ll_backend__pragma_c_gen__HeadVar__2_39)));
    }
#line 376 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 376 "pragma_c_gen.m"
  }
#line 376 "pragma_c_gen.m"
}

#line 374 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__374__1_2_p_0(
#line 374 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_17,
#line 374 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_34)
#line 374 "pragma_c_gen.m"
{
#line 374 "pragma_c_gen.m"
  {
#line 374 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 374 "pragma_c_gen.m"
    {
#line 374 "pragma_c_gen.m"
      return ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[0], ((MR_Box) (ll_backend__pragma_c_gen__Args_17)), ((MR_Box) (ll_backend__pragma_c_gen__HeadVar__2_34)));
    }
#line 374 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 374 "pragma_c_gen.m"
  }
#line 374 "pragma_c_gen.m"
}

#line 767 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0(
#line 767 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__1_1,
#line 767 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 767 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__3_3)
#line 767 "pragma_c_gen.m"
{
#line 767 "pragma_c_gen.m"
  {
#line 767 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 767 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CastX_18 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__2_2;
#line 767 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CastY_19 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__3_3;

#line 767 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CastX_18 == ll_backend__pragma_c_gen__CastY_19);
#line 767 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 793 "ll_backend.pragma_c_gen.c"
      *ll_backend__pragma_c_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 767 "pragma_c_gen.m"
    else
#line 767 "pragma_c_gen.m"
      {
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_14_14;

#line 767 "pragma_c_gen.m"
        {
#line 767 "pragma_c_gen.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[1], &ll_backend__pragma_c_gen__V_14_14, ((MR_Box) (ll_backend__pragma_c_gen__V_4_4)), ((MR_Box) (ll_backend__pragma_c_gen__V_9_9)));
        }
#line 827 "ll_backend.pragma_c_gen.c"
        ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_14_14 == (MR_Integer) 0);
#line 767 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 767 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 767 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_14_14;
#line 767 "pragma_c_gen.m"
        else
#line 767 "pragma_c_gen.m"
          {
#line 767 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_15_15;

#line 767 "pragma_c_gen.m"
            {
#line 767 "pragma_c_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[2], &ll_backend__pragma_c_gen__V_15_15, ((MR_Box) (ll_backend__pragma_c_gen__V_5_5)), ((MR_Box) (ll_backend__pragma_c_gen__V_10_10)));
            }
#line 847 "ll_backend.pragma_c_gen.c"
            ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_15_15 == (MR_Integer) 0);
#line 767 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 767 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 767 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_15_15;
#line 767 "pragma_c_gen.m"
            else
#line 767 "pragma_c_gen.m"
              {
#line 767 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_16_16;

#line 767 "pragma_c_gen.m"
                {
#line 767 "pragma_c_gen.m"
                  parse_tree__prog_data____Compare____mer_type_0_0(&ll_backend__pragma_c_gen__V_16_16, ll_backend__pragma_c_gen__V_6_6, ll_backend__pragma_c_gen__V_11_11);
                }
#line 867 "ll_backend.pragma_c_gen.c"
                ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_16_16 == (MR_Integer) 0);
#line 767 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 767 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 767 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_16_16;
#line 767 "pragma_c_gen.m"
                else
#line 767 "pragma_c_gen.m"
                  {
#line 767 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__V_17_17;
#line 767 "pragma_c_gen.m"
                    MR_Integer ll_backend__pragma_c_gen__V_25_25 = (MR_Integer) ll_backend__pragma_c_gen__V_7_7;
#line 767 "pragma_c_gen.m"
                    MR_Integer ll_backend__pragma_c_gen__V_26_26 = (MR_Integer) ll_backend__pragma_c_gen__V_12_12;

#line 767 "pragma_c_gen.m"
                    {
#line 767 "pragma_c_gen.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__pragma_c_gen__V_17_17, ll_backend__pragma_c_gen__V_25_25, ll_backend__pragma_c_gen__V_26_26);
                    }
#line 891 "ll_backend.pragma_c_gen.c"
                    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_17_17 == (MR_Integer) 0);
#line 767 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 767 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 767 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_17_17;
#line 767 "pragma_c_gen.m"
                    else
#line 767 "pragma_c_gen.m"
                      {
#line 767 "pragma_c_gen.m"
                        hlds__hlds_pred____Compare____arg_info_0_0(ll_backend__pragma_c_gen__HeadVar__1_1, ll_backend__pragma_c_gen__V_8_8, ll_backend__pragma_c_gen__V_13_13);
#line 767 "pragma_c_gen.m"
                        return;
                      }
#line 767 "pragma_c_gen.m"
                  }
#line 767 "pragma_c_gen.m"
              }
#line 767 "pragma_c_gen.m"
          }
#line 767 "pragma_c_gen.m"
      }
#line 767 "pragma_c_gen.m"
  }
#line 767 "pragma_c_gen.m"
}

#line 767 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0(
#line 767 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 767 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2)
#line 767 "pragma_c_gen.m"
{
#line 767 "pragma_c_gen.m"
  {
#line 767 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 767 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CastX_13 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__1_1;
#line 767 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CastY_14 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__2_2;

#line 767 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CastX_13 == ll_backend__pragma_c_gen__CastY_14);
#line 767 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 767 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__succeeded = MR_TRUE;
#line 767 "pragma_c_gen.m"
    else
#line 767 "pragma_c_gen.m"
      {
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TypeInfo_16_16;
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 767 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 4)));

#line 972 "ll_backend.pragma_c_gen.c"
        {
#line 974 "ll_backend.pragma_c_gen.c"
          ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[1], ((MR_Box) (ll_backend__pragma_c_gen__V_3_3)), ((MR_Box) (ll_backend__pragma_c_gen__V_8_8)));
        }
#line 767 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 767 "pragma_c_gen.m"
          {
#line 981 "ll_backend.pragma_c_gen.c"
            ll_backend__pragma_c_gen__TypeInfo_16_16 = (MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[2];
#line 983 "ll_backend.pragma_c_gen.c"
            {
#line 985 "ll_backend.pragma_c_gen.c"
              ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__pragma_c_gen__TypeInfo_16_16, ((MR_Box) (ll_backend__pragma_c_gen__V_4_4)), ((MR_Box) (ll_backend__pragma_c_gen__V_9_9)));
            }
#line 767 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 767 "pragma_c_gen.m"
              {
#line 992 "ll_backend.pragma_c_gen.c"
                {
#line 994 "ll_backend.pragma_c_gen.c"
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__pragma_c_gen__V_5_5, ll_backend__pragma_c_gen__V_10_10);
                }
#line 767 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 767 "pragma_c_gen.m"
                  {
#line 1001 "ll_backend.pragma_c_gen.c"
                    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_6_6 == ll_backend__pragma_c_gen__V_11_11);
#line 767 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1005 "ll_backend.pragma_c_gen.c"
                      {
#line 1007 "ll_backend.pragma_c_gen.c"
                        return ll_backend__pragma_c_gen__succeeded = hlds__hlds_pred____Unify____arg_info_0_0(ll_backend__pragma_c_gen__V_7_7, ll_backend__pragma_c_gen__V_12_12);
                      }
#line 767 "pragma_c_gen.m"
                  }
#line 767 "pragma_c_gen.m"
              }
#line 767 "pragma_c_gen.m"
          }
#line 767 "pragma_c_gen.m"
      }
#line 767 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 767 "pragma_c_gen.m"
  }
#line 767 "pragma_c_gen.m"
}

#line 1076 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_p_0(
#line 1076 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 1076 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1076 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 1076 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
#line 1076 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_5,
#line 1076 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6)
#line 1076 "pragma_c_gen.m"
{
#line 1080 "pragma_c_gen.m"
  {
#line 1080 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 1080 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1080 "pragma_c_gen.m"
      if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1080 "pragma_c_gen.m"
        {
#line 1080 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1080 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_5;
#line 1080 "pragma_c_gen.m"
        }
#line 1080 "pragma_c_gen.m"
      else
#line 1109 "pragma_c_gen.m"
        {
#line 1110 "pragma_c_gen.m"
          {
#line 1110 "pragma_c_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/6", (MR_String) "length mismatch");
#line 1110 "pragma_c_gen.m"
            return;
          }
#line 1109 "pragma_c_gen.m"
        }
#line 1080 "pragma_c_gen.m"
    else
#line 1080 "pragma_c_gen.m"
      {
#line 1080 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1080 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 1080 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1107 "pragma_c_gen.m"
          {
#line 1108 "pragma_c_gen.m"
            {
#line 1108 "pragma_c_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/6", (MR_String) "length mismatch");
#line 1108 "pragma_c_gen.m"
              return;
            }
#line 1107 "pragma_c_gen.m"
          }
#line 1080 "pragma_c_gen.m"
        else
#line 1082 "pragma_c_gen.m"
          {
#line 1082 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Reg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1082 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Regs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1082 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__OutputsTail_18;
#line 1082 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Var_19;
#line 1082 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__MaybeArgName_20;
#line 1082 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__OrigType_21;
#line 1082 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__BoxPolicy_22;
#line 1082 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_33_33;
#line 1082 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_34_34;
#line 1085 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___ArgInfo_23;

#line 1083 "pragma_c_gen.m"
            {
#line 1083 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_p_0(ll_backend__pragma_c_gen__V_56_56, ll_backend__pragma_c_gen__Regs_14, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__OutputsTail_18, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_5, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_33_33);
            }
#line 1085 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_57_57, (MR_Integer) 0)));
#line 1085 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__MaybeArgName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_57_57, (MR_Integer) 1)));
#line 1085 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__OrigType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_57_57, (MR_Integer) 2)));
#line 1085 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_57_57, (MR_Integer) 3)));
#line 1085 "pragma_c_gen.m"
            ll_backend__pragma_c_gen___ArgInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_57_57, (MR_Integer) 4)));
#line 1086 "pragma_c_gen.m"
            {
#line 1086 "pragma_c_gen.m"
              ll_backend__code_info__release_reg_3_p_0(ll_backend__pragma_c_gen__Reg_13, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_33_33, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_34_34);
            }
#line 1087 "pragma_c_gen.m"
            {
#line 1087 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__succeeded = ll_backend__code_info__variable_is_forward_live_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_34_34, ll_backend__pragma_c_gen__Var_19);
            }
#line 1104 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 1088 "pragma_c_gen.m"
              {
#line 1088 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__MaybeForeign_24;
#line 1088 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__Module_61;
#line 1088 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeTable_62;
#line 1035 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__MaybeC_67;
#line 1019 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeCtor_63;
#line 1019 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeDefn_64;
#line 1019 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeBody_65;
#line 1019 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_75_75;
#line 1023 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeIL_66;
#line 1023 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeJava_68;
#line 1023 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeCSharp_69;
#line 1023 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeErlang_70;
#line 1172 "ll_backend.pragma_c_gen.c"
                MR_String ll_backend__pragma_c_gen__Name_85;
#line 915 "pragma_c_gen.m"
                MR_Char ll_backend__pragma_c_gen__V_88_88;
#line 915 "pragma_c_gen.m"
                MR_String ll_backend__pragma_c_gen__V_86_86;

#line 1088 "pragma_c_gen.m"
                {
#line 1088 "pragma_c_gen.m"
                  ll_backend__code_info__set_var_location_4_p_0(ll_backend__pragma_c_gen__Var_19, ll_backend__pragma_c_gen__Reg_13, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_34_34, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6);
                }
#line 1016 "pragma_c_gen.m"
                {
#line 1016 "pragma_c_gen.m"
                  ll_backend__code_info__get_module_info_2_p_0(*ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6, &ll_backend__pragma_c_gen__Module_61);
                }
#line 1017 "pragma_c_gen.m"
                {
#line 1017 "pragma_c_gen.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__pragma_c_gen__Module_61, &ll_backend__pragma_c_gen__TypeTable_62);
                }
#line 1019 "pragma_c_gen.m"
                {
#line 1019 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__pragma_c_gen__OrigType_21, &ll_backend__pragma_c_gen__TypeCtor_63);
                }
#line 1019 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1019 "pragma_c_gen.m"
                  {
#line 1020 "pragma_c_gen.m"
                    {
#line 1020 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__pragma_c_gen__TypeTable_62, ll_backend__pragma_c_gen__TypeCtor_63, &ll_backend__pragma_c_gen__TypeDefn_64);
                    }
#line 1019 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1019 "pragma_c_gen.m"
                      {
#line 1021 "pragma_c_gen.m"
                        {
#line 1021 "pragma_c_gen.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__pragma_c_gen__TypeDefn_64, &ll_backend__pragma_c_gen__TypeBody_65);
                        }
#line 1022 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__TypeBody_65)) == (MR_mktag((MR_Integer) 0)));
#line 1022 "pragma_c_gen.m"
                        if (ll_backend__pragma_c_gen__succeeded)
#line 1022 "pragma_c_gen.m"
                          {
#line 1022 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__V_75_75 = (MR_Word) MR_body(((MR_Word) ll_backend__pragma_c_gen__TypeBody_65), (MR_Integer) 0);
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeIL_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, (MR_Integer) 0)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__MaybeC_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, (MR_Integer) 1)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeJava_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, (MR_Integer) 2)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeCSharp_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, (MR_Integer) 3)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeErlang_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, (MR_Integer) 4)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__succeeded = MR_TRUE;
#line 1022 "pragma_c_gen.m"
                          }
#line 1019 "pragma_c_gen.m"
                      }
#line 1019 "pragma_c_gen.m"
                  }
#line 1035 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1030 "pragma_c_gen.m"
                  if ((ll_backend__pragma_c_gen__MaybeC_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "pragma_c_gen.m"
                    {
#line 1033 "pragma_c_gen.m"
                      {
#line 1033 "pragma_c_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
#line 1033 "pragma_c_gen.m"
                        return;
                      }
#line 1031 "pragma_c_gen.m"
                    }
#line 1030 "pragma_c_gen.m"
                  else
#line 1027 "pragma_c_gen.m"
                    {
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Data_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeC_67, (MR_Integer) 0)));
#line 1027 "pragma_c_gen.m"
                      MR_String ll_backend__pragma_c_gen__Name_72;
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Assertions_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_71, (MR_Integer) 2)));
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_71, (MR_Integer) 0)));
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_80_80;
#line 1028 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_71, (MR_Integer) 1)));

#line 1028 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__Name_72 = (MR_String) ll_backend__pragma_c_gen__V_79_79;
#line 1029 "pragma_c_gen.m"
                      {
#line 1029 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_80_80, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_72));
#line 1029 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_80_80, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Assertions_74));
#line 1029 "pragma_c_gen.m"
                      }
#line 1029 "pragma_c_gen.m"
                      {
#line 1029 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__MaybeForeign_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeForeign_24, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_80_80));
#line 1029 "pragma_c_gen.m"
                      }
#line 1027 "pragma_c_gen.m"
                    }
#line 1035 "pragma_c_gen.m"
                else
#line 1036 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__MaybeForeign_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 914 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__MaybeArgName_20)) == (MR_mktag((MR_Integer) 1)));
#line 914 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 914 "pragma_c_gen.m"
                  {
#line 914 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__Name_85 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeArgName_20, (MR_Integer) 0)));
#line 915 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__V_88_88 = (MR_Char) 95;
#line 915 "pragma_c_gen.m"
                    {
#line 915 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__succeeded = mercury__string__first_char_3_p_2(ll_backend__pragma_c_gen__Name_85, ll_backend__pragma_c_gen__V_88_88, &ll_backend__pragma_c_gen__V_86_86);
                    }
#line 915 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 914 "pragma_c_gen.m"
                  }
#line 1320 "ll_backend.pragma_c_gen.c"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1322 "ll_backend.pragma_c_gen.c"
                  {
#line 1324 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__ModuleInfo_27;
#line 1326 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__VarType_28;
#line 1328 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__IsDummy_29;
#line 1330 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__PragmaCOutput_30;

#line 1094 "pragma_c_gen.m"
                    {
#line 1094 "pragma_c_gen.m"
                      ll_backend__code_info__get_module_info_2_p_0(*ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6, &ll_backend__pragma_c_gen__ModuleInfo_27);
                    }
#line 1095 "pragma_c_gen.m"
                    {
#line 1095 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__VarType_28 = ll_backend__code_info__variable_type_2_f_0(*ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6, ll_backend__pragma_c_gen__Var_19);
                    }
#line 1096 "pragma_c_gen.m"
                    {
#line 1096 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__IsDummy_29 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_27, ll_backend__pragma_c_gen__VarType_28);
                    }
#line 1097 "pragma_c_gen.m"
                    {
#line 1097 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__PragmaCOutput_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_30, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Reg_13));
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_30, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_28));
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_30, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_29));
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_30, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_21));
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_30, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Name_85));
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_30, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_24));
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_30, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_22));
#line 1097 "pragma_c_gen.m"
                    }
#line 1099 "pragma_c_gen.m"
                    {
#line 1099 "pragma_c_gen.m"
                      MR_Word base;
#line 1099 "pragma_c_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 1099 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__PragmaCOutput_30));
#line 1099 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OutputsTail_18));
#line 1099 "pragma_c_gen.m"
                    }
#line 1382 "ll_backend.pragma_c_gen.c"
                  }
#line 1384 "ll_backend.pragma_c_gen.c"
                else
#line 1386 "ll_backend.pragma_c_gen.c"
                if ((ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3 == (MR_Integer) 0))
#line 1388 "ll_backend.pragma_c_gen.c"
                  {
#line 1390 "ll_backend.pragma_c_gen.c"
                    MR_String ll_backend__pragma_c_gen__V_90_90;
#line 1392 "ll_backend.pragma_c_gen.c"
                    MR_Integer ll_backend__pragma_c_gen__V_91_91;
#line 1394 "ll_backend.pragma_c_gen.c"
                    MR_String ll_backend__pragma_c_gen__Name_93;
#line 1396 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__ModuleInfo_94;
#line 1398 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__VarType_95;
#line 1400 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__IsDummy_96;
#line 1402 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__PragmaCOutput_97;

#line 924 "pragma_c_gen.m"
                    {
#line 924 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__V_91_91 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_19);
                    }
#line 924 "pragma_c_gen.m"
                    {
#line 924 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__V_90_90 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_91_91);
                    }
#line 924 "pragma_c_gen.m"
                    {
#line 924 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__Name_93 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", ll_backend__pragma_c_gen__V_90_90);
                    }
#line 1094 "pragma_c_gen.m"
                    {
#line 1094 "pragma_c_gen.m"
                      ll_backend__code_info__get_module_info_2_p_0(*ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6, &ll_backend__pragma_c_gen__ModuleInfo_94);
                    }
#line 1095 "pragma_c_gen.m"
                    {
#line 1095 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__VarType_95 = ll_backend__code_info__variable_type_2_f_0(*ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6, ll_backend__pragma_c_gen__Var_19);
                    }
#line 1096 "pragma_c_gen.m"
                    {
#line 1096 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__IsDummy_96 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_94, ll_backend__pragma_c_gen__VarType_95);
                    }
#line 1097 "pragma_c_gen.m"
                    {
#line 1097 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__PragmaCOutput_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_97, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Reg_13));
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_97, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_95));
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_97, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_96));
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_97, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_21));
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_97, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Name_93));
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_97, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_24));
#line 1097 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_97, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_22));
#line 1097 "pragma_c_gen.m"
                    }
#line 1099 "pragma_c_gen.m"
                    {
#line 1099 "pragma_c_gen.m"
                      MR_Word base;
#line 1099 "pragma_c_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 1099 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__PragmaCOutput_97));
#line 1099 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OutputsTail_18));
#line 1099 "pragma_c_gen.m"
                    }
#line 1469 "ll_backend.pragma_c_gen.c"
                  }
#line 1471 "ll_backend.pragma_c_gen.c"
                else
#line 1101 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__4_4 = ll_backend__pragma_c_gen__OutputsTail_18;
#line 1088 "pragma_c_gen.m"
              }
#line 1104 "pragma_c_gen.m"
            else
#line 1105 "pragma_c_gen.m"
              {
#line 1105 "pragma_c_gen.m"
                *ll_backend__pragma_c_gen__HeadVar__4_4 = ll_backend__pragma_c_gen__OutputsTail_18;
#line 1105 "pragma_c_gen.m"
                *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_34_34;
#line 1105 "pragma_c_gen.m"
              }
#line 1082 "pragma_c_gen.m"
          }
#line 1080 "pragma_c_gen.m"
      }
#line 1080 "pragma_c_gen.m"
  }
#line 1076 "pragma_c_gen.m"
}

#line 1044 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(
#line 1044 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__FloatRegType_1,
#line 1044 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1044 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3,
#line 1044 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_4,
#line 1044 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_5)
#line 1044 "pragma_c_gen.m"
{
#line 1047 "pragma_c_gen.m"
  {
#line 1047 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 1047 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1047 "pragma_c_gen.m"
      {
#line 1047 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1047 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_5 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_4;
#line 1047 "pragma_c_gen.m"
      }
#line 1047 "pragma_c_gen.m"
    else
#line 1048 "pragma_c_gen.m"
      {
#line 1048 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1048 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1048 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Reg_13;
#line 1048 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Regs_14;
#line 1048 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 0)));
#line 1048 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__VarType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 2)));
#line 1048 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BoxPolicy_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 3)));
#line 1048 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__RegType_21;
#line 1048 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_24_24;
#line 1049 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 1)));
#line 1049 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 4)));

#line 1059 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__BoxPolicy_19 == (MR_Integer) 1))
#line 1067 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__RegType_21 = (MR_Integer) 0;
#line 1059 "pragma_c_gen.m"
        else
#line 1062 "pragma_c_gen.m"
          {
#line 1060 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_30_30;

#line 1060 "pragma_c_gen.m"
            {
#line 1060 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__V_30_30 = parse_tree__builtin_lib_types__float_type_0_f_0();
            }
#line 1060 "pragma_c_gen.m"
            {
#line 1060 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__pragma_c_gen__VarType_18, ll_backend__pragma_c_gen__V_30_30);
            }
#line 1062 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 1061 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__RegType_21 = ll_backend__pragma_c_gen__FloatRegType_1;
#line 1062 "pragma_c_gen.m"
            else
#line 1063 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__RegType_21 = (MR_Integer) 0;
#line 1062 "pragma_c_gen.m"
          }
#line 1051 "pragma_c_gen.m"
        {
#line 1051 "pragma_c_gen.m"
          ll_backend__code_info__acquire_reg_for_var_5_p_0(ll_backend__pragma_c_gen__Var_16, ll_backend__pragma_c_gen__RegType_21, &ll_backend__pragma_c_gen__Reg_13, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_4, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_24_24);
        }
#line 1052 "pragma_c_gen.m"
        {
#line 1052 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(ll_backend__pragma_c_gen__FloatRegType_1, ll_backend__pragma_c_gen__Args_12, &ll_backend__pragma_c_gen__Regs_14, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_24_24, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_5);
        }
#line 1048 "pragma_c_gen.m"
        {
#line 1048 "pragma_c_gen.m"
          MR_Word base;
#line 1048 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__3_3 = base;
#line 1048 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Reg_13));
#line 1048 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Regs_14));
#line 1048 "pragma_c_gen.m"
        }
#line 1048 "pragma_c_gen.m"
      }
#line 1047 "pragma_c_gen.m"
  }
#line 1044 "pragma_c_gen.m"
}

#line 983 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_p_0(
#line 983 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 983 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2,
#line 983 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 983 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
#line 983 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_5,
#line 983 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6)
#line 983 "pragma_c_gen.m"
{
#line 987 "pragma_c_gen.m"
  while (MR_TRUE)
#line 987 "pragma_c_gen.m"
    {
#line 987 "pragma_c_gen.m"
      /* tailcall optimized into a loop */
#line 987 "pragma_c_gen.m"
      {
#line 987 "pragma_c_gen.m"
        MR_bool ll_backend__pragma_c_gen__succeeded;

#line 987 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 987 "pragma_c_gen.m"
          {
#line 987 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 987 "pragma_c_gen.m"
            {
#line 987 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 987 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_5;
#line 987 "pragma_c_gen.m"
          }
#line 987 "pragma_c_gen.m"
        else
#line 989 "pragma_c_gen.m"
          {
#line 989 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 989 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 989 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 0)));
#line 989 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__MaybeArgName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 1)));
#line 989 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__OrigType_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 2)));
#line 989 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__BoxPolicy_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 3)));
#line 990 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___ArgInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 4)));
#line 1676 "ll_backend.pragma_c_gen.c"
            MR_String ll_backend__pragma_c_gen__Name_44;
#line 915 "pragma_c_gen.m"
            MR_Char ll_backend__pragma_c_gen__V_47_47;
#line 915 "pragma_c_gen.m"
            MR_String ll_backend__pragma_c_gen__V_45_45;

#line 914 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__MaybeArgName_18)) == (MR_mktag((MR_Integer) 1)));
#line 914 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 914 "pragma_c_gen.m"
              {
#line 914 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__Name_44 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeArgName_18, (MR_Integer) 0)));
#line 915 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__V_47_47 = (MR_Char) 95;
#line 915 "pragma_c_gen.m"
                {
#line 915 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__succeeded = mercury__string__first_char_3_p_2(ll_backend__pragma_c_gen__Name_44, ll_backend__pragma_c_gen__V_47_47, &ll_backend__pragma_c_gen__V_45_45);
                }
#line 915 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 914 "pragma_c_gen.m"
              }
#line 1702 "ll_backend.pragma_c_gen.c"
            if (ll_backend__pragma_c_gen__succeeded)
#line 1704 "ll_backend.pragma_c_gen.c"
              {
#line 1706 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__VarType_24;
#line 1708 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__FirstCode_25;
#line 1710 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Rval_26;
#line 1712 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__MaybeForeign_27;
#line 1714 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__ModuleInfo_28;
#line 1716 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__IsDummy_29;
#line 1718 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Input_30;
#line 1720 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Inputs1_31;
#line 1722 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__RestCode_32;
#line 1724 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_36_36;
#line 1726 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Module_55;
#line 1728 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__TypeTable_56;
#line 1035 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__MaybeC_61;
#line 1019 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeCtor_57;
#line 1019 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeDefn_58;
#line 1019 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeBody_59;
#line 1019 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_69_69;
#line 1023 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeIL_60;
#line 1023 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeJava_62;
#line 1023 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeCSharp_63;
#line 1023 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeErlang_64;

#line 994 "pragma_c_gen.m"
                {
#line 994 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__VarType_24 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_5, ll_backend__pragma_c_gen__Var_17);
                }
#line 995 "pragma_c_gen.m"
                {
#line 995 "pragma_c_gen.m"
                  ll_backend__code_info__produce_variable_5_p_0(ll_backend__pragma_c_gen__Var_17, &ll_backend__pragma_c_gen__FirstCode_25, &ll_backend__pragma_c_gen__Rval_26, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_5, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_36_36);
                }
#line 1016 "pragma_c_gen.m"
                {
#line 1016 "pragma_c_gen.m"
                  ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_36_36, &ll_backend__pragma_c_gen__Module_55);
                }
#line 1017 "pragma_c_gen.m"
                {
#line 1017 "pragma_c_gen.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__pragma_c_gen__Module_55, &ll_backend__pragma_c_gen__TypeTable_56);
                }
#line 1019 "pragma_c_gen.m"
                {
#line 1019 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__pragma_c_gen__OrigType_19, &ll_backend__pragma_c_gen__TypeCtor_57);
                }
#line 1019 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1019 "pragma_c_gen.m"
                  {
#line 1020 "pragma_c_gen.m"
                    {
#line 1020 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__pragma_c_gen__TypeTable_56, ll_backend__pragma_c_gen__TypeCtor_57, &ll_backend__pragma_c_gen__TypeDefn_58);
                    }
#line 1019 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1019 "pragma_c_gen.m"
                      {
#line 1021 "pragma_c_gen.m"
                        {
#line 1021 "pragma_c_gen.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__pragma_c_gen__TypeDefn_58, &ll_backend__pragma_c_gen__TypeBody_59);
                        }
#line 1022 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__TypeBody_59)) == (MR_mktag((MR_Integer) 0)));
#line 1022 "pragma_c_gen.m"
                        if (ll_backend__pragma_c_gen__succeeded)
#line 1022 "pragma_c_gen.m"
                          {
#line 1022 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__V_69_69 = (MR_Word) MR_body(((MR_Word) ll_backend__pragma_c_gen__TypeBody_59), (MR_Integer) 0);
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeIL_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_69_69, (MR_Integer) 0)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__MaybeC_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_69_69, (MR_Integer) 1)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeJava_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_69_69, (MR_Integer) 2)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeCSharp_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_69_69, (MR_Integer) 3)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeErlang_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_69_69, (MR_Integer) 4)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__succeeded = MR_TRUE;
#line 1022 "pragma_c_gen.m"
                          }
#line 1019 "pragma_c_gen.m"
                      }
#line 1019 "pragma_c_gen.m"
                  }
#line 1035 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1030 "pragma_c_gen.m"
                  if ((ll_backend__pragma_c_gen__MaybeC_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "pragma_c_gen.m"
                    {
#line 1033 "pragma_c_gen.m"
                      {
#line 1033 "pragma_c_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
#line 1033 "pragma_c_gen.m"
                        return;
                      }
#line 1031 "pragma_c_gen.m"
                    }
#line 1030 "pragma_c_gen.m"
                  else
#line 1027 "pragma_c_gen.m"
                    {
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Data_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeC_61, (MR_Integer) 0)));
#line 1027 "pragma_c_gen.m"
                      MR_String ll_backend__pragma_c_gen__Name_66;
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Assertions_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_65, (MR_Integer) 2)));
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_65, (MR_Integer) 0)));
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_74_74;
#line 1028 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_65, (MR_Integer) 1)));

#line 1028 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__Name_66 = (MR_String) ll_backend__pragma_c_gen__V_73_73;
#line 1029 "pragma_c_gen.m"
                      {
#line 1029 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_74_74, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_66));
#line 1029 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_74_74, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Assertions_68));
#line 1029 "pragma_c_gen.m"
                      }
#line 1029 "pragma_c_gen.m"
                      {
#line 1029 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__MaybeForeign_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeForeign_27, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_74_74));
#line 1029 "pragma_c_gen.m"
                      }
#line 1027 "pragma_c_gen.m"
                    }
#line 1035 "pragma_c_gen.m"
                else
#line 1036 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__MaybeForeign_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 997 "pragma_c_gen.m"
                {
#line 997 "pragma_c_gen.m"
                  ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_36_36, &ll_backend__pragma_c_gen__ModuleInfo_28);
                }
#line 998 "pragma_c_gen.m"
                {
#line 998 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__IsDummy_29 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_28, ll_backend__pragma_c_gen__VarType_24);
                }
#line 999 "pragma_c_gen.m"
                {
#line 999 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__Input_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_30, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_44));
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_30, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_24));
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_30, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_29));
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_30, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_19));
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_30, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Rval_26));
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_30, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_27));
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_30, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_20));
#line 999 "pragma_c_gen.m"
                }
#line 1001 "pragma_c_gen.m"
                {
#line 1001 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_p_0(ll_backend__pragma_c_gen__Args_12, &ll_backend__pragma_c_gen__Inputs1_31, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__RestCode_32, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_36_36, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6);
                }
#line 1003 "pragma_c_gen.m"
                {
#line 1003 "pragma_c_gen.m"
                  MR_Word base;
#line 1003 "pragma_c_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 1003 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Input_30));
#line 1003 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Inputs1_31));
#line 1003 "pragma_c_gen.m"
                }
#line 1004 "pragma_c_gen.m"
                {
#line 1004 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__pragma_c_gen__FirstCode_25, ll_backend__pragma_c_gen__RestCode_32);
                }
#line 1930 "ll_backend.pragma_c_gen.c"
              }
#line 1932 "ll_backend.pragma_c_gen.c"
            else
#line 1934 "ll_backend.pragma_c_gen.c"
            if ((ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3 == (MR_Integer) 0))
#line 1936 "ll_backend.pragma_c_gen.c"
              {
#line 1938 "ll_backend.pragma_c_gen.c"
                MR_String ll_backend__pragma_c_gen__V_49_49;
#line 1940 "ll_backend.pragma_c_gen.c"
                MR_Integer ll_backend__pragma_c_gen__V_50_50;
#line 1942 "ll_backend.pragma_c_gen.c"
                MR_String ll_backend__pragma_c_gen__Name_124;
#line 1944 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__VarType_125;
#line 1946 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__FirstCode_126;
#line 1948 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Rval_127;
#line 1950 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__MaybeForeign_128;
#line 1952 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__ModuleInfo_129;
#line 1954 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__IsDummy_130;
#line 1956 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Input_131;
#line 1958 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Inputs1_132;
#line 1960 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__RestCode_133;
#line 1962 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_36_134;
#line 1964 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Module_136;
#line 1966 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__TypeTable_137;
#line 1035 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__MaybeC_110;
#line 1019 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeCtor_79;
#line 1019 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeDefn_80;
#line 1019 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeBody_81;
#line 1019 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_86_86;
#line 1023 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeIL_75;
#line 1023 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeJava_76;
#line 1023 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeCSharp_77;
#line 1023 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeErlang_78;

#line 924 "pragma_c_gen.m"
                {
#line 924 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__V_50_50 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_17);
                }
#line 924 "pragma_c_gen.m"
                {
#line 924 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__V_49_49 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_50_50);
                }
#line 924 "pragma_c_gen.m"
                {
#line 924 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__Name_124 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", ll_backend__pragma_c_gen__V_49_49);
                }
#line 994 "pragma_c_gen.m"
                {
#line 994 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__VarType_125 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_5, ll_backend__pragma_c_gen__Var_17);
                }
#line 995 "pragma_c_gen.m"
                {
#line 995 "pragma_c_gen.m"
                  ll_backend__code_info__produce_variable_5_p_0(ll_backend__pragma_c_gen__Var_17, &ll_backend__pragma_c_gen__FirstCode_126, &ll_backend__pragma_c_gen__Rval_127, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_5, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_36_134);
                }
#line 1016 "pragma_c_gen.m"
                {
#line 1016 "pragma_c_gen.m"
                  ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_36_134, &ll_backend__pragma_c_gen__Module_136);
                }
#line 1017 "pragma_c_gen.m"
                {
#line 1017 "pragma_c_gen.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__pragma_c_gen__Module_136, &ll_backend__pragma_c_gen__TypeTable_137);
                }
#line 1019 "pragma_c_gen.m"
                {
#line 1019 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__pragma_c_gen__OrigType_19, &ll_backend__pragma_c_gen__TypeCtor_79);
                }
#line 1019 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1019 "pragma_c_gen.m"
                  {
#line 1020 "pragma_c_gen.m"
                    {
#line 1020 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__pragma_c_gen__TypeTable_137, ll_backend__pragma_c_gen__TypeCtor_79, &ll_backend__pragma_c_gen__TypeDefn_80);
                    }
#line 1019 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1019 "pragma_c_gen.m"
                      {
#line 1021 "pragma_c_gen.m"
                        {
#line 1021 "pragma_c_gen.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__pragma_c_gen__TypeDefn_80, &ll_backend__pragma_c_gen__TypeBody_81);
                        }
#line 1022 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__TypeBody_81)) == (MR_mktag((MR_Integer) 0)));
#line 1022 "pragma_c_gen.m"
                        if (ll_backend__pragma_c_gen__succeeded)
#line 1022 "pragma_c_gen.m"
                          {
#line 1022 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__V_86_86 = (MR_Word) MR_body(((MR_Word) ll_backend__pragma_c_gen__TypeBody_81), (MR_Integer) 0);
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeIL_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_86_86, (MR_Integer) 0)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__MaybeC_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_86_86, (MR_Integer) 1)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeJava_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_86_86, (MR_Integer) 2)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeCSharp_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_86_86, (MR_Integer) 3)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeErlang_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_86_86, (MR_Integer) 4)));
#line 1023 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__succeeded = MR_TRUE;
#line 1022 "pragma_c_gen.m"
                          }
#line 1019 "pragma_c_gen.m"
                      }
#line 1019 "pragma_c_gen.m"
                  }
#line 1035 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1030 "pragma_c_gen.m"
                  if ((ll_backend__pragma_c_gen__MaybeC_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "pragma_c_gen.m"
                    {
#line 1033 "pragma_c_gen.m"
                      {
#line 1033 "pragma_c_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
#line 1033 "pragma_c_gen.m"
                        return;
                      }
#line 1031 "pragma_c_gen.m"
                    }
#line 1030 "pragma_c_gen.m"
                  else
#line 1027 "pragma_c_gen.m"
                    {
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Data_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeC_110, (MR_Integer) 0)));
#line 1027 "pragma_c_gen.m"
                      MR_String ll_backend__pragma_c_gen__Name_92;
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Assertions_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_91, (MR_Integer) 2)));
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_91, (MR_Integer) 0)));
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_96_96;
#line 1028 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_91, (MR_Integer) 1)));

#line 1028 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__Name_92 = (MR_String) ll_backend__pragma_c_gen__V_95_95;
#line 1029 "pragma_c_gen.m"
                      {
#line 1029 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_96_96, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_92));
#line 1029 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_96_96, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Assertions_94));
#line 1029 "pragma_c_gen.m"
                      }
#line 1029 "pragma_c_gen.m"
                      {
#line 1029 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__MaybeForeign_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeForeign_128, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_96_96));
#line 1029 "pragma_c_gen.m"
                      }
#line 1027 "pragma_c_gen.m"
                    }
#line 1035 "pragma_c_gen.m"
                else
#line 1036 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__MaybeForeign_128 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 997 "pragma_c_gen.m"
                {
#line 997 "pragma_c_gen.m"
                  ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_36_134, &ll_backend__pragma_c_gen__ModuleInfo_129);
                }
#line 998 "pragma_c_gen.m"
                {
#line 998 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__IsDummy_130 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_129, ll_backend__pragma_c_gen__VarType_125);
                }
#line 999 "pragma_c_gen.m"
                {
#line 999 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__Input_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_131, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_124));
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_131, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_125));
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_131, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_130));
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_131, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_19));
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_131, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Rval_127));
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_131, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_128));
#line 999 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_131, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_20));
#line 999 "pragma_c_gen.m"
                }
#line 1001 "pragma_c_gen.m"
                {
#line 1001 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_p_0(ll_backend__pragma_c_gen__Args_12, &ll_backend__pragma_c_gen__Inputs1_132, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__RestCode_133, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_36_134, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_6);
                }
#line 1003 "pragma_c_gen.m"
                {
#line 1003 "pragma_c_gen.m"
                  MR_Word base;
#line 1003 "pragma_c_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 1003 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Input_131));
#line 1003 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Inputs1_132));
#line 1003 "pragma_c_gen.m"
                }
#line 1004 "pragma_c_gen.m"
                {
#line 1004 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__pragma_c_gen__FirstCode_126, ll_backend__pragma_c_gen__RestCode_133);
                }
#line 2183 "ll_backend.pragma_c_gen.c"
              }
#line 2185 "ll_backend.pragma_c_gen.c"
            else
#line 1008 "pragma_c_gen.m"
              {
#line 1008 "pragma_c_gen.m"
                /* direct tailcall eliminated */
#line 1008 "pragma_c_gen.m"
                {
#line 1008 "pragma_c_gen.m"
                  MR_Word ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1 = ll_backend__pragma_c_gen__Args_12;

#line 1008 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1;
#line 1008 "pragma_c_gen.m"
                }
#line 1008 "pragma_c_gen.m"
                continue;
#line 1008 "pragma_c_gen.m"
              }
#line 989 "pragma_c_gen.m"
          }
#line 987 "pragma_c_gen.m"
      }
#line 987 "pragma_c_gen.m"
      break;
#line 987 "pragma_c_gen.m"
    }
#line 983 "pragma_c_gen.m"
}

#line 963 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(
#line 963 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 963 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PostDeaths_2,
#line 963 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3,
#line 963 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_4)
#line 963 "pragma_c_gen.m"
{
#line 966 "pragma_c_gen.m"
  while (MR_TRUE)
#line 966 "pragma_c_gen.m"
    {
#line 966 "pragma_c_gen.m"
      /* tailcall optimized into a loop */
#line 966 "pragma_c_gen.m"
      {
#line 966 "pragma_c_gen.m"
        MR_bool ll_backend__pragma_c_gen__succeeded;

#line 966 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 966 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_4 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3;
#line 966 "pragma_c_gen.m"
        else
#line 967 "pragma_c_gen.m"
          {
#line 967 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 967 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 967 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 0)));
#line 967 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20;
#line 968 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___MaybeName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 1)));
#line 968 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 2)));
#line 968 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 3)));
#line 968 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___ArgInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 4)));

#line 969 "pragma_c_gen.m"
            {
#line 969 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__PostDeaths_2, ll_backend__pragma_c_gen__Var_13);
            }
#line 971 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 970 "pragma_c_gen.m"
              {
#line 970 "pragma_c_gen.m"
                {
#line 970 "pragma_c_gen.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_13, ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3, &ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20);
                }
#line 970 "pragma_c_gen.m"
              }
#line 971 "pragma_c_gen.m"
            else
#line 971 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3;
#line 974 "pragma_c_gen.m"
            /* direct tailcall eliminated */
#line 974 "pragma_c_gen.m"
            {
#line 974 "pragma_c_gen.m"
              MR_Word ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1 = ll_backend__pragma_c_gen__Args_10;
#line 974 "pragma_c_gen.m"
              MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0__tmp_copy_3 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20;

#line 974 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0__tmp_copy_3;
#line 974 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1;
#line 974 "pragma_c_gen.m"
            }
#line 974 "pragma_c_gen.m"
            continue;
#line 967 "pragma_c_gen.m"
          }
#line 966 "pragma_c_gen.m"
      }
#line 966 "pragma_c_gen.m"
      break;
#line 966 "pragma_c_gen.m"
    }
#line 963 "pragma_c_gen.m"
}

#line 936 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(
#line 936 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 936 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Module_2,
#line 936 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 936 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4)
#line 936 "pragma_c_gen.m"
{
#line 939 "pragma_c_gen.m"
  {
#line 939 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 939 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 939 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 939 "pragma_c_gen.m"
    else
#line 940 "pragma_c_gen.m"
      {
#line 940 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 940 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 940 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__DeclsTail_12;
#line 940 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Var_13;
#line 940 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__MaybeArgName_14;
#line 940 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__OrigType_15;
#line 940 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BoxPolicy_16;
#line 942 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen___ArgInfo_17;
#line 2354 "ll_backend.pragma_c_gen.c"
        MR_String ll_backend__pragma_c_gen__Name_27;
#line 915 "pragma_c_gen.m"
        MR_Char ll_backend__pragma_c_gen__V_30_30;
#line 915 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_28_28;

#line 941 "pragma_c_gen.m"
        {
#line 941 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(ll_backend__pragma_c_gen__Args_8, ll_backend__pragma_c_gen__Module_2, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__DeclsTail_12);
        }
#line 942 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 0)));
#line 942 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__MaybeArgName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 1)));
#line 942 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 2)));
#line 942 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 3)));
#line 942 "pragma_c_gen.m"
        ll_backend__pragma_c_gen___ArgInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 4)));
#line 914 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__MaybeArgName_14)) == (MR_mktag((MR_Integer) 1)));
#line 914 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 914 "pragma_c_gen.m"
          {
#line 914 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeArgName_14, (MR_Integer) 0)));
#line 915 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_30_30 = (MR_Char) 95;
#line 915 "pragma_c_gen.m"
            {
#line 915 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__succeeded = mercury__string__first_char_3_p_2(ll_backend__pragma_c_gen__Name_27, ll_backend__pragma_c_gen__V_30_30, &ll_backend__pragma_c_gen__V_28_28);
            }
#line 915 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 914 "pragma_c_gen.m"
          }
#line 2395 "ll_backend.pragma_c_gen.c"
        if (ll_backend__pragma_c_gen__succeeded)
#line 2397 "ll_backend.pragma_c_gen.c"
          {
#line 2399 "ll_backend.pragma_c_gen.c"
            MR_String ll_backend__pragma_c_gen__OrigTypeString_20;
#line 2401 "ll_backend.pragma_c_gen.c"
            MR_Word ll_backend__pragma_c_gen__Decl_21;

#line 950 "pragma_c_gen.m"
            if ((ll_backend__pragma_c_gen__BoxPolicy_16 == (MR_Integer) 1))
#line 952 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__OrigTypeString_20 = (MR_String) "MR_Word";
#line 950 "pragma_c_gen.m"
            else
#line 947 "pragma_c_gen.m"
              {
#line 948 "pragma_c_gen.m"
                {
#line 948 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__OrigTypeString_20 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ll_backend__pragma_c_gen__Module_2, (MR_Integer) 0, ll_backend__pragma_c_gen__OrigType_15);
                }
#line 947 "pragma_c_gen.m"
              }
#line 954 "pragma_c_gen.m"
            {
#line 954 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__Decl_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 954 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_21, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_15));
#line 954 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_21, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OrigTypeString_20));
#line 954 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_21, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Name_27));
#line 954 "pragma_c_gen.m"
            }
#line 955 "pragma_c_gen.m"
            {
#line 955 "pragma_c_gen.m"
              MR_Word base;
#line 955 "pragma_c_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 955 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Decl_21));
#line 955 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__DeclsTail_12));
#line 955 "pragma_c_gen.m"
            }
#line 2445 "ll_backend.pragma_c_gen.c"
          }
#line 2447 "ll_backend.pragma_c_gen.c"
        else
#line 2449 "ll_backend.pragma_c_gen.c"
        if ((ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3 == (MR_Integer) 0))
#line 2451 "ll_backend.pragma_c_gen.c"
          {
#line 2453 "ll_backend.pragma_c_gen.c"
            MR_String ll_backend__pragma_c_gen__V_32_32;
#line 2455 "ll_backend.pragma_c_gen.c"
            MR_Integer ll_backend__pragma_c_gen__V_33_33;
#line 2457 "ll_backend.pragma_c_gen.c"
            MR_String ll_backend__pragma_c_gen__Name_37;
#line 2459 "ll_backend.pragma_c_gen.c"
            MR_String ll_backend__pragma_c_gen__OrigTypeString_38;
#line 2461 "ll_backend.pragma_c_gen.c"
            MR_Word ll_backend__pragma_c_gen__Decl_39;

#line 924 "pragma_c_gen.m"
            {
#line 924 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__V_33_33 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_13);
            }
#line 924 "pragma_c_gen.m"
            {
#line 924 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_33_33);
            }
#line 924 "pragma_c_gen.m"
            {
#line 924 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__Name_37 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", ll_backend__pragma_c_gen__V_32_32);
            }
#line 950 "pragma_c_gen.m"
            if ((ll_backend__pragma_c_gen__BoxPolicy_16 == (MR_Integer) 1))
#line 952 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__OrigTypeString_38 = (MR_String) "MR_Word";
#line 950 "pragma_c_gen.m"
            else
#line 947 "pragma_c_gen.m"
              {
#line 948 "pragma_c_gen.m"
                {
#line 948 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__OrigTypeString_38 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ll_backend__pragma_c_gen__Module_2, (MR_Integer) 0, ll_backend__pragma_c_gen__OrigType_15);
                }
#line 947 "pragma_c_gen.m"
              }
#line 954 "pragma_c_gen.m"
            {
#line 954 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__Decl_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 954 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_39, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_15));
#line 954 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_39, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OrigTypeString_38));
#line 954 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_39, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Name_37));
#line 954 "pragma_c_gen.m"
            }
#line 955 "pragma_c_gen.m"
            {
#line 955 "pragma_c_gen.m"
              MR_Word base;
#line 955 "pragma_c_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 955 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Decl_39));
#line 955 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__DeclsTail_12));
#line 955 "pragma_c_gen.m"
            }
#line 2520 "ll_backend.pragma_c_gen.c"
          }
#line 2522 "ll_backend.pragma_c_gen.c"
        else
#line 958 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__4_4 = ll_backend__pragma_c_gen__DeclsTail_12;
#line 940 "pragma_c_gen.m"
      }
#line 939 "pragma_c_gen.m"
  }
#line 936 "pragma_c_gen.m"
}

#line 877 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(
#line 877 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 877 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2)
#line 877 "pragma_c_gen.m"
{
#line 879 "pragma_c_gen.m"
  {
#line 879 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 879 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 879 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "pragma_c_gen.m"
    else
#line 880 "pragma_c_gen.m"
      {
#line 880 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 880 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 880 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__InTail_6;
#line 880 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ArgInfo_11;
#line 880 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Mode_13;
#line 882 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7;
#line 882 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8;
#line 882 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9;
#line 882 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10;
#line 883 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen___Loc_12;

#line 881 "pragma_c_gen.m"
        {
#line 881 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(ll_backend__pragma_c_gen__Rest_4, &ll_backend__pragma_c_gen__InTail_6);
        }
#line 882 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 0)));
#line 882 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 1)));
#line 882 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 2)));
#line 882 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 3)));
#line 882 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__ArgInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 4)));
#line 883 "pragma_c_gen.m"
        ll_backend__pragma_c_gen___Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 0)));
#line 883 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 1)));
#line 887 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__Mode_13 == (MR_Integer) 0))
#line 886 "pragma_c_gen.m"
          {
#line 886 "pragma_c_gen.m"
            MR_Word base;
#line 886 "pragma_c_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 886 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 886 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Arg_3));
#line 886 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__InTail_6));
#line 886 "pragma_c_gen.m"
          }
#line 887 "pragma_c_gen.m"
        else
#line 891 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__2_2 = ll_backend__pragma_c_gen__InTail_6;
#line 880 "pragma_c_gen.m"
      }
#line 879 "pragma_c_gen.m"
  }
#line 877 "pragma_c_gen.m"
}

#line 857 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(
#line 857 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 857 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2)
#line 857 "pragma_c_gen.m"
{
#line 859 "pragma_c_gen.m"
  {
#line 859 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 859 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 859 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 859 "pragma_c_gen.m"
    else
#line 860 "pragma_c_gen.m"
      {
#line 860 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 860 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 860 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__OutTail_6;
#line 860 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ArgInfo_11;
#line 860 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Mode_13;
#line 862 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7;
#line 862 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8;
#line 862 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9;
#line 862 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10;
#line 863 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen___Loc_12;

#line 861 "pragma_c_gen.m"
        {
#line 861 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(ll_backend__pragma_c_gen__Rest_4, &ll_backend__pragma_c_gen__OutTail_6);
        }
#line 862 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 0)));
#line 862 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 1)));
#line 862 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 2)));
#line 862 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 3)));
#line 862 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__ArgInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 4)));
#line 863 "pragma_c_gen.m"
        ll_backend__pragma_c_gen___Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 0)));
#line 863 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 1)));
#line 867 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__Mode_13 == (MR_Integer) 1))
#line 866 "pragma_c_gen.m"
          {
#line 866 "pragma_c_gen.m"
            MR_Word base;
#line 866 "pragma_c_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 866 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Arg_3));
#line 866 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OutTail_6));
#line 866 "pragma_c_gen.m"
          }
#line 867 "pragma_c_gen.m"
        else
#line 871 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__2_2 = ll_backend__pragma_c_gen__OutTail_6;
#line 860 "pragma_c_gen.m"
      }
#line 859 "pragma_c_gen.m"
  }
#line 857 "pragma_c_gen.m"
}

#line 845 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(
#line 845 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 845 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2)
#line 845 "pragma_c_gen.m"
{
#line 847 "pragma_c_gen.m"
  {
#line 847 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 847 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 847 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 847 "pragma_c_gen.m"
    else
#line 848 "pragma_c_gen.m"
      {
#line 848 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 848 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 848 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 0)));
#line 848 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Vars_6;
#line 849 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 1)));
#line 849 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 2)));
#line 849 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 3)));
#line 849 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 4)));

#line 850 "pragma_c_gen.m"
        {
#line 850 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(ll_backend__pragma_c_gen__Args_4, &ll_backend__pragma_c_gen__Vars_6);
        }
#line 848 "pragma_c_gen.m"
        {
#line 848 "pragma_c_gen.m"
          MR_Word base;
#line 848 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 848 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Var_5));
#line 848 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Vars_6));
#line 848 "pragma_c_gen.m"
        }
#line 848 "pragma_c_gen.m"
      }
#line 847 "pragma_c_gen.m"
  }
#line 845 "pragma_c_gen.m"
}

#line 822 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(
#line 822 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 822 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_2,
#line 822 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__LastReg_3,
#line 822 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4)
#line 822 "pragma_c_gen.m"
{
#line 825 "pragma_c_gen.m"
  {
#line 825 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 825 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 825 "pragma_c_gen.m"
    else
#line 827 "pragma_c_gen.m"
      {
#line 827 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ExtraArg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 827 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ExtraArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 827 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__CArg_11;
#line 827 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__CArgs_12;
#line 827 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 0)));
#line 827 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__MaybeNameMode_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 1)));
#line 827 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 2)));
#line 827 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 3)));
#line 827 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__Name_17;
#line 827 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ArgMode_19;
#line 827 "pragma_c_gen.m"
        MR_Integer ll_backend__pragma_c_gen__NextReg_21;
#line 827 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ArgInfo_22;
#line 827 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_28_28;
#line 827 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_29_29;

#line 832 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__MaybeNameMode_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "pragma_c_gen.m"
          {
#line 834 "pragma_c_gen.m"
            {
#line 834 "pragma_c_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_extra_c_arg_list_seq\'/4", (MR_String) "no name");
#line 834 "pragma_c_gen.m"
              return;
            }
#line 833 "pragma_c_gen.m"
          }
#line 832 "pragma_c_gen.m"
        else
#line 830 "pragma_c_gen.m"
          {
#line 830 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Mode_18;
#line 830 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeNameMode_14, (MR_Integer) 0)));

#line 830 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_26_26, (MR_Integer) 0)));
#line 830 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_26_26, (MR_Integer) 1)));
#line 831 "pragma_c_gen.m"
            {
#line 831 "pragma_c_gen.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__pragma_c_gen__ModuleInfo_2, ll_backend__pragma_c_gen__Mode_18, ll_backend__pragma_c_gen__OrigType_15, &ll_backend__pragma_c_gen__ArgMode_19);
            }
#line 830 "pragma_c_gen.m"
          }
#line 838 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__NextReg_21 = (ll_backend__pragma_c_gen__LastReg_3 + (MR_Integer) 1);
#line 839 "pragma_c_gen.m"
        {
#line 839 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 839 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_28_28, 0) = ((MR_Box) ((MR_Integer) 0));
#line 839 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_28_28, 1) = ((MR_Box) (ll_backend__pragma_c_gen__NextReg_21));
#line 839 "pragma_c_gen.m"
        }
#line 839 "pragma_c_gen.m"
        {
#line 839 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__ArgInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 839 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_22, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_28_28));
#line 839 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_22, 1) = ((MR_Box) (ll_backend__pragma_c_gen__ArgMode_19));
#line 839 "pragma_c_gen.m"
        }
#line 840 "pragma_c_gen.m"
        {
#line 840 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 840 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_29_29, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_17));
#line 840 "pragma_c_gen.m"
        }
#line 840 "pragma_c_gen.m"
        {
#line 840 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__CArg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 840 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Var_13));
#line 840 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_29_29));
#line 840 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 2) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_15));
#line 840 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 3) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_16));
#line 840 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ArgInfo_22));
#line 840 "pragma_c_gen.m"
        }
#line 841 "pragma_c_gen.m"
        {
#line 841 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(ll_backend__pragma_c_gen__ExtraArgs_8, ll_backend__pragma_c_gen__ModuleInfo_2, ll_backend__pragma_c_gen__NextReg_21, &ll_backend__pragma_c_gen__CArgs_12);
        }
#line 827 "pragma_c_gen.m"
        {
#line 827 "pragma_c_gen.m"
          MR_Word base;
#line 827 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 827 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__CArg_11));
#line 827 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__CArgs_12));
#line 827 "pragma_c_gen.m"
        }
#line 827 "pragma_c_gen.m"
      }
#line 825 "pragma_c_gen.m"
  }
#line 822 "pragma_c_gen.m"
}

#line 808 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(
#line 808 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 808 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2,
#line 808 "pragma_c_gen.m"
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_3,
#line 808 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4,
#line 808 "pragma_c_gen.m"
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_5)
#line 808 "pragma_c_gen.m"
{
#line 811 "pragma_c_gen.m"
  while (MR_TRUE)
#line 811 "pragma_c_gen.m"
    {
#line 811 "pragma_c_gen.m"
      /* tailcall optimized into a loop */
#line 811 "pragma_c_gen.m"
      {
#line 811 "pragma_c_gen.m"
        MR_bool ll_backend__pragma_c_gen__succeeded;

#line 811 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "pragma_c_gen.m"
          {
#line 811 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_5 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4;
#line 811 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_3 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2;
#line 811 "pragma_c_gen.m"
          }
#line 811 "pragma_c_gen.m"
        else
#line 812 "pragma_c_gen.m"
          {
#line 812 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Loc_12;
#line 812 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__ArgInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 812 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 812 "pragma_c_gen.m"
            MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24;
#line 812 "pragma_c_gen.m"
            MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26;
#line 812 "pragma_c_gen.m"
            MR_Integer ll_backend__pragma_c_gen__V_30_30;
#line 812 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_31_31;
#line 812 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_13_13;

#line 812 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_22_22, (MR_Integer) 0)));
#line 812 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_22_22, (MR_Integer) 1)));
#line 814 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Loc_12, (MR_Integer) 0)));
#line 814 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Loc_12, (MR_Integer) 1)));
#line 816 "pragma_c_gen.m"
            if ((ll_backend__pragma_c_gen__V_31_31 == (MR_Integer) 1))
#line 817 "pragma_c_gen.m"
              {
#line 818 "pragma_c_gen.m"
                {
#line 818 "pragma_c_gen.m"
                  mercury__int__max_3_p_0(ll_backend__pragma_c_gen__V_30_30, ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4, &ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24);
                }
#line 817 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2;
#line 817 "pragma_c_gen.m"
              }
#line 816 "pragma_c_gen.m"
            else
#line 814 "pragma_c_gen.m"
              {
#line 815 "pragma_c_gen.m"
                {
#line 815 "pragma_c_gen.m"
                  mercury__int__max_3_p_0(ll_backend__pragma_c_gen__V_30_30, ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2, &ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26);
                }
#line 814 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4;
#line 814 "pragma_c_gen.m"
              }
#line 820 "pragma_c_gen.m"
            /* direct tailcall eliminated */
#line 820 "pragma_c_gen.m"
            {
#line 820 "pragma_c_gen.m"
              MR_Word ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1 = ll_backend__pragma_c_gen__ArgInfos_14;
#line 820 "pragma_c_gen.m"
              MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0__tmp_copy_2 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26;
#line 820 "pragma_c_gen.m"
              MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0__tmp_copy_4 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24;

#line 820 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0__tmp_copy_4;
#line 820 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0__tmp_copy_2;
#line 820 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1;
#line 820 "pragma_c_gen.m"
            }
#line 820 "pragma_c_gen.m"
            continue;
#line 812 "pragma_c_gen.m"
          }
#line 811 "pragma_c_gen.m"
      }
#line 811 "pragma_c_gen.m"
      break;
#line 811 "pragma_c_gen.m"
    }
#line 808 "pragma_c_gen.m"
}

#line 801 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(
#line 801 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_5,
#line 801 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
#line 801 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ArgInfos_7,
#line 801 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ExtraCArgs_8)
#line 801 "pragma_c_gen.m"
{
#line 804 "pragma_c_gen.m"
  {
#line 804 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 804 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__MaxR_9;
#line 805 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen___MaxF_10;

#line 805 "pragma_c_gen.m"
    {
#line 805 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(ll_backend__pragma_c_gen__ArgInfos_7, (MR_Integer) 0, &ll_backend__pragma_c_gen__MaxR_9, (MR_Integer) 0, &ll_backend__pragma_c_gen___MaxF_10);
    }
#line 806 "pragma_c_gen.m"
    {
#line 806 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(ll_backend__pragma_c_gen__ExtraArgs_5, ll_backend__pragma_c_gen__ModuleInfo_6, ll_backend__pragma_c_gen__MaxR_9, ll_backend__pragma_c_gen__ExtraCArgs_8);
#line 806 "pragma_c_gen.m"
      return;
    }
#line 804 "pragma_c_gen.m"
  }
#line 801 "pragma_c_gen.m"
}

#line 779 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(
#line 779 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 779 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 779 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3)
#line 779 "pragma_c_gen.m"
{
#line 782 "pragma_c_gen.m"
  {
#line 782 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 782 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "pragma_c_gen.m"
      if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 782 "pragma_c_gen.m"
      else
#line 794 "pragma_c_gen.m"
        {
#line 795 "pragma_c_gen.m"
          {
#line 795 "pragma_c_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", (MR_String) "length mismatch");
#line 795 "pragma_c_gen.m"
            return;
          }
#line 794 "pragma_c_gen.m"
        }
#line 782 "pragma_c_gen.m"
    else
#line 782 "pragma_c_gen.m"
      {
#line 782 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 782 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 782 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 796 "pragma_c_gen.m"
          {
#line 797 "pragma_c_gen.m"
            {
#line 797 "pragma_c_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", (MR_String) "length mismatch");
#line 797 "pragma_c_gen.m"
              return;
            }
#line 796 "pragma_c_gen.m"
          }
#line 782 "pragma_c_gen.m"
        else
#line 783 "pragma_c_gen.m"
          {
#line 783 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__ArgInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 783 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__ArgInfoTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 783 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__CArg_8;
#line 783 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__CArgTail_9;
#line 783 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 0)));
#line 783 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__MaybeNameMode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 1)));
#line 783 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 2)));
#line 783 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__BoxPolicy_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 3)));
#line 783 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__MaybeName_16;

#line 788 "pragma_c_gen.m"
            if ((ll_backend__pragma_c_gen__MaybeNameMode_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__MaybeName_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 788 "pragma_c_gen.m"
            else
#line 786 "pragma_c_gen.m"
              {
#line 786 "pragma_c_gen.m"
                MR_String ll_backend__pragma_c_gen__Name_14;
#line 786 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeNameMode_11, (MR_Integer) 0)));
#line 786 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_15_15;

#line 786 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_17_17, (MR_Integer) 0)));
#line 786 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_17_17, (MR_Integer) 1)));
#line 787 "pragma_c_gen.m"
                {
#line 787 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__MaybeName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 787 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeName_16, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_14));
#line 787 "pragma_c_gen.m"
                }
#line 786 "pragma_c_gen.m"
              }
#line 792 "pragma_c_gen.m"
            {
#line 792 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__CArg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 792 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Var_10));
#line 792 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 1) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeName_16));
#line 792 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Type_12));
#line 792 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 3) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_13));
#line 792 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ArgInfo_6));
#line 792 "pragma_c_gen.m"
            }
#line 793 "pragma_c_gen.m"
            {
#line 793 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(ll_backend__pragma_c_gen__V_30_30, ll_backend__pragma_c_gen__ArgInfoTail_7, &ll_backend__pragma_c_gen__CArgTail_9);
            }
#line 783 "pragma_c_gen.m"
            {
#line 783 "pragma_c_gen.m"
              MR_Word base;
#line 783 "pragma_c_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__3_3 = base;
#line 783 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__CArg_8));
#line 783 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__CArgTail_9));
#line 783 "pragma_c_gen.m"
            }
#line 783 "pragma_c_gen.m"
          }
#line 782 "pragma_c_gen.m"
      }
#line 782 "pragma_c_gen.m"
  }
#line 779 "pragma_c_gen.m"
}

#line 727 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(
#line 727 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__C_Code_7,
#line 727 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__MaybeContext_8,
#line 727 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashDefine_9,
#line 727 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashUndef_10,
#line 727 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17,
#line 727 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18)
#line 727 "pragma_c_gen.m"
{
#line 732 "pragma_c_gen.m"
  {
#line 732 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 732 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Globals_12;
#line 732 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ProfileMemory_13;
#line 736 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_20_20;
#line 737 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__V_14_14;

#line 733 "pragma_c_gen.m"
    {
#line 733 "pragma_c_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17, &ll_backend__pragma_c_gen__Globals_12);
    }
#line 734 "pragma_c_gen.m"
    {
#line 734 "pragma_c_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__pragma_c_gen__Globals_12, (MR_Integer) 194, &ll_backend__pragma_c_gen__ProfileMemory_13);
    }
#line 736 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__ProfileMemory_13 == (MR_Integer) 1);
#line 736 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 736 "pragma_c_gen.m"
      {
#line 737 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_20_20 = (MR_String) "MR_ALLOC_ID";
#line 737 "pragma_c_gen.m"
        {
#line 737 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__succeeded = mercury__string__sub_string_search_3_p_0(ll_backend__pragma_c_gen__C_Code_7, ll_backend__pragma_c_gen__V_20_20, &ll_backend__pragma_c_gen__V_14_14);
        }
#line 736 "pragma_c_gen.m"
      }
#line 754 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 744 "pragma_c_gen.m"
      {
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Context_15;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__AllocId_16;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_24_24;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_26_26;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_27_27;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_28_28;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_29_29;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_32_32;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_38_38;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_39_39;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_44_44;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_45_45;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_50_50;
#line 744 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_51_51;

#line 741 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__MaybeContext_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 743 "pragma_c_gen.m"
          {
#line 743 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Context_15 = mercury__term__context_init_0_f_0();
          }
#line 741 "pragma_c_gen.m"
        else
#line 740 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeContext_8, (MR_Integer) 0)));
#line 745 "pragma_c_gen.m"
        {
#line 745 "pragma_c_gen.m"
          ll_backend__code_info__add_alloc_site_info_6_p_0(ll_backend__pragma_c_gen__Context_15, (MR_String) "unknown", (MR_Integer) 0, &ll_backend__pragma_c_gen__AllocId_16, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18);
        }
#line 763 "pragma_c_gen.m"
        {
#line 763 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_39_39 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 763 "pragma_c_gen.m"
        {
#line 763 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_38_38, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_39_39));
#line 763 "pragma_c_gen.m"
        }
#line 762 "pragma_c_gen.m"
        {
#line 762 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 1) = ((MR_Box) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 2) = ((MR_Box) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_38_38));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 4) = ((MR_Box) ((MR_String) "#define\tMR_ALLOC_ID\t"));
#line 762 "pragma_c_gen.m"
        }
#line 748 "pragma_c_gen.m"
        {
#line 748 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 748 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 1) = ((MR_Box) (ll_backend__pragma_c_gen__AllocId_16));
#line 748 "pragma_c_gen.m"
        }
#line 763 "pragma_c_gen.m"
        {
#line 763 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_45_45 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 763 "pragma_c_gen.m"
        {
#line 763 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_44_44, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_45_45));
#line 763 "pragma_c_gen.m"
        }
#line 762 "pragma_c_gen.m"
        {
#line 762 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 2) = ((MR_Box) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_44_44));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 4) = ((MR_Box) ((MR_String) "\n"));
#line 762 "pragma_c_gen.m"
        }
#line 750 "pragma_c_gen.m"
        {
#line 750 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_28_28, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_29_29));
#line 750 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 750 "pragma_c_gen.m"
        }
#line 748 "pragma_c_gen.m"
        {
#line 748 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_26_26, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_27_27));
#line 748 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_26_26, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_28_28));
#line 748 "pragma_c_gen.m"
        }
#line 747 "pragma_c_gen.m"
        {
#line 747 "pragma_c_gen.m"
          MR_Word base;
#line 747 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__AllocIdHashDefine_9 = base;
#line 747 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_24_24));
#line 747 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_26_26));
#line 747 "pragma_c_gen.m"
        }
#line 763 "pragma_c_gen.m"
        {
#line 763 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_51_51 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 763 "pragma_c_gen.m"
        {
#line 763 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_50_50, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_51_51));
#line 763 "pragma_c_gen.m"
        }
#line 762 "pragma_c_gen.m"
        {
#line 762 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 1) = ((MR_Box) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 2) = ((MR_Box) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_50_50));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 4) = ((MR_Box) ((MR_String) "#undef\tMR_ALLOC_ID\n"));
#line 762 "pragma_c_gen.m"
        }
#line 753 "pragma_c_gen.m"
        {
#line 753 "pragma_c_gen.m"
          MR_Word base;
#line 753 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__AllocIdHashUndef_10 = base;
#line 753 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_32_32));
#line 753 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "pragma_c_gen.m"
        }
#line 744 "pragma_c_gen.m"
      }
#line 754 "pragma_c_gen.m"
    else
#line 755 "pragma_c_gen.m"
      {
#line 755 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__AllocIdHashDefine_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 756 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__AllocIdHashUndef_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17;
#line 755 "pragma_c_gen.m"
      }
#line 732 "pragma_c_gen.m"
  }
#line 727 "pragma_c_gen.m"
}

#line 704 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(
#line 704 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
#line 704 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_7,
#line 704 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_8,
#line 704 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashDef_9,
#line 704 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashUndef_10)
#line 704 "pragma_c_gen.m"
{
#line 708 "pragma_c_gen.m"
  {
#line 708 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 708 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__ProcLabelStr_11;
#line 708 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_12_12;
#line 708 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_14_14;
#line 708 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__CodeAddr_21;
#line 708 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_33_33;
#line 708 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_34_34;
#line 708 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_39_39;
#line 708 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_40_40;
#line 721 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ProcLabel_22;

#line 718 "pragma_c_gen.m"
    {
#line 718 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__CodeAddr_21 = ll_backend__code_util__make_entry_label_4_f_0(ll_backend__pragma_c_gen__ModuleInfo_6, ll_backend__pragma_c_gen__PredId_7, ll_backend__pragma_c_gen__ProcId_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 719 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__CodeAddr_21)) == (MR_mktag((MR_Integer) 2)));
#line 719 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 719 "pragma_c_gen.m"
      {
#line 719 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__ProcLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__CodeAddr_21, (MR_Integer) 0)));
#line 720 "pragma_c_gen.m"
        {
#line 720 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__ProcLabelStr_11 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__pragma_c_gen__ProcLabel_22, (MR_Integer) 1);
        }
#line 719 "pragma_c_gen.m"
      }
#line 719 "pragma_c_gen.m"
    else
#line 723 "pragma_c_gen.m"
      {
#line 723 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Label_23;

#line 721 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__CodeAddr_21)) == (MR_mktag((MR_Integer) 1)));
#line 721 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 721 "pragma_c_gen.m"
          {
#line 721 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Label_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__CodeAddr_21, (MR_Integer) 0)));
#line 722 "pragma_c_gen.m"
            {
#line 722 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__ProcLabelStr_11 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__pragma_c_gen__Label_23, (MR_Integer) 1);
            }
#line 721 "pragma_c_gen.m"
          }
#line 721 "pragma_c_gen.m"
        else
#line 724 "pragma_c_gen.m"
          {
#line 724 "pragma_c_gen.m"
            {
#line 724 "pragma_c_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.make_proc_label_string\'/3", (MR_String) "code_addr");
#line 724 "pragma_c_gen.m"
              return;
            }
#line 724 "pragma_c_gen.m"
          }
#line 723 "pragma_c_gen.m"
      }
#line 711 "pragma_c_gen.m"
    {
#line 711 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__ProcLabelStr_11, (MR_String) "\n");
    }
#line 711 "pragma_c_gen.m"
    {
#line 711 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "#define\tMR_PROC_LABEL\t", ll_backend__pragma_c_gen__V_14_14);
    }
#line 763 "pragma_c_gen.m"
    {
#line 763 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_34_34 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
#line 763 "pragma_c_gen.m"
    {
#line 763 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_33_33, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_34_34));
#line 763 "pragma_c_gen.m"
    }
#line 762 "pragma_c_gen.m"
    {
#line 762 "pragma_c_gen.m"
      MR_Word base;
#line 762 "pragma_c_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 762 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__ProcLabelHashDef_9 = base;
#line 762 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_33_33));
#line 762 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__pragma_c_gen__V_12_12));
#line 762 "pragma_c_gen.m"
    }
#line 763 "pragma_c_gen.m"
    {
#line 763 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_40_40 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
#line 763 "pragma_c_gen.m"
    {
#line 763 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_39_39, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_40_40));
#line 763 "pragma_c_gen.m"
    }
#line 762 "pragma_c_gen.m"
    {
#line 762 "pragma_c_gen.m"
      MR_Word base;
#line 762 "pragma_c_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 762 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__ProcLabelHashUndef_10 = base;
#line 762 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 762 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_39_39));
#line 762 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_String) "#undef\tMR_PROC_LABEL\n"));
#line 762 "pragma_c_gen.m"
    }
#line 708 "pragma_c_gen.m"
  }
#line 704 "pragma_c_gen.m"
}

#line 436 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_p_0(
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_14,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Attributes_15,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_16,
#line 436 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_17,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_18,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_19,
#line 436 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__C_Code_20,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Context_21,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__GoalInfo_22,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_23,
#line 436 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__Code_24,
#line 436 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_92,
#line 436 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_93)
#line 436 "pragma_c_gen.m"
{
#line 444 "pragma_c_gen.m"
  {
#line 444 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_219_219;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_230_230;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__MayCallMercury_26;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ThreadSafe_27;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ArgInfos_28;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__OrigCArgs_29;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ModuleInfo_30;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ExtraCArgs_31;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__CArgs_32;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__InCArgs_33;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__OutCArgs_34;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__PostDeaths_35;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__DeadVars0_36;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__DeadVars_37;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__SaveVarsCode_38;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__InputDescs_42;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__InputVarsCode_43;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Decls_44;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__AllocIdHashDefine_45;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__AllocIdHashUndef_46;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__CallerPredId_47;
#line 444 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CallerProcId_48;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ProcLabelHashDefine_49;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ProcLabelHashUndef_50;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__InputComp_51;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__SaveRegsComp_52;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ObtainLock_53;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ReleaseLock_54;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__AffectsLiveness_60;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__C_Code_Comp_61;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Detism_62;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__CheckSuccess_Comp_63;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__MaybeFailLabel_64;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__DefSuccessComp_66;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__UndefSuccessComp_67;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__RestoreRegsComp_68;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ExprnOpts_71;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__UseFloatRegs_72;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__FloatRegType_73;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Regs_74;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__OutputDescs_75;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__OutputComp_76;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Components_77;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__MaybeMayDupl_78;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__MayDupl_79;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ExtraAttributes_82;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__RefersToLLDSSTack_83;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__PragmaCCode_84;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__FailureCode_91;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_98_98;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_99_99;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_100_100;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_101_101;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_136_136;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_178_178;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_179_179;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_180_180;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_181_181;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_182_182;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_183_183;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_184_184;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_185_185;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_186_186;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_187_187;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_188_188;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_189_189;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_190_190;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_191_191;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_192_192;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_194_194;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_195_195;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_216_216;
#line 444 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_217_217;

#line 446 "pragma_c_gen.m"
    {
#line 446 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__MayCallMercury_26 = parse_tree__prog_data__get_may_call_mercury_1_f_0(ll_backend__pragma_c_gen__Attributes_15);
    }
#line 447 "pragma_c_gen.m"
    {
#line 447 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__ThreadSafe_27 = parse_tree__prog_data__get_thread_safe_1_f_0(ll_backend__pragma_c_gen__Attributes_15);
    }
#line 460 "pragma_c_gen.m"
    {
#line 460 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__ArgInfos_28 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_92, ll_backend__pragma_c_gen__PredId_16, ll_backend__pragma_c_gen__ProcId_17);
    }
#line 461 "pragma_c_gen.m"
    {
#line 461 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(ll_backend__pragma_c_gen__Args_18, ll_backend__pragma_c_gen__ArgInfos_28, &ll_backend__pragma_c_gen__OrigCArgs_29);
    }
#line 462 "pragma_c_gen.m"
    {
#line 462 "pragma_c_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_92, &ll_backend__pragma_c_gen__ModuleInfo_30);
    }
#line 463 "pragma_c_gen.m"
    {
#line 463 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(ll_backend__pragma_c_gen__ExtraArgs_19, ll_backend__pragma_c_gen__ModuleInfo_30, ll_backend__pragma_c_gen__ArgInfos_28, &ll_backend__pragma_c_gen__ExtraCArgs_31);
    }
#line 464 "pragma_c_gen.m"
    {
#line 464 "pragma_c_gen.m"
      mercury__list__append_3_p_1((MR_Word) &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__type_ctor_info_c_arg_0, ll_backend__pragma_c_gen__OrigCArgs_29, ll_backend__pragma_c_gen__ExtraCArgs_31, &ll_backend__pragma_c_gen__CArgs_32);
    }
#line 465 "pragma_c_gen.m"
    {
#line 465 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(ll_backend__pragma_c_gen__CArgs_32, &ll_backend__pragma_c_gen__InCArgs_33);
    }
#line 466 "pragma_c_gen.m"
    {
#line 466 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(ll_backend__pragma_c_gen__CArgs_32, &ll_backend__pragma_c_gen__OutCArgs_34);
    }
#line 468 "pragma_c_gen.m"
    {
#line 468 "pragma_c_gen.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__pragma_c_gen__GoalInfo_22, &ll_backend__pragma_c_gen__PostDeaths_35);
    }
#line 3927 "ll_backend.pragma_c_gen.c"
    ll_backend__pragma_c_gen__TypeCtorInfo_219_219 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 469 "pragma_c_gen.m"
    {
#line 469 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__DeadVars0_36 = parse_tree__set_of_var__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_219_219);
    }
#line 470 "pragma_c_gen.m"
    {
#line 470 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(ll_backend__pragma_c_gen__InCArgs_33, ll_backend__pragma_c_gen__PostDeaths_35, ll_backend__pragma_c_gen__DeadVars0_36, &ll_backend__pragma_c_gen__DeadVars_37);
    }
#line 476 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__MayCallMercury_26 == (MR_Integer) 0))
#line 477 "pragma_c_gen.m"
      {
#line 477 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__OutVars_39;
#line 477 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__OutVarsSet_40;
#line 477 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97_97;
#line 486 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_41_41;

#line 479 "pragma_c_gen.m"
        {
#line 479 "pragma_c_gen.m"
          ll_backend__code_info__succip_is_used_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_92, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97_97);
        }
#line 484 "pragma_c_gen.m"
        {
#line 484 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(ll_backend__pragma_c_gen__OutCArgs_34, &ll_backend__pragma_c_gen__OutVars_39);
        }
#line 485 "pragma_c_gen.m"
        {
#line 485 "pragma_c_gen.m"
          parse_tree__set_of_var__list_to_set_2_p_0(ll_backend__pragma_c_gen__TypeCtorInfo_219_219, ll_backend__pragma_c_gen__OutVars_39, &ll_backend__pragma_c_gen__OutVarsSet_40);
        }
#line 486 "pragma_c_gen.m"
        {
#line 486 "pragma_c_gen.m"
          ll_backend__code_info__save_variables_5_p_0(ll_backend__pragma_c_gen__OutVarsSet_40, &ll_backend__pragma_c_gen__V_41_41, &ll_backend__pragma_c_gen__SaveVarsCode_38, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97_97, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_98_98);
        }
#line 477 "pragma_c_gen.m"
      }
#line 476 "pragma_c_gen.m"
    else
#line 474 "pragma_c_gen.m"
      {
#line 475 "pragma_c_gen.m"
        {
#line 475 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__SaveVarsCode_38 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 474 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__STATE_VARIABLE_CI_98_98 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_92;
#line 474 "pragma_c_gen.m"
      }
#line 492 "pragma_c_gen.m"
    {
#line 492 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_p_0(ll_backend__pragma_c_gen__InCArgs_33, &ll_backend__pragma_c_gen__InputDescs_42, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_23, &ll_backend__pragma_c_gen__InputVarsCode_43, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_98_98, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_99_99);
    }
#line 499 "pragma_c_gen.m"
    {
#line 499 "pragma_c_gen.m"
      ll_backend__code_info__make_vars_forward_dead_3_p_0(ll_backend__pragma_c_gen__DeadVars_37, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_99_99, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_100_100);
    }
#line 502 "pragma_c_gen.m"
    {
#line 502 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(ll_backend__pragma_c_gen__CArgs_32, ll_backend__pragma_c_gen__ModuleInfo_30, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_23, &ll_backend__pragma_c_gen__Decls_44);
    }
#line 505 "pragma_c_gen.m"
    {
#line 505 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(ll_backend__pragma_c_gen__C_Code_20, ll_backend__pragma_c_gen__Context_21, &ll_backend__pragma_c_gen__AllocIdHashDefine_45, &ll_backend__pragma_c_gen__AllocIdHashUndef_46, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_100_100, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_101_101);
    }
#line 510 "pragma_c_gen.m"
    {
#line 510 "pragma_c_gen.m"
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_101_101, &ll_backend__pragma_c_gen__CallerPredId_47);
    }
#line 511 "pragma_c_gen.m"
    {
#line 511 "pragma_c_gen.m"
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_101_101, &ll_backend__pragma_c_gen__CallerProcId_48);
    }
#line 512 "pragma_c_gen.m"
    {
#line 512 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(ll_backend__pragma_c_gen__ModuleInfo_30, ll_backend__pragma_c_gen__CallerPredId_47, ll_backend__pragma_c_gen__CallerProcId_48, &ll_backend__pragma_c_gen__ProcLabelHashDefine_49, &ll_backend__pragma_c_gen__ProcLabelHashUndef_50);
    }
#line 516 "pragma_c_gen.m"
    {
#line 516 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__InputComp_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 516 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__InputComp_51, 0) = ((MR_Box) (ll_backend__pragma_c_gen__InputDescs_42));
#line 516 "pragma_c_gen.m"
    }
#line 4030 "ll_backend.pragma_c_gen.c"
    if ((ll_backend__pragma_c_gen__ThreadSafe_27 == (MR_Integer) 2))
#line 4032 "ll_backend.pragma_c_gen.c"
      {
#line 455 "pragma_c_gen.m"
        {
#line 455 "pragma_c_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_ordinary_foreign_proc_code\'/13", (MR_String) "maybe_thread_safe");
#line 455 "pragma_c_gen.m"
          return;
        }
#line 4041 "ll_backend.pragma_c_gen.c"
      }
#line 4043 "ll_backend.pragma_c_gen.c"
    else
#line 4045 "ll_backend.pragma_c_gen.c"
    if ((ll_backend__pragma_c_gen__ThreadSafe_27 == (MR_Integer) 0))
#line 4047 "ll_backend.pragma_c_gen.c"
      {
#line 4049 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_224_224;
#line 4051 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__PredInfo_55;
#line 4053 "ll_backend.pragma_c_gen.c"
        MR_String ll_backend__pragma_c_gen__Name_56;
#line 4055 "ll_backend.pragma_c_gen.c"
        MR_String ll_backend__pragma_c_gen__MangledName_57;
#line 4057 "ll_backend.pragma_c_gen.c"
        MR_String ll_backend__pragma_c_gen__ObtainLockStr_58;
#line 4059 "ll_backend.pragma_c_gen.c"
        MR_String ll_backend__pragma_c_gen__ReleaseLockStr_59;
#line 4061 "ll_backend.pragma_c_gen.c"
        MR_String ll_backend__pragma_c_gen__V_113_113;
#line 4063 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_117_117;
#line 4065 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_118_118;
#line 4067 "ll_backend.pragma_c_gen.c"
        MR_String ll_backend__pragma_c_gen__V_120_120;
#line 4069 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_124_124;
#line 4071 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_125_125;

#line 539 "pragma_c_gen.m"
        {
#line 539 "pragma_c_gen.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__pragma_c_gen__ModuleInfo_30, ll_backend__pragma_c_gen__PredId_16, &ll_backend__pragma_c_gen__PredInfo_55);
        }
#line 540 "pragma_c_gen.m"
        {
#line 540 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__Name_56 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__pragma_c_gen__PredInfo_55);
        }
#line 541 "pragma_c_gen.m"
        {
#line 541 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__MangledName_57 = backend_libs__c_util__quote_string_1_f_0(ll_backend__pragma_c_gen__Name_56);
        }
#line 543 "pragma_c_gen.m"
        {
#line 543 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_113_113 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__MangledName_57, (MR_String) "\");\n");
        }
#line 543 "pragma_c_gen.m"
        {
#line 543 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__ObtainLockStr_58 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\"", ll_backend__pragma_c_gen__V_113_113);
        }
#line 4099 "ll_backend.pragma_c_gen.c"
        ll_backend__pragma_c_gen__TypeCtorInfo_224_224 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 545 "pragma_c_gen.m"
        {
#line 545 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_118_118 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_224_224);
        }
#line 545 "pragma_c_gen.m"
        {
#line 545 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 545 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_117_117, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_118_118));
#line 545 "pragma_c_gen.m"
        }
#line 544 "pragma_c_gen.m"
        {
#line 544 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__ObtainLock_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 544 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 544 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_53, 1) = ((MR_Box) ((MR_Integer) 1));
#line 544 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_53, 2) = ((MR_Box) ((MR_Integer) 1));
#line 544 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_53, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_117_117));
#line 544 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_53, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ObtainLockStr_58));
#line 544 "pragma_c_gen.m"
        }
#line 548 "pragma_c_gen.m"
        {
#line 548 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_120_120 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__MangledName_57, (MR_String) "\");\n");
        }
#line 548 "pragma_c_gen.m"
        {
#line 548 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__ReleaseLockStr_59 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\"", ll_backend__pragma_c_gen__V_120_120);
        }
#line 550 "pragma_c_gen.m"
        {
#line 550 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_125_125 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_224_224);
        }
#line 550 "pragma_c_gen.m"
        {
#line 550 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 550 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_124_124, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_125_125));
#line 550 "pragma_c_gen.m"
        }
#line 549 "pragma_c_gen.m"
        {
#line 549 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__ReleaseLock_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 549 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 549 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_54, 1) = ((MR_Box) ((MR_Integer) 1));
#line 549 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_54, 2) = ((MR_Box) ((MR_Integer) 1));
#line 549 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_54, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_124_124));
#line 549 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_54, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ReleaseLockStr_59));
#line 549 "pragma_c_gen.m"
        }
#line 4169 "ll_backend.pragma_c_gen.c"
      }
#line 4171 "ll_backend.pragma_c_gen.c"
    else
#line 4173 "ll_backend.pragma_c_gen.c"
      {
#line 4175 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_223_223 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 4177 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_128_128;
#line 4179 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_129_129;
#line 4181 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_133_133;
#line 4183 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_134_134;

#line 534 "pragma_c_gen.m"
        {
#line 534 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_129_129 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_223_223);
        }
#line 534 "pragma_c_gen.m"
        {
#line 534 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 534 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_128_128, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_129_129));
#line 534 "pragma_c_gen.m"
        }
#line 533 "pragma_c_gen.m"
        {
#line 533 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__ObtainLock_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 533 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 533 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_53, 1) = ((MR_Box) ((MR_Integer) 1));
#line 533 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_53, 2) = ((MR_Box) ((MR_Integer) 1));
#line 533 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_53, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_128_128));
#line 533 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_53, 4) = ((MR_Box) ((MR_String) ""));
#line 533 "pragma_c_gen.m"
        }
#line 536 "pragma_c_gen.m"
        {
#line 536 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_134_134 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_223_223);
        }
#line 536 "pragma_c_gen.m"
        {
#line 536 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 536 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_133_133, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_134_134));
#line 536 "pragma_c_gen.m"
        }
#line 535 "pragma_c_gen.m"
        {
#line 535 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__ReleaseLock_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 535 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 535 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_54, 1) = ((MR_Box) ((MR_Integer) 1));
#line 535 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_54, 2) = ((MR_Box) ((MR_Integer) 1));
#line 535 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_54, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_133_133));
#line 535 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_54, 4) = ((MR_Box) ((MR_String) ""));
#line 535 "pragma_c_gen.m"
        }
#line 4244 "ll_backend.pragma_c_gen.c"
      }
#line 555 "pragma_c_gen.m"
    {
#line 555 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__AffectsLiveness_60 = parse_tree__prog_data__get_affects_liveness_1_f_0(ll_backend__pragma_c_gen__Attributes_15);
    }
#line 556 "pragma_c_gen.m"
    {
#line 556 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__C_Code_Comp_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 556 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 556 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_61, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Context_21));
#line 556 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_61, 2) = ((MR_Box) (ll_backend__pragma_c_gen__AffectsLiveness_60));
#line 556 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_61, 3) = ((MR_Box) (ll_backend__pragma_c_gen__C_Code_20));
#line 556 "pragma_c_gen.m"
    }
#line 559 "pragma_c_gen.m"
    {
#line 559 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__Detism_62 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__pragma_c_gen__GoalInfo_22);
    }
#line 560 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CodeModel_14 == (MR_Integer) 1);
#line 579 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 568 "pragma_c_gen.m"
      {
#line 568 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_225_225;
#line 568 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_139_139;
#line 568 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_140_140;
#line 568 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_141_141;
#line 568 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_143_143;
#line 568 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_144_144;
#line 568 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_145_145;
#line 568 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_147_147;
#line 568 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_149_149;
#line 568 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_151_151;
#line 568 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_152_152;
#line 568 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_156_156;
#line 568 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_157_157;

#line 561 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__Detism_62 == (MR_Integer) 7);
#line 564 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 562 "pragma_c_gen.m"
          {
#line 562 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__CheckSuccess_Comp_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__MaybeFailLabel_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__STATE_VARIABLE_CI_136_136 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_101_101;
#line 562 "pragma_c_gen.m"
          }
#line 564 "pragma_c_gen.m"
        else
#line 565 "pragma_c_gen.m"
          {
#line 565 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__FailLabel_65;

#line 565 "pragma_c_gen.m"
            {
#line 565 "pragma_c_gen.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__pragma_c_gen__FailLabel_65, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_101_101, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_136_136);
            }
#line 566 "pragma_c_gen.m"
            {
#line 566 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__CheckSuccess_Comp_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__CheckSuccess_Comp_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 566 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__CheckSuccess_Comp_63, 1) = ((MR_Box) (ll_backend__pragma_c_gen__FailLabel_65));
#line 566 "pragma_c_gen.m"
            }
#line 567 "pragma_c_gen.m"
            {
#line 567 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__MaybeFailLabel_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 567 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeFailLabel_64, 0) = ((MR_Box) (ll_backend__pragma_c_gen__FailLabel_65));
#line 567 "pragma_c_gen.m"
            }
#line 565 "pragma_c_gen.m"
          }
#line 4349 "ll_backend.pragma_c_gen.c"
        ll_backend__pragma_c_gen__TypeCtorInfo_225_225 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 570 "pragma_c_gen.m"
        {
#line 570 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_140_140 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_225_225);
        }
#line 570 "pragma_c_gen.m"
        {
#line 570 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 570 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_139_139, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_140_140));
#line 570 "pragma_c_gen.m"
        }
#line 571 "pragma_c_gen.m"
        {
#line 571 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_144_144 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
        }
#line 574 "pragma_c_gen.m"
        {
#line 574 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_152_152 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
        }
#line 574 "pragma_c_gen.m"
        {
#line 574 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_151_151 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_152_152, (MR_String) "\n");
        }
#line 573 "pragma_c_gen.m"
        {
#line 573 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_149_149 = mercury__string__f_43_43_2_f_0((MR_String) "#define SUCCESS_INDICATOR ", ll_backend__pragma_c_gen__V_151_151);
        }
#line 572 "pragma_c_gen.m"
        {
#line 572 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_147_147 = mercury__string__f_43_43_2_f_0((MR_String) "#undef SUCCESS_INDICATOR\n", ll_backend__pragma_c_gen__V_149_149);
        }
#line 571 "pragma_c_gen.m"
        {
#line 571 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_145_145 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", ll_backend__pragma_c_gen__V_147_147);
        }
#line 571 "pragma_c_gen.m"
        {
#line 571 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_143_143 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_144_144, ll_backend__pragma_c_gen__V_145_145);
        }
#line 571 "pragma_c_gen.m"
        {
#line 571 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_141_141 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_bool ", ll_backend__pragma_c_gen__V_143_143);
        }
#line 569 "pragma_c_gen.m"
        {
#line 569 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__DefSuccessComp_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 569 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 569 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_66, 1) = ((MR_Box) ((MR_Integer) 1));
#line 569 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_66, 2) = ((MR_Box) ((MR_Integer) 1));
#line 569 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_66, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_139_139));
#line 569 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_66, 4) = ((MR_Box) (ll_backend__pragma_c_gen__V_141_141));
#line 569 "pragma_c_gen.m"
        }
#line 576 "pragma_c_gen.m"
        {
#line 576 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_157_157 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_225_225);
        }
#line 576 "pragma_c_gen.m"
        {
#line 576 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 576 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_156_156, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_157_157));
#line 576 "pragma_c_gen.m"
        }
#line 575 "pragma_c_gen.m"
        {
#line 575 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__UndefSuccessComp_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 575 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 575 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_67, 1) = ((MR_Box) ((MR_Integer) 1));
#line 575 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_67, 2) = ((MR_Box) ((MR_Integer) 1));
#line 575 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_67, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_156_156));
#line 575 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_67, 4) = ((MR_Box) ((MR_String) "#undef SUCCESS_INDICATOR\n#define SUCCESS_INDICATOR MR_r1\n"));
#line 575 "pragma_c_gen.m"
        }
#line 568 "pragma_c_gen.m"
      }
#line 579 "pragma_c_gen.m"
    else
#line 580 "pragma_c_gen.m"
      {
#line 580 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_226_226;
#line 580 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_163_163;
#line 580 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_164_164;
#line 580 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_168_168;
#line 580 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_169_169;

#line 580 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__CheckSuccess_Comp_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__MaybeFailLabel_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4470 "ll_backend.pragma_c_gen.c"
        ll_backend__pragma_c_gen__TypeCtorInfo_226_226 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 583 "pragma_c_gen.m"
        {
#line 583 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_164_164 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_226_226);
        }
#line 583 "pragma_c_gen.m"
        {
#line 583 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 583 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_163_163, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_164_164));
#line 583 "pragma_c_gen.m"
        }
#line 582 "pragma_c_gen.m"
        {
#line 582 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__DefSuccessComp_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 582 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 582 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_66, 1) = ((MR_Box) ((MR_Integer) 1));
#line 582 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_66, 2) = ((MR_Box) ((MR_Integer) 1));
#line 582 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_66, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_163_163));
#line 582 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_66, 4) = ((MR_Box) ((MR_String) ""));
#line 582 "pragma_c_gen.m"
        }
#line 585 "pragma_c_gen.m"
        {
#line 585 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_169_169 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_226_226);
        }
#line 585 "pragma_c_gen.m"
        {
#line 585 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_168_168, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_169_169));
#line 585 "pragma_c_gen.m"
        }
#line 584 "pragma_c_gen.m"
        {
#line 584 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__UndefSuccessComp_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 584 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 584 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_67, 1) = ((MR_Box) ((MR_Integer) 1));
#line 584 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_67, 2) = ((MR_Box) ((MR_Integer) 1));
#line 584 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_67, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_168_168));
#line 584 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_67, 4) = ((MR_Box) ((MR_String) ""));
#line 584 "pragma_c_gen.m"
        }
#line 580 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__STATE_VARIABLE_CI_136_136 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_101_101;
#line 580 "pragma_c_gen.m"
      }
#line 4534 "ll_backend.pragma_c_gen.c"
    if ((ll_backend__pragma_c_gen__MayCallMercury_26 == (MR_Integer) 0))
#line 4536 "ll_backend.pragma_c_gen.c"
      {
#line 4538 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__InstMapDelta_69;
#line 4540 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__OkToDelete_70;
#line 4542 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_104_104;
#line 4544 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_105_105;
#line 4546 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_173_173;
#line 4548 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_174_174;

#line 526 "pragma_c_gen.m"
        {
#line 526 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_105_105 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 526 "pragma_c_gen.m"
        {
#line 526 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_104_104, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_105_105));
#line 526 "pragma_c_gen.m"
        }
#line 525 "pragma_c_gen.m"
        {
#line 525 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__SaveRegsComp_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 525 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 525 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_52, 1) = ((MR_Box) ((MR_Integer) 1));
#line 525 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_52, 2) = ((MR_Box) ((MR_Integer) 0));
#line 525 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_52, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_104_104));
#line 525 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_52, 4) = ((MR_Box) ((MR_String) "\tMR_save_registers();\n"));
#line 525 "pragma_c_gen.m"
        }
#line 597 "pragma_c_gen.m"
        {
#line 597 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_174_174 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 597 "pragma_c_gen.m"
        {
#line 597 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 597 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_173_173, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_174_174));
#line 597 "pragma_c_gen.m"
        }
#line 596 "pragma_c_gen.m"
        {
#line 596 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__RestoreRegsComp_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 596 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 596 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_68, 1) = ((MR_Box) ((MR_Integer) 1));
#line 596 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_68, 2) = ((MR_Box) ((MR_Integer) 1));
#line 596 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_68, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_173_173));
#line 596 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_68, 4) = ((MR_Box) ((MR_String) "#ifndef MR_CONSERVATIVE_GC\n\tMR_restore_registers();\n#endif\n"));
#line 596 "pragma_c_gen.m"
        }
#line 609 "pragma_c_gen.m"
        {
#line 609 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__InstMapDelta_69 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__pragma_c_gen__GoalInfo_22);
        }
#line 610 "pragma_c_gen.m"
        {
#line 610 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__pragma_c_gen__InstMapDelta_69);
        }
#line 612 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 611 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__OkToDelete_70 = (MR_Integer) 0;
#line 612 "pragma_c_gen.m"
        else
#line 613 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__OkToDelete_70 = (MR_Integer) 1;
#line 615 "pragma_c_gen.m"
        {
#line 615 "pragma_c_gen.m"
          ll_backend__code_info__clear_all_registers_3_p_0(ll_backend__pragma_c_gen__OkToDelete_70, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_136_136, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_178_178);
        }
#line 4632 "ll_backend.pragma_c_gen.c"
      }
#line 4634 "ll_backend.pragma_c_gen.c"
    else
#line 4636 "ll_backend.pragma_c_gen.c"
      {
#line 4638 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_109_109;
#line 4640 "ll_backend.pragma_c_gen.c"
        MR_Word ll_backend__pragma_c_gen__V_110_110;

#line 522 "pragma_c_gen.m"
        {
#line 522 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_110_110 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 522 "pragma_c_gen.m"
        {
#line 522 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_109_109, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_110_110));
#line 522 "pragma_c_gen.m"
        }
#line 521 "pragma_c_gen.m"
        {
#line 521 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__SaveRegsComp_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 521 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 521 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_52, 1) = ((MR_Box) ((MR_Integer) 1));
#line 521 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_52, 2) = ((MR_Box) ((MR_Integer) 1));
#line 521 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_52, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_109_109));
#line 521 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_52, 4) = ((MR_Box) ((MR_String) ""));
#line 521 "pragma_c_gen.m"
        }
#line 593 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__RestoreRegsComp_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__STATE_VARIABLE_CI_178_178 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_136_136;
#line 4676 "ll_backend.pragma_c_gen.c"
      }
#line 619 "pragma_c_gen.m"
    {
#line 619 "pragma_c_gen.m"
      ll_backend__code_info__get_exprn_opts_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_178_178, &ll_backend__pragma_c_gen__ExprnOpts_71);
    }
#line 620 "pragma_c_gen.m"
    {
#line 620 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__UseFloatRegs_72 = ll_backend__llds__get_float_registers_1_f_0(ll_backend__pragma_c_gen__ExprnOpts_71);
    }
#line 624 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__UseFloatRegs_72 == (MR_Integer) 1))
#line 626 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__FloatRegType_73 = (MR_Integer) 0;
#line 624 "pragma_c_gen.m"
    else
#line 623 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__FloatRegType_73 = (MR_Integer) 1;
#line 628 "pragma_c_gen.m"
    {
#line 628 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(ll_backend__pragma_c_gen__FloatRegType_73, ll_backend__pragma_c_gen__OutCArgs_34, &ll_backend__pragma_c_gen__Regs_74, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_178_178, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_179_179);
    }
#line 629 "pragma_c_gen.m"
    {
#line 629 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_p_0(ll_backend__pragma_c_gen__OutCArgs_34, ll_backend__pragma_c_gen__Regs_74, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_23, &ll_backend__pragma_c_gen__OutputDescs_75, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_179_179, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_180_180);
    }
#line 631 "pragma_c_gen.m"
    {
#line 631 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__OutputComp_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 631 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__OutputComp_76, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OutputDescs_75));
#line 631 "pragma_c_gen.m"
    }
#line 634 "pragma_c_gen.m"
    {
#line 634 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_181_181, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ProcLabelHashDefine_49));
#line 634 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_181_181, 1) = ((MR_Box) (ll_backend__pragma_c_gen__AllocIdHashDefine_45));
#line 634 "pragma_c_gen.m"
    }
#line 639 "pragma_c_gen.m"
    {
#line 639 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_192_192, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ProcLabelHashUndef_50));
#line 639 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_192_192, 1) = ((MR_Box) (ll_backend__pragma_c_gen__AllocIdHashUndef_46));
#line 639 "pragma_c_gen.m"
    }
#line 638 "pragma_c_gen.m"
    {
#line 638 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_191_191, 0) = ((MR_Box) (ll_backend__pragma_c_gen__UndefSuccessComp_67));
#line 638 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_191_191, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_192_192));
#line 638 "pragma_c_gen.m"
    }
#line 638 "pragma_c_gen.m"
    {
#line 638 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_190_190, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OutputComp_76));
#line 638 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_190_190, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_191_191));
#line 638 "pragma_c_gen.m"
    }
#line 637 "pragma_c_gen.m"
    {
#line 637 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_189_189, 0) = ((MR_Box) (ll_backend__pragma_c_gen__RestoreRegsComp_68));
#line 637 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_189_189, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_190_190));
#line 637 "pragma_c_gen.m"
    }
#line 637 "pragma_c_gen.m"
    {
#line 637 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_188_188, 0) = ((MR_Box) (ll_backend__pragma_c_gen__CheckSuccess_Comp_63));
#line 637 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_188_188, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_189_189));
#line 637 "pragma_c_gen.m"
    }
#line 636 "pragma_c_gen.m"
    {
#line 636 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_187_187, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ReleaseLock_54));
#line 636 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_187_187, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_188_188));
#line 636 "pragma_c_gen.m"
    }
#line 636 "pragma_c_gen.m"
    {
#line 636 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_186_186, 0) = ((MR_Box) (ll_backend__pragma_c_gen__C_Code_Comp_61));
#line 636 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_186_186, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_187_187));
#line 636 "pragma_c_gen.m"
    }
#line 636 "pragma_c_gen.m"
    {
#line 636 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_185_185, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ObtainLock_53));
#line 636 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_185_185, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_186_186));
#line 636 "pragma_c_gen.m"
    }
#line 636 "pragma_c_gen.m"
    {
#line 636 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_184_184, 0) = ((MR_Box) (ll_backend__pragma_c_gen__SaveRegsComp_52));
#line 636 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_184_184, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_185_185));
#line 636 "pragma_c_gen.m"
    }
#line 635 "pragma_c_gen.m"
    {
#line 635 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_183_183, 0) = ((MR_Box) (ll_backend__pragma_c_gen__InputComp_51));
#line 635 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_183_183, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_184_184));
#line 635 "pragma_c_gen.m"
    }
#line 635 "pragma_c_gen.m"
    {
#line 635 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_182_182, 0) = ((MR_Box) (ll_backend__pragma_c_gen__DefSuccessComp_66));
#line 635 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_182_182, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_183_183));
#line 635 "pragma_c_gen.m"
    }
#line 634 "pragma_c_gen.m"
    {
#line 634 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__Components_77 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, ll_backend__pragma_c_gen__V_181_181, ll_backend__pragma_c_gen__V_182_182);
    }
#line 640 "pragma_c_gen.m"
    {
#line 640 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__MaybeMayDupl_78 = parse_tree__prog_data__get_may_duplicate_1_f_0(ll_backend__pragma_c_gen__Attributes_15);
    }
#line 643 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__MaybeMayDupl_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 648 "pragma_c_gen.m"
      if ((ll_backend__pragma_c_gen__ExtraArgs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__MayDupl_79 = (MR_Integer) 0;
#line 648 "pragma_c_gen.m"
      else
#line 650 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__MayDupl_79 = (MR_Integer) 1;
#line 643 "pragma_c_gen.m"
    else
#line 642 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__MayDupl_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeMayDupl_78, (MR_Integer) 0)));
#line 653 "pragma_c_gen.m"
    {
#line 653 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__ExtraAttributes_82 = parse_tree__prog_data__get_extra_attributes_1_f_0(ll_backend__pragma_c_gen__Attributes_15);
    }
#line 654 "pragma_c_gen.m"
    {
#line 654 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_extra_attribute_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ll_backend__pragma_c_gen__ExtraAttributes_82);
    }
#line 656 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 655 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__RefersToLLDSSTack_83 = (MR_Integer) 1;
#line 656 "pragma_c_gen.m"
    else
#line 657 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__RefersToLLDSSTack_83 = (MR_Integer) 0;
#line 4876 "ll_backend.pragma_c_gen.c"
    ll_backend__pragma_c_gen__TypeCtorInfo_230_230 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 660 "pragma_c_gen.m"
    {
#line 660 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_195_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_195_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_195_195, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Decls_44));
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_195_195, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Components_77));
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_195_195, 3) = ((MR_Box) (ll_backend__pragma_c_gen__MayCallMercury_26));
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_195_195, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_195_195, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_195_195, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_195_195, 7) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeFailLabel_64));
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_195_195, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_195_195, 9) = ((MR_Box) (ll_backend__pragma_c_gen__RefersToLLDSSTack_83));
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_195_195, 10) = ((MR_Box) (ll_backend__pragma_c_gen__MayDupl_79));
#line 660 "pragma_c_gen.m"
    }
#line 660 "pragma_c_gen.m"
    {
#line 660 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_194_194, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_195_195));
#line 660 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_194_194, 1) = ((MR_Box) ((MR_String) "foreign_proc inclusion"));
#line 660 "pragma_c_gen.m"
    }
#line 659 "pragma_c_gen.m"
    {
#line 659 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__PragmaCCode_84 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ((MR_Box) (ll_backend__pragma_c_gen__V_194_194)));
    }
#line 692 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__MaybeFailLabel_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "pragma_c_gen.m"
      {
#line 694 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__Detism_62 == (MR_Integer) 7);
#line 696 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 695 "pragma_c_gen.m"
          {
#line 695 "pragma_c_gen.m"
            ll_backend__code_info__generate_failure_3_p_0(&ll_backend__pragma_c_gen__FailureCode_91, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_180_180, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_93);
          }
#line 696 "pragma_c_gen.m"
        else
#line 697 "pragma_c_gen.m"
          {
#line 697 "pragma_c_gen.m"
            {
#line 697 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__FailureCode_91 = mercury__cord__empty_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230);
            }
#line 697 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_93 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_180_180;
#line 697 "pragma_c_gen.m"
          }
#line 696 "pragma_c_gen.m"
      }
#line 692 "pragma_c_gen.m"
    else
#line 678 "pragma_c_gen.m"
      {
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TheFailLabel_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeFailLabel_64, (MR_Integer) 0)));
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__SkipLabel_86;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__FailCode_87;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__GotoSkipLabelCode_88;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__SkipLabelCode_89;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__FailLabelCode_90;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_202_202;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_204_204;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_205_205;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_206_206;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_208_208;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_209_209;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_211_211;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_212_212;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_214_214;
#line 678 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_215_215;

#line 679 "pragma_c_gen.m"
        {
#line 679 "pragma_c_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__pragma_c_gen__SkipLabel_86, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_180_180, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_202_202);
        }
#line 680 "pragma_c_gen.m"
        {
#line 680 "pragma_c_gen.m"
          ll_backend__code_info__generate_failure_3_p_0(&ll_backend__pragma_c_gen__FailCode_87, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_202_202, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_93);
        }
#line 682 "pragma_c_gen.m"
        {
#line 682 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 682 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_206_206, 0) = ((MR_Box) (ll_backend__pragma_c_gen__SkipLabel_86));
#line 682 "pragma_c_gen.m"
        }
#line 682 "pragma_c_gen.m"
        {
#line 682 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_205_205 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_205_205, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 682 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_205_205, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_206_206));
#line 682 "pragma_c_gen.m"
        }
#line 682 "pragma_c_gen.m"
        {
#line 682 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 682 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_204_204, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_205_205));
#line 682 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_204_204, 1) = ((MR_Box) ((MR_String) "Skip past failure code"));
#line 682 "pragma_c_gen.m"
        }
#line 681 "pragma_c_gen.m"
        {
#line 681 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__GotoSkipLabelCode_88 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ((MR_Box) (ll_backend__pragma_c_gen__V_204_204)));
        }
#line 685 "pragma_c_gen.m"
        {
#line 685 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_209_209 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_209_209, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 685 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_209_209, 1) = ((MR_Box) (ll_backend__pragma_c_gen__SkipLabel_86));
#line 685 "pragma_c_gen.m"
        }
#line 685 "pragma_c_gen.m"
        {
#line 685 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_208_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 685 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_208_208, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_209_209));
#line 685 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_208_208, 1) = ((MR_Box) ((MR_String) ""));
#line 685 "pragma_c_gen.m"
        }
#line 684 "pragma_c_gen.m"
        {
#line 684 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__SkipLabelCode_89 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ((MR_Box) (ll_backend__pragma_c_gen__V_208_208)));
        }
#line 688 "pragma_c_gen.m"
        {
#line 688 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_212_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_212_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 688 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_212_212, 1) = ((MR_Box) (ll_backend__pragma_c_gen__TheFailLabel_85));
#line 688 "pragma_c_gen.m"
        }
#line 688 "pragma_c_gen.m"
        {
#line 688 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_211_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_211_211, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_212_212));
#line 688 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_211_211, 1) = ((MR_Box) ((MR_String) ""));
#line 688 "pragma_c_gen.m"
        }
#line 687 "pragma_c_gen.m"
        {
#line 687 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__FailLabelCode_90 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ((MR_Box) (ll_backend__pragma_c_gen__V_211_211)));
        }
#line 690 "pragma_c_gen.m"
        {
#line 690 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_215_215 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ll_backend__pragma_c_gen__FailCode_87, ll_backend__pragma_c_gen__SkipLabelCode_89);
        }
#line 690 "pragma_c_gen.m"
        {
#line 690 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_214_214 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ll_backend__pragma_c_gen__FailLabelCode_90, ll_backend__pragma_c_gen__V_215_215);
        }
#line 690 "pragma_c_gen.m"
        {
#line 690 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__FailureCode_91 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ll_backend__pragma_c_gen__GotoSkipLabelCode_88, ll_backend__pragma_c_gen__V_214_214);
        }
#line 678 "pragma_c_gen.m"
      }
#line 702 "pragma_c_gen.m"
    {
#line 702 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_217_217 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ll_backend__pragma_c_gen__PragmaCCode_84, ll_backend__pragma_c_gen__FailureCode_91);
    }
#line 702 "pragma_c_gen.m"
    {
#line 702 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_216_216 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ll_backend__pragma_c_gen__InputVarsCode_43, ll_backend__pragma_c_gen__V_217_217);
    }
#line 702 "pragma_c_gen.m"
    {
#line 702 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ll_backend__pragma_c_gen__SaveVarsCode_38, ll_backend__pragma_c_gen__V_216_216);
    }
#line 444 "pragma_c_gen.m"
  }
#line 436 "pragma_c_gen.m"
}

#line 404 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(
#line 404 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Expr_5,
#line 404 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__CondRval_6,
#line 404 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19,
#line 404 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20)
#line 404 "pragma_c_gen.m"
{
#line 409 "pragma_c_gen.m"
  {
#line 409 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 409 "pragma_c_gen.m"
    if (((MR_tag((MR_Word) ll_backend__pragma_c_gen__Expr_5)) == (MR_mktag((MR_Integer) 0))))
#line 409 "pragma_c_gen.m"
      {
#line 409 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__EnvVar_8;
#line 409 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__UsedEnvVars0_9;
#line 409 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__UsedEnvVars_10;
#line 409 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__EnvVarRval_11;
#line 409 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 0)));
#line 409 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_27_27;
#line 409 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_28_28;

#line 409 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__EnvVar_8 = (MR_String) ll_backend__pragma_c_gen__V_25_25;
#line 410 "pragma_c_gen.m"
        {
#line 410 "pragma_c_gen.m"
          ll_backend__code_info__get_used_env_vars_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, &ll_backend__pragma_c_gen__UsedEnvVars0_9);
        }
#line 411 "pragma_c_gen.m"
        {
#line 411 "pragma_c_gen.m"
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ll_backend__pragma_c_gen__EnvVar_8)), ll_backend__pragma_c_gen__UsedEnvVars0_9, &ll_backend__pragma_c_gen__UsedEnvVars_10);
        }
#line 412 "pragma_c_gen.m"
        {
#line 412 "pragma_c_gen.m"
          ll_backend__code_info__set_used_env_vars_3_p_0(ll_backend__pragma_c_gen__UsedEnvVars_10, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);
        }
#line 413 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_28_28 = (MR_Word) ll_backend__pragma_c_gen__EnvVar_8;
#line 413 "pragma_c_gen.m"
        {
#line 413 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 413 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_28_28));
#line 413 "pragma_c_gen.m"
        }
#line 413 "pragma_c_gen.m"
        {
#line 413 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__EnvVarRval_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 413 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__EnvVarRval_11, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_27_27));
#line 413 "pragma_c_gen.m"
        }
#line 415 "pragma_c_gen.m"
        {
#line 415 "pragma_c_gen.m"
          MR_Word base;
#line 415 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 415 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__CondRval_6 = base;
#line 415 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 415 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 415 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__pragma_c_gen__EnvVarRval_11));
#line 415 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__pragma_c_gen_scalar_common_1[3])));
#line 415 "pragma_c_gen.m"
        }
#line 409 "pragma_c_gen.m"
      }
#line 409 "pragma_c_gen.m"
    else
#line 409 "pragma_c_gen.m"
    if (((MR_tag((MR_Word) ll_backend__pragma_c_gen__Expr_5)) == (MR_mktag((MR_Integer) 1))))
#line 417 "pragma_c_gen.m"
      {
#line 417 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ExprA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 0)));
#line 417 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__RvalA_14;

#line 418 "pragma_c_gen.m"
        {
#line 418 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__ExprA_13, &ll_backend__pragma_c_gen__RvalA_14, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);
        }
#line 419 "pragma_c_gen.m"
        {
#line 419 "pragma_c_gen.m"
          MR_Word base;
#line 419 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 419 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__CondRval_6 = base;
#line 419 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 419 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 7));
#line 419 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__pragma_c_gen__RvalA_14));
#line 419 "pragma_c_gen.m"
        }
#line 417 "pragma_c_gen.m"
      }
#line 409 "pragma_c_gen.m"
    else
#line 421 "pragma_c_gen.m"
      {
#line 421 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TraceOp_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 0)));
#line 421 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ExprB_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 2)));
#line 421 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__RvalB_17;
#line 421 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Op_18;
#line 421 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_21;
#line 421 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ExprA_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 1)));
#line 421 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__RvalA_33;

#line 422 "pragma_c_gen.m"
        {
#line 422 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__ExprA_32, &ll_backend__pragma_c_gen__RvalA_33, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_21);
        }
#line 423 "pragma_c_gen.m"
        {
#line 423 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__ExprB_16, &ll_backend__pragma_c_gen__RvalB_17, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_21, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);
        }
#line 427 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__TraceOp_15 == (MR_Integer) 1))
#line 429 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__Op_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 427 "pragma_c_gen.m"
        else
#line 426 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__Op_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 431 "pragma_c_gen.m"
        {
#line 431 "pragma_c_gen.m"
          MR_Word base;
#line 431 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 431 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__CondRval_6 = base;
#line 431 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 431 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Op_18));
#line 431 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__pragma_c_gen__RvalA_33));
#line 431 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__pragma_c_gen__RvalB_17));
#line 431 "pragma_c_gen.m"
        }
#line 421 "pragma_c_gen.m"
      }
#line 409 "pragma_c_gen.m"
  }
#line 404 "pragma_c_gen.m"
}

#line 51 "pragma_c_gen.m"
MR_String MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0(void)
#line 51 "pragma_c_gen.m"
{
#line 1178 "pragma_c_gen.m"
  {
#line 1178 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 1178 "pragma_c_gen.m"
    return (MR_String) "MercurySuccessIndicator";
#line 1178 "pragma_c_gen.m"
  }
#line 51 "pragma_c_gen.m"
}

#line 46 "pragma_c_gen.m"
MR_String MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_struct_name_4_f_0(
#line 46 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleName_6,
#line 46 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__PredName_7,
#line 46 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__Arity_8,
#line 46 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_9)
#line 46 "pragma_c_gen.m"
{
#line 1173 "pragma_c_gen.m"
  {
#line 1173 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 1173 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__HeadVar__5_5;
#line 1173 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_11_11;
#line 1173 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_12_12;
#line 1173 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_13_13;
#line 1173 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_15_15;
#line 1173 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_16_16;
#line 1173 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_17_17;
#line 1173 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_19_19;
#line 1173 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_20_20;
#line 1173 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_21_21;
#line 1173 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_23_23;
#line 1173 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__V_24_24;

#line 1174 "pragma_c_gen.m"
    {
#line 1174 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_12_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__pragma_c_gen__ModuleName_6);
    }
#line 1175 "pragma_c_gen.m"
    {
#line 1175 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_16_16 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__pragma_c_gen__PredName_7);
    }
#line 1175 "pragma_c_gen.m"
    {
#line 1175 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_20_20 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__Arity_8);
    }
#line 1176 "pragma_c_gen.m"
    {
#line 1176 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_24_24 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__pragma_c_gen__ProcId_9);
    }
#line 1176 "pragma_c_gen.m"
    {
#line 1176 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_23_23 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_24_24);
    }
#line 1175 "pragma_c_gen.m"
    {
#line 1175 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__pragma_c_gen__V_23_23);
    }
#line 1175 "pragma_c_gen.m"
    {
#line 1175 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_20_20, ll_backend__pragma_c_gen__V_21_21);
    }
#line 1175 "pragma_c_gen.m"
    {
#line 1175 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__pragma_c_gen__V_19_19);
    }
#line 1175 "pragma_c_gen.m"
    {
#line 1175 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_16_16, ll_backend__pragma_c_gen__V_17_17);
    }
#line 1174 "pragma_c_gen.m"
    {
#line 1174 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__pragma_c_gen__V_15_15);
    }
#line 1174 "pragma_c_gen.m"
    {
#line 1174 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_12_12, ll_backend__pragma_c_gen__V_13_13);
    }
#line 1174 "pragma_c_gen.m"
    {
#line 1174 "pragma_c_gen.m"
      return ll_backend__pragma_c_gen__HeadVar__5_5 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_save__", ll_backend__pragma_c_gen__V_11_11);
    }
#line 1173 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__HeadVar__5_5;
#line 1173 "pragma_c_gen.m"
  }
#line 46 "pragma_c_gen.m"
}

#line 378 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_12_p_0_3(
#line 378 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg)
#line 378 "pragma_c_gen.m"
{
#line 378 "pragma_c_gen.m"
  {
#line 378 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 378 "pragma_c_gen.m"
    MR_Box ll_backend__pragma_c_gen__closure = ll_backend__pragma_c_gen__closure_arg;

#line 378 "pragma_c_gen.m"
    {
#line 378 "pragma_c_gen.m"
      return ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__378__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 4))));
    }
#line 378 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 378 "pragma_c_gen.m"
  }
#line 378 "pragma_c_gen.m"
}

#line 376 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_12_p_0_2(
#line 376 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg)
#line 376 "pragma_c_gen.m"
{
#line 376 "pragma_c_gen.m"
  {
#line 376 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 376 "pragma_c_gen.m"
    MR_Box ll_backend__pragma_c_gen__closure = ll_backend__pragma_c_gen__closure_arg;

#line 376 "pragma_c_gen.m"
    {
#line 376 "pragma_c_gen.m"
      return ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__376__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 4))));
    }
#line 376 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 376 "pragma_c_gen.m"
  }
#line 376 "pragma_c_gen.m"
}

#line 374 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_12_p_0_1(
#line 374 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg)
#line 374 "pragma_c_gen.m"
{
#line 374 "pragma_c_gen.m"
  {
#line 374 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 374 "pragma_c_gen.m"
    MR_Box ll_backend__pragma_c_gen__closure = ll_backend__pragma_c_gen__closure_arg;

#line 374 "pragma_c_gen.m"
    {
#line 374 "pragma_c_gen.m"
      return ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__374__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 4))));
    }
#line 374 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 374 "pragma_c_gen.m"
  }
#line 374 "pragma_c_gen.m"
}

#line 39 "pragma_c_gen.m"
void MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_12_p_0(
#line 39 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_13,
#line 39 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Attributes_14,
#line 39 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_15,
#line 39 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_16,
#line 39 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_17,
#line 39 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_18,
#line 39 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__MaybeTraceRuntimeCond_19,
#line 39 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PragmaImpl_20,
#line 39 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__GoalInfo_21,
#line 39 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__Code_22,
#line 39 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_28,
#line 39 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_29)
#line 39 "pragma_c_gen.m"
{
#line 364 "pragma_c_gen.m"
  {
#line 364 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 364 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__C_Code_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaImpl_20, (MR_Integer) 0)));
#line 364 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaImpl_20, (MR_Integer) 1)));

#line 372 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__MaybeTraceRuntimeCond_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "pragma_c_gen.m"
      {
#line 369 "pragma_c_gen.m"
        {
#line 369 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_p_0(ll_backend__pragma_c_gen__CodeModel_13, ll_backend__pragma_c_gen__Attributes_14, ll_backend__pragma_c_gen__PredId_15, ll_backend__pragma_c_gen__ProcId_16, ll_backend__pragma_c_gen__Args_17, ll_backend__pragma_c_gen__ExtraArgs_18, ll_backend__pragma_c_gen__C_Code_24, ll_backend__pragma_c_gen__Context_25, ll_backend__pragma_c_gen__GoalInfo_21, (MR_Integer) 1, ll_backend__pragma_c_gen__Code_22, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_28, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_29);
#line 369 "pragma_c_gen.m"
          return;
        }
#line 367 "pragma_c_gen.m"
      }
#line 372 "pragma_c_gen.m"
    else
#line 373 "pragma_c_gen.m"
      {
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_26_71;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TraceRuntimeCond_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeTraceRuntimeCond_19, (MR_Integer) 0)));
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_30_30;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_35_35;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_40_40;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__CondRval_55;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__SuccessLabel_56;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__FailCode_57;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__CondCode_58;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__SuccessLabelCode_59;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_15_60;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_16_61;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_63_63;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_64_64;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_65_65;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_67_67;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_68_68;
#line 373 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_70_70;

#line 374 "pragma_c_gen.m"
        {
#line 374 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 374 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_30_30, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_2[0]));
#line 374 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_30_30, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_12_p_0_1));
#line 374 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 374 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_30_30, 3) = ((MR_Box) (ll_backend__pragma_c_gen__Args_17));
#line 374 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_30_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "pragma_c_gen.m"
        }
#line 374 "pragma_c_gen.m"
        {
#line 374 "pragma_c_gen.m"
          mercury__require__expect_4_p_0(ll_backend__pragma_c_gen__V_30_30, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/12", (MR_String) "args runtime cond");
        }
#line 376 "pragma_c_gen.m"
        {
#line 376 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 376 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_2[0]));
#line 376 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_12_p_0_2));
#line 376 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 376 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 3) = ((MR_Box) (ll_backend__pragma_c_gen__ExtraArgs_18));
#line 376 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "pragma_c_gen.m"
        }
#line 376 "pragma_c_gen.m"
        {
#line 376 "pragma_c_gen.m"
          mercury__require__expect_4_p_0(ll_backend__pragma_c_gen__V_35_35, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/12", (MR_String) "extra args runtime cond");
        }
#line 378 "pragma_c_gen.m"
        {
#line 378 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 378 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_2[1]));
#line 378 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_12_p_0_3));
#line 378 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 378 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 3) = ((MR_Box) (ll_backend__pragma_c_gen__CodeModel_13));
#line 378 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 4) = ((MR_Box) ((MR_Integer) 1));
#line 378 "pragma_c_gen.m"
        }
#line 378 "pragma_c_gen.m"
        {
#line 378 "pragma_c_gen.m"
          mercury__require__expect_4_p_0(ll_backend__pragma_c_gen__V_40_40, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/12", (MR_String) "non-semi runtime cond");
        }
#line 391 "pragma_c_gen.m"
        {
#line 391 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__TraceRuntimeCond_27, &ll_backend__pragma_c_gen__CondRval_55, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_28, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_15_60);
        }
#line 392 "pragma_c_gen.m"
        {
#line 392 "pragma_c_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__pragma_c_gen__SuccessLabel_56, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_15_60, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_16_61);
        }
#line 393 "pragma_c_gen.m"
        {
#line 393 "pragma_c_gen.m"
          ll_backend__code_info__generate_failure_3_p_0(&ll_backend__pragma_c_gen__FailCode_57, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_16_61, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_29);
        }
#line 5680 "ll_backend.pragma_c_gen.c"
        ll_backend__pragma_c_gen__TypeCtorInfo_26_71 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 395 "pragma_c_gen.m"
        {
#line 395 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_65_65, 0) = ((MR_Box) (ll_backend__pragma_c_gen__SuccessLabel_56));
#line 395 "pragma_c_gen.m"
        }
#line 395 "pragma_c_gen.m"
        {
#line 395 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 395 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 395 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_64_64, 1) = ((MR_Box) (ll_backend__pragma_c_gen__CondRval_55));
#line 395 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_64_64, 2) = ((MR_Box) (ll_backend__pragma_c_gen__V_65_65));
#line 395 "pragma_c_gen.m"
        }
#line 395 "pragma_c_gen.m"
        {
#line 395 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_63_63, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_64_64));
#line 395 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_63_63, 1) = ((MR_Box) ((MR_String) "environment variable tests"));
#line 395 "pragma_c_gen.m"
        }
#line 394 "pragma_c_gen.m"
        {
#line 394 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__CondCode_58 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_26_71, ((MR_Box) (ll_backend__pragma_c_gen__V_63_63)));
        }
#line 399 "pragma_c_gen.m"
        {
#line 399 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 399 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_68_68, 1) = ((MR_Box) (ll_backend__pragma_c_gen__SuccessLabel_56));
#line 399 "pragma_c_gen.m"
        }
#line 399 "pragma_c_gen.m"
        {
#line 399 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 399 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_67_67, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_68_68));
#line 399 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_67_67, 1) = ((MR_Box) ((MR_String) "environment variable tests successful"));
#line 399 "pragma_c_gen.m"
        }
#line 398 "pragma_c_gen.m"
        {
#line 398 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__SuccessLabelCode_59 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_26_71, ((MR_Box) (ll_backend__pragma_c_gen__V_67_67)));
        }
#line 402 "pragma_c_gen.m"
        {
#line 402 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_70_70 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_26_71, ll_backend__pragma_c_gen__FailCode_57, ll_backend__pragma_c_gen__SuccessLabelCode_59);
        }
#line 402 "pragma_c_gen.m"
        {
#line 402 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_26_71, ll_backend__pragma_c_gen__CondCode_58, ll_backend__pragma_c_gen__V_70_70);
        }
#line 373 "pragma_c_gen.m"
      }
#line 364 "pragma_c_gen.m"
  }
#line 39 "pragma_c_gen.m"
}

void mercury__ll_backend__pragma_c_gen__init(void)
{
}

void mercury__ll_backend__pragma_c_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__type_ctor_info_c_arg_0);
}

void mercury__ll_backend__pragma_c_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.pragma_c_gen. */
