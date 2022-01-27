/*
** Automatically generated from `pragma_c_gen.m'
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


/* :- module ll_backend.pragma_c_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__pragma_c_gen__init
ENDINIT
*/

#include "ll_backend.pragma_c_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "int.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 166 "ll_backend.pragma_c_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 169 "ll_backend.pragma_c_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "ll_backend.pragma_c_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 175 "ll_backend.pragma_c_gen.c"
static const MR_PseudoTypeInfo ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0[5];

#line 178 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDesc ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0;

#line 181 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0[1];

#line 184 "ll_backend.pragma_c_gen.c"
static const MR_DuPtagLayout ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0[1];

#line 187 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_name_ordered_c_arg_0[1];

#line 190 "ll_backend.pragma_c_gen.c"
static const MR_Integer ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__functor_number_map_c_arg_0[1];

#line 193 "ll_backend.pragma_c_gen.c"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001(
#line 196 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_1,
#line 198 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2);

#line 201 "ll_backend.pragma_c_gen.c"
static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001(
#line 204 "ll_backend.pragma_c_gen.c"
  MR_Box * ll_backend__pragma_c_gen__wrapper_arg_1,
#line 206 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2,
#line 208 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_3);

#line 384 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__384__1_2_p_0(
#line 384 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_15,
#line 384 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_49);

#line 382 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__382__1_2_p_0(
#line 382 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_20,
#line 382 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_44);

#line 380 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__380__1_2_p_0(
#line 380 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_19,
#line 380 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_39);

#line 786 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0(
#line 786 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__1_1,
#line 786 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 786 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__3_3);

#line 786 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0(
#line 786 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 786 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2);

#line 1094 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(
#line 1094 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 1094 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1094 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 1094 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
#line 1094 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__5_5,
#line 1094 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6,
#line 1094 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);

#line 1061 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(
#line 1061 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__FloatRegType_1,
#line 1061 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1061 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3,
#line 1061 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_4,
#line 1061 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_5);

#line 1002 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(
#line 1002 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 1002 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1002 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 1002 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
#line 1002 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__5_5,
#line 1002 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6,
#line 1002 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);

#line 982 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(
#line 982 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 982 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PostDeaths_2,
#line 982 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3,
#line 982 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_4);

#line 955 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(
#line 955 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 955 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Module_2,
#line 955 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 955 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4);

#line 896 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(
#line 896 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 896 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2);

#line 876 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(
#line 876 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 876 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2);

#line 864 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(
#line 864 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 864 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2);

#line 841 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(
#line 841 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 841 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_2,
#line 841 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__LastReg_3,
#line 841 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4);

#line 827 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(
#line 827 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 827 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2,
#line 827 "pragma_c_gen.m"
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_3,
#line 827 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4,
#line 827 "pragma_c_gen.m"
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_5);

#line 820 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(
#line 820 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_5,
#line 820 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
#line 820 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ArgInfos_7,
#line 820 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ExtraCArgs_8);

#line 798 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(
#line 798 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 798 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 798 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3);

#line 746 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(
#line 746 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__C_Code_7,
#line 746 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__MaybeContext_8,
#line 746 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashDefine_9,
#line 746 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashUndef_10,
#line 746 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17,
#line 746 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18);

#line 723 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(
#line 723 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
#line 723 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_7,
#line 723 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_8,
#line 723 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashDef_9,
#line 723 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashUndef_10);

#line 445 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_16,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Attributes_17,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_18,
#line 445 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_19,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_20,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_21,
#line 445 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__C_Code_22,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Context_23,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__GoalInfo_24,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25,
#line 445 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__Code_26,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96,
#line 445 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_98,
#line 445 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99);

#line 413 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(
#line 413 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Expr_5,
#line 413 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__CondRval_6,
#line 413 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19,
#line 413 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);

#line 384 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3(
#line 384 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg);

#line 382 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2(
#line 382 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg);

#line 380 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1(
#line 380 "pragma_c_gen.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 561 "ll_backend.pragma_c_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__pragma_c_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 569 "ll_backend.pragma_c_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 577 "ll_backend.pragma_c_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 585 "ll_backend.pragma_c_gen.c"
static const MR_PseudoTypeInfo ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__field_types_c_arg_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__pragma_c_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__pragma_c_gen__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_box_policy_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0
};

#line 594 "ll_backend.pragma_c_gen.c"
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

#line 609 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0[1] = {
  &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0
};

#line 614 "ll_backend.pragma_c_gen.c"
static const MR_DuPtagLayout ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0
  }
};

#line 623 "ll_backend.pragma_c_gen.c"
static const MR_DuFunctorDescPtr ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_name_ordered_c_arg_0[1] = {
  &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0
};

#line 628 "ll_backend.pragma_c_gen.c"
static const MR_Integer ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__functor_number_map_c_arg_0[1] = {
  (MR_Integer) 0
};

#line 633 "ll_backend.pragma_c_gen.c"
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

#line 650 "ll_backend.pragma_c_gen.c"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0_10001(
#line 653 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_1,
#line 655 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2)
#line 657 "ll_backend.pragma_c_gen.c"
{
#line 659 "ll_backend.pragma_c_gen.c"
  {
#line 661 "ll_backend.pragma_c_gen.c"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 664 "ll_backend.pragma_c_gen.c"
    {
#line 666 "ll_backend.pragma_c_gen.c"
      ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen____Unify____c_arg_0_0(((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_1), ((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_2));
    }
#line 669 "ll_backend.pragma_c_gen.c"
    return ll_backend__pragma_c_gen__succeeded;
#line 671 "ll_backend.pragma_c_gen.c"
  }
#line 673 "ll_backend.pragma_c_gen.c"
}

#line 676 "ll_backend.pragma_c_gen.c"
static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0_10001(
#line 679 "ll_backend.pragma_c_gen.c"
  MR_Box * ll_backend__pragma_c_gen__wrapper_arg_1,
#line 681 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_2,
#line 683 "ll_backend.pragma_c_gen.c"
  MR_Box ll_backend__pragma_c_gen__wrapper_arg_3)
#line 685 "ll_backend.pragma_c_gen.c"
{
#line 687 "ll_backend.pragma_c_gen.c"
  {
#line 689 "ll_backend.pragma_c_gen.c"
    MR_Word ll_backend__pragma_c_gen__conv0_HeadVar__1_1;

#line 692 "ll_backend.pragma_c_gen.c"
    {
#line 694 "ll_backend.pragma_c_gen.c"
      ll_backend__pragma_c_gen____Compare____c_arg_0_0(&ll_backend__pragma_c_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_2), ((MR_Word) ll_backend__pragma_c_gen__wrapper_arg_3));
    }
#line 697 "ll_backend.pragma_c_gen.c"
    *ll_backend__pragma_c_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__pragma_c_gen__conv0_HeadVar__1_1));
#line 699 "ll_backend.pragma_c_gen.c"
  }
#line 701 "ll_backend.pragma_c_gen.c"
}

#line 384 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__384__1_2_p_0(
#line 384 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_15,
#line 384 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_49)
#line 384 "pragma_c_gen.m"
{
#line 384 "pragma_c_gen.m"
  {
#line 384 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CodeModel_15 == ll_backend__pragma_c_gen__HeadVar__2_49);

#line 384 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 384 "pragma_c_gen.m"
  }
#line 384 "pragma_c_gen.m"
}

#line 382 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__382__1_2_p_0(
#line 382 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_20,
#line 382 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_44)
#line 382 "pragma_c_gen.m"
{
#line 382 "pragma_c_gen.m"
  {
#line 382 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 382 "pragma_c_gen.m"
    {
#line 382 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[0], ((MR_Box) (ll_backend__pragma_c_gen__ExtraArgs_20)), ((MR_Box) (ll_backend__pragma_c_gen__HeadVar__2_44)));
    }
#line 382 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 382 "pragma_c_gen.m"
  }
#line 382 "pragma_c_gen.m"
}

#line 380 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__380__1_2_p_0(
#line 380 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_19,
#line 380 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_39)
#line 380 "pragma_c_gen.m"
{
#line 380 "pragma_c_gen.m"
  {
#line 380 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 380 "pragma_c_gen.m"
    {
#line 380 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[0], ((MR_Box) (ll_backend__pragma_c_gen__Args_19)), ((MR_Box) (ll_backend__pragma_c_gen__HeadVar__2_39)));
    }
#line 380 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 380 "pragma_c_gen.m"
  }
#line 380 "pragma_c_gen.m"
}

#line 786 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen____Compare____c_arg_0_0(
#line 786 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__1_1,
#line 786 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 786 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__3_3)
#line 786 "pragma_c_gen.m"
{
#line 786 "pragma_c_gen.m"
  {
#line 786 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 786 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CastX_18 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__2_2;
#line 786 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CastY_19 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__3_3;

#line 786 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CastX_18 == ll_backend__pragma_c_gen__CastY_19);
#line 786 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 801 "ll_backend.pragma_c_gen.c"
      *ll_backend__pragma_c_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 786 "pragma_c_gen.m"
    else
#line 786 "pragma_c_gen.m"
      {
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_14_14;

#line 786 "pragma_c_gen.m"
        {
#line 786 "pragma_c_gen.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[1], &ll_backend__pragma_c_gen__V_14_14, ((MR_Box) (ll_backend__pragma_c_gen__V_4_4)), ((MR_Box) (ll_backend__pragma_c_gen__V_9_9)));
        }
#line 835 "ll_backend.pragma_c_gen.c"
        ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_14_14 == (MR_Integer) 0);
#line 786 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 786 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 786 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_14_14;
#line 786 "pragma_c_gen.m"
        else
#line 786 "pragma_c_gen.m"
          {
#line 786 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_15_15;

#line 786 "pragma_c_gen.m"
            {
#line 786 "pragma_c_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[2], &ll_backend__pragma_c_gen__V_15_15, ((MR_Box) (ll_backend__pragma_c_gen__V_5_5)), ((MR_Box) (ll_backend__pragma_c_gen__V_10_10)));
            }
#line 855 "ll_backend.pragma_c_gen.c"
            ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_15_15 == (MR_Integer) 0);
#line 786 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 786 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 786 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_15_15;
#line 786 "pragma_c_gen.m"
            else
#line 786 "pragma_c_gen.m"
              {
#line 786 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_16_16;

#line 786 "pragma_c_gen.m"
                {
#line 786 "pragma_c_gen.m"
                  parse_tree__prog_data____Compare____mer_type_0_0(&ll_backend__pragma_c_gen__V_16_16, ll_backend__pragma_c_gen__V_6_6, ll_backend__pragma_c_gen__V_11_11);
                }
#line 875 "ll_backend.pragma_c_gen.c"
                ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_16_16 == (MR_Integer) 0);
#line 786 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 786 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 786 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_16_16;
#line 786 "pragma_c_gen.m"
                else
#line 786 "pragma_c_gen.m"
                  {
#line 786 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__V_17_17;
#line 786 "pragma_c_gen.m"
                    MR_Integer ll_backend__pragma_c_gen__V_25_25 = (MR_Integer) ll_backend__pragma_c_gen__V_7_7;
#line 786 "pragma_c_gen.m"
                    MR_Integer ll_backend__pragma_c_gen__V_26_26 = (MR_Integer) ll_backend__pragma_c_gen__V_12_12;

#line 786 "pragma_c_gen.m"
                    {
#line 786 "pragma_c_gen.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__pragma_c_gen__V_17_17, ll_backend__pragma_c_gen__V_25_25, ll_backend__pragma_c_gen__V_26_26);
                    }
#line 899 "ll_backend.pragma_c_gen.c"
                    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_17_17 == (MR_Integer) 0);
#line 786 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 786 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 786 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__V_17_17;
#line 786 "pragma_c_gen.m"
                    else
#line 786 "pragma_c_gen.m"
                      {
#line 786 "pragma_c_gen.m"
                        hlds__hlds_pred____Compare____arg_info_0_0(ll_backend__pragma_c_gen__HeadVar__1_1, ll_backend__pragma_c_gen__V_8_8, ll_backend__pragma_c_gen__V_13_13);
                      }
#line 786 "pragma_c_gen.m"
                  }
#line 786 "pragma_c_gen.m"
              }
#line 786 "pragma_c_gen.m"
          }
#line 786 "pragma_c_gen.m"
      }
#line 786 "pragma_c_gen.m"
  }
#line 786 "pragma_c_gen.m"
}

#line 786 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen____Unify____c_arg_0_0(
#line 786 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 786 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2)
#line 786 "pragma_c_gen.m"
{
#line 786 "pragma_c_gen.m"
  {
#line 786 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 786 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CastX_13 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__1_1;
#line 786 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CastY_14 = (MR_Integer) ll_backend__pragma_c_gen__HeadVar__2_2;

#line 786 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__CastX_13 == ll_backend__pragma_c_gen__CastY_14);
#line 786 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 786 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__succeeded = MR_TRUE;
#line 786 "pragma_c_gen.m"
    else
#line 786 "pragma_c_gen.m"
      {
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TypeInfo_16_16;
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 786 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 4)));

#line 978 "ll_backend.pragma_c_gen.c"
        {
#line 980 "ll_backend.pragma_c_gen.c"
          ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[1], ((MR_Box) (ll_backend__pragma_c_gen__V_3_3)), ((MR_Box) (ll_backend__pragma_c_gen__V_8_8)));
        }
#line 786 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 786 "pragma_c_gen.m"
          {
#line 987 "ll_backend.pragma_c_gen.c"
            ll_backend__pragma_c_gen__TypeInfo_16_16 = (MR_Word) &ll_backend__pragma_c_gen_scalar_common_1[2];
#line 989 "ll_backend.pragma_c_gen.c"
            {
#line 991 "ll_backend.pragma_c_gen.c"
              ll_backend__pragma_c_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__pragma_c_gen__TypeInfo_16_16, ((MR_Box) (ll_backend__pragma_c_gen__V_4_4)), ((MR_Box) (ll_backend__pragma_c_gen__V_9_9)));
            }
#line 786 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 786 "pragma_c_gen.m"
              {
#line 998 "ll_backend.pragma_c_gen.c"
                {
#line 1000 "ll_backend.pragma_c_gen.c"
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__pragma_c_gen__V_5_5, ll_backend__pragma_c_gen__V_10_10);
                }
#line 786 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 786 "pragma_c_gen.m"
                  {
#line 1007 "ll_backend.pragma_c_gen.c"
                    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__V_6_6 == ll_backend__pragma_c_gen__V_11_11);
#line 786 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1011 "ll_backend.pragma_c_gen.c"
                      {
#line 1013 "ll_backend.pragma_c_gen.c"
                        ll_backend__pragma_c_gen__succeeded = hlds__hlds_pred____Unify____arg_info_0_0(ll_backend__pragma_c_gen__V_7_7, ll_backend__pragma_c_gen__V_12_12);
                      }
#line 786 "pragma_c_gen.m"
                  }
#line 786 "pragma_c_gen.m"
              }
#line 786 "pragma_c_gen.m"
          }
#line 786 "pragma_c_gen.m"
      }
#line 786 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 786 "pragma_c_gen.m"
  }
#line 786 "pragma_c_gen.m"
}

#line 1094 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(
#line 1094 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 1094 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1094 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 1094 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
#line 1094 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__5_5,
#line 1094 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6,
#line 1094 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7)
#line 1094 "pragma_c_gen.m"
{
#line 1098 "pragma_c_gen.m"
  {
#line 1098 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 1098 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1098 "pragma_c_gen.m"
      if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1098 "pragma_c_gen.m"
        {
#line 1098 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1098 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6;
#line 1098 "pragma_c_gen.m"
        }
#line 1098 "pragma_c_gen.m"
      else
#line 1127 "pragma_c_gen.m"
        {
#line 1128 "pragma_c_gen.m"
          {
#line 1128 "pragma_c_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/7", (MR_String) "length mismatch");
#line 1128 "pragma_c_gen.m"
            return;
          }
#line 1127 "pragma_c_gen.m"
        }
#line 1098 "pragma_c_gen.m"
    else
#line 1098 "pragma_c_gen.m"
      {
#line 1098 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1098 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 1098 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1125 "pragma_c_gen.m"
          {
#line 1126 "pragma_c_gen.m"
            {
#line 1126 "pragma_c_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/7", (MR_String) "length mismatch");
#line 1126 "pragma_c_gen.m"
              return;
            }
#line 1125 "pragma_c_gen.m"
          }
#line 1098 "pragma_c_gen.m"
        else
#line 1100 "pragma_c_gen.m"
          {
#line 1100 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Reg_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1100 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Regs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1100 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__OutputsTail_21;
#line 1100 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Var_22;
#line 1100 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__MaybeArgName_23;
#line 1100 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__OrigType_24;
#line 1100 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__BoxPolicy_25;
#line 1100 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_36_36;
#line 1100 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37;
#line 1103 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___ArgInfo_26;

#line 1101 "pragma_c_gen.m"
            {
#line 1101 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(ll_backend__pragma_c_gen__V_61_61, ll_backend__pragma_c_gen__Regs_16, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__OutputsTail_21, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_36_36);
            }
#line 1103 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 0)));
#line 1103 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__MaybeArgName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 1)));
#line 1103 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__OrigType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 2)));
#line 1103 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__BoxPolicy_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 3)));
#line 1103 "pragma_c_gen.m"
            ll_backend__pragma_c_gen___ArgInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_62_62, (MR_Integer) 4)));
#line 1104 "pragma_c_gen.m"
            {
#line 1104 "pragma_c_gen.m"
              ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__pragma_c_gen__Reg_15, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_36_36, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37);
            }
#line 1105 "pragma_c_gen.m"
            {
#line 1105 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37, ll_backend__pragma_c_gen__Var_22);
            }
#line 1105 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 1106 "pragma_c_gen.m"
              {
#line 1106 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__ModuleInfo_27;
#line 1106 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__MaybeForeign_28;
#line 1106 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeTable_66;
#line 1036 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__MaybeC_70;
#line 1037 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeCtor_67;
#line 1037 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeDefn_68;
#line 1037 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeBody_69;
#line 1037 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_78_78;
#line 1041 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeJava_71;
#line 1041 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeCSharp_72;
#line 1041 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeErlang_73;
#line 1178 "ll_backend.pragma_c_gen.c"
                MR_String ll_backend__pragma_c_gen__Name_88;
#line 934 "pragma_c_gen.m"
                MR_Char ll_backend__pragma_c_gen__V_91_91;
#line 934 "pragma_c_gen.m"
                MR_String ll_backend__pragma_c_gen__V_89_89;

#line 1106 "pragma_c_gen.m"
                {
#line 1106 "pragma_c_gen.m"
                  ll_backend__code_loc_dep__set_var_location_4_p_0(ll_backend__pragma_c_gen__Var_22, ll_backend__pragma_c_gen__Reg_15, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);
                }
#line 1107 "pragma_c_gen.m"
                {
#line 1107 "pragma_c_gen.m"
                  ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__HeadVar__5_5, &ll_backend__pragma_c_gen__ModuleInfo_27);
                }
#line 1035 "pragma_c_gen.m"
                {
#line 1035 "pragma_c_gen.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__pragma_c_gen__ModuleInfo_27, &ll_backend__pragma_c_gen__TypeTable_66);
                }
#line 1037 "pragma_c_gen.m"
                {
#line 1037 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__pragma_c_gen__OrigType_24, &ll_backend__pragma_c_gen__TypeCtor_67);
                }
#line 1037 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1037 "pragma_c_gen.m"
                  {
#line 1038 "pragma_c_gen.m"
                    {
#line 1038 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__pragma_c_gen__TypeTable_66, ll_backend__pragma_c_gen__TypeCtor_67, &ll_backend__pragma_c_gen__TypeDefn_68);
                    }
#line 1037 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1037 "pragma_c_gen.m"
                      {
#line 1039 "pragma_c_gen.m"
                        {
#line 1039 "pragma_c_gen.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__pragma_c_gen__TypeDefn_68, &ll_backend__pragma_c_gen__TypeBody_69);
                        }
#line 1040 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__TypeBody_69)) == (MR_mktag((MR_Integer) 0)));
#line 1040 "pragma_c_gen.m"
                        if (ll_backend__pragma_c_gen__succeeded)
#line 1040 "pragma_c_gen.m"
                          {
#line 1040 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__V_78_78 = (MR_Word) MR_body(((MR_Word) ll_backend__pragma_c_gen__TypeBody_69), (MR_Integer) 0);
#line 1041 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__MaybeC_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_78_78, (MR_Integer) 0)));
#line 1041 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeJava_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_78_78, (MR_Integer) 1)));
#line 1041 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeCSharp_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_78_78, (MR_Integer) 2)));
#line 1041 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeErlang_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_78_78, (MR_Integer) 3)));
#line 1041 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__succeeded = MR_TRUE;
#line 1040 "pragma_c_gen.m"
                          }
#line 1037 "pragma_c_gen.m"
                      }
#line 1037 "pragma_c_gen.m"
                  }
#line 1036 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1047 "pragma_c_gen.m"
                  if ((ll_backend__pragma_c_gen__MaybeC_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1048 "pragma_c_gen.m"
                    {
#line 1050 "pragma_c_gen.m"
                      {
#line 1050 "pragma_c_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
#line 1050 "pragma_c_gen.m"
                        return;
                      }
#line 1048 "pragma_c_gen.m"
                    }
#line 1047 "pragma_c_gen.m"
                  else
#line 1044 "pragma_c_gen.m"
                    {
#line 1044 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Data_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeC_70, (MR_Integer) 0)));
#line 1044 "pragma_c_gen.m"
                      MR_String ll_backend__pragma_c_gen__Name_75;
#line 1044 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Assertions_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_74, (MR_Integer) 2)));
#line 1044 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_74, (MR_Integer) 0)));
#line 1044 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_83_83;
#line 1045 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_74, (MR_Integer) 1)));

#line 1045 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__Name_75 = (MR_String) ll_backend__pragma_c_gen__V_82_82;
#line 1046 "pragma_c_gen.m"
                      {
#line 1046 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_83_83, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_75));
#line 1046 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_83_83, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Assertions_77));
#line 1046 "pragma_c_gen.m"
                      }
#line 1046 "pragma_c_gen.m"
                      {
#line 1046 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__MaybeForeign_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeForeign_28, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_83_83));
#line 1046 "pragma_c_gen.m"
                      }
#line 1044 "pragma_c_gen.m"
                    }
#line 1036 "pragma_c_gen.m"
                else
#line 1053 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__MaybeForeign_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 933 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__MaybeArgName_23)) == (MR_mktag((MR_Integer) 1)));
#line 933 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 933 "pragma_c_gen.m"
                  {
#line 933 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__Name_88 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeArgName_23, (MR_Integer) 0)));
#line 934 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__V_91_91 = (MR_Char) 95;
#line 934 "pragma_c_gen.m"
                    {
#line 934 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__succeeded = mercury__string__first_char_3_p_2(ll_backend__pragma_c_gen__Name_88, ll_backend__pragma_c_gen__V_91_91, &ll_backend__pragma_c_gen__V_89_89);
                    }
#line 934 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 933 "pragma_c_gen.m"
                  }
#line 1324 "ll_backend.pragma_c_gen.c"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1326 "ll_backend.pragma_c_gen.c"
                  {
#line 1328 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__VarType_31;
#line 1330 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__IsDummy_32;
#line 1332 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__PragmaCOutput_33;

#line 1113 "pragma_c_gen.m"
                    {
#line 1113 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__VarType_31 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__Var_22);
                    }
#line 1114 "pragma_c_gen.m"
                    {
#line 1114 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__IsDummy_32 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_27, ll_backend__pragma_c_gen__VarType_31);
                    }
#line 1115 "pragma_c_gen.m"
                    {
#line 1115 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__PragmaCOutput_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Reg_15));
#line 1115 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_31));
#line 1115 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_32));
#line 1115 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_24));
#line 1115 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Name_88));
#line 1115 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_28));
#line 1115 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_33, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_25));
#line 1115 "pragma_c_gen.m"
                    }
#line 1117 "pragma_c_gen.m"
                    {
#line 1117 "pragma_c_gen.m"
                      MR_Word base;
#line 1117 "pragma_c_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 1117 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__PragmaCOutput_33));
#line 1117 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OutputsTail_21));
#line 1117 "pragma_c_gen.m"
                    }
#line 1379 "ll_backend.pragma_c_gen.c"
                  }
#line 1381 "ll_backend.pragma_c_gen.c"
                else
#line 1383 "ll_backend.pragma_c_gen.c"
#line 1384 "ll_backend.pragma_c_gen.c"
                  switch (ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3) {
#line 1386 "ll_backend.pragma_c_gen.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1388 "ll_backend.pragma_c_gen.c"
                    case (MR_Integer) 0:
#line 1390 "ll_backend.pragma_c_gen.c"
                      {
#line 1392 "ll_backend.pragma_c_gen.c"
                        MR_String ll_backend__pragma_c_gen__V_93_93;
#line 1394 "ll_backend.pragma_c_gen.c"
                        MR_Integer ll_backend__pragma_c_gen__V_94_94;
#line 1396 "ll_backend.pragma_c_gen.c"
                        MR_String ll_backend__pragma_c_gen__Name_96;
#line 1398 "ll_backend.pragma_c_gen.c"
                        MR_Word ll_backend__pragma_c_gen__VarType_97;
#line 1400 "ll_backend.pragma_c_gen.c"
                        MR_Word ll_backend__pragma_c_gen__IsDummy_98;
#line 1402 "ll_backend.pragma_c_gen.c"
                        MR_Word ll_backend__pragma_c_gen__PragmaCOutput_99;

#line 943 "pragma_c_gen.m"
                        {
#line 943 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__V_94_94 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_22);
                        }
#line 943 "pragma_c_gen.m"
                        {
#line 943 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__V_93_93 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_94_94);
                        }
#line 943 "pragma_c_gen.m"
                        {
#line 943 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__Name_96 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", ll_backend__pragma_c_gen__V_93_93);
                        }
#line 1113 "pragma_c_gen.m"
                        {
#line 1113 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__VarType_97 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__Var_22);
                        }
#line 1114 "pragma_c_gen.m"
                        {
#line 1114 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__IsDummy_98 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_27, ll_backend__pragma_c_gen__VarType_97);
                        }
#line 1115 "pragma_c_gen.m"
                        {
#line 1115 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__PragmaCOutput_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Reg_15));
#line 1115 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_97));
#line 1115 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_98));
#line 1115 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_24));
#line 1115 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Name_96));
#line 1115 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_28));
#line 1115 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaCOutput_99, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_25));
#line 1115 "pragma_c_gen.m"
                        }
#line 1117 "pragma_c_gen.m"
                        {
#line 1117 "pragma_c_gen.m"
                          MR_Word base;
#line 1117 "pragma_c_gen.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "pragma_c_gen.m"
                          *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 1117 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__PragmaCOutput_99));
#line 1117 "pragma_c_gen.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OutputsTail_21));
#line 1117 "pragma_c_gen.m"
                        }
#line 1464 "ll_backend.pragma_c_gen.c"
                      }
#line 1466 "ll_backend.pragma_c_gen.c"
                      break;
#line 1468 "ll_backend.pragma_c_gen.c"
                    case (MR_Integer) 1:
#line 1119 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__4_4 = ll_backend__pragma_c_gen__OutputsTail_21;
#line 1472 "ll_backend.pragma_c_gen.c"
                      break;
#line 1474 "ll_backend.pragma_c_gen.c"
                  }
#line 1106 "pragma_c_gen.m"
              }
#line 1105 "pragma_c_gen.m"
            else
#line 1123 "pragma_c_gen.m"
              {
#line 1123 "pragma_c_gen.m"
                *ll_backend__pragma_c_gen__HeadVar__4_4 = ll_backend__pragma_c_gen__OutputsTail_21;
#line 1123 "pragma_c_gen.m"
                *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_37_37;
#line 1123 "pragma_c_gen.m"
              }
#line 1100 "pragma_c_gen.m"
          }
#line 1098 "pragma_c_gen.m"
      }
#line 1098 "pragma_c_gen.m"
  }
#line 1094 "pragma_c_gen.m"
}

#line 1061 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(
#line 1061 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__FloatRegType_1,
#line 1061 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1061 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3,
#line 1061 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_4,
#line 1061 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_5)
#line 1061 "pragma_c_gen.m"
{
#line 1065 "pragma_c_gen.m"
  {
#line 1065 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 1065 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "pragma_c_gen.m"
      {
#line 1065 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1065 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_5 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_4;
#line 1065 "pragma_c_gen.m"
      }
#line 1065 "pragma_c_gen.m"
    else
#line 1066 "pragma_c_gen.m"
      {
#line 1066 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1066 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1066 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Reg_13;
#line 1066 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Regs_14;
#line 1066 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 0)));
#line 1066 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__VarType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 2)));
#line 1066 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BoxPolicy_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 3)));
#line 1066 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__RegType_21;
#line 1066 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_24_24;
#line 1067 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 1)));
#line 1067 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_11, (MR_Integer) 4)));

#line 1077 "pragma_c_gen.m"
#line 1077 "pragma_c_gen.m"
        switch (ll_backend__pragma_c_gen__BoxPolicy_19) {
#line 1077 "pragma_c_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1077 "pragma_c_gen.m"
          case (MR_Integer) 1:
#line 1085 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__RegType_21 = (MR_Integer) 0;
#line 1077 "pragma_c_gen.m"
            break;
#line 1077 "pragma_c_gen.m"
          case (MR_Integer) 0:
#line 1078 "pragma_c_gen.m"
            {
#line 1078 "pragma_c_gen.m"
              MR_Word ll_backend__pragma_c_gen__V_30_30;

#line 1078 "pragma_c_gen.m"
              {
#line 1078 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__V_30_30 = parse_tree__builtin_lib_types__float_type_0_f_0();
              }
#line 1078 "pragma_c_gen.m"
              {
#line 1078 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__pragma_c_gen__VarType_18, ll_backend__pragma_c_gen__V_30_30);
              }
#line 1078 "pragma_c_gen.m"
              if (ll_backend__pragma_c_gen__succeeded)
#line 1079 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__RegType_21 = ll_backend__pragma_c_gen__FloatRegType_1;
#line 1078 "pragma_c_gen.m"
              else
#line 1081 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__RegType_21 = (MR_Integer) 0;
#line 1078 "pragma_c_gen.m"
            }
#line 1077 "pragma_c_gen.m"
            break;
#line 1077 "pragma_c_gen.m"
        }
#line 1069 "pragma_c_gen.m"
        {
#line 1069 "pragma_c_gen.m"
          ll_backend__code_loc_dep__acquire_reg_for_var_5_p_0(ll_backend__pragma_c_gen__Var_16, ll_backend__pragma_c_gen__RegType_21, &ll_backend__pragma_c_gen__Reg_13, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_4, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_24_24);
        }
#line 1070 "pragma_c_gen.m"
        {
#line 1070 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(ll_backend__pragma_c_gen__FloatRegType_1, ll_backend__pragma_c_gen__Args_12, &ll_backend__pragma_c_gen__Regs_14, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_24_24, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_5);
        }
#line 1066 "pragma_c_gen.m"
        {
#line 1066 "pragma_c_gen.m"
          MR_Word base;
#line 1066 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__3_3 = base;
#line 1066 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Reg_13));
#line 1066 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Regs_14));
#line 1066 "pragma_c_gen.m"
        }
#line 1066 "pragma_c_gen.m"
      }
#line 1065 "pragma_c_gen.m"
  }
#line 1061 "pragma_c_gen.m"
}

#line 1002 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(
#line 1002 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 1002 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2,
#line 1002 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 1002 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4,
#line 1002 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__5_5,
#line 1002 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6,
#line 1002 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7)
#line 1002 "pragma_c_gen.m"
{
#line 1006 "pragma_c_gen.m"
  while (MR_TRUE)
#line 1006 "pragma_c_gen.m"
    {
#line 1006 "pragma_c_gen.m"
      /* tailcall optimized into a loop */
#line 1006 "pragma_c_gen.m"
      {
#line 1006 "pragma_c_gen.m"
        MR_bool ll_backend__pragma_c_gen__succeeded;

#line 1006 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1006 "pragma_c_gen.m"
          {
#line 1006 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1006 "pragma_c_gen.m"
            {
#line 1006 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 1006 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6;
#line 1006 "pragma_c_gen.m"
          }
#line 1006 "pragma_c_gen.m"
        else
#line 1008 "pragma_c_gen.m"
          {
#line 1008 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1008 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1008 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 0)));
#line 1008 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__MaybeArgName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 1)));
#line 1008 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__OrigType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 2)));
#line 1008 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__BoxPolicy_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 3)));
#line 1009 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___ArgInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_13, (MR_Integer) 4)));
#line 1690 "ll_backend.pragma_c_gen.c"
            MR_String ll_backend__pragma_c_gen__Name_47;
#line 934 "pragma_c_gen.m"
            MR_Char ll_backend__pragma_c_gen__V_50_50;
#line 934 "pragma_c_gen.m"
            MR_String ll_backend__pragma_c_gen__V_48_48;

#line 933 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__MaybeArgName_21)) == (MR_mktag((MR_Integer) 1)));
#line 933 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 933 "pragma_c_gen.m"
              {
#line 933 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__Name_47 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeArgName_21, (MR_Integer) 0)));
#line 934 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__V_50_50 = (MR_Char) 95;
#line 934 "pragma_c_gen.m"
                {
#line 934 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__succeeded = mercury__string__first_char_3_p_2(ll_backend__pragma_c_gen__Name_47, ll_backend__pragma_c_gen__V_50_50, &ll_backend__pragma_c_gen__V_48_48);
                }
#line 934 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 933 "pragma_c_gen.m"
              }
#line 1716 "ll_backend.pragma_c_gen.c"
            if (ll_backend__pragma_c_gen__succeeded)
#line 1718 "ll_backend.pragma_c_gen.c"
              {
#line 1720 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__VarType_27;
#line 1722 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__FirstCode_28;
#line 1724 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Rval_29;
#line 1726 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__ModuleInfo_30;
#line 1728 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__MaybeForeign_31;
#line 1730 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__IsDummy_32;
#line 1732 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Input_33;
#line 1734 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Inputs1_34;
#line 1736 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__RestCode_35;
#line 1738 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_39;
#line 1740 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__TypeTable_58;
#line 1036 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__MaybeC_62;
#line 1037 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeCtor_59;
#line 1037 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeDefn_60;
#line 1037 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__TypeBody_61;
#line 1037 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_70_70;
#line 1041 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeJava_63;
#line 1041 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeCSharp_64;
#line 1041 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen___MaybeErlang_65;

#line 1013 "pragma_c_gen.m"
                {
#line 1013 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__VarType_27 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__Var_20);
                }
#line 1014 "pragma_c_gen.m"
                {
#line 1014 "pragma_c_gen.m"
                  ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__pragma_c_gen__Var_20, &ll_backend__pragma_c_gen__FirstCode_28, &ll_backend__pragma_c_gen__Rval_29, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_39);
                }
#line 1015 "pragma_c_gen.m"
                {
#line 1015 "pragma_c_gen.m"
                  ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__HeadVar__5_5, &ll_backend__pragma_c_gen__ModuleInfo_30);
                }
#line 1035 "pragma_c_gen.m"
                {
#line 1035 "pragma_c_gen.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__pragma_c_gen__ModuleInfo_30, &ll_backend__pragma_c_gen__TypeTable_58);
                }
#line 1037 "pragma_c_gen.m"
                {
#line 1037 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__pragma_c_gen__OrigType_22, &ll_backend__pragma_c_gen__TypeCtor_59);
                }
#line 1037 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1037 "pragma_c_gen.m"
                  {
#line 1038 "pragma_c_gen.m"
                    {
#line 1038 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__pragma_c_gen__TypeTable_58, ll_backend__pragma_c_gen__TypeCtor_59, &ll_backend__pragma_c_gen__TypeDefn_60);
                    }
#line 1037 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1037 "pragma_c_gen.m"
                      {
#line 1039 "pragma_c_gen.m"
                        {
#line 1039 "pragma_c_gen.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__pragma_c_gen__TypeDefn_60, &ll_backend__pragma_c_gen__TypeBody_61);
                        }
#line 1040 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__TypeBody_61)) == (MR_mktag((MR_Integer) 0)));
#line 1040 "pragma_c_gen.m"
                        if (ll_backend__pragma_c_gen__succeeded)
#line 1040 "pragma_c_gen.m"
                          {
#line 1040 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__V_70_70 = (MR_Word) MR_body(((MR_Word) ll_backend__pragma_c_gen__TypeBody_61), (MR_Integer) 0);
#line 1041 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__MaybeC_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_70_70, (MR_Integer) 0)));
#line 1041 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeJava_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_70_70, (MR_Integer) 1)));
#line 1041 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeCSharp_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_70_70, (MR_Integer) 2)));
#line 1041 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen___MaybeErlang_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_70_70, (MR_Integer) 3)));
#line 1041 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__succeeded = MR_TRUE;
#line 1040 "pragma_c_gen.m"
                          }
#line 1037 "pragma_c_gen.m"
                      }
#line 1037 "pragma_c_gen.m"
                  }
#line 1036 "pragma_c_gen.m"
                if (ll_backend__pragma_c_gen__succeeded)
#line 1047 "pragma_c_gen.m"
                  if ((ll_backend__pragma_c_gen__MaybeC_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1048 "pragma_c_gen.m"
                    {
#line 1050 "pragma_c_gen.m"
                      {
#line 1050 "pragma_c_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
#line 1050 "pragma_c_gen.m"
                        return;
                      }
#line 1048 "pragma_c_gen.m"
                    }
#line 1047 "pragma_c_gen.m"
                  else
#line 1044 "pragma_c_gen.m"
                    {
#line 1044 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Data_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeC_62, (MR_Integer) 0)));
#line 1044 "pragma_c_gen.m"
                      MR_String ll_backend__pragma_c_gen__Name_67;
#line 1044 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__Assertions_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_66, (MR_Integer) 2)));
#line 1044 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_66, (MR_Integer) 0)));
#line 1044 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_75_75;
#line 1045 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_66, (MR_Integer) 1)));

#line 1045 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__Name_67 = (MR_String) ll_backend__pragma_c_gen__V_74_74;
#line 1046 "pragma_c_gen.m"
                      {
#line 1046 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_67));
#line 1046 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Assertions_69));
#line 1046 "pragma_c_gen.m"
                      }
#line 1046 "pragma_c_gen.m"
                      {
#line 1046 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__MaybeForeign_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "pragma_c_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeForeign_31, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_75_75));
#line 1046 "pragma_c_gen.m"
                      }
#line 1044 "pragma_c_gen.m"
                    }
#line 1036 "pragma_c_gen.m"
                else
#line 1053 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__MaybeForeign_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "pragma_c_gen.m"
                {
#line 1017 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__IsDummy_32 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_30, ll_backend__pragma_c_gen__VarType_27);
                }
#line 1018 "pragma_c_gen.m"
                {
#line 1018 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__Input_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_47));
#line 1018 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_27));
#line 1018 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_32));
#line 1018 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_22));
#line 1018 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Rval_29));
#line 1018 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_31));
#line 1018 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_33, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_23));
#line 1018 "pragma_c_gen.m"
                }
#line 1020 "pragma_c_gen.m"
                {
#line 1020 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(ll_backend__pragma_c_gen__Args_14, &ll_backend__pragma_c_gen__Inputs1_34, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__RestCode_35, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_39, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);
                }
#line 1022 "pragma_c_gen.m"
                {
#line 1022 "pragma_c_gen.m"
                  MR_Word base;
#line 1022 "pragma_c_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 1022 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Input_33));
#line 1022 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Inputs1_34));
#line 1022 "pragma_c_gen.m"
                }
#line 1023 "pragma_c_gen.m"
                {
#line 1023 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__pragma_c_gen__FirstCode_28, ll_backend__pragma_c_gen__RestCode_35);
                }
#line 1933 "ll_backend.pragma_c_gen.c"
              }
#line 1935 "ll_backend.pragma_c_gen.c"
            else
#line 1937 "ll_backend.pragma_c_gen.c"
#line 1938 "ll_backend.pragma_c_gen.c"
              switch (ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3) {
#line 1940 "ll_backend.pragma_c_gen.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1942 "ll_backend.pragma_c_gen.c"
                case (MR_Integer) 0:
#line 1944 "ll_backend.pragma_c_gen.c"
                  {
#line 1946 "ll_backend.pragma_c_gen.c"
                    MR_String ll_backend__pragma_c_gen__V_52_52;
#line 1948 "ll_backend.pragma_c_gen.c"
                    MR_Integer ll_backend__pragma_c_gen__V_53_53;
#line 1950 "ll_backend.pragma_c_gen.c"
                    MR_String ll_backend__pragma_c_gen__Name_122;
#line 1952 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__VarType_123;
#line 1954 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__FirstCode_124;
#line 1956 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__Rval_125;
#line 1958 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__ModuleInfo_126;
#line 1960 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__MaybeForeign_127;
#line 1962 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__IsDummy_128;
#line 1964 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__Input_129;
#line 1966 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__Inputs1_130;
#line 1968 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__RestCode_131;
#line 1970 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_132;
#line 1972 "ll_backend.pragma_c_gen.c"
                    MR_Word ll_backend__pragma_c_gen__TypeTable_134;
#line 1036 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__MaybeC_108;
#line 1037 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__TypeCtor_79;
#line 1037 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__TypeDefn_80;
#line 1037 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__TypeBody_81;
#line 1037 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen__V_85_85;
#line 1041 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen___MaybeJava_76;
#line 1041 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen___MaybeCSharp_77;
#line 1041 "pragma_c_gen.m"
                    MR_Word ll_backend__pragma_c_gen___MaybeErlang_78;

#line 943 "pragma_c_gen.m"
                    {
#line 943 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__V_53_53 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_20);
                    }
#line 943 "pragma_c_gen.m"
                    {
#line 943 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__V_52_52 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_53_53);
                    }
#line 943 "pragma_c_gen.m"
                    {
#line 943 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__Name_122 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", ll_backend__pragma_c_gen__V_52_52);
                    }
#line 1013 "pragma_c_gen.m"
                    {
#line 1013 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__VarType_123 = ll_backend__code_info__variable_type_2_f_0(ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__Var_20);
                    }
#line 1014 "pragma_c_gen.m"
                    {
#line 1014 "pragma_c_gen.m"
                      ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__pragma_c_gen__Var_20, &ll_backend__pragma_c_gen__FirstCode_124, &ll_backend__pragma_c_gen__Rval_125, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_132);
                    }
#line 1015 "pragma_c_gen.m"
                    {
#line 1015 "pragma_c_gen.m"
                      ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__HeadVar__5_5, &ll_backend__pragma_c_gen__ModuleInfo_126);
                    }
#line 1035 "pragma_c_gen.m"
                    {
#line 1035 "pragma_c_gen.m"
                      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__pragma_c_gen__ModuleInfo_126, &ll_backend__pragma_c_gen__TypeTable_134);
                    }
#line 1037 "pragma_c_gen.m"
                    {
#line 1037 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ll_backend__pragma_c_gen__OrigType_22, &ll_backend__pragma_c_gen__TypeCtor_79);
                    }
#line 1037 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1037 "pragma_c_gen.m"
                      {
#line 1038 "pragma_c_gen.m"
                        {
#line 1038 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__pragma_c_gen__TypeTable_134, ll_backend__pragma_c_gen__TypeCtor_79, &ll_backend__pragma_c_gen__TypeDefn_80);
                        }
#line 1037 "pragma_c_gen.m"
                        if (ll_backend__pragma_c_gen__succeeded)
#line 1037 "pragma_c_gen.m"
                          {
#line 1039 "pragma_c_gen.m"
                            {
#line 1039 "pragma_c_gen.m"
                              hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__pragma_c_gen__TypeDefn_80, &ll_backend__pragma_c_gen__TypeBody_81);
                            }
#line 1040 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__TypeBody_81)) == (MR_mktag((MR_Integer) 0)));
#line 1040 "pragma_c_gen.m"
                            if (ll_backend__pragma_c_gen__succeeded)
#line 1040 "pragma_c_gen.m"
                              {
#line 1040 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen__V_85_85 = (MR_Word) MR_body(((MR_Word) ll_backend__pragma_c_gen__TypeBody_81), (MR_Integer) 0);
#line 1041 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen__MaybeC_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_85_85, (MR_Integer) 0)));
#line 1041 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen___MaybeJava_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_85_85, (MR_Integer) 1)));
#line 1041 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen___MaybeCSharp_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_85_85, (MR_Integer) 2)));
#line 1041 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen___MaybeErlang_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_85_85, (MR_Integer) 3)));
#line 1041 "pragma_c_gen.m"
                                ll_backend__pragma_c_gen__succeeded = MR_TRUE;
#line 1040 "pragma_c_gen.m"
                              }
#line 1037 "pragma_c_gen.m"
                          }
#line 1037 "pragma_c_gen.m"
                      }
#line 1036 "pragma_c_gen.m"
                    if (ll_backend__pragma_c_gen__succeeded)
#line 1047 "pragma_c_gen.m"
                      if ((ll_backend__pragma_c_gen__MaybeC_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1048 "pragma_c_gen.m"
                        {
#line 1050 "pragma_c_gen.m"
                          {
#line 1050 "pragma_c_gen.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", (MR_String) "no c foreign type");
#line 1050 "pragma_c_gen.m"
                            return;
                          }
#line 1048 "pragma_c_gen.m"
                        }
#line 1047 "pragma_c_gen.m"
                      else
#line 1044 "pragma_c_gen.m"
                        {
#line 1044 "pragma_c_gen.m"
                          MR_Word ll_backend__pragma_c_gen__Data_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeC_108, (MR_Integer) 0)));
#line 1044 "pragma_c_gen.m"
                          MR_String ll_backend__pragma_c_gen__Name_91;
#line 1044 "pragma_c_gen.m"
                          MR_Word ll_backend__pragma_c_gen__Assertions_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_90, (MR_Integer) 2)));
#line 1044 "pragma_c_gen.m"
                          MR_Word ll_backend__pragma_c_gen__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_90, (MR_Integer) 0)));
#line 1044 "pragma_c_gen.m"
                          MR_Word ll_backend__pragma_c_gen__V_95_95;
#line 1045 "pragma_c_gen.m"
                          MR_Word ll_backend__pragma_c_gen__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Data_90, (MR_Integer) 1)));

#line 1045 "pragma_c_gen.m"
                          ll_backend__pragma_c_gen__Name_91 = (MR_String) ll_backend__pragma_c_gen__V_94_94;
#line 1046 "pragma_c_gen.m"
                          {
#line 1046 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "pragma_c_gen.m"
                            MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_95_95, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_91));
#line 1046 "pragma_c_gen.m"
                            MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_95_95, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Assertions_93));
#line 1046 "pragma_c_gen.m"
                          }
#line 1046 "pragma_c_gen.m"
                          {
#line 1046 "pragma_c_gen.m"
                            ll_backend__pragma_c_gen__MaybeForeign_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "pragma_c_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeForeign_127, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_95_95));
#line 1046 "pragma_c_gen.m"
                          }
#line 1044 "pragma_c_gen.m"
                        }
#line 1036 "pragma_c_gen.m"
                    else
#line 1053 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__MaybeForeign_127 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "pragma_c_gen.m"
                    {
#line 1017 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__IsDummy_128 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__pragma_c_gen__ModuleInfo_126, ll_backend__pragma_c_gen__VarType_123);
                    }
#line 1018 "pragma_c_gen.m"
                    {
#line 1018 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__Input_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_122));
#line 1018 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 1) = ((MR_Box) (ll_backend__pragma_c_gen__VarType_123));
#line 1018 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 2) = ((MR_Box) (ll_backend__pragma_c_gen__IsDummy_128));
#line 1018 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 3) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_22));
#line 1018 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 4) = ((MR_Box) (ll_backend__pragma_c_gen__Rval_125));
#line 1018 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 5) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeForeign_127));
#line 1018 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Input_129, 6) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_23));
#line 1018 "pragma_c_gen.m"
                    }
#line 1020 "pragma_c_gen.m"
                    {
#line 1020 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(ll_backend__pragma_c_gen__Args_14, &ll_backend__pragma_c_gen__Inputs1_130, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__RestCode_131, ll_backend__pragma_c_gen__HeadVar__5_5, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_39_132, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_7);
                    }
#line 1022 "pragma_c_gen.m"
                    {
#line 1022 "pragma_c_gen.m"
                      MR_Word base;
#line 1022 "pragma_c_gen.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 1022 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Input_129));
#line 1022 "pragma_c_gen.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Inputs1_130));
#line 1022 "pragma_c_gen.m"
                    }
#line 1023 "pragma_c_gen.m"
                    {
#line 1023 "pragma_c_gen.m"
                      *ll_backend__pragma_c_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__pragma_c_gen__FirstCode_124, ll_backend__pragma_c_gen__RestCode_131);
                    }
#line 2180 "ll_backend.pragma_c_gen.c"
                  }
#line 2182 "ll_backend.pragma_c_gen.c"
                  break;
#line 2184 "ll_backend.pragma_c_gen.c"
                case (MR_Integer) 1:
#line 1027 "pragma_c_gen.m"
                  {
#line 1027 "pragma_c_gen.m"
                    /* direct tailcall eliminated */
#line 1027 "pragma_c_gen.m"
                    {
#line 1027 "pragma_c_gen.m"
                      MR_Word ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1 = ll_backend__pragma_c_gen__Args_14;

#line 1027 "pragma_c_gen.m"
                      ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1;
#line 1027 "pragma_c_gen.m"
                    }
#line 1027 "pragma_c_gen.m"
                    continue;
#line 1027 "pragma_c_gen.m"
                  }
#line 2203 "ll_backend.pragma_c_gen.c"
                  break;
#line 2205 "ll_backend.pragma_c_gen.c"
              }
#line 1008 "pragma_c_gen.m"
          }
#line 1006 "pragma_c_gen.m"
      }
#line 1006 "pragma_c_gen.m"
      break;
#line 1006 "pragma_c_gen.m"
    }
#line 1002 "pragma_c_gen.m"
}

#line 982 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(
#line 982 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 982 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PostDeaths_2,
#line 982 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3,
#line 982 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_4)
#line 982 "pragma_c_gen.m"
{
#line 985 "pragma_c_gen.m"
  while (MR_TRUE)
#line 985 "pragma_c_gen.m"
    {
#line 985 "pragma_c_gen.m"
      /* tailcall optimized into a loop */
#line 985 "pragma_c_gen.m"
      {
#line 985 "pragma_c_gen.m"
        MR_bool ll_backend__pragma_c_gen__succeeded;

#line 985 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 985 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_4 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3;
#line 985 "pragma_c_gen.m"
        else
#line 986 "pragma_c_gen.m"
          {
#line 986 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 986 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 986 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 0)));
#line 986 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20;
#line 987 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___MaybeName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 1)));
#line 987 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 2)));
#line 987 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 3)));
#line 987 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen___ArgInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_9, (MR_Integer) 4)));

#line 988 "pragma_c_gen.m"
            {
#line 988 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__PostDeaths_2, ll_backend__pragma_c_gen__Var_13);
            }
#line 988 "pragma_c_gen.m"
            if (ll_backend__pragma_c_gen__succeeded)
#line 989 "pragma_c_gen.m"
              {
#line 989 "pragma_c_gen.m"
                {
#line 989 "pragma_c_gen.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_13, ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3, &ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20);
                }
#line 989 "pragma_c_gen.m"
              }
#line 988 "pragma_c_gen.m"
            else
#line 988 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3;
#line 993 "pragma_c_gen.m"
            /* direct tailcall eliminated */
#line 993 "pragma_c_gen.m"
            {
#line 993 "pragma_c_gen.m"
              MR_Word ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1 = ll_backend__pragma_c_gen__Args_10;
#line 993 "pragma_c_gen.m"
              MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0__tmp_copy_3 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_20_20;

#line 993 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0_3 = ll_backend__pragma_c_gen__STATE_VARIABLE_DeadVars_0__tmp_copy_3;
#line 993 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1;
#line 993 "pragma_c_gen.m"
            }
#line 993 "pragma_c_gen.m"
            continue;
#line 986 "pragma_c_gen.m"
          }
#line 985 "pragma_c_gen.m"
      }
#line 985 "pragma_c_gen.m"
      break;
#line 985 "pragma_c_gen.m"
    }
#line 982 "pragma_c_gen.m"
}

#line 955 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(
#line 955 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 955 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Module_2,
#line 955 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3,
#line 955 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4)
#line 955 "pragma_c_gen.m"
{
#line 958 "pragma_c_gen.m"
  {
#line 958 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 958 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 958 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "pragma_c_gen.m"
    else
#line 959 "pragma_c_gen.m"
      {
#line 959 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 959 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 959 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__DeclsTail_12;
#line 959 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Var_13;
#line 959 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__MaybeArgName_14;
#line 959 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__OrigType_15;
#line 959 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BoxPolicy_16;
#line 961 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen___ArgInfo_17;
#line 2357 "ll_backend.pragma_c_gen.c"
        MR_String ll_backend__pragma_c_gen__Name_27;
#line 934 "pragma_c_gen.m"
        MR_Char ll_backend__pragma_c_gen__V_30_30;
#line 934 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__V_28_28;

#line 960 "pragma_c_gen.m"
        {
#line 960 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(ll_backend__pragma_c_gen__Args_8, ll_backend__pragma_c_gen__Module_2, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3, &ll_backend__pragma_c_gen__DeclsTail_12);
        }
#line 961 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 0)));
#line 961 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__MaybeArgName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 1)));
#line 961 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 2)));
#line 961 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 3)));
#line 961 "pragma_c_gen.m"
        ll_backend__pragma_c_gen___ArgInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_7, (MR_Integer) 4)));
#line 933 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__MaybeArgName_14)) == (MR_mktag((MR_Integer) 1)));
#line 933 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 933 "pragma_c_gen.m"
          {
#line 933 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeArgName_14, (MR_Integer) 0)));
#line 934 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_30_30 = (MR_Char) 95;
#line 934 "pragma_c_gen.m"
            {
#line 934 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__succeeded = mercury__string__first_char_3_p_2(ll_backend__pragma_c_gen__Name_27, ll_backend__pragma_c_gen__V_30_30, &ll_backend__pragma_c_gen__V_28_28);
            }
#line 934 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__succeeded = !(ll_backend__pragma_c_gen__succeeded);
#line 933 "pragma_c_gen.m"
          }
#line 2398 "ll_backend.pragma_c_gen.c"
        if (ll_backend__pragma_c_gen__succeeded)
#line 2400 "ll_backend.pragma_c_gen.c"
          {
#line 2402 "ll_backend.pragma_c_gen.c"
            MR_String ll_backend__pragma_c_gen__OrigTypeString_20;
#line 2404 "ll_backend.pragma_c_gen.c"
            MR_Word ll_backend__pragma_c_gen__Decl_21;

#line 969 "pragma_c_gen.m"
#line 969 "pragma_c_gen.m"
            switch (ll_backend__pragma_c_gen__BoxPolicy_16) {
#line 969 "pragma_c_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 969 "pragma_c_gen.m"
              case (MR_Integer) 1:
#line 971 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__OrigTypeString_20 = (MR_String) "MR_Word";
#line 969 "pragma_c_gen.m"
                break;
#line 969 "pragma_c_gen.m"
              case (MR_Integer) 0:
#line 966 "pragma_c_gen.m"
                {
#line 967 "pragma_c_gen.m"
                  {
#line 967 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__OrigTypeString_20 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ll_backend__pragma_c_gen__Module_2, (MR_Integer) 0, ll_backend__pragma_c_gen__OrigType_15);
                  }
#line 966 "pragma_c_gen.m"
                }
#line 969 "pragma_c_gen.m"
                break;
#line 969 "pragma_c_gen.m"
            }
#line 973 "pragma_c_gen.m"
            {
#line 973 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__Decl_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 973 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_21, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_15));
#line 973 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_21, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OrigTypeString_20));
#line 973 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_21, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Name_27));
#line 973 "pragma_c_gen.m"
            }
#line 974 "pragma_c_gen.m"
            {
#line 974 "pragma_c_gen.m"
              MR_Word base;
#line 974 "pragma_c_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 974 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Decl_21));
#line 974 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__DeclsTail_12));
#line 974 "pragma_c_gen.m"
            }
#line 2459 "ll_backend.pragma_c_gen.c"
          }
#line 2461 "ll_backend.pragma_c_gen.c"
        else
#line 2463 "ll_backend.pragma_c_gen.c"
#line 2464 "ll_backend.pragma_c_gen.c"
          switch (ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_3) {
#line 2466 "ll_backend.pragma_c_gen.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2468 "ll_backend.pragma_c_gen.c"
            case (MR_Integer) 0:
#line 2470 "ll_backend.pragma_c_gen.c"
              {
#line 2472 "ll_backend.pragma_c_gen.c"
                MR_String ll_backend__pragma_c_gen__V_32_32;
#line 2474 "ll_backend.pragma_c_gen.c"
                MR_Integer ll_backend__pragma_c_gen__V_33_33;
#line 2476 "ll_backend.pragma_c_gen.c"
                MR_String ll_backend__pragma_c_gen__Name_37;
#line 2478 "ll_backend.pragma_c_gen.c"
                MR_String ll_backend__pragma_c_gen__OrigTypeString_38;
#line 2480 "ll_backend.pragma_c_gen.c"
                MR_Word ll_backend__pragma_c_gen__Decl_39;

#line 943 "pragma_c_gen.m"
                {
#line 943 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__V_33_33 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__pragma_c_gen__Var_13);
                }
#line 943 "pragma_c_gen.m"
                {
#line 943 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_33_33);
                }
#line 943 "pragma_c_gen.m"
                {
#line 943 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__Name_37 = mercury__string__f_43_43_2_f_0((MR_String) "UnnamedArg", ll_backend__pragma_c_gen__V_32_32);
                }
#line 969 "pragma_c_gen.m"
#line 969 "pragma_c_gen.m"
                switch (ll_backend__pragma_c_gen__BoxPolicy_16) {
#line 969 "pragma_c_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 969 "pragma_c_gen.m"
                  case (MR_Integer) 1:
#line 971 "pragma_c_gen.m"
                    ll_backend__pragma_c_gen__OrigTypeString_38 = (MR_String) "MR_Word";
#line 969 "pragma_c_gen.m"
                    break;
#line 969 "pragma_c_gen.m"
                  case (MR_Integer) 0:
#line 966 "pragma_c_gen.m"
                    {
#line 967 "pragma_c_gen.m"
                      {
#line 967 "pragma_c_gen.m"
                        ll_backend__pragma_c_gen__OrigTypeString_38 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ll_backend__pragma_c_gen__Module_2, (MR_Integer) 0, ll_backend__pragma_c_gen__OrigType_15);
                      }
#line 966 "pragma_c_gen.m"
                    }
#line 969 "pragma_c_gen.m"
                    break;
#line 969 "pragma_c_gen.m"
                }
#line 973 "pragma_c_gen.m"
                {
#line 973 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__Decl_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 973 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_39, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_15));
#line 973 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_39, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OrigTypeString_38));
#line 973 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Decl_39, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Name_37));
#line 973 "pragma_c_gen.m"
                }
#line 974 "pragma_c_gen.m"
                {
#line 974 "pragma_c_gen.m"
                  MR_Word base;
#line 974 "pragma_c_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "pragma_c_gen.m"
                  *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 974 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Decl_39));
#line 974 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__DeclsTail_12));
#line 974 "pragma_c_gen.m"
                }
#line 2550 "ll_backend.pragma_c_gen.c"
              }
#line 2552 "ll_backend.pragma_c_gen.c"
              break;
#line 2554 "ll_backend.pragma_c_gen.c"
            case (MR_Integer) 1:
#line 977 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__4_4 = ll_backend__pragma_c_gen__DeclsTail_12;
#line 2558 "ll_backend.pragma_c_gen.c"
              break;
#line 2560 "ll_backend.pragma_c_gen.c"
          }
#line 959 "pragma_c_gen.m"
      }
#line 958 "pragma_c_gen.m"
  }
#line 955 "pragma_c_gen.m"
}

#line 896 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(
#line 896 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 896 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2)
#line 896 "pragma_c_gen.m"
{
#line 898 "pragma_c_gen.m"
  {
#line 898 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 898 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 898 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 898 "pragma_c_gen.m"
    else
#line 899 "pragma_c_gen.m"
      {
#line 899 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 899 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 899 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__InTail_6;
#line 899 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ArgInfo_11;
#line 899 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Mode_13;
#line 901 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7;
#line 901 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8;
#line 901 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9;
#line 901 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10;
#line 902 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen___Loc_12;

#line 900 "pragma_c_gen.m"
        {
#line 900 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(ll_backend__pragma_c_gen__Rest_4, &ll_backend__pragma_c_gen__InTail_6);
        }
#line 901 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 0)));
#line 901 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 1)));
#line 901 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 2)));
#line 901 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 3)));
#line 901 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__ArgInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 4)));
#line 902 "pragma_c_gen.m"
        ll_backend__pragma_c_gen___Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 0)));
#line 902 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 1)));
#line 906 "pragma_c_gen.m"
#line 906 "pragma_c_gen.m"
        switch (ll_backend__pragma_c_gen__Mode_13) {
#line 906 "pragma_c_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 906 "pragma_c_gen.m"
          case (MR_Integer) 0:
#line 905 "pragma_c_gen.m"
            {
#line 905 "pragma_c_gen.m"
              MR_Word base;
#line 905 "pragma_c_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 905 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Arg_3));
#line 905 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__InTail_6));
#line 905 "pragma_c_gen.m"
            }
#line 906 "pragma_c_gen.m"
            break;
#line 906 "pragma_c_gen.m"
          case (MR_Integer) 1:
#line 906 "pragma_c_gen.m"
          case (MR_Integer) 2:
#line 910 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__HeadVar__2_2 = ll_backend__pragma_c_gen__InTail_6;
#line 906 "pragma_c_gen.m"
            break;
#line 906 "pragma_c_gen.m"
        }
#line 899 "pragma_c_gen.m"
      }
#line 898 "pragma_c_gen.m"
  }
#line 896 "pragma_c_gen.m"
}

#line 876 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(
#line 876 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 876 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2)
#line 876 "pragma_c_gen.m"
{
#line 878 "pragma_c_gen.m"
  {
#line 878 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 878 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 878 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "pragma_c_gen.m"
    else
#line 879 "pragma_c_gen.m"
      {
#line 879 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 879 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 879 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__OutTail_6;
#line 879 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ArgInfo_11;
#line 879 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Mode_13;
#line 881 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7;
#line 881 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8;
#line 881 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9;
#line 881 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10;
#line 882 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen___Loc_12;

#line 880 "pragma_c_gen.m"
        {
#line 880 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(ll_backend__pragma_c_gen__Rest_4, &ll_backend__pragma_c_gen__OutTail_6);
        }
#line 881 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 0)));
#line 881 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 1)));
#line 881 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 2)));
#line 881 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 3)));
#line 881 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__ArgInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 4)));
#line 882 "pragma_c_gen.m"
        ll_backend__pragma_c_gen___Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 0)));
#line 882 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__Mode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_11, (MR_Integer) 1)));
#line 886 "pragma_c_gen.m"
#line 886 "pragma_c_gen.m"
        switch (ll_backend__pragma_c_gen__Mode_13) {
#line 886 "pragma_c_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 886 "pragma_c_gen.m"
          case (MR_Integer) 0:
#line 886 "pragma_c_gen.m"
          case (MR_Integer) 2:
#line 890 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__HeadVar__2_2 = ll_backend__pragma_c_gen__OutTail_6;
#line 886 "pragma_c_gen.m"
            break;
#line 886 "pragma_c_gen.m"
          case (MR_Integer) 1:
#line 885 "pragma_c_gen.m"
            {
#line 885 "pragma_c_gen.m"
              MR_Word base;
#line 885 "pragma_c_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 885 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Arg_3));
#line 885 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__OutTail_6));
#line 885 "pragma_c_gen.m"
            }
#line 886 "pragma_c_gen.m"
            break;
#line 886 "pragma_c_gen.m"
        }
#line 879 "pragma_c_gen.m"
      }
#line 878 "pragma_c_gen.m"
  }
#line 876 "pragma_c_gen.m"
}

#line 864 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(
#line 864 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 864 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__2_2)
#line 864 "pragma_c_gen.m"
{
#line 866 "pragma_c_gen.m"
  {
#line 866 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 866 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "pragma_c_gen.m"
    else
#line 867 "pragma_c_gen.m"
      {
#line 867 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 867 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 867 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 0)));
#line 867 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Vars_6;
#line 868 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 1)));
#line 868 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 2)));
#line 868 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 3)));
#line 868 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Arg_3, (MR_Integer) 4)));

#line 869 "pragma_c_gen.m"
        {
#line 869 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(ll_backend__pragma_c_gen__Args_4, &ll_backend__pragma_c_gen__Vars_6);
        }
#line 867 "pragma_c_gen.m"
        {
#line 867 "pragma_c_gen.m"
          MR_Word base;
#line 867 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__2_2 = base;
#line 867 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Var_5));
#line 867 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Vars_6));
#line 867 "pragma_c_gen.m"
        }
#line 867 "pragma_c_gen.m"
      }
#line 866 "pragma_c_gen.m"
  }
#line 864 "pragma_c_gen.m"
}

#line 841 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(
#line 841 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 841 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_2,
#line 841 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__LastReg_3,
#line 841 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__4_4)
#line 841 "pragma_c_gen.m"
{
#line 844 "pragma_c_gen.m"
  {
#line 844 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 844 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 844 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 844 "pragma_c_gen.m"
    else
#line 846 "pragma_c_gen.m"
      {
#line 846 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ExtraArg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 846 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ExtraArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 846 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__CArg_11;
#line 846 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__CArgs_12;
#line 846 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 0)));
#line 846 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__MaybeNameMode_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 1)));
#line 846 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 2)));
#line 846 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ExtraArg_7, (MR_Integer) 3)));
#line 846 "pragma_c_gen.m"
        MR_String ll_backend__pragma_c_gen__Name_17;
#line 846 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ArgMode_19;
#line 846 "pragma_c_gen.m"
        MR_Integer ll_backend__pragma_c_gen__NextReg_21;
#line 846 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__ArgInfo_22;
#line 846 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_28_28;
#line 846 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_29_29;

#line 851 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__MaybeNameMode_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 852 "pragma_c_gen.m"
          {
#line 853 "pragma_c_gen.m"
            {
#line 853 "pragma_c_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_extra_c_arg_list_seq\'/4", (MR_String) "no name");
#line 853 "pragma_c_gen.m"
              return;
            }
#line 852 "pragma_c_gen.m"
          }
#line 851 "pragma_c_gen.m"
        else
#line 849 "pragma_c_gen.m"
          {
#line 849 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Mode_18;
#line 849 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeNameMode_14, (MR_Integer) 0)));

#line 849 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_26_26, (MR_Integer) 0)));
#line 849 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_26_26, (MR_Integer) 1)));
#line 850 "pragma_c_gen.m"
            {
#line 850 "pragma_c_gen.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__pragma_c_gen__ModuleInfo_2, ll_backend__pragma_c_gen__Mode_18, ll_backend__pragma_c_gen__OrigType_15, &ll_backend__pragma_c_gen__ArgMode_19);
            }
#line 849 "pragma_c_gen.m"
          }
#line 857 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__NextReg_21 = (ll_backend__pragma_c_gen__LastReg_3 + (MR_Integer) 1);
#line 858 "pragma_c_gen.m"
        {
#line 858 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 858 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_28_28, 0) = ((MR_Box) ((MR_Integer) 0));
#line 858 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_28_28, 1) = ((MR_Box) (ll_backend__pragma_c_gen__NextReg_21));
#line 858 "pragma_c_gen.m"
        }
#line 858 "pragma_c_gen.m"
        {
#line 858 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__ArgInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 858 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_22, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_28_28));
#line 858 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__ArgInfo_22, 1) = ((MR_Box) (ll_backend__pragma_c_gen__ArgMode_19));
#line 858 "pragma_c_gen.m"
        }
#line 859 "pragma_c_gen.m"
        {
#line 859 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 859 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_29_29, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_17));
#line 859 "pragma_c_gen.m"
        }
#line 859 "pragma_c_gen.m"
        {
#line 859 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__CArg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 859 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Var_13));
#line 859 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_29_29));
#line 859 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 2) = ((MR_Box) (ll_backend__pragma_c_gen__OrigType_15));
#line 859 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 3) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_16));
#line 859 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_11, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ArgInfo_22));
#line 859 "pragma_c_gen.m"
        }
#line 860 "pragma_c_gen.m"
        {
#line 860 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(ll_backend__pragma_c_gen__ExtraArgs_8, ll_backend__pragma_c_gen__ModuleInfo_2, ll_backend__pragma_c_gen__NextReg_21, &ll_backend__pragma_c_gen__CArgs_12);
        }
#line 846 "pragma_c_gen.m"
        {
#line 846 "pragma_c_gen.m"
          MR_Word base;
#line 846 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__HeadVar__4_4 = base;
#line 846 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__CArg_11));
#line 846 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__CArgs_12));
#line 846 "pragma_c_gen.m"
        }
#line 846 "pragma_c_gen.m"
      }
#line 844 "pragma_c_gen.m"
  }
#line 841 "pragma_c_gen.m"
}

#line 827 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(
#line 827 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 827 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2,
#line 827 "pragma_c_gen.m"
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_3,
#line 827 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4,
#line 827 "pragma_c_gen.m"
  MR_Integer * ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_5)
#line 827 "pragma_c_gen.m"
{
#line 830 "pragma_c_gen.m"
  while (MR_TRUE)
#line 830 "pragma_c_gen.m"
    {
#line 830 "pragma_c_gen.m"
      /* tailcall optimized into a loop */
#line 830 "pragma_c_gen.m"
      {
#line 830 "pragma_c_gen.m"
        MR_bool ll_backend__pragma_c_gen__succeeded;

#line 830 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 830 "pragma_c_gen.m"
          {
#line 830 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_5 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4;
#line 830 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_3 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2;
#line 830 "pragma_c_gen.m"
          }
#line 830 "pragma_c_gen.m"
        else
#line 831 "pragma_c_gen.m"
          {
#line 831 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Loc_12;
#line 831 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__ArgInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 831 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 831 "pragma_c_gen.m"
            MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24;
#line 831 "pragma_c_gen.m"
            MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26;
#line 831 "pragma_c_gen.m"
            MR_Integer ll_backend__pragma_c_gen__V_30_30;
#line 831 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_31_31;
#line 831 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__V_13_13;

#line 831 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Loc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_22_22, (MR_Integer) 0)));
#line 831 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_22_22, (MR_Integer) 1)));
#line 833 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Loc_12, (MR_Integer) 0)));
#line 833 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Loc_12, (MR_Integer) 1)));
#line 835 "pragma_c_gen.m"
#line 835 "pragma_c_gen.m"
            switch (ll_backend__pragma_c_gen__V_31_31) {
#line 835 "pragma_c_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 835 "pragma_c_gen.m"
              case (MR_Integer) 1:
#line 836 "pragma_c_gen.m"
                {
#line 837 "pragma_c_gen.m"
                  {
#line 837 "pragma_c_gen.m"
                    mercury__int__max_3_p_0(ll_backend__pragma_c_gen__V_30_30, ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4, &ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24);
                  }
#line 836 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2;
#line 836 "pragma_c_gen.m"
                }
#line 835 "pragma_c_gen.m"
                break;
#line 835 "pragma_c_gen.m"
              case (MR_Integer) 0:
#line 833 "pragma_c_gen.m"
                {
#line 834 "pragma_c_gen.m"
                  {
#line 834 "pragma_c_gen.m"
                    mercury__int__max_3_p_0(ll_backend__pragma_c_gen__V_30_30, ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2, &ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26);
                  }
#line 833 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4;
#line 833 "pragma_c_gen.m"
                }
#line 835 "pragma_c_gen.m"
                break;
#line 835 "pragma_c_gen.m"
            }
#line 839 "pragma_c_gen.m"
            /* direct tailcall eliminated */
#line 839 "pragma_c_gen.m"
            {
#line 839 "pragma_c_gen.m"
              MR_Word ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1 = ll_backend__pragma_c_gen__ArgInfos_14;
#line 839 "pragma_c_gen.m"
              MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0__tmp_copy_2 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_26_26;
#line 839 "pragma_c_gen.m"
              MR_Integer ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0__tmp_copy_4 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_24_24;

#line 839 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0_4 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxF_0__tmp_copy_4;
#line 839 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0_2 = ll_backend__pragma_c_gen__STATE_VARIABLE_MaxR_0__tmp_copy_2;
#line 839 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__HeadVar__1_1 = ll_backend__pragma_c_gen__HeadVar__1__tmp_copy_1;
#line 839 "pragma_c_gen.m"
            }
#line 839 "pragma_c_gen.m"
            continue;
#line 831 "pragma_c_gen.m"
          }
#line 830 "pragma_c_gen.m"
      }
#line 830 "pragma_c_gen.m"
      break;
#line 830 "pragma_c_gen.m"
    }
#line 827 "pragma_c_gen.m"
}

#line 820 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(
#line 820 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_5,
#line 820 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
#line 820 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ArgInfos_7,
#line 820 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ExtraCArgs_8)
#line 820 "pragma_c_gen.m"
{
#line 823 "pragma_c_gen.m"
  {
#line 823 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 823 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__MaxR_9;
#line 824 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen___MaxF_10;

#line 824 "pragma_c_gen.m"
    {
#line 824 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__get_highest_arg_num_5_p_0(ll_backend__pragma_c_gen__ArgInfos_7, (MR_Integer) 0, &ll_backend__pragma_c_gen__MaxR_9, (MR_Integer) 0, &ll_backend__pragma_c_gen___MaxF_10);
    }
#line 825 "pragma_c_gen.m"
    {
#line 825 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_p_0(ll_backend__pragma_c_gen__ExtraArgs_5, ll_backend__pragma_c_gen__ModuleInfo_6, ll_backend__pragma_c_gen__MaxR_9, ll_backend__pragma_c_gen__ExtraCArgs_8);
    }
#line 823 "pragma_c_gen.m"
  }
#line 820 "pragma_c_gen.m"
}

#line 798 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(
#line 798 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__1_1,
#line 798 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__HeadVar__2_2,
#line 798 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__HeadVar__3_3)
#line 798 "pragma_c_gen.m"
{
#line 801 "pragma_c_gen.m"
  {
#line 801 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 801 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "pragma_c_gen.m"
      if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 801 "pragma_c_gen.m"
      else
#line 813 "pragma_c_gen.m"
        {
#line 814 "pragma_c_gen.m"
          {
#line 814 "pragma_c_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", (MR_String) "length mismatch");
#line 814 "pragma_c_gen.m"
            return;
          }
#line 813 "pragma_c_gen.m"
        }
#line 801 "pragma_c_gen.m"
    else
#line 801 "pragma_c_gen.m"
      {
#line 801 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 801 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 801 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 815 "pragma_c_gen.m"
          {
#line 816 "pragma_c_gen.m"
            {
#line 816 "pragma_c_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", (MR_String) "length mismatch");
#line 816 "pragma_c_gen.m"
              return;
            }
#line 815 "pragma_c_gen.m"
          }
#line 801 "pragma_c_gen.m"
        else
#line 802 "pragma_c_gen.m"
          {
#line 802 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__ArgInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 802 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__ArgInfoTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 802 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__CArg_8;
#line 802 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__CArgTail_9;
#line 802 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 0)));
#line 802 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__MaybeNameMode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 1)));
#line 802 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 2)));
#line 802 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__BoxPolicy_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_31_31, (MR_Integer) 3)));
#line 802 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__MaybeName_16;

#line 807 "pragma_c_gen.m"
            if ((ll_backend__pragma_c_gen__MaybeNameMode_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 808 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__MaybeName_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 807 "pragma_c_gen.m"
            else
#line 805 "pragma_c_gen.m"
              {
#line 805 "pragma_c_gen.m"
                MR_String ll_backend__pragma_c_gen__Name_14;
#line 805 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeNameMode_11, (MR_Integer) 0)));
#line 805 "pragma_c_gen.m"
                MR_Word ll_backend__pragma_c_gen__V_15_15;

#line 805 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_17_17, (MR_Integer) 0)));
#line 805 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_17_17, (MR_Integer) 1)));
#line 806 "pragma_c_gen.m"
                {
#line 806 "pragma_c_gen.m"
                  ll_backend__pragma_c_gen__MaybeName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 806 "pragma_c_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeName_16, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Name_14));
#line 806 "pragma_c_gen.m"
                }
#line 805 "pragma_c_gen.m"
              }
#line 811 "pragma_c_gen.m"
            {
#line 811 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__CArg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 811 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 0) = ((MR_Box) (ll_backend__pragma_c_gen__Var_10));
#line 811 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 1) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeName_16));
#line 811 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Type_12));
#line 811 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 3) = ((MR_Box) (ll_backend__pragma_c_gen__BoxPolicy_13));
#line 811 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__CArg_8, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ArgInfo_6));
#line 811 "pragma_c_gen.m"
            }
#line 812 "pragma_c_gen.m"
            {
#line 812 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(ll_backend__pragma_c_gen__V_30_30, ll_backend__pragma_c_gen__ArgInfoTail_7, &ll_backend__pragma_c_gen__CArgTail_9);
            }
#line 802 "pragma_c_gen.m"
            {
#line 802 "pragma_c_gen.m"
              MR_Word base;
#line 802 "pragma_c_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "pragma_c_gen.m"
              *ll_backend__pragma_c_gen__HeadVar__3_3 = base;
#line 802 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__CArg_8));
#line 802 "pragma_c_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__CArgTail_9));
#line 802 "pragma_c_gen.m"
            }
#line 802 "pragma_c_gen.m"
          }
#line 801 "pragma_c_gen.m"
      }
#line 801 "pragma_c_gen.m"
  }
#line 798 "pragma_c_gen.m"
}

#line 746 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(
#line 746 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__C_Code_7,
#line 746 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__MaybeContext_8,
#line 746 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashDefine_9,
#line 746 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__AllocIdHashUndef_10,
#line 746 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17,
#line 746 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18)
#line 746 "pragma_c_gen.m"
{
#line 751 "pragma_c_gen.m"
  {
#line 751 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 751 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Globals_12;
#line 751 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ProfileMemory_13;
#line 755 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_20_20;
#line 756 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__V_14_14;

#line 752 "pragma_c_gen.m"
    {
#line 752 "pragma_c_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17, &ll_backend__pragma_c_gen__Globals_12);
    }
#line 753 "pragma_c_gen.m"
    {
#line 753 "pragma_c_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__pragma_c_gen__Globals_12, (MR_Integer) 192, &ll_backend__pragma_c_gen__ProfileMemory_13);
    }
#line 755 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__ProfileMemory_13 == (MR_Integer) 1);
#line 755 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 755 "pragma_c_gen.m"
      {
#line 756 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__V_20_20 = (MR_String) "MR_ALLOC_ID";
#line 756 "pragma_c_gen.m"
        {
#line 756 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__succeeded = mercury__string__sub_string_search_3_p_0(ll_backend__pragma_c_gen__C_Code_7, ll_backend__pragma_c_gen__V_20_20, &ll_backend__pragma_c_gen__V_14_14);
        }
#line 755 "pragma_c_gen.m"
      }
#line 754 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 763 "pragma_c_gen.m"
      {
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Context_15;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__AllocId_16;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_24_24;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_26_26;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_27_27;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_28_28;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_29_29;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_32_32;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_38_38;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_39_39;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_44_44;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_45_45;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_50_50;
#line 763 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_51_51;

#line 760 "pragma_c_gen.m"
        if ((ll_backend__pragma_c_gen__MaybeContext_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 762 "pragma_c_gen.m"
          {
#line 762 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Context_15 = mercury__term__context_init_0_f_0();
          }
#line 760 "pragma_c_gen.m"
        else
#line 759 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeContext_8, (MR_Integer) 0)));
#line 764 "pragma_c_gen.m"
        {
#line 764 "pragma_c_gen.m"
          ll_backend__code_info__add_alloc_site_info_6_p_0(ll_backend__pragma_c_gen__Context_15, (MR_String) "unknown", (MR_Integer) 0, &ll_backend__pragma_c_gen__AllocId_16, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18);
        }
#line 782 "pragma_c_gen.m"
        {
#line 782 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_39_39 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 782 "pragma_c_gen.m"
        {
#line 782 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 782 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_38_38, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_39_39));
#line 782 "pragma_c_gen.m"
        }
#line 781 "pragma_c_gen.m"
        {
#line 781 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 1) = ((MR_Box) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 2) = ((MR_Box) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_38_38));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_24_24, 4) = ((MR_Box) ((MR_String) "#define\tMR_ALLOC_ID\t"));
#line 781 "pragma_c_gen.m"
        }
#line 767 "pragma_c_gen.m"
        {
#line 767 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 767 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 1) = ((MR_Box) (ll_backend__pragma_c_gen__AllocId_16));
#line 767 "pragma_c_gen.m"
        }
#line 782 "pragma_c_gen.m"
        {
#line 782 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_45_45 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 782 "pragma_c_gen.m"
        {
#line 782 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 782 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_44_44, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_45_45));
#line 782 "pragma_c_gen.m"
        }
#line 781 "pragma_c_gen.m"
        {
#line 781 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 2) = ((MR_Box) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_44_44));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_29_29, 4) = ((MR_Box) ((MR_String) "\n"));
#line 781 "pragma_c_gen.m"
        }
#line 769 "pragma_c_gen.m"
        {
#line 769 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_28_28, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_29_29));
#line 769 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "pragma_c_gen.m"
        }
#line 767 "pragma_c_gen.m"
        {
#line 767 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_26_26, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_27_27));
#line 767 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_26_26, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_28_28));
#line 767 "pragma_c_gen.m"
        }
#line 766 "pragma_c_gen.m"
        {
#line 766 "pragma_c_gen.m"
          MR_Word base;
#line 766 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__AllocIdHashDefine_9 = base;
#line 766 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_24_24));
#line 766 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_26_26));
#line 766 "pragma_c_gen.m"
        }
#line 782 "pragma_c_gen.m"
        {
#line 782 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_51_51 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 782 "pragma_c_gen.m"
        {
#line 782 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 782 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_50_50, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_51_51));
#line 782 "pragma_c_gen.m"
        }
#line 781 "pragma_c_gen.m"
        {
#line 781 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 1) = ((MR_Box) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 2) = ((MR_Box) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_50_50));
#line 781 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_32_32, 4) = ((MR_Box) ((MR_String) "#undef\tMR_ALLOC_ID\n"));
#line 781 "pragma_c_gen.m"
        }
#line 772 "pragma_c_gen.m"
        {
#line 772 "pragma_c_gen.m"
          MR_Word base;
#line 772 "pragma_c_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__AllocIdHashUndef_10 = base;
#line 772 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_32_32));
#line 772 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "pragma_c_gen.m"
        }
#line 763 "pragma_c_gen.m"
      }
#line 754 "pragma_c_gen.m"
    else
#line 774 "pragma_c_gen.m"
      {
#line 774 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__AllocIdHashDefine_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 775 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__AllocIdHashUndef_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "pragma_c_gen.m"
        *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_18 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_17;
#line 774 "pragma_c_gen.m"
      }
#line 751 "pragma_c_gen.m"
  }
#line 746 "pragma_c_gen.m"
}

#line 723 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(
#line 723 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleInfo_6,
#line 723 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_7,
#line 723 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_8,
#line 723 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashDef_9,
#line 723 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__ProcLabelHashUndef_10)
#line 723 "pragma_c_gen.m"
{
#line 727 "pragma_c_gen.m"
  {
#line 727 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 727 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__ProcLabelStr_11;
#line 727 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_12_12;
#line 727 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_14_14;
#line 727 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__CodeAddr_21;
#line 727 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_33_33;
#line 727 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_34_34;
#line 727 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_39_39;
#line 727 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_40_40;
#line 738 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ProcLabel_22;

#line 737 "pragma_c_gen.m"
    {
#line 737 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__CodeAddr_21 = ll_backend__code_util__make_entry_label_4_f_0(ll_backend__pragma_c_gen__ModuleInfo_6, ll_backend__pragma_c_gen__PredId_7, ll_backend__pragma_c_gen__ProcId_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 738 "pragma_c_gen.m"
    ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__CodeAddr_21)) == (MR_mktag((MR_Integer) 2)));
#line 738 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 738 "pragma_c_gen.m"
      {
#line 738 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__ProcLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__CodeAddr_21, (MR_Integer) 0)));
#line 739 "pragma_c_gen.m"
        {
#line 739 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__ProcLabelStr_11 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__pragma_c_gen__ProcLabel_22, (MR_Integer) 1);
        }
#line 738 "pragma_c_gen.m"
      }
#line 738 "pragma_c_gen.m"
    else
#line 740 "pragma_c_gen.m"
      {
#line 740 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__Label_23;

#line 740 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = ((MR_tag((MR_Word) ll_backend__pragma_c_gen__CodeAddr_21)) == (MR_mktag((MR_Integer) 1)));
#line 740 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 740 "pragma_c_gen.m"
          {
#line 740 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Label_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__CodeAddr_21, (MR_Integer) 0)));
#line 741 "pragma_c_gen.m"
            {
#line 741 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__ProcLabelStr_11 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__pragma_c_gen__Label_23, (MR_Integer) 1);
            }
#line 740 "pragma_c_gen.m"
          }
#line 740 "pragma_c_gen.m"
        else
#line 743 "pragma_c_gen.m"
          {
#line 743 "pragma_c_gen.m"
            {
#line 743 "pragma_c_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "function \140ll_backend.pragma_c_gen.make_proc_label_string\'/3", (MR_String) "code_addr");
#line 743 "pragma_c_gen.m"
              return;
            }
#line 743 "pragma_c_gen.m"
          }
#line 740 "pragma_c_gen.m"
      }
#line 730 "pragma_c_gen.m"
    {
#line 730 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__ProcLabelStr_11, (MR_String) "\n");
    }
#line 730 "pragma_c_gen.m"
    {
#line 730 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "#define\tMR_PROC_LABEL\t", ll_backend__pragma_c_gen__V_14_14);
    }
#line 782 "pragma_c_gen.m"
    {
#line 782 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_34_34 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
#line 782 "pragma_c_gen.m"
    {
#line 782 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 782 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_33_33, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_34_34));
#line 782 "pragma_c_gen.m"
    }
#line 781 "pragma_c_gen.m"
    {
#line 781 "pragma_c_gen.m"
      MR_Word base;
#line 781 "pragma_c_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 781 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__ProcLabelHashDef_9 = base;
#line 781 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_33_33));
#line 781 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__pragma_c_gen__V_12_12));
#line 781 "pragma_c_gen.m"
    }
#line 782 "pragma_c_gen.m"
    {
#line 782 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_40_40 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
#line 782 "pragma_c_gen.m"
    {
#line 782 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 782 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_39_39, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_40_40));
#line 782 "pragma_c_gen.m"
    }
#line 781 "pragma_c_gen.m"
    {
#line 781 "pragma_c_gen.m"
      MR_Word base;
#line 781 "pragma_c_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 781 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__ProcLabelHashUndef_10 = base;
#line 781 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 781 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_39_39));
#line 781 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_String) "#undef\tMR_PROC_LABEL\n"));
#line 781 "pragma_c_gen.m"
    }
#line 727 "pragma_c_gen.m"
  }
#line 723 "pragma_c_gen.m"
}

#line 445 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_16,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Attributes_17,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_18,
#line 445 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_19,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_20,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_21,
#line 445 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__C_Code_22,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Context_23,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__GoalInfo_24,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25,
#line 445 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__Code_26,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96,
#line 445 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97,
#line 445 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_98,
#line 445 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99)
#line 445 "pragma_c_gen.m"
{
#line 453 "pragma_c_gen.m"
  {
#line 453 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_230_230;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_241_241;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__MayCallMercury_29;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ThreadSafe_30;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ArgInfos_31;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__OrigCArgs_32;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ModuleInfo_33;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ExtraCArgs_34;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__CArgs_35;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__InCArgs_36;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__OutCArgs_37;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__PostDeaths_38;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__DeadVars0_39;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__DeadVars_40;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__SaveVarsCode_41;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__InputDescs_45;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__InputVarsCode_46;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Decls_47;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__AllocIdHashDefine_48;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__AllocIdHashUndef_49;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__CallerPredId_50;
#line 453 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__CallerProcId_51;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ProcLabelHashDefine_52;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ProcLabelHashUndef_53;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__InputComp_54;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__SaveRegsComp_55;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ObtainLock_56;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ReleaseLock_57;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__AffectsLiveness_63;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__C_Code_Comp_64;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Detism_65;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__CheckSuccess_Comp_66;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__MaybeFailLabel_67;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__DefSuccessComp_69;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__UndefSuccessComp_70;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__RestoreRegsComp_71;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ExprnOpts_74;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__UseFloatRegs_75;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__FloatRegType_76;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Regs_77;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__OutputDescs_78;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__OutputComp_79;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Components_80;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__MaybeMayDupl_81;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__MayDupl_82;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__ExtraAttributes_85;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__RefersToLLDSSTack_86;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__PragmaCCode_87;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__FailureCode_95;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_104_104;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_105_105;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_106_106;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_184_184;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_185_185;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_187_187;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_188_188;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_189_189;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_190_190;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_191_191;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_192_192;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_193_193;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_194_194;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_195_195;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_196_196;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_197_197;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_198_198;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_200_200;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_201_201;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_224_224;
#line 453 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__V_225_225;

#line 455 "pragma_c_gen.m"
    {
#line 455 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__MayCallMercury_29 = parse_tree__prog_data__get_may_call_mercury_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
#line 456 "pragma_c_gen.m"
    {
#line 456 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__ThreadSafe_30 = parse_tree__prog_data__get_thread_safe_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
#line 469 "pragma_c_gen.m"
    {
#line 469 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__ArgInfos_31 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96, ll_backend__pragma_c_gen__PredId_18, ll_backend__pragma_c_gen__ProcId_19);
    }
#line 470 "pragma_c_gen.m"
    {
#line 470 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_c_arg_list_3_p_0(ll_backend__pragma_c_gen__Args_20, ll_backend__pragma_c_gen__ArgInfos_31, &ll_backend__pragma_c_gen__OrigCArgs_32);
    }
#line 471 "pragma_c_gen.m"
    {
#line 471 "pragma_c_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96, &ll_backend__pragma_c_gen__ModuleInfo_33);
    }
#line 472 "pragma_c_gen.m"
    {
#line 472 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_extra_c_arg_list_4_p_0(ll_backend__pragma_c_gen__ExtraArgs_21, ll_backend__pragma_c_gen__ModuleInfo_33, ll_backend__pragma_c_gen__ArgInfos_31, &ll_backend__pragma_c_gen__ExtraCArgs_34);
    }
#line 473 "pragma_c_gen.m"
    {
#line 473 "pragma_c_gen.m"
      mercury__list__append_3_p_1((MR_Word) &ll_backend__pragma_c_gen__ll_backend__pragma_c_gen__type_ctor_info_c_arg_0, ll_backend__pragma_c_gen__OrigCArgs_32, ll_backend__pragma_c_gen__ExtraCArgs_34, &ll_backend__pragma_c_gen__CArgs_35);
    }
#line 474 "pragma_c_gen.m"
    {
#line 474 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_p_0(ll_backend__pragma_c_gen__CArgs_35, &ll_backend__pragma_c_gen__InCArgs_36);
    }
#line 475 "pragma_c_gen.m"
    {
#line 475 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_p_0(ll_backend__pragma_c_gen__CArgs_35, &ll_backend__pragma_c_gen__OutCArgs_37);
    }
#line 477 "pragma_c_gen.m"
    {
#line 477 "pragma_c_gen.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__pragma_c_gen__GoalInfo_24, &ll_backend__pragma_c_gen__PostDeaths_38);
    }
#line 4004 "ll_backend.pragma_c_gen.c"
    ll_backend__pragma_c_gen__TypeCtorInfo_230_230 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 478 "pragma_c_gen.m"
    {
#line 478 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__DeadVars0_39 = parse_tree__set_of_var__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230);
    }
#line 479 "pragma_c_gen.m"
    {
#line 479 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__find_dead_input_vars_4_p_0(ll_backend__pragma_c_gen__InCArgs_36, ll_backend__pragma_c_gen__PostDeaths_38, ll_backend__pragma_c_gen__DeadVars0_39, &ll_backend__pragma_c_gen__DeadVars_40);
    }
#line 485 "pragma_c_gen.m"
#line 485 "pragma_c_gen.m"
    switch (ll_backend__pragma_c_gen__MayCallMercury_29) {
#line 485 "pragma_c_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 485 "pragma_c_gen.m"
      case (MR_Integer) 0:
#line 486 "pragma_c_gen.m"
        {
#line 486 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__OutVars_42;
#line 486 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__OutVarsSet_43;
#line 495 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_44_44;

#line 488 "pragma_c_gen.m"
          {
#line 488 "pragma_c_gen.m"
            ll_backend__code_info__succip_is_used_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103);
          }
#line 493 "pragma_c_gen.m"
          {
#line 493 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__get_c_arg_list_vars_2_p_0(ll_backend__pragma_c_gen__OutCArgs_37, &ll_backend__pragma_c_gen__OutVars_42);
          }
#line 494 "pragma_c_gen.m"
          {
#line 494 "pragma_c_gen.m"
            parse_tree__set_of_var__list_to_set_2_p_0(ll_backend__pragma_c_gen__TypeCtorInfo_230_230, ll_backend__pragma_c_gen__OutVars_42, &ll_backend__pragma_c_gen__OutVarsSet_43);
          }
#line 495 "pragma_c_gen.m"
          {
#line 495 "pragma_c_gen.m"
            ll_backend__code_loc_dep__save_variables_6_p_0(ll_backend__pragma_c_gen__OutVarsSet_43, &ll_backend__pragma_c_gen__V_44_44, &ll_backend__pragma_c_gen__SaveVarsCode_41, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_98, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_104_104);
          }
#line 486 "pragma_c_gen.m"
        }
#line 485 "pragma_c_gen.m"
        break;
#line 485 "pragma_c_gen.m"
      case (MR_Integer) 1:
#line 483 "pragma_c_gen.m"
        {
#line 484 "pragma_c_gen.m"
          {
#line 484 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__SaveVarsCode_41 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 483 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_96;
#line 483 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_104_104 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_98;
#line 483 "pragma_c_gen.m"
        }
#line 485 "pragma_c_gen.m"
        break;
#line 485 "pragma_c_gen.m"
    }
#line 501 "pragma_c_gen.m"
    {
#line 501 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__get_foreign_proc_input_vars_7_p_0(ll_backend__pragma_c_gen__InCArgs_36, &ll_backend__pragma_c_gen__InputDescs_45, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25, &ll_backend__pragma_c_gen__InputVarsCode_46, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_104_104, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_105_105);
    }
#line 508 "pragma_c_gen.m"
    {
#line 508 "pragma_c_gen.m"
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__pragma_c_gen__DeadVars_40, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_105_105, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_106_106);
    }
#line 511 "pragma_c_gen.m"
    {
#line 511 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_foreign_proc_decls_4_p_0(ll_backend__pragma_c_gen__CArgs_35, ll_backend__pragma_c_gen__ModuleInfo_33, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25, &ll_backend__pragma_c_gen__Decls_47);
    }
#line 514 "pragma_c_gen.m"
    {
#line 514 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_p_0(ll_backend__pragma_c_gen__C_Code_22, ll_backend__pragma_c_gen__Context_23, &ll_backend__pragma_c_gen__AllocIdHashDefine_48, &ll_backend__pragma_c_gen__AllocIdHashUndef_49, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_103_103, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107);
    }
#line 519 "pragma_c_gen.m"
    {
#line 519 "pragma_c_gen.m"
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107, &ll_backend__pragma_c_gen__CallerPredId_50);
    }
#line 520 "pragma_c_gen.m"
    {
#line 520 "pragma_c_gen.m"
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107, &ll_backend__pragma_c_gen__CallerProcId_51);
    }
#line 521 "pragma_c_gen.m"
    {
#line 521 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__make_proc_label_hash_define_5_p_0(ll_backend__pragma_c_gen__ModuleInfo_33, ll_backend__pragma_c_gen__CallerPredId_50, ll_backend__pragma_c_gen__CallerProcId_51, &ll_backend__pragma_c_gen__ProcLabelHashDefine_52, &ll_backend__pragma_c_gen__ProcLabelHashUndef_53);
    }
#line 525 "pragma_c_gen.m"
    {
#line 525 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__InputComp_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__InputComp_54, 0) = ((MR_Box) (ll_backend__pragma_c_gen__InputDescs_45));
#line 525 "pragma_c_gen.m"
    }
#line 4118 "ll_backend.pragma_c_gen.c"
#line 4119 "ll_backend.pragma_c_gen.c"
    switch (ll_backend__pragma_c_gen__ThreadSafe_30) {
#line 4121 "ll_backend.pragma_c_gen.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 4123 "ll_backend.pragma_c_gen.c"
      case (MR_Integer) 2:
#line 4125 "ll_backend.pragma_c_gen.c"
        {
#line 464 "pragma_c_gen.m"
          {
#line 464 "pragma_c_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_ordinary_foreign_proc_code\'/15", (MR_String) "maybe_thread_safe");
#line 464 "pragma_c_gen.m"
            return;
          }
#line 4134 "ll_backend.pragma_c_gen.c"
        }
#line 4136 "ll_backend.pragma_c_gen.c"
        break;
#line 4138 "ll_backend.pragma_c_gen.c"
      case (MR_Integer) 0:
#line 4140 "ll_backend.pragma_c_gen.c"
        {
#line 4142 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_235_235;
#line 4144 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__PredInfo_58;
#line 4146 "ll_backend.pragma_c_gen.c"
          MR_String ll_backend__pragma_c_gen__Name_59;
#line 4148 "ll_backend.pragma_c_gen.c"
          MR_String ll_backend__pragma_c_gen__MangledName_60;
#line 4150 "ll_backend.pragma_c_gen.c"
          MR_String ll_backend__pragma_c_gen__ObtainLockStr_61;
#line 4152 "ll_backend.pragma_c_gen.c"
          MR_String ll_backend__pragma_c_gen__ReleaseLockStr_62;
#line 4154 "ll_backend.pragma_c_gen.c"
          MR_String ll_backend__pragma_c_gen__V_119_119;
#line 4156 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_123_123;
#line 4158 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_124_124;
#line 4160 "ll_backend.pragma_c_gen.c"
          MR_String ll_backend__pragma_c_gen__V_126_126;
#line 4162 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_130_130;
#line 4164 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_131_131;

#line 548 "pragma_c_gen.m"
          {
#line 548 "pragma_c_gen.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__pragma_c_gen__ModuleInfo_33, ll_backend__pragma_c_gen__PredId_18, &ll_backend__pragma_c_gen__PredInfo_58);
          }
#line 549 "pragma_c_gen.m"
          {
#line 549 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__Name_59 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__pragma_c_gen__PredInfo_58);
          }
#line 550 "pragma_c_gen.m"
          {
#line 550 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__MangledName_60 = backend_libs__c_util__quote_string_1_f_0(ll_backend__pragma_c_gen__Name_59);
          }
#line 552 "pragma_c_gen.m"
          {
#line 552 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_119_119 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__MangledName_60, (MR_String) "\");\n");
          }
#line 552 "pragma_c_gen.m"
          {
#line 552 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__ObtainLockStr_61 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\"", ll_backend__pragma_c_gen__V_119_119);
          }
#line 4192 "ll_backend.pragma_c_gen.c"
          ll_backend__pragma_c_gen__TypeCtorInfo_235_235 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 554 "pragma_c_gen.m"
          {
#line 554 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_124_124 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_235_235);
          }
#line 554 "pragma_c_gen.m"
          {
#line 554 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 554 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_123_123, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_124_124));
#line 554 "pragma_c_gen.m"
          }
#line 553 "pragma_c_gen.m"
          {
#line 553 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__ObtainLock_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 553 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 553 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 1) = ((MR_Box) ((MR_Integer) 1));
#line 553 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 2) = ((MR_Box) ((MR_Integer) 1));
#line 553 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_123_123));
#line 553 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ObtainLockStr_61));
#line 553 "pragma_c_gen.m"
          }
#line 557 "pragma_c_gen.m"
          {
#line 557 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_126_126 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__MangledName_60, (MR_String) "\");\n");
          }
#line 557 "pragma_c_gen.m"
          {
#line 557 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__ReleaseLockStr_62 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\"", ll_backend__pragma_c_gen__V_126_126);
          }
#line 559 "pragma_c_gen.m"
          {
#line 559 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_131_131 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_235_235);
          }
#line 559 "pragma_c_gen.m"
          {
#line 559 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 559 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_130_130, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_131_131));
#line 559 "pragma_c_gen.m"
          }
#line 558 "pragma_c_gen.m"
          {
#line 558 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__ReleaseLock_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 558 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 558 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 1) = ((MR_Box) ((MR_Integer) 1));
#line 558 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 2) = ((MR_Box) ((MR_Integer) 1));
#line 558 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_130_130));
#line 558 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 4) = ((MR_Box) (ll_backend__pragma_c_gen__ReleaseLockStr_62));
#line 558 "pragma_c_gen.m"
          }
#line 4262 "ll_backend.pragma_c_gen.c"
        }
#line 4264 "ll_backend.pragma_c_gen.c"
        break;
#line 4266 "ll_backend.pragma_c_gen.c"
      case (MR_Integer) 1:
#line 4268 "ll_backend.pragma_c_gen.c"
        {
#line 4270 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_234_234 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 4272 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_134_134;
#line 4274 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_135_135;
#line 4276 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_139_139;
#line 4278 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_140_140;

#line 543 "pragma_c_gen.m"
          {
#line 543 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_135_135 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_234_234);
          }
#line 543 "pragma_c_gen.m"
          {
#line 543 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_134_134, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_135_135));
#line 543 "pragma_c_gen.m"
          }
#line 542 "pragma_c_gen.m"
          {
#line 542 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__ObtainLock_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 542 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 542 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 1) = ((MR_Box) ((MR_Integer) 1));
#line 542 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 2) = ((MR_Box) ((MR_Integer) 1));
#line 542 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_134_134));
#line 542 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ObtainLock_56, 4) = ((MR_Box) ((MR_String) ""));
#line 542 "pragma_c_gen.m"
          }
#line 545 "pragma_c_gen.m"
          {
#line 545 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_140_140 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_234_234);
          }
#line 545 "pragma_c_gen.m"
          {
#line 545 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 545 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_139_139, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_140_140));
#line 545 "pragma_c_gen.m"
          }
#line 544 "pragma_c_gen.m"
          {
#line 544 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__ReleaseLock_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 544 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 544 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 1) = ((MR_Box) ((MR_Integer) 1));
#line 544 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 2) = ((MR_Box) ((MR_Integer) 1));
#line 544 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_139_139));
#line 544 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__ReleaseLock_57, 4) = ((MR_Box) ((MR_String) ""));
#line 544 "pragma_c_gen.m"
          }
#line 4339 "ll_backend.pragma_c_gen.c"
        }
#line 4341 "ll_backend.pragma_c_gen.c"
        break;
#line 4343 "ll_backend.pragma_c_gen.c"
    }
#line 564 "pragma_c_gen.m"
    {
#line 564 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__AffectsLiveness_63 = parse_tree__prog_data__get_affects_liveness_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
#line 565 "pragma_c_gen.m"
    {
#line 565 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__C_Code_Comp_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 565 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 565 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_64, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Context_23));
#line 565 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_64, 2) = ((MR_Box) (ll_backend__pragma_c_gen__AffectsLiveness_63));
#line 565 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__C_Code_Comp_64, 3) = ((MR_Box) (ll_backend__pragma_c_gen__C_Code_22));
#line 565 "pragma_c_gen.m"
    }
#line 568 "pragma_c_gen.m"
    {
#line 568 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__Detism_65 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__pragma_c_gen__GoalInfo_24);
    }
#line 589 "pragma_c_gen.m"
#line 589 "pragma_c_gen.m"
    switch (ll_backend__pragma_c_gen__CodeModel_16) {
#line 589 "pragma_c_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 589 "pragma_c_gen.m"
      case (MR_Integer) 0:
#line 589 "pragma_c_gen.m"
      case (MR_Integer) 2:
#line 593 "pragma_c_gen.m"
        {
#line 593 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_237_237;
#line 593 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_144_144;
#line 593 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_145_145;
#line 593 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_149_149;
#line 593 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_150_150;

#line 594 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__CheckSuccess_Comp_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__MaybeFailLabel_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4395 "ll_backend.pragma_c_gen.c"
          ll_backend__pragma_c_gen__TypeCtorInfo_237_237 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 597 "pragma_c_gen.m"
          {
#line 597 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_145_145 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_237_237);
          }
#line 597 "pragma_c_gen.m"
          {
#line 597 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 597 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_144_144, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_145_145));
#line 597 "pragma_c_gen.m"
          }
#line 596 "pragma_c_gen.m"
          {
#line 596 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__DefSuccessComp_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 596 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 596 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 1) = ((MR_Box) ((MR_Integer) 1));
#line 596 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 2) = ((MR_Box) ((MR_Integer) 1));
#line 596 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_144_144));
#line 596 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 4) = ((MR_Box) ((MR_String) ""));
#line 596 "pragma_c_gen.m"
          }
#line 599 "pragma_c_gen.m"
          {
#line 599 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_150_150 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_237_237);
          }
#line 599 "pragma_c_gen.m"
          {
#line 599 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 599 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_149_149, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_150_150));
#line 599 "pragma_c_gen.m"
          }
#line 598 "pragma_c_gen.m"
          {
#line 598 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__UndefSuccessComp_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 598 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 598 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 1) = ((MR_Box) ((MR_Integer) 1));
#line 598 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 2) = ((MR_Box) ((MR_Integer) 1));
#line 598 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_149_149));
#line 598 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 4) = ((MR_Box) ((MR_String) ""));
#line 598 "pragma_c_gen.m"
          }
#line 593 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107;
#line 593 "pragma_c_gen.m"
        }
#line 589 "pragma_c_gen.m"
        break;
#line 589 "pragma_c_gen.m"
      case (MR_Integer) 1:
#line 570 "pragma_c_gen.m"
        {
#line 570 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_236_236;
#line 570 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_155_155;
#line 570 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_156_156;
#line 570 "pragma_c_gen.m"
          MR_String ll_backend__pragma_c_gen__V_157_157;
#line 570 "pragma_c_gen.m"
          MR_String ll_backend__pragma_c_gen__V_159_159;
#line 570 "pragma_c_gen.m"
          MR_String ll_backend__pragma_c_gen__V_160_160;
#line 570 "pragma_c_gen.m"
          MR_String ll_backend__pragma_c_gen__V_161_161;
#line 570 "pragma_c_gen.m"
          MR_String ll_backend__pragma_c_gen__V_163_163;
#line 570 "pragma_c_gen.m"
          MR_String ll_backend__pragma_c_gen__V_165_165;
#line 570 "pragma_c_gen.m"
          MR_String ll_backend__pragma_c_gen__V_167_167;
#line 570 "pragma_c_gen.m"
          MR_String ll_backend__pragma_c_gen__V_168_168;
#line 570 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_172_172;
#line 570 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_173_173;

#line 571 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__Detism_65 == (MR_Integer) 7);
#line 571 "pragma_c_gen.m"
          if (ll_backend__pragma_c_gen__succeeded)
#line 572 "pragma_c_gen.m"
            {
#line 572 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__CheckSuccess_Comp_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 573 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__MaybeFailLabel_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 572 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107;
#line 572 "pragma_c_gen.m"
            }
#line 571 "pragma_c_gen.m"
          else
#line 575 "pragma_c_gen.m"
            {
#line 575 "pragma_c_gen.m"
              MR_Word ll_backend__pragma_c_gen__FailLabel_68;

#line 575 "pragma_c_gen.m"
              {
#line 575 "pragma_c_gen.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__pragma_c_gen__FailLabel_68, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_107_107, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152);
              }
#line 576 "pragma_c_gen.m"
              {
#line 576 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__CheckSuccess_Comp_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "pragma_c_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__CheckSuccess_Comp_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 576 "pragma_c_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__CheckSuccess_Comp_66, 1) = ((MR_Box) (ll_backend__pragma_c_gen__FailLabel_68));
#line 576 "pragma_c_gen.m"
              }
#line 577 "pragma_c_gen.m"
              {
#line 577 "pragma_c_gen.m"
                ll_backend__pragma_c_gen__MaybeFailLabel_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "pragma_c_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeFailLabel_67, 0) = ((MR_Box) (ll_backend__pragma_c_gen__FailLabel_68));
#line 577 "pragma_c_gen.m"
              }
#line 575 "pragma_c_gen.m"
            }
#line 4538 "ll_backend.pragma_c_gen.c"
          ll_backend__pragma_c_gen__TypeCtorInfo_236_236 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 580 "pragma_c_gen.m"
          {
#line 580 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_156_156 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_236_236);
          }
#line 580 "pragma_c_gen.m"
          {
#line 580 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 580 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_155_155, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_156_156));
#line 580 "pragma_c_gen.m"
          }
#line 581 "pragma_c_gen.m"
          {
#line 581 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_160_160 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
          }
#line 584 "pragma_c_gen.m"
          {
#line 584 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_168_168 = ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0();
          }
#line 584 "pragma_c_gen.m"
          {
#line 584 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_167_167 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_168_168, (MR_String) "\n");
          }
#line 583 "pragma_c_gen.m"
          {
#line 583 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_165_165 = mercury__string__f_43_43_2_f_0((MR_String) "#define SUCCESS_INDICATOR ", ll_backend__pragma_c_gen__V_167_167);
          }
#line 582 "pragma_c_gen.m"
          {
#line 582 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_163_163 = mercury__string__f_43_43_2_f_0((MR_String) "#undef SUCCESS_INDICATOR\n", ll_backend__pragma_c_gen__V_165_165);
          }
#line 581 "pragma_c_gen.m"
          {
#line 581 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_161_161 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", ll_backend__pragma_c_gen__V_163_163);
          }
#line 581 "pragma_c_gen.m"
          {
#line 581 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_159_159 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_160_160, ll_backend__pragma_c_gen__V_161_161);
          }
#line 581 "pragma_c_gen.m"
          {
#line 581 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_157_157 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_bool ", ll_backend__pragma_c_gen__V_159_159);
          }
#line 579 "pragma_c_gen.m"
          {
#line 579 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__DefSuccessComp_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 579 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 579 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 1) = ((MR_Box) ((MR_Integer) 1));
#line 579 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 2) = ((MR_Box) ((MR_Integer) 1));
#line 579 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_155_155));
#line 579 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__DefSuccessComp_69, 4) = ((MR_Box) (ll_backend__pragma_c_gen__V_157_157));
#line 579 "pragma_c_gen.m"
          }
#line 586 "pragma_c_gen.m"
          {
#line 586 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_173_173 = mercury__set__init_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_236_236);
          }
#line 586 "pragma_c_gen.m"
          {
#line 586 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 586 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_172_172, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_173_173));
#line 586 "pragma_c_gen.m"
          }
#line 585 "pragma_c_gen.m"
          {
#line 585 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__UndefSuccessComp_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 585 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 585 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 1) = ((MR_Box) ((MR_Integer) 1));
#line 585 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 2) = ((MR_Box) ((MR_Integer) 1));
#line 585 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_172_172));
#line 585 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__UndefSuccessComp_70, 4) = ((MR_Box) ((MR_String) "#undef SUCCESS_INDICATOR\n#define SUCCESS_INDICATOR MR_r1\n"));
#line 585 "pragma_c_gen.m"
          }
#line 570 "pragma_c_gen.m"
        }
#line 589 "pragma_c_gen.m"
        break;
#line 589 "pragma_c_gen.m"
    }
#line 4644 "ll_backend.pragma_c_gen.c"
#line 4645 "ll_backend.pragma_c_gen.c"
    switch (ll_backend__pragma_c_gen__MayCallMercury_29) {
#line 4647 "ll_backend.pragma_c_gen.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 4649 "ll_backend.pragma_c_gen.c"
      case (MR_Integer) 0:
#line 4651 "ll_backend.pragma_c_gen.c"
        {
#line 4653 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__InstMapDelta_72;
#line 4655 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__OkToDelete_73;
#line 4657 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_110_110;
#line 4659 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_111_111;
#line 4661 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_179_179;
#line 4663 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_180_180;

#line 535 "pragma_c_gen.m"
          {
#line 535 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_111_111 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
#line 535 "pragma_c_gen.m"
          {
#line 535 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 535 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_110_110, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_111_111));
#line 535 "pragma_c_gen.m"
          }
#line 534 "pragma_c_gen.m"
          {
#line 534 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__SaveRegsComp_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 534 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 1) = ((MR_Box) ((MR_Integer) 1));
#line 534 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 2) = ((MR_Box) ((MR_Integer) 0));
#line 534 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_110_110));
#line 534 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 4) = ((MR_Box) ((MR_String) "\tMR_save_registers();\n"));
#line 534 "pragma_c_gen.m"
          }
#line 611 "pragma_c_gen.m"
          {
#line 611 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_180_180 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
#line 611 "pragma_c_gen.m"
          {
#line 611 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 611 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_179_179, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_180_180));
#line 611 "pragma_c_gen.m"
          }
#line 610 "pragma_c_gen.m"
          {
#line 610 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__RestoreRegsComp_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 610 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 610 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 1) = ((MR_Box) ((MR_Integer) 1));
#line 610 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 2) = ((MR_Box) ((MR_Integer) 1));
#line 610 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_179_179));
#line 610 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__RestoreRegsComp_71, 4) = ((MR_Box) ((MR_String) "#ifndef MR_CONSERVATIVE_GC\n\tMR_restore_registers();\n#endif\n"));
#line 610 "pragma_c_gen.m"
          }
#line 623 "pragma_c_gen.m"
          {
#line 623 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__InstMapDelta_72 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__pragma_c_gen__GoalInfo_24);
          }
#line 624 "pragma_c_gen.m"
          {
#line 624 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__pragma_c_gen__InstMapDelta_72);
          }
#line 624 "pragma_c_gen.m"
          if (ll_backend__pragma_c_gen__succeeded)
#line 625 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__OkToDelete_73 = (MR_Integer) 0;
#line 624 "pragma_c_gen.m"
          else
#line 627 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__OkToDelete_73 = (MR_Integer) 1;
#line 629 "pragma_c_gen.m"
          {
#line 629 "pragma_c_gen.m"
            ll_backend__code_loc_dep__clear_all_registers_3_p_0(ll_backend__pragma_c_gen__OkToDelete_73, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_106_106, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_184_184);
          }
#line 4747 "ll_backend.pragma_c_gen.c"
        }
#line 4749 "ll_backend.pragma_c_gen.c"
        break;
#line 4751 "ll_backend.pragma_c_gen.c"
      case (MR_Integer) 1:
#line 4753 "ll_backend.pragma_c_gen.c"
        {
#line 4755 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_115_115;
#line 4757 "ll_backend.pragma_c_gen.c"
          MR_Word ll_backend__pragma_c_gen__V_116_116;

#line 531 "pragma_c_gen.m"
          {
#line 531 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_116_116 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
#line 531 "pragma_c_gen.m"
          {
#line 531 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 531 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_115_115, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_116_116));
#line 531 "pragma_c_gen.m"
          }
#line 530 "pragma_c_gen.m"
          {
#line 530 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__SaveRegsComp_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 530 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 530 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 1) = ((MR_Box) ((MR_Integer) 1));
#line 530 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 2) = ((MR_Box) ((MR_Integer) 1));
#line 530 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 3) = ((MR_Box) (ll_backend__pragma_c_gen__V_115_115));
#line 530 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__SaveRegsComp_55, 4) = ((MR_Box) ((MR_String) ""));
#line 530 "pragma_c_gen.m"
          }
#line 607 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__RestoreRegsComp_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_184_184 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_106_106;
#line 4793 "ll_backend.pragma_c_gen.c"
        }
#line 4795 "ll_backend.pragma_c_gen.c"
        break;
#line 4797 "ll_backend.pragma_c_gen.c"
    }
#line 633 "pragma_c_gen.m"
    {
#line 633 "pragma_c_gen.m"
      ll_backend__code_info__get_exprn_opts_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152, &ll_backend__pragma_c_gen__ExprnOpts_74);
    }
#line 634 "pragma_c_gen.m"
    {
#line 634 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__UseFloatRegs_75 = ll_backend__llds__get_float_registers_1_f_0(ll_backend__pragma_c_gen__ExprnOpts_74);
    }
#line 638 "pragma_c_gen.m"
#line 638 "pragma_c_gen.m"
    switch (ll_backend__pragma_c_gen__UseFloatRegs_75) {
#line 638 "pragma_c_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 638 "pragma_c_gen.m"
      case (MR_Integer) 1:
#line 640 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__FloatRegType_76 = (MR_Integer) 0;
#line 638 "pragma_c_gen.m"
        break;
#line 638 "pragma_c_gen.m"
      case (MR_Integer) 0:
#line 637 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__FloatRegType_76 = (MR_Integer) 1;
#line 638 "pragma_c_gen.m"
        break;
#line 638 "pragma_c_gen.m"
    }
#line 642 "pragma_c_gen.m"
    {
#line 642 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__foreign_proc_acquire_regs_5_p_0(ll_backend__pragma_c_gen__FloatRegType_76, ll_backend__pragma_c_gen__OutCArgs_37, &ll_backend__pragma_c_gen__Regs_77, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_184_184, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_185_185);
    }
#line 643 "pragma_c_gen.m"
    {
#line 643 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_7_p_0(ll_backend__pragma_c_gen__OutCArgs_37, ll_backend__pragma_c_gen__Regs_77, ll_backend__pragma_c_gen__CanOptAwayUnnamedArgs_25, &ll_backend__pragma_c_gen__OutputDescs_78, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_185_185, &ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186);
    }
#line 645 "pragma_c_gen.m"
    {
#line 645 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__OutputComp_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 645 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__OutputComp_79, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OutputDescs_78));
#line 645 "pragma_c_gen.m"
    }
#line 648 "pragma_c_gen.m"
    {
#line 648 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_187_187, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ProcLabelHashDefine_52));
#line 648 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_187_187, 1) = ((MR_Box) (ll_backend__pragma_c_gen__AllocIdHashDefine_48));
#line 648 "pragma_c_gen.m"
    }
#line 653 "pragma_c_gen.m"
    {
#line 653 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_198_198, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ProcLabelHashUndef_53));
#line 653 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_198_198, 1) = ((MR_Box) (ll_backend__pragma_c_gen__AllocIdHashUndef_49));
#line 653 "pragma_c_gen.m"
    }
#line 652 "pragma_c_gen.m"
    {
#line 652 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_197_197, 0) = ((MR_Box) (ll_backend__pragma_c_gen__UndefSuccessComp_70));
#line 652 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_197_197, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_198_198));
#line 652 "pragma_c_gen.m"
    }
#line 652 "pragma_c_gen.m"
    {
#line 652 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_196_196, 0) = ((MR_Box) (ll_backend__pragma_c_gen__OutputComp_79));
#line 652 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_196_196, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_197_197));
#line 652 "pragma_c_gen.m"
    }
#line 651 "pragma_c_gen.m"
    {
#line 651 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_195_195, 0) = ((MR_Box) (ll_backend__pragma_c_gen__RestoreRegsComp_71));
#line 651 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_195_195, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_196_196));
#line 651 "pragma_c_gen.m"
    }
#line 651 "pragma_c_gen.m"
    {
#line 651 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_194_194, 0) = ((MR_Box) (ll_backend__pragma_c_gen__CheckSuccess_Comp_66));
#line 651 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_194_194, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_195_195));
#line 651 "pragma_c_gen.m"
    }
#line 650 "pragma_c_gen.m"
    {
#line 650 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_193_193, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ReleaseLock_57));
#line 650 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_193_193, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_194_194));
#line 650 "pragma_c_gen.m"
    }
#line 650 "pragma_c_gen.m"
    {
#line 650 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_192_192, 0) = ((MR_Box) (ll_backend__pragma_c_gen__C_Code_Comp_64));
#line 650 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_192_192, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_193_193));
#line 650 "pragma_c_gen.m"
    }
#line 650 "pragma_c_gen.m"
    {
#line 650 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_191_191, 0) = ((MR_Box) (ll_backend__pragma_c_gen__ObtainLock_56));
#line 650 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_191_191, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_192_192));
#line 650 "pragma_c_gen.m"
    }
#line 650 "pragma_c_gen.m"
    {
#line 650 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_190_190, 0) = ((MR_Box) (ll_backend__pragma_c_gen__SaveRegsComp_55));
#line 650 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_190_190, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_191_191));
#line 650 "pragma_c_gen.m"
    }
#line 649 "pragma_c_gen.m"
    {
#line 649 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_189_189, 0) = ((MR_Box) (ll_backend__pragma_c_gen__InputComp_54));
#line 649 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_189_189, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_190_190));
#line 649 "pragma_c_gen.m"
    }
#line 649 "pragma_c_gen.m"
    {
#line 649 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_188_188, 0) = ((MR_Box) (ll_backend__pragma_c_gen__DefSuccessComp_69));
#line 649 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_188_188, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_189_189));
#line 649 "pragma_c_gen.m"
    }
#line 648 "pragma_c_gen.m"
    {
#line 648 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__Components_80 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0, ll_backend__pragma_c_gen__V_187_187, ll_backend__pragma_c_gen__V_188_188);
    }
#line 654 "pragma_c_gen.m"
    {
#line 654 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__MaybeMayDupl_81 = parse_tree__prog_data__get_may_duplicate_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
#line 657 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__MaybeMayDupl_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 662 "pragma_c_gen.m"
      if ((ll_backend__pragma_c_gen__ExtraArgs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 661 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__MayDupl_82 = (MR_Integer) 0;
#line 662 "pragma_c_gen.m"
      else
#line 664 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__MayDupl_82 = (MR_Integer) 1;
#line 657 "pragma_c_gen.m"
    else
#line 656 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__MayDupl_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeMayDupl_81, (MR_Integer) 0)));
#line 667 "pragma_c_gen.m"
    {
#line 667 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__ExtraAttributes_85 = parse_tree__prog_data__get_extra_attributes_1_f_0(ll_backend__pragma_c_gen__Attributes_17);
    }
#line 668 "pragma_c_gen.m"
    {
#line 668 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_extra_attribute_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ll_backend__pragma_c_gen__ExtraAttributes_85);
    }
#line 668 "pragma_c_gen.m"
    if (ll_backend__pragma_c_gen__succeeded)
#line 669 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__RefersToLLDSSTack_86 = (MR_Integer) 1;
#line 668 "pragma_c_gen.m"
    else
#line 671 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__RefersToLLDSSTack_86 = (MR_Integer) 0;
#line 5008 "ll_backend.pragma_c_gen.c"
    ll_backend__pragma_c_gen__TypeCtorInfo_241_241 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 674 "pragma_c_gen.m"
    {
#line 674 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_201_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Decls_47));
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 2) = ((MR_Box) (ll_backend__pragma_c_gen__Components_80));
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 3) = ((MR_Box) (ll_backend__pragma_c_gen__MayCallMercury_29));
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 7) = ((MR_Box) (ll_backend__pragma_c_gen__MaybeFailLabel_67));
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 9) = ((MR_Box) (ll_backend__pragma_c_gen__RefersToLLDSSTack_86));
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_201_201, 10) = ((MR_Box) (ll_backend__pragma_c_gen__MayDupl_82));
#line 674 "pragma_c_gen.m"
    }
#line 674 "pragma_c_gen.m"
    {
#line 674 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_200_200, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_201_201));
#line 674 "pragma_c_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_200_200, 1) = ((MR_Box) ((MR_String) "foreign_proc inclusion"));
#line 674 "pragma_c_gen.m"
    }
#line 673 "pragma_c_gen.m"
    {
#line 673 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__PragmaCCode_87 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ((MR_Box) (ll_backend__pragma_c_gen__V_200_200)));
    }
#line 709 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__MaybeFailLabel_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 711 "pragma_c_gen.m"
      {
#line 711 "pragma_c_gen.m"
        ll_backend__pragma_c_gen__succeeded = (ll_backend__pragma_c_gen__Detism_65 == (MR_Integer) 7);
#line 711 "pragma_c_gen.m"
        if (ll_backend__pragma_c_gen__succeeded)
#line 712 "pragma_c_gen.m"
          {
#line 712 "pragma_c_gen.m"
            MR_Word ll_backend__pragma_c_gen__BeforeFailure_226;

#line 712 "pragma_c_gen.m"
            {
#line 712 "pragma_c_gen.m"
              ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186, &ll_backend__pragma_c_gen__BeforeFailure_226);
            }
#line 713 "pragma_c_gen.m"
            {
#line 713 "pragma_c_gen.m"
              ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__pragma_c_gen__FailureCode_95, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186);
            }
#line 714 "pragma_c_gen.m"
            {
#line 714 "pragma_c_gen.m"
              ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__pragma_c_gen__BeforeFailure_226, *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99);
            }
#line 712 "pragma_c_gen.m"
          }
#line 711 "pragma_c_gen.m"
        else
#line 716 "pragma_c_gen.m"
          {
#line 716 "pragma_c_gen.m"
            {
#line 716 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__FailureCode_95 = mercury__cord__empty_0_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241);
            }
#line 716 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99 = ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186;
#line 716 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97 = ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152;
#line 716 "pragma_c_gen.m"
          }
#line 711 "pragma_c_gen.m"
      }
#line 709 "pragma_c_gen.m"
    else
#line 692 "pragma_c_gen.m"
      {
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TheFailLabel_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeFailLabel_67, (MR_Integer) 0)));
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__SkipLabel_89;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BeforeFailure_90;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__FailCode_91;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__GotoSkipLabelCode_92;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__SkipLabelCode_93;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__FailLabelCode_94;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_209_209;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_212_212;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_213_213;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_214_214;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_216_216;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_217_217;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_219_219;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_220_220;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_222_222;
#line 692 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_223_223;

#line 693 "pragma_c_gen.m"
        {
#line 693 "pragma_c_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__pragma_c_gen__SkipLabel_89, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_152_152, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_209_209);
        }
#line 694 "pragma_c_gen.m"
        {
#line 694 "pragma_c_gen.m"
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186, &ll_backend__pragma_c_gen__BeforeFailure_90);
        }
#line 695 "pragma_c_gen.m"
        {
#line 695 "pragma_c_gen.m"
          ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__pragma_c_gen__FailCode_91, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_209_209, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_186_186);
        }
#line 696 "pragma_c_gen.m"
        {
#line 696 "pragma_c_gen.m"
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__pragma_c_gen__BeforeFailure_90, *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_97, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_99);
        }
#line 699 "pragma_c_gen.m"
        {
#line 699 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_214_214, 0) = ((MR_Box) (ll_backend__pragma_c_gen__SkipLabel_89));
#line 699 "pragma_c_gen.m"
        }
#line 699 "pragma_c_gen.m"
        {
#line 699 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_213_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_213_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 699 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_213_213, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_214_214));
#line 699 "pragma_c_gen.m"
        }
#line 699 "pragma_c_gen.m"
        {
#line 699 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 699 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_212_212, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_213_213));
#line 699 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_212_212, 1) = ((MR_Box) ((MR_String) "Skip past failure code"));
#line 699 "pragma_c_gen.m"
        }
#line 698 "pragma_c_gen.m"
        {
#line 698 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__GotoSkipLabelCode_92 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ((MR_Box) (ll_backend__pragma_c_gen__V_212_212)));
        }
#line 702 "pragma_c_gen.m"
        {
#line 702 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_217_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_217_217, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 702 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_217_217, 1) = ((MR_Box) (ll_backend__pragma_c_gen__SkipLabel_89));
#line 702 "pragma_c_gen.m"
        }
#line 702 "pragma_c_gen.m"
        {
#line 702 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 702 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_216_216, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_217_217));
#line 702 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_216_216, 1) = ((MR_Box) ((MR_String) ""));
#line 702 "pragma_c_gen.m"
        }
#line 701 "pragma_c_gen.m"
        {
#line 701 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__SkipLabelCode_93 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ((MR_Box) (ll_backend__pragma_c_gen__V_216_216)));
        }
#line 705 "pragma_c_gen.m"
        {
#line 705 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_220_220 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_220_220, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 705 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_220_220, 1) = ((MR_Box) (ll_backend__pragma_c_gen__TheFailLabel_88));
#line 705 "pragma_c_gen.m"
        }
#line 705 "pragma_c_gen.m"
        {
#line 705 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_219_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 705 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_219_219, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_220_220));
#line 705 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_219_219, 1) = ((MR_Box) ((MR_String) ""));
#line 705 "pragma_c_gen.m"
        }
#line 704 "pragma_c_gen.m"
        {
#line 704 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__FailLabelCode_94 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ((MR_Box) (ll_backend__pragma_c_gen__V_219_219)));
        }
#line 707 "pragma_c_gen.m"
        {
#line 707 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_223_223 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__FailCode_91, ll_backend__pragma_c_gen__SkipLabelCode_93);
        }
#line 707 "pragma_c_gen.m"
        {
#line 707 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_222_222 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__FailLabelCode_94, ll_backend__pragma_c_gen__V_223_223);
        }
#line 707 "pragma_c_gen.m"
        {
#line 707 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__FailureCode_95 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__GotoSkipLabelCode_92, ll_backend__pragma_c_gen__V_222_222);
        }
#line 692 "pragma_c_gen.m"
      }
#line 721 "pragma_c_gen.m"
    {
#line 721 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_225_225 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__PragmaCCode_87, ll_backend__pragma_c_gen__FailureCode_95);
    }
#line 721 "pragma_c_gen.m"
    {
#line 721 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_224_224 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__InputVarsCode_46, ll_backend__pragma_c_gen__V_225_225);
    }
#line 721 "pragma_c_gen.m"
    {
#line 721 "pragma_c_gen.m"
      *ll_backend__pragma_c_gen__Code_26 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_241_241, ll_backend__pragma_c_gen__SaveVarsCode_41, ll_backend__pragma_c_gen__V_224_224);
    }
#line 453 "pragma_c_gen.m"
  }
#line 445 "pragma_c_gen.m"
}

#line 413 "pragma_c_gen.m"
static void MR_CALL 
ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(
#line 413 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Expr_5,
#line 413 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__CondRval_6,
#line 413 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19,
#line 413 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20)
#line 413 "pragma_c_gen.m"
{
#line 418 "pragma_c_gen.m"
  {
#line 418 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 418 "pragma_c_gen.m"
#line 418 "pragma_c_gen.m"
    switch (MR_tag((MR_Word) ll_backend__pragma_c_gen__Expr_5)) {
#line 418 "pragma_c_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 418 "pragma_c_gen.m"
      case (MR_Integer) 0:
#line 418 "pragma_c_gen.m"
        {
#line 418 "pragma_c_gen.m"
          MR_String ll_backend__pragma_c_gen__EnvVar_8;
#line 418 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__UsedEnvVars0_9;
#line 418 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__UsedEnvVars_10;
#line 418 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__EnvVarRval_11;
#line 418 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 0)));
#line 418 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_27_27;
#line 418 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__V_28_28;

#line 418 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__EnvVar_8 = (MR_String) ll_backend__pragma_c_gen__V_25_25;
#line 419 "pragma_c_gen.m"
          {
#line 419 "pragma_c_gen.m"
            ll_backend__code_info__get_used_env_vars_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, &ll_backend__pragma_c_gen__UsedEnvVars0_9);
          }
#line 420 "pragma_c_gen.m"
          {
#line 420 "pragma_c_gen.m"
            mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ll_backend__pragma_c_gen__EnvVar_8)), ll_backend__pragma_c_gen__UsedEnvVars0_9, &ll_backend__pragma_c_gen__UsedEnvVars_10);
          }
#line 421 "pragma_c_gen.m"
          {
#line 421 "pragma_c_gen.m"
            ll_backend__code_info__set_used_env_vars_3_p_0(ll_backend__pragma_c_gen__UsedEnvVars_10, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);
          }
#line 422 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_28_28 = (MR_Word) ll_backend__pragma_c_gen__EnvVar_8;
#line 422 "pragma_c_gen.m"
          {
#line 422 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 422 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_27_27, 1) = ((MR_Box) (ll_backend__pragma_c_gen__V_28_28));
#line 422 "pragma_c_gen.m"
          }
#line 422 "pragma_c_gen.m"
          {
#line 422 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__EnvVarRval_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 422 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__EnvVarRval_11, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_27_27));
#line 422 "pragma_c_gen.m"
          }
#line 424 "pragma_c_gen.m"
          {
#line 424 "pragma_c_gen.m"
            MR_Word base;
#line 424 "pragma_c_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 424 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__CondRval_6 = base;
#line 424 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 424 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 424 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__pragma_c_gen__EnvVarRval_11));
#line 424 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__pragma_c_gen_scalar_common_1[3])));
#line 424 "pragma_c_gen.m"
          }
#line 418 "pragma_c_gen.m"
        }
#line 418 "pragma_c_gen.m"
        break;
#line 418 "pragma_c_gen.m"
      case (MR_Integer) 1:
#line 426 "pragma_c_gen.m"
        {
#line 426 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__ExprA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 0)));
#line 426 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__RvalA_14;

#line 427 "pragma_c_gen.m"
          {
#line 427 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__ExprA_13, &ll_backend__pragma_c_gen__RvalA_14, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);
          }
#line 428 "pragma_c_gen.m"
          {
#line 428 "pragma_c_gen.m"
            MR_Word base;
#line 428 "pragma_c_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 428 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__CondRval_6 = base;
#line 428 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 428 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 7));
#line 428 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__pragma_c_gen__RvalA_14));
#line 428 "pragma_c_gen.m"
          }
#line 426 "pragma_c_gen.m"
        }
#line 418 "pragma_c_gen.m"
        break;
#line 418 "pragma_c_gen.m"
      case (MR_Integer) 2:
#line 430 "pragma_c_gen.m"
        {
#line 430 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__TraceOp_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 0)));
#line 430 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__ExprB_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 2)));
#line 430 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__RvalB_17;
#line 430 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__Op_18;
#line 430 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_21;
#line 430 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__ExprA_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__pragma_c_gen__Expr_5, (MR_Integer) 1)));
#line 430 "pragma_c_gen.m"
          MR_Word ll_backend__pragma_c_gen__RvalA_33;

#line 431 "pragma_c_gen.m"
          {
#line 431 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__ExprA_32, &ll_backend__pragma_c_gen__RvalA_33, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_19, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_21);
          }
#line 432 "pragma_c_gen.m"
          {
#line 432 "pragma_c_gen.m"
            ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__ExprB_16, &ll_backend__pragma_c_gen__RvalB_17, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_21, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_20);
          }
#line 436 "pragma_c_gen.m"
#line 436 "pragma_c_gen.m"
          switch (ll_backend__pragma_c_gen__TraceOp_15) {
#line 436 "pragma_c_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 436 "pragma_c_gen.m"
            case (MR_Integer) 1:
#line 438 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__Op_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 436 "pragma_c_gen.m"
              break;
#line 436 "pragma_c_gen.m"
            case (MR_Integer) 0:
#line 435 "pragma_c_gen.m"
              ll_backend__pragma_c_gen__Op_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 436 "pragma_c_gen.m"
              break;
#line 436 "pragma_c_gen.m"
          }
#line 440 "pragma_c_gen.m"
          {
#line 440 "pragma_c_gen.m"
            MR_Word base;
#line 440 "pragma_c_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 440 "pragma_c_gen.m"
            *ll_backend__pragma_c_gen__CondRval_6 = base;
#line 440 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 440 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__pragma_c_gen__Op_18));
#line 440 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__pragma_c_gen__RvalA_33));
#line 440 "pragma_c_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__pragma_c_gen__RvalB_17));
#line 440 "pragma_c_gen.m"
          }
#line 430 "pragma_c_gen.m"
        }
#line 418 "pragma_c_gen.m"
        break;
#line 418 "pragma_c_gen.m"
    }
#line 418 "pragma_c_gen.m"
  }
#line 413 "pragma_c_gen.m"
}

#line 55 "pragma_c_gen.m"
MR_String MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_f_0(void)
#line 55 "pragma_c_gen.m"
{
#line 1137 "pragma_c_gen.m"
  {
#line 1137 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;

#line 1137 "pragma_c_gen.m"
    return (MR_String) "MercurySuccessIndicator";
#line 1137 "pragma_c_gen.m"
  }
#line 55 "pragma_c_gen.m"
}

#line 50 "pragma_c_gen.m"
MR_String MR_CALL 
ll_backend__pragma_c_gen__foreign_proc_struct_name_4_f_0(
#line 50 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ModuleName_6,
#line 50 "pragma_c_gen.m"
  MR_String ll_backend__pragma_c_gen__PredName_7,
#line 50 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__Arity_8,
#line 50 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_9)
#line 50 "pragma_c_gen.m"
{
#line 1132 "pragma_c_gen.m"
  {
#line 1132 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 1132 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__HeadVar__5_5;
#line 1132 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_11_11;
#line 1132 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_12_12;
#line 1132 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_13_13;
#line 1132 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_15_15;
#line 1132 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_16_16;
#line 1132 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_17_17;
#line 1132 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_19_19;
#line 1132 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_20_20;
#line 1132 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_21_21;
#line 1132 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__V_23_23;
#line 1132 "pragma_c_gen.m"
    MR_Integer ll_backend__pragma_c_gen__V_24_24;

#line 1133 "pragma_c_gen.m"
    {
#line 1133 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_12_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__pragma_c_gen__ModuleName_6);
    }
#line 1134 "pragma_c_gen.m"
    {
#line 1134 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_16_16 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__pragma_c_gen__PredName_7);
    }
#line 1134 "pragma_c_gen.m"
    {
#line 1134 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_20_20 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__Arity_8);
    }
#line 1135 "pragma_c_gen.m"
    {
#line 1135 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_24_24 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__pragma_c_gen__ProcId_9);
    }
#line 1135 "pragma_c_gen.m"
    {
#line 1135 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_23_23 = mercury__string__int_to_string_1_f_0(ll_backend__pragma_c_gen__V_24_24);
    }
#line 1134 "pragma_c_gen.m"
    {
#line 1134 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__pragma_c_gen__V_23_23);
    }
#line 1134 "pragma_c_gen.m"
    {
#line 1134 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_20_20, ll_backend__pragma_c_gen__V_21_21);
    }
#line 1134 "pragma_c_gen.m"
    {
#line 1134 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__pragma_c_gen__V_19_19);
    }
#line 1134 "pragma_c_gen.m"
    {
#line 1134 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_16_16, ll_backend__pragma_c_gen__V_17_17);
    }
#line 1133 "pragma_c_gen.m"
    {
#line 1133 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__pragma_c_gen__V_15_15);
    }
#line 1133 "pragma_c_gen.m"
    {
#line 1133 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__pragma_c_gen__V_12_12, ll_backend__pragma_c_gen__V_13_13);
    }
#line 1133 "pragma_c_gen.m"
    {
#line 1133 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__HeadVar__5_5 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_save__", ll_backend__pragma_c_gen__V_11_11);
    }
#line 1132 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__HeadVar__5_5;
#line 1132 "pragma_c_gen.m"
  }
#line 50 "pragma_c_gen.m"
}

#line 384 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3(
#line 384 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg)
#line 384 "pragma_c_gen.m"
{
#line 384 "pragma_c_gen.m"
  {
#line 384 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 384 "pragma_c_gen.m"
    MR_Box ll_backend__pragma_c_gen__closure = ll_backend__pragma_c_gen__closure_arg;

#line 384 "pragma_c_gen.m"
    {
#line 384 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__384__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 4))));
    }
#line 384 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 384 "pragma_c_gen.m"
  }
#line 384 "pragma_c_gen.m"
}

#line 382 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2(
#line 382 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg)
#line 382 "pragma_c_gen.m"
{
#line 382 "pragma_c_gen.m"
  {
#line 382 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 382 "pragma_c_gen.m"
    MR_Box ll_backend__pragma_c_gen__closure = ll_backend__pragma_c_gen__closure_arg;

#line 382 "pragma_c_gen.m"
    {
#line 382 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__382__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 4))));
    }
#line 382 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 382 "pragma_c_gen.m"
  }
#line 382 "pragma_c_gen.m"
}

#line 380 "pragma_c_gen.m"
static MR_bool MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1(
#line 380 "pragma_c_gen.m"
  MR_Box ll_backend__pragma_c_gen__closure_arg)
#line 380 "pragma_c_gen.m"
{
#line 380 "pragma_c_gen.m"
  {
#line 380 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 380 "pragma_c_gen.m"
    MR_Box ll_backend__pragma_c_gen__closure = ll_backend__pragma_c_gen__closure_arg;

#line 380 "pragma_c_gen.m"
    {
#line 380 "pragma_c_gen.m"
      ll_backend__pragma_c_gen__succeeded = ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__380__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__closure, (MR_Integer) 4))));
    }
#line 380 "pragma_c_gen.m"
    return ll_backend__pragma_c_gen__succeeded;
#line 380 "pragma_c_gen.m"
  }
#line 380 "pragma_c_gen.m"
}

#line 43 "pragma_c_gen.m"
void MR_CALL 
ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0(
#line 43 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__CodeModel_15,
#line 43 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Attributes_16,
#line 43 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PredId_17,
#line 43 "pragma_c_gen.m"
  MR_Integer ll_backend__pragma_c_gen__ProcId_18,
#line 43 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__Args_19,
#line 43 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__ExtraArgs_20,
#line 43 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__MaybeTraceRuntimeCond_21,
#line 43 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__PragmaImpl_22,
#line 43 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__GoalInfo_23,
#line 43 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__Code_24,
#line 43 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_31,
#line 43 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CI_32,
#line 43 "pragma_c_gen.m"
  MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_33,
#line 43 "pragma_c_gen.m"
  MR_Word * ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_34)
#line 43 "pragma_c_gen.m"
{
#line 370 "pragma_c_gen.m"
  {
#line 370 "pragma_c_gen.m"
    MR_bool ll_backend__pragma_c_gen__succeeded;
#line 370 "pragma_c_gen.m"
    MR_String ll_backend__pragma_c_gen__C_Code_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaImpl_22, (MR_Integer) 0)));
#line 370 "pragma_c_gen.m"
    MR_Word ll_backend__pragma_c_gen__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__PragmaImpl_22, (MR_Integer) 1)));

#line 378 "pragma_c_gen.m"
    if ((ll_backend__pragma_c_gen__MaybeTraceRuntimeCond_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "pragma_c_gen.m"
      {
#line 375 "pragma_c_gen.m"
        {
#line 375 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_15_p_0(ll_backend__pragma_c_gen__CodeModel_15, ll_backend__pragma_c_gen__Attributes_16, ll_backend__pragma_c_gen__PredId_17, ll_backend__pragma_c_gen__ProcId_18, ll_backend__pragma_c_gen__Args_19, ll_backend__pragma_c_gen__ExtraArgs_20, ll_backend__pragma_c_gen__C_Code_27, ll_backend__pragma_c_gen__Context_28, ll_backend__pragma_c_gen__GoalInfo_23, (MR_Integer) 1, ll_backend__pragma_c_gen__Code_24, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_31, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_32, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_33, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_34);
        }
#line 373 "pragma_c_gen.m"
      }
#line 378 "pragma_c_gen.m"
    else
#line 379 "pragma_c_gen.m"
      {
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TypeCtorInfo_33_83;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__TraceRuntimeCond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__MaybeTraceRuntimeCond_21, (MR_Integer) 0)));
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_35_35;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_40_40;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_45_45;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__CondRval_65;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__SuccessLabel_66;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__BeforeFailure_67;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__FailCode_68;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__CondCode_69;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__SuccessLabelCode_70;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_71;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__STATE_VARIABLE_CI_22_72;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_75_75;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_76_76;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_77_77;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_79_79;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_80_80;
#line 379 "pragma_c_gen.m"
        MR_Word ll_backend__pragma_c_gen__V_82_82;

#line 380 "pragma_c_gen.m"
        {
#line 380 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 380 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_2[0]));
#line 380 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_1));
#line 380 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 380 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 3) = ((MR_Box) (ll_backend__pragma_c_gen__Args_19));
#line 380 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_35_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "pragma_c_gen.m"
        }
#line 380 "pragma_c_gen.m"
        {
#line 380 "pragma_c_gen.m"
          mercury__require__expect_4_p_0(ll_backend__pragma_c_gen__V_35_35, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "args runtime cond");
        }
#line 382 "pragma_c_gen.m"
        {
#line 382 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 382 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_2[0]));
#line 382 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_2));
#line 382 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 382 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 3) = ((MR_Box) (ll_backend__pragma_c_gen__ExtraArgs_20));
#line 382 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_40_40, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "pragma_c_gen.m"
        }
#line 382 "pragma_c_gen.m"
        {
#line 382 "pragma_c_gen.m"
          mercury__require__expect_4_p_0(ll_backend__pragma_c_gen__V_40_40, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "extra args runtime cond");
        }
#line 384 "pragma_c_gen.m"
        {
#line 384 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 384 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 0) = ((MR_Box) (&ll_backend__pragma_c_gen_scalar_common_2[1]));
#line 384 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 1) = ((MR_Box) (ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0_3));
#line 384 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 384 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 3) = ((MR_Box) (ll_backend__pragma_c_gen__CodeModel_15));
#line 384 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_45_45, 4) = ((MR_Box) ((MR_Integer) 1));
#line 384 "pragma_c_gen.m"
        }
#line 384 "pragma_c_gen.m"
        {
#line 384 "pragma_c_gen.m"
          mercury__require__expect_4_p_0(ll_backend__pragma_c_gen__V_45_45, (MR_String) "ll_backend.pragma_c_gen", (MR_String) "predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/14", (MR_String) "non-semi runtime cond");
        }
#line 397 "pragma_c_gen.m"
        {
#line 397 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__generate_runtime_cond_code_4_p_0(ll_backend__pragma_c_gen__TraceRuntimeCond_30, &ll_backend__pragma_c_gen__CondRval_65, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_0_31, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_71);
        }
#line 398 "pragma_c_gen.m"
        {
#line 398 "pragma_c_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__pragma_c_gen__SuccessLabel_66, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_21_71, &ll_backend__pragma_c_gen__STATE_VARIABLE_CI_22_72);
        }
#line 399 "pragma_c_gen.m"
        {
#line 399 "pragma_c_gen.m"
          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_33, &ll_backend__pragma_c_gen__BeforeFailure_67);
        }
#line 400 "pragma_c_gen.m"
        {
#line 400 "pragma_c_gen.m"
          ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__pragma_c_gen__FailCode_68, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_22_72, ll_backend__pragma_c_gen__STATE_VARIABLE_CI_32, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_0_33);
        }
#line 401 "pragma_c_gen.m"
        {
#line 401 "pragma_c_gen.m"
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__pragma_c_gen__BeforeFailure_67, *ll_backend__pragma_c_gen__STATE_VARIABLE_CI_32, ll_backend__pragma_c_gen__STATE_VARIABLE_CLD_34);
        }
#line 5879 "ll_backend.pragma_c_gen.c"
        ll_backend__pragma_c_gen__TypeCtorInfo_33_83 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 404 "pragma_c_gen.m"
        {
#line 404 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 404 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__pragma_c_gen__V_77_77, 0) = ((MR_Box) (ll_backend__pragma_c_gen__SuccessLabel_66));
#line 404 "pragma_c_gen.m"
        }
#line 404 "pragma_c_gen.m"
        {
#line 404 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 404 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 404 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_76_76, 1) = ((MR_Box) (ll_backend__pragma_c_gen__CondRval_65));
#line 404 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_76_76, 2) = ((MR_Box) (ll_backend__pragma_c_gen__V_77_77));
#line 404 "pragma_c_gen.m"
        }
#line 404 "pragma_c_gen.m"
        {
#line 404 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 404 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_76_76));
#line 404 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_75_75, 1) = ((MR_Box) ((MR_String) "environment variable tests"));
#line 404 "pragma_c_gen.m"
        }
#line 403 "pragma_c_gen.m"
        {
#line 403 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__CondCode_69 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_33_83, ((MR_Box) (ll_backend__pragma_c_gen__V_75_75)));
        }
#line 408 "pragma_c_gen.m"
        {
#line 408 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 408 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__pragma_c_gen__V_80_80, 1) = ((MR_Box) (ll_backend__pragma_c_gen__SuccessLabel_66));
#line 408 "pragma_c_gen.m"
        }
#line 408 "pragma_c_gen.m"
        {
#line 408 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_79_79, 0) = ((MR_Box) (ll_backend__pragma_c_gen__V_80_80));
#line 408 "pragma_c_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__pragma_c_gen__V_79_79, 1) = ((MR_Box) ((MR_String) "environment variable tests successful"));
#line 408 "pragma_c_gen.m"
        }
#line 407 "pragma_c_gen.m"
        {
#line 407 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__SuccessLabelCode_70 = mercury__cord__singleton_1_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_33_83, ((MR_Box) (ll_backend__pragma_c_gen__V_79_79)));
        }
#line 411 "pragma_c_gen.m"
        {
#line 411 "pragma_c_gen.m"
          ll_backend__pragma_c_gen__V_82_82 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_33_83, ll_backend__pragma_c_gen__FailCode_68, ll_backend__pragma_c_gen__SuccessLabelCode_70);
        }
#line 411 "pragma_c_gen.m"
        {
#line 411 "pragma_c_gen.m"
          *ll_backend__pragma_c_gen__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__pragma_c_gen__TypeCtorInfo_33_83, ll_backend__pragma_c_gen__CondCode_69, ll_backend__pragma_c_gen__V_82_82);
        }
#line 379 "pragma_c_gen.m"
      }
#line 370 "pragma_c_gen.m"
  }
#line 43 "pragma_c_gen.m"
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
