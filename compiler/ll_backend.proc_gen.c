/*
** Automatically generated from `proc_gen.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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


/* :- module ll_backend.proc_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__proc_gen__init
ENDINIT
*/

#include "ll_backend.proc_gen.mih"


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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.middle_rec.mih"
#include "ll_backend.prog_rep.mih"
#include "ll_backend.prog_rep_tables.mih"
#include "ll_backend.stack_layout.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1150 "proc_gen.m"
struct ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0_s {
#line 1150 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__HeadVar__2_136;
#line 1150 "proc_gen.m"
  MR_Cont ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__cont;
#line 1150 "proc_gen.m"
  void * ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__cont_env_ptr;
#line 1150 "proc_gen.m"
  MR_Word ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__TypeCtorInfo_271_271;
#line 1150 "proc_gen.m"
  MR_Word ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__LocnSet_54;
#line 1150 "proc_gen.m"
  MR_Word ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__Locn_55;
#line 1151 "proc_gen.m"
  MR_Box ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__conv0_LocnSet_54;
#line 1152 "proc_gen.m"
  MR_Box ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__conv1_Locn_55;
#line 1150 "proc_gen.m"
};

#line 1150 "proc_gen.m"
struct ll_backend__proc_gen__generate_exit_8_p_0_2_env_0_s {
#line 1150 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__generate_exit_8_p_0_2_env_0__wrapper_arg_1;
#line 1150 "proc_gen.m"
  MR_Cont ll_backend__proc_gen__generate_exit_8_p_0_2_env_0__cont;
#line 1150 "proc_gen.m"
  void * ll_backend__proc_gen__generate_exit_8_p_0_2_env_0__cont_env_ptr;
#line 1150 "proc_gen.m"
  MR_Word ll_backend__proc_gen__generate_exit_8_p_0_2_env_0__conv0_HeadVar__2_136;
#line 1150 "proc_gen.m"
};


#line 196 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

#line 199 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0;

#line 202 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

#line 205 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 208 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

#line 211 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 214 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

#line 217 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0;

#line 220 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 223 "ll_backend.proc_gen.c"
static const MR_PseudoTypeInfo ll_backend__proc_gen__ll_backend__proc_gen__field_types_frame_info_0_0[3];

#line 226 "ll_backend.proc_gen.c"
static const MR_DuFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_frame_info_0_0;

#line 229 "ll_backend.proc_gen.c"
static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_frame_info_0_0[1];

#line 232 "ll_backend.proc_gen.c"
static const MR_DuPtagLayout ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_frame_info_0[1];

#line 235 "ll_backend.proc_gen.c"
static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_frame_info_0[1];

#line 238 "ll_backend.proc_gen.c"
static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_frame_info_0[1];

#line 241 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0;

#line 244 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1;

#line 247 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_value_ordered_type_giving_arg_0[2];

#line 250 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_name_ordered_type_giving_arg_0[2];

#line 253 "ll_backend.proc_gen.c"
static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_type_giving_arg_0[2];

#line 256 "ll_backend.proc_gen.c"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____frame_info_0_0_10001(
#line 259 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 261 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2);

#line 264 "ll_backend.proc_gen.c"
static void MR_CALL 
ll_backend__proc_gen____Compare____frame_info_0_0_10001(
#line 267 "ll_backend.proc_gen.c"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 269 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 271 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_3);

#line 274 "ll_backend.proc_gen.c"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0_10001(
#line 277 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 279 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2);

#line 282 "ll_backend.proc_gen.c"
static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0_10001(
#line 285 "ll_backend.proc_gen.c"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 287 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 289 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_3);

#line 216 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_50_95_95_91_49_93_95_48_5_p_0(
#line 216 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 216 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 216 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__3_3,
#line 216 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__4_4,
#line 216 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__5_5);

#line 1381 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1381__1_2_p_0(
#line 1381 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__NumPTIs_19,
#line 1381 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__NumArgs_23);

#line 1181 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1181__1_2_p_0(
#line 1181 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_60,
#line 1181 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_183);

#line 1171 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1171__1_2_p_0(
#line 1171 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_60,
#line 1171 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_211);

#line 1151 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_2(
#line 1151 "proc_gen.m"
  void * ll_backend__proc_gen__env_ptr_arg);

#line 1152 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_4(
#line 1152 "proc_gen.m"
  void * ll_backend__proc_gen__env_ptr_arg);

#line 1150 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_3(
#line 1150 "proc_gen.m"
  void * ll_backend__proc_gen__env_ptr_arg);

#line 1150 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_1(
#line 1150 "proc_gen.m"
  void * ll_backend__proc_gen__env_ptr_arg);

#line 1150 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0(
#line 1150 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_51,
#line 1150 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__2_136,
#line 1150 "proc_gen.m"
  MR_Cont ll_backend__proc_gen__cont,
#line 1150 "proc_gen.m"
  void * ll_backend__proc_gen__cont_env_ptr);

#line 787 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_category_code__787__1_2_p_0(
#line 787 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeTailRecInfo_153,
#line 787 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_187);

#line 422 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__422__1_2_p_0(
#line 422 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HaveMaxfrSlot_62,
#line 422 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_121);

#line 1325 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0(
#line 1325 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
#line 1325 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 1325 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__3_3);

#line 1325 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0(
#line 1325 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_1,
#line 1325 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2);

#line 308 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen____Compare____frame_info_0_0(
#line 308 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
#line 308 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 308 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__3_3);

#line 308 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____frame_info_0_0(
#line 308 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 308 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2);

#line 1381 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1(
#line 1381 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 1367 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0(
#line 1367 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 1367 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28,
#line 1367 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_29);

#line 1265 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__bytecode_stub_4_p_0(
#line 1265 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
#line 1265 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_6,
#line 1265 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__ProcId_7,
#line 1265 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__BytecodeInstructions_8);

#line 1235 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_saved_succip_3_p_0(
#line 1235 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 1235 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__HeadVar__2_2,
#line 1235 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__3_3);

#line 1181 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_8_p_0_4(
#line 1181 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 1171 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_8_p_0_3(
#line 1171 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 1150 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_8_p_0_1(
#line 1150 "proc_gen.m"
  void * ll_backend__proc_gen__env_ptr_arg);

#line 1150 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_8_p_0_2(
#line 1150 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1150 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 1150 "proc_gen.m"
  MR_Cont ll_backend__proc_gen__cont,
#line 1150 "proc_gen.m"
  void * ll_backend__proc_gen__cont_env_ptr);

#line 1023 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_8_p_0(
#line 1023 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_9,
#line 1023 "proc_gen.m"
  MR_Word ll_backend__proc_gen__FrameInfo_10,
#line 1023 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceSlotInfo_11,
#line 1023 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_12,
#line 1023 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__RestoreDeallocCode_13,
#line 1023 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__ExitCode_14,
#line 1023 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_72,
#line 1023 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_73);

#line 892 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_entry_6_p_0(
#line 892 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CI_7,
#line 892 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_8,
#line 892 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Goal_9,
#line 892 "proc_gen.m"
  MR_Word ll_backend__proc_gen__OutsideResumePoint_10,
#line 892 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__FrameInfo_11,
#line 892 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__EntryCode_12);

#line 851 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_call_event_6_p_0(
#line 851 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceInfo_7,
#line 851 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_8,
#line 851 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_9,
#line 851 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__TraceCallCode_10,
#line 851 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_16,
#line 851 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_17);

#line 787 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_category_code_10_p_0_1(
#line 787 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 671 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_category_code_10_p_0(
#line 671 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 671 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_2,
#line 671 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Goal_3,
#line 671 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ResumePoint_4,
#line 671 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceSlotInfo_5,
#line 671 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Code_6,
#line 671 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_7,
#line 671 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__FrameInfo_8,
#line 671 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_9,
#line 671 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_10);

#line 586 "proc_gen.m"
static MR_Word MR_CALL 
ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(
#line 586 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcInfo_4,
#line 586 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HLDSDeepInfo_5);

#line 558 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__maybe_set_trace_level_3_p_0(
#line 558 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_4,
#line 558 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_14,
#line 558 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_15);

#line 286 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_proc_list_code_9_p_0(
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_1,
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_2,
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_3,
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_4,
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__5_5,
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_6,
#line 286 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_7,
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_Procs_0_8,
#line 286 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_Procs_9);

#line 261 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_pred_code_par_6_p_0(
#line 261 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_7,
#line 261 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_8,
#line 261 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_9,
#line 261 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__CProcs_10,
#line 261 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_15,
#line 261 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_16);

#line 228 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_maybe_pred_code_10_p_0(
#line 228 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_11,
#line 228 "proc_gen.m"
  MR_Word ll_backend__proc_gen__VeryVerbose_12,
#line 228 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Statistics_13,
#line 228 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_14,
#line 228 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_15,
#line 228 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Predicates_16,
#line 228 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_24,
#line 228 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25);

#line 159 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_code_sequential_10_p_0_1(
#line 159 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 159 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 159 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2,
#line 159 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
#line 159 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_4,
#line 159 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_5,
#line 159 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_6);

#line 153 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_code_sequential_10_p_0(
#line 153 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_11,
#line 153 "proc_gen.m"
  MR_Word ll_backend__proc_gen__VeryVerbose_12,
#line 153 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Statistics_13,
#line 153 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_14,
#line 153 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredIds_15,
#line 153 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_20,
#line 153 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_21,
#line 153 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Procedures_17);

#line 1365 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1(
#line 1365 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1365 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1365 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1365 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_3);

#line 422 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_1(
#line 422 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg);

#line 202 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_7_p_0_2(
#line 202 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 202 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 202 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2);

#line 189 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_7_p_0_1(
#line 189 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 189 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 189 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2,
#line 189 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
#line 189 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_4);


static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_1[38][2];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_2[6][3];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_3[1][9];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_4[2][6];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_5[5][5];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_6[1][13];

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_7[5][1];




static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_1[38][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_special_proc_return_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_2[2]))),
    ((MR_Box) ((MR_String) "Fail"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[11]))),
    ((MR_Box) ((MR_String) "Return from procedure call"))
  },
  /* row 13 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[15]))),
    ((MR_Box) ((MR_String) "Return from procedure call"))
  },
  /* row 17 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_2[3]))),
    ((MR_Box) ((MR_String) "Succeed"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "\t\t};\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_GOTO(return_addr);\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_restore_registers();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) ");\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) ((MR_String) "discard retry ticket"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[26]))),
    ((MR_Box) ((MR_String) "fail after fail trace port"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_7[0]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_7[2]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_7[3]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_7[4]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_String) "prune retry ticket"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "bytecode_call_info")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[24])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "&")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "\t\treturn_addr = MB_bytecode_call_entry(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_save_registers();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t\tMB_Native_Addr return_addr;\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[36])))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[8])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__proc_gen_scalar_common_1[18])))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__proc_gen_scalar_common_4[1])),
    ((MR_Box) (ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__proc_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_remapping_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_5[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__proc_gen__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0)),
    ((MR_Box) (&ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_6[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__proc_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__proc_gen_scalar_common_7[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Start of procedure prologue"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "End of procedure prologue"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "Start of procedure epilogue"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "End of procedure epilogue"))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1114 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 1123 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_c_procedure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0
  }
};

#line 1131 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0
  }
};

#line 1140 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1149 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__proc_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0
  }
};

#line 1157 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__proc_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1165 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__proc_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

#line 1173 "ll_backend.proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__proc_gen__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_special_proc_return_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_special_proc_return_0
  }
};

#line 1181 "ll_backend.proc_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1189 "ll_backend.proc_gen.c"
static const MR_PseudoTypeInfo ll_backend__proc_gen__ll_backend__proc_gen__field_types_frame_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__proc_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1196 "ll_backend.proc_gen.c"
static const MR_DuFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_frame_info_0_0 = {
  (MR_String) "frame",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__proc_gen__ll_backend__proc_gen__field_types_frame_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 1211 "ll_backend.proc_gen.c"
static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_frame_info_0_0[1] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_frame_info_0_0
};

#line 1216 "ll_backend.proc_gen.c"
static const MR_DuPtagLayout ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_frame_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__proc_gen__ll_backend__proc_gen__du_stag_ordered_frame_info_0_0
  }
};

#line 1225 "ll_backend.proc_gen.c"
static const MR_DuFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_frame_info_0[1] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__du_functor_desc_frame_info_0_0
};

#line 1230 "ll_backend.proc_gen.c"
static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_frame_info_0[1] = {
  (MR_Integer) 0
};

#line 1235 "ll_backend.proc_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_frame_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__proc_gen____Unify____frame_info_0_0_10001)),
  ((MR_Box) (ll_backend__proc_gen____Compare____frame_info_0_0_10001)),
  (MR_String) "ll_backend.proc_gen",
  (MR_String) "frame_info",
  {
    ll_backend__proc_gen__ll_backend__proc_gen__du_name_ordered_frame_info_0
  },
  {
    ll_backend__proc_gen__ll_backend__proc_gen__du_ptag_ordered_frame_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_frame_info_0
};

#line 1256 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0 = {
  (MR_String) "last_arg",
  (MR_Integer) 0
};

#line 1262 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDesc ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1 = {
  (MR_String) "last_but_one_arg",
  (MR_Integer) 1
};

#line 1268 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_value_ordered_type_giving_arg_0[2] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0,
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1
};

#line 1274 "ll_backend.proc_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__proc_gen__ll_backend__proc_gen__enum_name_ordered_type_giving_arg_0[2] = {
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_0,
  &ll_backend__proc_gen__ll_backend__proc_gen__enum_functor_desc_type_giving_arg_0_1
};

#line 1280 "ll_backend.proc_gen.c"
static const MR_Integer ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_type_giving_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1286 "ll_backend.proc_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_type_giving_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__proc_gen____Unify____type_giving_arg_0_0_10001)),
  ((MR_Box) (ll_backend__proc_gen____Compare____type_giving_arg_0_0_10001)),
  (MR_String) "ll_backend.proc_gen",
  (MR_String) "type_giving_arg",
  {
    ll_backend__proc_gen__ll_backend__proc_gen__enum_name_ordered_type_giving_arg_0
  },
  {
    ll_backend__proc_gen__ll_backend__proc_gen__enum_value_ordered_type_giving_arg_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__proc_gen__ll_backend__proc_gen__functor_number_map_type_giving_arg_0
};

#line 1307 "ll_backend.proc_gen.c"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____frame_info_0_0_10001(
#line 1310 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1312 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2)
#line 1314 "ll_backend.proc_gen.c"
{
#line 1316 "ll_backend.proc_gen.c"
  {
#line 1318 "ll_backend.proc_gen.c"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1321 "ll_backend.proc_gen.c"
    {
#line 1323 "ll_backend.proc_gen.c"
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen____Unify____frame_info_0_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2));
    }
#line 1326 "ll_backend.proc_gen.c"
    return ll_backend__proc_gen__succeeded;
#line 1328 "ll_backend.proc_gen.c"
  }
#line 1330 "ll_backend.proc_gen.c"
}

#line 1333 "ll_backend.proc_gen.c"
static void MR_CALL 
ll_backend__proc_gen____Compare____frame_info_0_0_10001(
#line 1336 "ll_backend.proc_gen.c"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 1338 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1340 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_3)
#line 1342 "ll_backend.proc_gen.c"
{
#line 1344 "ll_backend.proc_gen.c"
  {
#line 1346 "ll_backend.proc_gen.c"
    MR_Word ll_backend__proc_gen__conv0_HeadVar__1_1;

#line 1349 "ll_backend.proc_gen.c"
    {
#line 1351 "ll_backend.proc_gen.c"
      ll_backend__proc_gen____Compare____frame_info_0_0(&ll_backend__proc_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), ((MR_Word) ll_backend__proc_gen__wrapper_arg_3));
    }
#line 1354 "ll_backend.proc_gen.c"
    *ll_backend__proc_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__proc_gen__conv0_HeadVar__1_1));
#line 1356 "ll_backend.proc_gen.c"
  }
#line 1358 "ll_backend.proc_gen.c"
}

#line 1361 "ll_backend.proc_gen.c"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0_10001(
#line 1364 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1366 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2)
#line 1368 "ll_backend.proc_gen.c"
{
#line 1370 "ll_backend.proc_gen.c"
  {
#line 1372 "ll_backend.proc_gen.c"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1375 "ll_backend.proc_gen.c"
    {
#line 1377 "ll_backend.proc_gen.c"
      ll_backend__proc_gen__succeeded = ll_backend__proc_gen____Unify____type_giving_arg_0_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2));
    }
#line 1380 "ll_backend.proc_gen.c"
    return ll_backend__proc_gen__succeeded;
#line 1382 "ll_backend.proc_gen.c"
  }
#line 1384 "ll_backend.proc_gen.c"
}

#line 1387 "ll_backend.proc_gen.c"
static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0_10001(
#line 1390 "ll_backend.proc_gen.c"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 1392 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1394 "ll_backend.proc_gen.c"
  MR_Box ll_backend__proc_gen__wrapper_arg_3)
#line 1396 "ll_backend.proc_gen.c"
{
#line 1398 "ll_backend.proc_gen.c"
  {
#line 1400 "ll_backend.proc_gen.c"
    MR_Word ll_backend__proc_gen__conv0_HeadVar__1_1;

#line 1403 "ll_backend.proc_gen.c"
    {
#line 1405 "ll_backend.proc_gen.c"
      ll_backend__proc_gen____Compare____type_giving_arg_0_0(&ll_backend__proc_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), ((MR_Word) ll_backend__proc_gen__wrapper_arg_3));
    }
#line 1408 "ll_backend.proc_gen.c"
    *ll_backend__proc_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__proc_gen__conv0_HeadVar__1_1));
#line 1410 "ll_backend.proc_gen.c"
  }
#line 1412 "ll_backend.proc_gen.c"
}

#line 216 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_50_95_95_91_49_93_95_48_5_p_0(
#line 216 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 216 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 216 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__3_3,
#line 216 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__4_4,
#line 216 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__5_5)
#line 216 "proc_gen.m"
{
#line 222 "proc_gen.m"
  while (MR_TRUE)
#line 222 "proc_gen.m"
    {
#line 222 "proc_gen.m"
      /* tailcall optimized into a loop */
#line 222 "proc_gen.m"
      {
#line 222 "proc_gen.m"
        MR_bool ll_backend__proc_gen__succeeded;

#line 222 "proc_gen.m"
        if ((ll_backend__proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "proc_gen.m"
          {
#line 222 "proc_gen.m"
            *ll_backend__proc_gen__HeadVar__5_5 = ll_backend__proc_gen__HeadVar__4_4;
#line 222 "proc_gen.m"
            *ll_backend__proc_gen__HeadVar__3_3 = ll_backend__proc_gen__HeadVar__2_2;
#line 222 "proc_gen.m"
          }
#line 222 "proc_gen.m"
        else
#line 223 "proc_gen.m"
          {
#line 223 "proc_gen.m"
            MR_Box ll_backend__proc_gen__H_12 = (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0));
#line 223 "proc_gen.m"
            MR_Word ll_backend__proc_gen__T_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 223 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_18_18;

#line 224 "proc_gen.m"
            {
#line 224 "proc_gen.m"
              ll_backend__proc_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_18_18, 0) = ll_backend__proc_gen__H_12;
#line 224 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_18_18, 1) = ((MR_Box) (ll_backend__proc_gen__HeadVar__2_2));
#line 224 "proc_gen.m"
            }
#line 224 "proc_gen.m"
            /* direct tailcall eliminated */
#line 224 "proc_gen.m"
            {
#line 224 "proc_gen.m"
              MR_Word ll_backend__proc_gen__HeadVar__1__tmp_copy_1 = ll_backend__proc_gen__T_13;
#line 224 "proc_gen.m"
              MR_Word ll_backend__proc_gen__HeadVar__2__tmp_copy_2 = ll_backend__proc_gen__HeadVar__4_4;
#line 224 "proc_gen.m"
              MR_Word * ll_backend__proc_gen__HeadVar__3__tmp_copy_3 = ll_backend__proc_gen__HeadVar__5_5;
#line 224 "proc_gen.m"
              MR_Word ll_backend__proc_gen__HeadVar__4__tmp_copy_4 = ll_backend__proc_gen__V_18_18;
#line 224 "proc_gen.m"
              MR_Word * ll_backend__proc_gen__HeadVar__5__tmp_copy_5 = ll_backend__proc_gen__HeadVar__3_3;

#line 224 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__5_5 = ll_backend__proc_gen__HeadVar__5__tmp_copy_5;
#line 224 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__4_4 = ll_backend__proc_gen__HeadVar__4__tmp_copy_4;
#line 224 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__3_3 = ll_backend__proc_gen__HeadVar__3__tmp_copy_3;
#line 224 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__2_2 = ll_backend__proc_gen__HeadVar__2__tmp_copy_2;
#line 224 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__1_1 = ll_backend__proc_gen__HeadVar__1__tmp_copy_1;
#line 224 "proc_gen.m"
            }
#line 224 "proc_gen.m"
            continue;
#line 223 "proc_gen.m"
          }
#line 222 "proc_gen.m"
      }
#line 222 "proc_gen.m"
      break;
#line 222 "proc_gen.m"
    }
#line 216 "proc_gen.m"
}

#line 1381 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1381__1_2_p_0(
#line 1381 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__NumPTIs_19,
#line 1381 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__NumArgs_23)
#line 1381 "proc_gen.m"
{
#line 1381 "proc_gen.m"
  {
#line 1381 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__NumArgs_23 == ll_backend__proc_gen__NumPTIs_19);

#line 1381 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1381 "proc_gen.m"
  }
#line 1381 "proc_gen.m"
}

#line 1181 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1181__1_2_p_0(
#line 1181 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_60,
#line 1181 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_183)
#line 1181 "proc_gen.m"
{
#line 1181 "proc_gen.m"
  {
#line 1181 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1181 "proc_gen.m"
    {
#line 1181 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[6], ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_60)), ((MR_Box) (ll_backend__proc_gen__HeadVar__2_183)));
    }
#line 1181 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1181 "proc_gen.m"
  }
#line 1181 "proc_gen.m"
}

#line 1171 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1171__1_2_p_0(
#line 1171 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeSpecialReturn_60,
#line 1171 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_211)
#line 1171 "proc_gen.m"
{
#line 1171 "proc_gen.m"
  {
#line 1171 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1171 "proc_gen.m"
    {
#line 1171 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[6], ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_60)), ((MR_Box) (ll_backend__proc_gen__HeadVar__2_211)));
    }
#line 1171 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1171 "proc_gen.m"
  }
#line 1171 "proc_gen.m"
}

#line 1151 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_2(
#line 1151 "proc_gen.m"
  void * ll_backend__proc_gen__env_ptr_arg)
#line 1151 "proc_gen.m"
{
#line 1151 "proc_gen.m"
  {
#line 1151 "proc_gen.m"
    struct ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0_s * ll_backend__proc_gen__env_ptr = (struct ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0_s *) ll_backend__proc_gen__env_ptr_arg;

#line 1151 "proc_gen.m"
    (ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__LocnSet_54 = ((MR_Word) (ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__conv0_LocnSet_54);
#line 1151 "proc_gen.m"
    {
#line 1151 "proc_gen.m"
      ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_1(ll_backend__proc_gen__env_ptr);
#line 1151 "proc_gen.m"
      return;
    }
#line 1151 "proc_gen.m"
  }
#line 1151 "proc_gen.m"
}

#line 1152 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_4(
#line 1152 "proc_gen.m"
  void * ll_backend__proc_gen__env_ptr_arg)
#line 1152 "proc_gen.m"
{
#line 1152 "proc_gen.m"
  {
#line 1152 "proc_gen.m"
    struct ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0_s * ll_backend__proc_gen__env_ptr = (struct ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0_s *) ll_backend__proc_gen__env_ptr_arg;

#line 1152 "proc_gen.m"
    (ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__Locn_55 = ((MR_Word) (ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__conv1_Locn_55);
#line 1152 "proc_gen.m"
    {
#line 1152 "proc_gen.m"
      ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_3(ll_backend__proc_gen__env_ptr);
#line 1152 "proc_gen.m"
      return;
    }
#line 1152 "proc_gen.m"
  }
#line 1152 "proc_gen.m"
}

#line 1150 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_3(
#line 1150 "proc_gen.m"
  void * ll_backend__proc_gen__env_ptr_arg)
#line 1150 "proc_gen.m"
{
#line 1150 "proc_gen.m"
  {
#line 1150 "proc_gen.m"
    struct ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0_s * ll_backend__proc_gen__env_ptr = (struct ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0_s *) ll_backend__proc_gen__env_ptr_arg;

#line 1155 "proc_gen.m"
    if (((MR_tag((MR_Word) (ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__Locn_55)) == (MR_mktag((MR_Integer) 0))))
#line 1154 "proc_gen.m"
      *((ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__HeadVar__2_136) = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__Locn_55, (MR_Integer) 0)));
#line 1155 "proc_gen.m"
    else
#line 1156 "proc_gen.m"
      {
#line 1156 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_56_56;

#line 1156 "proc_gen.m"
        *((ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__HeadVar__2_136) = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__Locn_55, (MR_Integer) 0)));
#line 1156 "proc_gen.m"
        ll_backend__proc_gen__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), (ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__Locn_55, (MR_Integer) 1)));
#line 1156 "proc_gen.m"
      }
#line 1155 "proc_gen.m"
    {
#line 1155 "proc_gen.m"
      ((ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__cont)((ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__cont_env_ptr);
#line 1155 "proc_gen.m"
      return;
    }
#line 1150 "proc_gen.m"
  }
#line 1150 "proc_gen.m"
}

#line 1150 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_1(
#line 1150 "proc_gen.m"
  void * ll_backend__proc_gen__env_ptr_arg)
#line 1150 "proc_gen.m"
{
#line 1150 "proc_gen.m"
  {
#line 1150 "proc_gen.m"
    struct ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0_s * ll_backend__proc_gen__env_ptr = (struct ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0_s *) ll_backend__proc_gen__env_ptr_arg;

#line 1690 "ll_backend.proc_gen.c"
    (ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__TypeCtorInfo_271_271 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0;
#line 1152 "proc_gen.m"
    {
#line 1152 "proc_gen.m"
      mercury__set__member_2_p_1((ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__TypeCtorInfo_271_271, &(ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__conv1_Locn_55, (ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__LocnSet_54, ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_4, ll_backend__proc_gen__env_ptr);
    }
#line 1150 "proc_gen.m"
  }
#line 1150 "proc_gen.m"
}

#line 1150 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0(
#line 1150 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TypeInfoLocnSets_51,
#line 1150 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__2_136,
#line 1150 "proc_gen.m"
  MR_Cont ll_backend__proc_gen__cont,
#line 1150 "proc_gen.m"
  void * ll_backend__proc_gen__cont_env_ptr)
#line 1150 "proc_gen.m"
{
#line 1150 "proc_gen.m"
  {
#line 1150 "proc_gen.m"
    struct ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0_s ll_backend__proc_gen__env;

#line 1150 "proc_gen.m"
    (ll_backend__proc_gen__env).ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__HeadVar__2_136 = ll_backend__proc_gen__HeadVar__2_136;
#line 1150 "proc_gen.m"
    (ll_backend__proc_gen__env).ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__cont = ll_backend__proc_gen__cont;
#line 1150 "proc_gen.m"
    (ll_backend__proc_gen__env).ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__cont_env_ptr = ll_backend__proc_gen__cont_env_ptr;
#line 1150 "proc_gen.m"
    {
#line 1150 "proc_gen.m"
      MR_bool ll_backend__proc_gen__succeeded;

#line 1151 "proc_gen.m"
      {
#line 1151 "proc_gen.m"
        mercury__list__member_2_p_1((MR_Word) &ll_backend__proc_gen_scalar_common_1[5], &(ll_backend__proc_gen__env).ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_env_0__conv0_LocnSet_54, ll_backend__proc_gen__TypeInfoLocnSets_51, ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0_2, &ll_backend__proc_gen__env);
      }
#line 1150 "proc_gen.m"
    }
#line 1150 "proc_gen.m"
  }
#line 1150 "proc_gen.m"
}

#line 787 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_category_code__787__1_2_p_0(
#line 787 "proc_gen.m"
  MR_Word ll_backend__proc_gen__MaybeTailRecInfo_153,
#line 787 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_187)
#line 787 "proc_gen.m"
{
#line 787 "proc_gen.m"
  {
#line 787 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 787 "proc_gen.m"
    {
#line 787 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[3], ((MR_Box) (ll_backend__proc_gen__MaybeTailRecInfo_153)), ((MR_Box) (ll_backend__proc_gen__HeadVar__2_187)));
    }
#line 787 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 787 "proc_gen.m"
  }
#line 787 "proc_gen.m"
}

#line 422 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__422__1_2_p_0(
#line 422 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HaveMaxfrSlot_62,
#line 422 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_121)
#line 422 "proc_gen.m"
{
#line 422 "proc_gen.m"
  {
#line 422 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__HaveMaxfrSlot_62 == ll_backend__proc_gen__HeadVar__2_121);

#line 422 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 422 "proc_gen.m"
  }
#line 422 "proc_gen.m"
}

#line 1325 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen____Compare____type_giving_arg_0_0(
#line 1325 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
#line 1325 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 1325 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__3_3)
#line 1325 "proc_gen.m"
{
#line 1325 "proc_gen.m"
  {
#line 1325 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1325 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__proc_gen__HeadVar__2_2;
#line 1325 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__proc_gen__HeadVar__3_3;

#line 1325 "proc_gen.m"
    {
#line 1325 "proc_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__proc_gen__HeadVar__1_1, ll_backend__proc_gen__Cast_HeadVar1_4, ll_backend__proc_gen__Cast_HeadVar2_5);
#line 1325 "proc_gen.m"
      return;
    }
#line 1325 "proc_gen.m"
  }
#line 1325 "proc_gen.m"
}

#line 1325 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____type_giving_arg_0_0(
#line 1325 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_1,
#line 1325 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2)
#line 1325 "proc_gen.m"
{
#line 1831 "ll_backend.proc_gen.c"
  {
#line 1833 "ll_backend.proc_gen.c"
    MR_bool ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__HeadVar__2_1 == ll_backend__proc_gen__HeadVar__2_2);

#line 1836 "ll_backend.proc_gen.c"
    return ll_backend__proc_gen__succeeded;
#line 1838 "ll_backend.proc_gen.c"
  }
#line 1325 "proc_gen.m"
}

#line 308 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen____Compare____frame_info_0_0(
#line 308 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__1_1,
#line 308 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2,
#line 308 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__3_3)
#line 308 "proc_gen.m"
{
#line 308 "proc_gen.m"
  {
#line 308 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 308 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__CastX_12 = (MR_Integer) ll_backend__proc_gen__HeadVar__2_2;
#line 308 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__CastY_13 = (MR_Integer) ll_backend__proc_gen__HeadVar__3_3;

#line 308 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CastX_12 == ll_backend__proc_gen__CastY_13);
#line 308 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1867 "ll_backend.proc_gen.c"
      *ll_backend__proc_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 308 "proc_gen.m"
    else
#line 308 "proc_gen.m"
      {
#line 308 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 308 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 308 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 308 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 308 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 308 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 308 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_10_10;

#line 308 "proc_gen.m"
        {
#line 308 "proc_gen.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__proc_gen__V_10_10, ll_backend__proc_gen__V_4_4, ll_backend__proc_gen__V_7_7);
        }
#line 1893 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_10_10 == (MR_Integer) 0);
#line 308 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 308 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 308 "proc_gen.m"
          *ll_backend__proc_gen__HeadVar__1_1 = ll_backend__proc_gen__V_10_10;
#line 308 "proc_gen.m"
        else
#line 308 "proc_gen.m"
          {
#line 308 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_11_11;

#line 308 "proc_gen.m"
            {
#line 308 "proc_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[7], &ll_backend__proc_gen__V_11_11, ((MR_Box) (ll_backend__proc_gen__V_5_5)), ((MR_Box) (ll_backend__proc_gen__V_8_8)));
            }
#line 1913 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_11_11 == (MR_Integer) 0);
#line 308 "proc_gen.m"
            ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 308 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 308 "proc_gen.m"
              *ll_backend__proc_gen__HeadVar__1_1 = ll_backend__proc_gen__V_11_11;
#line 308 "proc_gen.m"
            else
#line 308 "proc_gen.m"
              {
#line 308 "proc_gen.m"
                MR_Integer ll_backend__proc_gen__V_17_17 = (MR_Integer) ll_backend__proc_gen__V_6_6;
#line 308 "proc_gen.m"
                MR_Integer ll_backend__proc_gen__V_18_18 = (MR_Integer) ll_backend__proc_gen__V_9_9;

#line 308 "proc_gen.m"
                {
#line 308 "proc_gen.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__proc_gen__HeadVar__1_1, ll_backend__proc_gen__V_17_17, ll_backend__proc_gen__V_18_18);
#line 308 "proc_gen.m"
                  return;
                }
#line 308 "proc_gen.m"
              }
#line 308 "proc_gen.m"
          }
#line 308 "proc_gen.m"
      }
#line 308 "proc_gen.m"
  }
#line 308 "proc_gen.m"
}

#line 308 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen____Unify____frame_info_0_0(
#line 308 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 308 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__2_2)
#line 308 "proc_gen.m"
{
#line 308 "proc_gen.m"
  {
#line 308 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 308 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__CastX_9 = (MR_Integer) ll_backend__proc_gen__HeadVar__1_1;
#line 308 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__CastY_10 = (MR_Integer) ll_backend__proc_gen__HeadVar__2_2;

#line 308 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CastX_9 == ll_backend__proc_gen__CastY_10);
#line 308 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 308 "proc_gen.m"
      ll_backend__proc_gen__succeeded = MR_TRUE;
#line 308 "proc_gen.m"
    else
#line 308 "proc_gen.m"
      {
#line 308 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeInfo_11_11;
#line 308 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 308 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 308 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 308 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 308 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 308 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__2_2, (MR_Integer) 2)));

#line 1991 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_3_3 == ll_backend__proc_gen__V_6_6);
#line 308 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 308 "proc_gen.m"
          {
#line 1997 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__TypeInfo_11_11 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[7];
#line 1999 "ll_backend.proc_gen.c"
            {
#line 2001 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__proc_gen__TypeInfo_11_11, ((MR_Box) (ll_backend__proc_gen__V_4_4)), ((MR_Box) (ll_backend__proc_gen__V_7_7)));
            }
#line 308 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 2006 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_5_5 == ll_backend__proc_gen__V_8_8);
#line 308 "proc_gen.m"
          }
#line 308 "proc_gen.m"
      }
#line 308 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 308 "proc_gen.m"
  }
#line 308 "proc_gen.m"
}

#line 1381 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1(
#line 1381 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 1381 "proc_gen.m"
{
#line 1381 "proc_gen.m"
  {
#line 1381 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1381 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 1381 "proc_gen.m"
    {
#line 1381 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__add_tabling_info_struct__1381__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 1381 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1381 "proc_gen.m"
  }
#line 1381 "proc_gen.m"
}

#line 1367 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_tabling_info_struct_3_p_0(
#line 1367 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 1367 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28,
#line 1367 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_29)
#line 1367 "proc_gen.m"
{
#line 1370 "proc_gen.m"
  {
#line 1370 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredProcId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TableStructInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcTableStructInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_5, (MR_Integer) 0)));
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TableAttributes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_5, (MR_Integer) 1)));
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__RttiProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 0)));
#line 1370 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__NumInputs_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 3)));
#line 1370 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__NumOutputs_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 4)));
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__InputSteps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 5)));
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeOutputSteps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 6)));
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ArgInfos_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 7)));
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EvalMethod_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 8)));
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StaticCellInfo0_18;
#line 1370 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__NumPTIs_19;
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PTIVectorRval_20;
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TVarVectorRval_21;
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StaticCellInfo_22;
#line 1370 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__NumArgs_23;
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSizeLimit_24;
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Statistics_25;
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcLabel_26;
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Var_27;
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_30_30;
#line 1370 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_31_31;
#line 1372 "proc_gen.m"
    MR_Word ll_backend__proc_gen___TVarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 1)));
#line 1372 "proc_gen.m"
    MR_Word ll_backend__proc_gen___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcTableStructInfo_7, (MR_Integer) 2)));
#line 1383 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_36_36;
#line 1383 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_38_38;

#line 1376 "proc_gen.m"
    {
#line 1376 "proc_gen.m"
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28, &ll_backend__proc_gen__StaticCellInfo0_18);
    }
#line 1377 "proc_gen.m"
    {
#line 1377 "proc_gen.m"
      ll_backend__stack_layout__convert_table_arg_info_6_p_0(ll_backend__proc_gen__ArgInfos_16, &ll_backend__proc_gen__NumPTIs_19, &ll_backend__proc_gen__PTIVectorRval_20, &ll_backend__proc_gen__TVarVectorRval_21, ll_backend__proc_gen__StaticCellInfo0_18, &ll_backend__proc_gen__StaticCellInfo_22);
    }
#line 1379 "proc_gen.m"
    {
#line 1379 "proc_gen.m"
      ll_backend__global_data__global_data_set_static_cell_info_3_p_0(ll_backend__proc_gen__StaticCellInfo_22, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_28, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_30_30);
    }
#line 1380 "proc_gen.m"
    ll_backend__proc_gen__NumArgs_23 = (ll_backend__proc_gen__NumInputs_12 + ll_backend__proc_gen__NumOutputs_13);
#line 1381 "proc_gen.m"
    {
#line 1381 "proc_gen.m"
      ll_backend__proc_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1381 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[4]));
#line 1381 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 1) = ((MR_Box) (ll_backend__proc_gen__add_tabling_info_struct_3_p_0_1));
#line 1381 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1381 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 3) = ((MR_Box) (ll_backend__proc_gen__NumPTIs_19));
#line 1381 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_31_31, 4) = ((MR_Box) (ll_backend__proc_gen__NumArgs_23));
#line 1381 "proc_gen.m"
    }
#line 1381 "proc_gen.m"
    {
#line 1381 "proc_gen.m"
      mercury__require__expect_4_p_0(ll_backend__proc_gen__V_31_31, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.add_tabling_info_struct\'/3", (MR_String) "args mismatch");
    }
#line 1383 "proc_gen.m"
    ll_backend__proc_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 0)));
#line 1383 "proc_gen.m"
    ll_backend__proc_gen__MaybeSizeLimit_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 1)));
#line 1383 "proc_gen.m"
    ll_backend__proc_gen__Statistics_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 2)));
#line 1383 "proc_gen.m"
    ll_backend__proc_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableAttributes_8, (MR_Integer) 3)));
#line 1385 "proc_gen.m"
    {
#line 1385 "proc_gen.m"
      ll_backend__proc_gen__ProcLabel_26 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__proc_gen__RttiProcLabel_9);
    }
#line 1386 "proc_gen.m"
    {
#line 1386 "proc_gen.m"
      ll_backend__proc_gen__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1386 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 0) = ((MR_Box) (ll_backend__proc_gen__ProcLabel_26));
#line 1386 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 1) = ((MR_Box) (ll_backend__proc_gen__EvalMethod_17));
#line 1386 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 2) = ((MR_Box) (ll_backend__proc_gen__NumInputs_12));
#line 1386 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 3) = ((MR_Box) (ll_backend__proc_gen__NumOutputs_13));
#line 1386 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 4) = ((MR_Box) (ll_backend__proc_gen__InputSteps_14));
#line 1386 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 5) = ((MR_Box) (ll_backend__proc_gen__MaybeOutputSteps_15));
#line 1386 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 6) = ((MR_Box) (ll_backend__proc_gen__PTIVectorRval_20));
#line 1386 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 7) = ((MR_Box) (ll_backend__proc_gen__TVarVectorRval_21));
#line 1386 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 8) = ((MR_Box) (ll_backend__proc_gen__MaybeSizeLimit_24));
#line 1386 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Var_27, 9) = ((MR_Box) (ll_backend__proc_gen__Statistics_25));
#line 1386 "proc_gen.m"
    }
#line 1389 "proc_gen.m"
    {
#line 1389 "proc_gen.m"
      ll_backend__global_data__global_data_add_new_proc_var_4_p_0(ll_backend__proc_gen__PredProcId_4, ll_backend__proc_gen__Var_27, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_30_30, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_29);
#line 1389 "proc_gen.m"
      return;
    }
#line 1370 "proc_gen.m"
  }
#line 1367 "proc_gen.m"
}

#line 1265 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__bytecode_stub_4_p_0(
#line 1265 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
#line 1265 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_6,
#line 1265 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__ProcId_7,
#line 1265 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__BytecodeInstructions_8)
#line 1265 "proc_gen.m"
{
#line 1268 "proc_gen.m"
  {
#line 1268 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_119_119;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfo_9;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ModuleSymName_10;
#line 1268 "proc_gen.m"
    MR_String ll_backend__proc_gen__ModuleName_11;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EntryLabel_12;
#line 1268 "proc_gen.m"
    MR_String ll_backend__proc_gen__PredName_13;
#line 1268 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__ProcNum_14;
#line 1268 "proc_gen.m"
    MR_String ll_backend__proc_gen__ProcStr_15;
#line 1268 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Arity_16;
#line 1268 "proc_gen.m"
    MR_String ll_backend__proc_gen__ArityStr_17;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredOrFunc_18;
#line 1268 "proc_gen.m"
    MR_String ll_backend__proc_gen__CallStruct_20;
#line 1268 "proc_gen.m"
    MR_String ll_backend__proc_gen__BytecodeCall_21;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__BytecodeInstructionsComponents_22;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_26_26;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_28_28;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_29_29;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_31_31;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_33_33;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_35_35;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_36_36;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_38_38;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_40_40;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_41_41;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_43_43;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_45_45;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_46_46;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_48_48;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_50_50;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_51_51;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_53_53;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_55_55;
#line 1268 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_56_56;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_78_78;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_81_81;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_82_82;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_84_84;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_85_85;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_88_88;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_89_89;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_90_90;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_91_91;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_95_95;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_96_96;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_99_99;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_100_100;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_103_103;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_104_104;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_106_106;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_107_107;
#line 1268 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_108_108;

#line 1269 "proc_gen.m"
    {
#line 1269 "proc_gen.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__PredId_6, &ll_backend__proc_gen__PredInfo_9);
    }
#line 1270 "proc_gen.m"
    {
#line 1270 "proc_gen.m"
      ll_backend__proc_gen__ModuleSymName_10 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1272 "proc_gen.m"
    {
#line 1272 "proc_gen.m"
      ll_backend__proc_gen__ModuleName_11 = mdbcomp__prim_data__sym_name_to_string_sep_2_f_0(ll_backend__proc_gen__ModuleSymName_10, (MR_String) "__");
    }
#line 1274 "proc_gen.m"
    {
#line 1274 "proc_gen.m"
      ll_backend__proc_gen__EntryLabel_12 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__PredId_6, ll_backend__proc_gen__ProcId_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 1276 "proc_gen.m"
    {
#line 1276 "proc_gen.m"
      ll_backend__proc_gen__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1277 "proc_gen.m"
    {
#line 1277 "proc_gen.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__proc_gen__ProcId_7, &ll_backend__proc_gen__ProcNum_14);
    }
#line 1278 "proc_gen.m"
    {
#line 1278 "proc_gen.m"
      mercury__string__int_to_string_2_p_0(ll_backend__proc_gen__ProcNum_14, &ll_backend__proc_gen__ProcStr_15);
    }
#line 1279 "proc_gen.m"
    {
#line 1279 "proc_gen.m"
      ll_backend__proc_gen__Arity_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1280 "proc_gen.m"
    {
#line 1280 "proc_gen.m"
      mercury__string__int_to_string_2_p_0(ll_backend__proc_gen__Arity_16, &ll_backend__proc_gen__ArityStr_17);
    }
#line 1281 "proc_gen.m"
    {
#line 1281 "proc_gen.m"
      ll_backend__proc_gen__PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1292 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__PredOrFunc_18 == (MR_Integer) 1);
#line 1292 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1292 "proc_gen.m"
      ll_backend__proc_gen__V_56_56 = (MR_String) "MR_TRUE";
#line 1292 "proc_gen.m"
    else
#line 1292 "proc_gen.m"
      ll_backend__proc_gen__V_56_56 = (MR_String) "MR_FALSE";
#line 1292 "proc_gen.m"
    {
#line 1292 "proc_gen.m"
      ll_backend__proc_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_55_55, 0) = ((MR_Box) (ll_backend__proc_gen__V_56_56));
#line 1292 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[21])));
#line 1292 "proc_gen.m"
    }
#line 1291 "proc_gen.m"
    {
#line 1291 "proc_gen.m"
      ll_backend__proc_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_53_53, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
#line 1291 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_53_53, 1) = ((MR_Box) (ll_backend__proc_gen__V_55_55));
#line 1291 "proc_gen.m"
    }
#line 1291 "proc_gen.m"
    {
#line 1291 "proc_gen.m"
      ll_backend__proc_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_51_51, 0) = ((MR_Box) ((MR_String) ",\n"));
#line 1291 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_51_51, 1) = ((MR_Box) (ll_backend__proc_gen__V_53_53));
#line 1291 "proc_gen.m"
    }
#line 1291 "proc_gen.m"
    {
#line 1291 "proc_gen.m"
      ll_backend__proc_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_50_50, 0) = ((MR_Box) (ll_backend__proc_gen__ArityStr_17));
#line 1291 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_50_50, 1) = ((MR_Box) (ll_backend__proc_gen__V_51_51));
#line 1291 "proc_gen.m"
    }
#line 1290 "proc_gen.m"
    {
#line 1290 "proc_gen.m"
      ll_backend__proc_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_48_48, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
#line 1290 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_48_48, 1) = ((MR_Box) (ll_backend__proc_gen__V_50_50));
#line 1290 "proc_gen.m"
    }
#line 1290 "proc_gen.m"
    {
#line 1290 "proc_gen.m"
      ll_backend__proc_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_46_46, 0) = ((MR_Box) ((MR_String) ",\n"));
#line 1290 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_46_46, 1) = ((MR_Box) (ll_backend__proc_gen__V_48_48));
#line 1290 "proc_gen.m"
    }
#line 1290 "proc_gen.m"
    {
#line 1290 "proc_gen.m"
      ll_backend__proc_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_45_45, 0) = ((MR_Box) (ll_backend__proc_gen__ProcStr_15));
#line 1290 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_45_45, 1) = ((MR_Box) (ll_backend__proc_gen__V_46_46));
#line 1290 "proc_gen.m"
    }
#line 1289 "proc_gen.m"
    {
#line 1289 "proc_gen.m"
      ll_backend__proc_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_43_43, 0) = ((MR_Box) ((MR_String) "\t\t\t"));
#line 1289 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_43_43, 1) = ((MR_Box) (ll_backend__proc_gen__V_45_45));
#line 1289 "proc_gen.m"
    }
#line 1289 "proc_gen.m"
    {
#line 1289 "proc_gen.m"
      ll_backend__proc_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_41_41, 0) = ((MR_Box) ((MR_String) "\",\n"));
#line 1289 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_41_41, 1) = ((MR_Box) (ll_backend__proc_gen__V_43_43));
#line 1289 "proc_gen.m"
    }
#line 1289 "proc_gen.m"
    {
#line 1289 "proc_gen.m"
      ll_backend__proc_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_40_40, 0) = ((MR_Box) (ll_backend__proc_gen__PredName_13));
#line 1289 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_40_40, 1) = ((MR_Box) (ll_backend__proc_gen__V_41_41));
#line 1289 "proc_gen.m"
    }
#line 1288 "proc_gen.m"
    {
#line 1288 "proc_gen.m"
      ll_backend__proc_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_38_38, 0) = ((MR_Box) ((MR_String) "\t\t\t\""));
#line 1288 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_38_38, 1) = ((MR_Box) (ll_backend__proc_gen__V_40_40));
#line 1288 "proc_gen.m"
    }
#line 1288 "proc_gen.m"
    {
#line 1288 "proc_gen.m"
      ll_backend__proc_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_36_36, 0) = ((MR_Box) ((MR_String) "\",\n"));
#line 1288 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_36_36, 1) = ((MR_Box) (ll_backend__proc_gen__V_38_38));
#line 1288 "proc_gen.m"
    }
#line 1288 "proc_gen.m"
    {
#line 1288 "proc_gen.m"
      ll_backend__proc_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_35_35, 0) = ((MR_Box) (ll_backend__proc_gen__ModuleName_11));
#line 1288 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_35_35, 1) = ((MR_Box) (ll_backend__proc_gen__V_36_36));
#line 1288 "proc_gen.m"
    }
#line 1287 "proc_gen.m"
    {
#line 1287 "proc_gen.m"
      ll_backend__proc_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_33_33, 0) = ((MR_Box) ((MR_String) "\t\t\t\""));
#line 1287 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_33_33, 1) = ((MR_Box) (ll_backend__proc_gen__V_35_35));
#line 1287 "proc_gen.m"
    }
#line 1286 "proc_gen.m"
    {
#line 1286 "proc_gen.m"
      ll_backend__proc_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_31_31, 0) = ((MR_Box) ((MR_String) "\t\t\t(MB_Word)NULL,\n"));
#line 1286 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_31_31, 1) = ((MR_Box) (ll_backend__proc_gen__V_33_33));
#line 1286 "proc_gen.m"
    }
#line 1286 "proc_gen.m"
    {
#line 1286 "proc_gen.m"
      ll_backend__proc_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_29_29, 0) = ((MR_Box) ((MR_String) " = {\n"));
#line 1286 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_29_29, 1) = ((MR_Box) (ll_backend__proc_gen__V_31_31));
#line 1286 "proc_gen.m"
    }
#line 1286 "proc_gen.m"
    {
#line 1286 "proc_gen.m"
      ll_backend__proc_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1286 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_28_28, 0) = ((MR_Box) ((MR_String) "bytecode_call_info"));
#line 1286 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_28_28, 1) = ((MR_Box) (ll_backend__proc_gen__V_29_29));
#line 1286 "proc_gen.m"
    }
#line 1285 "proc_gen.m"
    {
#line 1285 "proc_gen.m"
      ll_backend__proc_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_26_26, 0) = ((MR_Box) ((MR_String) "\t\tstatic MB_Call "));
#line 1285 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_26_26, 1) = ((MR_Box) (ll_backend__proc_gen__V_28_28));
#line 1285 "proc_gen.m"
    }
#line 1285 "proc_gen.m"
    {
#line 1285 "proc_gen.m"
      mercury__string__append_list_2_p_0(ll_backend__proc_gen__V_26_26, &ll_backend__proc_gen__CallStruct_20);
    }
#line 1296 "proc_gen.m"
    {
#line 1296 "proc_gen.m"
      mercury__string__append_list_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[37]), &ll_backend__proc_gen__BytecodeCall_21);
    }
#line 2574 "ll_backend.proc_gen.c"
    ll_backend__proc_gen__TypeCtorInfo_119_119 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 1306 "proc_gen.m"
    {
#line 1306 "proc_gen.m"
      ll_backend__proc_gen__V_82_82 = mercury__set__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_119_119);
    }
#line 1305 "proc_gen.m"
    {
#line 1305 "proc_gen.m"
      ll_backend__proc_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_81_81, 0) = ((MR_Box) (ll_backend__proc_gen__V_82_82));
#line 1305 "proc_gen.m"
    }
#line 1306 "proc_gen.m"
    {
#line 1306 "proc_gen.m"
      ll_backend__proc_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1306 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1306 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1306 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 3) = ((MR_Box) (ll_backend__proc_gen__V_81_81));
#line 1306 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_78_78, 4) = ((MR_Box) ((MR_String) "\t{\n"));
#line 1306 "proc_gen.m"
    }
#line 1308 "proc_gen.m"
    {
#line 1308 "proc_gen.m"
      ll_backend__proc_gen__V_89_89 = mercury__set__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_119_119);
    }
#line 1307 "proc_gen.m"
    {
#line 1307 "proc_gen.m"
      ll_backend__proc_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_88_88, 0) = ((MR_Box) (ll_backend__proc_gen__V_89_89));
#line 1307 "proc_gen.m"
    }
#line 1309 "proc_gen.m"
    {
#line 1309 "proc_gen.m"
      ll_backend__proc_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1309 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1309 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1309 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 3) = ((MR_Box) (ll_backend__proc_gen__V_88_88));
#line 1309 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_85_85, 4) = ((MR_Box) (ll_backend__proc_gen__CallStruct_20));
#line 1309 "proc_gen.m"
    }
#line 1311 "proc_gen.m"
    {
#line 1311 "proc_gen.m"
      ll_backend__proc_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_91_91, 4) = ((MR_Box) (ll_backend__proc_gen__BytecodeCall_21));
#line 1311 "proc_gen.m"
    }
#line 1313 "proc_gen.m"
    {
#line 1313 "proc_gen.m"
      ll_backend__proc_gen__V_100_100 = mercury__set__init_0_f_0(ll_backend__proc_gen__TypeCtorInfo_119_119);
    }
#line 1312 "proc_gen.m"
    {
#line 1312 "proc_gen.m"
      ll_backend__proc_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_99_99, 0) = ((MR_Box) (ll_backend__proc_gen__V_100_100));
#line 1312 "proc_gen.m"
    }
#line 1314 "proc_gen.m"
    {
#line 1314 "proc_gen.m"
      ll_backend__proc_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 3) = ((MR_Box) (ll_backend__proc_gen__V_99_99));
#line 1314 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_96_96, 4) = ((MR_Box) ((MR_String) "\t}\n"));
#line 1314 "proc_gen.m"
    }
#line 1311 "proc_gen.m"
    {
#line 1311 "proc_gen.m"
      ll_backend__proc_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_95_95, 0) = ((MR_Box) (ll_backend__proc_gen__V_96_96));
#line 1311 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1311 "proc_gen.m"
    }
#line 1309 "proc_gen.m"
    {
#line 1309 "proc_gen.m"
      ll_backend__proc_gen__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_90_90, 0) = ((MR_Box) (ll_backend__proc_gen__V_91_91));
#line 1309 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_90_90, 1) = ((MR_Box) (ll_backend__proc_gen__V_95_95));
#line 1309 "proc_gen.m"
    }
#line 1306 "proc_gen.m"
    {
#line 1306 "proc_gen.m"
      ll_backend__proc_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_84_84, 0) = ((MR_Box) (ll_backend__proc_gen__V_85_85));
#line 1306 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_84_84, 1) = ((MR_Box) (ll_backend__proc_gen__V_90_90));
#line 1306 "proc_gen.m"
    }
#line 1304 "proc_gen.m"
    {
#line 1304 "proc_gen.m"
      ll_backend__proc_gen__BytecodeInstructionsComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__BytecodeInstructionsComponents_22, 0) = ((MR_Box) (ll_backend__proc_gen__V_78_78));
#line 1304 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__BytecodeInstructionsComponents_22, 1) = ((MR_Box) (ll_backend__proc_gen__V_84_84));
#line 1304 "proc_gen.m"
    }
#line 1318 "proc_gen.m"
    {
#line 1318 "proc_gen.m"
      ll_backend__proc_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1318 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_104_104, 1) = ((MR_Box) (ll_backend__proc_gen__EntryLabel_12));
#line 1318 "proc_gen.m"
    }
#line 1318 "proc_gen.m"
    {
#line 1318 "proc_gen.m"
      ll_backend__proc_gen__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1318 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_103_103, 0) = ((MR_Box) (ll_backend__proc_gen__V_104_104));
#line 1318 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_103_103, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
#line 1318 "proc_gen.m"
    }
#line 1319 "proc_gen.m"
    {
#line 1319 "proc_gen.m"
      ll_backend__proc_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1319 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1319 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1319 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 2) = ((MR_Box) (ll_backend__proc_gen__BytecodeInstructionsComponents_22));
#line 1319 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1319 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1319 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1319 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1319 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1319 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1319 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 9) = ((MR_Box) ((MR_Integer) 0));
#line 1319 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_108_108, 10) = ((MR_Box) ((MR_Integer) 1));
#line 1319 "proc_gen.m"
    }
#line 1321 "proc_gen.m"
    {
#line 1321 "proc_gen.m"
      ll_backend__proc_gen__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_107_107, 0) = ((MR_Box) (ll_backend__proc_gen__V_108_108));
#line 1321 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_107_107, 1) = ((MR_Box) ((MR_String) "Entry stub"));
#line 1321 "proc_gen.m"
    }
#line 1318 "proc_gen.m"
    {
#line 1318 "proc_gen.m"
      ll_backend__proc_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_106_106, 0) = ((MR_Box) (ll_backend__proc_gen__V_107_107));
#line 1318 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1318 "proc_gen.m"
    }
#line 1317 "proc_gen.m"
    {
#line 1317 "proc_gen.m"
      MR_Word base;
#line 1317 "proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "proc_gen.m"
      *ll_backend__proc_gen__BytecodeInstructions_8 = base;
#line 1317 "proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__proc_gen__V_103_103));
#line 1317 "proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__proc_gen__V_106_106));
#line 1317 "proc_gen.m"
    }
#line 1268 "proc_gen.m"
  }
#line 1265 "proc_gen.m"
}

#line 1235 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_saved_succip_3_p_0(
#line 1235 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 1235 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__HeadVar__2_2,
#line 1235 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__HeadVar__3_3)
#line 1235 "proc_gen.m"
{
#line 1238 "proc_gen.m"
  {
#line 1238 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 1238 "proc_gen.m"
    if ((ll_backend__proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1238 "proc_gen.m"
      *ll_backend__proc_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1238 "proc_gen.m"
    else
#line 1239 "proc_gen.m"
      {
#line 1239 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1239 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1239 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Instr_8;
#line 1239 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Instrs_9;
#line 1239 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Uinstr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr0_5, (MR_Integer) 0)));
#line 1239 "proc_gen.m"
        MR_String ll_backend__proc_gen__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr0_5, (MR_Integer) 1)));
#line 1250 "proc_gen.m"
        MR_Word ll_backend__proc_gen__LiveVals0_12;
#line 1243 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_24_24;
#line 1243 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_25_25;
#line 1243 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_26_26;
#line 1243 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_14_14;
#line 1243 "proc_gen.m"
        MR_String ll_backend__proc_gen__V_13_13;

#line 1243 "proc_gen.m"
        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Instrs0_6)) == (MR_mktag((MR_Integer) 1)));
#line 1243 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1243 "proc_gen.m"
          {
#line 1243 "proc_gen.m"
            ll_backend__proc_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Instrs0_6, (MR_Integer) 0)));
#line 1243 "proc_gen.m"
            ll_backend__proc_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Instrs0_6, (MR_Integer) 1)));
#line 1243 "proc_gen.m"
            ll_backend__proc_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, (MR_Integer) 0)));
#line 1243 "proc_gen.m"
            ll_backend__proc_gen__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, (MR_Integer) 1)));
#line 1243 "proc_gen.m"
            ll_backend__proc_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__proc_gen__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1243 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 1243 "proc_gen.m"
              {
#line 1243 "proc_gen.m"
                ll_backend__proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_25_25, (MR_Integer) 1)));
#line 1243 "proc_gen.m"
                ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "proc_gen.m"
              }
#line 1243 "proc_gen.m"
          }
#line 1243 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 1242 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1242 "proc_gen.m"
          {
#line 1242 "proc_gen.m"
            ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Uinstr0_10)) == (MR_mktag((MR_Integer) 2)));
#line 1242 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 1242 "proc_gen.m"
              ll_backend__proc_gen__LiveVals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 0)));
#line 1242 "proc_gen.m"
          }
#line 1250 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1247 "proc_gen.m"
          {
#line 1247 "proc_gen.m"
            MR_Word ll_backend__proc_gen__LiveVals1_15;
#line 1247 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Uinstr_16;
#line 1247 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_27_27;

#line 1247 "proc_gen.m"
            {
#line 1247 "proc_gen.m"
              ll_backend__proc_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1247 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_27_27, 1) = ((MR_Box) (ll_backend__proc_gen__HeadVar__2_2));
#line 1247 "proc_gen.m"
            }
#line 1247 "proc_gen.m"
            {
#line 1247 "proc_gen.m"
              mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__proc_gen__V_27_27)), ll_backend__proc_gen__LiveVals0_12, &ll_backend__proc_gen__LiveVals1_15);
            }
#line 1248 "proc_gen.m"
            {
#line 1248 "proc_gen.m"
              ll_backend__proc_gen__Uinstr_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "proc_gen.m"
              MR_hl_field(MR_mktag(2), ll_backend__proc_gen__Uinstr_16, 0) = ((MR_Box) (ll_backend__proc_gen__LiveVals1_15));
#line 1248 "proc_gen.m"
            }
#line 1249 "proc_gen.m"
            {
#line 1249 "proc_gen.m"
              ll_backend__proc_gen__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1249 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 0) = ((MR_Box) (ll_backend__proc_gen__Uinstr_16));
#line 1249 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 1) = ((MR_Box) (ll_backend__proc_gen__Comment_11));
#line 1249 "proc_gen.m"
            }
#line 1247 "proc_gen.m"
          }
#line 1250 "proc_gen.m"
        else
#line 1258 "proc_gen.m"
          {
#line 1258 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Target_17;
#line 1258 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ReturnLabel_18;
#line 1258 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Context_19;
#line 1258 "proc_gen.m"
            MR_Word ll_backend__proc_gen__GP_20;
#line 1258 "proc_gen.m"
            MR_Word ll_backend__proc_gen__CM_21;
#line 1258 "proc_gen.m"
            MR_Word ll_backend__proc_gen__LiveVals0_33;

#line 1251 "proc_gen.m"
            ll_backend__proc_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__proc_gen__Uinstr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1251 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 1251 "proc_gen.m"
              {
#line 1251 "proc_gen.m"
                ll_backend__proc_gen__Target_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 1)));
#line 1251 "proc_gen.m"
                ll_backend__proc_gen__ReturnLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 2)));
#line 1251 "proc_gen.m"
                ll_backend__proc_gen__LiveVals0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 3)));
#line 1251 "proc_gen.m"
                ll_backend__proc_gen__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 4)));
#line 1251 "proc_gen.m"
                ll_backend__proc_gen__GP_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 5)));
#line 1251 "proc_gen.m"
                ll_backend__proc_gen__CM_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr0_10, (MR_Integer) 6)));
#line 1253 "proc_gen.m"
                {
#line 1253 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__Empty_22;
#line 1253 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__LiveVals_23;
#line 1253 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_28_28;
#line 1253 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_29_29;
#line 1253 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_30_30;
#line 1253 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__Uinstr_32;

#line 1253 "proc_gen.m"
                  {
#line 1253 "proc_gen.m"
                    mercury__map__init_1_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[4], (MR_Word) &ll_backend__proc_gen_scalar_common_1[5], &ll_backend__proc_gen__Empty_22);
                  }
#line 1254 "proc_gen.m"
                  {
#line 1254 "proc_gen.m"
                    ll_backend__proc_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1254 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_30_30, 1) = ((MR_Box) (ll_backend__proc_gen__HeadVar__2_2));
#line 1254 "proc_gen.m"
                  }
#line 1254 "proc_gen.m"
                  {
#line 1254 "proc_gen.m"
                    ll_backend__proc_gen__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1254 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_29_29, 0) = ((MR_Box) (ll_backend__proc_gen__V_30_30));
#line 1254 "proc_gen.m"
                  }
#line 1255 "proc_gen.m"
                  {
#line 1255 "proc_gen.m"
                    ll_backend__proc_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1255 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_28_28, 0) = ((MR_Box) (ll_backend__proc_gen__V_29_29));
#line 1255 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1255 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_28_28, 2) = ((MR_Box) (ll_backend__proc_gen__Empty_22));
#line 1255 "proc_gen.m"
                  }
#line 1254 "proc_gen.m"
                  {
#line 1254 "proc_gen.m"
                    ll_backend__proc_gen__LiveVals_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__LiveVals_23, 0) = ((MR_Box) (ll_backend__proc_gen__V_28_28));
#line 1254 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__LiveVals_23, 1) = ((MR_Box) (ll_backend__proc_gen__LiveVals0_33));
#line 1254 "proc_gen.m"
                  }
#line 1256 "proc_gen.m"
                  {
#line 1256 "proc_gen.m"
                    ll_backend__proc_gen__Uinstr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1256 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1256 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 1) = ((MR_Box) (ll_backend__proc_gen__Target_17));
#line 1256 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 2) = ((MR_Box) (ll_backend__proc_gen__ReturnLabel_18));
#line 1256 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 3) = ((MR_Box) (ll_backend__proc_gen__LiveVals_23));
#line 1256 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 4) = ((MR_Box) (ll_backend__proc_gen__Context_19));
#line 1256 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 5) = ((MR_Box) (ll_backend__proc_gen__GP_20));
#line 1256 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Uinstr_32, 6) = ((MR_Box) (ll_backend__proc_gen__CM_21));
#line 1256 "proc_gen.m"
                  }
#line 1257 "proc_gen.m"
                  {
#line 1257 "proc_gen.m"
                    ll_backend__proc_gen__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 0) = ((MR_Box) (ll_backend__proc_gen__Uinstr_32));
#line 1257 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Instr_8, 1) = ((MR_Box) (ll_backend__proc_gen__Comment_11));
#line 1257 "proc_gen.m"
                  }
#line 1253 "proc_gen.m"
                }
#line 1251 "proc_gen.m"
              }
#line 1251 "proc_gen.m"
            else
#line 1259 "proc_gen.m"
              ll_backend__proc_gen__Instr_8 = ll_backend__proc_gen__Instr0_5;
#line 1258 "proc_gen.m"
          }
#line 1261 "proc_gen.m"
        {
#line 1261 "proc_gen.m"
          ll_backend__proc_gen__add_saved_succip_3_p_0(ll_backend__proc_gen__Instrs0_6, ll_backend__proc_gen__HeadVar__2_2, &ll_backend__proc_gen__Instrs_9);
        }
#line 1239 "proc_gen.m"
        {
#line 1239 "proc_gen.m"
          MR_Word base;
#line 1239 "proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "proc_gen.m"
          *ll_backend__proc_gen__HeadVar__3_3 = base;
#line 1239 "proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__proc_gen__Instr_8));
#line 1239 "proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__proc_gen__Instrs_9));
#line 1239 "proc_gen.m"
        }
#line 1239 "proc_gen.m"
      }
#line 1238 "proc_gen.m"
  }
#line 1235 "proc_gen.m"
}

#line 1181 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_8_p_0_4(
#line 1181 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 1181 "proc_gen.m"
{
#line 1181 "proc_gen.m"
  {
#line 1181 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1181 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 1181 "proc_gen.m"
    {
#line 1181 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1181__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 1181 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1181 "proc_gen.m"
  }
#line 1181 "proc_gen.m"
}

#line 1171 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_exit_8_p_0_3(
#line 1171 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 1171 "proc_gen.m"
{
#line 1171 "proc_gen.m"
  {
#line 1171 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1171 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 1171 "proc_gen.m"
    {
#line 1171 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1171__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 1171 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 1171 "proc_gen.m"
  }
#line 1171 "proc_gen.m"
}

#line 1150 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_8_p_0_1(
#line 1150 "proc_gen.m"
  void * ll_backend__proc_gen__env_ptr_arg)
#line 1150 "proc_gen.m"
{
#line 1150 "proc_gen.m"
  {
#line 1150 "proc_gen.m"
    struct ll_backend__proc_gen__generate_exit_8_p_0_2_env_0_s * ll_backend__proc_gen__env_ptr = (struct ll_backend__proc_gen__generate_exit_8_p_0_2_env_0_s *) ll_backend__proc_gen__env_ptr_arg;

#line 1150 "proc_gen.m"
    *((ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__generate_exit_8_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__generate_exit_8_p_0_2_env_0__conv0_HeadVar__2_136));
#line 1150 "proc_gen.m"
    {
#line 1150 "proc_gen.m"
      ((ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__generate_exit_8_p_0_2_env_0__cont)((ll_backend__proc_gen__env_ptr)->ll_backend__proc_gen__generate_exit_8_p_0_2_env_0__cont_env_ptr);
#line 1150 "proc_gen.m"
      return;
    }
#line 1150 "proc_gen.m"
  }
#line 1150 "proc_gen.m"
}

#line 1150 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_8_p_0_2(
#line 1150 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1150 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_1,
#line 1150 "proc_gen.m"
  MR_Cont ll_backend__proc_gen__cont,
#line 1150 "proc_gen.m"
  void * ll_backend__proc_gen__cont_env_ptr)
#line 1150 "proc_gen.m"
{
#line 1150 "proc_gen.m"
  {
#line 1150 "proc_gen.m"
    struct ll_backend__proc_gen__generate_exit_8_p_0_2_env_0_s ll_backend__proc_gen__env;

#line 1150 "proc_gen.m"
    (ll_backend__proc_gen__env).ll_backend__proc_gen__generate_exit_8_p_0_2_env_0__wrapper_arg_1 = ll_backend__proc_gen__wrapper_arg_1;
#line 1150 "proc_gen.m"
    (ll_backend__proc_gen__env).ll_backend__proc_gen__generate_exit_8_p_0_2_env_0__cont = ll_backend__proc_gen__cont;
#line 1150 "proc_gen.m"
    (ll_backend__proc_gen__env).ll_backend__proc_gen__generate_exit_8_p_0_2_env_0__cont_env_ptr = ll_backend__proc_gen__cont_env_ptr;
#line 1150 "proc_gen.m"
    {
#line 1150 "proc_gen.m"
      MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 1150 "proc_gen.m"
      {
#line 1150 "proc_gen.m"
        ll_backend__proc_gen__IntroducedFrom__pred__generate_exit__1150__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), &(ll_backend__proc_gen__env).ll_backend__proc_gen__generate_exit_8_p_0_2_env_0__conv0_HeadVar__2_136, ll_backend__proc_gen__generate_exit_8_p_0_1, &ll_backend__proc_gen__env);
      }
#line 1150 "proc_gen.m"
    }
#line 1150 "proc_gen.m"
  }
#line 1150 "proc_gen.m"
}

#line 1023 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_exit_8_p_0(
#line 1023 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_9,
#line 1023 "proc_gen.m"
  MR_Word ll_backend__proc_gen__FrameInfo_10,
#line 1023 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceSlotInfo_11,
#line 1023 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_12,
#line 1023 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__RestoreDeallocCode_13,
#line 1023 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__ExitCode_14,
#line 1023 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_72,
#line 1023 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_73)
#line 1023 "proc_gen.m"
{
#line 1028 "proc_gen.m"
  {
#line 1028 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1028 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_261_261 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1028 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StartComment_16;
#line 1028 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EndComment_17;
#line 1028 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TotalSlots_18;
#line 1028 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSuccipSlot_19;
#line 1028 "proc_gen.m"
    MR_Word ll_backend__proc_gen__NondetPragma_20;

#line 1029 "proc_gen.m"
    {
#line 1029 "proc_gen.m"
      ll_backend__proc_gen__StartComment_16 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[30])));
    }
#line 1032 "proc_gen.m"
    {
#line 1032 "proc_gen.m"
      ll_backend__proc_gen__EndComment_17 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[31])));
    }
#line 1035 "proc_gen.m"
    ll_backend__proc_gen__TotalSlots_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FrameInfo_10, (MR_Integer) 0)));
#line 1035 "proc_gen.m"
    ll_backend__proc_gen__MaybeSuccipSlot_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FrameInfo_10, (MR_Integer) 1)));
#line 1035 "proc_gen.m"
    ll_backend__proc_gen__NondetPragma_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FrameInfo_10, (MR_Integer) 2)));
#line 1049 "proc_gen.m"
    if ((ll_backend__proc_gen__NondetPragma_20 == (MR_Integer) 0))
#line 1050 "proc_gen.m"
      {
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__InstMap_25;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ArgModes_26;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HeadVars_27;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Args_28;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__OutLvals_29;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__FlushCode_30;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__RestoreSuccipCode_32;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__DeallocCode_33;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PruneTraceTicketCode_41;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PruneTraceTicketCodeCopy_42;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__RestoreDeallocCodeCopy_43;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeTraceInfo_44;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceExitCode_50;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__LiveLvals_58;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ProcInfo_59;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeSpecialReturn_60;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__AllSuccessCode_62;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_82_82;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_97_97;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_132_132;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_133_133;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_223_223;
#line 1050 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_224_224;
#line 1123 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_251_251;
#line 1083 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_92_92;
#line 1083 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_252_252;
#line 1083 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_253_253;
#line 1083 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_254_254;
#line 1083 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_255_255;
#line 1083 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_34_34;

#line 1051 "proc_gen.m"
        {
#line 1051 "proc_gen.m"
          ll_backend__code_info__get_instmap_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_72, &ll_backend__proc_gen__InstMap_25);
        }
#line 1052 "proc_gen.m"
        {
#line 1052 "proc_gen.m"
          ll_backend__proc_gen__ArgModes_26 = ll_backend__code_info__get_arginfo_1_f_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_72);
        }
#line 1053 "proc_gen.m"
        {
#line 1053 "proc_gen.m"
          ll_backend__proc_gen__HeadVars_27 = ll_backend__code_info__get_headvars_1_f_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_72);
        }
#line 1054 "proc_gen.m"
        {
#line 1054 "proc_gen.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__proc_gen__HeadVars_27, ll_backend__proc_gen__ArgModes_26, &ll_backend__proc_gen__Args_28);
        }
#line 1055 "proc_gen.m"
        {
#line 1055 "proc_gen.m"
          ll_backend__proc_gen__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(ll_backend__proc_gen__InstMap_25);
        }
#line 1058 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1056 "proc_gen.m"
          {
#line 1056 "proc_gen.m"
            {
#line 1056 "proc_gen.m"
              ll_backend__proc_gen__OutLvals_29 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
            }
#line 1057 "proc_gen.m"
            {
#line 1057 "proc_gen.m"
              ll_backend__proc_gen__FlushCode_30 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261);
            }
#line 1057 "proc_gen.m"
            ll_backend__proc_gen__STATE_VARIABLE_CI_82_82 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_72;
#line 1056 "proc_gen.m"
          }
#line 1058 "proc_gen.m"
        else
#line 1059 "proc_gen.m"
          {
#line 1059 "proc_gen.m"
            ll_backend__code_info__setup_return_5_p_0(ll_backend__proc_gen__Args_28, &ll_backend__proc_gen__OutLvals_29, &ll_backend__proc_gen__FlushCode_30, ll_backend__proc_gen__STATE_VARIABLE_CI_0_72, &ll_backend__proc_gen__STATE_VARIABLE_CI_82_82);
          }
#line 1067 "proc_gen.m"
        if ((ll_backend__proc_gen__MaybeSuccipSlot_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1069 "proc_gen.m"
          {
#line 1069 "proc_gen.m"
            ll_backend__proc_gen__RestoreSuccipCode_32 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261);
          }
#line 1067 "proc_gen.m"
        else
#line 1062 "proc_gen.m"
          {
#line 1062 "proc_gen.m"
            MR_Integer ll_backend__proc_gen__SuccipSlot_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSuccipSlot_19, (MR_Integer) 0)));
#line 1062 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_83_83;
#line 1062 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_84_84;
#line 1062 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_86_86;
#line 1062 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_87_87;

#line 1064 "proc_gen.m"
            {
#line 1064 "proc_gen.m"
              ll_backend__proc_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1064 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_87_87, 1) = ((MR_Box) (ll_backend__proc_gen__SuccipSlot_31));
#line 1064 "proc_gen.m"
            }
#line 1064 "proc_gen.m"
            {
#line 1064 "proc_gen.m"
              ll_backend__proc_gen__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1064 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_86_86, 0) = ((MR_Box) (ll_backend__proc_gen__V_87_87));
#line 1064 "proc_gen.m"
            }
#line 1064 "proc_gen.m"
            {
#line 1064 "proc_gen.m"
              ll_backend__proc_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1064 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1064 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_84_84, 2) = ((MR_Box) (ll_backend__proc_gen__V_86_86));
#line 1064 "proc_gen.m"
            }
#line 1063 "proc_gen.m"
            {
#line 1063 "proc_gen.m"
              ll_backend__proc_gen__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_83_83, 0) = ((MR_Box) (ll_backend__proc_gen__V_84_84));
#line 1063 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_83_83, 1) = ((MR_Box) ((MR_String) "restore the success ip"));
#line 1063 "proc_gen.m"
            }
#line 1063 "proc_gen.m"
            {
#line 1063 "proc_gen.m"
              ll_backend__proc_gen__RestoreSuccipCode_32 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ((MR_Box) (ll_backend__proc_gen__V_83_83)));
            }
#line 1062 "proc_gen.m"
          }
#line 1072 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__TotalSlots_18 == (MR_Integer) 0);
#line 1073 "proc_gen.m"
        if (!(ll_backend__proc_gen__succeeded))
#line 1073 "proc_gen.m"
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_9 == (MR_Integer) 2);
#line 1077 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1076 "proc_gen.m"
          {
#line 1076 "proc_gen.m"
            ll_backend__proc_gen__DeallocCode_33 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261);
          }
#line 1077 "proc_gen.m"
        else
#line 1078 "proc_gen.m"
          {
#line 1078 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_89_89;
#line 1078 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_90_90;

#line 1079 "proc_gen.m"
            {
#line 1079 "proc_gen.m"
              ll_backend__proc_gen__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
#line 1079 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_90_90, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_18));
#line 1079 "proc_gen.m"
            }
#line 1078 "proc_gen.m"
            {
#line 1078 "proc_gen.m"
              ll_backend__proc_gen__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_89_89, 0) = ((MR_Box) (ll_backend__proc_gen__V_90_90));
#line 1078 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_89_89, 1) = ((MR_Box) ((MR_String) "Deallocate stack frame"));
#line 1078 "proc_gen.m"
            }
#line 1078 "proc_gen.m"
            {
#line 1078 "proc_gen.m"
              ll_backend__proc_gen__DeallocCode_33 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ((MR_Box) (ll_backend__proc_gen__V_89_89)));
            }
#line 1078 "proc_gen.m"
          }
#line 1084 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_9 == (MR_Integer) 2);
#line 1084 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 1083 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1083 "proc_gen.m"
          {
#line 1083 "proc_gen.m"
            ll_backend__proc_gen__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_11, (MR_Integer) 0)));
#line 1083 "proc_gen.m"
            ll_backend__proc_gen__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_11, (MR_Integer) 1)));
#line 1083 "proc_gen.m"
            ll_backend__proc_gen__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_11, (MR_Integer) 2)));
#line 1083 "proc_gen.m"
            ll_backend__proc_gen__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_11, (MR_Integer) 3)));
#line 1083 "proc_gen.m"
            ll_backend__proc_gen__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_11, (MR_Integer) 4)));
#line 1083 "proc_gen.m"
            ll_backend__proc_gen__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_11, (MR_Integer) 5)));
#line 1083 "proc_gen.m"
            ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__V_92_92)) == (MR_mktag((MR_Integer) 1)));
#line 1083 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 1083 "proc_gen.m"
              ll_backend__proc_gen__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_92_92, (MR_Integer) 0)));
#line 1083 "proc_gen.m"
          }
#line 1123 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 1116 "proc_gen.m"
          if ((ll_backend__proc_gen__V_251_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1117 "proc_gen.m"
            {
#line 1118 "proc_gen.m"
              {
#line 1118 "proc_gen.m"
                ll_backend__proc_gen__PruneTraceTicketCode_41 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[32])));
              }
#line 1121 "proc_gen.m"
              ll_backend__proc_gen__PruneTraceTicketCodeCopy_42 = ll_backend__proc_gen__PruneTraceTicketCode_41;
#line 1121 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_CI_97_97 = ll_backend__proc_gen__STATE_VARIABLE_CI_82_82;
#line 1117 "proc_gen.m"
            }
#line 1116 "proc_gen.m"
          else
#line 1088 "proc_gen.m"
            {
#line 1088 "proc_gen.m"
              MR_Integer ll_backend__proc_gen__FromFullSlot_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_251_251, (MR_Integer) 0)));
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__StackId_37;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__FromFullSlotLval_38;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__SkipLabel_39;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__SkipLabelCopy_40;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_96_96;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_98_98;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_99_99;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_100_100;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_101_101;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_103_103;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_104_104;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_106_106;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_107_107;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_110_110;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_111_111;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_112_112;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_115_115;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_116_116;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_117_117;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_121_121;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_123_123;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_127_127;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_128_128;
#line 1088 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_129_129;

#line 1097 "proc_gen.m"
              {
#line 1097 "proc_gen.m"
                ll_backend__proc_gen__StackId_37 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__proc_gen__CodeModel_9);
              }
#line 1098 "proc_gen.m"
              {
#line 1098 "proc_gen.m"
                ll_backend__proc_gen__FromFullSlotLval_38 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__proc_gen__StackId_37, ll_backend__proc_gen__FromFullSlot_36);
              }
#line 1100 "proc_gen.m"
              {
#line 1100 "proc_gen.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__proc_gen__SkipLabel_39, ll_backend__proc_gen__STATE_VARIABLE_CI_82_82, &ll_backend__proc_gen__STATE_VARIABLE_CI_96_96);
              }
#line 1101 "proc_gen.m"
              {
#line 1101 "proc_gen.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__proc_gen__SkipLabelCopy_40, ll_backend__proc_gen__STATE_VARIABLE_CI_96_96, &ll_backend__proc_gen__STATE_VARIABLE_CI_97_97);
              }
#line 1104 "proc_gen.m"
              {
#line 1104 "proc_gen.m"
                ll_backend__proc_gen__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1104 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_103_103, 0) = ((MR_Box) (ll_backend__proc_gen__FromFullSlotLval_38));
#line 1104 "proc_gen.m"
              }
#line 1104 "proc_gen.m"
              {
#line 1104 "proc_gen.m"
                ll_backend__proc_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1104 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_101_101, 1) = ((MR_Box) ((MR_Integer) 7));
#line 1104 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_101_101, 2) = ((MR_Box) (ll_backend__proc_gen__V_103_103));
#line 1104 "proc_gen.m"
              }
#line 1104 "proc_gen.m"
              {
#line 1104 "proc_gen.m"
                ll_backend__proc_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_104_104, 0) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_39));
#line 1104 "proc_gen.m"
              }
#line 1103 "proc_gen.m"
              {
#line 1103 "proc_gen.m"
                ll_backend__proc_gen__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1103 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_100_100, 1) = ((MR_Box) (ll_backend__proc_gen__V_101_101));
#line 1103 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_100_100, 2) = ((MR_Box) (ll_backend__proc_gen__V_104_104));
#line 1103 "proc_gen.m"
              }
#line 1105 "proc_gen.m"
              {
#line 1105 "proc_gen.m"
                ll_backend__proc_gen__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1105 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_99_99, 0) = ((MR_Box) (ll_backend__proc_gen__V_100_100));
#line 1105 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_99_99, 1) = ((MR_Box) ((MR_String) ""));
#line 1105 "proc_gen.m"
              }
#line 1106 "proc_gen.m"
              ll_backend__proc_gen__V_107_107 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[32];
#line 1107 "proc_gen.m"
              {
#line 1107 "proc_gen.m"
                ll_backend__proc_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1107 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_112_112, 1) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_39));
#line 1107 "proc_gen.m"
              }
#line 1108 "proc_gen.m"
              {
#line 1108 "proc_gen.m"
                ll_backend__proc_gen__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1108 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_111_111, 0) = ((MR_Box) (ll_backend__proc_gen__V_112_112));
#line 1108 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_111_111, 1) = ((MR_Box) ((MR_String) ""));
#line 1108 "proc_gen.m"
              }
#line 1106 "proc_gen.m"
              {
#line 1106 "proc_gen.m"
                ll_backend__proc_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_110_110, 0) = ((MR_Box) (ll_backend__proc_gen__V_111_111));
#line 1106 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1106 "proc_gen.m"
              }
#line 1105 "proc_gen.m"
              {
#line 1105 "proc_gen.m"
                ll_backend__proc_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_106_106, 0) = ((MR_Box) (ll_backend__proc_gen__V_107_107));
#line 1105 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_106_106, 1) = ((MR_Box) (ll_backend__proc_gen__V_110_110));
#line 1105 "proc_gen.m"
              }
#line 1102 "proc_gen.m"
              {
#line 1102 "proc_gen.m"
                ll_backend__proc_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_98_98, 0) = ((MR_Box) (ll_backend__proc_gen__V_99_99));
#line 1102 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_98_98, 1) = ((MR_Box) (ll_backend__proc_gen__V_106_106));
#line 1102 "proc_gen.m"
              }
#line 1102 "proc_gen.m"
              {
#line 1102 "proc_gen.m"
                ll_backend__proc_gen__PruneTraceTicketCode_41 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__V_98_98);
              }
#line 1111 "proc_gen.m"
              {
#line 1111 "proc_gen.m"
                ll_backend__proc_gen__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_121_121, 0) = ((MR_Box) (ll_backend__proc_gen__SkipLabelCopy_40));
#line 1111 "proc_gen.m"
              }
#line 1110 "proc_gen.m"
              {
#line 1110 "proc_gen.m"
                ll_backend__proc_gen__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1110 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_117_117, 1) = ((MR_Box) (ll_backend__proc_gen__V_101_101));
#line 1110 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_117_117, 2) = ((MR_Box) (ll_backend__proc_gen__V_121_121));
#line 1110 "proc_gen.m"
              }
#line 1112 "proc_gen.m"
              {
#line 1112 "proc_gen.m"
                ll_backend__proc_gen__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_116_116, 0) = ((MR_Box) (ll_backend__proc_gen__V_117_117));
#line 1112 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_116_116, 1) = ((MR_Box) ((MR_String) ""));
#line 1112 "proc_gen.m"
              }
#line 1114 "proc_gen.m"
              {
#line 1114 "proc_gen.m"
                ll_backend__proc_gen__V_129_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_129_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1114 "proc_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_129_129, 1) = ((MR_Box) (ll_backend__proc_gen__SkipLabelCopy_40));
#line 1114 "proc_gen.m"
              }
#line 1115 "proc_gen.m"
              {
#line 1115 "proc_gen.m"
                ll_backend__proc_gen__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_128_128, 0) = ((MR_Box) (ll_backend__proc_gen__V_129_129));
#line 1115 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_128_128, 1) = ((MR_Box) ((MR_String) ""));
#line 1115 "proc_gen.m"
              }
#line 1113 "proc_gen.m"
              {
#line 1113 "proc_gen.m"
                ll_backend__proc_gen__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_127_127, 0) = ((MR_Box) (ll_backend__proc_gen__V_128_128));
#line 1113 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1113 "proc_gen.m"
              }
#line 1112 "proc_gen.m"
              {
#line 1112 "proc_gen.m"
                ll_backend__proc_gen__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_123_123, 0) = ((MR_Box) (ll_backend__proc_gen__V_107_107));
#line 1112 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_123_123, 1) = ((MR_Box) (ll_backend__proc_gen__V_127_127));
#line 1112 "proc_gen.m"
              }
#line 1109 "proc_gen.m"
              {
#line 1109 "proc_gen.m"
                ll_backend__proc_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_115_115, 0) = ((MR_Box) (ll_backend__proc_gen__V_116_116));
#line 1109 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_115_115, 1) = ((MR_Box) (ll_backend__proc_gen__V_123_123));
#line 1109 "proc_gen.m"
              }
#line 1109 "proc_gen.m"
              {
#line 1109 "proc_gen.m"
                ll_backend__proc_gen__PruneTraceTicketCodeCopy_42 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__V_115_115);
              }
#line 1088 "proc_gen.m"
            }
#line 1123 "proc_gen.m"
        else
#line 1124 "proc_gen.m"
          {
#line 1124 "proc_gen.m"
            {
#line 1124 "proc_gen.m"
              ll_backend__proc_gen__PruneTraceTicketCode_41 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261);
            }
#line 1125 "proc_gen.m"
            {
#line 1125 "proc_gen.m"
              ll_backend__proc_gen__PruneTraceTicketCodeCopy_42 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261);
            }
#line 1125 "proc_gen.m"
            ll_backend__proc_gen__STATE_VARIABLE_CI_97_97 = ll_backend__proc_gen__STATE_VARIABLE_CI_82_82;
#line 1124 "proc_gen.m"
          }
#line 1128 "proc_gen.m"
        {
#line 1128 "proc_gen.m"
          ll_backend__proc_gen__V_132_132 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__PruneTraceTicketCode_41, ll_backend__proc_gen__DeallocCode_33);
        }
#line 1128 "proc_gen.m"
        {
#line 1128 "proc_gen.m"
          *ll_backend__proc_gen__RestoreDeallocCode_13 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__RestoreSuccipCode_32, ll_backend__proc_gen__V_132_132);
        }
#line 1130 "proc_gen.m"
        {
#line 1130 "proc_gen.m"
          ll_backend__proc_gen__V_133_133 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__PruneTraceTicketCodeCopy_42, ll_backend__proc_gen__DeallocCode_33);
        }
#line 1130 "proc_gen.m"
        {
#line 1130 "proc_gen.m"
          ll_backend__proc_gen__RestoreDeallocCodeCopy_43 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__RestoreSuccipCode_32, ll_backend__proc_gen__V_133_133);
        }
#line 1133 "proc_gen.m"
        {
#line 1133 "proc_gen.m"
          ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_97_97, &ll_backend__proc_gen__MaybeTraceInfo_44);
        }
#line 1161 "proc_gen.m"
        if ((ll_backend__proc_gen__MaybeTraceInfo_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1162 "proc_gen.m"
          {
#line 1163 "proc_gen.m"
            {
#line 1163 "proc_gen.m"
              ll_backend__proc_gen__TraceExitCode_50 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261);
            }
#line 1164 "proc_gen.m"
            ll_backend__proc_gen__LiveLvals_58 = ll_backend__proc_gen__OutLvals_29;
#line 1164 "proc_gen.m"
            *ll_backend__proc_gen__STATE_VARIABLE_CI_73 = ll_backend__proc_gen__STATE_VARIABLE_CI_97_97;
#line 1162 "proc_gen.m"
          }
#line 1161 "proc_gen.m"
        else
#line 1135 "proc_gen.m"
          {
#line 1135 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TypeCtorInfo_272_272;
#line 1135 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TraceInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_44, (MR_Integer) 0)));
#line 1135 "proc_gen.m"
            MR_Word ll_backend__proc_gen__MaybeExitExternalInfo_46;
#line 1135 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TypeInfoDatas_49;
#line 1135 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TypeInfoLocnSets_51;
#line 1135 "proc_gen.m"
            MR_Word ll_backend__proc_gen__FindBaseLvals_52;
#line 1135 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TypeInfoLvals_57;

#line 1138 "proc_gen.m"
            {
#line 1138 "proc_gen.m"
              ll_backend__trace_gen__generate_external_event_code_6_p_0((MR_Integer) 1, ll_backend__proc_gen__TraceInfo_45, ll_backend__proc_gen__ProcContext_12, &ll_backend__proc_gen__MaybeExitExternalInfo_46, ll_backend__proc_gen__STATE_VARIABLE_CI_97_97, ll_backend__proc_gen__STATE_VARIABLE_CI_73);
            }
#line 1144 "proc_gen.m"
            if ((ll_backend__proc_gen__MaybeExitExternalInfo_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "proc_gen.m"
              {
#line 1146 "proc_gen.m"
                {
#line 1146 "proc_gen.m"
                  ll_backend__proc_gen__TypeInfoDatas_49 = mercury__map__init_0_f_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[4], (MR_Word) &ll_backend__proc_gen_scalar_common_1[5]);
                }
#line 1147 "proc_gen.m"
                {
#line 1147 "proc_gen.m"
                  ll_backend__proc_gen__TraceExitCode_50 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261);
                }
#line 1145 "proc_gen.m"
              }
#line 1144 "proc_gen.m"
            else
#line 1141 "proc_gen.m"
              {
#line 1141 "proc_gen.m"
                MR_Word ll_backend__proc_gen__ExitExternalInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeExitExternalInfo_46, (MR_Integer) 0)));
#line 1142 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ExitExternalInfo_47, (MR_Integer) 0)));

#line 1142 "proc_gen.m"
                ll_backend__proc_gen__TypeInfoDatas_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ExitExternalInfo_47, (MR_Integer) 1)));
#line 1142 "proc_gen.m"
                ll_backend__proc_gen__TraceExitCode_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ExitExternalInfo_47, (MR_Integer) 2)));
#line 1141 "proc_gen.m"
              }
#line 1149 "proc_gen.m"
            {
#line 1149 "proc_gen.m"
              mercury__map__values_2_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[4], (MR_Word) &ll_backend__proc_gen_scalar_common_1[5], ll_backend__proc_gen__TypeInfoDatas_49, &ll_backend__proc_gen__TypeInfoLocnSets_51);
            }
#line 1150 "proc_gen.m"
            {
#line 1150 "proc_gen.m"
              ll_backend__proc_gen__FindBaseLvals_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1150 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FindBaseLvals_52, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[2]));
#line 1150 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FindBaseLvals_52, 1) = ((MR_Box) (ll_backend__proc_gen__generate_exit_8_p_0_2));
#line 1150 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FindBaseLvals_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1150 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FindBaseLvals_52, 3) = ((MR_Box) (ll_backend__proc_gen__TypeInfoLocnSets_51));
#line 1150 "proc_gen.m"
            }
#line 3956 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__TypeCtorInfo_272_272 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 1159 "proc_gen.m"
            {
#line 1159 "proc_gen.m"
              mercury__solutions__solutions_2_p_1(ll_backend__proc_gen__TypeCtorInfo_272_272, ll_backend__proc_gen__FindBaseLvals_52, &ll_backend__proc_gen__TypeInfoLvals_57);
            }
#line 1160 "proc_gen.m"
            {
#line 1160 "proc_gen.m"
              mercury__set__insert_list_3_p_0(ll_backend__proc_gen__TypeCtorInfo_272_272, ll_backend__proc_gen__TypeInfoLvals_57, ll_backend__proc_gen__OutLvals_29, &ll_backend__proc_gen__LiveLvals_58);
            }
#line 1135 "proc_gen.m"
          }
#line 1167 "proc_gen.m"
        {
#line 1167 "proc_gen.m"
          ll_backend__code_info__get_proc_info_2_p_0(*ll_backend__proc_gen__STATE_VARIABLE_CI_73, &ll_backend__proc_gen__ProcInfo_59);
        }
#line 1168 "proc_gen.m"
        {
#line 1168 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_maybe_special_return_2_p_0(ll_backend__proc_gen__ProcInfo_59, &ll_backend__proc_gen__MaybeSpecialReturn_60);
        }
#line 1179 "proc_gen.m"
        if ((ll_backend__proc_gen__CodeModel_9 == (MR_Integer) 0))
#line 1170 "proc_gen.m"
          {
#line 1170 "proc_gen.m"
            MR_Word ll_backend__proc_gen__SuccessCode_61;
#line 1170 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_207_207;
#line 1170 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_212_212;
#line 1170 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_213_213;
#line 1170 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_214_214;
#line 1170 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_222_222;

#line 1171 "proc_gen.m"
            {
#line 1171 "proc_gen.m"
              ll_backend__proc_gen__V_207_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_207_207, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[3]));
#line 1171 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_207_207, 1) = ((MR_Box) (ll_backend__proc_gen__generate_exit_8_p_0_3));
#line 1171 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_207_207, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1171 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_207_207, 3) = ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_60));
#line 1171 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_207_207, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1171 "proc_gen.m"
            }
#line 1171 "proc_gen.m"
            {
#line 1171 "proc_gen.m"
              mercury__require__expect_4_p_0(ll_backend__proc_gen__V_207_207, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_exit\'/8", (MR_String) "det special_return");
            }
#line 1174 "proc_gen.m"
            {
#line 1174 "proc_gen.m"
              ll_backend__proc_gen__V_214_214 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "proc_gen.m"
              MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_214_214, 0) = ((MR_Box) (ll_backend__proc_gen__LiveLvals_58));
#line 1174 "proc_gen.m"
            }
#line 1174 "proc_gen.m"
            {
#line 1174 "proc_gen.m"
              ll_backend__proc_gen__V_213_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_213_213, 0) = ((MR_Box) (ll_backend__proc_gen__V_214_214));
#line 1174 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_213_213, 1) = ((MR_Box) ((MR_String) ""));
#line 1174 "proc_gen.m"
            }
#line 1173 "proc_gen.m"
            {
#line 1173 "proc_gen.m"
              ll_backend__proc_gen__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_212_212, 0) = ((MR_Box) (ll_backend__proc_gen__V_213_213));
#line 1173 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_212_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[13])));
#line 1173 "proc_gen.m"
            }
#line 1173 "proc_gen.m"
            {
#line 1173 "proc_gen.m"
              ll_backend__proc_gen__SuccessCode_61 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__V_212_212);
            }
#line 1177 "proc_gen.m"
            {
#line 1177 "proc_gen.m"
              ll_backend__proc_gen__V_222_222 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__RestoreDeallocCodeCopy_43, ll_backend__proc_gen__SuccessCode_61);
            }
#line 1177 "proc_gen.m"
            {
#line 1177 "proc_gen.m"
              ll_backend__proc_gen__AllSuccessCode_62 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__TraceExitCode_50, ll_backend__proc_gen__V_222_222);
            }
#line 1170 "proc_gen.m"
          }
#line 1179 "proc_gen.m"
        else
#line 1179 "proc_gen.m"
          if ((ll_backend__proc_gen__CodeModel_9 == (MR_Integer) 2))
#line 1193 "proc_gen.m"
            {
#line 1193 "proc_gen.m"
              MR_Word ll_backend__proc_gen__SetupRedoCode_65;
#line 1193 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_178_178;
#line 1193 "proc_gen.m"
              MR_Word ll_backend__proc_gen__SuccessCode_248;

#line 1197 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeTraceInfo_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1199 "proc_gen.m"
                {
#line 1199 "proc_gen.m"
                  ll_backend__proc_gen__SetupRedoCode_65 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261);
                }
#line 1197 "proc_gen.m"
              else
#line 1195 "proc_gen.m"
                {
#line 1195 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__TraceInfo2_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_44, (MR_Integer) 0)));

#line 1196 "proc_gen.m"
                  {
#line 1196 "proc_gen.m"
                    ll_backend__trace_gen__maybe_setup_redo_event_2_p_0(ll_backend__proc_gen__TraceInfo2_64, &ll_backend__proc_gen__SetupRedoCode_65);
                  }
#line 1195 "proc_gen.m"
                }
#line 1215 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeSpecialReturn_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1216 "proc_gen.m"
                {
#line 1216 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_137_137;
#line 1216 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_138_138;
#line 1216 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_139_139;

#line 1218 "proc_gen.m"
                  {
#line 1218 "proc_gen.m"
                    ll_backend__proc_gen__V_139_139 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "proc_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_139_139, 0) = ((MR_Box) (ll_backend__proc_gen__LiveLvals_58));
#line 1218 "proc_gen.m"
                  }
#line 1218 "proc_gen.m"
                  {
#line 1218 "proc_gen.m"
                    ll_backend__proc_gen__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_138_138, 0) = ((MR_Box) (ll_backend__proc_gen__V_139_139));
#line 1218 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_138_138, 1) = ((MR_Box) ((MR_String) ""));
#line 1218 "proc_gen.m"
                  }
#line 1217 "proc_gen.m"
                  {
#line 1217 "proc_gen.m"
                    ll_backend__proc_gen__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_137_137, 0) = ((MR_Box) (ll_backend__proc_gen__V_138_138));
#line 1217 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[17])));
#line 1217 "proc_gen.m"
                  }
#line 1217 "proc_gen.m"
                  {
#line 1217 "proc_gen.m"
                    ll_backend__proc_gen__SuccessCode_248 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__V_137_137);
                  }
#line 1216 "proc_gen.m"
                }
#line 1215 "proc_gen.m"
              else
#line 1202 "proc_gen.m"
                {
#line 1202 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__SpecialReturn_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSpecialReturn_60, (MR_Integer) 0)));
#line 1202 "proc_gen.m"
                  MR_String ll_backend__proc_gen__GeneratorLocnStr_67 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__SpecialReturn_66, (MR_Integer) 0)));
#line 1202 "proc_gen.m"
                  MR_String ll_backend__proc_gen__DebugStr_68 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__SpecialReturn_66, (MR_Integer) 1)));
#line 1202 "proc_gen.m"
                  MR_String ll_backend__proc_gen__ReturnCodeStr_70;
#line 1202 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__Component_71;
#line 1202 "proc_gen.m"
                  MR_String ll_backend__proc_gen__V_149_149;
#line 1202 "proc_gen.m"
                  MR_String ll_backend__proc_gen__V_150_150;
#line 1202 "proc_gen.m"
                  MR_String ll_backend__proc_gen__V_152_152;
#line 1202 "proc_gen.m"
                  MR_String ll_backend__proc_gen__V_153_153;
#line 1202 "proc_gen.m"
                  MR_String ll_backend__proc_gen__V_155_155;
#line 1202 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_159_159;
#line 1202 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_160_160;
#line 1202 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_161_161;
#line 1202 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_163_163;
#line 1202 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_164_164;
#line 1202 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_165_165;
#line 1202 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_167_167;

#line 1206 "proc_gen.m"
                  {
#line 1206 "proc_gen.m"
                    ll_backend__proc_gen__V_155_155 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__GeneratorLocnStr_67, (MR_String) ");\n");
                  }
#line 1206 "proc_gen.m"
                  {
#line 1206 "proc_gen.m"
                    ll_backend__proc_gen__V_153_153 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__proc_gen__V_155_155);
                  }
#line 1205 "proc_gen.m"
                  {
#line 1205 "proc_gen.m"
                    ll_backend__proc_gen__V_152_152 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__DebugStr_68, ll_backend__proc_gen__V_153_153);
                  }
#line 1205 "proc_gen.m"
                  {
#line 1205 "proc_gen.m"
                    ll_backend__proc_gen__V_150_150 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__proc_gen__V_152_152);
                  }
#line 1205 "proc_gen.m"
                  {
#line 1205 "proc_gen.m"
                    ll_backend__proc_gen__V_149_149 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mmos_return_answer", ll_backend__proc_gen__V_150_150);
                  }
#line 1205 "proc_gen.m"
                  {
#line 1205 "proc_gen.m"
                    ll_backend__proc_gen__ReturnCodeStr_70 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__proc_gen__V_149_149);
                  }
#line 1207 "proc_gen.m"
                  {
#line 1207 "proc_gen.m"
                    ll_backend__proc_gen__Component_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1207 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1207 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_71, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1207 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__Component_71, 3) = ((MR_Box) (ll_backend__proc_gen__ReturnCodeStr_70));
#line 1207 "proc_gen.m"
                  }
#line 1211 "proc_gen.m"
                  {
#line 1211 "proc_gen.m"
                    ll_backend__proc_gen__V_161_161 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "proc_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_161_161, 0) = ((MR_Box) (ll_backend__proc_gen__LiveLvals_58));
#line 1211 "proc_gen.m"
                  }
#line 1211 "proc_gen.m"
                  {
#line 1211 "proc_gen.m"
                    ll_backend__proc_gen__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_160_160, 0) = ((MR_Box) (ll_backend__proc_gen__V_161_161));
#line 1211 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_160_160, 1) = ((MR_Box) ((MR_String) ""));
#line 1211 "proc_gen.m"
                  }
#line 1212 "proc_gen.m"
                  {
#line 1212 "proc_gen.m"
                    ll_backend__proc_gen__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_167_167, 0) = ((MR_Box) (ll_backend__proc_gen__Component_71));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "proc_gen.m"
                  }
#line 1212 "proc_gen.m"
                  {
#line 1212 "proc_gen.m"
                    ll_backend__proc_gen__V_165_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_165_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_165_165, 2) = ((MR_Box) (ll_backend__proc_gen__V_167_167));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_165_165, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_165_165, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_165_165, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_165_165, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_165_165, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_165_165, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_165_165, 9) = ((MR_Box) ((MR_Integer) 0));
#line 1212 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_165_165, 10) = ((MR_Box) ((MR_Integer) 1));
#line 1212 "proc_gen.m"
                  }
#line 1214 "proc_gen.m"
                  {
#line 1214 "proc_gen.m"
                    ll_backend__proc_gen__V_164_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1214 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_164_164, 0) = ((MR_Box) (ll_backend__proc_gen__V_165_165));
#line 1214 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_164_164, 1) = ((MR_Box) ((MR_String) ""));
#line 1214 "proc_gen.m"
                  }
#line 1211 "proc_gen.m"
                  {
#line 1211 "proc_gen.m"
                    ll_backend__proc_gen__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_163_163, 0) = ((MR_Box) (ll_backend__proc_gen__V_164_164));
#line 1211 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_163_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1211 "proc_gen.m"
                  }
#line 1210 "proc_gen.m"
                  {
#line 1210 "proc_gen.m"
                    ll_backend__proc_gen__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_159_159, 0) = ((MR_Box) (ll_backend__proc_gen__V_160_160));
#line 1210 "proc_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_159_159, 1) = ((MR_Box) (ll_backend__proc_gen__V_163_163));
#line 1210 "proc_gen.m"
                  }
#line 1210 "proc_gen.m"
                  {
#line 1210 "proc_gen.m"
                    ll_backend__proc_gen__SuccessCode_248 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__V_159_159);
                  }
#line 1202 "proc_gen.m"
                }
#line 1223 "proc_gen.m"
              {
#line 1223 "proc_gen.m"
                ll_backend__proc_gen__V_178_178 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__TraceExitCode_50, ll_backend__proc_gen__SuccessCode_248);
              }
#line 1223 "proc_gen.m"
              {
#line 1223 "proc_gen.m"
                ll_backend__proc_gen__AllSuccessCode_62 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__SetupRedoCode_65, ll_backend__proc_gen__V_178_178);
              }
#line 1193 "proc_gen.m"
            }
#line 1179 "proc_gen.m"
          else
#line 1180 "proc_gen.m"
            {
#line 1180 "proc_gen.m"
              MR_Word ll_backend__proc_gen__SuccessLiveRegs_63;
#line 1180 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_179_179;
#line 1180 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_187_187;
#line 1180 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_196_196;
#line 1180 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_197_197;
#line 1180 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_198_198;
#line 1180 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_206_206;
#line 1180 "proc_gen.m"
              MR_Word ll_backend__proc_gen__SuccessCode_244;

#line 1181 "proc_gen.m"
              {
#line 1181 "proc_gen.m"
                ll_backend__proc_gen__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_179_179, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[3]));
#line 1181 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_179_179, 1) = ((MR_Box) (ll_backend__proc_gen__generate_exit_8_p_0_4));
#line 1181 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_179_179, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1181 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_179_179, 3) = ((MR_Box) (ll_backend__proc_gen__MaybeSpecialReturn_60));
#line 1181 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_179_179, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1181 "proc_gen.m"
              }
#line 1181 "proc_gen.m"
              {
#line 1181 "proc_gen.m"
                mercury__require__expect_4_p_0(ll_backend__proc_gen__V_179_179, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_exit\'/8", (MR_String) "semi special_return");
              }
#line 1183 "proc_gen.m"
              {
#line 1183 "proc_gen.m"
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[9]))), ll_backend__proc_gen__LiveLvals_58, &ll_backend__proc_gen__SuccessLiveRegs_63);
              }
#line 1187 "proc_gen.m"
              {
#line 1187 "proc_gen.m"
                ll_backend__proc_gen__V_198_198 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "proc_gen.m"
                MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_198_198, 0) = ((MR_Box) (ll_backend__proc_gen__SuccessLiveRegs_63));
#line 1187 "proc_gen.m"
              }
#line 1187 "proc_gen.m"
              {
#line 1187 "proc_gen.m"
                ll_backend__proc_gen__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_197_197, 0) = ((MR_Box) (ll_backend__proc_gen__V_198_198));
#line 1187 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_197_197, 1) = ((MR_Box) ((MR_String) ""));
#line 1187 "proc_gen.m"
              }
#line 1186 "proc_gen.m"
              {
#line 1186 "proc_gen.m"
                ll_backend__proc_gen__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_196_196, 0) = ((MR_Box) (ll_backend__proc_gen__V_197_197));
#line 1186 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_196_196, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[13])));
#line 1186 "proc_gen.m"
              }
#line 1184 "proc_gen.m"
              {
#line 1184 "proc_gen.m"
                ll_backend__proc_gen__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_187_187, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[19]));
#line 1184 "proc_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_187_187, 1) = ((MR_Box) (ll_backend__proc_gen__V_196_196));
#line 1184 "proc_gen.m"
              }
#line 1184 "proc_gen.m"
              {
#line 1184 "proc_gen.m"
                ll_backend__proc_gen__SuccessCode_244 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__V_187_187);
              }
#line 1190 "proc_gen.m"
              {
#line 1190 "proc_gen.m"
                ll_backend__proc_gen__V_206_206 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__RestoreDeallocCodeCopy_43, ll_backend__proc_gen__SuccessCode_244);
              }
#line 1190 "proc_gen.m"
              {
#line 1190 "proc_gen.m"
                ll_backend__proc_gen__AllSuccessCode_62 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__TraceExitCode_50, ll_backend__proc_gen__V_206_206);
              }
#line 1180 "proc_gen.m"
            }
#line 1226 "proc_gen.m"
        {
#line 1226 "proc_gen.m"
          ll_backend__proc_gen__V_224_224 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__AllSuccessCode_62, ll_backend__proc_gen__EndComment_17);
        }
#line 1226 "proc_gen.m"
        {
#line 1226 "proc_gen.m"
          ll_backend__proc_gen__V_223_223 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__FlushCode_30, ll_backend__proc_gen__V_224_224);
        }
#line 1226 "proc_gen.m"
        {
#line 1226 "proc_gen.m"
          *ll_backend__proc_gen__ExitCode_14 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__StartComment_16, ll_backend__proc_gen__V_223_223);
        }
#line 1050 "proc_gen.m"
      }
#line 1049 "proc_gen.m"
    else
#line 1037 "proc_gen.m"
      {
#line 1037 "proc_gen.m"
        MR_Word ll_backend__proc_gen__UndefComponents_22;
#line 1037 "proc_gen.m"
        MR_Word ll_backend__proc_gen__UndefCode_24;
#line 1037 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_225_225;
#line 1037 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_228_228;
#line 1037 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_229_229;
#line 1037 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_231_231;
#line 1037 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_232_232;
#line 1037 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_242_242;

#line 1040 "proc_gen.m"
        {
#line 1040 "proc_gen.m"
          ll_backend__proc_gen__V_229_229 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 1039 "proc_gen.m"
        {
#line 1039 "proc_gen.m"
          ll_backend__proc_gen__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_228_228, 0) = ((MR_Box) (ll_backend__proc_gen__V_229_229));
#line 1039 "proc_gen.m"
        }
#line 1041 "proc_gen.m"
        {
#line 1041 "proc_gen.m"
          ll_backend__proc_gen__V_225_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_225_225, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1041 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_225_225, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1041 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_225_225, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1041 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_225_225, 3) = ((MR_Box) (ll_backend__proc_gen__V_228_228));
#line 1041 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_225_225, 4) = ((MR_Box) ((MR_String) "#undef\tMR_ORDINARY_SLOTS\n"));
#line 1041 "proc_gen.m"
        }
#line 1039 "proc_gen.m"
        {
#line 1039 "proc_gen.m"
          ll_backend__proc_gen__UndefComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__UndefComponents_22, 0) = ((MR_Box) (ll_backend__proc_gen__V_225_225));
#line 1039 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__UndefComponents_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "proc_gen.m"
        }
#line 1044 "proc_gen.m"
        {
#line 1044 "proc_gen.m"
          ll_backend__proc_gen__V_232_232 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_232_232, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1044 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_232_232, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1044 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_232_232, 2) = ((MR_Box) (ll_backend__proc_gen__UndefComponents_22));
#line 1044 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_232_232, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1044 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_232_232, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1044 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_232_232, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1044 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_232_232, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1044 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_232_232, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1044 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_232_232, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1044 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_232_232, 9) = ((MR_Box) ((MR_Integer) 0));
#line 1044 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_232_232, 10) = ((MR_Box) ((MR_Integer) 1));
#line 1044 "proc_gen.m"
        }
#line 1043 "proc_gen.m"
        {
#line 1043 "proc_gen.m"
          ll_backend__proc_gen__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1043 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_231_231, 0) = ((MR_Box) (ll_backend__proc_gen__V_232_232));
#line 1043 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_231_231, 1) = ((MR_Box) ((MR_String) ""));
#line 1043 "proc_gen.m"
        }
#line 1043 "proc_gen.m"
        {
#line 1043 "proc_gen.m"
          ll_backend__proc_gen__UndefCode_24 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ((MR_Box) (ll_backend__proc_gen__V_231_231)));
        }
#line 1047 "proc_gen.m"
        {
#line 1047 "proc_gen.m"
          *ll_backend__proc_gen__RestoreDeallocCode_13 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261);
        }
#line 1048 "proc_gen.m"
        {
#line 1048 "proc_gen.m"
          ll_backend__proc_gen__V_242_242 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__UndefCode_24, ll_backend__proc_gen__EndComment_17);
        }
#line 1048 "proc_gen.m"
        {
#line 1048 "proc_gen.m"
          *ll_backend__proc_gen__ExitCode_14 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_261_261, ll_backend__proc_gen__StartComment_16, ll_backend__proc_gen__V_242_242);
        }
#line 1048 "proc_gen.m"
        *ll_backend__proc_gen__STATE_VARIABLE_CI_73 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_72;
#line 1037 "proc_gen.m"
      }
#line 1028 "proc_gen.m"
  }
#line 1023 "proc_gen.m"
}

#line 892 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_entry_6_p_0(
#line 892 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CI_7,
#line 892 "proc_gen.m"
  MR_Word ll_backend__proc_gen__CodeModel_8,
#line 892 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Goal_9,
#line 892 "proc_gen.m"
  MR_Word ll_backend__proc_gen__OutsideResumePoint_10,
#line 892 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__FrameInfo_11,
#line 892 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__EntryCode_12)
#line 892 "proc_gen.m"
{
#line 896 "proc_gen.m"
  {
#line 896 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_77_77;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StackSlots_13;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__VarSet_14;
#line 896 "proc_gen.m"
    MR_String ll_backend__proc_gen__SlotsComment_15;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StartComment_16;
#line 896 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__MainSlots_17;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredId_18;
#line 896 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__ProcId_19;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ModuleInfo_20;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EntryLabel_21;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__LabelCode_22;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Used_23;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__SaveSuccipCode_25;
#line 896 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TotalSlots_26;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSuccipSlot_27;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeTraceInfo_28;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TraceFillCode_30;
#line 896 "proc_gen.m"
    MR_String ll_backend__proc_gen__PushMsg_31;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__AllocCode_34;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__NondetPragma_35;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__EndComment_38;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_39_39;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_44_44;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_45_45;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_46_46;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_50_50;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_51_51;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_73_73;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_74_74;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_75_75;
#line 896 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_76_76;

#line 897 "proc_gen.m"
    {
#line 897 "proc_gen.m"
      ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__StackSlots_13);
    }
#line 898 "proc_gen.m"
    {
#line 898 "proc_gen.m"
      ll_backend__code_info__get_varset_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__VarSet_14);
    }
#line 899 "proc_gen.m"
    {
#line 899 "proc_gen.m"
      ll_backend__proc_gen__SlotsComment_15 = hlds__hlds_llds__explain_stack_slots_2_f_0(ll_backend__proc_gen__StackSlots_13, ll_backend__proc_gen__VarSet_14);
    }
#line 4676 "ll_backend.proc_gen.c"
    ll_backend__proc_gen__TypeCtorInfo_77_77 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 902 "proc_gen.m"
    {
#line 902 "proc_gen.m"
      ll_backend__proc_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_46_46, 0) = ((MR_Box) (ll_backend__proc_gen__SlotsComment_15));
#line 902 "proc_gen.m"
    }
#line 903 "proc_gen.m"
    {
#line 903 "proc_gen.m"
      ll_backend__proc_gen__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 903 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_45_45, 0) = ((MR_Box) (ll_backend__proc_gen__V_46_46));
#line 903 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_45_45, 1) = ((MR_Box) ((MR_String) ""));
#line 903 "proc_gen.m"
    }
#line 901 "proc_gen.m"
    {
#line 901 "proc_gen.m"
      ll_backend__proc_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_44_44, 0) = ((MR_Box) (ll_backend__proc_gen__V_45_45));
#line 901 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 901 "proc_gen.m"
    }
#line 900 "proc_gen.m"
    {
#line 900 "proc_gen.m"
      ll_backend__proc_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_39_39, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[28]));
#line 900 "proc_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_39_39, 1) = ((MR_Box) (ll_backend__proc_gen__V_44_44));
#line 900 "proc_gen.m"
    }
#line 900 "proc_gen.m"
    {
#line 900 "proc_gen.m"
      ll_backend__proc_gen__StartComment_16 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ll_backend__proc_gen__V_39_39);
    }
#line 904 "proc_gen.m"
    {
#line 904 "proc_gen.m"
      ll_backend__code_info__get_total_stackslot_count_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__MainSlots_17);
    }
#line 905 "proc_gen.m"
    {
#line 905 "proc_gen.m"
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__PredId_18);
    }
#line 906 "proc_gen.m"
    {
#line 906 "proc_gen.m"
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__ProcId_19);
    }
#line 907 "proc_gen.m"
    {
#line 907 "proc_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__ModuleInfo_20);
    }
#line 908 "proc_gen.m"
    {
#line 908 "proc_gen.m"
      ll_backend__proc_gen__EntryLabel_21 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__proc_gen__ModuleInfo_20, ll_backend__proc_gen__PredId_18, ll_backend__proc_gen__ProcId_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 910 "proc_gen.m"
    {
#line 910 "proc_gen.m"
      ll_backend__proc_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 910 "proc_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_51_51, 1) = ((MR_Box) (ll_backend__proc_gen__EntryLabel_21));
#line 910 "proc_gen.m"
    }
#line 909 "proc_gen.m"
    {
#line 909 "proc_gen.m"
      ll_backend__proc_gen__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 909 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_50_50, 0) = ((MR_Box) (ll_backend__proc_gen__V_51_51));
#line 909 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_50_50, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
#line 909 "proc_gen.m"
    }
#line 909 "proc_gen.m"
    {
#line 909 "proc_gen.m"
      ll_backend__proc_gen__LabelCode_22 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ((MR_Box) (ll_backend__proc_gen__V_50_50)));
    }
#line 912 "proc_gen.m"
    {
#line 912 "proc_gen.m"
      ll_backend__code_info__get_succip_used_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__Used_23);
    }
#line 915 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Used_23 == (MR_Integer) 1);
#line 915 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 915 "proc_gen.m"
      {
#line 917 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_8 == (MR_Integer) 2);
#line 917 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 915 "proc_gen.m"
      }
#line 926 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 919 "proc_gen.m"
      {
#line 919 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__V_53_53 = (ll_backend__proc_gen__MainSlots_17 + (MR_Integer) 1);
#line 919 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_55_55;
#line 919 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_56_56;
#line 919 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_57_57;

#line 985 "proc_gen.m"
        if ((ll_backend__proc_gen__CodeModel_8 == (MR_Integer) 2))
#line 989 "proc_gen.m"
          ll_backend__proc_gen__TotalSlots_26 = ll_backend__proc_gen__V_53_53;
#line 985 "proc_gen.m"
        else
#line 986 "proc_gen.m"
          {
#line 986 "proc_gen.m"
            ll_backend__proc_gen__TotalSlots_26 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(ll_backend__proc_gen__CI_7, ll_backend__proc_gen__V_53_53);
          }
#line 921 "proc_gen.m"
        {
#line 921 "proc_gen.m"
          ll_backend__proc_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 921 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_57_57, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 921 "proc_gen.m"
        }
#line 921 "proc_gen.m"
        {
#line 921 "proc_gen.m"
          ll_backend__proc_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 921 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 921 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_56_56, 1) = ((MR_Box) (ll_backend__proc_gen__V_57_57));
#line 921 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_56_56, 2) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_7[1]));
#line 921 "proc_gen.m"
        }
#line 920 "proc_gen.m"
        {
#line 920 "proc_gen.m"
          ll_backend__proc_gen__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 920 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_55_55, 0) = ((MR_Box) (ll_backend__proc_gen__V_56_56));
#line 920 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_55_55, 1) = ((MR_Box) ((MR_String) "Save the success ip"));
#line 920 "proc_gen.m"
        }
#line 920 "proc_gen.m"
        {
#line 920 "proc_gen.m"
          ll_backend__proc_gen__SaveSuccipCode_25 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ((MR_Box) (ll_backend__proc_gen__V_55_55)));
        }
#line 925 "proc_gen.m"
        {
#line 925 "proc_gen.m"
          ll_backend__proc_gen__MaybeSuccipSlot_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 925 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSuccipSlot_27, 0) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 925 "proc_gen.m"
        }
#line 919 "proc_gen.m"
      }
#line 926 "proc_gen.m"
    else
#line 927 "proc_gen.m"
      {
#line 927 "proc_gen.m"
        {
#line 927 "proc_gen.m"
          ll_backend__proc_gen__SaveSuccipCode_25 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77);
        }
#line 985 "proc_gen.m"
        if ((ll_backend__proc_gen__CodeModel_8 == (MR_Integer) 2))
#line 989 "proc_gen.m"
          ll_backend__proc_gen__TotalSlots_26 = ll_backend__proc_gen__MainSlots_17;
#line 985 "proc_gen.m"
        else
#line 986 "proc_gen.m"
          {
#line 986 "proc_gen.m"
            ll_backend__proc_gen__TotalSlots_26 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(ll_backend__proc_gen__CI_7, ll_backend__proc_gen__MainSlots_17);
          }
#line 929 "proc_gen.m"
        ll_backend__proc_gen__MaybeSuccipSlot_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 927 "proc_gen.m"
      }
#line 931 "proc_gen.m"
    {
#line 931 "proc_gen.m"
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__CI_7, &ll_backend__proc_gen__MaybeTraceInfo_28);
    }
#line 935 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeTraceInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 937 "proc_gen.m"
      {
#line 937 "proc_gen.m"
        ll_backend__proc_gen__TraceFillCode_30 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77);
      }
#line 935 "proc_gen.m"
    else
#line 933 "proc_gen.m"
      {
#line 933 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_28, (MR_Integer) 0)));

#line 934 "proc_gen.m"
        {
#line 934 "proc_gen.m"
          ll_backend__trace_gen__generate_slot_fill_code_3_p_0(ll_backend__proc_gen__CI_7, ll_backend__proc_gen__TraceInfo_29, &ll_backend__proc_gen__TraceFillCode_30);
        }
#line 933 "proc_gen.m"
      }
#line 940 "proc_gen.m"
    {
#line 940 "proc_gen.m"
      ll_backend__proc_gen__PushMsg_31 = ll_backend__proc_gen__push_msg_3_f_0(ll_backend__proc_gen__ModuleInfo_20, ll_backend__proc_gen__PredId_18, ll_backend__proc_gen__ProcId_19);
    }
#line 950 "proc_gen.m"
    if ((ll_backend__proc_gen__CodeModel_8 == (MR_Integer) 2))
#line 942 "proc_gen.m"
      {
#line 942 "proc_gen.m"
        MR_Word ll_backend__proc_gen__OutsideResumeAddress_32;
#line 942 "proc_gen.m"
        MR_Word ll_backend__proc_gen__NondetFrameInfo_33;
#line 942 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_65_65;
#line 942 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_66_66;
#line 942 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_67_67;

#line 943 "proc_gen.m"
        {
#line 943 "proc_gen.m"
          ll_backend__code_info__resume_point_stack_addr_2_p_0(ll_backend__proc_gen__OutsideResumePoint_10, &ll_backend__proc_gen__OutsideResumeAddress_32);
        }
#line 944 "proc_gen.m"
        {
#line 944 "proc_gen.m"
          ll_backend__proc_gen__NondetFrameInfo_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__NondetFrameInfo_33, 0) = ((MR_Box) (ll_backend__proc_gen__PushMsg_31));
#line 944 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__NondetFrameInfo_33, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 944 "proc_gen.m"
        }
#line 946 "proc_gen.m"
        {
#line 946 "proc_gen.m"
          ll_backend__proc_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 946 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_67_67, 0) = ((MR_Box) (ll_backend__proc_gen__OutsideResumeAddress_32));
#line 946 "proc_gen.m"
        }
#line 946 "proc_gen.m"
        {
#line 946 "proc_gen.m"
          ll_backend__proc_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 946 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 946 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_66_66, 1) = ((MR_Box) (ll_backend__proc_gen__NondetFrameInfo_33));
#line 946 "proc_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_66_66, 2) = ((MR_Box) (ll_backend__proc_gen__V_67_67));
#line 946 "proc_gen.m"
        }
#line 945 "proc_gen.m"
        {
#line 945 "proc_gen.m"
          ll_backend__proc_gen__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 945 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_65_65, 0) = ((MR_Box) (ll_backend__proc_gen__V_66_66));
#line 945 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_65_65, 1) = ((MR_Box) ((MR_String) "Allocate stack frame"));
#line 945 "proc_gen.m"
        }
#line 945 "proc_gen.m"
        {
#line 945 "proc_gen.m"
          ll_backend__proc_gen__AllocCode_34 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ((MR_Box) (ll_backend__proc_gen__V_65_65)));
        }
#line 949 "proc_gen.m"
        ll_backend__proc_gen__NondetPragma_35 = (MR_Integer) 0;
#line 942 "proc_gen.m"
      }
#line 950 "proc_gen.m"
    else
#line 953 "proc_gen.m"
      {
#line 953 "proc_gen.m"
        MR_Word ll_backend__proc_gen__IsLeaf_36;
#line 953 "proc_gen.m"
        MR_Word ll_backend__proc_gen__StackIncrKind_37;

#line 954 "proc_gen.m"
        {
#line 954 "proc_gen.m"
          ll_backend__proc_gen__IsLeaf_36 = hlds__goal_util__proc_body_is_leaf_1_f_0(ll_backend__proc_gen__Goal_9);
        }
#line 958 "proc_gen.m"
        if ((ll_backend__proc_gen__IsLeaf_36 == (MR_Integer) 0))
#line 960 "proc_gen.m"
          ll_backend__proc_gen__StackIncrKind_37 = (MR_Integer) 0;
#line 958 "proc_gen.m"
        else
#line 957 "proc_gen.m"
          ll_backend__proc_gen__StackIncrKind_37 = (MR_Integer) 1;
#line 962 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__TotalSlots_26 > (MR_Integer) 0);
#line 967 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 963 "proc_gen.m"
          {
#line 963 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_62_62;
#line 963 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_63_63;

#line 964 "proc_gen.m"
            {
#line 964 "proc_gen.m"
              ll_backend__proc_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 964 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
#line 964 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_63_63, 1) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 964 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_63_63, 2) = ((MR_Box) (ll_backend__proc_gen__PushMsg_31));
#line 964 "proc_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_63_63, 3) = ((MR_Box) (ll_backend__proc_gen__StackIncrKind_37));
#line 964 "proc_gen.m"
            }
#line 963 "proc_gen.m"
            {
#line 963 "proc_gen.m"
              ll_backend__proc_gen__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 963 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_62_62, 0) = ((MR_Box) (ll_backend__proc_gen__V_63_63));
#line 963 "proc_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_62_62, 1) = ((MR_Box) ((MR_String) "Allocate stack frame"));
#line 963 "proc_gen.m"
            }
#line 963 "proc_gen.m"
            {
#line 963 "proc_gen.m"
              ll_backend__proc_gen__AllocCode_34 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ((MR_Box) (ll_backend__proc_gen__V_62_62)));
            }
#line 963 "proc_gen.m"
          }
#line 967 "proc_gen.m"
        else
#line 968 "proc_gen.m"
          {
#line 968 "proc_gen.m"
            ll_backend__proc_gen__AllocCode_34 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77);
          }
#line 970 "proc_gen.m"
        ll_backend__proc_gen__NondetPragma_35 = (MR_Integer) 0;
#line 953 "proc_gen.m"
      }
#line 972 "proc_gen.m"
    {
#line 972 "proc_gen.m"
      MR_Word base;
#line 972 "proc_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 972 "proc_gen.m"
      *ll_backend__proc_gen__FrameInfo_11 = base;
#line 972 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_26));
#line 972 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__proc_gen__MaybeSuccipSlot_27));
#line 972 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__proc_gen__NondetPragma_35));
#line 972 "proc_gen.m"
    }
#line 973 "proc_gen.m"
    {
#line 973 "proc_gen.m"
      ll_backend__proc_gen__EndComment_38 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[29])));
    }
#line 977 "proc_gen.m"
    {
#line 977 "proc_gen.m"
      ll_backend__proc_gen__V_76_76 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ll_backend__proc_gen__TraceFillCode_30, ll_backend__proc_gen__EndComment_38);
    }
#line 976 "proc_gen.m"
    {
#line 976 "proc_gen.m"
      ll_backend__proc_gen__V_75_75 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ll_backend__proc_gen__SaveSuccipCode_25, ll_backend__proc_gen__V_76_76);
    }
#line 976 "proc_gen.m"
    {
#line 976 "proc_gen.m"
      ll_backend__proc_gen__V_74_74 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ll_backend__proc_gen__AllocCode_34, ll_backend__proc_gen__V_75_75);
    }
#line 976 "proc_gen.m"
    {
#line 976 "proc_gen.m"
      ll_backend__proc_gen__V_73_73 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ll_backend__proc_gen__LabelCode_22, ll_backend__proc_gen__V_74_74);
    }
#line 976 "proc_gen.m"
    {
#line 976 "proc_gen.m"
      *ll_backend__proc_gen__EntryCode_12 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_77_77, ll_backend__proc_gen__StartComment_16, ll_backend__proc_gen__V_73_73);
    }
#line 896 "proc_gen.m"
  }
#line 892 "proc_gen.m"
}

#line 851 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_call_event_6_p_0(
#line 851 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceInfo_7,
#line 851 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_8,
#line 851 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_9,
#line 851 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__TraceCallCode_10,
#line 851 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_16,
#line 851 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_17)
#line 851 "proc_gen.m"
{
#line 855 "proc_gen.m"
  {
#line 855 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 855 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeCallExternalInfo_12;

#line 856 "proc_gen.m"
    {
#line 856 "proc_gen.m"
      ll_backend__trace_gen__generate_external_event_code_6_p_0((MR_Integer) 0, ll_backend__proc_gen__TraceInfo_7, ll_backend__proc_gen__ProcContext_8, &ll_backend__proc_gen__MaybeCallExternalInfo_12, ll_backend__proc_gen__STATE_VARIABLE_CI_0_16, ll_backend__proc_gen__STATE_VARIABLE_CI_17);
    }
#line 863 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeCallExternalInfo_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "proc_gen.m"
      {
#line 867 "proc_gen.m"
        {
#line 867 "proc_gen.m"
          *ll_backend__proc_gen__TraceCallCode_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 868 "proc_gen.m"
        *ll_backend__proc_gen__MaybeTraceCallLabel_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 864 "proc_gen.m"
      }
#line 863 "proc_gen.m"
    else
#line 859 "proc_gen.m"
      {
#line 859 "proc_gen.m"
        MR_Word ll_backend__proc_gen__CallExternalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeCallExternalInfo_12, (MR_Integer) 0)));
#line 859 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceCallLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__CallExternalInfo_13, (MR_Integer) 0)));
#line 860 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__CallExternalInfo_13, (MR_Integer) 1)));

#line 860 "proc_gen.m"
        *ll_backend__proc_gen__TraceCallCode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__CallExternalInfo_13, (MR_Integer) 2)));
#line 862 "proc_gen.m"
        {
#line 862 "proc_gen.m"
          MR_Word base;
#line 862 "proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 862 "proc_gen.m"
          *ll_backend__proc_gen__MaybeTraceCallLabel_9 = base;
#line 862 "proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__proc_gen__TraceCallLabel_14));
#line 862 "proc_gen.m"
        }
#line 859 "proc_gen.m"
      }
#line 855 "proc_gen.m"
  }
#line 851 "proc_gen.m"
}

#line 787 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_category_code_10_p_0_1(
#line 787 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 787 "proc_gen.m"
{
#line 787 "proc_gen.m"
  {
#line 787 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 787 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 787 "proc_gen.m"
    {
#line 787 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_category_code__787__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 787 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 787 "proc_gen.m"
  }
#line 787 "proc_gen.m"
}

#line 671 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_category_code_10_p_0(
#line 671 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__1_1,
#line 671 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcContext_2,
#line 671 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Goal_3,
#line 671 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ResumePoint_4,
#line 671 "proc_gen.m"
  MR_Word ll_backend__proc_gen__TraceSlotInfo_5,
#line 671 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Code_6,
#line 671 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__MaybeTraceCallLabel_7,
#line 671 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__FrameInfo_8,
#line 671 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_0_9,
#line 671 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_CI_10)
#line 671 "proc_gen.m"
{
#line 676 "proc_gen.m"
  {
#line 676 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;

#line 676 "proc_gen.m"
    if ((ll_backend__proc_gen__HeadVar__1_1 == (MR_Integer) 0))
#line 676 "proc_gen.m"
      {
#line 676 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Globals_19;
#line 676 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MiddleRec_20;
#line 687 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MiddleRecCode_21;
#line 687 "proc_gen.m"
        MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_36_36;

#line 678 "proc_gen.m"
        {
#line 678 "proc_gen.m"
          ll_backend__code_info__get_globals_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_9, &ll_backend__proc_gen__Globals_19);
        }
#line 679 "proc_gen.m"
        {
#line 679 "proc_gen.m"
          libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_19, (MR_Integer) 451, &ll_backend__proc_gen__MiddleRec_20);
        }
#line 681 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__MiddleRec_20 == (MR_Integer) 1);
#line 681 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 682 "proc_gen.m"
          {
#line 682 "proc_gen.m"
            ll_backend__proc_gen__succeeded = ll_backend__middle_rec__match_and_generate_4_p_0(ll_backend__proc_gen__Goal_3, &ll_backend__proc_gen__MiddleRecCode_21, ll_backend__proc_gen__STATE_VARIABLE_CI_0_9, &ll_backend__proc_gen__STATE_VARIABLE_CI_36_36);
          }
#line 687 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 684 "proc_gen.m"
          {
#line 684 "proc_gen.m"
            *ll_backend__proc_gen__STATE_VARIABLE_CI_10 = ll_backend__proc_gen__STATE_VARIABLE_CI_36_36;
#line 684 "proc_gen.m"
            *ll_backend__proc_gen__Code_6 = ll_backend__proc_gen__MiddleRecCode_21;
#line 685 "proc_gen.m"
            *ll_backend__proc_gen__MaybeTraceCallLabel_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 686 "proc_gen.m"
            *ll_backend__proc_gen__FrameInfo_8 = (MR_Word) &ll_backend__proc_gen_scalar_common_2[5];
#line 684 "proc_gen.m"
          }
#line 687 "proc_gen.m"
        else
#line 688 "proc_gen.m"
          {
#line 688 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TypeCtorInfo_246_246;
#line 688 "proc_gen.m"
            MR_Word ll_backend__proc_gen__MaybeTraceInfo_22;
#line 688 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TraceCallCode_24;
#line 688 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TailRecLabelCode_28;
#line 688 "proc_gen.m"
            MR_Word ll_backend__proc_gen__BodyCode_29;
#line 688 "proc_gen.m"
            MR_Word ll_backend__proc_gen__EntryCode_30;
#line 688 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ExitCode_32;
#line 688 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_40_40;
#line 688 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_46_46;
#line 688 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_50_50;
#line 688 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_51_51;
#line 688 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_52_52;
#line 713 "proc_gen.m"
            MR_Word ll_backend__proc_gen__V_31_31;

#line 688 "proc_gen.m"
            {
#line 688 "proc_gen.m"
              ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_9, &ll_backend__proc_gen__MaybeTraceInfo_22);
            }
#line 704 "proc_gen.m"
            if ((ll_backend__proc_gen__MaybeTraceInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "proc_gen.m"
              {
#line 705 "proc_gen.m"
                MR_Word ll_backend__proc_gen__TypeCtorInfo_245_245;

#line 706 "proc_gen.m"
                *ll_backend__proc_gen__MaybeTraceCallLabel_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5330 "ll_backend.proc_gen.c"
                ll_backend__proc_gen__TypeCtorInfo_245_245 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 707 "proc_gen.m"
                {
#line 707 "proc_gen.m"
                  ll_backend__proc_gen__TraceCallCode_24 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_245_245);
                }
#line 708 "proc_gen.m"
                {
#line 708 "proc_gen.m"
                  ll_backend__proc_gen__TailRecLabelCode_28 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_245_245);
                }
#line 708 "proc_gen.m"
                ll_backend__proc_gen__STATE_VARIABLE_CI_40_40 = ll_backend__proc_gen__STATE_VARIABLE_CI_0_9;
#line 705 "proc_gen.m"
              }
#line 704 "proc_gen.m"
            else
#line 690 "proc_gen.m"
              {
#line 690 "proc_gen.m"
                MR_Word ll_backend__proc_gen__TraceInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_22, (MR_Integer) 0)));
#line 690 "proc_gen.m"
                MR_Word ll_backend__proc_gen__MaybeTailRecInfo_25;

#line 691 "proc_gen.m"
                {
#line 691 "proc_gen.m"
                  ll_backend__proc_gen__generate_call_event_6_p_0(ll_backend__proc_gen__TraceInfo_23, ll_backend__proc_gen__ProcContext_2, ll_backend__proc_gen__MaybeTraceCallLabel_7, &ll_backend__proc_gen__TraceCallCode_24, ll_backend__proc_gen__STATE_VARIABLE_CI_0_9, &ll_backend__proc_gen__STATE_VARIABLE_CI_40_40);
                }
#line 693 "proc_gen.m"
                {
#line 693 "proc_gen.m"
                  ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(ll_backend__proc_gen__TraceInfo_23, &ll_backend__proc_gen__MaybeTailRecInfo_25);
                }
#line 700 "proc_gen.m"
                if ((ll_backend__proc_gen__MaybeTailRecInfo_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "proc_gen.m"
                  {
#line 702 "proc_gen.m"
                    {
#line 702 "proc_gen.m"
                      ll_backend__proc_gen__TailRecLabelCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
#line 701 "proc_gen.m"
                  }
#line 700 "proc_gen.m"
                else
#line 695 "proc_gen.m"
                  {
#line 695 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__TailRecLabel_27;
#line 695 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTailRecInfo_25, (MR_Integer) 0)));
#line 695 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_42_42;
#line 695 "proc_gen.m"
                    MR_Word ll_backend__proc_gen__V_43_43;
#line 695 "proc_gen.m"
                    MR_Word ll_backend__proc_gen___TailRecLval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_41_41, (MR_Integer) 0)));

#line 695 "proc_gen.m"
                    ll_backend__proc_gen__TailRecLabel_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_41_41, (MR_Integer) 1)));
#line 697 "proc_gen.m"
                    {
#line 697 "proc_gen.m"
                      ll_backend__proc_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 697 "proc_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_43_43, 1) = ((MR_Box) (ll_backend__proc_gen__TailRecLabel_27));
#line 697 "proc_gen.m"
                    }
#line 696 "proc_gen.m"
                    {
#line 696 "proc_gen.m"
                      ll_backend__proc_gen__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 696 "proc_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_42_42, 0) = ((MR_Box) (ll_backend__proc_gen__V_43_43));
#line 696 "proc_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_42_42, 1) = ((MR_Box) ((MR_String) "tail recursion label, nofulljump"));
#line 696 "proc_gen.m"
                    }
#line 696 "proc_gen.m"
                    {
#line 696 "proc_gen.m"
                      ll_backend__proc_gen__TailRecLabelCode_28 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__proc_gen__V_42_42)));
                    }
#line 695 "proc_gen.m"
                  }
#line 690 "proc_gen.m"
              }
#line 710 "proc_gen.m"
            {
#line 710 "proc_gen.m"
              ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 0, ll_backend__proc_gen__Goal_3, &ll_backend__proc_gen__BodyCode_29, ll_backend__proc_gen__STATE_VARIABLE_CI_40_40, &ll_backend__proc_gen__STATE_VARIABLE_CI_46_46);
            }
#line 711 "proc_gen.m"
            {
#line 711 "proc_gen.m"
              ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_46_46, (MR_Integer) 0, ll_backend__proc_gen__Goal_3, ll_backend__proc_gen__ResumePoint_4, ll_backend__proc_gen__FrameInfo_8, &ll_backend__proc_gen__EntryCode_30);
            }
#line 713 "proc_gen.m"
            {
#line 713 "proc_gen.m"
              ll_backend__proc_gen__generate_exit_8_p_0((MR_Integer) 0, *ll_backend__proc_gen__FrameInfo_8, ll_backend__proc_gen__TraceSlotInfo_5, ll_backend__proc_gen__ProcContext_2, &ll_backend__proc_gen__V_31_31, &ll_backend__proc_gen__ExitCode_32, ll_backend__proc_gen__STATE_VARIABLE_CI_46_46, ll_backend__proc_gen__STATE_VARIABLE_CI_10);
            }
#line 5437 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__TypeCtorInfo_246_246 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 715 "proc_gen.m"
            {
#line 715 "proc_gen.m"
              ll_backend__proc_gen__V_52_52 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_246_246, ll_backend__proc_gen__BodyCode_29, ll_backend__proc_gen__ExitCode_32);
            }
#line 715 "proc_gen.m"
            {
#line 715 "proc_gen.m"
              ll_backend__proc_gen__V_51_51 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_246_246, ll_backend__proc_gen__TailRecLabelCode_28, ll_backend__proc_gen__V_52_52);
            }
#line 715 "proc_gen.m"
            {
#line 715 "proc_gen.m"
              ll_backend__proc_gen__V_50_50 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_246_246, ll_backend__proc_gen__TraceCallCode_24, ll_backend__proc_gen__V_51_51);
            }
#line 715 "proc_gen.m"
            {
#line 715 "proc_gen.m"
              *ll_backend__proc_gen__Code_6 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_246_246, ll_backend__proc_gen__EntryCode_30, ll_backend__proc_gen__V_50_50);
            }
#line 688 "proc_gen.m"
          }
#line 676 "proc_gen.m"
      }
#line 676 "proc_gen.m"
    else
#line 676 "proc_gen.m"
      if ((ll_backend__proc_gen__HeadVar__1_1 == (MR_Integer) 2))
#line 780 "proc_gen.m"
        {
#line 780 "proc_gen.m"
          MR_Word ll_backend__proc_gen__MaybeTraceInfo_150;

#line 781 "proc_gen.m"
          {
#line 781 "proc_gen.m"
            ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_9, &ll_backend__proc_gen__MaybeTraceInfo_150);
          }
#line 840 "proc_gen.m"
          if ((ll_backend__proc_gen__MaybeTraceInfo_150 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 841 "proc_gen.m"
            {
#line 841 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TypeCtorInfo_257_257;
#line 841 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_177_177;
#line 841 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_181_181;
#line 841 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_230;
#line 841 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_231;
#line 841 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_232;
#line 846 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_173_173;

#line 842 "proc_gen.m"
              *ll_backend__proc_gen__MaybeTraceCallLabel_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 843 "proc_gen.m"
              {
#line 843 "proc_gen.m"
                ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 2, ll_backend__proc_gen__Goal_3, &ll_backend__proc_gen__BodyCode_230, ll_backend__proc_gen__STATE_VARIABLE_CI_0_9, &ll_backend__proc_gen__STATE_VARIABLE_CI_177_177);
              }
#line 844 "proc_gen.m"
              {
#line 844 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_177_177, (MR_Integer) 2, ll_backend__proc_gen__Goal_3, ll_backend__proc_gen__ResumePoint_4, ll_backend__proc_gen__FrameInfo_8, &ll_backend__proc_gen__EntryCode_231);
              }
#line 846 "proc_gen.m"
              {
#line 846 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_8_p_0((MR_Integer) 2, *ll_backend__proc_gen__FrameInfo_8, ll_backend__proc_gen__TraceSlotInfo_5, ll_backend__proc_gen__ProcContext_2, &ll_backend__proc_gen__V_173_173, &ll_backend__proc_gen__ExitCode_232, ll_backend__proc_gen__STATE_VARIABLE_CI_177_177, ll_backend__proc_gen__STATE_VARIABLE_CI_10);
              }
#line 5513 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__TypeCtorInfo_257_257 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 848 "proc_gen.m"
              {
#line 848 "proc_gen.m"
                ll_backend__proc_gen__V_181_181 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_257_257, ll_backend__proc_gen__BodyCode_230, ll_backend__proc_gen__ExitCode_232);
              }
#line 848 "proc_gen.m"
              {
#line 848 "proc_gen.m"
                *ll_backend__proc_gen__Code_6 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_257_257, ll_backend__proc_gen__EntryCode_231, ll_backend__proc_gen__V_181_181);
              }
#line 841 "proc_gen.m"
            }
#line 840 "proc_gen.m"
          else
#line 783 "proc_gen.m"
            {
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TypeCtorInfo_256_256;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceInfo_151 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_150, (MR_Integer) 0)));
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceCallCode_152;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeTailRecInfo_153;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_154;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_155;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_157;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeCode_158;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeVarList_159;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeVars_160;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeFailExternalInfo_161;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceFailCode_165;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__DiscardTraceTicketCode_171;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__FailCode_172;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_182_182;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_183_183;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_189_189;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_192_192;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_193_193;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_194_194;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_196_196;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_224_224;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_225_225;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_226_226;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_227_227;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_228_228;
#line 783 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_229_229;
#line 792 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_156_156;
#line 832 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_233_233;
#line 810 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_197_197;
#line 810 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_234_234;
#line 810 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_235_235;
#line 810 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_236_236;
#line 810 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_237_237;
#line 810 "proc_gen.m"
              MR_Integer ll_backend__proc_gen__V_166_166;

#line 784 "proc_gen.m"
              {
#line 784 "proc_gen.m"
                ll_backend__proc_gen__generate_call_event_6_p_0(ll_backend__proc_gen__TraceInfo_151, ll_backend__proc_gen__ProcContext_2, ll_backend__proc_gen__MaybeTraceCallLabel_7, &ll_backend__proc_gen__TraceCallCode_152, ll_backend__proc_gen__STATE_VARIABLE_CI_0_9, &ll_backend__proc_gen__STATE_VARIABLE_CI_182_182);
              }
#line 786 "proc_gen.m"
              {
#line 786 "proc_gen.m"
                ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(ll_backend__proc_gen__TraceInfo_151, &ll_backend__proc_gen__MaybeTailRecInfo_153);
              }
#line 787 "proc_gen.m"
              {
#line 787 "proc_gen.m"
                ll_backend__proc_gen__V_183_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 787 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_183_183, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[1]));
#line 787 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_183_183, 1) = ((MR_Box) (ll_backend__proc_gen__generate_category_code_10_p_0_1));
#line 787 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_183_183, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 787 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_183_183, 3) = ((MR_Box) (ll_backend__proc_gen__MaybeTailRecInfo_153));
#line 787 "proc_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_183_183, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "proc_gen.m"
              }
#line 787 "proc_gen.m"
              {
#line 787 "proc_gen.m"
                mercury__require__expect_4_p_0(ll_backend__proc_gen__V_183_183, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_category_code\'/10", (MR_String) "tail recursive call in model_non code");
              }
#line 789 "proc_gen.m"
              {
#line 789 "proc_gen.m"
                ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 2, ll_backend__proc_gen__Goal_3, &ll_backend__proc_gen__BodyCode_154, ll_backend__proc_gen__STATE_VARIABLE_CI_182_182, &ll_backend__proc_gen__STATE_VARIABLE_CI_189_189);
              }
#line 790 "proc_gen.m"
              {
#line 790 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_189_189, (MR_Integer) 2, ll_backend__proc_gen__Goal_3, ll_backend__proc_gen__ResumePoint_4, ll_backend__proc_gen__FrameInfo_8, &ll_backend__proc_gen__EntryCode_155);
              }
#line 792 "proc_gen.m"
              {
#line 792 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_8_p_0((MR_Integer) 2, *ll_backend__proc_gen__FrameInfo_8, ll_backend__proc_gen__TraceSlotInfo_5, ll_backend__proc_gen__ProcContext_2, &ll_backend__proc_gen__V_156_156, &ll_backend__proc_gen__ExitCode_157, ll_backend__proc_gen__STATE_VARIABLE_CI_189_189, &ll_backend__proc_gen__STATE_VARIABLE_CI_192_192);
              }
#line 795 "proc_gen.m"
              {
#line 795 "proc_gen.m"
                ll_backend__code_info__generate_resume_point_4_p_0(ll_backend__proc_gen__ResumePoint_4, &ll_backend__proc_gen__ResumeCode_158, ll_backend__proc_gen__STATE_VARIABLE_CI_192_192, &ll_backend__proc_gen__STATE_VARIABLE_CI_193_193);
              }
#line 796 "proc_gen.m"
              {
#line 796 "proc_gen.m"
                ll_backend__code_info__resume_point_vars_2_p_0(ll_backend__proc_gen__ResumePoint_4, &ll_backend__proc_gen__ResumeVarList_159);
              }
#line 797 "proc_gen.m"
              {
#line 797 "proc_gen.m"
                ll_backend__proc_gen__ResumeVars_160 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__proc_gen__ResumeVarList_159);
              }
#line 798 "proc_gen.m"
              {
#line 798 "proc_gen.m"
                ll_backend__code_info__set_forward_live_vars_3_p_0(ll_backend__proc_gen__ResumeVars_160, ll_backend__proc_gen__STATE_VARIABLE_CI_193_193, &ll_backend__proc_gen__STATE_VARIABLE_CI_194_194);
              }
#line 801 "proc_gen.m"
              {
#line 801 "proc_gen.m"
                ll_backend__trace_gen__generate_external_event_code_6_p_0((MR_Integer) 2, ll_backend__proc_gen__TraceInfo_151, ll_backend__proc_gen__ProcContext_2, &ll_backend__proc_gen__MaybeFailExternalInfo_161, ll_backend__proc_gen__STATE_VARIABLE_CI_194_194, &ll_backend__proc_gen__STATE_VARIABLE_CI_196_196);
              }
#line 806 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeFailExternalInfo_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 807 "proc_gen.m"
                {
#line 808 "proc_gen.m"
                  {
#line 808 "proc_gen.m"
                    ll_backend__proc_gen__TraceFailCode_165 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 807 "proc_gen.m"
                }
#line 806 "proc_gen.m"
              else
#line 804 "proc_gen.m"
                {
#line 804 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__FailExternalInfo_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeFailExternalInfo_161, (MR_Integer) 0)));
#line 805 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_162, (MR_Integer) 0)));
#line 805 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_162, (MR_Integer) 1)));

#line 805 "proc_gen.m"
                  ll_backend__proc_gen__TraceFailCode_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_162, (MR_Integer) 2)));
#line 804 "proc_gen.m"
                }
#line 810 "proc_gen.m"
              ll_backend__proc_gen__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_5, (MR_Integer) 0)));
#line 810 "proc_gen.m"
              ll_backend__proc_gen__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_5, (MR_Integer) 1)));
#line 810 "proc_gen.m"
              ll_backend__proc_gen__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_5, (MR_Integer) 2)));
#line 810 "proc_gen.m"
              ll_backend__proc_gen__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_5, (MR_Integer) 3)));
#line 810 "proc_gen.m"
              ll_backend__proc_gen__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_5, (MR_Integer) 4)));
#line 810 "proc_gen.m"
              ll_backend__proc_gen__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TraceSlotInfo_5, (MR_Integer) 5)));
#line 810 "proc_gen.m"
              ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__V_197_197)) == (MR_mktag((MR_Integer) 1)));
#line 810 "proc_gen.m"
              if (ll_backend__proc_gen__succeeded)
#line 810 "proc_gen.m"
                {
#line 810 "proc_gen.m"
                  ll_backend__proc_gen__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_197_197, (MR_Integer) 0)));
#line 826 "proc_gen.m"
                  if ((ll_backend__proc_gen__V_233_233 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 827 "proc_gen.m"
                    {
#line 828 "proc_gen.m"
                      {
#line 828 "proc_gen.m"
                        ll_backend__proc_gen__DiscardTraceTicketCode_171 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[25])));
                      }
#line 829 "proc_gen.m"
                      *ll_backend__proc_gen__STATE_VARIABLE_CI_10 = ll_backend__proc_gen__STATE_VARIABLE_CI_196_196;
#line 827 "proc_gen.m"
                    }
#line 826 "proc_gen.m"
                  else
#line 813 "proc_gen.m"
                    {
#line 813 "proc_gen.m"
                      MR_Integer ll_backend__proc_gen__FromFullSlot_168 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_233_233, (MR_Integer) 0)));
#line 813 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__FromFullSlotLval_169;
#line 813 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__SkipLabel_170;
#line 813 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_203_203;
#line 813 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_204_204;
#line 813 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_205_205;
#line 813 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_206_206;
#line 813 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_208_208;
#line 813 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_209_209;
#line 813 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_211_211;
#line 813 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_215_215;
#line 813 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_216_216;
#line 813 "proc_gen.m"
                      MR_Word ll_backend__proc_gen__V_217_217;

#line 816 "proc_gen.m"
                      {
#line 816 "proc_gen.m"
                        ll_backend__proc_gen__FromFullSlotLval_169 = ll_backend__llds__stack_slot_num_to_lval_2_f_0((MR_Integer) 1, ll_backend__proc_gen__FromFullSlot_168);
                      }
#line 818 "proc_gen.m"
                      {
#line 818 "proc_gen.m"
                        ll_backend__code_info__get_next_label_3_p_0(&ll_backend__proc_gen__SkipLabel_170, ll_backend__proc_gen__STATE_VARIABLE_CI_196_196, ll_backend__proc_gen__STATE_VARIABLE_CI_10);
                      }
#line 821 "proc_gen.m"
                      {
#line 821 "proc_gen.m"
                        ll_backend__proc_gen__V_208_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 821 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_208_208, 0) = ((MR_Box) (ll_backend__proc_gen__FromFullSlotLval_169));
#line 821 "proc_gen.m"
                      }
#line 821 "proc_gen.m"
                      {
#line 821 "proc_gen.m"
                        ll_backend__proc_gen__V_206_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 821 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_206_206, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 821 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_206_206, 1) = ((MR_Box) ((MR_Integer) 7));
#line 821 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_206_206, 2) = ((MR_Box) (ll_backend__proc_gen__V_208_208));
#line 821 "proc_gen.m"
                      }
#line 821 "proc_gen.m"
                      {
#line 821 "proc_gen.m"
                        ll_backend__proc_gen__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 821 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_209_209, 0) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_170));
#line 821 "proc_gen.m"
                      }
#line 820 "proc_gen.m"
                      {
#line 820 "proc_gen.m"
                        ll_backend__proc_gen__V_205_205 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 820 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_205_205, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 820 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_205_205, 1) = ((MR_Box) (ll_backend__proc_gen__V_206_206));
#line 820 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_205_205, 2) = ((MR_Box) (ll_backend__proc_gen__V_209_209));
#line 820 "proc_gen.m"
                      }
#line 822 "proc_gen.m"
                      {
#line 822 "proc_gen.m"
                        ll_backend__proc_gen__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 822 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_204_204, 0) = ((MR_Box) (ll_backend__proc_gen__V_205_205));
#line 822 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_204_204, 1) = ((MR_Box) ((MR_String) ""));
#line 822 "proc_gen.m"
                      }
#line 824 "proc_gen.m"
                      {
#line 824 "proc_gen.m"
                        ll_backend__proc_gen__V_217_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_217_217, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 824 "proc_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_217_217, 1) = ((MR_Box) (ll_backend__proc_gen__SkipLabel_170));
#line 824 "proc_gen.m"
                      }
#line 825 "proc_gen.m"
                      {
#line 825 "proc_gen.m"
                        ll_backend__proc_gen__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 825 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_216_216, 0) = ((MR_Box) (ll_backend__proc_gen__V_217_217));
#line 825 "proc_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_216_216, 1) = ((MR_Box) ((MR_String) ""));
#line 825 "proc_gen.m"
                      }
#line 823 "proc_gen.m"
                      {
#line 823 "proc_gen.m"
                        ll_backend__proc_gen__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_215_215, 0) = ((MR_Box) (ll_backend__proc_gen__V_216_216));
#line 823 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_215_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "proc_gen.m"
                      }
#line 822 "proc_gen.m"
                      {
#line 822 "proc_gen.m"
                        ll_backend__proc_gen__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_211_211, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[25]));
#line 822 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_211_211, 1) = ((MR_Box) (ll_backend__proc_gen__V_215_215));
#line 822 "proc_gen.m"
                      }
#line 819 "proc_gen.m"
                      {
#line 819 "proc_gen.m"
                        ll_backend__proc_gen__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_203_203, 0) = ((MR_Box) (ll_backend__proc_gen__V_204_204));
#line 819 "proc_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_203_203, 1) = ((MR_Box) (ll_backend__proc_gen__V_211_211));
#line 819 "proc_gen.m"
                      }
#line 819 "proc_gen.m"
                      {
#line 819 "proc_gen.m"
                        ll_backend__proc_gen__DiscardTraceTicketCode_171 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__proc_gen__V_203_203);
                      }
#line 813 "proc_gen.m"
                    }
#line 810 "proc_gen.m"
                }
#line 810 "proc_gen.m"
              else
#line 833 "proc_gen.m"
                {
#line 833 "proc_gen.m"
                  {
#line 833 "proc_gen.m"
                    ll_backend__proc_gen__DiscardTraceTicketCode_171 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 833 "proc_gen.m"
                  *ll_backend__proc_gen__STATE_VARIABLE_CI_10 = ll_backend__proc_gen__STATE_VARIABLE_CI_196_196;
#line 833 "proc_gen.m"
                }
#line 5895 "ll_backend.proc_gen.c"
              ll_backend__proc_gen__TypeCtorInfo_256_256 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 835 "proc_gen.m"
              {
#line 835 "proc_gen.m"
                ll_backend__proc_gen__FailCode_172 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_256_256, ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[27])));
              }
#line 839 "proc_gen.m"
              {
#line 839 "proc_gen.m"
                ll_backend__proc_gen__V_229_229 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_256_256, ll_backend__proc_gen__DiscardTraceTicketCode_171, ll_backend__proc_gen__FailCode_172);
              }
#line 839 "proc_gen.m"
              {
#line 839 "proc_gen.m"
                ll_backend__proc_gen__V_228_228 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_256_256, ll_backend__proc_gen__TraceFailCode_165, ll_backend__proc_gen__V_229_229);
              }
#line 838 "proc_gen.m"
              {
#line 838 "proc_gen.m"
                ll_backend__proc_gen__V_227_227 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_256_256, ll_backend__proc_gen__ResumeCode_158, ll_backend__proc_gen__V_228_228);
              }
#line 838 "proc_gen.m"
              {
#line 838 "proc_gen.m"
                ll_backend__proc_gen__V_226_226 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_256_256, ll_backend__proc_gen__ExitCode_157, ll_backend__proc_gen__V_227_227);
              }
#line 838 "proc_gen.m"
              {
#line 838 "proc_gen.m"
                ll_backend__proc_gen__V_225_225 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_256_256, ll_backend__proc_gen__BodyCode_154, ll_backend__proc_gen__V_226_226);
              }
#line 838 "proc_gen.m"
              {
#line 838 "proc_gen.m"
                ll_backend__proc_gen__V_224_224 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_256_256, ll_backend__proc_gen__TraceCallCode_152, ll_backend__proc_gen__V_225_225);
              }
#line 838 "proc_gen.m"
              {
#line 838 "proc_gen.m"
                *ll_backend__proc_gen__Code_6 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_256_256, ll_backend__proc_gen__EntryCode_155, ll_backend__proc_gen__V_224_224);
              }
#line 783 "proc_gen.m"
            }
#line 780 "proc_gen.m"
        }
#line 676 "proc_gen.m"
      else
#line 720 "proc_gen.m"
        {
#line 720 "proc_gen.m"
          MR_Word ll_backend__proc_gen__TypeCtorInfo_248_248;
#line 720 "proc_gen.m"
          MR_Word ll_backend__proc_gen__FailureLiveRegs_61;
#line 720 "proc_gen.m"
          MR_Word ll_backend__proc_gen__FailCode_62;
#line 720 "proc_gen.m"
          MR_Word ll_backend__proc_gen__MaybeTraceInfo_63;
#line 720 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_87_87;
#line 720 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_96_96;
#line 720 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_97_97;
#line 720 "proc_gen.m"
          MR_Word ll_backend__proc_gen__V_98_98;

#line 721 "proc_gen.m"
          {
#line 721 "proc_gen.m"
            ll_backend__proc_gen__FailureLiveRegs_61 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[9]))));
          }
#line 5967 "ll_backend.proc_gen.c"
          ll_backend__proc_gen__TypeCtorInfo_248_248 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 724 "proc_gen.m"
          {
#line 724 "proc_gen.m"
            ll_backend__proc_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 724 "proc_gen.m"
            MR_hl_field(MR_mktag(2), ll_backend__proc_gen__V_98_98, 0) = ((MR_Box) (ll_backend__proc_gen__FailureLiveRegs_61));
#line 724 "proc_gen.m"
          }
#line 724 "proc_gen.m"
          {
#line 724 "proc_gen.m"
            ll_backend__proc_gen__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 724 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_97_97, 0) = ((MR_Box) (ll_backend__proc_gen__V_98_98));
#line 724 "proc_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_97_97, 1) = ((MR_Box) ((MR_String) ""));
#line 724 "proc_gen.m"
          }
#line 723 "proc_gen.m"
          {
#line 723 "proc_gen.m"
            ll_backend__proc_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_96_96, 0) = ((MR_Box) (ll_backend__proc_gen__V_97_97));
#line 723 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__proc_gen_scalar_common_1[13])));
#line 723 "proc_gen.m"
          }
#line 722 "proc_gen.m"
          {
#line 722 "proc_gen.m"
            ll_backend__proc_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_87_87, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_1[10]));
#line 722 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_87_87, 1) = ((MR_Box) (ll_backend__proc_gen__V_96_96));
#line 722 "proc_gen.m"
          }
#line 722 "proc_gen.m"
          {
#line 722 "proc_gen.m"
            ll_backend__proc_gen__FailCode_62 = mercury__cord__from_list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__V_87_87);
          }
#line 727 "proc_gen.m"
          {
#line 727 "proc_gen.m"
            ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_0_9, &ll_backend__proc_gen__MaybeTraceInfo_63);
          }
#line 766 "proc_gen.m"
          if ((ll_backend__proc_gen__MaybeTraceInfo_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 767 "proc_gen.m"
            {
#line 767 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_107_107;
#line 767 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_110_110;
#line 767 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_112_112;
#line 767 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_113_113;
#line 767 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_114_114;
#line 767 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_115_115;
#line 767 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_137;
#line 767 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_138;
#line 767 "proc_gen.m"
              MR_Word ll_backend__proc_gen__RestoreDeallocCode_139;
#line 767 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_140;
#line 767 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeCode_141;

#line 768 "proc_gen.m"
              *ll_backend__proc_gen__MaybeTraceCallLabel_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 769 "proc_gen.m"
              {
#line 769 "proc_gen.m"
                ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 1, ll_backend__proc_gen__Goal_3, &ll_backend__proc_gen__BodyCode_137, ll_backend__proc_gen__STATE_VARIABLE_CI_0_9, &ll_backend__proc_gen__STATE_VARIABLE_CI_107_107);
              }
#line 770 "proc_gen.m"
              {
#line 770 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_107_107, (MR_Integer) 1, ll_backend__proc_gen__Goal_3, ll_backend__proc_gen__ResumePoint_4, ll_backend__proc_gen__FrameInfo_8, &ll_backend__proc_gen__EntryCode_138);
              }
#line 772 "proc_gen.m"
              {
#line 772 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_8_p_0((MR_Integer) 1, *ll_backend__proc_gen__FrameInfo_8, ll_backend__proc_gen__TraceSlotInfo_5, ll_backend__proc_gen__ProcContext_2, &ll_backend__proc_gen__RestoreDeallocCode_139, &ll_backend__proc_gen__ExitCode_140, ll_backend__proc_gen__STATE_VARIABLE_CI_107_107, &ll_backend__proc_gen__STATE_VARIABLE_CI_110_110);
              }
#line 774 "proc_gen.m"
              {
#line 774 "proc_gen.m"
                ll_backend__code_info__generate_resume_point_4_p_0(ll_backend__proc_gen__ResumePoint_4, &ll_backend__proc_gen__ResumeCode_141, ll_backend__proc_gen__STATE_VARIABLE_CI_110_110, ll_backend__proc_gen__STATE_VARIABLE_CI_10);
              }
#line 775 "proc_gen.m"
              {
#line 775 "proc_gen.m"
                ll_backend__proc_gen__V_115_115 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__RestoreDeallocCode_139, ll_backend__proc_gen__FailCode_62);
              }
#line 775 "proc_gen.m"
              {
#line 775 "proc_gen.m"
                ll_backend__proc_gen__V_114_114 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__ResumeCode_141, ll_backend__proc_gen__V_115_115);
              }
#line 775 "proc_gen.m"
              {
#line 775 "proc_gen.m"
                ll_backend__proc_gen__V_113_113 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__ExitCode_140, ll_backend__proc_gen__V_114_114);
              }
#line 775 "proc_gen.m"
              {
#line 775 "proc_gen.m"
                ll_backend__proc_gen__V_112_112 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__BodyCode_137, ll_backend__proc_gen__V_113_113);
              }
#line 775 "proc_gen.m"
              {
#line 775 "proc_gen.m"
                *ll_backend__proc_gen__Code_6 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__EntryCode_138, ll_backend__proc_gen__V_112_112);
              }
#line 767 "proc_gen.m"
            }
#line 766 "proc_gen.m"
          else
#line 729 "proc_gen.m"
            {
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceInfo_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTraceInfo_63, (MR_Integer) 0)));
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceCallCode_65;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeTailRecInfo_66;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TailRecLabelCode_69;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__BodyCode_70;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__EntryCode_71;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__RestoreDeallocCode_72;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ExitCode_73;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeCode_74;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeVarList_75;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__ResumeVars_76;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__MaybeFailExternalInfo_77;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__TraceFailCode_81;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_116_116;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_122_122;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_125_125;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_126_126;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_CI_127_127;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_130_130;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_131_131;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_132_132;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_133_133;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_134_134;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_135_135;
#line 729 "proc_gen.m"
              MR_Word ll_backend__proc_gen__V_136_136;

#line 730 "proc_gen.m"
              {
#line 730 "proc_gen.m"
                ll_backend__proc_gen__generate_call_event_6_p_0(ll_backend__proc_gen__TraceInfo_64, ll_backend__proc_gen__ProcContext_2, ll_backend__proc_gen__MaybeTraceCallLabel_7, &ll_backend__proc_gen__TraceCallCode_65, ll_backend__proc_gen__STATE_VARIABLE_CI_0_9, &ll_backend__proc_gen__STATE_VARIABLE_CI_116_116);
              }
#line 732 "proc_gen.m"
              {
#line 732 "proc_gen.m"
                ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(ll_backend__proc_gen__TraceInfo_64, &ll_backend__proc_gen__MaybeTailRecInfo_66);
              }
#line 738 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeTailRecInfo_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "proc_gen.m"
                {
#line 740 "proc_gen.m"
                  ll_backend__proc_gen__TailRecLabelCode_69 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248);
                }
#line 738 "proc_gen.m"
              else
#line 734 "proc_gen.m"
                {
#line 734 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__TailRecLabel_68;
#line 734 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTailRecInfo_66, (MR_Integer) 0)));
#line 734 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_118_118;
#line 734 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_119_119;
#line 734 "proc_gen.m"
                  MR_Word ll_backend__proc_gen___TailRecLval_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_117_117, (MR_Integer) 0)));

#line 734 "proc_gen.m"
                  ll_backend__proc_gen__TailRecLabel_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_117_117, (MR_Integer) 1)));
#line 736 "proc_gen.m"
                  {
#line 736 "proc_gen.m"
                    ll_backend__proc_gen__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 736 "proc_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__proc_gen__V_119_119, 1) = ((MR_Box) (ll_backend__proc_gen__TailRecLabel_68));
#line 736 "proc_gen.m"
                  }
#line 735 "proc_gen.m"
                  {
#line 735 "proc_gen.m"
                    ll_backend__proc_gen__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 735 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_118_118, 0) = ((MR_Box) (ll_backend__proc_gen__V_119_119));
#line 735 "proc_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_118_118, 1) = ((MR_Box) ((MR_String) "tail recursion label"));
#line 735 "proc_gen.m"
                  }
#line 735 "proc_gen.m"
                  {
#line 735 "proc_gen.m"
                    ll_backend__proc_gen__TailRecLabelCode_69 = mercury__cord__singleton_1_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ((MR_Box) (ll_backend__proc_gen__V_118_118)));
                  }
#line 734 "proc_gen.m"
                }
#line 742 "proc_gen.m"
              {
#line 742 "proc_gen.m"
                ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 1, ll_backend__proc_gen__Goal_3, &ll_backend__proc_gen__BodyCode_70, ll_backend__proc_gen__STATE_VARIABLE_CI_116_116, &ll_backend__proc_gen__STATE_VARIABLE_CI_122_122);
              }
#line 743 "proc_gen.m"
              {
#line 743 "proc_gen.m"
                ll_backend__proc_gen__generate_entry_6_p_0(ll_backend__proc_gen__STATE_VARIABLE_CI_122_122, (MR_Integer) 1, ll_backend__proc_gen__Goal_3, ll_backend__proc_gen__ResumePoint_4, ll_backend__proc_gen__FrameInfo_8, &ll_backend__proc_gen__EntryCode_71);
              }
#line 745 "proc_gen.m"
              {
#line 745 "proc_gen.m"
                ll_backend__proc_gen__generate_exit_8_p_0((MR_Integer) 1, *ll_backend__proc_gen__FrameInfo_8, ll_backend__proc_gen__TraceSlotInfo_5, ll_backend__proc_gen__ProcContext_2, &ll_backend__proc_gen__RestoreDeallocCode_72, &ll_backend__proc_gen__ExitCode_73, ll_backend__proc_gen__STATE_VARIABLE_CI_122_122, &ll_backend__proc_gen__STATE_VARIABLE_CI_125_125);
              }
#line 748 "proc_gen.m"
              {
#line 748 "proc_gen.m"
                ll_backend__code_info__generate_resume_point_4_p_0(ll_backend__proc_gen__ResumePoint_4, &ll_backend__proc_gen__ResumeCode_74, ll_backend__proc_gen__STATE_VARIABLE_CI_125_125, &ll_backend__proc_gen__STATE_VARIABLE_CI_126_126);
              }
#line 749 "proc_gen.m"
              {
#line 749 "proc_gen.m"
                ll_backend__code_info__resume_point_vars_2_p_0(ll_backend__proc_gen__ResumePoint_4, &ll_backend__proc_gen__ResumeVarList_75);
              }
#line 750 "proc_gen.m"
              {
#line 750 "proc_gen.m"
                ll_backend__proc_gen__ResumeVars_76 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__proc_gen__ResumeVarList_75);
              }
#line 751 "proc_gen.m"
              {
#line 751 "proc_gen.m"
                ll_backend__code_info__set_forward_live_vars_3_p_0(ll_backend__proc_gen__ResumeVars_76, ll_backend__proc_gen__STATE_VARIABLE_CI_126_126, &ll_backend__proc_gen__STATE_VARIABLE_CI_127_127);
              }
#line 754 "proc_gen.m"
              {
#line 754 "proc_gen.m"
                ll_backend__trace_gen__generate_external_event_code_6_p_0((MR_Integer) 2, ll_backend__proc_gen__TraceInfo_64, ll_backend__proc_gen__ProcContext_2, &ll_backend__proc_gen__MaybeFailExternalInfo_77, ll_backend__proc_gen__STATE_VARIABLE_CI_127_127, ll_backend__proc_gen__STATE_VARIABLE_CI_10);
              }
#line 759 "proc_gen.m"
              if ((ll_backend__proc_gen__MaybeFailExternalInfo_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "proc_gen.m"
                {
#line 761 "proc_gen.m"
                  ll_backend__proc_gen__TraceFailCode_81 = mercury__cord__empty_0_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248);
                }
#line 759 "proc_gen.m"
              else
#line 757 "proc_gen.m"
                {
#line 757 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__FailExternalInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeFailExternalInfo_77, (MR_Integer) 0)));
#line 758 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_78, (MR_Integer) 0)));
#line 758 "proc_gen.m"
                  MR_Word ll_backend__proc_gen__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_78, (MR_Integer) 1)));

#line 758 "proc_gen.m"
                  ll_backend__proc_gen__TraceFailCode_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FailExternalInfo_78, (MR_Integer) 2)));
#line 757 "proc_gen.m"
                }
#line 764 "proc_gen.m"
              {
#line 764 "proc_gen.m"
                ll_backend__proc_gen__V_136_136 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__RestoreDeallocCode_72, ll_backend__proc_gen__FailCode_62);
              }
#line 764 "proc_gen.m"
              {
#line 764 "proc_gen.m"
                ll_backend__proc_gen__V_135_135 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__TraceFailCode_81, ll_backend__proc_gen__V_136_136);
              }
#line 764 "proc_gen.m"
              {
#line 764 "proc_gen.m"
                ll_backend__proc_gen__V_134_134 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__ResumeCode_74, ll_backend__proc_gen__V_135_135);
              }
#line 764 "proc_gen.m"
              {
#line 764 "proc_gen.m"
                ll_backend__proc_gen__V_133_133 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__ExitCode_73, ll_backend__proc_gen__V_134_134);
              }
#line 763 "proc_gen.m"
              {
#line 763 "proc_gen.m"
                ll_backend__proc_gen__V_132_132 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__BodyCode_70, ll_backend__proc_gen__V_133_133);
              }
#line 763 "proc_gen.m"
              {
#line 763 "proc_gen.m"
                ll_backend__proc_gen__V_131_131 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__TailRecLabelCode_69, ll_backend__proc_gen__V_132_132);
              }
#line 763 "proc_gen.m"
              {
#line 763 "proc_gen.m"
                ll_backend__proc_gen__V_130_130 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__TraceCallCode_65, ll_backend__proc_gen__V_131_131);
              }
#line 763 "proc_gen.m"
              {
#line 763 "proc_gen.m"
                *ll_backend__proc_gen__Code_6 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_248_248, ll_backend__proc_gen__EntryCode_71, ll_backend__proc_gen__V_130_130);
              }
#line 729 "proc_gen.m"
            }
#line 720 "proc_gen.m"
        }
#line 676 "proc_gen.m"
  }
#line 671 "proc_gen.m"
}

#line 586 "proc_gen.m"
static MR_Word MR_CALL 
ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(
#line 586 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcInfo_4,
#line 586 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HLDSDeepInfo_5)
#line 586 "proc_gen.m"
{
#line 589 "proc_gen.m"
  {
#line 589 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 589 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeDeepProfInfo_6;
#line 589 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeHLDSDeepLayout_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepInfo_5, (MR_Integer) 1)));
#line 589 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepInfo_5, (MR_Integer) 2)));
#line 590 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepInfo_5, (MR_Integer) 0)));

#line 620 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeHLDSDeepLayout_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 622 "proc_gen.m"
      ll_backend__proc_gen__MaybeDeepProfInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "proc_gen.m"
    else
#line 592 "proc_gen.m"
      {
#line 592 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HLDSDeepLayout_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeHLDSDeepLayout_7, (MR_Integer) 0)));
#line 592 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HLDSProcStatic_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepLayout_8, (MR_Integer) 0)));
#line 592 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HLDSExcpVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSDeepLayout_8, (MR_Integer) 1)));
#line 592 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TopCSDVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSExcpVars_10, (MR_Integer) 0)));
#line 592 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MiddleCSDVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSExcpVars_10, (MR_Integer) 1)));
#line 592 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeOldOutermostVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__HLDSExcpVars_10, (MR_Integer) 2)));
#line 592 "proc_gen.m"
        MR_Word ll_backend__proc_gen__StackSlots_15;
#line 592 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__TopCSDSlotNum_17;
#line 592 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__MiddleCSDSlotNum_19;
#line 592 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__OldOutermostSlotNum_22;
#line 592 "proc_gen.m"
        MR_Word ll_backend__proc_gen__DeepExcpSlots_23;
#line 592 "proc_gen.m"
        MR_Word ll_backend__proc_gen__DeepProfInfo_24;
#line 610 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TopCSDSlot_16;
#line 598 "proc_gen.m"
        MR_Box ll_backend__proc_gen__conv0_TopCSDSlot_16;

#line 597 "proc_gen.m"
        {
#line 597 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__proc_gen__ProcInfo_4, &ll_backend__proc_gen__StackSlots_15);
        }
#line 598 "proc_gen.m"
        {
#line 598 "proc_gen.m"
          ll_backend__proc_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__proc_gen__StackSlots_15, ((MR_Box) (ll_backend__proc_gen__TopCSDVar_12)), &ll_backend__proc_gen__conv0_TopCSDSlot_16);
        }
#line 598 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 598 "proc_gen.m"
          {
#line 598 "proc_gen.m"
            ll_backend__proc_gen__TopCSDSlot_16 = ((MR_Word) ll_backend__proc_gen__conv0_TopCSDSlot_16);
#line 598 "proc_gen.m"
            ll_backend__proc_gen__succeeded = MR_TRUE;
#line 598 "proc_gen.m"
          }
#line 610 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 599 "proc_gen.m"
          {
#line 599 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TypeInfo_31_31;
#line 599 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TypeCtorInfo_32_32;
#line 599 "proc_gen.m"
            MR_Word ll_backend__proc_gen__MiddleCSDSlot_18;
#line 600 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv1_MiddleCSDSlot_18;

#line 599 "proc_gen.m"
            {
#line 599 "proc_gen.m"
              ll_backend__proc_gen__TopCSDSlotNum_17 = hlds__hlds_llds__stack_slot_num_1_f_0(ll_backend__proc_gen__TopCSDSlot_16);
            }
#line 6417 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__TypeInfo_31_31 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[0];
#line 6419 "ll_backend.proc_gen.c"
            ll_backend__proc_gen__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0;
#line 600 "proc_gen.m"
            {
#line 600 "proc_gen.m"
              mercury__map__lookup_3_p_0(ll_backend__proc_gen__TypeInfo_31_31, ll_backend__proc_gen__TypeCtorInfo_32_32, ll_backend__proc_gen__StackSlots_15, ((MR_Box) (ll_backend__proc_gen__MiddleCSDVar_13)), &ll_backend__proc_gen__conv1_MiddleCSDSlot_18);
            }
#line 600 "proc_gen.m"
            ll_backend__proc_gen__MiddleCSDSlot_18 = ((MR_Word) ll_backend__proc_gen__conv1_MiddleCSDSlot_18);
#line 601 "proc_gen.m"
            {
#line 601 "proc_gen.m"
              ll_backend__proc_gen__MiddleCSDSlotNum_19 = hlds__hlds_llds__stack_slot_num_1_f_0(ll_backend__proc_gen__MiddleCSDSlot_18);
            }
#line 606 "proc_gen.m"
            if ((ll_backend__proc_gen__MaybeOldOutermostVar_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 608 "proc_gen.m"
              ll_backend__proc_gen__OldOutermostSlotNum_22 = (MR_Integer) -1;
#line 606 "proc_gen.m"
            else
#line 603 "proc_gen.m"
              {
#line 603 "proc_gen.m"
                MR_Word ll_backend__proc_gen__OldOutermostVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeOldOutermostVar_14, (MR_Integer) 0)));
#line 603 "proc_gen.m"
                MR_Word ll_backend__proc_gen__OldOutermostSlot_21;
#line 604 "proc_gen.m"
                MR_Box ll_backend__proc_gen__conv2_OldOutermostSlot_21;

#line 604 "proc_gen.m"
                {
#line 604 "proc_gen.m"
                  mercury__map__lookup_3_p_0(ll_backend__proc_gen__TypeInfo_31_31, ll_backend__proc_gen__TypeCtorInfo_32_32, ll_backend__proc_gen__StackSlots_15, ((MR_Box) (ll_backend__proc_gen__OldOutermostVar_20)), &ll_backend__proc_gen__conv2_OldOutermostSlot_21);
                }
#line 604 "proc_gen.m"
                ll_backend__proc_gen__OldOutermostSlot_21 = ((MR_Word) ll_backend__proc_gen__conv2_OldOutermostSlot_21);
#line 605 "proc_gen.m"
                {
#line 605 "proc_gen.m"
                  ll_backend__proc_gen__OldOutermostSlotNum_22 = hlds__hlds_llds__stack_slot_num_1_f_0(ll_backend__proc_gen__OldOutermostSlot_21);
                }
#line 603 "proc_gen.m"
              }
#line 599 "proc_gen.m"
          }
#line 610 "proc_gen.m"
        else
#line 611 "proc_gen.m"
          {
#line 611 "proc_gen.m"
            ll_backend__proc_gen__TopCSDSlotNum_17 = (MR_Integer) -1;
#line 612 "proc_gen.m"
            ll_backend__proc_gen__MiddleCSDSlotNum_19 = (MR_Integer) -1;
#line 613 "proc_gen.m"
            ll_backend__proc_gen__OldOutermostSlotNum_22 = (MR_Integer) -1;
#line 611 "proc_gen.m"
          }
#line 615 "proc_gen.m"
        {
#line 615 "proc_gen.m"
          ll_backend__proc_gen__DeepExcpSlots_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 615 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepExcpSlots_23, 0) = ((MR_Box) (ll_backend__proc_gen__TopCSDSlotNum_17));
#line 615 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepExcpSlots_23, 1) = ((MR_Box) (ll_backend__proc_gen__MiddleCSDSlotNum_19));
#line 615 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepExcpSlots_23, 2) = ((MR_Box) (ll_backend__proc_gen__OldOutermostSlotNum_22));
#line 615 "proc_gen.m"
        }
#line 617 "proc_gen.m"
        {
#line 617 "proc_gen.m"
          ll_backend__proc_gen__DeepProfInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 617 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepProfInfo_24, 0) = ((MR_Box) (ll_backend__proc_gen__HLDSProcStatic_9));
#line 617 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepProfInfo_24, 1) = ((MR_Box) (ll_backend__proc_gen__DeepExcpSlots_23));
#line 617 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__DeepProfInfo_24, 2) = ((MR_Box) (ll_backend__proc_gen__V_26_26));
#line 617 "proc_gen.m"
        }
#line 619 "proc_gen.m"
        {
#line 619 "proc_gen.m"
          ll_backend__proc_gen__MaybeDeepProfInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 619 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeDeepProfInfo_6, 0) = ((MR_Box) (ll_backend__proc_gen__DeepProfInfo_24));
#line 619 "proc_gen.m"
        }
#line 592 "proc_gen.m"
      }
#line 589 "proc_gen.m"
    return ll_backend__proc_gen__MaybeDeepProfInfo_6;
#line 589 "proc_gen.m"
  }
#line 586 "proc_gen.m"
}

#line 558 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__maybe_set_trace_level_3_p_0(
#line 558 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_4,
#line 558 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_14,
#line 558 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_15)
#line 558 "proc_gen.m"
{
#line 561 "proc_gen.m"
  {
#line 561 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 561 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Globals0_6;
#line 564 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredModule_7;
#line 564 "proc_gen.m"
    MR_String ll_backend__proc_gen__PredName_8;
#line 564 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__PredArity_9;

#line 562 "proc_gen.m"
    {
#line 562 "proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_14, &ll_backend__proc_gen__Globals0_6);
    }
#line 564 "proc_gen.m"
    {
#line 564 "proc_gen.m"
      ll_backend__proc_gen__PredModule_7 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__proc_gen__PredInfo_4);
    }
#line 565 "proc_gen.m"
    {
#line 565 "proc_gen.m"
      ll_backend__proc_gen__PredName_8 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_4);
    }
#line 566 "proc_gen.m"
    {
#line 566 "proc_gen.m"
      ll_backend__proc_gen__PredArity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_4);
    }
#line 567 "proc_gen.m"
    {
#line 567 "proc_gen.m"
      ll_backend__proc_gen__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(ll_backend__proc_gen__PredModule_7, ll_backend__proc_gen__PredName_8, ll_backend__proc_gen__PredArity_9);
    }
#line 575 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 573 "proc_gen.m"
      {
#line 573 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Globals1_10;

#line 573 "proc_gen.m"
        {
#line 573 "proc_gen.m"
          libs__globals__set_trace_level_none_2_p_0(ll_backend__proc_gen__Globals0_6, &ll_backend__proc_gen__Globals1_10);
        }
#line 574 "proc_gen.m"
        {
#line 574 "proc_gen.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(ll_backend__proc_gen__Globals1_10, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_14, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_15);
#line 574 "proc_gen.m"
          return;
        }
#line 573 "proc_gen.m"
      }
#line 575 "proc_gen.m"
    else
#line 582 "proc_gen.m"
      {
#line 582 "proc_gen.m"
        MR_Word ll_backend__proc_gen__UC_TraceLevel_13;
#line 576 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceLevel_12;
#line 576 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_21_21;
#line 576 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_23_23;

#line 576 "proc_gen.m"
        {
#line 576 "proc_gen.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__proc_gen__PredInfo_4, &ll_backend__proc_gen__V_21_21);
        }
#line 576 "proc_gen.m"
        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 576 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 576 "proc_gen.m"
          {
#line 576 "proc_gen.m"
            ll_backend__proc_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_21_21, (MR_Integer) 0)));
#line 577 "proc_gen.m"
            {
#line 577 "proc_gen.m"
              libs__globals__get_trace_level_2_p_0(ll_backend__proc_gen__Globals0_6, &ll_backend__proc_gen__TraceLevel_12);
            }
#line 578 "proc_gen.m"
            {
#line 578 "proc_gen.m"
              ll_backend__proc_gen__UC_TraceLevel_13 = libs__trace_params__trace_level_for_unify_compare_1_f_0(ll_backend__proc_gen__TraceLevel_12);
            }
#line 578 "proc_gen.m"
            ll_backend__proc_gen__succeeded = MR_TRUE;
#line 576 "proc_gen.m"
          }
#line 582 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 580 "proc_gen.m"
          {
#line 580 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Globals1_19;

#line 580 "proc_gen.m"
            {
#line 580 "proc_gen.m"
              libs__globals__set_trace_level_3_p_0(ll_backend__proc_gen__UC_TraceLevel_13, ll_backend__proc_gen__Globals0_6, &ll_backend__proc_gen__Globals1_19);
            }
#line 581 "proc_gen.m"
            {
#line 581 "proc_gen.m"
              hlds__hlds_module__module_info_set_globals_3_p_0(ll_backend__proc_gen__Globals1_19, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_14, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_15);
#line 581 "proc_gen.m"
              return;
            }
#line 580 "proc_gen.m"
          }
#line 582 "proc_gen.m"
        else
#line 581 "proc_gen.m"
          *ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_15 = ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_14;
#line 582 "proc_gen.m"
      }
#line 561 "proc_gen.m"
  }
#line 558 "proc_gen.m"
}

#line 286 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_proc_list_code_9_p_0(
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_1,
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_2,
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_3,
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_4,
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__HeadVar__5_5,
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_6,
#line 286 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_7,
#line 286 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_Procs_0_8,
#line 286 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_Procs_9)
#line 286 "proc_gen.m"
{
#line 291 "proc_gen.m"
  while (MR_TRUE)
#line 291 "proc_gen.m"
    {
#line 291 "proc_gen.m"
      /* tailcall optimized into a loop */
#line 291 "proc_gen.m"
      {
#line 291 "proc_gen.m"
        MR_bool ll_backend__proc_gen__succeeded;

#line 291 "proc_gen.m"
        if ((ll_backend__proc_gen__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 291 "proc_gen.m"
          {
#line 291 "proc_gen.m"
            *ll_backend__proc_gen__STATE_VARIABLE_Procs_9 = ll_backend__proc_gen__STATE_VARIABLE_Procs_0_8;
#line 291 "proc_gen.m"
            *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_7 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_6;
#line 291 "proc_gen.m"
          }
#line 291 "proc_gen.m"
        else
#line 293 "proc_gen.m"
          {
#line 293 "proc_gen.m"
            MR_Integer ll_backend__proc_gen__ProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__5_5, (MR_Integer) 0)));
#line 293 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__HeadVar__5_5, (MR_Integer) 1)));
#line 293 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfos_28;
#line 293 "proc_gen.m"
            MR_Word ll_backend__proc_gen__ProcInfo_29;
#line 293 "proc_gen.m"
            MR_Word ll_backend__proc_gen__Proc_30;
#line 293 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_35;
#line 293 "proc_gen.m"
            MR_Word ll_backend__proc_gen__STATE_VARIABLE_Procs_36_36;
#line 295 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv0_ProcInfo_29;

#line 294 "proc_gen.m"
            {
#line 294 "proc_gen.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(ll_backend__proc_gen__PredInfo_4, &ll_backend__proc_gen__ProcInfos_28);
            }
#line 295 "proc_gen.m"
            {
#line 295 "proc_gen.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__proc_gen__ProcInfos_28, ((MR_Box) (ll_backend__proc_gen__ProcId_24)), &ll_backend__proc_gen__conv0_ProcInfo_29);
            }
#line 295 "proc_gen.m"
            ll_backend__proc_gen__ProcInfo_29 = ((MR_Word) ll_backend__proc_gen__conv0_ProcInfo_29);
#line 296 "proc_gen.m"
            {
#line 296 "proc_gen.m"
              ll_backend__proc_gen__generate_proc_code_9_p_0(ll_backend__proc_gen__ModuleInfo_1, ll_backend__proc_gen__ConstStructMap_2, ll_backend__proc_gen__PredId_3, ll_backend__proc_gen__PredInfo_4, ll_backend__proc_gen__ProcId_24, ll_backend__proc_gen__ProcInfo_29, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_6, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_35, &ll_backend__proc_gen__Proc_30);
            }
#line 298 "proc_gen.m"
            {
#line 298 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_Procs_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__STATE_VARIABLE_Procs_36_36, 0) = ((MR_Box) (ll_backend__proc_gen__Proc_30));
#line 298 "proc_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__proc_gen__STATE_VARIABLE_Procs_36_36, 1) = ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_Procs_0_8));
#line 298 "proc_gen.m"
            }
#line 299 "proc_gen.m"
            /* direct tailcall eliminated */
#line 299 "proc_gen.m"
            {
#line 299 "proc_gen.m"
              MR_Word ll_backend__proc_gen__HeadVar__5__tmp_copy_5 = ll_backend__proc_gen__ProcIds_25;
#line 299 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0__tmp_copy_6 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_35;
#line 299 "proc_gen.m"
              MR_Word ll_backend__proc_gen__STATE_VARIABLE_Procs_0__tmp_copy_8 = ll_backend__proc_gen__STATE_VARIABLE_Procs_36_36;

#line 299 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_Procs_0_8 = ll_backend__proc_gen__STATE_VARIABLE_Procs_0__tmp_copy_8;
#line 299 "proc_gen.m"
              ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_6 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0__tmp_copy_6;
#line 299 "proc_gen.m"
              ll_backend__proc_gen__HeadVar__5_5 = ll_backend__proc_gen__HeadVar__5__tmp_copy_5;
#line 299 "proc_gen.m"
            }
#line 299 "proc_gen.m"
            continue;
#line 293 "proc_gen.m"
          }
#line 291 "proc_gen.m"
      }
#line 291 "proc_gen.m"
      break;
#line 291 "proc_gen.m"
    }
#line 286 "proc_gen.m"
}

#line 261 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_pred_code_par_6_p_0(
#line 261 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_7,
#line 261 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_8,
#line 261 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_9,
#line 261 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__CProcs_10,
#line 261 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_15,
#line 261 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_16)
#line 261 "proc_gen.m"
{
#line 266 "proc_gen.m"
  {
#line 266 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 266 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfos_12;
#line 266 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfo_13;
#line 266 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcIds_14;
#line 268 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv0_PredInfo_13;

#line 267 "proc_gen.m"
    {
#line 267 "proc_gen.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__proc_gen__ModuleInfo_7, &ll_backend__proc_gen__PredInfos_12);
    }
#line 268 "proc_gen.m"
    {
#line 268 "proc_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__proc_gen__PredInfos_12, ((MR_Box) (ll_backend__proc_gen__PredId_9)), &ll_backend__proc_gen__conv0_PredInfo_13);
    }
#line 268 "proc_gen.m"
    ll_backend__proc_gen__PredInfo_13 = ((MR_Word) ll_backend__proc_gen__conv0_PredInfo_13);
#line 269 "proc_gen.m"
    {
#line 269 "proc_gen.m"
      ll_backend__proc_gen__ProcIds_14 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ll_backend__proc_gen__PredInfo_13);
    }
#line 281 "proc_gen.m"
    {
#line 281 "proc_gen.m"
      ll_backend__proc_gen__generate_proc_list_code_9_p_0(ll_backend__proc_gen__ModuleInfo_7, ll_backend__proc_gen__ConstStructMap_8, ll_backend__proc_gen__PredId_9, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcIds_14, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_15, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__proc_gen__CProcs_10);
#line 281 "proc_gen.m"
      return;
    }
#line 266 "proc_gen.m"
  }
#line 261 "proc_gen.m"
}

#line 228 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_maybe_pred_code_10_p_0(
#line 228 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_11,
#line 228 "proc_gen.m"
  MR_Word ll_backend__proc_gen__VeryVerbose_12,
#line 228 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Statistics_13,
#line 228 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_14,
#line 228 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_15,
#line 228 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Predicates_16,
#line 228 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_24,
#line 228 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25)
#line 228 "proc_gen.m"
{
#line 233 "proc_gen.m"
  {
#line 233 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 233 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfos_19;
#line 233 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfo_20;
#line 233 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcIds_21;
#line 239 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv0_PredInfo_20;

#line 238 "proc_gen.m"
    {
#line 238 "proc_gen.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__proc_gen__ModuleInfo_11, &ll_backend__proc_gen__PredInfos_19);
    }
#line 239 "proc_gen.m"
    {
#line 239 "proc_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__proc_gen__PredInfos_19, ((MR_Box) (ll_backend__proc_gen__PredId_15)), &ll_backend__proc_gen__conv0_PredInfo_20);
    }
#line 239 "proc_gen.m"
    ll_backend__proc_gen__PredInfo_20 = ((MR_Word) ll_backend__proc_gen__conv0_PredInfo_20);
#line 240 "proc_gen.m"
    {
#line 240 "proc_gen.m"
      ll_backend__proc_gen__ProcIds_21 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ll_backend__proc_gen__PredInfo_20);
    }
#line 244 "proc_gen.m"
    if ((ll_backend__proc_gen__ProcIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "proc_gen.m"
      {
#line 243 "proc_gen.m"
        *ll_backend__proc_gen__Predicates_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 243 "proc_gen.m"
        *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_24;
#line 242 "proc_gen.m"
      }
#line 244 "proc_gen.m"
    else
#line 254 "proc_gen.m"
      if ((ll_backend__proc_gen__VeryVerbose_12 == (MR_Integer) 0))
#line 255 "proc_gen.m"
        {
#line 255 "proc_gen.m"
          MR_Integer ll_backend__proc_gen__ProcId_74 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_21, (MR_Integer) 0)));
#line 255 "proc_gen.m"
          MR_Word ll_backend__proc_gen__ProcIds_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_21, (MR_Integer) 1)));
#line 255 "proc_gen.m"
          MR_Word ll_backend__proc_gen__ProcInfos_78;
#line 255 "proc_gen.m"
          MR_Word ll_backend__proc_gen__ProcInfo_79;
#line 255 "proc_gen.m"
          MR_Word ll_backend__proc_gen__Proc_80;
#line 255 "proc_gen.m"
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_85;
#line 255 "proc_gen.m"
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_Procs_36_86;
#line 295 "proc_gen.m"
          MR_Box ll_backend__proc_gen__conv1_ProcInfo_79;

#line 294 "proc_gen.m"
          {
#line 294 "proc_gen.m"
            hlds__hlds_pred__pred_info_get_procedures_2_p_0(ll_backend__proc_gen__PredInfo_20, &ll_backend__proc_gen__ProcInfos_78);
          }
#line 295 "proc_gen.m"
          {
#line 295 "proc_gen.m"
            mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__proc_gen__ProcInfos_78, ((MR_Box) (ll_backend__proc_gen__ProcId_74)), &ll_backend__proc_gen__conv1_ProcInfo_79);
          }
#line 295 "proc_gen.m"
          ll_backend__proc_gen__ProcInfo_79 = ((MR_Word) ll_backend__proc_gen__conv1_ProcInfo_79);
#line 296 "proc_gen.m"
          {
#line 296 "proc_gen.m"
            ll_backend__proc_gen__generate_proc_code_9_p_0(ll_backend__proc_gen__ModuleInfo_11, ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__PredId_15, ll_backend__proc_gen__PredInfo_20, ll_backend__proc_gen__ProcId_74, ll_backend__proc_gen__ProcInfo_79, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_24, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_85, &ll_backend__proc_gen__Proc_80);
          }
#line 298 "proc_gen.m"
          {
#line 298 "proc_gen.m"
            ll_backend__proc_gen__STATE_VARIABLE_Procs_36_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__STATE_VARIABLE_Procs_36_86, 0) = ((MR_Box) (ll_backend__proc_gen__Proc_80));
#line 298 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__STATE_VARIABLE_Procs_36_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "proc_gen.m"
          }
#line 299 "proc_gen.m"
          {
#line 299 "proc_gen.m"
            ll_backend__proc_gen__generate_proc_list_code_9_p_0(ll_backend__proc_gen__ModuleInfo_11, ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__PredId_15, ll_backend__proc_gen__PredInfo_20, ll_backend__proc_gen__ProcIds_75, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_85, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25, ll_backend__proc_gen__STATE_VARIABLE_Procs_36_86, ll_backend__proc_gen__Predicates_16);
#line 299 "proc_gen.m"
            return;
          }
#line 255 "proc_gen.m"
        }
#line 254 "proc_gen.m"
      else
#line 247 "proc_gen.m"
        {
#line 247 "proc_gen.m"
          MR_Integer ll_backend__proc_gen__ProcId_105;
#line 247 "proc_gen.m"
          MR_Word ll_backend__proc_gen__ProcIds_106;
#line 247 "proc_gen.m"
          MR_Word ll_backend__proc_gen__ProcInfos_109;
#line 247 "proc_gen.m"
          MR_Word ll_backend__proc_gen__ProcInfo_110;
#line 247 "proc_gen.m"
          MR_Word ll_backend__proc_gen__Proc_111;
#line 247 "proc_gen.m"
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_116;
#line 247 "proc_gen.m"
          MR_Word ll_backend__proc_gen__STATE_VARIABLE_Procs_36_117;
#line 295 "proc_gen.m"
          MR_Box ll_backend__proc_gen__conv2_ProcInfo_110;

#line 248 "proc_gen.m"
          {
#line 248 "proc_gen.m"
            mercury__io__write_string_3_p_0((MR_String) "% Generating code for ");
          }
#line 249 "proc_gen.m"
          {
#line 249 "proc_gen.m"
            hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(ll_backend__proc_gen__ModuleInfo_11, ll_backend__proc_gen__PredId_15);
          }
#line 250 "proc_gen.m"
          {
#line 250 "proc_gen.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 293 "proc_gen.m"
          ll_backend__proc_gen__ProcId_105 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_21, (MR_Integer) 0)));
#line 293 "proc_gen.m"
          ll_backend__proc_gen__ProcIds_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__ProcIds_21, (MR_Integer) 1)));
#line 294 "proc_gen.m"
          {
#line 294 "proc_gen.m"
            hlds__hlds_pred__pred_info_get_procedures_2_p_0(ll_backend__proc_gen__PredInfo_20, &ll_backend__proc_gen__ProcInfos_109);
          }
#line 295 "proc_gen.m"
          {
#line 295 "proc_gen.m"
            mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__proc_gen__ProcInfos_109, ((MR_Box) (ll_backend__proc_gen__ProcId_105)), &ll_backend__proc_gen__conv2_ProcInfo_110);
          }
#line 295 "proc_gen.m"
          ll_backend__proc_gen__ProcInfo_110 = ((MR_Word) ll_backend__proc_gen__conv2_ProcInfo_110);
#line 296 "proc_gen.m"
          {
#line 296 "proc_gen.m"
            ll_backend__proc_gen__generate_proc_code_9_p_0(ll_backend__proc_gen__ModuleInfo_11, ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__PredId_15, ll_backend__proc_gen__PredInfo_20, ll_backend__proc_gen__ProcId_105, ll_backend__proc_gen__ProcInfo_110, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_24, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_116, &ll_backend__proc_gen__Proc_111);
          }
#line 298 "proc_gen.m"
          {
#line 298 "proc_gen.m"
            ll_backend__proc_gen__STATE_VARIABLE_Procs_36_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__STATE_VARIABLE_Procs_36_117, 0) = ((MR_Box) (ll_backend__proc_gen__Proc_111));
#line 298 "proc_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__proc_gen__STATE_VARIABLE_Procs_36_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "proc_gen.m"
          }
#line 299 "proc_gen.m"
          {
#line 299 "proc_gen.m"
            ll_backend__proc_gen__generate_proc_list_code_9_p_0(ll_backend__proc_gen__ModuleInfo_11, ll_backend__proc_gen__ConstStructMap_14, ll_backend__proc_gen__PredId_15, ll_backend__proc_gen__PredInfo_20, ll_backend__proc_gen__ProcIds_106, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_35_116, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_25, ll_backend__proc_gen__STATE_VARIABLE_Procs_36_117, ll_backend__proc_gen__Predicates_16);
          }
#line 253 "proc_gen.m"
          {
#line 253 "proc_gen.m"
            libs__file_util__maybe_report_stats_3_p_0(ll_backend__proc_gen__Statistics_13);
#line 253 "proc_gen.m"
            return;
          }
#line 247 "proc_gen.m"
        }
#line 233 "proc_gen.m"
  }
#line 228 "proc_gen.m"
}

#line 159 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_code_sequential_10_p_0_1(
#line 159 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 159 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 159 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2,
#line 159 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
#line 159 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_4,
#line 159 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_5,
#line 159 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_6)
#line 159 "proc_gen.m"
{
#line 159 "proc_gen.m"
  {
#line 159 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 159 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv1_Predicates_16;
#line 159 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_25;

#line 159 "proc_gen.m"
    {
#line 159 "proc_gen.m"
      ll_backend__proc_gen__generate_maybe_pred_code_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 6))), ((MR_Word) ll_backend__proc_gen__wrapper_arg_1), &ll_backend__proc_gen__conv1_Predicates_16, ((MR_Word) ll_backend__proc_gen__wrapper_arg_3), &ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_25);
    }
#line 159 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__proc_gen__conv1_Predicates_16));
#line 159 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_25));
#line 159 "proc_gen.m"
  }
#line 159 "proc_gen.m"
}

#line 153 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_code_sequential_10_p_0(
#line 153 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_11,
#line 153 "proc_gen.m"
  MR_Word ll_backend__proc_gen__VeryVerbose_12,
#line 153 "proc_gen.m"
  MR_Word ll_backend__proc_gen__Statistics_13,
#line 153 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_14,
#line 153 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredIds_15,
#line 153 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_20,
#line 153 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_21,
#line 153 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Procedures_17)
#line 153 "proc_gen.m"
{
#line 158 "proc_gen.m"
  {
#line 158 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 158 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredProcedures_19;
#line 158 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_24_24;
#line 159 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv3_STATE_VARIABLE_GlobalData_21;
#line 159 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv2_STATE_VARIABLE_IO_23;

#line 159 "proc_gen.m"
    {
#line 159 "proc_gen.m"
      ll_backend__proc_gen__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 159 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_6[0]));
#line 159 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 1) = ((MR_Box) (ll_backend__proc_gen__generate_code_sequential_10_p_0_1));
#line 159 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 159 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 3) = ((MR_Box) (ll_backend__proc_gen__ModuleInfo_11));
#line 159 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 4) = ((MR_Box) (ll_backend__proc_gen__VeryVerbose_12));
#line 159 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 5) = ((MR_Box) (ll_backend__proc_gen__Statistics_13));
#line 159 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_24_24, 6) = ((MR_Box) (ll_backend__proc_gen__ConstStructMap_14));
#line 159 "proc_gen.m"
    }
#line 159 "proc_gen.m"
    {
#line 159 "proc_gen.m"
      mercury__list__map_foldl2_7_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &ll_backend__proc_gen_scalar_common_1[1], (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__proc_gen__V_24_24, ll_backend__proc_gen__PredIds_15, &ll_backend__proc_gen__PredProcedures_19, ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_20)), &ll_backend__proc_gen__conv3_STATE_VARIABLE_GlobalData_21, ((MR_Box) ((MR_Integer) 0)), &ll_backend__proc_gen__conv2_STATE_VARIABLE_IO_23);
    }
#line 159 "proc_gen.m"
    *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_21 = ((MR_Word) ll_backend__proc_gen__conv3_STATE_VARIABLE_GlobalData_21);
#line 163 "proc_gen.m"
    {
#line 163 "proc_gen.m"
      mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, ll_backend__proc_gen__PredProcedures_19, ll_backend__proc_gen__Procedures_17);
#line 163 "proc_gen.m"
      return;
    }
#line 158 "proc_gen.m"
  }
#line 153 "proc_gen.m"
}

#line 1365 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0_1(
#line 1365 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 1365 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 1365 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_2,
#line 1365 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_3)
#line 1365 "proc_gen.m"
{
#line 1365 "proc_gen.m"
  {
#line 1365 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 1365 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_29;

#line 1365 "proc_gen.m"
    {
#line 1365 "proc_gen.m"
      ll_backend__proc_gen__add_tabling_info_struct_3_p_0(((MR_Word) ll_backend__proc_gen__wrapper_arg_1), ((MR_Word) ll_backend__proc_gen__wrapper_arg_2), &ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_29);
    }
#line 1365 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_29));
#line 1365 "proc_gen.m"
  }
#line 1365 "proc_gen.m"
}

#line 66 "proc_gen.m"
void MR_CALL 
ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0(
#line 66 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_4,
#line 66 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8,
#line 66 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9)
#line 66 "proc_gen.m"
{
#line 1362 "proc_gen.m"
  {
#line 1362 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1362 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TableStructMap_6;
#line 1362 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TableStructs_7;
#line 1365 "proc_gen.m"
    MR_Box ll_backend__proc_gen__conv1_STATE_VARIABLE_GlobalData_9;

#line 1363 "proc_gen.m"
    {
#line 1363 "proc_gen.m"
      hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ll_backend__proc_gen__ModuleInfo_4, &ll_backend__proc_gen__TableStructMap_6);
    }
#line 1364 "proc_gen.m"
    {
#line 1364 "proc_gen.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ll_backend__proc_gen__TableStructMap_6, &ll_backend__proc_gen__TableStructs_7);
    }
#line 1365 "proc_gen.m"
    {
#line 1365 "proc_gen.m"
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_2[0], (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0, (MR_Word) &ll_backend__proc_gen_scalar_common_2[4], ll_backend__proc_gen__TableStructs_7, ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_8)), &ll_backend__proc_gen__conv1_STATE_VARIABLE_GlobalData_9);
    }
#line 1365 "proc_gen.m"
    *ll_backend__proc_gen__STATE_VARIABLE_GlobalData_9 = ((MR_Word) ll_backend__proc_gen__conv1_STATE_VARIABLE_GlobalData_9);
#line 1362 "proc_gen.m"
  }
#line 66 "proc_gen.m"
}

#line 61 "proc_gen.m"
MR_String MR_CALL 
ll_backend__proc_gen__push_msg_3_f_0(
#line 61 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo_5,
#line 61 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_6,
#line 61 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__ProcId_7)
#line 61 "proc_gen.m"
{
#line 1329 "proc_gen.m"
  {
#line 1329 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__PushMsg_8;
#line 1329 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredInfo_9;
#line 1329 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredOrFunc_10;
#line 1329 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ModuleName_11;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__PredName_12;
#line 1329 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Arity_13;
#line 1329 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Origin_14;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__FullPredName_19;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_23_23;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_24_24;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_26_26;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_27_27;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_28_28;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_30_30;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_31_31;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_33_33;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_34_34;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_35_35;
#line 1329 "proc_gen.m"
    MR_String ll_backend__proc_gen__V_37_37;
#line 1329 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__V_38_38;
#line 1340 "proc_gen.m"
    MR_Word ll_backend__proc_gen__SpecialId_15;
#line 1340 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtor_16;
#line 1336 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_20_20;

#line 1330 "proc_gen.m"
    {
#line 1330 "proc_gen.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__proc_gen__ModuleInfo_5, ll_backend__proc_gen__PredId_6, &ll_backend__proc_gen__PredInfo_9);
    }
#line 1331 "proc_gen.m"
    {
#line 1331 "proc_gen.m"
      ll_backend__proc_gen__PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1332 "proc_gen.m"
    {
#line 1332 "proc_gen.m"
      ll_backend__proc_gen__ModuleName_11 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1333 "proc_gen.m"
    {
#line 1333 "proc_gen.m"
      ll_backend__proc_gen__PredName_12 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1334 "proc_gen.m"
    {
#line 1334 "proc_gen.m"
      ll_backend__proc_gen__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_9);
    }
#line 1335 "proc_gen.m"
    {
#line 1335 "proc_gen.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__proc_gen__PredInfo_9, &ll_backend__proc_gen__Origin_14);
    }
#line 1336 "proc_gen.m"
    ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__Origin_14)) == (MR_mktag((MR_Integer) 0)));
#line 1336 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1336 "proc_gen.m"
      {
#line 1336 "proc_gen.m"
        ll_backend__proc_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Origin_14, (MR_Integer) 0)));
#line 1336 "proc_gen.m"
        ll_backend__proc_gen__SpecialId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_20_20, (MR_Integer) 0)));
#line 1336 "proc_gen.m"
        ll_backend__proc_gen__TypeCtor_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_20_20, (MR_Integer) 1)));
#line 1336 "proc_gen.m"
        ll_backend__proc_gen__succeeded = MR_TRUE;
#line 1336 "proc_gen.m"
      }
#line 1340 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 1337 "proc_gen.m"
      {
#line 1337 "proc_gen.m"
        MR_String ll_backend__proc_gen__TypeName_17;
#line 1337 "proc_gen.m"
        MR_String ll_backend__proc_gen__SpecialPredName_18;
#line 1337 "proc_gen.m"
        MR_String ll_backend__proc_gen__V_21_21;
#line 1337 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeCtorSymName_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TypeCtor_16, (MR_Integer) 0)));
#line 1337 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__TypeCtorArity_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TypeCtor_16, (MR_Integer) 1)));
#line 1337 "proc_gen.m"
        MR_String ll_backend__proc_gen__TypeCtorName_43;
#line 1337 "proc_gen.m"
        MR_String ll_backend__proc_gen__ArityStr_44;
#line 1337 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_45_45;
#line 1337 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_46_46;
#line 1337 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_48_48;

#line 1355 "proc_gen.m"
        {
#line 1355 "proc_gen.m"
          ll_backend__proc_gen__TypeCtorName_43 = mdbcomp__prim_data__sym_name_to_string_1_f_0(ll_backend__proc_gen__TypeCtorSymName_41);
        }
#line 1356 "proc_gen.m"
        {
#line 1356 "proc_gen.m"
          mercury__string__int_to_string_2_p_0(ll_backend__proc_gen__TypeCtorArity_42, &ll_backend__proc_gen__ArityStr_44);
        }
#line 1357 "proc_gen.m"
        {
#line 1357 "proc_gen.m"
          ll_backend__proc_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_48_48, 0) = ((MR_Box) (ll_backend__proc_gen__ArityStr_44));
#line 1357 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1357 "proc_gen.m"
        }
#line 1357 "proc_gen.m"
        {
#line 1357 "proc_gen.m"
          ll_backend__proc_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_46_46, 0) = ((MR_Box) ((MR_String) "_"));
#line 1357 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_46_46, 1) = ((MR_Box) (ll_backend__proc_gen__V_48_48));
#line 1357 "proc_gen.m"
        }
#line 1357 "proc_gen.m"
        {
#line 1357 "proc_gen.m"
          ll_backend__proc_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_45_45, 0) = ((MR_Box) (ll_backend__proc_gen__TypeCtorName_43));
#line 1357 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_45_45, 1) = ((MR_Box) (ll_backend__proc_gen__V_46_46));
#line 1357 "proc_gen.m"
        }
#line 1357 "proc_gen.m"
        {
#line 1357 "proc_gen.m"
          mercury__string__append_list_2_p_0(ll_backend__proc_gen__V_45_45, &ll_backend__proc_gen__TypeName_17);
        }
#line 1338 "proc_gen.m"
        {
#line 1338 "proc_gen.m"
          ll_backend__proc_gen__SpecialPredName_18 = mdbcomp__prim_data__get_special_pred_id_generic_name_1_f_0(ll_backend__proc_gen__SpecialId_15);
        }
#line 1339 "proc_gen.m"
        {
#line 1339 "proc_gen.m"
          ll_backend__proc_gen__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", ll_backend__proc_gen__TypeName_17);
        }
#line 1339 "proc_gen.m"
        {
#line 1339 "proc_gen.m"
          ll_backend__proc_gen__FullPredName_19 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__SpecialPredName_18, ll_backend__proc_gen__V_21_21);
        }
#line 1337 "proc_gen.m"
      }
#line 1340 "proc_gen.m"
    else
#line 1341 "proc_gen.m"
      ll_backend__proc_gen__FullPredName_19 = ll_backend__proc_gen__PredName_12;
#line 1346 "proc_gen.m"
    {
#line 1346 "proc_gen.m"
      ll_backend__proc_gen__V_23_23 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(ll_backend__proc_gen__PredOrFunc_10);
    }
#line 1347 "proc_gen.m"
    {
#line 1347 "proc_gen.m"
      ll_backend__proc_gen__V_27_27 = mdbcomp__prim_data__sym_name_to_string_1_f_0(ll_backend__proc_gen__ModuleName_11);
    }
#line 1348 "proc_gen.m"
    {
#line 1348 "proc_gen.m"
      ll_backend__proc_gen__V_34_34 = mercury__string__int_to_string_1_f_0(ll_backend__proc_gen__Arity_13);
    }
#line 1349 "proc_gen.m"
    {
#line 1349 "proc_gen.m"
      ll_backend__proc_gen__V_38_38 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__proc_gen__ProcId_7);
    }
#line 1348 "proc_gen.m"
    {
#line 1348 "proc_gen.m"
      ll_backend__proc_gen__V_37_37 = mercury__string__int_to_string_1_f_0(ll_backend__proc_gen__V_38_38);
    }
#line 1348 "proc_gen.m"
    {
#line 1348 "proc_gen.m"
      ll_backend__proc_gen__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "-", ll_backend__proc_gen__V_37_37);
    }
#line 1348 "proc_gen.m"
    {
#line 1348 "proc_gen.m"
      ll_backend__proc_gen__V_33_33 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__V_34_34, ll_backend__proc_gen__V_35_35);
    }
#line 1348 "proc_gen.m"
    {
#line 1348 "proc_gen.m"
      ll_backend__proc_gen__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__proc_gen__V_33_33);
    }
#line 1347 "proc_gen.m"
    {
#line 1347 "proc_gen.m"
      ll_backend__proc_gen__V_30_30 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__FullPredName_19, ll_backend__proc_gen__V_31_31);
    }
#line 1347 "proc_gen.m"
    {
#line 1347 "proc_gen.m"
      ll_backend__proc_gen__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) ".", ll_backend__proc_gen__V_30_30);
    }
#line 1346 "proc_gen.m"
    {
#line 1346 "proc_gen.m"
      ll_backend__proc_gen__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__V_27_27, ll_backend__proc_gen__V_28_28);
    }
#line 1346 "proc_gen.m"
    {
#line 1346 "proc_gen.m"
      ll_backend__proc_gen__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__proc_gen__V_26_26);
    }
#line 1346 "proc_gen.m"
    {
#line 1346 "proc_gen.m"
      return ll_backend__proc_gen__PushMsg_8 = mercury__string__f_43_43_2_f_0(ll_backend__proc_gen__V_23_23, ll_backend__proc_gen__V_24_24);
    }
#line 1329 "proc_gen.m"
    return ll_backend__proc_gen__PushMsg_8;
#line 1329 "proc_gen.m"
  }
#line 61 "proc_gen.m"
}

#line 422 "proc_gen.m"
static MR_bool MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0_1(
#line 422 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg)
#line 422 "proc_gen.m"
{
#line 422 "proc_gen.m"
  {
#line 422 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 422 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;

#line 422 "proc_gen.m"
    {
#line 422 "proc_gen.m"
      return ll_backend__proc_gen__succeeded = ll_backend__proc_gen__IntroducedFrom__pred__generate_proc_code__422__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))));
    }
#line 422 "proc_gen.m"
    return ll_backend__proc_gen__succeeded;
#line 422 "proc_gen.m"
  }
#line 422 "proc_gen.m"
}

#line 54 "proc_gen.m"
void MR_CALL 
ll_backend__proc_gen__generate_proc_code_9_p_0(
#line 54 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ModuleInfo0_10,
#line 54 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ConstStructMap_11,
#line 54 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredId_12,
#line 54 "proc_gen.m"
  MR_Word ll_backend__proc_gen__PredInfo_13,
#line 54 "proc_gen.m"
  MR_Integer ll_backend__proc_gen__ProcId_14,
#line 54 "proc_gen.m"
  MR_Word ll_backend__proc_gen__ProcInfo0_15,
#line 54 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108,
#line 54 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_109,
#line 54 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__CProc_17)
#line 54 "proc_gen.m"
{
#line 322 "proc_gen.m"
  {
#line 322 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TypeCtorInfo_151_151;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ModuleInfo_18;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcInfo1_19;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Globals_20;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TraceLevel_21;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__HasParConj_22;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Parallel_23;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcInfo_25;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeContainingGoalMap_26;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Detism_27;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeModel_28;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Goal_29;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__GoalInfo_31;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeFollowVars_32;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__FollowVars_33;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ForceProcId_36;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__SaveSuccip_37;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StaticCellInfo0_38;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TSRevStringTable0_39;
#line 322 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TSStringTableSize0_40;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__OutsideResumePoint_41;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TraceSlotInfo_42;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeInfo0_43;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ClausesInfo_44;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Clauses_45;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcContext_46;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeTree0_49;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeTraceCallLabel_50;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__FrameInfo_51;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeInfo_52;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__OutOfLineCode_53;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CodeTree_54;
#line 322 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__MaxTraceRegR_55;
#line 322 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__MaxTraceRegF_56;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__StaticCellInfo_57;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__TSRevStringTable_58;
#line 322 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TSStringTableSize_59;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__CreatedTempFrame_60;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcTraceEvents_61;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Instructions0_63;
#line 322 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__TotalSlots_64;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeSuccipSlot_65;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Instructions_68;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MaybeTableIOInfo_69;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ClosureLayouts_97;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcLabel_98;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__AllocSites_99;
#line 322 "proc_gen.m"
    MR_String ll_backend__proc_gen__Name_100;
#line 322 "proc_gen.m"
    MR_Integer ll_backend__proc_gen__Arity_101;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__LabelCounter_102;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__MayAlterRtti_103;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__GenBytecode_104;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcInstructions_105;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ProcLabelCounter_106;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__UsedEnvVars_107;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_114_114;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_115_115;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_116_116;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_130_130;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_131_131;
#line 322 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_136_136;
#line 353 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_30_30;
#line 382 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_137_137;
#line 382 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_138_138;
#line 382 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_139_139;
#line 382 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_140_140;
#line 382 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_141_141;
#line 382 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_142_142;
#line 382 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_143_143;
#line 382 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_144_144;
#line 429 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_66_66;
#line 537 "proc_gen.m"
    MR_Word ll_backend__proc_gen__V_134_134;

#line 325 "proc_gen.m"
    {
#line 325 "proc_gen.m"
      ll_backend__proc_gen__maybe_set_trace_level_3_p_0(ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ModuleInfo0_10, &ll_backend__proc_gen__ModuleInfo_18);
    }
#line 326 "proc_gen.m"
    {
#line 326 "proc_gen.m"
      hlds__hlds_pred__ensure_all_headvars_are_named_2_p_0(ll_backend__proc_gen__ProcInfo0_15, &ll_backend__proc_gen__ProcInfo1_19);
    }
#line 328 "proc_gen.m"
    {
#line 328 "proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__Globals_20);
    }
#line 329 "proc_gen.m"
    {
#line 329 "proc_gen.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__proc_gen__Globals_20, &ll_backend__proc_gen__TraceLevel_21);
    }
#line 330 "proc_gen.m"
    {
#line 330 "proc_gen.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ll_backend__proc_gen__ProcInfo1_19, &ll_backend__proc_gen__HasParConj_22);
    }
#line 331 "proc_gen.m"
    {
#line 331 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_20, (MR_Integer) 212, &ll_backend__proc_gen__Parallel_23);
    }
#line 336 "proc_gen.m"
    {
#line 336 "proc_gen.m"
      MR_Word ll_backend__proc_gen__V_111_111;

#line 336 "proc_gen.m"
      {
#line 336 "proc_gen.m"
        ll_backend__proc_gen__V_111_111 = libs__trace_params__given_trace_level_is_none_1_f_0(ll_backend__proc_gen__TraceLevel_21);
      }
#line 336 "proc_gen.m"
      ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_111_111 == (MR_Integer) 0);
#line 336 "proc_gen.m"
    }
#line 337 "proc_gen.m"
    if (!(ll_backend__proc_gen__succeeded))
#line 338 "proc_gen.m"
      {
#line 338 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__HasParConj_22 == (MR_Integer) 1);
#line 338 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 339 "proc_gen.m"
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Parallel_23 == (MR_Integer) 1);
#line 338 "proc_gen.m"
      }
#line 345 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 343 "proc_gen.m"
      {
#line 343 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ContainingGoalMap_24;

#line 342 "proc_gen.m"
        {
#line 342 "proc_gen.m"
          hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__ContainingGoalMap_24, ll_backend__proc_gen__ProcInfo1_19, &ll_backend__proc_gen__ProcInfo_25);
        }
#line 344 "proc_gen.m"
        {
#line 344 "proc_gen.m"
          ll_backend__proc_gen__MaybeContainingGoalMap_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 344 "proc_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeContainingGoalMap_26, 0) = ((MR_Box) (ll_backend__proc_gen__ContainingGoalMap_24));
#line 344 "proc_gen.m"
        }
#line 343 "proc_gen.m"
      }
#line 345 "proc_gen.m"
    else
#line 346 "proc_gen.m"
      {
#line 346 "proc_gen.m"
        ll_backend__proc_gen__MaybeContainingGoalMap_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "proc_gen.m"
        ll_backend__proc_gen__ProcInfo_25 = ll_backend__proc_gen__ProcInfo1_19;
#line 346 "proc_gen.m"
      }
#line 350 "proc_gen.m"
    {
#line 350 "proc_gen.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__Detism_27);
    }
#line 351 "proc_gen.m"
    {
#line 351 "proc_gen.m"
      ll_backend__proc_gen__CodeModel_28 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__proc_gen__ProcInfo_25);
    }
#line 352 "proc_gen.m"
    {
#line 352 "proc_gen.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__Goal_29);
    }
#line 353 "proc_gen.m"
    ll_backend__proc_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Goal_29, (MR_Integer) 0)));
#line 353 "proc_gen.m"
    ll_backend__proc_gen__GoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__Goal_29, (MR_Integer) 1)));
#line 354 "proc_gen.m"
    {
#line 354 "proc_gen.m"
      hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(ll_backend__proc_gen__GoalInfo_31, &ll_backend__proc_gen__MaybeFollowVars_32);
    }
#line 357 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeFollowVars_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "proc_gen.m"
      {
#line 358 "proc_gen.m"
        MR_Word ll_backend__proc_gen__FollowVarsMap_34;

#line 359 "proc_gen.m"
        {
#line 359 "proc_gen.m"
          mercury__map__init_1_p_0((MR_Word) &ll_backend__proc_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, &ll_backend__proc_gen__FollowVarsMap_34);
        }
#line 360 "proc_gen.m"
        {
#line 360 "proc_gen.m"
          ll_backend__proc_gen__FollowVars_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 360 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FollowVars_33, 0) = ((MR_Box) (ll_backend__proc_gen__FollowVarsMap_34));
#line 360 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FollowVars_33, 1) = ((MR_Box) ((MR_Integer) 1));
#line 360 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FollowVars_33, 2) = ((MR_Box) ((MR_Integer) 1));
#line 360 "proc_gen.m"
        }
#line 358 "proc_gen.m"
      }
#line 357 "proc_gen.m"
    else
#line 356 "proc_gen.m"
      ll_backend__proc_gen__FollowVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeFollowVars_32, (MR_Integer) 0)));
#line 362 "proc_gen.m"
    {
#line 362 "proc_gen.m"
      ll_backend__continuation_info__basic_stack_layout_for_proc_4_p_0(ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__Globals_20, &ll_backend__proc_gen__SaveSuccip_37, &ll_backend__proc_gen__ForceProcId_36);
    }
#line 371 "proc_gen.m"
    {
#line 371 "proc_gen.m"
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108, &ll_backend__proc_gen__StaticCellInfo0_38);
    }
#line 372 "proc_gen.m"
    {
#line 372 "proc_gen.m"
      ll_backend__global_data__global_data_get_threadscope_rev_string_table_3_p_0(ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108, &ll_backend__proc_gen__TSRevStringTable0_39, &ll_backend__proc_gen__TSStringTableSize0_40);
    }
#line 375 "proc_gen.m"
    {
#line 375 "proc_gen.m"
      ll_backend__code_info__code_info_init_16_p_0(ll_backend__proc_gen__SaveSuccip_37, ll_backend__proc_gen__Globals_20, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__FollowVars_33, ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__StaticCellInfo0_38, ll_backend__proc_gen__ConstStructMap_11, &ll_backend__proc_gen__OutsideResumePoint_41, &ll_backend__proc_gen__TraceSlotInfo_42, ll_backend__proc_gen__MaybeContainingGoalMap_26, ll_backend__proc_gen__TSRevStringTable0_39, ll_backend__proc_gen__TSStringTableSize0_40, &ll_backend__proc_gen__CodeInfo0_43);
    }
#line 381 "proc_gen.m"
    {
#line 381 "proc_gen.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(ll_backend__proc_gen__PredInfo_13, &ll_backend__proc_gen__ClausesInfo_44);
    }
#line 382 "proc_gen.m"
    ll_backend__proc_gen__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_44, (MR_Integer) 0)));
#line 382 "proc_gen.m"
    ll_backend__proc_gen__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_44, (MR_Integer) 1)));
#line 382 "proc_gen.m"
    ll_backend__proc_gen__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_44, (MR_Integer) 2)));
#line 382 "proc_gen.m"
    ll_backend__proc_gen__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_44, (MR_Integer) 3)));
#line 382 "proc_gen.m"
    ll_backend__proc_gen__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_44, (MR_Integer) 4)));
#line 382 "proc_gen.m"
    ll_backend__proc_gen__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_44, (MR_Integer) 5)));
#line 382 "proc_gen.m"
    ll_backend__proc_gen__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_44, (MR_Integer) 6)));
#line 382 "proc_gen.m"
    ll_backend__proc_gen__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_44, (MR_Integer) 7)));
#line 382 "proc_gen.m"
    ll_backend__proc_gen__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ClausesInfo_44, (MR_Integer) 8)));
#line 382 "proc_gen.m"
    {
#line 382 "proc_gen.m"
      hlds__hlds_clauses__get_clause_list_2_p_0(ll_backend__proc_gen__V_114_114, &ll_backend__proc_gen__Clauses_45);
    }
#line 388 "proc_gen.m"
    if ((ll_backend__proc_gen__Clauses_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "proc_gen.m"
      {
#line 387 "proc_gen.m"
        ll_backend__proc_gen__ProcContext_46 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__proc_gen__GoalInfo_31);
      }
#line 388 "proc_gen.m"
    else
#line 389 "proc_gen.m"
      {
#line 389 "proc_gen.m"
        MR_Word ll_backend__proc_gen__FirstClause_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Clauses_45, (MR_Integer) 0)));
#line 389 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__Clauses_45, (MR_Integer) 1)));
#line 390 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_47, (MR_Integer) 0)));
#line 390 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_47, (MR_Integer) 1)));
#line 390 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_47, (MR_Integer) 2)));
#line 390 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_148_148;

#line 390 "proc_gen.m"
        ll_backend__proc_gen__ProcContext_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_47, (MR_Integer) 3)));
#line 390 "proc_gen.m"
        ll_backend__proc_gen__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FirstClause_47, (MR_Integer) 4)));
#line 389 "proc_gen.m"
      }
#line 394 "proc_gen.m"
    {
#line 394 "proc_gen.m"
      ll_backend__proc_gen__generate_category_code_10_p_0(ll_backend__proc_gen__CodeModel_28, ll_backend__proc_gen__ProcContext_46, ll_backend__proc_gen__Goal_29, ll_backend__proc_gen__OutsideResumePoint_41, ll_backend__proc_gen__TraceSlotInfo_42, &ll_backend__proc_gen__CodeTree0_49, &ll_backend__proc_gen__MaybeTraceCallLabel_50, &ll_backend__proc_gen__FrameInfo_51, ll_backend__proc_gen__CodeInfo0_43, &ll_backend__proc_gen__CodeInfo_52);
    }
#line 397 "proc_gen.m"
    {
#line 397 "proc_gen.m"
      ll_backend__code_info__get_out_of_line_code_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__OutOfLineCode_53);
    }
#line 7938 "ll_backend.proc_gen.c"
    ll_backend__proc_gen__TypeCtorInfo_151_151 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 398 "proc_gen.m"
    {
#line 398 "proc_gen.m"
      ll_backend__proc_gen__CodeTree_54 = mercury__cord__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_151_151, ll_backend__proc_gen__CodeTree0_49, ll_backend__proc_gen__OutOfLineCode_53);
    }
#line 399 "proc_gen.m"
    {
#line 399 "proc_gen.m"
      ll_backend__code_info__get_max_reg_in_use_at_trace_3_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__MaxTraceRegR_55, &ll_backend__proc_gen__MaxTraceRegF_56);
    }
#line 400 "proc_gen.m"
    {
#line 400 "proc_gen.m"
      ll_backend__code_info__get_static_cell_info_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__StaticCellInfo_57);
    }
#line 401 "proc_gen.m"
    {
#line 401 "proc_gen.m"
      ll_backend__global_data__global_data_set_static_cell_info_3_p_0(ll_backend__proc_gen__StaticCellInfo_57, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_108, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_115_115);
    }
#line 403 "proc_gen.m"
    {
#line 403 "proc_gen.m"
      ll_backend__code_info__get_threadscope_rev_string_table_3_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__TSRevStringTable_58, &ll_backend__proc_gen__TSStringTableSize_59);
    }
#line 405 "proc_gen.m"
    {
#line 405 "proc_gen.m"
      ll_backend__global_data__global_data_set_threadscope_rev_string_table_4_p_0(ll_backend__proc_gen__TSRevStringTable_58, ll_backend__proc_gen__TSStringTableSize_59, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_115_115, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_116_116);
    }
#line 408 "proc_gen.m"
    {
#line 408 "proc_gen.m"
      ll_backend__code_info__get_created_temp_frame_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__CreatedTempFrame_60);
    }
#line 409 "proc_gen.m"
    {
#line 409 "proc_gen.m"
      ll_backend__code_info__get_proc_trace_events_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__ProcTraceEvents_61);
    }
#line 428 "proc_gen.m"
    {
#line 428 "proc_gen.m"
      ll_backend__proc_gen__Instructions0_63 = mercury__cord__list_1_f_0(ll_backend__proc_gen__TypeCtorInfo_151_151, ll_backend__proc_gen__CodeTree_54);
    }
#line 429 "proc_gen.m"
    ll_backend__proc_gen__TotalSlots_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FrameInfo_51, (MR_Integer) 0)));
#line 429 "proc_gen.m"
    ll_backend__proc_gen__MaybeSuccipSlot_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FrameInfo_51, (MR_Integer) 1)));
#line 429 "proc_gen.m"
    ll_backend__proc_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__FrameInfo_51, (MR_Integer) 2)));
#line 436 "proc_gen.m"
    if ((ll_backend__proc_gen__MaybeSuccipSlot_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "proc_gen.m"
      ll_backend__proc_gen__Instructions_68 = ll_backend__proc_gen__Instructions0_63;
#line 436 "proc_gen.m"
    else
#line 431 "proc_gen.m"
      {
#line 431 "proc_gen.m"
        MR_Integer ll_backend__proc_gen__SuccipSlot_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeSuccipSlot_65, (MR_Integer) 0)));

#line 435 "proc_gen.m"
        {
#line 435 "proc_gen.m"
          ll_backend__proc_gen__add_saved_succip_3_p_0(ll_backend__proc_gen__Instructions0_63, ll_backend__proc_gen__SuccipSlot_67, &ll_backend__proc_gen__Instructions_68);
        }
#line 431 "proc_gen.m"
      }
#line 441 "proc_gen.m"
    {
#line 441 "proc_gen.m"
      hlds__hlds_pred__proc_info_get_maybe_proc_table_io_info_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__MaybeTableIOInfo_69);
    }
#line 443 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__SaveSuccip_37 == (MR_Integer) 1);
#line 444 "proc_gen.m"
    if (!(ll_backend__proc_gen__succeeded))
#line 444 "proc_gen.m"
      {
#line 444 "proc_gen.m"
        MR_Word ll_backend__proc_gen___TableIODeclInfo_70;

#line 444 "proc_gen.m"
        ll_backend__proc_gen__succeeded = ((MR_tag((MR_Word) ll_backend__proc_gen__MaybeTableIOInfo_69)) == (MR_mktag((MR_Integer) 1)));
#line 444 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 444 "proc_gen.m"
          ll_backend__proc_gen___TableIODeclInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableIOInfo_69, (MR_Integer) 0)));
#line 444 "proc_gen.m"
      }
#line 508 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 448 "proc_gen.m"
      {
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__RttiProcLabel_71;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__InternalMap_72;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__EntryLabel_73;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__EvalMethod_74;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__InstMap0_75;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__HeadVars_76;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__VarSet_77;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ArgModes_78;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__VarTypes_79;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TraceSuppress_80;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__NeedGoalRep_81;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__NeedsAllNames_82;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeHLDSDeepInfo_83;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeDeepProfInfo_85;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__EffTraceLevel_86;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TableStructMap_87;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredProcId_88;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__MaybeTableInfo_92;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__OISUKindFors_95;
#line 448 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ProcLayout_96;
#line 460 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_123_123;

#line 448 "proc_gen.m"
        {
#line 448 "proc_gen.m"
          ll_backend__proc_gen__RttiProcLabel_71 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14);
        }
#line 449 "proc_gen.m"
        {
#line 449 "proc_gen.m"
          ll_backend__code_info__get_layout_info_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__InternalMap_72);
        }
#line 450 "proc_gen.m"
        {
#line 450 "proc_gen.m"
          ll_backend__proc_gen__EntryLabel_73 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 451 "proc_gen.m"
        {
#line 451 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__EvalMethod_74);
        }
#line 452 "proc_gen.m"
        {
#line 452 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__InstMap0_75);
        }
#line 453 "proc_gen.m"
        {
#line 453 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__HeadVars_76);
        }
#line 454 "proc_gen.m"
        {
#line 454 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__VarSet_77);
        }
#line 455 "proc_gen.m"
        {
#line 455 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__ArgModes_78);
        }
#line 456 "proc_gen.m"
        {
#line 456 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__VarTypes_79);
        }
#line 457 "proc_gen.m"
        {
#line 457 "proc_gen.m"
          libs__globals__get_trace_suppress_2_p_0(ll_backend__proc_gen__Globals_20, &ll_backend__proc_gen__TraceSuppress_80);
        }
#line 460 "proc_gen.m"
        {
#line 460 "proc_gen.m"
          ll_backend__proc_gen__V_123_123 = libs__trace_params__eff_trace_needs_proc_body_reps_5_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__TraceLevel_21, ll_backend__proc_gen__TraceSuppress_80);
        }
#line 460 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_123_123 == (MR_Integer) 1);
#line 463 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 462 "proc_gen.m"
          ll_backend__proc_gen__NeedGoalRep_81 = (MR_Integer) 0;
#line 463 "proc_gen.m"
        else
#line 464 "proc_gen.m"
          ll_backend__proc_gen__NeedGoalRep_81 = (MR_Integer) 1;
#line 466 "proc_gen.m"
        {
#line 466 "proc_gen.m"
          ll_backend__proc_gen__NeedsAllNames_82 = libs__trace_params__eff_trace_needs_all_var_names_5_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__TraceLevel_21, ll_backend__proc_gen__TraceSuppress_80);
        }
#line 468 "proc_gen.m"
        {
#line 468 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__MaybeHLDSDeepInfo_83);
        }
#line 473 "proc_gen.m"
        if ((ll_backend__proc_gen__MaybeHLDSDeepInfo_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "proc_gen.m"
          ll_backend__proc_gen__MaybeDeepProfInfo_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 473 "proc_gen.m"
        else
#line 470 "proc_gen.m"
          {
#line 470 "proc_gen.m"
            MR_Word ll_backend__proc_gen__HLDSDeepInfo_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeHLDSDeepInfo_83, (MR_Integer) 0)));

#line 471 "proc_gen.m"
            {
#line 471 "proc_gen.m"
              ll_backend__proc_gen__MaybeDeepProfInfo_85 = ll_backend__proc_gen__maybe_generate_deep_prof_info_2_f_0(ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__HLDSDeepInfo_84);
            }
#line 470 "proc_gen.m"
          }
#line 477 "proc_gen.m"
        {
#line 477 "proc_gen.m"
          ll_backend__proc_gen__EffTraceLevel_86 = libs__trace_params__eff_trace_level_4_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredInfo_13, ll_backend__proc_gen__ProcInfo_25, ll_backend__proc_gen__TraceLevel_21);
        }
#line 479 "proc_gen.m"
        {
#line 479 "proc_gen.m"
          hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ll_backend__proc_gen__ModuleInfo_18, &ll_backend__proc_gen__TableStructMap_87);
        }
#line 480 "proc_gen.m"
        {
#line 480 "proc_gen.m"
          ll_backend__proc_gen__PredProcId_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__PredProcId_88, 0) = ((MR_Box) (ll_backend__proc_gen__PredId_12));
#line 480 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__PredProcId_88, 1) = ((MR_Box) (ll_backend__proc_gen__ProcId_14));
#line 480 "proc_gen.m"
        }
#line 490 "proc_gen.m"
        if ((ll_backend__proc_gen__MaybeTableIOInfo_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "proc_gen.m"
          {
#line 487 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TableStructInfo_89;
#line 483 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv0_TableStructInfo_89;

#line 483 "proc_gen.m"
            {
#line 483 "proc_gen.m"
              ll_backend__proc_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ll_backend__proc_gen__TableStructMap_87, ((MR_Box) (ll_backend__proc_gen__PredProcId_88)), &ll_backend__proc_gen__conv0_TableStructInfo_89);
            }
#line 483 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 483 "proc_gen.m"
              {
#line 483 "proc_gen.m"
                ll_backend__proc_gen__TableStructInfo_89 = ((MR_Word) ll_backend__proc_gen__conv0_TableStructInfo_89);
#line 483 "proc_gen.m"
                ll_backend__proc_gen__succeeded = MR_TRUE;
#line 483 "proc_gen.m"
              }
#line 487 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 485 "proc_gen.m"
              {
#line 485 "proc_gen.m"
                MR_Word ll_backend__proc_gen__ProcTableStructInfo_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_89, (MR_Integer) 0)));
#line 485 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_128_128;
#line 484 "proc_gen.m"
                MR_Word ll_backend__proc_gen___Attributes_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__TableStructInfo_89, (MR_Integer) 1)));

#line 486 "proc_gen.m"
                {
#line 486 "proc_gen.m"
                  ll_backend__proc_gen__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 486 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__V_128_128, 0) = ((MR_Box) (ll_backend__proc_gen__ProcTableStructInfo_90));
#line 486 "proc_gen.m"
                }
#line 486 "proc_gen.m"
                {
#line 486 "proc_gen.m"
                  ll_backend__proc_gen__MaybeTableInfo_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 486 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableInfo_92, 0) = ((MR_Box) (ll_backend__proc_gen__V_128_128));
#line 486 "proc_gen.m"
                }
#line 485 "proc_gen.m"
              }
#line 487 "proc_gen.m"
            else
#line 488 "proc_gen.m"
              ll_backend__proc_gen__MaybeTableInfo_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 487 "proc_gen.m"
          }
#line 490 "proc_gen.m"
        else
#line 491 "proc_gen.m"
          {
#line 491 "proc_gen.m"
            MR_Word ll_backend__proc_gen__TableIOInfo_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableIOInfo_69, (MR_Integer) 0)));
#line 492 "proc_gen.m"
            MR_Word ll_backend__proc_gen___TableStructInfo_94;
#line 492 "proc_gen.m"
            MR_Box ll_backend__proc_gen__conv1__TableStructInfo_94;

#line 492 "proc_gen.m"
            {
#line 492 "proc_gen.m"
              ll_backend__proc_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ll_backend__proc_gen__TableStructMap_87, ((MR_Box) (ll_backend__proc_gen__PredProcId_88)), &ll_backend__proc_gen__conv1__TableStructInfo_94);
            }
#line 492 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 492 "proc_gen.m"
              {
#line 492 "proc_gen.m"
                ll_backend__proc_gen___TableStructInfo_94 = ((MR_Word) ll_backend__proc_gen__conv1__TableStructInfo_94);
#line 492 "proc_gen.m"
                ll_backend__proc_gen__succeeded = MR_TRUE;
#line 492 "proc_gen.m"
              }
#line 494 "proc_gen.m"
            if (ll_backend__proc_gen__succeeded)
#line 493 "proc_gen.m"
              {
#line 493 "proc_gen.m"
                {
#line 493 "proc_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "conflicting kinds of tabling");
#line 493 "proc_gen.m"
                  return;
                }
#line 493 "proc_gen.m"
              }
#line 494 "proc_gen.m"
            else
#line 495 "proc_gen.m"
              {
#line 495 "proc_gen.m"
                MR_Word ll_backend__proc_gen__V_127_127;

#line 495 "proc_gen.m"
                {
#line 495 "proc_gen.m"
                  ll_backend__proc_gen__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 495 "proc_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_127_127, 0) = ((MR_Box) (ll_backend__proc_gen__TableIOInfo_93));
#line 495 "proc_gen.m"
                }
#line 495 "proc_gen.m"
                {
#line 495 "proc_gen.m"
                  ll_backend__proc_gen__MaybeTableInfo_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 495 "proc_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__proc_gen__MaybeTableInfo_92, 0) = ((MR_Box) (ll_backend__proc_gen__V_127_127));
#line 495 "proc_gen.m"
                }
#line 495 "proc_gen.m"
              }
#line 491 "proc_gen.m"
          }
#line 498 "proc_gen.m"
        {
#line 498 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_oisu_kind_fors_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__OISUKindFors_95);
        }
#line 499 "proc_gen.m"
        {
#line 499 "proc_gen.m"
          ll_backend__proc_gen__ProcLayout_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 24 * sizeof(MR_Word)), NULL, NULL);
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 0) = ((MR_Box) (ll_backend__proc_gen__RttiProcLabel_71));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 1) = ((MR_Box) (ll_backend__proc_gen__EntryLabel_73));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 2) = ((MR_Box) (ll_backend__proc_gen__Detism_27));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 3) = ((MR_Box) (ll_backend__proc_gen__TotalSlots_64));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 4) = ((MR_Box) (ll_backend__proc_gen__MaybeSuccipSlot_65));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 5) = ((MR_Box) (ll_backend__proc_gen__EvalMethod_74));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 6) = ((MR_Box) (ll_backend__proc_gen__EffTraceLevel_86));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 7) = ((MR_Box) (ll_backend__proc_gen__MaybeTraceCallLabel_50));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 8) = ((MR_Box) (ll_backend__proc_gen__MaxTraceRegR_55));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 9) = ((MR_Box) (ll_backend__proc_gen__MaxTraceRegF_56));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 10) = ((MR_Box) (ll_backend__proc_gen__HeadVars_76));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 11) = ((MR_Box) (ll_backend__proc_gen__ArgModes_78));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 12) = ((MR_Box) (ll_backend__proc_gen__Goal_29));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 13) = ((MR_Box) (ll_backend__proc_gen__NeedGoalRep_81));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 14) = ((MR_Box) (ll_backend__proc_gen__InstMap0_75));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 15) = ((MR_Box) (ll_backend__proc_gen__TraceSlotInfo_42));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 16) = ((MR_Box) (ll_backend__proc_gen__ForceProcId_36));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 17) = ((MR_Box) (ll_backend__proc_gen__VarSet_77));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 18) = ((MR_Box) (ll_backend__proc_gen__VarTypes_79));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 19) = ((MR_Box) (ll_backend__proc_gen__InternalMap_72));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 20) = ((MR_Box) (ll_backend__proc_gen__MaybeTableInfo_92));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 21) = ((MR_Box) (ll_backend__proc_gen__NeedsAllNames_82));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 22) = ((MR_Box) (ll_backend__proc_gen__OISUKindFors_95));
#line 499 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__ProcLayout_96, 23) = ((MR_Box) (ll_backend__proc_gen__MaybeDeepProfInfo_85));
#line 499 "proc_gen.m"
        }
#line 506 "proc_gen.m"
        {
#line 506 "proc_gen.m"
          ll_backend__global_data__global_data_add_new_proc_layout_4_p_0(ll_backend__proc_gen__PredProcId_88, ll_backend__proc_gen__ProcLayout_96, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_116_116, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_130_130);
        }
#line 448 "proc_gen.m"
      }
#line 508 "proc_gen.m"
    else
#line 506 "proc_gen.m"
      ll_backend__proc_gen__STATE_VARIABLE_GlobalData_130_130 = ll_backend__proc_gen__STATE_VARIABLE_GlobalData_116_116;
#line 512 "proc_gen.m"
    {
#line 512 "proc_gen.m"
      ll_backend__code_info__get_closure_layouts_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__ClosureLayouts_97);
    }
#line 513 "proc_gen.m"
    {
#line 513 "proc_gen.m"
      ll_backend__global_data__global_data_add_new_closure_layouts_3_p_0(ll_backend__proc_gen__ClosureLayouts_97, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_130_130, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_131_131);
    }
#line 514 "proc_gen.m"
    {
#line 514 "proc_gen.m"
      ll_backend__proc_gen__ProcLabel_98 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14);
    }
#line 516 "proc_gen.m"
    {
#line 516 "proc_gen.m"
      ll_backend__code_info__get_alloc_sites_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__AllocSites_99);
    }
#line 517 "proc_gen.m"
    {
#line 517 "proc_gen.m"
      ll_backend__global_data__global_data_add_new_alloc_sites_3_p_0(ll_backend__proc_gen__AllocSites_99, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_131_131, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_109);
    }
#line 519 "proc_gen.m"
    {
#line 519 "proc_gen.m"
      ll_backend__proc_gen__Name_100 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__proc_gen__PredInfo_13);
    }
#line 520 "proc_gen.m"
    {
#line 520 "proc_gen.m"
      ll_backend__proc_gen__Arity_101 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__proc_gen__PredInfo_13);
    }
#line 522 "proc_gen.m"
    {
#line 522 "proc_gen.m"
      ll_backend__code_info__get_label_counter_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__LabelCounter_102);
    }
#line 412 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__ProcTraceEvents_61 == (MR_Integer) 1);
#line 412 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 412 "proc_gen.m"
      {
#line 413 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CreatedTempFrame_60 == (MR_Integer) 1);
#line 412 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 412 "proc_gen.m"
          {
#line 414 "proc_gen.m"
            ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__CodeModel_28 == (MR_Integer) 2);
#line 414 "proc_gen.m"
            ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 412 "proc_gen.m"
          }
#line 412 "proc_gen.m"
      }
#line 8446 "ll_backend.proc_gen.c"
    if (ll_backend__proc_gen__succeeded)
#line 8448 "ll_backend.proc_gen.c"
      {
#line 8450 "ll_backend.proc_gen.c"
        MR_Word ll_backend__proc_gen__HaveMaxfrSlot_62;
#line 8452 "ll_backend.proc_gen.c"
        MR_Word ll_backend__proc_gen__V_117_117;

#line 421 "proc_gen.m"
        {
#line 421 "proc_gen.m"
          hlds__hlds_pred__proc_info_get_need_maxfr_slot_2_p_0(ll_backend__proc_gen__ProcInfo_25, &ll_backend__proc_gen__HaveMaxfrSlot_62);
        }
#line 422 "proc_gen.m"
        {
#line 422 "proc_gen.m"
          ll_backend__proc_gen__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 422 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_117_117, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_5[0]));
#line 422 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_117_117, 1) = ((MR_Box) (ll_backend__proc_gen__generate_proc_code_9_p_0_1));
#line 422 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_117_117, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 422 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_117_117, 3) = ((MR_Box) (ll_backend__proc_gen__HaveMaxfrSlot_62));
#line 422 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_117_117, 4) = ((MR_Box) ((MR_Integer) 1));
#line 422 "proc_gen.m"
        }
#line 422 "proc_gen.m"
        {
#line 422 "proc_gen.m"
          mercury__require__expect_4_p_0(ll_backend__proc_gen__V_117_117, (MR_String) "ll_backend.proc_gen", (MR_String) "predicate \140ll_backend.proc_gen.generate_proc_code\'/9", (MR_String) "should have reserved a slot for maxfr, but didn\'t");
        }
#line 529 "proc_gen.m"
        ll_backend__proc_gen__MayAlterRtti_103 = (MR_Integer) 1;
#line 8483 "ll_backend.proc_gen.c"
      }
#line 8485 "ll_backend.proc_gen.c"
    else
#line 527 "proc_gen.m"
      if ((ll_backend__proc_gen__ProcTraceEvents_61 == (MR_Integer) 0))
#line 526 "proc_gen.m"
        ll_backend__proc_gen__MayAlterRtti_103 = (MR_Integer) 0;
#line 527 "proc_gen.m"
      else
#line 529 "proc_gen.m"
        ll_backend__proc_gen__MayAlterRtti_103 = (MR_Integer) 1;
#line 532 "proc_gen.m"
    {
#line 532 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_20, (MR_Integer) 132, &ll_backend__proc_gen__GenBytecode_104);
    }
#line 537 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__GenBytecode_104 == (MR_Integer) 1);
#line 537 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 537 "proc_gen.m"
      {
#line 543 "proc_gen.m"
        {
#line 543 "proc_gen.m"
          ll_backend__proc_gen__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(ll_backend__proc_gen__PredInfo_13);
        }
#line 543 "proc_gen.m"
        ll_backend__proc_gen__succeeded = !(ll_backend__proc_gen__succeeded);
#line 537 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 537 "proc_gen.m"
          {
#line 545 "proc_gen.m"
            {
#line 545 "proc_gen.m"
              ll_backend__proc_gen__V_134_134 = hlds__hlds_goal__goal_has_foreign_1_f_0(ll_backend__proc_gen__Goal_29);
            }
#line 545 "proc_gen.m"
            ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__V_134_134 == (MR_Integer) 0);
#line 537 "proc_gen.m"
          }
#line 537 "proc_gen.m"
      }
#line 549 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 547 "proc_gen.m"
      {
#line 547 "proc_gen.m"
        {
#line 547 "proc_gen.m"
          ll_backend__proc_gen__bytecode_stub_4_p_0(ll_backend__proc_gen__ModuleInfo_18, ll_backend__proc_gen__PredId_12, ll_backend__proc_gen__ProcId_14, &ll_backend__proc_gen__ProcInstructions_105);
        }
#line 548 "proc_gen.m"
        {
#line 548 "proc_gen.m"
          ll_backend__proc_gen__ProcLabelCounter_106 = mercury__counter__init_1_f_0((MR_Integer) 0);
        }
#line 547 "proc_gen.m"
      }
#line 549 "proc_gen.m"
    else
#line 550 "proc_gen.m"
      {
#line 550 "proc_gen.m"
        ll_backend__proc_gen__ProcInstructions_105 = ll_backend__proc_gen__Instructions_68;
#line 551 "proc_gen.m"
        ll_backend__proc_gen__ProcLabelCounter_106 = ll_backend__proc_gen__LabelCounter_102;
#line 550 "proc_gen.m"
      }
#line 553 "proc_gen.m"
    {
#line 553 "proc_gen.m"
      ll_backend__code_info__get_used_env_vars_2_p_0(ll_backend__proc_gen__CodeInfo_52, &ll_backend__proc_gen__UsedEnvVars_107);
    }
#line 554 "proc_gen.m"
    {
#line 554 "proc_gen.m"
      ll_backend__proc_gen__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 554 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_136_136, 0) = ((MR_Box) (ll_backend__proc_gen__PredId_12));
#line 554 "proc_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_136_136, 1) = ((MR_Box) (ll_backend__proc_gen__ProcId_14));
#line 554 "proc_gen.m"
    }
#line 554 "proc_gen.m"
    {
#line 554 "proc_gen.m"
      MR_Word base;
#line 554 "proc_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 554 "proc_gen.m"
      *ll_backend__proc_gen__CProc_17 = base;
#line 554 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__proc_gen__Name_100));
#line 554 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__proc_gen__Arity_101));
#line 554 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__proc_gen__V_136_136));
#line 554 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__proc_gen__CodeModel_28));
#line 554 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__proc_gen__ProcInstructions_105));
#line 554 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__proc_gen__ProcLabel_98));
#line 554 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__proc_gen__ProcLabelCounter_106));
#line 554 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__proc_gen__MayAlterRtti_103));
#line 554 "proc_gen.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__proc_gen__UsedEnvVars_107));
#line 554 "proc_gen.m"
    }
#line 322 "proc_gen.m"
  }
#line 54 "proc_gen.m"
}

#line 202 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_7_p_0_2(
#line 202 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 202 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 202 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2)
#line 202 "proc_gen.m"
{
#line 202 "proc_gen.m"
  {
#line 202 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 202 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv4_HeadVar__3_3;

#line 202 "proc_gen.m"
    {
#line 202 "proc_gen.m"
      ll_backend__global_data__remap_references_to_global_data_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__proc_gen__wrapper_arg_1), &ll_backend__proc_gen__conv4_HeadVar__3_3);
    }
#line 202 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__proc_gen__conv4_HeadVar__3_3));
#line 202 "proc_gen.m"
  }
#line 202 "proc_gen.m"
}

#line 189 "proc_gen.m"
static void MR_CALL 
ll_backend__proc_gen__generate_module_code_7_p_0_1(
#line 189 "proc_gen.m"
  MR_Box ll_backend__proc_gen__closure_arg,
#line 189 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_1,
#line 189 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_2,
#line 189 "proc_gen.m"
  MR_Box ll_backend__proc_gen__wrapper_arg_3,
#line 189 "proc_gen.m"
  MR_Box * ll_backend__proc_gen__wrapper_arg_4)
#line 189 "proc_gen.m"
{
#line 189 "proc_gen.m"
  {
#line 189 "proc_gen.m"
    MR_Box ll_backend__proc_gen__closure = ll_backend__proc_gen__closure_arg;
#line 189 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv1_CProcs_10;
#line 189 "proc_gen.m"
    MR_Word ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_16;

#line 189 "proc_gen.m"
    {
#line 189 "proc_gen.m"
      ll_backend__proc_gen__generate_pred_code_par_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__proc_gen__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__proc_gen__wrapper_arg_1), &ll_backend__proc_gen__conv1_CProcs_10, ((MR_Word) ll_backend__proc_gen__wrapper_arg_3), &ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_16);
    }
#line 189 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__proc_gen__conv1_CProcs_10));
#line 189 "proc_gen.m"
    *ll_backend__proc_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__proc_gen__conv0_STATE_VARIABLE_GlobalData_16));
#line 189 "proc_gen.m"
  }
#line 189 "proc_gen.m"
}

#line 47 "proc_gen.m"
void MR_CALL 
ll_backend__proc_gen__generate_module_code_7_p_0(
#line 47 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_18,
#line 47 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_19,
#line 47 "proc_gen.m"
  MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_20,
#line 47 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__STATE_VARIABLE_GlobalData_21,
#line 47 "proc_gen.m"
  MR_Word * ll_backend__proc_gen__Procedures_10)
#line 47 "proc_gen.m"
{
#line 121 "proc_gen.m"
  {
#line 121 "proc_gen.m"
    MR_bool ll_backend__proc_gen__succeeded;
#line 121 "proc_gen.m"
    MR_Word ll_backend__proc_gen__PredIds_12;
#line 121 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Globals_13;
#line 121 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ParallelCodeGen_14;
#line 121 "proc_gen.m"
    MR_Word ll_backend__proc_gen__VeryVerbose_15;
#line 121 "proc_gen.m"
    MR_Word ll_backend__proc_gen__Statistics_16;
#line 121 "proc_gen.m"
    MR_Word ll_backend__proc_gen__ConstStructMap_17;
#line 121 "proc_gen.m"
    MR_Word ll_backend__proc_gen__STATE_VARIABLE_GlobalData_31_31;

#line 123 "proc_gen.m"
    {
#line 123 "proc_gen.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&ll_backend__proc_gen__PredIds_12, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_0_18, ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_19);
    }
#line 125 "proc_gen.m"
    {
#line 125 "proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(*ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_19, &ll_backend__proc_gen__Globals_13);
    }
#line 126 "proc_gen.m"
    {
#line 126 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_13, (MR_Integer) 302, &ll_backend__proc_gen__ParallelCodeGen_14);
    }
#line 127 "proc_gen.m"
    {
#line 127 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_13, (MR_Integer) 45, &ll_backend__proc_gen__VeryVerbose_15);
    }
#line 128 "proc_gen.m"
    {
#line 128 "proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__proc_gen__Globals_13, (MR_Integer) 55, &ll_backend__proc_gen__Statistics_16);
    }
#line 135 "proc_gen.m"
    if ((ll_backend__proc_gen__VeryVerbose_15 == (MR_Integer) 0))
#line 137 "proc_gen.m"
      {
#line 137 "proc_gen.m"
        ll_backend__unify_gen__generate_const_structs_4_p_0(*ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_19, &ll_backend__proc_gen__ConstStructMap_17, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_20, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_31_31);
      }
#line 135 "proc_gen.m"
    else
#line 131 "proc_gen.m"
      {
#line 132 "proc_gen.m"
        {
#line 132 "proc_gen.m"
          mercury__io__write_string_3_p_0((MR_String) "% Generating constant structures\n");
        }
#line 133 "proc_gen.m"
        {
#line 133 "proc_gen.m"
          ll_backend__unify_gen__generate_const_structs_4_p_0(*ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_19, &ll_backend__proc_gen__ConstStructMap_17, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_0_20, &ll_backend__proc_gen__STATE_VARIABLE_GlobalData_31_31);
        }
#line 134 "proc_gen.m"
        {
#line 134 "proc_gen.m"
          libs__file_util__maybe_report_stats_3_p_0(ll_backend__proc_gen__Statistics_16);
        }
#line 131 "proc_gen.m"
      }
#line 141 "proc_gen.m"
    ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__ParallelCodeGen_14 == (MR_Integer) 1);
#line 141 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 141 "proc_gen.m"
      {
#line 143 "proc_gen.m"
        ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__VeryVerbose_15 == (MR_Integer) 0);
#line 141 "proc_gen.m"
        if (ll_backend__proc_gen__succeeded)
#line 144 "proc_gen.m"
          ll_backend__proc_gen__succeeded = (ll_backend__proc_gen__Statistics_16 == (MR_Integer) 0);
#line 141 "proc_gen.m"
      }
#line 148 "proc_gen.m"
    if (ll_backend__proc_gen__succeeded)
#line 146 "proc_gen.m"
      {
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeCtorInfo_35_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeInfo_36_65;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeInfo_41_70;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeCtorInfo_42_71;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__TypeCtorInfo_43_72;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ListsOfPredIds_43;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ListsOfPredIdsA_44;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ListsOfPredIdsB_45;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredIdsA_47;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredProceduresA_48;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__GlobalDataA_49;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ProceduresA_50;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredIdsB_51;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__GlobalData1_52;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__PredProceduresB0_53;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__GlobalDataB_54;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ProceduresB0_55;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Remap_56;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__ProceduresB_57;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_59_59;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__V_63_63;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__As_80;
#line 146 "proc_gen.m"
        MR_Word ll_backend__proc_gen__Bs_81;
#line 189 "proc_gen.m"
        MR_Box ll_backend__proc_gen__conv2_GlobalDataA_49;
#line 196 "proc_gen.m"
        MR_Box ll_backend__proc_gen__conv3_GlobalDataB_54;

#line 184 "proc_gen.m"
        {
#line 184 "proc_gen.m"
          mercury__list__chunk_3_p_0(ll_backend__proc_gen__TypeCtorInfo_35_64, ll_backend__proc_gen__PredIds_12, (MR_Integer) 50, &ll_backend__proc_gen__ListsOfPredIds_43);
        }
#line 8831 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__TypeInfo_36_65 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[2];
#line 220 "proc_gen.m"
        {
#line 220 "proc_gen.m"
          ll_backend__proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_116_101_114_108_101_97_118_101_95_50_95_95_91_49_93_95_48_5_p_0(ll_backend__proc_gen__ListsOfPredIds_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__proc_gen__As_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__proc_gen__Bs_81);
        }
#line 219 "proc_gen.m"
        {
#line 219 "proc_gen.m"
          ll_backend__proc_gen__ListsOfPredIdsA_44 = mercury__list__reverse_1_f_0(ll_backend__proc_gen__TypeInfo_36_65, ll_backend__proc_gen__As_80);
        }
#line 219 "proc_gen.m"
        {
#line 219 "proc_gen.m"
          ll_backend__proc_gen__ListsOfPredIdsB_45 = mercury__list__reverse_1_f_0(ll_backend__proc_gen__TypeInfo_36_65, ll_backend__proc_gen__Bs_81);
        }
#line 188 "proc_gen.m"
        {
#line 188 "proc_gen.m"
          mercury__list__condense_2_p_0(ll_backend__proc_gen__TypeCtorInfo_35_64, ll_backend__proc_gen__ListsOfPredIdsA_44, &ll_backend__proc_gen__PredIdsA_47);
        }
#line 189 "proc_gen.m"
        {
#line 189 "proc_gen.m"
          ll_backend__proc_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 189 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_59_59, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_3[0]));
#line 189 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_59_59, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_7_p_0_1));
#line 189 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 189 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_59_59, 3) = ((MR_Box) (*ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_19));
#line 189 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_59_59, 4) = ((MR_Box) (ll_backend__proc_gen__ConstStructMap_17));
#line 189 "proc_gen.m"
        }
#line 8869 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__TypeInfo_41_70 = (MR_Word) &ll_backend__proc_gen_scalar_common_1[1];
#line 8871 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__TypeCtorInfo_42_71 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0;
#line 189 "proc_gen.m"
        {
#line 189 "proc_gen.m"
          mercury__list__map_foldl_5_p_0(ll_backend__proc_gen__TypeCtorInfo_35_64, ll_backend__proc_gen__TypeInfo_41_70, ll_backend__proc_gen__TypeCtorInfo_42_71, ll_backend__proc_gen__V_59_59, ll_backend__proc_gen__PredIdsA_47, &ll_backend__proc_gen__PredProceduresA_48, ((MR_Box) (ll_backend__proc_gen__STATE_VARIABLE_GlobalData_31_31)), &ll_backend__proc_gen__conv2_GlobalDataA_49);
        }
#line 189 "proc_gen.m"
        ll_backend__proc_gen__GlobalDataA_49 = ((MR_Word) ll_backend__proc_gen__conv2_GlobalDataA_49);
#line 8880 "ll_backend.proc_gen.c"
        ll_backend__proc_gen__TypeCtorInfo_43_72 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0;
#line 191 "proc_gen.m"
        {
#line 191 "proc_gen.m"
          mercury__list__condense_2_p_0(ll_backend__proc_gen__TypeCtorInfo_43_72, ll_backend__proc_gen__PredProceduresA_48, &ll_backend__proc_gen__ProceduresA_50);
        }
#line 194 "proc_gen.m"
        {
#line 194 "proc_gen.m"
          mercury__list__condense_2_p_0(ll_backend__proc_gen__TypeCtorInfo_35_64, ll_backend__proc_gen__ListsOfPredIdsB_45, &ll_backend__proc_gen__PredIdsB_51);
        }
#line 195 "proc_gen.m"
        {
#line 195 "proc_gen.m"
          ll_backend__global_data__bump_type_num_counter_3_p_0((MR_Integer) 10000, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_31_31, &ll_backend__proc_gen__GlobalData1_52);
        }
#line 196 "proc_gen.m"
        {
#line 196 "proc_gen.m"
          mercury__list__map_foldl_5_p_0(ll_backend__proc_gen__TypeCtorInfo_35_64, ll_backend__proc_gen__TypeInfo_41_70, ll_backend__proc_gen__TypeCtorInfo_42_71, ll_backend__proc_gen__V_59_59, ll_backend__proc_gen__PredIdsB_51, &ll_backend__proc_gen__PredProceduresB0_53, ((MR_Box) (ll_backend__proc_gen__GlobalData1_52)), &ll_backend__proc_gen__conv3_GlobalDataB_54);
        }
#line 196 "proc_gen.m"
        ll_backend__proc_gen__GlobalDataB_54 = ((MR_Word) ll_backend__proc_gen__conv3_GlobalDataB_54);
#line 198 "proc_gen.m"
        {
#line 198 "proc_gen.m"
          mercury__list__condense_2_p_0(ll_backend__proc_gen__TypeCtorInfo_43_72, ll_backend__proc_gen__PredProceduresB0_53, &ll_backend__proc_gen__ProceduresB0_55);
        }
#line 200 "proc_gen.m"
        {
#line 200 "proc_gen.m"
          ll_backend__global_data__merge_global_datas_4_p_0(ll_backend__proc_gen__GlobalDataA_49, ll_backend__proc_gen__GlobalDataB_54, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_21, &ll_backend__proc_gen__Remap_56);
        }
#line 202 "proc_gen.m"
        {
#line 202 "proc_gen.m"
          ll_backend__proc_gen__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 202 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_63_63, 0) = ((MR_Box) (&ll_backend__proc_gen_scalar_common_4[0]));
#line 202 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_63_63, 1) = ((MR_Box) (ll_backend__proc_gen__generate_module_code_7_p_0_2));
#line 202 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 202 "proc_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__proc_gen__V_63_63, 3) = ((MR_Box) (ll_backend__proc_gen__Remap_56));
#line 202 "proc_gen.m"
        }
#line 202 "proc_gen.m"
        {
#line 202 "proc_gen.m"
          mercury__list__map_3_p_0(ll_backend__proc_gen__TypeCtorInfo_43_72, ll_backend__proc_gen__TypeCtorInfo_43_72, ll_backend__proc_gen__V_63_63, ll_backend__proc_gen__ProceduresB0_55, &ll_backend__proc_gen__ProceduresB_57);
        }
#line 205 "proc_gen.m"
        {
#line 205 "proc_gen.m"
          *ll_backend__proc_gen__Procedures_10 = mercury__list__f_43_43_2_f_0(ll_backend__proc_gen__TypeCtorInfo_43_72, ll_backend__proc_gen__ProceduresA_50, ll_backend__proc_gen__ProceduresB_57);
        }
#line 146 "proc_gen.m"
      }
#line 148 "proc_gen.m"
    else
#line 149 "proc_gen.m"
      {
#line 149 "proc_gen.m"
        ll_backend__proc_gen__generate_code_sequential_10_p_0(*ll_backend__proc_gen__STATE_VARIABLE_ModuleInfo_19, ll_backend__proc_gen__VeryVerbose_15, ll_backend__proc_gen__Statistics_16, ll_backend__proc_gen__ConstStructMap_17, ll_backend__proc_gen__PredIds_12, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_31_31, ll_backend__proc_gen__STATE_VARIABLE_GlobalData_21, ll_backend__proc_gen__Procedures_10);
#line 149 "proc_gen.m"
        return;
      }
#line 121 "proc_gen.m"
  }
#line 47 "proc_gen.m"
}

void mercury__ll_backend__proc_gen__init(void)
{
}

void mercury__ll_backend__proc_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_frame_info_0);
	MR_register_type_ctor_info(&ll_backend__proc_gen__ll_backend__proc_gen__type_ctor_info_type_giving_arg_0);
}

void mercury__ll_backend__proc_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.proc_gen. */
