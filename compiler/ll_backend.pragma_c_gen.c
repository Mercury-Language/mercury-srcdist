/*
** Automatically generated from `pragma_c_gen.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 163 "ll_backend.pragma_c_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 166 "ll_backend.pragma_c_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "ll_backend.pragma_c_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 172 "ll_backend.pragma_c_gen.c"
static const MR_PseudoTypeInfo ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0[5];

#line 175 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDesc ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0;

#line 178 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0[1];

#line 181 "ll_backend.pragma_c_gen.c"
static const MR_DuPtagLayout ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0[1];

#line 184 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_name_ordered_c_arg_0[1];

#line 187 "ll_backend.pragma_c_gen.c"
static const MR_Integer ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__functor_number_map_c_arg_0[1];

#line 190 "ll_backend.pragma_c_gen.c"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001(
#line 193 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_1,
#line 195 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2);

#line 198 "ll_backend.pragma_c_gen.c"
static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001(
#line 201 "ll_backend.pragma_c_gen.c"
  MR_Box * ll_backend__pragma_c_gen__wrapper_arg_1,
#line 203 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2,
#line 205 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_3);

#line 379 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__379__1_2_p_0(
#line 379 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_15,
#line 379 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_49);

#line 377 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__377__1_2_p_0(
#line 377 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_20,
#line 377 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_44);

#line 375 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__375__1_2_p_0(
#line 375 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_19,
#line 375 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_39);

#line 776 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0(
#line 776 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__1_1,
#line 776 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 776 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__3_3);

#line 776 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0(
#line 776 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 776 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2);

#line 1085 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(
#line 1085 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 1085 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1085 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 1085 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
#line 1085 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__5_5,
#line 1085 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6,
#line 1085 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);

#line 1052 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(
#line 1052 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__FloatRegType_1,
#line 1052 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1052 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3,
#line 1052 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_4,
#line 1052 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_5);

#line 992 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(
#line 992 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 992 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2,
#line 992 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 992 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
#line 992 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__5_5,
#line 992 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6,
#line 992 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);

#line 972 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(
#line 972 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 972 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PostDeaths_2,
#line 972 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3,
#line 972 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_4);

#line 945 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(
#line 945 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 945 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Module_2,
#line 945 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 945 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4);

#line 886 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(
#line 886 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 886 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2);

#line 866 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(
#line 866 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 866 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2);

#line 854 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(
#line 854 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 854 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2);

#line 831 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(
#line 831 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 831 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_2,
#line 831 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__LastReg_3,
#line 831 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4);

#line 817 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(
#line 817 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 817 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2,
#line 817 "pragma_c_gen.m"
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_3,
#line 817 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4,
#line 817 "pragma_c_gen.m"
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_5);

#line 810 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(
#line 810 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_5,
#line 810 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
#line 810 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ArgInfos_7,
#line 810 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ExtraCArgs_8);

#line 788 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(
#line 788 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 788 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 788 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3);

#line 736 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(
#line 736 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__C_Code_7,
#line 736 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__MaybeContext_8,
#line 736 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashDefine_9,
#line 736 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashUndef_10,
#line 736 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17,
#line 736 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18);

#line 713 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(
#line 713 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
#line 713 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_7,
#line 713 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_8,
#line 713 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashDef_9,
#line 713 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashUndef_10);

#line 440 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_16,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Attributes_17,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_18,
#line 440 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_19,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_20,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_21,
#line 440 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__C_Code_22,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Context_23,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__GoalInfo_24,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25,
#line 440 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__Code_26,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96,
#line 440 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_98,
#line 440 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99);

#line 408 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(
#line 408 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Expr_5,
#line 408 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__CondRval_6,
#line 408 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19,
#line 408 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);

#line 379 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3(
#line 379 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg);

#line 377 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2(
#line 377 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg);

#line 375 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1(
#line 375 "pragma_c_gen.m"
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 560 "ll_backend.pragma_c_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 568 "ll_backend.pragma_c_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 576 "ll_backend.pragma_c_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 584 "ll_backend.pragma_c_gen.c"
static const MR_PseudoTypeInfo ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_box_policy_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0
};

#line 593 "ll_backend.pragma_c_gen.c"
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

#line 608 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0[1] = {
  &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0
};

#line 613 "ll_backend.pragma_c_gen.c"
static const MR_DuPtagLayout ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0
  }
};

#line 622 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_name_ordered_c_arg_0[1] = {
  &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0
};

#line 627 "ll_backend.pragma_c_gen.c"
static const MR_Integer ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__functor_number_map_c_arg_0[1] = {
  (MR_Integer) 0
};

#line 632 "ll_backend.pragma_c_gen.c"
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

#line 649 "ll_backend.pragma_c_gen.c"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001(
#line 652 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_1,
#line 654 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2)
#line 656 "ll_backend.pragma_c_gen.c"
{
#line 658 "ll_backend.pragma_c_gen.c"
  {
#line 660 "ll_backend.pragma_c_gen.c"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 663 "ll_backend.pragma_c_gen.c"
    {
#line 665 "ll_backend.pragma_c_gen.c"
      ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen____Unify____c_arg_0_0(((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_1), ((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_2));
    }
#line 668 "ll_backend.pragma_c_gen.c"
    return ll_backend__pragma_c_gen__succeeded;
#line 670 "ll_backend.pragma_c_gen.c"
  }
#line 672 "ll_backend.pragma_c_gen.c"
}

#line 675 "ll_backend.pragma_c_gen.c"
static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001(
#line 678 "ll_backend.pragma_c_gen.c"
  MR_Box * ll_backend__pragma_c_gen__wrapper_arg_1,
#line 680 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2,
#line 682 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_3)
#line 684 "ll_backend.pragma_c_gen.c"
{
#line 686 "ll_backend.pragma_c_gen.c"
  {
#line 688 "ll_backend.pragma_c_gen.c"
    MR_Word ll_backend__pragma_c_gen__conv0_HeadVar__1_1;

#line 691 "ll_backend.pragma_c_gen.c"
    {
#line 693 "ll_backend.pragma_c_gen.c"
      ll_backend__pragma_c_gen____Compare____c_arg_0_0(&ll_backend__pragma_c_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_2), ((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_3));
    }
#line 696 "ll_backend.pragma_c_gen.c"
    *ll_backend__pragma_c_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__pragma_c_gen__conv0_HeadVar__1_1));
#line 698 "ll_backend.pragma_c_gen.c"
  }
#line 700 "ll_backend.pragma_c_gen.c"
}

#line 379 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__379__1_2_p_0(
#line 379 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_15,
#line 379 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_49)
#line 379 "pragma_c_gen.m"
{
#line 379 "pragma_c_gen.m"
  {
#line 379 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CodeModel_15 == ll_backend__pragma_c_gen__HeadVar__2_49);

#line 379 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 379 "pragma_c_gen.m"
  }
#line 379 "pragma_c_gen.m"
}

#line 377 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__377__1_2_p_0(
#line 377 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_20,
#line 377 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_44)
#line 377 "pragma_c_gen.m"
{
#line 377 "pragma_c_gen.m"
  {
#line 377 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 377 "pragma_c_gen.m"
    {
#line 377 "pragma_c_gen.m"
      return ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[0], ((MR_Box) (ll_backend__pragma_c_gen__ExtraArgs_20)), ((MR_Box) (ll_backend__pragma_c_gen__HeadVar__2_44)));
    }
#line 377 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 377 "pragma_c_gen.m"
  }
#line 377 "pragma_c_gen.m"
}

#line 375 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__375__1_2_p_0(
#line 375 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_19,
#line 375 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_39)
#line 375 "pragma_c_gen.m"
{
#line 375 "pragma_c_gen.m"
  {
#line 375 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 375 "pragma_c_gen.m"
    {
#line 375 "pragma_c_gen.m"
      return ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[0], ((MR_Box) (ll_backend__pragma_c_gen__Args_19)), ((MR_Box) (ll_backend__pragma_c_gen__HeadVar__2_39)));
    }
#line 375 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 375 "pragma_c_gen.m"
  }
#line 375 "pragma_c_gen.m"
}

#line 776 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0(
#line 776 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__1_1,
#line 776 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 776 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__3_3)
#line 776 "pragma_c_gen.m"
{
#line 776 "pragma_c_gen.m"
  {
#line 776 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 776 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CastX_18 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__2_2;
#line 776 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CastY_19 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__3_3;

#line 776 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CastX_18 == ll_backend__pragma_c_gen__CastY_19);
#line 776 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 800 "ll_backend.pragma_c_gen.c"
      *ll_backend__pragma_c_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 776 "pragma_c_gen.m"
    else
#line 776 "pragma_c_gen.m"
      {
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_14_14;

#line 776 "pragma_c_gen.m"
        {
#line 776 "pragma_c_gen.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[1], &ll_backend__pragma_c_gen__V_14_14, ((MR_Box) (ll_backend__pragma_c_gen__V_4_4)), ((MR_Box) (ll_backend__pragma_c_gen__V_9_9)));
        }
#line 834 "ll_backend.pragma_c_gen.c"
        ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_14_14 == (MR_Integer) 0);
#line 776 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 776 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 776 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_14_14;
#line 776 "pragma_c_gen.m"
        else
#line 776 "pragma_c_gen.m"
          {
#line 776 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_15_15;

#line 776 "pragma_c_gen.m"
            {
#line 776 "pragma_c_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[2], &ll_backend__pragma_c_gen__V_15_15, ((MR_Box) (ll_backend__pragma_c_gen__V_5_5)), ((MR_Box) (ll_backend__pragma_c_gen__V_10_10)));
            }
#line 854 "ll_backend.pragma_c_gen.c"
            ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_15_15 == (MR_Integer) 0);
#line 776 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 776 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 776 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_15_15;
#line 776 "pragma_c_gen.m"
            else
#line 776 "pragma_c_gen.m"
              {
#line 776 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_16_16;

#line 776 "pragma_c_gen.m"
                {
#line 776 "pragma_c_gen.m"
                  parse_tree__prog_data____Compare____mer_type_0_0(&ll_backend__pragma_c_gen__V_16_16, ll_backend__pragma_c_gen__V_6_6, ll_backend__pragma_c_gen__V_11_11);
                }
#line 874 "ll_backend.pragma_c_gen.c"
                ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_16_16 == (MR_Integer) 0);
#line 776 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 776 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 776 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_16_16;
#line 776 "pragma_c_gen.m"
                else
#line 776 "pragma_c_gen.m"
                  {
#line 776 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__V_17_17;
#line 776 "pragma_c_gen.m"
                    MR_Integer ll_backend__pragma_c_gen__V_25_25 = (MR_Integer) ll_backend__pragma_c_gen__V_7_7;
#line 776 "pragma_c_gen.m"
                    MR_Integer ll_backend__pragma_c_gen__V_26_26 = (MR_Integer) ll_backend__pragma_c_gen__V_12_12;

#line 776 "pragma_c_gen.m"
                    {
#line 776 "pragma_c_gen.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__pragma_c_gen__V_17_17, ll_backend__pragma_c_gen__V_25_25, ll_backend__pragma_c_gen__V_26_26);
                    }
#line 898 "ll_backend.pragma_c_gen.c"
                    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_17_17 == (MR_Integer) 0);
#line 776 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 776 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 776 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_17_17;
#line 776 "pragma_c_gen.m"
                    else
#line 776 "pragma_c_gen.m"
                      {
#line 776 "pragma_c_gen.m"
                        hlds__hlds_pred____Compare____arg_info_0_0(ll_backend__pragma_c_gen__HeadVar__1_1, ll_backend__pragma_c_gen__V_8_8, ll_backend__pragma_c_gen__V_13_13);
#line 776 "pragma_c_gen.m"
                        return;
                      }
#line 776 "pragma_c_gen.m"
                  }
#line 776 "pragma_c_gen.m"
              }
#line 776 "pragma_c_gen.m"
          }
#line 776 "pragma_c_gen.m"
      }
#line 776 "pragma_c_gen.m"
  }
#line 776 "pragma_c_gen.m"
}

#line 776 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0(
#line 776 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 776 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2)
#line 776 "pragma_c_gen.m"
{
#line 776 "pragma_c_gen.m"
  {
#line 776 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 776 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CastX_13 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__1_1;
#line 776 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CastY_14 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__2_2;

#line 776 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CastX_13 == ll_backend__pragma_c_gen__CastY_14);
#line 776 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 776 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__succeeded = MR_TRUE;
#line 776 "pragma_c_gen.m"
    else
#line 776 "pragma_c_gen.m"
      {
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TypeInfo_16_16;
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 776 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 4)));

#line 979 "ll_backend.pragma_c_gen.c"
        {
#line 981 "ll_backend.pragma_c_gen.c"
          ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[1], ((MR_Box) (ll_backend__pragma_c_gen__V_3_3)), ((MR_Box) (ll_backend__pragma_c_gen__V_8_8)));
        }
#line 776 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 776 "pragma_c_gen.m"
          {
#line 988 "ll_backend.pragma_c_gen.c"
            ll_backend__pragma_c_gen__TypeInfo_16_16 = (MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[2];
#line 990 "ll_backend.pragma_c_gen.c"
            {
#line 992 "ll_backend.pragma_c_gen.c"
              ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__pragma_c_gen__TypeInfo_16_16, ((MR_Box) (ll_backend__pragma_c_gen__V_4_4)), ((MR_Box) (ll_backend__pragma_c_gen__V_9_9)));
            }
#line 776 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 776 "pragma_c_gen.m"
              {
#line 999 "ll_backend.pragma_c_gen.c"
                {
#line 1001 "ll_backend.pragma_c_gen.c"
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__pragma_c_gen__V_5_5, ll_backend__pragma_c_gen__V_10_10);
                }
#line 776 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 776 "pragma_c_gen.m"
                  {
#line 1008 "ll_backend.pragma_c_gen.c"
                    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_6_6 == ll_backend__pragma_c_gen__V_11_11);
#line 776 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1012 "ll_backend.pragma_c_gen.c"
                      {
#line 1014 "ll_backend.pragma_c_gen.c"
                        return ll_backend__pragma_c_gen__succeeded = hlds__hlds_pred____Unify____arg_info_0_0(ll_backend__pragma_c_gen__V_7_7, ll_backend__pragma_c_gen__V_12_12);
                      }
#line 776 "pragma_c_gen.m"
                  }
#line 776 "pragma_c_gen.m"
              }
#line 776 "pragma_c_gen.m"
          }
#line 776 "pragma_c_gen.m"
      }
#line 776 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 776 "pragma_c_gen.m"
  }
#line 776 "pragma_c_gen.m"
}

#line 1085 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(
#line 1085 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 1085 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1085 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 1085 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
#line 1085 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__5_5,
#line 1085 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6,
#line 1085 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7)
#line 1085 "pragma_c_gen.m"
{
#line 1089 "pragma_c_gen.m"
  {
#line 1089 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 1089 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "pragma_c_gen.m"
      if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "pragma_c_gen.m"
        {
#line 1089 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1089 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6;
#line 1089 "pragma_c_gen.m"
        }
#line 1089 "pragma_c_gen.m"
      else
#line 1118 "pragma_c_gen.m"
        {
#line 1119 "pragma_c_gen.m"
          {
#line 1119 "pragma_c_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/7", (MR_String) "length mismatch");
#line 1119 "pragma_c_gen.m"
            return;
          }
#line 1118 "pragma_c_gen.m"
        }
#line 1089 "pragma_c_gen.m"
    else
#line 1089 "pragma_c_gen.m"
      {
#line 1089 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1089 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 1089 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1116 "pragma_c_gen.m"
          {
#line 1117 "pragma_c_gen.m"
            {
#line 1117 "pragma_c_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/7", (MR_String) "length mismatch");
#line 1117 "pragma_c_gen.m"
              return;
            }
#line 1116 "pragma_c_gen.m"
          }
#line 1089 "pragma_c_gen.m"
        else
#line 1091 "pragma_c_gen.m"
          {
#line 1091 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Reg_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1091 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Regs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1091 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__OutputsTail_21;
#line 1091 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Var_22;
#line 1091 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__MaybeArgName_23;
#line 1091 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__OrigType_24;
#line 1091 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__BoxPolicy_25;
#line 1091 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_36_36;
#line 1091 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37;
#line 1094 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___ArgInfo_26;

#line 1092 "pragma_c_gen.m"
            {
#line 1092 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(ll_backend__pragma_c_gen__V_61_61, ll_backend__pragma_c_gen__Regs_16, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__OutputsTail_21, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_36_36);
            }
#line 1094 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 0)));
#line 1094 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__MaybeArgName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 1)));
#line 1094 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__OrigType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 2)));
#line 1094 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__BoxPolicy_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 3)));
#line 1094 "pragma_c_gen.m"
            ll_backend__pragma_c_gen___ArgInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 4)));
#line 1095 "pragma_c_gen.m"
            {
#line 1095 "pragma_c_gen.m"
              ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__pragma_c_gen__Reg_15, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_36_36, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37);
            }
#line 1096 "pragma_c_gen.m"
            {
#line 1096 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37, ll_backend__pragma_c_gen__Var_22);
            }
#line 1113 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 1097 "pragma_c_gen.m"
              {
#line 1097 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__ModuleInfo_27;
#line 1097 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__MaybeForeign_28;
#line 1097 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeTable_66;
#line 1043 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__MaybeC_71;
#line 1027 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeCtor_67;
#line 1027 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeDefn_68;
#line 1027 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeBody_69;
#line 1027 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_79_79;
#line 1031 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeIL_70;
#line 1031 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeJava_72;
#line 1031 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeCSharp_73;
#line 1031 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeErlang_74;
#line 1181 "ll_backend.pragma_c_gen.c"
                MR_String ll_backend__pragma_c_gen__Name_89;
#line 924 "pragma_c_gen.m"
                MR_Char ll_backend__pragma_c_gen__V_92_92;
#line 924 "pragma_c_gen.m"
                MR_String ll_backend__pragma_c_gen__V_90_90;

#line 1097 "pragma_c_gen.m"
                {
#line 1097 "pragma_c_gen.m"
                  ll_backend__code_loc_dep__set_var_location_4_p_0(ll_backend__pragma_c_gen__Var_22, ll_backend__pragma_c_gen__Reg_15, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);
                }
#line 1098 "pragma_c_gen.m"
                {
#line 1098 "pragma_c_gen.m"
                  ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__HeadVar__5_5, &ll_backend__pragma_c_gen__ModuleInfo_27);
                }
#line 1025 "pragma_c_gen.m"
                {
#line 1025 "pragma_c_gen.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__pragma_c_gen__ModuleInfo_27, &ll_backend__pragma_c_gen__TypeTable_66);
                }
#line 1027 "pragma_c_gen.m"
                {
#line 1027 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__pragma_c_gen__OrigType_24, &ll_backend__pragma_c_gen__TypeCtor_67);
                }
#line 1027 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1027 "pragma_c_gen.m"
                  {
#line 1028 "pragma_c_gen.m"
                    {
#line 1028 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__pragma_c_gen__TypeTable_66, ll_backend__pragma_c_gen__TypeCtor_67, &ll_backend__pragma_c_gen__TypeDefn_68);
                    }
#line 1027 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1027 "pragma_c_gen.m"
                      {
#line 1029 "pragma_c_gen.m"
                        {
#line 1029 "pragma_c_gen.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__pragma_c_gen__TypeDefn_68, &ll_backend__pragma_c_gen__TypeBody_69);
                        }
#line 1030 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__TypeBody_69)) == (MR_mktag((MR_Integer) 0)));
#line 1030 "pragma_c_gen.m"
                        if (ll_backend__pragma_c_gen__succeeded)
#line 1030 "pragma_c_gen.m"
                          {
#line 1030 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__V_79_79 = (MR_Word) MR_body(((MR_Word) ll_backend__pragma_c_gen__TypeBody_69), (MR_Integer) 0);
#line 1031 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeIL_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_79_79, (MR_Integer) 0)));
#line 1031 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__MaybeC_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_79_79, (MR_Integer) 1)));
#line 1031 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeJava_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_79_79, (MR_Integer) 2)));
#line 1031 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeCSharp_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_79_79, (MR_Integer) 3)));
#line 1031 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeErlang_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_79_79, (MR_Integer) 4)));
#line 1031 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__succeeded = MR_TRUE;
#line 1030 "pragma_c_gen.m"
                          }
#line 1027 "pragma_c_gen.m"
                      }
#line 1027 "pragma_c_gen.m"
                  }
#line 1043 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1038 "pragma_c_gen.m"
                  if ((ll_backend__pragma_c_gen__MaybeC_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1039 "pragma_c_gen.m"
                    {
#line 1041 "pragma_c_gen.m"
                      {
#line 1041 "pragma_c_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
#line 1041 "pragma_c_gen.m"
                        return;
                      }
#line 1039 "pragma_c_gen.m"
                    }
#line 1038 "pragma_c_gen.m"
                  else
#line 1035 "pragma_c_gen.m"
                    {
#line 1035 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Data_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeC_71, (MR_Integer) 0)));
#line 1035 "pragma_c_gen.m"
                      MR_String ll_backend__pragma_c_gen__Name_76;
#line 1035 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Assertions_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_75, (MR_Integer) 2)));
#line 1035 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_75, (MR_Integer) 0)));
#line 1035 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_84_84;
#line 1036 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_75, (MR_Integer) 1)));

#line 1036 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__Name_76 = (MR_String) ll_backend__pragma_c_gen__V_83_83;
#line 1037 "pragma_c_gen.m"
                      {
#line 1037 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_84_84, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_76));
#line 1037 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_84_84, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Assertions_78));
#line 1037 "pragma_c_gen.m"
                      }
#line 1037 "pragma_c_gen.m"
                      {
#line 1037 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__MaybeForeign_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeForeign_28, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_84_84));
#line 1037 "pragma_c_gen.m"
                      }
#line 1035 "pragma_c_gen.m"
                    }
#line 1043 "pragma_c_gen.m"
                else
#line 1044 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__MaybeForeign_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 923 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__MaybeArgName_23)) == (MR_mktag((MR_Integer) 1)));
#line 923 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 923 "pragma_c_gen.m"
                  {
#line 923 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__Name_89 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeArgName_23, (MR_Integer) 0)));
#line 924 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__V_92_92 = (MR_Char) 95;
#line 924 "pragma_c_gen.m"
                    {
#line 924 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__succeeded = mercury__string__first_char_3_p_2(ll_backend__pragma_c_gen__Name_89, ll_backend__pragma_c_gen__V_92_92, &ll_backend__pragma_c_gen__V_90_90);
                    }
#line 924 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 923 "pragma_c_gen.m"
                  }
#line 1329 "ll_backend.pragma_c_gen.c"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1331 "ll_backend.pragma_c_gen.c"
                  {
#line 1333 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__VarType_31;
#line 1335 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__IsDummy_32;
#line 1337 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__PragmaCOutput_33;

#line 1104 "pragma_c_gen.m"
                    {
#line 1104 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__VarType_31 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__Var_22);
                    }
#line 1105 "pragma_c_gen.m"
                    {
#line 1105 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__IsDummy_32 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_27, ll_backend__pragma_c_gen__VarType_31);
                    }
#line 1106 "pragma_c_gen.m"
                    {
#line 1106 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__PragmaCOutput_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1106 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Reg_15));
#line 1106 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_31));
#line 1106 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_32));
#line 1106 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_24));
#line 1106 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Name_89));
#line 1106 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_28));
#line 1106 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_25));
#line 1106 "pragma_c_gen.m"
                    }
#line 1108 "pragma_c_gen.m"
                    {
#line 1108 "pragma_c_gen.m"
                      MR_Word base;
#line 1108 "pragma_c_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 1108 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__PragmaCOutput_33));
#line 1108 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OutputsTail_21));
#line 1108 "pragma_c_gen.m"
                    }
#line 1384 "ll_backend.pragma_c_gen.c"
                  }
#line 1386 "ll_backend.pragma_c_gen.c"
                else
#line 1388 "ll_backend.pragma_c_gen.c"
#line 1389 "ll_backend.pragma_c_gen.c"
                  switch (ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3) {
#line 1391 "ll_backend.pragma_c_gen.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "ll_backend.pragma_c_gen.c"
                    case (MR_Integer) 0:
#line 1395 "ll_backend.pragma_c_gen.c"
                      {
#line 1397 "ll_backend.pragma_c_gen.c"
                        MR_String ll_backend__pragma_c_gen__V_94_94;
#line 1399 "ll_backend.pragma_c_gen.c"
                        MR_Integer ll_backend__pragma_c_gen__V_95_95;
#line 1401 "ll_backend.pragma_c_gen.c"
                        MR_String ll_backend__pragma_c_gen__Name_97;
#line 1403 "ll_backend.pragma_c_gen.c"
                        MR_Word ll_backend__pragma_c_gen__VarType_98;
#line 1405 "ll_backend.pragma_c_gen.c"
                        MR_Word ll_backend__pragma_c_gen__IsDummy_99;
#line 1407 "ll_backend.pragma_c_gen.c"
                        MR_Word ll_backend__pragma_c_gen__PragmaCOutput_100;

#line 933 "pragma_c_gen.m"
                        {
#line 933 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__V_95_95 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_22);
                        }
#line 933 "pragma_c_gen.m"
                        {
#line 933 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__V_94_94 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_95_95);
                        }
#line 933 "pragma_c_gen.m"
                        {
#line 933 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__Name_97 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", ll_backend__pragma_c_gen__V_94_94);
                        }
#line 1104 "pragma_c_gen.m"
                        {
#line 1104 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__VarType_98 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__Var_22);
                        }
#line 1105 "pragma_c_gen.m"
                        {
#line 1105 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__IsDummy_99 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_27, ll_backend__pragma_c_gen__VarType_98);
                        }
#line 1106 "pragma_c_gen.m"
                        {
#line 1106 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__PragmaCOutput_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1106 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_100, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Reg_15));
#line 1106 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_100, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_98));
#line 1106 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_100, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_99));
#line 1106 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_100, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_24));
#line 1106 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_100, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Name_97));
#line 1106 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_100, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_28));
#line 1106 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_100, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_25));
#line 1106 "pragma_c_gen.m"
                        }
#line 1108 "pragma_c_gen.m"
                        {
#line 1108 "pragma_c_gen.m"
                          MR_Word base;
#line 1108 "pragma_c_gen.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "pragma_c_gen.m"
                          *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 1108 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__PragmaCOutput_100));
#line 1108 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OutputsTail_21));
#line 1108 "pragma_c_gen.m"
                        }
#line 1469 "ll_backend.pragma_c_gen.c"
                      }
#line 1471 "ll_backend.pragma_c_gen.c"
                      break;
#line 1473 "ll_backend.pragma_c_gen.c"
                    case (MR_Integer) 1:
#line 1110 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__4_4 = ll_backend__pragma_c_gen__OutputsTail_21;
#line 1477 "ll_backend.pragma_c_gen.c"
                      break;
#line 1479 "ll_backend.pragma_c_gen.c"
                  }
#line 1097 "pragma_c_gen.m"
              }
#line 1113 "pragma_c_gen.m"
            else
#line 1114 "pragma_c_gen.m"
              {
#line 1114 "pragma_c_gen.m"
                *ll_backend__pragma_c_gen__HeadVar__4_4 = ll_backend__pragma_c_gen__OutputsTail_21;
#line 1114 "pragma_c_gen.m"
                *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37;
#line 1114 "pragma_c_gen.m"
              }
#line 1091 "pragma_c_gen.m"
          }
#line 1089 "pragma_c_gen.m"
      }
#line 1089 "pragma_c_gen.m"
  }
#line 1085 "pragma_c_gen.m"
}

#line 1052 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(
#line 1052 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__FloatRegType_1,
#line 1052 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1052 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3,
#line 1052 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_4,
#line 1052 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_5)
#line 1052 "pragma_c_gen.m"
{
#line 1056 "pragma_c_gen.m"
  {
#line 1056 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 1056 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1056 "pragma_c_gen.m"
      {
#line 1056 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1056 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_5 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_4;
#line 1056 "pragma_c_gen.m"
      }
#line 1056 "pragma_c_gen.m"
    else
#line 1057 "pragma_c_gen.m"
      {
#line 1057 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1057 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1057 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Reg_13;
#line 1057 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Regs_14;
#line 1057 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 0)));
#line 1057 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__VarType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 2)));
#line 1057 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BoxPolicy_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 3)));
#line 1057 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__RegType_21;
#line 1057 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_24_24;
#line 1058 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 1)));
#line 1058 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 4)));

#line 1068 "pragma_c_gen.m"
#line 1068 "pragma_c_gen.m"
        switch (ll_backend__pragma_c_gen__BoxPolicy_19) {
#line 1068 "pragma_c_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1068 "pragma_c_gen.m"
          case (MR_Integer) 1:
#line 1076 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__RegType_21 = (MR_Integer) 0;
#line 1068 "pragma_c_gen.m"
            break;
#line 1068 "pragma_c_gen.m"
          case (MR_Integer) 0:
#line 1071 "pragma_c_gen.m"
            {
#line 1069 "pragma_c_gen.m"
              MR_Word ll_backend__pragma_c_gen__V_30_30;

#line 1069 "pragma_c_gen.m"
              {
#line 1069 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__V_30_30 = parse_tree__builtin_lib_types__float_type_0_f_0();
              }
#line 1069 "pragma_c_gen.m"
              {
#line 1069 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__pragma_c_gen__VarType_18, ll_backend__pragma_c_gen__V_30_30);
              }
#line 1071 "pragma_c_gen.m"
              if (ll_backend__pragma_c_gen__succeeded)
#line 1070 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__RegType_21 = ll_backend__pragma_c_gen__FloatRegType_1;
#line 1071 "pragma_c_gen.m"
              else
#line 1072 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__RegType_21 = (MR_Integer) 0;
#line 1071 "pragma_c_gen.m"
            }
#line 1068 "pragma_c_gen.m"
            break;
#line 1068 "pragma_c_gen.m"
        }
#line 1060 "pragma_c_gen.m"
        {
#line 1060 "pragma_c_gen.m"
          ll_backend__code_loc_dep__acquire_reg_for_var_5_p_0(ll_backend__pragma_c_gen__Var_16, ll_backend__pragma_c_gen__RegType_21, &ll_backend__pragma_c_gen__Reg_13, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_4, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_24_24);
        }
#line 1061 "pragma_c_gen.m"
        {
#line 1061 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(ll_backend__pragma_c_gen__FloatRegType_1, ll_backend__pragma_c_gen__Args_12, &ll_backend__pragma_c_gen__Regs_14, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_24_24, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_5);
        }
#line 1057 "pragma_c_gen.m"
        {
#line 1057 "pragma_c_gen.m"
          MR_Word base;
#line 1057 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__3_3 = base;
#line 1057 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Reg_13));
#line 1057 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Regs_14));
#line 1057 "pragma_c_gen.m"
        }
#line 1057 "pragma_c_gen.m"
      }
#line 1056 "pragma_c_gen.m"
  }
#line 1052 "pragma_c_gen.m"
}

#line 992 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(
#line 992 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 992 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2,
#line 992 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 992 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
#line 992 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__5_5,
#line 992 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6,
#line 992 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7)
#line 992 "pragma_c_gen.m"
{
#line 996 "pragma_c_gen.m"
  while (MR_TRUE)
#line 996 "pragma_c_gen.m"
    {
#line 996 "pragma_c_gen.m"
      /* tailcall optimized into a loop */
#line 996 "pragma_c_gen.m"
      {
#line 996 "pragma_c_gen.m"
        MR_bool ll_backend__pragma_c_gen__succeeded;

#line 996 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "pragma_c_gen.m"
          {
#line 996 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 996 "pragma_c_gen.m"
            {
#line 996 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 996 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6;
#line 996 "pragma_c_gen.m"
          }
#line 996 "pragma_c_gen.m"
        else
#line 998 "pragma_c_gen.m"
          {
#line 998 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 998 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 998 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 0)));
#line 998 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__MaybeArgName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 1)));
#line 998 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__OrigType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 2)));
#line 998 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__BoxPolicy_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 3)));
#line 999 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___ArgInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 4)));
#line 1695 "ll_backend.pragma_c_gen.c"
            MR_String ll_backend__pragma_c_gen__Name_47;
#line 924 "pragma_c_gen.m"
            MR_Char ll_backend__pragma_c_gen__V_50_50;
#line 924 "pragma_c_gen.m"
            MR_String ll_backend__pragma_c_gen__V_48_48;

#line 923 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__MaybeArgName_21)) == (MR_mktag((MR_Integer) 1)));
#line 923 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 923 "pragma_c_gen.m"
              {
#line 923 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__Name_47 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeArgName_21, (MR_Integer) 0)));
#line 924 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__V_50_50 = (MR_Char) 95;
#line 924 "pragma_c_gen.m"
                {
#line 924 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__succeeded = mercury__string__first_char_3_p_2(ll_backend__pragma_c_gen__Name_47, ll_backend__pragma_c_gen__V_50_50, &ll_backend__pragma_c_gen__V_48_48);
                }
#line 924 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 923 "pragma_c_gen.m"
              }
#line 1721 "ll_backend.pragma_c_gen.c"
            if (ll_backend__pragma_c_gen__succeeded)
#line 1723 "ll_backend.pragma_c_gen.c"
              {
#line 1725 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__VarType_27;
#line 1727 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__FirstCode_28;
#line 1729 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Rval_29;
#line 1731 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__ModuleInfo_30;
#line 1733 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__MaybeForeign_31;
#line 1735 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__IsDummy_32;
#line 1737 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Input_33;
#line 1739 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Inputs1_34;
#line 1741 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__RestCode_35;
#line 1743 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_39;
#line 1745 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__TypeTable_58;
#line 1043 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__MaybeC_63;
#line 1027 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeCtor_59;
#line 1027 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeDefn_60;
#line 1027 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeBody_61;
#line 1027 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_71_71;
#line 1031 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeIL_62;
#line 1031 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeJava_64;
#line 1031 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeCSharp_65;
#line 1031 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeErlang_66;

#line 1003 "pragma_c_gen.m"
                {
#line 1003 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__VarType_27 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__Var_20);
                }
#line 1004 "pragma_c_gen.m"
                {
#line 1004 "pragma_c_gen.m"
                  ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__pragma_c_gen__Var_20, &ll_backend__pragma_c_gen__FirstCode_28, &ll_backend__pragma_c_gen__Rval_29, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_39);
                }
#line 1005 "pragma_c_gen.m"
                {
#line 1005 "pragma_c_gen.m"
                  ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__HeadVar__5_5, &ll_backend__pragma_c_gen__ModuleInfo_30);
                }
#line 1025 "pragma_c_gen.m"
                {
#line 1025 "pragma_c_gen.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__pragma_c_gen__ModuleInfo_30, &ll_backend__pragma_c_gen__TypeTable_58);
                }
#line 1027 "pragma_c_gen.m"
                {
#line 1027 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__pragma_c_gen__OrigType_22, &ll_backend__pragma_c_gen__TypeCtor_59);
                }
#line 1027 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1027 "pragma_c_gen.m"
                  {
#line 1028 "pragma_c_gen.m"
                    {
#line 1028 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__pragma_c_gen__TypeTable_58, ll_backend__pragma_c_gen__TypeCtor_59, &ll_backend__pragma_c_gen__TypeDefn_60);
                    }
#line 1027 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1027 "pragma_c_gen.m"
                      {
#line 1029 "pragma_c_gen.m"
                        {
#line 1029 "pragma_c_gen.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__pragma_c_gen__TypeDefn_60, &ll_backend__pragma_c_gen__TypeBody_61);
                        }
#line 1030 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__TypeBody_61)) == (MR_mktag((MR_Integer) 0)));
#line 1030 "pragma_c_gen.m"
                        if (ll_backend__pragma_c_gen__succeeded)
#line 1030 "pragma_c_gen.m"
                          {
#line 1030 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__V_71_71 = (MR_Word) MR_body(((MR_Word) ll_backend__pragma_c_gen__TypeBody_61), (MR_Integer) 0);
#line 1031 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeIL_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_71_71, (MR_Integer) 0)));
#line 1031 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__MaybeC_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_71_71, (MR_Integer) 1)));
#line 1031 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeJava_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_71_71, (MR_Integer) 2)));
#line 1031 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeCSharp_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_71_71, (MR_Integer) 3)));
#line 1031 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeErlang_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_71_71, (MR_Integer) 4)));
#line 1031 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__succeeded = MR_TRUE;
#line 1030 "pragma_c_gen.m"
                          }
#line 1027 "pragma_c_gen.m"
                      }
#line 1027 "pragma_c_gen.m"
                  }
#line 1043 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1038 "pragma_c_gen.m"
                  if ((ll_backend__pragma_c_gen__MaybeC_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1039 "pragma_c_gen.m"
                    {
#line 1041 "pragma_c_gen.m"
                      {
#line 1041 "pragma_c_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
#line 1041 "pragma_c_gen.m"
                        return;
                      }
#line 1039 "pragma_c_gen.m"
                    }
#line 1038 "pragma_c_gen.m"
                  else
#line 1035 "pragma_c_gen.m"
                    {
#line 1035 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Data_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeC_63, (MR_Integer) 0)));
#line 1035 "pragma_c_gen.m"
                      MR_String ll_backend__pragma_c_gen__Name_68;
#line 1035 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Assertions_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_67, (MR_Integer) 2)));
#line 1035 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_67, (MR_Integer) 0)));
#line 1035 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_76_76;
#line 1036 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_67, (MR_Integer) 1)));

#line 1036 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__Name_68 = (MR_String) ll_backend__pragma_c_gen__V_75_75;
#line 1037 "pragma_c_gen.m"
                      {
#line 1037 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_76_76, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_68));
#line 1037 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_76_76, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Assertions_70));
#line 1037 "pragma_c_gen.m"
                      }
#line 1037 "pragma_c_gen.m"
                      {
#line 1037 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__MaybeForeign_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeForeign_31, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_76_76));
#line 1037 "pragma_c_gen.m"
                      }
#line 1035 "pragma_c_gen.m"
                    }
#line 1043 "pragma_c_gen.m"
                else
#line 1044 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__MaybeForeign_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "pragma_c_gen.m"
                {
#line 1007 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__IsDummy_32 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_30, ll_backend__pragma_c_gen__VarType_27);
                }
#line 1008 "pragma_c_gen.m"
                {
#line 1008 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__Input_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_47));
#line 1008 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_27));
#line 1008 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_32));
#line 1008 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_22));
#line 1008 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Rval_29));
#line 1008 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_31));
#line 1008 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_23));
#line 1008 "pragma_c_gen.m"
                }
#line 1010 "pragma_c_gen.m"
                {
#line 1010 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(ll_backend__pragma_c_gen__Args_14, &ll_backend__pragma_c_gen__Inputs1_34, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__RestCode_35, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_39, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);
                }
#line 1012 "pragma_c_gen.m"
                {
#line 1012 "pragma_c_gen.m"
                  MR_Word base;
#line 1012 "pragma_c_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 1012 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Input_33));
#line 1012 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Inputs1_34));
#line 1012 "pragma_c_gen.m"
                }
#line 1013 "pragma_c_gen.m"
                {
#line 1013 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__pragma_c_gen__FirstCode_28, ll_backend__pragma_c_gen__RestCode_35);
                }
#line 1942 "ll_backend.pragma_c_gen.c"
              }
#line 1944 "ll_backend.pragma_c_gen.c"
            else
#line 1946 "ll_backend.pragma_c_gen.c"
#line 1947 "ll_backend.pragma_c_gen.c"
              switch (ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3) {
#line 1949 "ll_backend.pragma_c_gen.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1951 "ll_backend.pragma_c_gen.c"
                case (MR_Integer) 0:
#line 1953 "ll_backend.pragma_c_gen.c"
                  {
#line 1955 "ll_backend.pragma_c_gen.c"
                    MR_String ll_backend__pragma_c_gen__V_52_52;
#line 1957 "ll_backend.pragma_c_gen.c"
                    MR_Integer ll_backend__pragma_c_gen__V_53_53;
#line 1959 "ll_backend.pragma_c_gen.c"
                    MR_String ll_backend__pragma_c_gen__Name_126;
#line 1961 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__VarType_127;
#line 1963 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__FirstCode_128;
#line 1965 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__Rval_129;
#line 1967 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__ModuleInfo_130;
#line 1969 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__MaybeForeign_131;
#line 1971 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__IsDummy_132;
#line 1973 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__Input_133;
#line 1975 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__Inputs1_134;
#line 1977 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__RestCode_135;
#line 1979 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_136;
#line 1981 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__TypeTable_138;
#line 1043 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__MaybeC_112;
#line 1027 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__TypeCtor_81;
#line 1027 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__TypeDefn_82;
#line 1027 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__TypeBody_83;
#line 1027 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__V_88_88;
#line 1031 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen___MaybeIL_77;
#line 1031 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen___MaybeJava_78;
#line 1031 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen___MaybeCSharp_79;
#line 1031 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen___MaybeErlang_80;

#line 933 "pragma_c_gen.m"
                    {
#line 933 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__V_53_53 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_20);
                    }
#line 933 "pragma_c_gen.m"
                    {
#line 933 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__V_52_52 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_53_53);
                    }
#line 933 "pragma_c_gen.m"
                    {
#line 933 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__Name_126 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", ll_backend__pragma_c_gen__V_52_52);
                    }
#line 1003 "pragma_c_gen.m"
                    {
#line 1003 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__VarType_127 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__Var_20);
                    }
#line 1004 "pragma_c_gen.m"
                    {
#line 1004 "pragma_c_gen.m"
                      ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__pragma_c_gen__Var_20, &ll_backend__pragma_c_gen__FirstCode_128, &ll_backend__pragma_c_gen__Rval_129, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_136);
                    }
#line 1005 "pragma_c_gen.m"
                    {
#line 1005 "pragma_c_gen.m"
                      ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__HeadVar__5_5, &ll_backend__pragma_c_gen__ModuleInfo_130);
                    }
#line 1025 "pragma_c_gen.m"
                    {
#line 1025 "pragma_c_gen.m"
                      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__pragma_c_gen__ModuleInfo_130, &ll_backend__pragma_c_gen__TypeTable_138);
                    }
#line 1027 "pragma_c_gen.m"
                    {
#line 1027 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__pragma_c_gen__OrigType_22, &ll_backend__pragma_c_gen__TypeCtor_81);
                    }
#line 1027 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1027 "pragma_c_gen.m"
                      {
#line 1028 "pragma_c_gen.m"
                        {
#line 1028 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__pragma_c_gen__TypeTable_138, ll_backend__pragma_c_gen__TypeCtor_81, &ll_backend__pragma_c_gen__TypeDefn_82);
                        }
#line 1027 "pragma_c_gen.m"
                        if (ll_backend__pragma_c_gen__succeeded)
#line 1027 "pragma_c_gen.m"
                          {
#line 1029 "pragma_c_gen.m"
                            {
#line 1029 "pragma_c_gen.m"
                              hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__pragma_c_gen__TypeDefn_82, &ll_backend__pragma_c_gen__TypeBody_83);
                            }
#line 1030 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__TypeBody_83)) == (MR_mktag((MR_Integer) 0)));
#line 1030 "pragma_c_gen.m"
                            if (ll_backend__pragma_c_gen__succeeded)
#line 1030 "pragma_c_gen.m"
                              {
#line 1030 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen__V_88_88 = (MR_Word) MR_body(((MR_Word) ll_backend__pragma_c_gen__TypeBody_83), (MR_Integer) 0);
#line 1031 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen___MaybeIL_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_88_88, (MR_Integer) 0)));
#line 1031 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen__MaybeC_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_88_88, (MR_Integer) 1)));
#line 1031 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen___MaybeJava_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_88_88, (MR_Integer) 2)));
#line 1031 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen___MaybeCSharp_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_88_88, (MR_Integer) 3)));
#line 1031 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen___MaybeErlang_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_88_88, (MR_Integer) 4)));
#line 1031 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen__succeeded = MR_TRUE;
#line 1030 "pragma_c_gen.m"
                              }
#line 1027 "pragma_c_gen.m"
                          }
#line 1027 "pragma_c_gen.m"
                      }
#line 1043 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1038 "pragma_c_gen.m"
                      if ((ll_backend__pragma_c_gen__MaybeC_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1039 "pragma_c_gen.m"
                        {
#line 1041 "pragma_c_gen.m"
                          {
#line 1041 "pragma_c_gen.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
#line 1041 "pragma_c_gen.m"
                            return;
                          }
#line 1039 "pragma_c_gen.m"
                        }
#line 1038 "pragma_c_gen.m"
                      else
#line 1035 "pragma_c_gen.m"
                        {
#line 1035 "pragma_c_gen.m"
                          MR_Word ll_backend__pragma_c_gen__Data_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeC_112, (MR_Integer) 0)));
#line 1035 "pragma_c_gen.m"
                          MR_String ll_backend__pragma_c_gen__Name_94;
#line 1035 "pragma_c_gen.m"
                          MR_Word ll_backend__pragma_c_gen__Assertions_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_93, (MR_Integer) 2)));
#line 1035 "pragma_c_gen.m"
                          MR_Word ll_backend__pragma_c_gen__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_93, (MR_Integer) 0)));
#line 1035 "pragma_c_gen.m"
                          MR_Word ll_backend__pragma_c_gen__V_98_98;
#line 1036 "pragma_c_gen.m"
                          MR_Word ll_backend__pragma_c_gen__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_93, (MR_Integer) 1)));

#line 1036 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__Name_94 = (MR_String) ll_backend__pragma_c_gen__V_97_97;
#line 1037 "pragma_c_gen.m"
                          {
#line 1037 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "pragma_c_gen.m"
                            MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_98_98, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_94));
#line 1037 "pragma_c_gen.m"
                            MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_98_98, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Assertions_96));
#line 1037 "pragma_c_gen.m"
                          }
#line 1037 "pragma_c_gen.m"
                          {
#line 1037 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__MaybeForeign_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "pragma_c_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeForeign_131, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_98_98));
#line 1037 "pragma_c_gen.m"
                          }
#line 1035 "pragma_c_gen.m"
                        }
#line 1043 "pragma_c_gen.m"
                    else
#line 1044 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__MaybeForeign_131 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "pragma_c_gen.m"
                    {
#line 1007 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__IsDummy_132 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_130, ll_backend__pragma_c_gen__VarType_127);
                    }
#line 1008 "pragma_c_gen.m"
                    {
#line 1008 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__Input_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_133, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_126));
#line 1008 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_133, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_127));
#line 1008 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_133, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_132));
#line 1008 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_133, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_22));
#line 1008 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_133, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Rval_129));
#line 1008 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_133, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_131));
#line 1008 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_133, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_23));
#line 1008 "pragma_c_gen.m"
                    }
#line 1010 "pragma_c_gen.m"
                    {
#line 1010 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(ll_backend__pragma_c_gen__Args_14, &ll_backend__pragma_c_gen__Inputs1_134, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__RestCode_135, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_136, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);
                    }
#line 1012 "pragma_c_gen.m"
                    {
#line 1012 "pragma_c_gen.m"
                      MR_Word base;
#line 1012 "pragma_c_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 1012 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Input_133));
#line 1012 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Inputs1_134));
#line 1012 "pragma_c_gen.m"
                    }
#line 1013 "pragma_c_gen.m"
                    {
#line 1013 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__pragma_c_gen__FirstCode_128, ll_backend__pragma_c_gen__RestCode_135);
                    }
#line 2193 "ll_backend.pragma_c_gen.c"
                  }
#line 2195 "ll_backend.pragma_c_gen.c"
                  break;
#line 2197 "ll_backend.pragma_c_gen.c"
                case (MR_Integer) 1:
#line 1017 "pragma_c_gen.m"
                  {
#line 1017 "pragma_c_gen.m"
                    /* direct tailcall eliminated */
#line 1017 "pragma_c_gen.m"
                    {
#line 1017 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1 = ll_backend__pragma_c_gen__Args_14;

#line 1017 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1;
#line 1017 "pragma_c_gen.m"
                    }
#line 1017 "pragma_c_gen.m"
                    continue;
#line 1017 "pragma_c_gen.m"
                  }
#line 2216 "ll_backend.pragma_c_gen.c"
                  break;
#line 2218 "ll_backend.pragma_c_gen.c"
              }
#line 998 "pragma_c_gen.m"
          }
#line 996 "pragma_c_gen.m"
      }
#line 996 "pragma_c_gen.m"
      break;
#line 996 "pragma_c_gen.m"
    }
#line 992 "pragma_c_gen.m"
}

#line 972 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(
#line 972 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 972 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PostDeaths_2,
#line 972 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3,
#line 972 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_4)
#line 972 "pragma_c_gen.m"
{
#line 975 "pragma_c_gen.m"
  while (MR_TRUE)
#line 975 "pragma_c_gen.m"
    {
#line 975 "pragma_c_gen.m"
      /* tailcall optimized into a loop */
#line 975 "pragma_c_gen.m"
      {
#line 975 "pragma_c_gen.m"
        MR_bool ll_backend__pragma_c_gen__succeeded;

#line 975 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 975 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_4 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3;
#line 975 "pragma_c_gen.m"
        else
#line 976 "pragma_c_gen.m"
          {
#line 976 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 976 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 976 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 0)));
#line 976 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20;
#line 977 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___MaybeName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 1)));
#line 977 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 2)));
#line 977 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 3)));
#line 977 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___ArgInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 4)));

#line 978 "pragma_c_gen.m"
            {
#line 978 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__PostDeaths_2, ll_backend__pragma_c_gen__Var_13);
            }
#line 980 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 979 "pragma_c_gen.m"
              {
#line 979 "pragma_c_gen.m"
                {
#line 979 "pragma_c_gen.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_13, ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3, &ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20);
                }
#line 979 "pragma_c_gen.m"
              }
#line 980 "pragma_c_gen.m"
            else
#line 980 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3;
#line 983 "pragma_c_gen.m"
            /* direct tailcall eliminated */
#line 983 "pragma_c_gen.m"
            {
#line 983 "pragma_c_gen.m"
              MR_Word ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1 = ll_backend__pragma_c_gen__Args_10;
#line 983 "pragma_c_gen.m"
              MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0__tmp_copy_3 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20;

#line 983 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0__tmp_copy_3;
#line 983 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1;
#line 983 "pragma_c_gen.m"
            }
#line 983 "pragma_c_gen.m"
            continue;
#line 976 "pragma_c_gen.m"
          }
#line 975 "pragma_c_gen.m"
      }
#line 975 "pragma_c_gen.m"
      break;
#line 975 "pragma_c_gen.m"
    }
#line 972 "pragma_c_gen.m"
}

#line 945 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(
#line 945 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 945 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Module_2,
#line 945 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 945 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4)
#line 945 "pragma_c_gen.m"
{
#line 948 "pragma_c_gen.m"
  {
#line 948 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 948 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 948 "pragma_c_gen.m"
    else
#line 949 "pragma_c_gen.m"
      {
#line 949 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 949 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 949 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__DeclsTail_12;
#line 949 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Var_13;
#line 949 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__MaybeArgName_14;
#line 949 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__OrigType_15;
#line 949 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BoxPolicy_16;
#line 951 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen___ArgInfo_17;
#line 2370 "ll_backend.pragma_c_gen.c"
        MR_String ll_backend__pragma_c_gen__Name_27;
#line 924 "pragma_c_gen.m"
        MR_Char ll_backend__pragma_c_gen__V_30_30;
#line 924 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_28_28;

#line 950 "pragma_c_gen.m"
        {
#line 950 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(ll_backend__pragma_c_gen__Args_8, ll_backend__pragma_c_gen__Module_2, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__DeclsTail_12);
        }
#line 951 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 0)));
#line 951 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__MaybeArgName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 1)));
#line 951 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 2)));
#line 951 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 3)));
#line 951 "pragma_c_gen.m"
        ll_backend__pragma_c_gen___ArgInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 4)));
#line 923 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__MaybeArgName_14)) == (MR_mktag((MR_Integer) 1)));
#line 923 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 923 "pragma_c_gen.m"
          {
#line 923 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeArgName_14, (MR_Integer) 0)));
#line 924 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_30_30 = (MR_Char) 95;
#line 924 "pragma_c_gen.m"
            {
#line 924 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__succeeded = mercury__string__first_char_3_p_2(ll_backend__pragma_c_gen__Name_27, ll_backend__pragma_c_gen__V_30_30, &ll_backend__pragma_c_gen__V_28_28);
            }
#line 924 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 923 "pragma_c_gen.m"
          }
#line 2411 "ll_backend.pragma_c_gen.c"
        if (ll_backend__pragma_c_gen__succeeded)
#line 2413 "ll_backend.pragma_c_gen.c"
          {
#line 2415 "ll_backend.pragma_c_gen.c"
            MR_String ll_backend__pragma_c_gen__OrigTypeString_20;
#line 2417 "ll_backend.pragma_c_gen.c"
            MR_Word ll_backend__pragma_c_gen__Decl_21;

#line 959 "pragma_c_gen.m"
#line 959 "pragma_c_gen.m"
            switch (ll_backend__pragma_c_gen__BoxPolicy_16) {
#line 959 "pragma_c_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 959 "pragma_c_gen.m"
              case (MR_Integer) 1:
#line 961 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__OrigTypeString_20 = (MR_String) "MR_Word";
#line 959 "pragma_c_gen.m"
                break;
#line 959 "pragma_c_gen.m"
              case (MR_Integer) 0:
#line 956 "pragma_c_gen.m"
                {
#line 957 "pragma_c_gen.m"
                  {
#line 957 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__OrigTypeString_20 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ll_backend__pragma_c_gen__Module_2, (MR_Integer) 0, ll_backend__pragma_c_gen__OrigType_15);
                  }
#line 956 "pragma_c_gen.m"
                }
#line 959 "pragma_c_gen.m"
                break;
#line 959 "pragma_c_gen.m"
            }
#line 963 "pragma_c_gen.m"
            {
#line 963 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__Decl_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 963 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_21, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_15));
#line 963 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_21, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OrigTypeString_20));
#line 963 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_21, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Name_27));
#line 963 "pragma_c_gen.m"
            }
#line 964 "pragma_c_gen.m"
            {
#line 964 "pragma_c_gen.m"
              MR_Word base;
#line 964 "pragma_c_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 964 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Decl_21));
#line 964 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__DeclsTail_12));
#line 964 "pragma_c_gen.m"
            }
#line 2472 "ll_backend.pragma_c_gen.c"
          }
#line 2474 "ll_backend.pragma_c_gen.c"
        else
#line 2476 "ll_backend.pragma_c_gen.c"
#line 2477 "ll_backend.pragma_c_gen.c"
          switch (ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3) {
#line 2479 "ll_backend.pragma_c_gen.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2481 "ll_backend.pragma_c_gen.c"
            case (MR_Integer) 0:
#line 2483 "ll_backend.pragma_c_gen.c"
              {
#line 2485 "ll_backend.pragma_c_gen.c"
                MR_String ll_backend__pragma_c_gen__V_32_32;
#line 2487 "ll_backend.pragma_c_gen.c"
                MR_Integer ll_backend__pragma_c_gen__V_33_33;
#line 2489 "ll_backend.pragma_c_gen.c"
                MR_String ll_backend__pragma_c_gen__Name_37;
#line 2491 "ll_backend.pragma_c_gen.c"
                MR_String ll_backend__pragma_c_gen__OrigTypeString_38;
#line 2493 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Decl_39;

#line 933 "pragma_c_gen.m"
                {
#line 933 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__V_33_33 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_13);
                }
#line 933 "pragma_c_gen.m"
                {
#line 933 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_33_33);
                }
#line 933 "pragma_c_gen.m"
                {
#line 933 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__Name_37 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", ll_backend__pragma_c_gen__V_32_32);
                }
#line 959 "pragma_c_gen.m"
#line 959 "pragma_c_gen.m"
                switch (ll_backend__pragma_c_gen__BoxPolicy_16) {
#line 959 "pragma_c_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 959 "pragma_c_gen.m"
                  case (MR_Integer) 1:
#line 961 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__OrigTypeString_38 = (MR_String) "MR_Word";
#line 959 "pragma_c_gen.m"
                    break;
#line 959 "pragma_c_gen.m"
                  case (MR_Integer) 0:
#line 956 "pragma_c_gen.m"
                    {
#line 957 "pragma_c_gen.m"
                      {
#line 957 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__OrigTypeString_38 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ll_backend__pragma_c_gen__Module_2, (MR_Integer) 0, ll_backend__pragma_c_gen__OrigType_15);
                      }
#line 956 "pragma_c_gen.m"
                    }
#line 959 "pragma_c_gen.m"
                    break;
#line 959 "pragma_c_gen.m"
                }
#line 963 "pragma_c_gen.m"
                {
#line 963 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__Decl_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 963 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_39, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_15));
#line 963 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_39, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OrigTypeString_38));
#line 963 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_39, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Name_37));
#line 963 "pragma_c_gen.m"
                }
#line 964 "pragma_c_gen.m"
                {
#line 964 "pragma_c_gen.m"
                  MR_Word base;
#line 964 "pragma_c_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 964 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Decl_39));
#line 964 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__DeclsTail_12));
#line 964 "pragma_c_gen.m"
                }
#line 2563 "ll_backend.pragma_c_gen.c"
              }
#line 2565 "ll_backend.pragma_c_gen.c"
              break;
#line 2567 "ll_backend.pragma_c_gen.c"
            case (MR_Integer) 1:
#line 967 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__4_4 = ll_backend__pragma_c_gen__DeclsTail_12;
#line 2571 "ll_backend.pragma_c_gen.c"
              break;
#line 2573 "ll_backend.pragma_c_gen.c"
          }
#line 949 "pragma_c_gen.m"
      }
#line 948 "pragma_c_gen.m"
  }
#line 945 "pragma_c_gen.m"
}

#line 886 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(
#line 886 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 886 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2)
#line 886 "pragma_c_gen.m"
{
#line 888 "pragma_c_gen.m"
  {
#line 888 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 888 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 888 "pragma_c_gen.m"
    else
#line 889 "pragma_c_gen.m"
      {
#line 889 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 889 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 889 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__InTail_6;
#line 889 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ArgInfo_11;
#line 889 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Mode_13;
#line 891 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7;
#line 891 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8;
#line 891 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9;
#line 891 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10;
#line 892 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen___Loc_12;

#line 890 "pragma_c_gen.m"
        {
#line 890 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(ll_backend__pragma_c_gen__Rest_4, &ll_backend__pragma_c_gen__InTail_6);
        }
#line 891 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 0)));
#line 891 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 1)));
#line 891 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 2)));
#line 891 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 3)));
#line 891 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__ArgInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 4)));
#line 892 "pragma_c_gen.m"
        ll_backend__pragma_c_gen___Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 0)));
#line 892 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 1)));
#line 896 "pragma_c_gen.m"
#line 896 "pragma_c_gen.m"
        switch (ll_backend__pragma_c_gen__Mode_13) {
#line 896 "pragma_c_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 896 "pragma_c_gen.m"
          case (MR_Integer) 0:
#line 895 "pragma_c_gen.m"
            {
#line 895 "pragma_c_gen.m"
              MR_Word base;
#line 895 "pragma_c_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 895 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Arg_3));
#line 895 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__InTail_6));
#line 895 "pragma_c_gen.m"
            }
#line 896 "pragma_c_gen.m"
            break;
#line 896 "pragma_c_gen.m"
          case (MR_Integer) 1:
#line 896 "pragma_c_gen.m"
          case (MR_Integer) 2:
#line 900 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__HeadVar__2_2 = ll_backend__pragma_c_gen__InTail_6;
#line 896 "pragma_c_gen.m"
            break;
#line 896 "pragma_c_gen.m"
        }
#line 889 "pragma_c_gen.m"
      }
#line 888 "pragma_c_gen.m"
  }
#line 886 "pragma_c_gen.m"
}

#line 866 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(
#line 866 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 866 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2)
#line 866 "pragma_c_gen.m"
{
#line 868 "pragma_c_gen.m"
  {
#line 868 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 868 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 868 "pragma_c_gen.m"
    else
#line 869 "pragma_c_gen.m"
      {
#line 869 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 869 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 869 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__OutTail_6;
#line 869 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ArgInfo_11;
#line 869 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Mode_13;
#line 871 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7;
#line 871 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8;
#line 871 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9;
#line 871 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10;
#line 872 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen___Loc_12;

#line 870 "pragma_c_gen.m"
        {
#line 870 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(ll_backend__pragma_c_gen__Rest_4, &ll_backend__pragma_c_gen__OutTail_6);
        }
#line 871 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 0)));
#line 871 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 1)));
#line 871 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 2)));
#line 871 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 3)));
#line 871 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__ArgInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 4)));
#line 872 "pragma_c_gen.m"
        ll_backend__pragma_c_gen___Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 0)));
#line 872 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 1)));
#line 876 "pragma_c_gen.m"
#line 876 "pragma_c_gen.m"
        switch (ll_backend__pragma_c_gen__Mode_13) {
#line 876 "pragma_c_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 876 "pragma_c_gen.m"
          case (MR_Integer) 0:
#line 876 "pragma_c_gen.m"
          case (MR_Integer) 2:
#line 880 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__HeadVar__2_2 = ll_backend__pragma_c_gen__OutTail_6;
#line 876 "pragma_c_gen.m"
            break;
#line 876 "pragma_c_gen.m"
          case (MR_Integer) 1:
#line 875 "pragma_c_gen.m"
            {
#line 875 "pragma_c_gen.m"
              MR_Word base;
#line 875 "pragma_c_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 875 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 875 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Arg_3));
#line 875 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OutTail_6));
#line 875 "pragma_c_gen.m"
            }
#line 876 "pragma_c_gen.m"
            break;
#line 876 "pragma_c_gen.m"
        }
#line 869 "pragma_c_gen.m"
      }
#line 868 "pragma_c_gen.m"
  }
#line 866 "pragma_c_gen.m"
}

#line 854 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(
#line 854 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 854 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2)
#line 854 "pragma_c_gen.m"
{
#line 856 "pragma_c_gen.m"
  {
#line 856 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 856 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 856 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 856 "pragma_c_gen.m"
    else
#line 857 "pragma_c_gen.m"
      {
#line 857 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 857 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 857 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 0)));
#line 857 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Vars_6;
#line 858 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 1)));
#line 858 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 2)));
#line 858 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 3)));
#line 858 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 4)));

#line 859 "pragma_c_gen.m"
        {
#line 859 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(ll_backend__pragma_c_gen__Args_4, &ll_backend__pragma_c_gen__Vars_6);
        }
#line 857 "pragma_c_gen.m"
        {
#line 857 "pragma_c_gen.m"
          MR_Word base;
#line 857 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 857 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Var_5));
#line 857 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Vars_6));
#line 857 "pragma_c_gen.m"
        }
#line 857 "pragma_c_gen.m"
      }
#line 856 "pragma_c_gen.m"
  }
#line 854 "pragma_c_gen.m"
}

#line 831 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(
#line 831 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 831 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_2,
#line 831 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__LastReg_3,
#line 831 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4)
#line 831 "pragma_c_gen.m"
{
#line 834 "pragma_c_gen.m"
  {
#line 834 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 834 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 834 "pragma_c_gen.m"
    else
#line 836 "pragma_c_gen.m"
      {
#line 836 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ExtraArg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 836 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ExtraArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 836 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__CArg_11;
#line 836 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__CArgs_12;
#line 836 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 0)));
#line 836 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__MaybeNameMode_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 1)));
#line 836 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 2)));
#line 836 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 3)));
#line 836 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__Name_17;
#line 836 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ArgMode_19;
#line 836 "pragma_c_gen.m"
        MR_Integer ll_backend__pragma_c_gen__NextReg_21;
#line 836 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ArgInfo_22;
#line 836 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_28_28;
#line 836 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_29_29;

#line 841 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__MaybeNameMode_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 842 "pragma_c_gen.m"
          {
#line 843 "pragma_c_gen.m"
            {
#line 843 "pragma_c_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_extra_c_arg_list_seq\'/4", (MR_String) "no name");
#line 843 "pragma_c_gen.m"
              return;
            }
#line 842 "pragma_c_gen.m"
          }
#line 841 "pragma_c_gen.m"
        else
#line 839 "pragma_c_gen.m"
          {
#line 839 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Mode_18;
#line 839 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeNameMode_14, (MR_Integer) 0)));

#line 839 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_26_26, (MR_Integer) 0)));
#line 839 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_26_26, (MR_Integer) 1)));
#line 840 "pragma_c_gen.m"
            {
#line 840 "pragma_c_gen.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__pragma_c_gen__ModuleInfo_2, ll_backend__pragma_c_gen__Mode_18, ll_backend__pragma_c_gen__OrigType_15, &ll_backend__pragma_c_gen__ArgMode_19);
            }
#line 839 "pragma_c_gen.m"
          }
#line 847 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__NextReg_21 = (ll_backend__pragma_c_gen__LastReg_3 + (MR_Integer) 1);
#line 848 "pragma_c_gen.m"
        {
#line 848 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 848 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_28_28, 0) = ((MR_Box) ((MR_Integer) 0));
#line 848 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_28_28, 1) = ((MR_Box) (ll_backend__pragma_c_gen__NextReg_21));
#line 848 "pragma_c_gen.m"
        }
#line 848 "pragma_c_gen.m"
        {
#line 848 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__ArgInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 848 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_22, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_28_28));
#line 848 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_22, 1) = ((MR_Box) (ll_backend__pragma_c_gen__ArgMode_19));
#line 848 "pragma_c_gen.m"
        }
#line 849 "pragma_c_gen.m"
        {
#line 849 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 849 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_29_29, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_17));
#line 849 "pragma_c_gen.m"
        }
#line 849 "pragma_c_gen.m"
        {
#line 849 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__CArg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 849 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Var_13));
#line 849 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_29_29));
#line 849 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 2) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_15));
#line 849 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 3) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_16));
#line 849 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ArgInfo_22));
#line 849 "pragma_c_gen.m"
        }
#line 850 "pragma_c_gen.m"
        {
#line 850 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(ll_backend__pragma_c_gen__ExtraArgs_8, ll_backend__pragma_c_gen__ModuleInfo_2, ll_backend__pragma_c_gen__NextReg_21, &ll_backend__pragma_c_gen__CArgs_12);
        }
#line 836 "pragma_c_gen.m"
        {
#line 836 "pragma_c_gen.m"
          MR_Word base;
#line 836 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 836 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 836 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__CArg_11));
#line 836 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__CArgs_12));
#line 836 "pragma_c_gen.m"
        }
#line 836 "pragma_c_gen.m"
      }
#line 834 "pragma_c_gen.m"
  }
#line 831 "pragma_c_gen.m"
}

#line 817 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(
#line 817 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 817 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2,
#line 817 "pragma_c_gen.m"
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_3,
#line 817 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4,
#line 817 "pragma_c_gen.m"
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_5)
#line 817 "pragma_c_gen.m"
{
#line 820 "pragma_c_gen.m"
  while (MR_TRUE)
#line 820 "pragma_c_gen.m"
    {
#line 820 "pragma_c_gen.m"
      /* tailcall optimized into a loop */
#line 820 "pragma_c_gen.m"
      {
#line 820 "pragma_c_gen.m"
        MR_bool ll_backend__pragma_c_gen__succeeded;

#line 820 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 820 "pragma_c_gen.m"
          {
#line 820 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_5 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4;
#line 820 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_3 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2;
#line 820 "pragma_c_gen.m"
          }
#line 820 "pragma_c_gen.m"
        else
#line 821 "pragma_c_gen.m"
          {
#line 821 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Loc_12;
#line 821 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__ArgInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 821 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 821 "pragma_c_gen.m"
            MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24;
#line 821 "pragma_c_gen.m"
            MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26;
#line 821 "pragma_c_gen.m"
            MR_Integer ll_backend__pragma_c_gen__V_30_30;
#line 821 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_31_31;
#line 821 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_13_13;

#line 821 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_22_22, (MR_Integer) 0)));
#line 821 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_22_22, (MR_Integer) 1)));
#line 823 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Loc_12, (MR_Integer) 0)));
#line 823 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Loc_12, (MR_Integer) 1)));
#line 825 "pragma_c_gen.m"
#line 825 "pragma_c_gen.m"
            switch (ll_backend__pragma_c_gen__V_31_31) {
#line 825 "pragma_c_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 825 "pragma_c_gen.m"
              case (MR_Integer) 1:
#line 826 "pragma_c_gen.m"
                {
#line 827 "pragma_c_gen.m"
                  {
#line 827 "pragma_c_gen.m"
                    mercury__int__max_3_p_0(ll_backend__pragma_c_gen__V_30_30, ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4, &ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24);
                  }
#line 826 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2;
#line 826 "pragma_c_gen.m"
                }
#line 825 "pragma_c_gen.m"
                break;
#line 825 "pragma_c_gen.m"
              case (MR_Integer) 0:
#line 823 "pragma_c_gen.m"
                {
#line 824 "pragma_c_gen.m"
                  {
#line 824 "pragma_c_gen.m"
                    mercury__int__max_3_p_0(ll_backend__pragma_c_gen__V_30_30, ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2, &ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26);
                  }
#line 823 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4;
#line 823 "pragma_c_gen.m"
                }
#line 825 "pragma_c_gen.m"
                break;
#line 825 "pragma_c_gen.m"
            }
#line 829 "pragma_c_gen.m"
            /* direct tailcall eliminated */
#line 829 "pragma_c_gen.m"
            {
#line 829 "pragma_c_gen.m"
              MR_Word ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1 = ll_backend__pragma_c_gen__ArgInfos_14;
#line 829 "pragma_c_gen.m"
              MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0__tmp_copy_2 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26;
#line 829 "pragma_c_gen.m"
              MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0__tmp_copy_4 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24;

#line 829 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0__tmp_copy_4;
#line 829 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0__tmp_copy_2;
#line 829 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1;
#line 829 "pragma_c_gen.m"
            }
#line 829 "pragma_c_gen.m"
            continue;
#line 821 "pragma_c_gen.m"
          }
#line 820 "pragma_c_gen.m"
      }
#line 820 "pragma_c_gen.m"
      break;
#line 820 "pragma_c_gen.m"
    }
#line 817 "pragma_c_gen.m"
}

#line 810 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(
#line 810 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_5,
#line 810 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
#line 810 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ArgInfos_7,
#line 810 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ExtraCArgs_8)
#line 810 "pragma_c_gen.m"
{
#line 813 "pragma_c_gen.m"
  {
#line 813 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 813 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__MaxR_9;
#line 814 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen___MaxF_10;

#line 814 "pragma_c_gen.m"
    {
#line 814 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(ll_backend__pragma_c_gen__ArgInfos_7, (MR_Integer) 0, &ll_backend__pragma_c_gen__MaxR_9, (MR_Integer) 0, &ll_backend__pragma_c_gen___MaxF_10);
    }
#line 815 "pragma_c_gen.m"
    {
#line 815 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(ll_backend__pragma_c_gen__ExtraArgs_5, ll_backend__pragma_c_gen__ModuleInfo_6, ll_backend__pragma_c_gen__MaxR_9, ll_backend__pragma_c_gen__ExtraCArgs_8);
#line 815 "pragma_c_gen.m"
      return;
    }
#line 813 "pragma_c_gen.m"
  }
#line 810 "pragma_c_gen.m"
}

#line 788 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(
#line 788 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 788 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 788 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3)
#line 788 "pragma_c_gen.m"
{
#line 791 "pragma_c_gen.m"
  {
#line 791 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 791 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 791 "pragma_c_gen.m"
      if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 791 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 791 "pragma_c_gen.m"
      else
#line 803 "pragma_c_gen.m"
        {
#line 804 "pragma_c_gen.m"
          {
#line 804 "pragma_c_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", (MR_String) "length mismatch");
#line 804 "pragma_c_gen.m"
            return;
          }
#line 803 "pragma_c_gen.m"
        }
#line 791 "pragma_c_gen.m"
    else
#line 791 "pragma_c_gen.m"
      {
#line 791 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 791 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 791 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 805 "pragma_c_gen.m"
          {
#line 806 "pragma_c_gen.m"
            {
#line 806 "pragma_c_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", (MR_String) "length mismatch");
#line 806 "pragma_c_gen.m"
              return;
            }
#line 805 "pragma_c_gen.m"
          }
#line 791 "pragma_c_gen.m"
        else
#line 792 "pragma_c_gen.m"
          {
#line 792 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__ArgInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 792 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__ArgInfoTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 792 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__CArg_8;
#line 792 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__CArgTail_9;
#line 792 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 0)));
#line 792 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__MaybeNameMode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 1)));
#line 792 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 2)));
#line 792 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__BoxPolicy_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 3)));
#line 792 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__MaybeName_16;

#line 797 "pragma_c_gen.m"
            if ((ll_backend__pragma_c_gen__MaybeNameMode_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 798 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__MaybeName_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 797 "pragma_c_gen.m"
            else
#line 795 "pragma_c_gen.m"
              {
#line 795 "pragma_c_gen.m"
                MR_String ll_backend__pragma_c_gen__Name_14;
#line 795 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeNameMode_11, (MR_Integer) 0)));
#line 795 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_15_15;

#line 795 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_17_17, (MR_Integer) 0)));
#line 795 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_17_17, (MR_Integer) 1)));
#line 796 "pragma_c_gen.m"
                {
#line 796 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__MaybeName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 796 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeName_16, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_14));
#line 796 "pragma_c_gen.m"
                }
#line 795 "pragma_c_gen.m"
              }
#line 801 "pragma_c_gen.m"
            {
#line 801 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__CArg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 801 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Var_10));
#line 801 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 1) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeName_16));
#line 801 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Type_12));
#line 801 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 3) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_13));
#line 801 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ArgInfo_6));
#line 801 "pragma_c_gen.m"
            }
#line 802 "pragma_c_gen.m"
            {
#line 802 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(ll_backend__pragma_c_gen__V_30_30, ll_backend__pragma_c_gen__ArgInfoTail_7, &ll_backend__pragma_c_gen__CArgTail_9);
            }
#line 792 "pragma_c_gen.m"
            {
#line 792 "pragma_c_gen.m"
              MR_Word base;
#line 792 "pragma_c_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__3_3 = base;
#line 792 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__CArg_8));
#line 792 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__CArgTail_9));
#line 792 "pragma_c_gen.m"
            }
#line 792 "pragma_c_gen.m"
          }
#line 791 "pragma_c_gen.m"
      }
#line 791 "pragma_c_gen.m"
  }
#line 788 "pragma_c_gen.m"
}

#line 736 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(
#line 736 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__C_Code_7,
#line 736 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__MaybeContext_8,
#line 736 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashDefine_9,
#line 736 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashUndef_10,
#line 736 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17,
#line 736 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18)
#line 736 "pragma_c_gen.m"
{
#line 741 "pragma_c_gen.m"
  {
#line 741 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 741 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Globals_12;
#line 741 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ProfileMemory_13;
#line 745 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_20_20;
#line 746 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__V_14_14;

#line 742 "pragma_c_gen.m"
    {
#line 742 "pragma_c_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17, &ll_backend__pragma_c_gen__Globals_12);
    }
#line 743 "pragma_c_gen.m"
    {
#line 743 "pragma_c_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__pragma_c_gen__Globals_12, (MR_Integer) 195, &ll_backend__pragma_c_gen__ProfileMemory_13);
    }
#line 745 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__ProfileMemory_13 == (MR_Integer) 1);
#line 745 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 745 "pragma_c_gen.m"
      {
#line 746 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_20_20 = (MR_String) "MR_ALLOC_ID";
#line 746 "pragma_c_gen.m"
        {
#line 746 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__succeeded = mercury__string__sub_string_search_3_p_0(ll_backend__pragma_c_gen__C_Code_7, ll_backend__pragma_c_gen__V_20_20, &ll_backend__pragma_c_gen__V_14_14);
        }
#line 745 "pragma_c_gen.m"
      }
#line 763 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 753 "pragma_c_gen.m"
      {
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Context_15;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__AllocId_16;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_24_24;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_26_26;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_27_27;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_28_28;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_29_29;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_32_32;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_38_38;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_39_39;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_44_44;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_45_45;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_50_50;
#line 753 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_51_51;

#line 750 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__MaybeContext_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 752 "pragma_c_gen.m"
          {
#line 752 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Context_15 = mercury__term__context_init_0_f_0();
          }
#line 750 "pragma_c_gen.m"
        else
#line 749 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeContext_8, (MR_Integer) 0)));
#line 754 "pragma_c_gen.m"
        {
#line 754 "pragma_c_gen.m"
          ll_backend__code_info__add_alloc_site_info_6_p_0(ll_backend__pragma_c_gen__Context_15, (MR_String) "unknown", (MR_Integer) 0, &ll_backend__pragma_c_gen__AllocId_16, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18);
        }
#line 772 "pragma_c_gen.m"
        {
#line 772 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_39_39 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 772 "pragma_c_gen.m"
        {
#line 772 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 772 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_38_38, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_39_39));
#line 772 "pragma_c_gen.m"
        }
#line 771 "pragma_c_gen.m"
        {
#line 771 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 1) = ((MR_Box) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 2) = ((MR_Box) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_38_38));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 4) = ((MR_Box) ((MR_String) "#define\tMR_ALLOC_ID\t"));
#line 771 "pragma_c_gen.m"
        }
#line 757 "pragma_c_gen.m"
        {
#line 757 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 757 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 1) = ((MR_Box) (ll_backend__pragma_c_gen__AllocId_16));
#line 757 "pragma_c_gen.m"
        }
#line 772 "pragma_c_gen.m"
        {
#line 772 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_45_45 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 772 "pragma_c_gen.m"
        {
#line 772 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 772 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_44_44, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_45_45));
#line 772 "pragma_c_gen.m"
        }
#line 771 "pragma_c_gen.m"
        {
#line 771 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 2) = ((MR_Box) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_44_44));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 4) = ((MR_Box) ((MR_String) "\n"));
#line 771 "pragma_c_gen.m"
        }
#line 759 "pragma_c_gen.m"
        {
#line 759 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_28_28, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_29_29));
#line 759 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 759 "pragma_c_gen.m"
        }
#line 757 "pragma_c_gen.m"
        {
#line 757 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_26_26, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_27_27));
#line 757 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_26_26, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_28_28));
#line 757 "pragma_c_gen.m"
        }
#line 756 "pragma_c_gen.m"
        {
#line 756 "pragma_c_gen.m"
          MR_Word base;
#line 756 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__AllocIdHashDefine_9 = base;
#line 756 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_24_24));
#line 756 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_26_26));
#line 756 "pragma_c_gen.m"
        }
#line 772 "pragma_c_gen.m"
        {
#line 772 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_51_51 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 772 "pragma_c_gen.m"
        {
#line 772 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 772 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_50_50, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_51_51));
#line 772 "pragma_c_gen.m"
        }
#line 771 "pragma_c_gen.m"
        {
#line 771 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 1) = ((MR_Box) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 2) = ((MR_Box) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_50_50));
#line 771 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 4) = ((MR_Box) ((MR_String) "#undef\tMR_ALLOC_ID\n"));
#line 771 "pragma_c_gen.m"
        }
#line 762 "pragma_c_gen.m"
        {
#line 762 "pragma_c_gen.m"
          MR_Word base;
#line 762 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__AllocIdHashUndef_10 = base;
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_32_32));
#line 762 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 762 "pragma_c_gen.m"
        }
#line 753 "pragma_c_gen.m"
      }
#line 763 "pragma_c_gen.m"
    else
#line 764 "pragma_c_gen.m"
      {
#line 764 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__AllocIdHashDefine_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__AllocIdHashUndef_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 764 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17;
#line 764 "pragma_c_gen.m"
      }
#line 741 "pragma_c_gen.m"
  }
#line 736 "pragma_c_gen.m"
}

#line 713 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(
#line 713 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
#line 713 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_7,
#line 713 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_8,
#line 713 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashDef_9,
#line 713 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashUndef_10)
#line 713 "pragma_c_gen.m"
{
#line 717 "pragma_c_gen.m"
  {
#line 717 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 717 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__ProcLabelStr_11;
#line 717 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_12_12;
#line 717 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_14_14;
#line 717 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__CodeAddr_21;
#line 717 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_33_33;
#line 717 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_34_34;
#line 717 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_39_39;
#line 717 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_40_40;
#line 730 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ProcLabel_22;

#line 727 "pragma_c_gen.m"
    {
#line 727 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__CodeAddr_21 = ll_backend__code_util__make_entry_label_4_f_0(ll_backend__pragma_c_gen__ModuleInfo_6, ll_backend__pragma_c_gen__PredId_7, ll_backend__pragma_c_gen__ProcId_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 728 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__CodeAddr_21)) == (MR_mktag((MR_Integer) 2)));
#line 728 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 728 "pragma_c_gen.m"
      {
#line 728 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__ProcLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__CodeAddr_21, (MR_Integer) 0)));
#line 729 "pragma_c_gen.m"
        {
#line 729 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__ProcLabelStr_11 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__pragma_c_gen__ProcLabel_22, (MR_Integer) 1);
        }
#line 728 "pragma_c_gen.m"
      }
#line 728 "pragma_c_gen.m"
    else
#line 732 "pragma_c_gen.m"
      {
#line 732 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Label_23;

#line 730 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__CodeAddr_21)) == (MR_mktag((MR_Integer) 1)));
#line 730 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 730 "pragma_c_gen.m"
          {
#line 730 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Label_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__CodeAddr_21, (MR_Integer) 0)));
#line 731 "pragma_c_gen.m"
            {
#line 731 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__ProcLabelStr_11 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__pragma_c_gen__Label_23, (MR_Integer) 1);
            }
#line 730 "pragma_c_gen.m"
          }
#line 730 "pragma_c_gen.m"
        else
#line 733 "pragma_c_gen.m"
          {
#line 733 "pragma_c_gen.m"
            {
#line 733 "pragma_c_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.make_proc_label_string\'/3", (MR_String) "code_addr");
#line 733 "pragma_c_gen.m"
              return;
            }
#line 733 "pragma_c_gen.m"
          }
#line 732 "pragma_c_gen.m"
      }
#line 720 "pragma_c_gen.m"
    {
#line 720 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__ProcLabelStr_11, (MR_String) "\n");
    }
#line 720 "pragma_c_gen.m"
    {
#line 720 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "#define\tMR_PROC_LABEL\t", ll_backend__pragma_c_gen__V_14_14);
    }
#line 772 "pragma_c_gen.m"
    {
#line 772 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_34_34 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
#line 772 "pragma_c_gen.m"
    {
#line 772 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 772 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_33_33, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_34_34));
#line 772 "pragma_c_gen.m"
    }
#line 771 "pragma_c_gen.m"
    {
#line 771 "pragma_c_gen.m"
      MR_Word base;
#line 771 "pragma_c_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 771 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__ProcLabelHashDef_9 = base;
#line 771 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_33_33));
#line 771 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__pragma_c_gen__V_12_12));
#line 771 "pragma_c_gen.m"
    }
#line 772 "pragma_c_gen.m"
    {
#line 772 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_40_40 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
#line 772 "pragma_c_gen.m"
    {
#line 772 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 772 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_39_39, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_40_40));
#line 772 "pragma_c_gen.m"
    }
#line 771 "pragma_c_gen.m"
    {
#line 771 "pragma_c_gen.m"
      MR_Word base;
#line 771 "pragma_c_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 771 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__ProcLabelHashUndef_10 = base;
#line 771 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 771 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_39_39));
#line 771 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_String) "#undef\tMR_PROC_LABEL\n"));
#line 771 "pragma_c_gen.m"
    }
#line 717 "pragma_c_gen.m"
  }
#line 713 "pragma_c_gen.m"
}

#line 440 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_16,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Attributes_17,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_18,
#line 440 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_19,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_20,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_21,
#line 440 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__C_Code_22,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Context_23,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__GoalInfo_24,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25,
#line 440 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__Code_26,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96,
#line 440 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97,
#line 440 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_98,
#line 440 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99)
#line 440 "pragma_c_gen.m"
{
#line 448 "pragma_c_gen.m"
  {
#line 448 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_230_230;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_241_241;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__MayCallMercury_29;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ThreadSafe_30;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ArgInfos_31;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__OrigCArgs_32;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ModuleInfo_33;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ExtraCArgs_34;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__CArgs_35;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__InCArgs_36;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__OutCArgs_37;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__PostDeaths_38;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__DeadVars0_39;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__DeadVars_40;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__SaveVarsCode_41;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__InputDescs_45;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__InputVarsCode_46;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Decls_47;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__AllocIdHashDefine_48;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__AllocIdHashUndef_49;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__CallerPredId_50;
#line 448 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CallerProcId_51;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ProcLabelHashDefine_52;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ProcLabelHashUndef_53;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__InputComp_54;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__SaveRegsComp_55;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ObtainLock_56;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ReleaseLock_57;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__AffectsLiveness_63;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__C_Code_Comp_64;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Detism_65;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__CheckSuccess_Comp_66;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__MaybeFailLabel_67;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__DefSuccessComp_69;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__UndefSuccessComp_70;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__RestoreRegsComp_71;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ExprnOpts_74;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__UseFloatRegs_75;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__FloatRegType_76;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Regs_77;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__OutputDescs_78;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__OutputComp_79;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Components_80;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__MaybeMayDupl_81;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__MayDupl_82;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ExtraAttributes_85;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__RefersToLLDSSTack_86;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__PragmaCCode_87;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__FailureCode_95;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_104_104;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_105_105;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_106_106;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_142_142;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_184_184;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_185_185;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_187_187;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_188_188;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_189_189;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_190_190;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_191_191;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_192_192;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_193_193;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_194_194;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_195_195;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_196_196;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_197_197;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_198_198;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_200_200;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_201_201;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_224_224;
#line 448 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_225_225;

#line 450 "pragma_c_gen.m"
    {
#line 450 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__MayCallMercury_29 = parse_tree__prog_data__get_may_call_mercury_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
#line 451 "pragma_c_gen.m"
    {
#line 451 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__ThreadSafe_30 = parse_tree__prog_data__get_thread_safe_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
#line 464 "pragma_c_gen.m"
    {
#line 464 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__ArgInfos_31 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96, ll_backend__pragma_c_gen__PredId_18, ll_backend__pragma_c_gen__ProcId_19);
    }
#line 465 "pragma_c_gen.m"
    {
#line 465 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(ll_backend__pragma_c_gen__Args_20, ll_backend__pragma_c_gen__ArgInfos_31, &ll_backend__pragma_c_gen__OrigCArgs_32);
    }
#line 466 "pragma_c_gen.m"
    {
#line 466 "pragma_c_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96, &ll_backend__pragma_c_gen__ModuleInfo_33);
    }
#line 467 "pragma_c_gen.m"
    {
#line 467 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(ll_backend__pragma_c_gen__ExtraArgs_21, ll_backend__pragma_c_gen__ModuleInfo_33, ll_backend__pragma_c_gen__ArgInfos_31, &ll_backend__pragma_c_gen__ExtraCArgs_34);
    }
#line 468 "pragma_c_gen.m"
    {
#line 468 "pragma_c_gen.m"
      mercury__list__append_3_p_1((MR_Word) &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__type_ctor_info_c_arg_0, ll_backend__pragma_c_gen__OrigCArgs_32, ll_backend__pragma_c_gen__ExtraCArgs_34, &ll_backend__pragma_c_gen__CArgs_35);
    }
#line 469 "pragma_c_gen.m"
    {
#line 469 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(ll_backend__pragma_c_gen__CArgs_35, &ll_backend__pragma_c_gen__InCArgs_36);
    }
#line 470 "pragma_c_gen.m"
    {
#line 470 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(ll_backend__pragma_c_gen__CArgs_35, &ll_backend__pragma_c_gen__OutCArgs_37);
    }
#line 472 "pragma_c_gen.m"
    {
#line 472 "pragma_c_gen.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__pragma_c_gen__GoalInfo_24, &ll_backend__pragma_c_gen__PostDeaths_38);
    }
#line 4019 "ll_backend.pragma_c_gen.c"
    ll_backend__pragma_c_gen__TypeCtorInfo_230_230 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 473 "pragma_c_gen.m"
    {
#line 473 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__DeadVars0_39 = parse_tree__set_of_var__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230);
    }
#line 474 "pragma_c_gen.m"
    {
#line 474 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(ll_backend__pragma_c_gen__InCArgs_36, ll_backend__pragma_c_gen__PostDeaths_38, ll_backend__pragma_c_gen__DeadVars0_39, &ll_backend__pragma_c_gen__DeadVars_40);
    }
#line 480 "pragma_c_gen.m"
#line 480 "pragma_c_gen.m"
    switch (ll_backend__pragma_c_gen__MayCallMercury_29) {
#line 480 "pragma_c_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 480 "pragma_c_gen.m"
      case (MR_Integer) 0:
#line 481 "pragma_c_gen.m"
        {
#line 481 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__OutVars_42;
#line 481 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__OutVarsSet_43;
#line 490 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_44_44;

#line 483 "pragma_c_gen.m"
          {
#line 483 "pragma_c_gen.m"
            ll_backend__code_info__succip_is_used_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103);
          }
#line 488 "pragma_c_gen.m"
          {
#line 488 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(ll_backend__pragma_c_gen__OutCArgs_37, &ll_backend__pragma_c_gen__OutVars_42);
          }
#line 489 "pragma_c_gen.m"
          {
#line 489 "pragma_c_gen.m"
            parse_tree__set_of_var__list_to_set_2_p_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ll_backend__pragma_c_gen__OutVars_42, &ll_backend__pragma_c_gen__OutVarsSet_43);
          }
#line 490 "pragma_c_gen.m"
          {
#line 490 "pragma_c_gen.m"
            ll_backend__code_loc_dep__save_variables_6_p_0(ll_backend__pragma_c_gen__OutVarsSet_43, &ll_backend__pragma_c_gen__V_44_44, &ll_backend__pragma_c_gen__SaveVarsCode_41, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_98, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_104_104);
          }
#line 481 "pragma_c_gen.m"
        }
#line 480 "pragma_c_gen.m"
        break;
#line 480 "pragma_c_gen.m"
      case (MR_Integer) 1:
#line 478 "pragma_c_gen.m"
        {
#line 479 "pragma_c_gen.m"
          {
#line 479 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__SaveVarsCode_41 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 478 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96;
#line 478 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_104_104 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_98;
#line 478 "pragma_c_gen.m"
        }
#line 480 "pragma_c_gen.m"
        break;
#line 480 "pragma_c_gen.m"
    }
#line 496 "pragma_c_gen.m"
    {
#line 496 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(ll_backend__pragma_c_gen__InCArgs_36, &ll_backend__pragma_c_gen__InputDescs_45, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25, &ll_backend__pragma_c_gen__InputVarsCode_46, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_104_104, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_105_105);
    }
#line 503 "pragma_c_gen.m"
    {
#line 503 "pragma_c_gen.m"
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__pragma_c_gen__DeadVars_40, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_105_105, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_106_106);
    }
#line 506 "pragma_c_gen.m"
    {
#line 506 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(ll_backend__pragma_c_gen__CArgs_35, ll_backend__pragma_c_gen__ModuleInfo_33, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25, &ll_backend__pragma_c_gen__Decls_47);
    }
#line 509 "pragma_c_gen.m"
    {
#line 509 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(ll_backend__pragma_c_gen__C_Code_22, ll_backend__pragma_c_gen__Context_23, &ll_backend__pragma_c_gen__AllocIdHashDefine_48, &ll_backend__pragma_c_gen__AllocIdHashUndef_49, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107);
    }
#line 514 "pragma_c_gen.m"
    {
#line 514 "pragma_c_gen.m"
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107, &ll_backend__pragma_c_gen__CallerPredId_50);
    }
#line 515 "pragma_c_gen.m"
    {
#line 515 "pragma_c_gen.m"
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107, &ll_backend__pragma_c_gen__CallerProcId_51);
    }
#line 516 "pragma_c_gen.m"
    {
#line 516 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(ll_backend__pragma_c_gen__ModuleInfo_33, ll_backend__pragma_c_gen__CallerPredId_50, ll_backend__pragma_c_gen__CallerProcId_51, &ll_backend__pragma_c_gen__ProcLabelHashDefine_52, &ll_backend__pragma_c_gen__ProcLabelHashUndef_53);
    }
#line 520 "pragma_c_gen.m"
    {
#line 520 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__InputComp_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 520 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__InputComp_54, 0) = ((MR_Box) (ll_backend__pragma_c_gen__InputDescs_45));
#line 520 "pragma_c_gen.m"
    }
#line 4133 "ll_backend.pragma_c_gen.c"
#line 4134 "ll_backend.pragma_c_gen.c"
    switch (ll_backend__pragma_c_gen__ThreadSafe_30) {
#line 4136 "ll_backend.pragma_c_gen.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 4138 "ll_backend.pragma_c_gen.c"
      case (MR_Integer) 2:
#line 4140 "ll_backend.pragma_c_gen.c"
        {
#line 459 "pragma_c_gen.m"
          {
#line 459 "pragma_c_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_ordinary_foreign_proc_code\'/15", (MR_String) "maybe_thread_safe");
#line 459 "pragma_c_gen.m"
            return;
          }
#line 4149 "ll_backend.pragma_c_gen.c"
        }
#line 4151 "ll_backend.pragma_c_gen.c"
        break;
#line 4153 "ll_backend.pragma_c_gen.c"
      case (MR_Integer) 0:
#line 4155 "ll_backend.pragma_c_gen.c"
        {
#line 4157 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_235_235;
#line 4159 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__PredInfo_58;
#line 4161 "ll_backend.pragma_c_gen.c"
          MR_String ll_backend__pragma_c_gen__Name_59;
#line 4163 "ll_backend.pragma_c_gen.c"
          MR_String ll_backend__pragma_c_gen__MangledName_60;
#line 4165 "ll_backend.pragma_c_gen.c"
          MR_String ll_backend__pragma_c_gen__ObtainLockStr_61;
#line 4167 "ll_backend.pragma_c_gen.c"
          MR_String ll_backend__pragma_c_gen__ReleaseLockStr_62;
#line 4169 "ll_backend.pragma_c_gen.c"
          MR_String ll_backend__pragma_c_gen__V_119_119;
#line 4171 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_123_123;
#line 4173 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_124_124;
#line 4175 "ll_backend.pragma_c_gen.c"
          MR_String ll_backend__pragma_c_gen__V_126_126;
#line 4177 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_130_130;
#line 4179 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_131_131;

#line 543 "pragma_c_gen.m"
          {
#line 543 "pragma_c_gen.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__pragma_c_gen__ModuleInfo_33, ll_backend__pragma_c_gen__PredId_18, &ll_backend__pragma_c_gen__PredInfo_58);
          }
#line 544 "pragma_c_gen.m"
          {
#line 544 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Name_59 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__pragma_c_gen__PredInfo_58);
          }
#line 545 "pragma_c_gen.m"
          {
#line 545 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__MangledName_60 = backend_libs__c_util__quote_string_1_f_0(ll_backend__pragma_c_gen__Name_59);
          }
#line 547 "pragma_c_gen.m"
          {
#line 547 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_119_119 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__MangledName_60, (MR_String) "\");\n");
          }
#line 547 "pragma_c_gen.m"
          {
#line 547 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__ObtainLockStr_61 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\"", ll_backend__pragma_c_gen__V_119_119);
          }
#line 4207 "ll_backend.pragma_c_gen.c"
          ll_backend__pragma_c_gen__TypeCtorInfo_235_235 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 549 "pragma_c_gen.m"
          {
#line 549 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_124_124 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_235_235);
          }
#line 549 "pragma_c_gen.m"
          {
#line 549 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 549 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_123_123, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_124_124));
#line 549 "pragma_c_gen.m"
          }
#line 548 "pragma_c_gen.m"
          {
#line 548 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__ObtainLock_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 548 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 548 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 1) = ((MR_Box) ((MR_Integer) 1));
#line 548 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 2) = ((MR_Box) ((MR_Integer) 1));
#line 548 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_123_123));
#line 548 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ObtainLockStr_61));
#line 548 "pragma_c_gen.m"
          }
#line 552 "pragma_c_gen.m"
          {
#line 552 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_126_126 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__MangledName_60, (MR_String) "\");\n");
          }
#line 552 "pragma_c_gen.m"
          {
#line 552 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__ReleaseLockStr_62 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\"", ll_backend__pragma_c_gen__V_126_126);
          }
#line 554 "pragma_c_gen.m"
          {
#line 554 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_131_131 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_235_235);
          }
#line 554 "pragma_c_gen.m"
          {
#line 554 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 554 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_130_130, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_131_131));
#line 554 "pragma_c_gen.m"
          }
#line 553 "pragma_c_gen.m"
          {
#line 553 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__ReleaseLock_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 553 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 553 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 1) = ((MR_Box) ((MR_Integer) 1));
#line 553 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 2) = ((MR_Box) ((MR_Integer) 1));
#line 553 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_130_130));
#line 553 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ReleaseLockStr_62));
#line 553 "pragma_c_gen.m"
          }
#line 4277 "ll_backend.pragma_c_gen.c"
        }
#line 4279 "ll_backend.pragma_c_gen.c"
        break;
#line 4281 "ll_backend.pragma_c_gen.c"
      case (MR_Integer) 1:
#line 4283 "ll_backend.pragma_c_gen.c"
        {
#line 4285 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_234_234 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 4287 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_134_134;
#line 4289 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_135_135;
#line 4291 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_139_139;
#line 4293 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_140_140;

#line 538 "pragma_c_gen.m"
          {
#line 538 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_135_135 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_234_234);
          }
#line 538 "pragma_c_gen.m"
          {
#line 538 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 538 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_134_134, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_135_135));
#line 538 "pragma_c_gen.m"
          }
#line 537 "pragma_c_gen.m"
          {
#line 537 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__ObtainLock_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 537 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 537 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 1) = ((MR_Box) ((MR_Integer) 1));
#line 537 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 2) = ((MR_Box) ((MR_Integer) 1));
#line 537 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_134_134));
#line 537 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 4) = ((MR_Box) ((MR_String) ""));
#line 537 "pragma_c_gen.m"
          }
#line 540 "pragma_c_gen.m"
          {
#line 540 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_140_140 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_234_234);
          }
#line 540 "pragma_c_gen.m"
          {
#line 540 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_139_139, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_140_140));
#line 540 "pragma_c_gen.m"
          }
#line 539 "pragma_c_gen.m"
          {
#line 539 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__ReleaseLock_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 539 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 539 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 1) = ((MR_Box) ((MR_Integer) 1));
#line 539 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 2) = ((MR_Box) ((MR_Integer) 1));
#line 539 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_139_139));
#line 539 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 4) = ((MR_Box) ((MR_String) ""));
#line 539 "pragma_c_gen.m"
          }
#line 4354 "ll_backend.pragma_c_gen.c"
        }
#line 4356 "ll_backend.pragma_c_gen.c"
        break;
#line 4358 "ll_backend.pragma_c_gen.c"
    }
#line 559 "pragma_c_gen.m"
    {
#line 559 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__AffectsLiveness_63 = parse_tree__prog_data__get_affects_liveness_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
#line 560 "pragma_c_gen.m"
    {
#line 560 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__C_Code_Comp_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 560 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 560 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_64, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Context_23));
#line 560 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_64, 2) = ((MR_Box) (ll_backend__pragma_c_gen__AffectsLiveness_63));
#line 560 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_64, 3) = ((MR_Box) (ll_backend__pragma_c_gen__C_Code_22));
#line 560 "pragma_c_gen.m"
    }
#line 563 "pragma_c_gen.m"
    {
#line 563 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__Detism_65 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__pragma_c_gen__GoalInfo_24);
    }
#line 564 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CodeModel_16 == (MR_Integer) 1);
#line 583 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 572 "pragma_c_gen.m"
      {
#line 572 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_236_236;
#line 572 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_145_145;
#line 572 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_146_146;
#line 572 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_147_147;
#line 572 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_149_149;
#line 572 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_150_150;
#line 572 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_151_151;
#line 572 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_153_153;
#line 572 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_155_155;
#line 572 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_157_157;
#line 572 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_158_158;
#line 572 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_162_162;
#line 572 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_163_163;

#line 565 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__Detism_65 == (MR_Integer) 7);
#line 568 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 566 "pragma_c_gen.m"
          {
#line 566 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__CheckSuccess_Comp_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 567 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__MaybeFailLabel_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 566 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__STATE_VARIABLE_CI_142_142 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107;
#line 566 "pragma_c_gen.m"
          }
#line 568 "pragma_c_gen.m"
        else
#line 569 "pragma_c_gen.m"
          {
#line 569 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__FailLabel_68;

#line 569 "pragma_c_gen.m"
            {
#line 569 "pragma_c_gen.m"
              ll_backend__code_info__get_next_label_3_p_0(&ll_backend__pragma_c_gen__FailLabel_68, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_142_142);
            }
#line 570 "pragma_c_gen.m"
            {
#line 570 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__CheckSuccess_Comp_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__CheckSuccess_Comp_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 570 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__CheckSuccess_Comp_66, 1) = ((MR_Box) (ll_backend__pragma_c_gen__FailLabel_68));
#line 570 "pragma_c_gen.m"
            }
#line 571 "pragma_c_gen.m"
            {
#line 571 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__MaybeFailLabel_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 571 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeFailLabel_67, 0) = ((MR_Box) (ll_backend__pragma_c_gen__FailLabel_68));
#line 571 "pragma_c_gen.m"
            }
#line 569 "pragma_c_gen.m"
          }
#line 4463 "ll_backend.pragma_c_gen.c"
        ll_backend__pragma_c_gen__TypeCtorInfo_236_236 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 574 "pragma_c_gen.m"
        {
#line 574 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_146_146 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_236_236);
        }
#line 574 "pragma_c_gen.m"
        {
#line 574 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 574 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_145_145, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_146_146));
#line 574 "pragma_c_gen.m"
        }
#line 575 "pragma_c_gen.m"
        {
#line 575 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_150_150 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
        }
#line 578 "pragma_c_gen.m"
        {
#line 578 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_158_158 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
        }
#line 578 "pragma_c_gen.m"
        {
#line 578 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_157_157 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_158_158, (MR_String) "\n");
        }
#line 577 "pragma_c_gen.m"
        {
#line 577 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_155_155 = mercury__string__f_43_43_2_f_0((MR_String) "#define SUCCESS_INDICATOR ", ll_backend__pragma_c_gen__V_157_157);
        }
#line 576 "pragma_c_gen.m"
        {
#line 576 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_153_153 = mercury__string__f_43_43_2_f_0((MR_String) "#undef SUCCESS_INDICATOR\n", ll_backend__pragma_c_gen__V_155_155);
        }
#line 575 "pragma_c_gen.m"
        {
#line 575 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_151_151 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", ll_backend__pragma_c_gen__V_153_153);
        }
#line 575 "pragma_c_gen.m"
        {
#line 575 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_149_149 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_150_150, ll_backend__pragma_c_gen__V_151_151);
        }
#line 575 "pragma_c_gen.m"
        {
#line 575 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_147_147 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_bool ", ll_backend__pragma_c_gen__V_149_149);
        }
#line 573 "pragma_c_gen.m"
        {
#line 573 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__DefSuccessComp_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 573 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 573 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 1) = ((MR_Box) ((MR_Integer) 1));
#line 573 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 2) = ((MR_Box) ((MR_Integer) 1));
#line 573 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_145_145));
#line 573 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 4) = ((MR_Box) (ll_backend__pragma_c_gen__V_147_147));
#line 573 "pragma_c_gen.m"
        }
#line 580 "pragma_c_gen.m"
        {
#line 580 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_163_163 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_236_236);
        }
#line 580 "pragma_c_gen.m"
        {
#line 580 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 580 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_162_162, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_163_163));
#line 580 "pragma_c_gen.m"
        }
#line 579 "pragma_c_gen.m"
        {
#line 579 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__UndefSuccessComp_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 579 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 579 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 1) = ((MR_Box) ((MR_Integer) 1));
#line 579 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 2) = ((MR_Box) ((MR_Integer) 1));
#line 579 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_162_162));
#line 579 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 4) = ((MR_Box) ((MR_String) "#undef SUCCESS_INDICATOR\n#define SUCCESS_INDICATOR MR_r1\n"));
#line 579 "pragma_c_gen.m"
        }
#line 572 "pragma_c_gen.m"
      }
#line 583 "pragma_c_gen.m"
    else
#line 584 "pragma_c_gen.m"
      {
#line 584 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_237_237;
#line 584 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_169_169;
#line 584 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_170_170;
#line 584 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_174_174;
#line 584 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_175_175;

#line 584 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__CheckSuccess_Comp_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 585 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__MaybeFailLabel_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4584 "ll_backend.pragma_c_gen.c"
        ll_backend__pragma_c_gen__TypeCtorInfo_237_237 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 587 "pragma_c_gen.m"
        {
#line 587 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_170_170 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_237_237);
        }
#line 587 "pragma_c_gen.m"
        {
#line 587 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 587 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_169_169, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_170_170));
#line 587 "pragma_c_gen.m"
        }
#line 586 "pragma_c_gen.m"
        {
#line 586 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__DefSuccessComp_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 586 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 586 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 1) = ((MR_Box) ((MR_Integer) 1));
#line 586 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 2) = ((MR_Box) ((MR_Integer) 1));
#line 586 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_169_169));
#line 586 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 4) = ((MR_Box) ((MR_String) ""));
#line 586 "pragma_c_gen.m"
        }
#line 589 "pragma_c_gen.m"
        {
#line 589 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_175_175 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_237_237);
        }
#line 589 "pragma_c_gen.m"
        {
#line 589 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 589 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_174_174, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_175_175));
#line 589 "pragma_c_gen.m"
        }
#line 588 "pragma_c_gen.m"
        {
#line 588 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__UndefSuccessComp_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 588 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 588 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 1) = ((MR_Box) ((MR_Integer) 1));
#line 588 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 2) = ((MR_Box) ((MR_Integer) 1));
#line 588 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_174_174));
#line 588 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 4) = ((MR_Box) ((MR_String) ""));
#line 588 "pragma_c_gen.m"
        }
#line 584 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__STATE_VARIABLE_CI_142_142 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107;
#line 584 "pragma_c_gen.m"
      }
#line 4648 "ll_backend.pragma_c_gen.c"
#line 4649 "ll_backend.pragma_c_gen.c"
    switch (ll_backend__pragma_c_gen__MayCallMercury_29) {
#line 4651 "ll_backend.pragma_c_gen.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 4653 "ll_backend.pragma_c_gen.c"
      case (MR_Integer) 0:
#line 4655 "ll_backend.pragma_c_gen.c"
        {
#line 4657 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__InstMapDelta_72;
#line 4659 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__OkToDelete_73;
#line 4661 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_110_110;
#line 4663 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_111_111;
#line 4665 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_179_179;
#line 4667 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_180_180;

#line 530 "pragma_c_gen.m"
          {
#line 530 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_111_111 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
#line 530 "pragma_c_gen.m"
          {
#line 530 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 530 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_110_110, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_111_111));
#line 530 "pragma_c_gen.m"
          }
#line 529 "pragma_c_gen.m"
          {
#line 529 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__SaveRegsComp_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 529 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 529 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 1) = ((MR_Box) ((MR_Integer) 1));
#line 529 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 2) = ((MR_Box) ((MR_Integer) 0));
#line 529 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_110_110));
#line 529 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 4) = ((MR_Box) ((MR_String) "\tMR_save_registers();\n"));
#line 529 "pragma_c_gen.m"
          }
#line 601 "pragma_c_gen.m"
          {
#line 601 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_180_180 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
#line 601 "pragma_c_gen.m"
          {
#line 601 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 601 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_179_179, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_180_180));
#line 601 "pragma_c_gen.m"
          }
#line 600 "pragma_c_gen.m"
          {
#line 600 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__RestoreRegsComp_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 600 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 600 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 1) = ((MR_Box) ((MR_Integer) 1));
#line 600 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 2) = ((MR_Box) ((MR_Integer) 1));
#line 600 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_179_179));
#line 600 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 4) = ((MR_Box) ((MR_String) "#ifndef MR_CONSERVATIVE_GC\n\tMR_restore_registers();\n#endif\n"));
#line 600 "pragma_c_gen.m"
          }
#line 613 "pragma_c_gen.m"
          {
#line 613 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__InstMapDelta_72 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__pragma_c_gen__GoalInfo_24);
          }
#line 614 "pragma_c_gen.m"
          {
#line 614 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__pragma_c_gen__InstMapDelta_72);
          }
#line 616 "pragma_c_gen.m"
          if (ll_backend__pragma_c_gen__succeeded)
#line 615 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__OkToDelete_73 = (MR_Integer) 0;
#line 616 "pragma_c_gen.m"
          else
#line 617 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__OkToDelete_73 = (MR_Integer) 1;
#line 619 "pragma_c_gen.m"
          {
#line 619 "pragma_c_gen.m"
            ll_backend__code_loc_dep__clear_all_registers_3_p_0(ll_backend__pragma_c_gen__OkToDelete_73, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_106_106, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_184_184);
          }
#line 4751 "ll_backend.pragma_c_gen.c"
        }
#line 4753 "ll_backend.pragma_c_gen.c"
        break;
#line 4755 "ll_backend.pragma_c_gen.c"
      case (MR_Integer) 1:
#line 4757 "ll_backend.pragma_c_gen.c"
        {
#line 4759 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_115_115;
#line 4761 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_116_116;

#line 526 "pragma_c_gen.m"
          {
#line 526 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_116_116 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
#line 526 "pragma_c_gen.m"
          {
#line 526 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_115_115, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_116_116));
#line 526 "pragma_c_gen.m"
          }
#line 525 "pragma_c_gen.m"
          {
#line 525 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__SaveRegsComp_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 525 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 525 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 1) = ((MR_Box) ((MR_Integer) 1));
#line 525 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 2) = ((MR_Box) ((MR_Integer) 1));
#line 525 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_115_115));
#line 525 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 4) = ((MR_Box) ((MR_String) ""));
#line 525 "pragma_c_gen.m"
          }
#line 597 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__RestoreRegsComp_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_184_184 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_106_106;
#line 4797 "ll_backend.pragma_c_gen.c"
        }
#line 4799 "ll_backend.pragma_c_gen.c"
        break;
#line 4801 "ll_backend.pragma_c_gen.c"
    }
#line 623 "pragma_c_gen.m"
    {
#line 623 "pragma_c_gen.m"
      ll_backend__code_info__get_exprn_opts_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_142_142, &ll_backend__pragma_c_gen__ExprnOpts_74);
    }
#line 624 "pragma_c_gen.m"
    {
#line 624 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__UseFloatRegs_75 = ll_backend__llds__get_float_registers_1_f_0(ll_backend__pragma_c_gen__ExprnOpts_74);
    }
#line 628 "pragma_c_gen.m"
#line 628 "pragma_c_gen.m"
    switch (ll_backend__pragma_c_gen__UseFloatRegs_75) {
#line 628 "pragma_c_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 628 "pragma_c_gen.m"
      case (MR_Integer) 1:
#line 630 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__FloatRegType_76 = (MR_Integer) 0;
#line 628 "pragma_c_gen.m"
        break;
#line 628 "pragma_c_gen.m"
      case (MR_Integer) 0:
#line 627 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__FloatRegType_76 = (MR_Integer) 1;
#line 628 "pragma_c_gen.m"
        break;
#line 628 "pragma_c_gen.m"
    }
#line 632 "pragma_c_gen.m"
    {
#line 632 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(ll_backend__pragma_c_gen__FloatRegType_76, ll_backend__pragma_c_gen__OutCArgs_37, &ll_backend__pragma_c_gen__Regs_77, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_184_184, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_185_185);
    }
#line 633 "pragma_c_gen.m"
    {
#line 633 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(ll_backend__pragma_c_gen__OutCArgs_37, ll_backend__pragma_c_gen__Regs_77, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25, &ll_backend__pragma_c_gen__OutputDescs_78, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_142_142, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_185_185, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186);
    }
#line 635 "pragma_c_gen.m"
    {
#line 635 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__OutputComp_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 635 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__OutputComp_79, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OutputDescs_78));
#line 635 "pragma_c_gen.m"
    }
#line 638 "pragma_c_gen.m"
    {
#line 638 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_187_187, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ProcLabelHashDefine_52));
#line 638 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_187_187, 1) = ((MR_Box) (ll_backend__pragma_c_gen__AllocIdHashDefine_48));
#line 638 "pragma_c_gen.m"
    }
#line 643 "pragma_c_gen.m"
    {
#line 643 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_198_198, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ProcLabelHashUndef_53));
#line 643 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_198_198, 1) = ((MR_Box) (ll_backend__pragma_c_gen__AllocIdHashUndef_49));
#line 643 "pragma_c_gen.m"
    }
#line 642 "pragma_c_gen.m"
    {
#line 642 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_197_197, 0) = ((MR_Box) (ll_backend__pragma_c_gen__UndefSuccessComp_70));
#line 642 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_197_197, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_198_198));
#line 642 "pragma_c_gen.m"
    }
#line 642 "pragma_c_gen.m"
    {
#line 642 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_196_196, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OutputComp_79));
#line 642 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_196_196, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_197_197));
#line 642 "pragma_c_gen.m"
    }
#line 641 "pragma_c_gen.m"
    {
#line 641 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_195_195, 0) = ((MR_Box) (ll_backend__pragma_c_gen__RestoreRegsComp_71));
#line 641 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_195_195, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_196_196));
#line 641 "pragma_c_gen.m"
    }
#line 641 "pragma_c_gen.m"
    {
#line 641 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_194_194, 0) = ((MR_Box) (ll_backend__pragma_c_gen__CheckSuccess_Comp_66));
#line 641 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_194_194, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_195_195));
#line 641 "pragma_c_gen.m"
    }
#line 640 "pragma_c_gen.m"
    {
#line 640 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_193_193, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ReleaseLock_57));
#line 640 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_193_193, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_194_194));
#line 640 "pragma_c_gen.m"
    }
#line 640 "pragma_c_gen.m"
    {
#line 640 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_192_192, 0) = ((MR_Box) (ll_backend__pragma_c_gen__C_Code_Comp_64));
#line 640 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_192_192, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_193_193));
#line 640 "pragma_c_gen.m"
    }
#line 640 "pragma_c_gen.m"
    {
#line 640 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_191_191, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ObtainLock_56));
#line 640 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_191_191, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_192_192));
#line 640 "pragma_c_gen.m"
    }
#line 640 "pragma_c_gen.m"
    {
#line 640 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_190_190, 0) = ((MR_Box) (ll_backend__pragma_c_gen__SaveRegsComp_55));
#line 640 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_190_190, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_191_191));
#line 640 "pragma_c_gen.m"
    }
#line 639 "pragma_c_gen.m"
    {
#line 639 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_189_189, 0) = ((MR_Box) (ll_backend__pragma_c_gen__InputComp_54));
#line 639 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_189_189, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_190_190));
#line 639 "pragma_c_gen.m"
    }
#line 639 "pragma_c_gen.m"
    {
#line 639 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_188_188, 0) = ((MR_Box) (ll_backend__pragma_c_gen__DefSuccessComp_69));
#line 639 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_188_188, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_189_189));
#line 639 "pragma_c_gen.m"
    }
#line 638 "pragma_c_gen.m"
    {
#line 638 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__Components_80 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, ll_backend__pragma_c_gen__V_187_187, ll_backend__pragma_c_gen__V_188_188);
    }
#line 644 "pragma_c_gen.m"
    {
#line 644 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__MaybeMayDupl_81 = parse_tree__prog_data__get_may_duplicate_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
#line 647 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__MaybeMayDupl_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 652 "pragma_c_gen.m"
      if ((ll_backend__pragma_c_gen__ExtraArgs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 651 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__MayDupl_82 = (MR_Integer) 0;
#line 652 "pragma_c_gen.m"
      else
#line 654 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__MayDupl_82 = (MR_Integer) 1;
#line 647 "pragma_c_gen.m"
    else
#line 646 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__MayDupl_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeMayDupl_81, (MR_Integer) 0)));
#line 657 "pragma_c_gen.m"
    {
#line 657 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__ExtraAttributes_85 = parse_tree__prog_data__get_extra_attributes_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
#line 658 "pragma_c_gen.m"
    {
#line 658 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_extra_attribute_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ll_backend__pragma_c_gen__ExtraAttributes_85);
    }
#line 660 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 659 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__RefersToLLDSSTack_86 = (MR_Integer) 1;
#line 660 "pragma_c_gen.m"
    else
#line 661 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__RefersToLLDSSTack_86 = (MR_Integer) 0;
#line 5012 "ll_backend.pragma_c_gen.c"
    ll_backend__pragma_c_gen__TypeCtorInfo_241_241 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 664 "pragma_c_gen.m"
    {
#line 664 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_201_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Decls_47));
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Components_80));
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 3) = ((MR_Box) (ll_backend__pragma_c_gen__MayCallMercury_29));
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 7) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeFailLabel_67));
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 9) = ((MR_Box) (ll_backend__pragma_c_gen__RefersToLLDSSTack_86));
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 10) = ((MR_Box) (ll_backend__pragma_c_gen__MayDupl_82));
#line 664 "pragma_c_gen.m"
    }
#line 664 "pragma_c_gen.m"
    {
#line 664 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_200_200, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_201_201));
#line 664 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_200_200, 1) = ((MR_Box) ((MR_String) "foreign_proc inclusion"));
#line 664 "pragma_c_gen.m"
    }
#line 663 "pragma_c_gen.m"
    {
#line 663 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__PragmaCCode_87 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ((MR_Box) (ll_backend__pragma_c_gen__V_200_200)));
    }
#line 699 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__MaybeFailLabel_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "pragma_c_gen.m"
      {
#line 701 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__Detism_65 == (MR_Integer) 7);
#line 705 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 702 "pragma_c_gen.m"
          {
#line 702 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__BeforeFailure_226;

#line 702 "pragma_c_gen.m"
            {
#line 702 "pragma_c_gen.m"
              ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186, &ll_backend__pragma_c_gen__BeforeFailure_226);
            }
#line 703 "pragma_c_gen.m"
            {
#line 703 "pragma_c_gen.m"
              ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__pragma_c_gen__FailureCode_95, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_142_142, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186);
            }
#line 704 "pragma_c_gen.m"
            {
#line 704 "pragma_c_gen.m"
              ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__pragma_c_gen__BeforeFailure_226, *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99);
            }
#line 702 "pragma_c_gen.m"
          }
#line 705 "pragma_c_gen.m"
        else
#line 706 "pragma_c_gen.m"
          {
#line 706 "pragma_c_gen.m"
            {
#line 706 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__FailureCode_95 = mercury__cord__empty_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241);
            }
#line 706 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186;
#line 706 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_142_142;
#line 706 "pragma_c_gen.m"
          }
#line 705 "pragma_c_gen.m"
      }
#line 699 "pragma_c_gen.m"
    else
#line 682 "pragma_c_gen.m"
      {
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TheFailLabel_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeFailLabel_67, (MR_Integer) 0)));
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__SkipLabel_89;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BeforeFailure_90;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__FailCode_91;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__GotoSkipLabelCode_92;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__SkipLabelCode_93;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__FailLabelCode_94;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_209_209;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_212_212;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_213_213;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_214_214;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_216_216;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_217_217;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_219_219;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_220_220;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_222_222;
#line 682 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_223_223;

#line 683 "pragma_c_gen.m"
        {
#line 683 "pragma_c_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__pragma_c_gen__SkipLabel_89, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_142_142, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_209_209);
        }
#line 684 "pragma_c_gen.m"
        {
#line 684 "pragma_c_gen.m"
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186, &ll_backend__pragma_c_gen__BeforeFailure_90);
        }
#line 685 "pragma_c_gen.m"
        {
#line 685 "pragma_c_gen.m"
          ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__pragma_c_gen__FailCode_91, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_209_209, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186);
        }
#line 686 "pragma_c_gen.m"
        {
#line 686 "pragma_c_gen.m"
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__pragma_c_gen__BeforeFailure_90, *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99);
        }
#line 689 "pragma_c_gen.m"
        {
#line 689 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 689 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_214_214, 0) = ((MR_Box) (ll_backend__pragma_c_gen__SkipLabel_89));
#line 689 "pragma_c_gen.m"
        }
#line 689 "pragma_c_gen.m"
        {
#line 689 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_213_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_213_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 689 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_213_213, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_214_214));
#line 689 "pragma_c_gen.m"
        }
#line 689 "pragma_c_gen.m"
        {
#line 689 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_212_212, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_213_213));
#line 689 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_212_212, 1) = ((MR_Box) ((MR_String) "Skip past failure code"));
#line 689 "pragma_c_gen.m"
        }
#line 688 "pragma_c_gen.m"
        {
#line 688 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__GotoSkipLabelCode_92 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ((MR_Box) (ll_backend__pragma_c_gen__V_212_212)));
        }
#line 692 "pragma_c_gen.m"
        {
#line 692 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_217_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_217_217, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 692 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_217_217, 1) = ((MR_Box) (ll_backend__pragma_c_gen__SkipLabel_89));
#line 692 "pragma_c_gen.m"
        }
#line 692 "pragma_c_gen.m"
        {
#line 692 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 692 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_216_216, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_217_217));
#line 692 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_216_216, 1) = ((MR_Box) ((MR_String) ""));
#line 692 "pragma_c_gen.m"
        }
#line 691 "pragma_c_gen.m"
        {
#line 691 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__SkipLabelCode_93 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ((MR_Box) (ll_backend__pragma_c_gen__V_216_216)));
        }
#line 695 "pragma_c_gen.m"
        {
#line 695 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_220_220 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_220_220, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 695 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_220_220, 1) = ((MR_Box) (ll_backend__pragma_c_gen__TheFailLabel_88));
#line 695 "pragma_c_gen.m"
        }
#line 695 "pragma_c_gen.m"
        {
#line 695 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_219_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 695 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_219_219, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_220_220));
#line 695 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_219_219, 1) = ((MR_Box) ((MR_String) ""));
#line 695 "pragma_c_gen.m"
        }
#line 694 "pragma_c_gen.m"
        {
#line 694 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__FailLabelCode_94 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ((MR_Box) (ll_backend__pragma_c_gen__V_219_219)));
        }
#line 697 "pragma_c_gen.m"
        {
#line 697 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_223_223 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__FailCode_91, ll_backend__pragma_c_gen__SkipLabelCode_93);
        }
#line 697 "pragma_c_gen.m"
        {
#line 697 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_222_222 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__FailLabelCode_94, ll_backend__pragma_c_gen__V_223_223);
        }
#line 697 "pragma_c_gen.m"
        {
#line 697 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__FailureCode_95 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__GotoSkipLabelCode_92, ll_backend__pragma_c_gen__V_222_222);
        }
#line 682 "pragma_c_gen.m"
      }
#line 711 "pragma_c_gen.m"
    {
#line 711 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_225_225 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__PragmaCCode_87, ll_backend__pragma_c_gen__FailureCode_95);
    }
#line 711 "pragma_c_gen.m"
    {
#line 711 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_224_224 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__InputVarsCode_46, ll_backend__pragma_c_gen__V_225_225);
    }
#line 711 "pragma_c_gen.m"
    {
#line 711 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__Code_26 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__SaveVarsCode_41, ll_backend__pragma_c_gen__V_224_224);
    }
#line 448 "pragma_c_gen.m"
  }
#line 440 "pragma_c_gen.m"
}

#line 408 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(
#line 408 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Expr_5,
#line 408 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__CondRval_6,
#line 408 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19,
#line 408 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20)
#line 408 "pragma_c_gen.m"
{
#line 413 "pragma_c_gen.m"
  {
#line 413 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 413 "pragma_c_gen.m"
#line 413 "pragma_c_gen.m"
    switch (MR_tag((MR_Word) ll_backend__pragma_c_gen__Expr_5)) {
#line 413 "pragma_c_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 413 "pragma_c_gen.m"
      case (MR_Integer) 0:
#line 413 "pragma_c_gen.m"
        {
#line 413 "pragma_c_gen.m"
          MR_String ll_backend__pragma_c_gen__EnvVar_8;
#line 413 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__UsedEnvVars0_9;
#line 413 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__UsedEnvVars_10;
#line 413 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__EnvVarRval_11;
#line 413 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 0)));
#line 413 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_27_27;
#line 413 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_28_28;

#line 413 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__EnvVar_8 = (MR_String) ll_backend__pragma_c_gen__V_25_25;
#line 414 "pragma_c_gen.m"
          {
#line 414 "pragma_c_gen.m"
            ll_backend__code_info__get_used_env_vars_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, &ll_backend__pragma_c_gen__UsedEnvVars0_9);
          }
#line 415 "pragma_c_gen.m"
          {
#line 415 "pragma_c_gen.m"
            mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ll_backend__pragma_c_gen__EnvVar_8)), ll_backend__pragma_c_gen__UsedEnvVars0_9, &ll_backend__pragma_c_gen__UsedEnvVars_10);
          }
#line 416 "pragma_c_gen.m"
          {
#line 416 "pragma_c_gen.m"
            ll_backend__code_info__set_used_env_vars_3_p_0(ll_backend__pragma_c_gen__UsedEnvVars_10, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);
          }
#line 417 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_28_28 = (MR_Word) ll_backend__pragma_c_gen__EnvVar_8;
#line 417 "pragma_c_gen.m"
          {
#line 417 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 417 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_28_28));
#line 417 "pragma_c_gen.m"
          }
#line 417 "pragma_c_gen.m"
          {
#line 417 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__EnvVarRval_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 417 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__EnvVarRval_11, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_27_27));
#line 417 "pragma_c_gen.m"
          }
#line 419 "pragma_c_gen.m"
          {
#line 419 "pragma_c_gen.m"
            MR_Word base;
#line 419 "pragma_c_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 419 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__CondRval_6 = base;
#line 419 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 419 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 419 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__pragma_c_gen__EnvVarRval_11));
#line 419 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__pragma_c_gen_scalar_common_1[3])));
#line 419 "pragma_c_gen.m"
          }
#line 413 "pragma_c_gen.m"
        }
#line 413 "pragma_c_gen.m"
        break;
#line 413 "pragma_c_gen.m"
      case (MR_Integer) 1:
#line 421 "pragma_c_gen.m"
        {
#line 421 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__ExprA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 0)));
#line 421 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__RvalA_14;

#line 422 "pragma_c_gen.m"
          {
#line 422 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__ExprA_13, &ll_backend__pragma_c_gen__RvalA_14, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);
          }
#line 423 "pragma_c_gen.m"
          {
#line 423 "pragma_c_gen.m"
            MR_Word base;
#line 423 "pragma_c_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 423 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__CondRval_6 = base;
#line 423 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 423 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 7));
#line 423 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__pragma_c_gen__RvalA_14));
#line 423 "pragma_c_gen.m"
          }
#line 421 "pragma_c_gen.m"
        }
#line 413 "pragma_c_gen.m"
        break;
#line 413 "pragma_c_gen.m"
      case (MR_Integer) 2:
#line 425 "pragma_c_gen.m"
        {
#line 425 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__TraceOp_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 0)));
#line 425 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__ExprB_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 2)));
#line 425 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__RvalB_17;
#line 425 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__Op_18;
#line 425 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_21;
#line 425 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__ExprA_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 1)));
#line 425 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__RvalA_33;

#line 426 "pragma_c_gen.m"
          {
#line 426 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__ExprA_32, &ll_backend__pragma_c_gen__RvalA_33, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_21);
          }
#line 427 "pragma_c_gen.m"
          {
#line 427 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__ExprB_16, &ll_backend__pragma_c_gen__RvalB_17, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_21, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);
          }
#line 431 "pragma_c_gen.m"
#line 431 "pragma_c_gen.m"
          switch (ll_backend__pragma_c_gen__TraceOp_15) {
#line 431 "pragma_c_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 431 "pragma_c_gen.m"
            case (MR_Integer) 1:
#line 433 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__Op_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 431 "pragma_c_gen.m"
              break;
#line 431 "pragma_c_gen.m"
            case (MR_Integer) 0:
#line 430 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__Op_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 431 "pragma_c_gen.m"
              break;
#line 431 "pragma_c_gen.m"
          }
#line 435 "pragma_c_gen.m"
          {
#line 435 "pragma_c_gen.m"
            MR_Word base;
#line 435 "pragma_c_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 435 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__CondRval_6 = base;
#line 435 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 435 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Op_18));
#line 435 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__pragma_c_gen__RvalA_33));
#line 435 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__pragma_c_gen__RvalB_17));
#line 435 "pragma_c_gen.m"
          }
#line 425 "pragma_c_gen.m"
        }
#line 413 "pragma_c_gen.m"
        break;
#line 413 "pragma_c_gen.m"
    }
#line 413 "pragma_c_gen.m"
  }
#line 408 "pragma_c_gen.m"
}

#line 52 "pragma_c_gen.m"
MR_String MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0(void)
#line 52 "pragma_c_gen.m"
{
#line 1187 "pragma_c_gen.m"
  {
#line 1187 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 1187 "pragma_c_gen.m"
    return (MR_String) "MercurySuccessIndicator";
#line 1187 "pragma_c_gen.m"
  }
#line 52 "pragma_c_gen.m"
}

#line 47 "pragma_c_gen.m"
MR_String MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_struct_name_4_f_0(
#line 47 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleName_6,
#line 47 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__PredName_7,
#line 47 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__Arity_8,
#line 47 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_9)
#line 47 "pragma_c_gen.m"
{
#line 1182 "pragma_c_gen.m"
  {
#line 1182 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 1182 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__HeadVar__5_5;
#line 1182 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_11_11;
#line 1182 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_12_12;
#line 1182 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_13_13;
#line 1182 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_15_15;
#line 1182 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_16_16;
#line 1182 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_17_17;
#line 1182 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_19_19;
#line 1182 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_20_20;
#line 1182 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_21_21;
#line 1182 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_23_23;
#line 1182 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__V_24_24;

#line 1183 "pragma_c_gen.m"
    {
#line 1183 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_12_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__pragma_c_gen__ModuleName_6);
    }
#line 1184 "pragma_c_gen.m"
    {
#line 1184 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_16_16 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__pragma_c_gen__PredName_7);
    }
#line 1184 "pragma_c_gen.m"
    {
#line 1184 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_20_20 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__Arity_8);
    }
#line 1185 "pragma_c_gen.m"
    {
#line 1185 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_24_24 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__pragma_c_gen__ProcId_9);
    }
#line 1185 "pragma_c_gen.m"
    {
#line 1185 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_23_23 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_24_24);
    }
#line 1184 "pragma_c_gen.m"
    {
#line 1184 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__pragma_c_gen__V_23_23);
    }
#line 1184 "pragma_c_gen.m"
    {
#line 1184 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_20_20, ll_backend__pragma_c_gen__V_21_21);
    }
#line 1184 "pragma_c_gen.m"
    {
#line 1184 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__pragma_c_gen__V_19_19);
    }
#line 1184 "pragma_c_gen.m"
    {
#line 1184 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_16_16, ll_backend__pragma_c_gen__V_17_17);
    }
#line 1183 "pragma_c_gen.m"
    {
#line 1183 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__pragma_c_gen__V_15_15);
    }
#line 1183 "pragma_c_gen.m"
    {
#line 1183 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_12_12, ll_backend__pragma_c_gen__V_13_13);
    }
#line 1183 "pragma_c_gen.m"
    {
#line 1183 "pragma_c_gen.m"
      return ll_backend__pragma_c_gen__HeadVar__5_5 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_save__", ll_backend__pragma_c_gen__V_11_11);
    }
#line 1182 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__HeadVar__5_5;
#line 1182 "pragma_c_gen.m"
  }
#line 47 "pragma_c_gen.m"
}

#line 379 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3(
#line 379 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg)
#line 379 "pragma_c_gen.m"
{
#line 379 "pragma_c_gen.m"
  {
#line 379 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 379 "pragma_c_gen.m"
    MR_Box ll_backend__pragma_c_gen__closure = ll_backend__pragma_c_gen__closure_arg;

#line 379 "pragma_c_gen.m"
    {
#line 379 "pragma_c_gen.m"
      return ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__379__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 4))));
    }
#line 379 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 379 "pragma_c_gen.m"
  }
#line 379 "pragma_c_gen.m"
}

#line 377 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2(
#line 377 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg)
#line 377 "pragma_c_gen.m"
{
#line 377 "pragma_c_gen.m"
  {
#line 377 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 377 "pragma_c_gen.m"
    MR_Box ll_backend__pragma_c_gen__closure = ll_backend__pragma_c_gen__closure_arg;

#line 377 "pragma_c_gen.m"
    {
#line 377 "pragma_c_gen.m"
      return ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__377__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 4))));
    }
#line 377 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 377 "pragma_c_gen.m"
  }
#line 377 "pragma_c_gen.m"
}

#line 375 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1(
#line 375 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg)
#line 375 "pragma_c_gen.m"
{
#line 375 "pragma_c_gen.m"
  {
#line 375 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 375 "pragma_c_gen.m"
    MR_Box ll_backend__pragma_c_gen__closure = ll_backend__pragma_c_gen__closure_arg;

#line 375 "pragma_c_gen.m"
    {
#line 375 "pragma_c_gen.m"
      return ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__375__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 4))));
    }
#line 375 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 375 "pragma_c_gen.m"
  }
#line 375 "pragma_c_gen.m"
}

#line 40 "pragma_c_gen.m"
void MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0(
#line 40 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_15,
#line 40 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Attributes_16,
#line 40 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_17,
#line 40 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_18,
#line 40 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_19,
#line 40 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_20,
#line 40 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__MaybeTraceRuntimeCond_21,
#line 40 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PragmaImpl_22,
#line 40 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__GoalInfo_23,
#line 40 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__Code_24,
#line 40 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_31,
#line 40 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_32,
#line 40 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_33,
#line 40 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_34)
#line 40 "pragma_c_gen.m"
{
#line 365 "pragma_c_gen.m"
  {
#line 365 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 365 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__C_Code_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaImpl_22, (MR_Integer) 0)));
#line 365 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaImpl_22, (MR_Integer) 1)));

#line 373 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__MaybeTraceRuntimeCond_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 368 "pragma_c_gen.m"
      {
#line 370 "pragma_c_gen.m"
        {
#line 370 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(ll_backend__pragma_c_gen__CodeModel_15, ll_backend__pragma_c_gen__Attributes_16, ll_backend__pragma_c_gen__PredId_17, ll_backend__pragma_c_gen__ProcId_18, ll_backend__pragma_c_gen__Args_19, ll_backend__pragma_c_gen__ExtraArgs_20, ll_backend__pragma_c_gen__C_Code_27, ll_backend__pragma_c_gen__Context_28, ll_backend__pragma_c_gen__GoalInfo_23, (MR_Integer) 1, ll_backend__pragma_c_gen__Code_24, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_31, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_32, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_33, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_34);
#line 370 "pragma_c_gen.m"
          return;
        }
#line 368 "pragma_c_gen.m"
      }
#line 373 "pragma_c_gen.m"
    else
#line 374 "pragma_c_gen.m"
      {
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_33_83;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TraceRuntimeCond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeTraceRuntimeCond_21, (MR_Integer) 0)));
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_35_35;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_40_40;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_45_45;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__CondRval_65;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__SuccessLabel_66;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BeforeFailure_67;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__FailCode_68;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__CondCode_69;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__SuccessLabelCode_70;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_71;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_22_72;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_75_75;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_76_76;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_77_77;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_79_79;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_80_80;
#line 374 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_82_82;

#line 375 "pragma_c_gen.m"
        {
#line 375 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 375 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_2[0]));
#line 375 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1));
#line 375 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 375 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 3) = ((MR_Box) (ll_backend__pragma_c_gen__Args_19));
#line 375 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "pragma_c_gen.m"
        }
#line 375 "pragma_c_gen.m"
        {
#line 375 "pragma_c_gen.m"
          mercury__require__expect_4_p_0(ll_backend__pragma_c_gen__V_35_35, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "args runtime cond");
        }
#line 377 "pragma_c_gen.m"
        {
#line 377 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 377 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_2[0]));
#line 377 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2));
#line 377 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 377 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 3) = ((MR_Box) (ll_backend__pragma_c_gen__ExtraArgs_20));
#line 377 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 377 "pragma_c_gen.m"
        }
#line 377 "pragma_c_gen.m"
        {
#line 377 "pragma_c_gen.m"
          mercury__require__expect_4_p_0(ll_backend__pragma_c_gen__V_40_40, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "extra args runtime cond");
        }
#line 379 "pragma_c_gen.m"
        {
#line 379 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 379 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_2[1]));
#line 379 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3));
#line 379 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 379 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 3) = ((MR_Box) (ll_backend__pragma_c_gen__CodeModel_15));
#line 379 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 4) = ((MR_Box) ((MR_Integer) 1));
#line 379 "pragma_c_gen.m"
        }
#line 379 "pragma_c_gen.m"
        {
#line 379 "pragma_c_gen.m"
          mercury__require__expect_4_p_0(ll_backend__pragma_c_gen__V_45_45, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "non-semi runtime cond");
        }
#line 392 "pragma_c_gen.m"
        {
#line 392 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__TraceRuntimeCond_30, &ll_backend__pragma_c_gen__CondRval_65, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_31, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_71);
        }
#line 393 "pragma_c_gen.m"
        {
#line 393 "pragma_c_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__pragma_c_gen__SuccessLabel_66, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_71, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_22_72);
        }
#line 394 "pragma_c_gen.m"
        {
#line 394 "pragma_c_gen.m"
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_33, &ll_backend__pragma_c_gen__BeforeFailure_67);
        }
#line 395 "pragma_c_gen.m"
        {
#line 395 "pragma_c_gen.m"
          ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__pragma_c_gen__FailCode_68, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_22_72, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_32, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_33);
        }
#line 396 "pragma_c_gen.m"
        {
#line 396 "pragma_c_gen.m"
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__pragma_c_gen__BeforeFailure_67, *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_32, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_34);
        }
#line 5885 "ll_backend.pragma_c_gen.c"
        ll_backend__pragma_c_gen__TypeCtorInfo_33_83 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 399 "pragma_c_gen.m"
        {
#line 399 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_77_77, 0) = ((MR_Box) (ll_backend__pragma_c_gen__SuccessLabel_66));
#line 399 "pragma_c_gen.m"
        }
#line 399 "pragma_c_gen.m"
        {
#line 399 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 399 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 399 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_76_76, 1) = ((MR_Box) (ll_backend__pragma_c_gen__CondRval_65));
#line 399 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_76_76, 2) = ((MR_Box) (ll_backend__pragma_c_gen__V_77_77));
#line 399 "pragma_c_gen.m"
        }
#line 399 "pragma_c_gen.m"
        {
#line 399 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 399 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_76_76));
#line 399 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, 1) = ((MR_Box) ((MR_String) "environment variable tests"));
#line 399 "pragma_c_gen.m"
        }
#line 398 "pragma_c_gen.m"
        {
#line 398 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__CondCode_69 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_33_83, ((MR_Box) (ll_backend__pragma_c_gen__V_75_75)));
        }
#line 403 "pragma_c_gen.m"
        {
#line 403 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 403 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_80_80, 1) = ((MR_Box) (ll_backend__pragma_c_gen__SuccessLabel_66));
#line 403 "pragma_c_gen.m"
        }
#line 403 "pragma_c_gen.m"
        {
#line 403 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 403 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_79_79, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_80_80));
#line 403 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_79_79, 1) = ((MR_Box) ((MR_String) "environment variable tests successful"));
#line 403 "pragma_c_gen.m"
        }
#line 402 "pragma_c_gen.m"
        {
#line 402 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__SuccessLabelCode_70 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_33_83, ((MR_Box) (ll_backend__pragma_c_gen__V_79_79)));
        }
#line 406 "pragma_c_gen.m"
        {
#line 406 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_82_82 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_33_83, ll_backend__pragma_c_gen__FailCode_68, ll_backend__pragma_c_gen__SuccessLabelCode_70);
        }
#line 406 "pragma_c_gen.m"
        {
#line 406 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_33_83, ll_backend__pragma_c_gen__CondCode_69, ll_backend__pragma_c_gen__V_82_82);
        }
#line 374 "pragma_c_gen.m"
      }
#line 365 "pragma_c_gen.m"
  }
#line 40 "pragma_c_gen.m"
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
