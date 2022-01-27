/*
** Automatically generated from `deep_profiling.m'
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


/* :- module ll_backend.deep_profiling. */
/* :- implementation. */

/*
INIT mercury__ll_backend__deep_profiling__init
ENDINIT
*/

#include "ll_backend.deep_profiling.mih"


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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.coverage_profiling.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 159 "ll_backend.deep_profiling.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 162 "ll_backend.deep_profiling.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 165 "ll_backend.deep_profiling.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 168 "ll_backend.deep_profiling.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 174 "ll_backend.deep_profiling.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 177 "ll_backend.deep_profiling.c"
static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_0[1];

#line 180 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0;

#line 183 "ll_backend.deep_profiling.c"
static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_1[2];

#line 186 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1;

#line 189 "ll_backend.deep_profiling.c"
static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_2[1];

#line 192 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2;

#line 195 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_0[1];

#line 198 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_1[1];

#line 201 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_2[1];

#line 204 "ll_backend.deep_profiling.c"
static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_call_class_0[3];

#line 207 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_call_class_0[3];

#line 210 "ll_backend.deep_profiling.c"
static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_call_class_0[3];

#line 213 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__deep_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 216 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__cord__ti_cord_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0;

#line 219 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0;

#line 222 "ll_backend.deep_profiling.c"
static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_info_0_0[9];

#line 225 "ll_backend.deep_profiling.c"
static const MR_ConstString ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_info_0_0[9];

#line 228 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0;

#line 231 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_info_0_0[1];

#line 234 "ll_backend.deep_profiling.c"
static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_info_0[1];

#line 237 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_info_0[1];

#line 240 "ll_backend.deep_profiling.c"
static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_info_0[1];

#line 243 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__deep_profiling__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 246 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 249 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 252 "ll_backend.deep_profiling.c"
static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_prof_tail_rec_info_0_0[4];

#line 255 "ll_backend.deep_profiling.c"
static const MR_ConstString ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_prof_tail_rec_info_0_0[4];

#line 258 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0;

#line 261 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_prof_tail_rec_info_0_0[1];

#line 264 "ll_backend.deep_profiling.c"
static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_prof_tail_rec_info_0[1];

#line 267 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_prof_tail_rec_info_0[1];

#line 270 "ll_backend.deep_profiling.c"
static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_prof_tail_rec_info_0[1];

#line 273 "ll_backend.deep_profiling.c"
static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____call_class_0_0_10001(
#line 276 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 278 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2);

#line 281 "ll_backend.deep_profiling.c"
static void MR_CALL 
ll_backend__deep_profiling____Compare____call_class_0_0_10001(
#line 284 "ll_backend.deep_profiling.c"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_1,
#line 286 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
#line 288 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_3);

#line 291 "ll_backend.deep_profiling.c"
static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_info_0_0_10001(
#line 294 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 296 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2);

#line 299 "ll_backend.deep_profiling.c"
static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_info_0_0_10001(
#line 302 "ll_backend.deep_profiling.c"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_1,
#line 304 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
#line 306 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_3);

#line 309 "ll_backend.deep_profiling.c"
static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0_10001(
#line 312 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 314 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2);

#line 317 "ll_backend.deep_profiling.c"
static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0_10001(
#line 320 "ll_backend.deep_profiling.c"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_1,
#line 322 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
#line 324 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_3);

#line 1654 "deep_profiling.m"
static MR_String MR_CALL 
ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 828 "deep_profiling.m"
static MR_Word MR_CALL 
ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_f_0(
#line 828 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_5,
#line 828 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__PredId_6);

#line 313 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0(
#line 313 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__1_1,
#line 313 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
#line 313 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__3_3);

#line 313 "deep_profiling.m"
static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0(
#line 313 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 313 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2);

#line 676 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_info_0_0(
#line 676 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__1_1,
#line 676 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
#line 676 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__3_3);

#line 676 "deep_profiling.m"
static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_info_0_0(
#line 676 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 676 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2);

#line 1596 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling____Compare____call_class_0_0(
#line 1596 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__1_1,
#line 1596 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
#line 1596 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__3_3);

#line 1596 "deep_profiling.m"
static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____call_class_0_0(
#line 1596 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 1596 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2);

#line 1923 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__extract_deep_rec_info_2_p_0(
#line 1923 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MaybeDeepProfInfo_3,
#line 1923 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__MaybeRecInfo_4);

#line 1872 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_outermost_proc_dyns_8_p_0(
#line 1872 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__UseActivationCounts_9,
#line 1872 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TopCSD_10,
#line 1872 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MiddleCSD_11,
#line 1872 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__MaybeOldActivationPtr_12,
#line 1872 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__NewOutermostProcDyn_13,
#line 1872 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__ExcpVars_14,
#line 1872 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_17,
#line 1872 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_18);

#line 1855 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(
#line 1855 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__UseActivationCounts_8,
#line 1855 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TopCSD_9,
#line 1855 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MiddleCSD_10,
#line 1855 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__MaybeActivationPtr_11,
#line 1855 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__ExcpVars_12,
#line 1855 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_15,
#line 1855 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_16);

#line 1818 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_deep_cell_unify_5_p_0(
#line 1818 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__Length_6,
#line 1818 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ConsId_7,
#line 1818 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Args_8,
#line 1818 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Var_9,
#line 1818 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_10);

#line 1779 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_deep_det_call_6_p_0(
#line 1779 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_7,
#line 1779 "deep_profiling.m"
  MR_String ll_backend__deep_profiling__Name_8,
#line 1779 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__Arity_9,
#line 1779 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ArgVars_10,
#line 1779 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__OutputVars_11,
#line 1779 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_12);

#line 1769 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(
#line 1769 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__CSN_5,
#line 1769 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
#line 1769 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12,
#line 1769 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_13);

#line 1754 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_cell_6_p_0(
#line 1754 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__Length_7,
#line 1754 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__CSNVars_8,
#line 1754 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__CellVar_9,
#line 1754 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__CellGoal_10,
#line 1754 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19,
#line 1754 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_20);

#line 1744 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0_2(
#line 1744 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 1744 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 1744 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2,
#line 1744 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_3,
#line 1744 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_4);

#line 1742 "deep_profiling.m"
static MR_bool MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0_1(
#line 1742 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg);

#line 1731 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0(
#line 1731 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__Length_8,
#line 1731 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__CSNs_9,
#line 1731 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__CSNVars_10,
#line 1731 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__UnifyGoals_11,
#line 1731 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__CellVar_12,
#line 1731 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_21,
#line 1731 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_22);

#line 1722 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_depth_var_4_p_0(
#line 1722 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__CSN_5,
#line 1722 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__DepthVar_6,
#line 1722 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11,
#line 1722 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_12);

#line 1687 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0_1(
#line 1687 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 1687 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 1687 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2,
#line 1687 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_3,
#line 1687 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_4);

#line 1678 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(
#line 1678 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 1678 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__CSDVar_2,
#line 1678 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
#line 1678 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__4_4,
#line 1678 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__5_5,
#line 1678 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__6_6,
#line 1678 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_7,
#line 1678 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_8);

#line 1667 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_p_0(
#line 1667 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__CSNs_9,
#line 1667 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__CSDVar_10,
#line 1667 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__CallGoals_11,
#line 1667 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__ExitGoals_12,
#line 1667 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__FailGoals_13,
#line 1667 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__ExtraVars_14,
#line 1667 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_17,
#line 1667 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_18);

#line 1607 "deep_profiling.m"
static MR_Word MR_CALL 
ll_backend__deep_profiling__classify_call_2_f_0(
#line 1607 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_4,
#line 1607 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Expr_5);

#line 1587 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__compress_filename_3_p_0(
#line 1587 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Deep_4,
#line 1587 "deep_profiling.m"
  MR_String ll_backend__deep_profiling__FileName0_5,
#line 1587 "deep_profiling.m"
  MR_String * ll_backend__deep_profiling__FileName_6);

#line 1553 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_foreign_code_4_p_0(
#line 1553 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_5,
#line 1553 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_6,
#line 1553 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29,
#line 1553 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_30);

#line 1431 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_p_0(
#line 1431 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Globals_7,
#line 1431 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__CodeModel_8,
#line 1431 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_9,
#line 1431 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_10,
#line 1431 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35,
#line 1431 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_36);

#line 1234 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(
#line 1234 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_5,
#line 1234 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_6,
#line 1234 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96,
#line 1234 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97);

#line 1221 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(
#line 1221 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 1221 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
#line 1221 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
#line 1221 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4,
#line 1221 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5);

#line 1210 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(
#line 1210 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 1210 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
#line 1210 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
#line 1210 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4,
#line 1210 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5);

#line 1189 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(
#line 1189 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ConjType_1,
#line 1189 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
#line 1189 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
#line 1189 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__4_4,
#line 1189 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_5,
#line 1189 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_6);

#line 1181 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(
#line 1181 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_3,
#line 1181 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_4);

#line 1158 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_2(
#line 1158 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 1158 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 1158 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2);

#line 1158 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_1(
#line 1158 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 1158 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 1158 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2);

#line 1033 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(
#line 1033 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_6,
#line 1033 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_7,
#line 1033 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__AddedImpurity_8,
#line 1033 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81,
#line 1033 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);

#line 941 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__build_non_proc_body_10_p_0(
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_11,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TopCSD_12,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MiddleCSD_13,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ProcStaticVar_14,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MaybeOldActivationPtr_15,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__NewOutermostProcDyn_16,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__GoalInfo0_17,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_18,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_19,
#line 941 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_20);

#line 890 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__build_semi_proc_body_9_p_0(
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_10,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TopCSD_11,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MiddleCSD_12,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ProcStaticVar_13,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MaybeActivationPtr_14,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__GoalInfo0_15,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_16,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_17,
#line 890 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_18);

#line 850 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__build_det_proc_body_9_p_0(
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_10,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TopCSD_11,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MiddleCSD_12,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ProcStaticVar_13,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MaybeActivationPtr_14,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__GoalInfo0_15,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_16,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_17,
#line 850 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_18);

#line 798 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_inner_proc_4_p_0(
#line 798 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_5,
#line 798 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__PredProcId_6,
#line 798 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_0_28,
#line 798 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_29);

#line 691 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(
#line 691 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_6,
#line 691 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__PredProcId_7,
#line 691 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_0_48,
#line 691 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_49,
#line 691 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__DeepLayoutInfo_9);

#line 594 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_maybe_transform_proc_5_p_0(
#line 594 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_6,
#line 594 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__PredId_7,
#line 594 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__ProcId_8,
#line 594 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_0_17,
#line 594 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_18);

#line 589 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0_1(
#line 589 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 589 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 589 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
#line 589 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_3);

#line 582 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0(
#line 582 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_5,
#line 582 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__PredId_6,
#line 582 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_PredMap_0_13,
#line 582 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_PredMap_14);

#line 571 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_p_0(
#line 571 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 571 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0_2,
#line 571 "deep_profiling.m"
  MR_Integer * ll_backend__deep_profiling__STATE_VARIABLE_N_3,
#line 571 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4,
#line 571 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_5);

#line 563 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(
#line 563 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 563 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0_2,
#line 563 "deep_profiling.m"
  MR_Integer * ll_backend__deep_profiling__STATE_VARIABLE_N_3,
#line 563 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4,
#line 563 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_5);

#line 494 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(
#line 494 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal_6,
#line 494 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0_50,
#line 494 "deep_profiling.m"
  MR_Integer * ll_backend__deep_profiling__STATE_VARIABLE_N_51,
#line 494 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52,
#line 494 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53);

#line 479 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(
#line 479 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 479 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
#line 479 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TailRecInfo_3,
#line 479 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4,
#line 479 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5);

#line 464 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(
#line 464 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 464 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
#line 464 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TailRecInfo_3,
#line 464 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4,
#line 464 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5);

#line 443 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(
#line 443 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 443 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
#line 443 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TailRecInfo_3,
#line 443 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4,
#line 443 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5,
#line 443 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__6_6);

#line 430 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(
#line 430 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 430 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ToVar_2,
#line 430 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__FromVar_3,
#line 430 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__4_4);

#line 321 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(
#line 321 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_7,
#line 321 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_8,
#line 321 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TailRecInfo_9,
#line 321 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88,
#line 321 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89,
#line 321 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Continue_11);

#line 300 "deep_profiling.m"
static MR_Word MR_CALL 
ll_backend__deep_profiling__cases_contain_builtin_unify_or_compare_1_f_0(
#line 300 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1);

#line 290 "deep_profiling.m"
static MR_Word MR_CALL 
ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(
#line 290 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1);

#line 235 "deep_profiling.m"
static MR_Word MR_CALL 
ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(
#line 235 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal_3);

#line 217 "deep_profiling.m"
static MR_bool MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(
#line 217 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 217 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
#line 217 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__3_3,
#line 217 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_4,
#line 217 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__5_5);

#line 207 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_5_p_0(
#line 207 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Vars_6,
#line 207 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Modes_7,
#line 207 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Types_8,
#line 207 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_9,
#line 207 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_Outputs_11);

#line 128 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_transform_to_scc_3_p_0(
#line 128 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__SCC_4,
#line 128 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7,
#line 128 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8);

#line 112 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_2(
#line 112 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 112 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 112 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
#line 112 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_3);

#line 126 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_1(
#line 126 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 126 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 126 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
#line 126 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_1[11][3];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_2[13][2];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_4[3][7];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_5[1][8];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_6[3][1];

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_7[2][5];




static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_1[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[1])),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_3[0])),
    ((MR_Box) (ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_7[0])),
    ((MR_Box) (ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_7[0])),
    ((MR_Box) (ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_4[1])),
    ((MR_Box) (ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_4[2])),
    ((MR_Box) (ll_backend__deep_profiling__generate_csn_vector_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_2[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_1[4]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_1[6])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[6])),
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[6])),
    ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[7]))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__deep_profiling__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_4[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__deep_profiling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__deep_profiling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&ll_backend__deep_profiling__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_6[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box ll_backend__deep_profiling_scalar_common_7[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1330 "ll_backend.deep_profiling.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1338 "ll_backend.deep_profiling.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1347 "ll_backend.deep_profiling.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1356 "ll_backend.deep_profiling.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__deep_profiling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1364 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1372 "ll_backend.deep_profiling.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__deep_profiling__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1381 "ll_backend.deep_profiling.c"
static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1386 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0 = {
  (MR_String) "call_class_normal",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_0,
  NULL,
  NULL,
  NULL
};

#line 1401 "ll_backend.deep_profiling.c"
static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1407 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1 = {
  (MR_String) "call_class_special",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_1,
  NULL,
  NULL,
  NULL
};

#line 1422 "ll_backend.deep_profiling.c"
static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0
};

#line 1427 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2 = {
  (MR_String) "call_class_generic",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_call_class_0_2,
  NULL,
  NULL,
  NULL
};

#line 1442 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0
};

#line 1447 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_1[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1
};

#line 1452 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_2[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2
};

#line 1457 "ll_backend.deep_profiling.c"
static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_call_class_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_call_class_0_2
  }
};

#line 1476 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_call_class_0[3] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_2,
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_0,
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_call_class_0_1
};

#line 1483 "ll_backend.deep_profiling.c"
static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_call_class_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1490 "ll_backend.deep_profiling.c"
const MR_TypeCtorInfo_Struct ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_call_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__deep_profiling____Unify____call_class_0_0_10001)),
  ((MR_Box) (ll_backend__deep_profiling____Compare____call_class_0_0_10001)),
  (MR_String) "ll_backend.deep_profiling",
  (MR_String) "call_class",
  {     ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_call_class_0 },
  {     ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_call_class_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_call_class_0
};

#line 1507 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__deep_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 1516 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__cord__ti_cord_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0
  }
};

#line 1524 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_deep_recursion_info_0
  }
};

#line 1532 "ll_backend.deep_profiling.c"
static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__cord__ti_cord_1hlds__hlds_pred__type_ctor_info_call_site_static_data_0,
  (MR_PseudoTypeInfo) &hlds__vartypes__hlds__vartypes__type_ctor_info_prog_var_set_types_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_deep_recursion_info_0
};

#line 1545 "ll_backend.deep_profiling.c"
static const MR_ConstString ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_info_0_0[9] = {
  (MR_String) "deep_module_info",
  (MR_String) "deep_pred_proc_id",
  (MR_String) "deep_containing_goal_map",
  (MR_String) "deep_current_csd",
  (MR_String) "deep_site_num_counter",
  (MR_String) "deep_call_sites",
  (MR_String) "deep_varinfo",
  (MR_String) "deep_proc_filename",
  (MR_String) "deep_maybe_rec_info"
};

#line 1558 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0 = {
  (MR_String) "deep_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_info_0_0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_info_0_0,
  NULL,
  NULL
};

#line 1573 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_info_0_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0
};

#line 1578 "ll_backend.deep_profiling.c"
static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_info_0_0
  }
};

#line 1587 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_info_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_info_0_0
};

#line 1592 "ll_backend.deep_profiling.c"
static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_info_0[1] = {
  (MR_Integer) 0
};

#line 1597 "ll_backend.deep_profiling.c"
const MR_TypeCtorInfo_Struct ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__deep_profiling____Unify____deep_info_0_0_10001)),
  ((MR_Box) (ll_backend__deep_profiling____Compare____deep_info_0_0_10001)),
  (MR_String) "ll_backend.deep_profiling",
  (MR_String) "deep_info",
  {     ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_info_0 },
  {     ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_info_0
};

#line 1614 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__deep_profiling__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1623 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__deep_profiling__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1631 "ll_backend.deep_profiling.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__deep_profiling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__deep_profiling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1639 "ll_backend.deep_profiling.c"
static const MR_PseudoTypeInfo ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_prof_tail_rec_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0,
  (MR_PseudoTypeInfo) &ll_backend__deep_profiling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1647 "ll_backend.deep_profiling.c"
static const MR_ConstString ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_prof_tail_rec_info_0_0[4] = {
  (MR_String) "dptri_moduleinfo",
  (MR_String) "dptri_scc_ppids",
  (MR_String) "dptri_detism",
  (MR_String) "dptri_outputs"
};

#line 1655 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDesc ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0 = {
  (MR_String) "deep_prof_tail_rec_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_types_deep_prof_tail_rec_info_0_0,
  ll_backend__deep_profiling__ll_backend__deep_profiling__field_names_deep_prof_tail_rec_info_0_0,
  NULL,
  NULL
};

#line 1670 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_prof_tail_rec_info_0_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0
};

#line 1675 "ll_backend.deep_profiling.c"
static const MR_DuPtagLayout ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_prof_tail_rec_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__deep_profiling__ll_backend__deep_profiling__du_stag_ordered_deep_prof_tail_rec_info_0_0
  }
};

#line 1684 "ll_backend.deep_profiling.c"
static const MR_DuFunctorDescPtr ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_prof_tail_rec_info_0[1] = {
  &ll_backend__deep_profiling__ll_backend__deep_profiling__du_functor_desc_deep_prof_tail_rec_info_0_0
};

#line 1689 "ll_backend.deep_profiling.c"
static const MR_Integer ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_prof_tail_rec_info_0[1] = {
  (MR_Integer) 0
};

#line 1694 "ll_backend.deep_profiling.c"
const MR_TypeCtorInfo_Struct ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_prof_tail_rec_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0_10001)),
  ((MR_Box) (ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0_10001)),
  (MR_String) "ll_backend.deep_profiling",
  (MR_String) "deep_prof_tail_rec_info",
  {     ll_backend__deep_profiling__ll_backend__deep_profiling__du_name_ordered_deep_prof_tail_rec_info_0 },
  {     ll_backend__deep_profiling__ll_backend__deep_profiling__du_ptag_ordered_deep_prof_tail_rec_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__deep_profiling__ll_backend__deep_profiling__functor_number_map_deep_prof_tail_rec_info_0
};

#line 1711 "ll_backend.deep_profiling.c"
static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____call_class_0_0_10001(
#line 1714 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 1716 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2)
#line 1718 "ll_backend.deep_profiling.c"
{
#line 1720 "ll_backend.deep_profiling.c"
  {
#line 1722 "ll_backend.deep_profiling.c"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 1725 "ll_backend.deep_profiling.c"
    {
#line 1727 "ll_backend.deep_profiling.c"
      ll_backend__deep_profiling__succeeded = ll_backend__deep_profiling____Unify____call_class_0_0(((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2));
    }
#line 1730 "ll_backend.deep_profiling.c"
    return ll_backend__deep_profiling__succeeded;
#line 1732 "ll_backend.deep_profiling.c"
  }
#line 1734 "ll_backend.deep_profiling.c"
}

#line 1737 "ll_backend.deep_profiling.c"
static void MR_CALL 
ll_backend__deep_profiling____Compare____call_class_0_0_10001(
#line 1740 "ll_backend.deep_profiling.c"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_1,
#line 1742 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
#line 1744 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_3)
#line 1746 "ll_backend.deep_profiling.c"
{
#line 1748 "ll_backend.deep_profiling.c"
  {
#line 1750 "ll_backend.deep_profiling.c"
    MR_Word ll_backend__deep_profiling__conv0_HeadVar__1_1;

#line 1753 "ll_backend.deep_profiling.c"
    {
#line 1755 "ll_backend.deep_profiling.c"
      ll_backend__deep_profiling____Compare____call_class_0_0(&ll_backend__deep_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_3));
    }
#line 1758 "ll_backend.deep_profiling.c"
    *ll_backend__deep_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__deep_profiling__conv0_HeadVar__1_1));
#line 1760 "ll_backend.deep_profiling.c"
  }
#line 1762 "ll_backend.deep_profiling.c"
}

#line 1765 "ll_backend.deep_profiling.c"
static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_info_0_0_10001(
#line 1768 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 1770 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2)
#line 1772 "ll_backend.deep_profiling.c"
{
#line 1774 "ll_backend.deep_profiling.c"
  {
#line 1776 "ll_backend.deep_profiling.c"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 1779 "ll_backend.deep_profiling.c"
    {
#line 1781 "ll_backend.deep_profiling.c"
      ll_backend__deep_profiling__succeeded = ll_backend__deep_profiling____Unify____deep_info_0_0(((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2));
    }
#line 1784 "ll_backend.deep_profiling.c"
    return ll_backend__deep_profiling__succeeded;
#line 1786 "ll_backend.deep_profiling.c"
  }
#line 1788 "ll_backend.deep_profiling.c"
}

#line 1791 "ll_backend.deep_profiling.c"
static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_info_0_0_10001(
#line 1794 "ll_backend.deep_profiling.c"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_1,
#line 1796 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
#line 1798 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_3)
#line 1800 "ll_backend.deep_profiling.c"
{
#line 1802 "ll_backend.deep_profiling.c"
  {
#line 1804 "ll_backend.deep_profiling.c"
    MR_Word ll_backend__deep_profiling__conv0_HeadVar__1_1;

#line 1807 "ll_backend.deep_profiling.c"
    {
#line 1809 "ll_backend.deep_profiling.c"
      ll_backend__deep_profiling____Compare____deep_info_0_0(&ll_backend__deep_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_3));
    }
#line 1812 "ll_backend.deep_profiling.c"
    *ll_backend__deep_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__deep_profiling__conv0_HeadVar__1_1));
#line 1814 "ll_backend.deep_profiling.c"
  }
#line 1816 "ll_backend.deep_profiling.c"
}

#line 1819 "ll_backend.deep_profiling.c"
static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0_10001(
#line 1822 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 1824 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2)
#line 1826 "ll_backend.deep_profiling.c"
{
#line 1828 "ll_backend.deep_profiling.c"
  {
#line 1830 "ll_backend.deep_profiling.c"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 1833 "ll_backend.deep_profiling.c"
    {
#line 1835 "ll_backend.deep_profiling.c"
      ll_backend__deep_profiling__succeeded = ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0(((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2));
    }
#line 1838 "ll_backend.deep_profiling.c"
    return ll_backend__deep_profiling__succeeded;
#line 1840 "ll_backend.deep_profiling.c"
  }
#line 1842 "ll_backend.deep_profiling.c"
}

#line 1845 "ll_backend.deep_profiling.c"
static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0_10001(
#line 1848 "ll_backend.deep_profiling.c"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_1,
#line 1850 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
#line 1852 "ll_backend.deep_profiling.c"
  MR_Box ll_backend__deep_profiling__wrapper_arg_3)
#line 1854 "ll_backend.deep_profiling.c"
{
#line 1856 "ll_backend.deep_profiling.c"
  {
#line 1858 "ll_backend.deep_profiling.c"
    MR_Word ll_backend__deep_profiling__conv0_HeadVar__1_1;

#line 1861 "ll_backend.deep_profiling.c"
    {
#line 1863 "ll_backend.deep_profiling.c"
      ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0(&ll_backend__deep_profiling__conv0_HeadVar__1_1, ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_3));
    }
#line 1866 "ll_backend.deep_profiling.c"
    *ll_backend__deep_profiling__wrapper_arg_1 = ((MR_Box) (ll_backend__deep_profiling__conv0_HeadVar__1_1));
#line 1868 "ll_backend.deep_profiling.c"
  }
#line 1870 "ll_backend.deep_profiling.c"
}

#line 1654 "deep_profiling.m"
static MR_String MR_CALL 
ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1654 "deep_profiling.m"
{
#line 1657 "deep_profiling.m"
  {
#line 1657 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 1657 "deep_profiling.m"
    return (MR_String) "";
#line 1657 "deep_profiling.m"
  }
#line 1654 "deep_profiling.m"
}

#line 828 "deep_profiling.m"
static MR_Word MR_CALL 
ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_f_0(
#line 828 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_5,
#line 828 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__PredId_6)
#line 828 "deep_profiling.m"
{
#line 830 "deep_profiling.m"
  {
#line 830 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 830 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__IsInInterface_8;
#line 830 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredInfo_9;

#line 831 "deep_profiling.m"
    {
#line 831 "deep_profiling.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__deep_profiling__ModuleInfo_5, ll_backend__deep_profiling__PredId_6, &ll_backend__deep_profiling__PredInfo_9);
    }
#line 833 "deep_profiling.m"
    {
#line 833 "deep_profiling.m"
      ll_backend__deep_profiling__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(ll_backend__deep_profiling__PredInfo_9);
    }
#line 834 "deep_profiling.m"
    if (!(ll_backend__deep_profiling__succeeded))
#line 834 "deep_profiling.m"
      {
#line 834 "deep_profiling.m"
        ll_backend__deep_profiling__succeeded = hlds__hlds_pred__pred_info_is_pseudo_exported_1_p_0(ll_backend__deep_profiling__PredInfo_9);
      }
#line 838 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 837 "deep_profiling.m"
      ll_backend__deep_profiling__IsInInterface_8 = (MR_Integer) 1;
#line 838 "deep_profiling.m"
    else
#line 839 "deep_profiling.m"
      ll_backend__deep_profiling__IsInInterface_8 = (MR_Integer) 0;
#line 830 "deep_profiling.m"
    return ll_backend__deep_profiling__IsInInterface_8;
#line 830 "deep_profiling.m"
  }
#line 828 "deep_profiling.m"
}

#line 313 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_prof_tail_rec_info_0_0(
#line 313 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__1_1,
#line 313 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
#line 313 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__3_3)
#line 313 "deep_profiling.m"
{
#line 313 "deep_profiling.m"
  {
#line 313 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 313 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CastX_15 = (MR_Integer) ll_backend__deep_profiling__HeadVar__2_2;
#line 313 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CastY_16 = (MR_Integer) ll_backend__deep_profiling__HeadVar__3_3;

#line 313 "deep_profiling.m"
    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CastX_15 == ll_backend__deep_profiling__CastY_16);
#line 313 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 1964 "ll_backend.deep_profiling.c"
      *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 0;
#line 313 "deep_profiling.m"
    else
#line 313 "deep_profiling.m"
      {
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 2)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 3)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 0)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 1)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 2)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 3)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_12_12;

#line 313 "deep_profiling.m"
        {
#line 313 "deep_profiling.m"
          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__deep_profiling__V_12_12, ll_backend__deep_profiling__V_4_4, ll_backend__deep_profiling__V_8_8);
        }
#line 1994 "ll_backend.deep_profiling.c"
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_12_12 == (MR_Integer) 0);
#line 313 "deep_profiling.m"
        ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 313 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 313 "deep_profiling.m"
          *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__V_12_12;
#line 313 "deep_profiling.m"
        else
#line 313 "deep_profiling.m"
          {
#line 313 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_13_13;

#line 313 "deep_profiling.m"
            {
#line 313 "deep_profiling.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[4], &ll_backend__deep_profiling__V_13_13, ((MR_Box) (ll_backend__deep_profiling__V_5_5)), ((MR_Box) (ll_backend__deep_profiling__V_9_9)));
            }
#line 2014 "ll_backend.deep_profiling.c"
            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_13_13 == (MR_Integer) 0);
#line 313 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 313 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 313 "deep_profiling.m"
              *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__V_13_13;
#line 313 "deep_profiling.m"
            else
#line 313 "deep_profiling.m"
              {
#line 313 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_14_14;
#line 313 "deep_profiling.m"
                MR_Integer ll_backend__deep_profiling__V_21_21 = (MR_Integer) ll_backend__deep_profiling__V_6_6;
#line 313 "deep_profiling.m"
                MR_Integer ll_backend__deep_profiling__V_22_22 = (MR_Integer) ll_backend__deep_profiling__V_10_10;

#line 313 "deep_profiling.m"
                {
#line 313 "deep_profiling.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__deep_profiling__V_14_14, ll_backend__deep_profiling__V_21_21, ll_backend__deep_profiling__V_22_22);
                }
#line 2038 "ll_backend.deep_profiling.c"
                ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_14_14 == (MR_Integer) 0);
#line 313 "deep_profiling.m"
                ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 313 "deep_profiling.m"
                if (ll_backend__deep_profiling__succeeded)
#line 313 "deep_profiling.m"
                  *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__V_14_14;
#line 313 "deep_profiling.m"
                else
#line 313 "deep_profiling.m"
                  {
#line 313 "deep_profiling.m"
                    {
#line 313 "deep_profiling.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[5], ll_backend__deep_profiling__HeadVar__1_1, ((MR_Box) (ll_backend__deep_profiling__V_7_7)), ((MR_Box) (ll_backend__deep_profiling__V_11_11)));
#line 313 "deep_profiling.m"
                      return;
                    }
#line 313 "deep_profiling.m"
                  }
#line 313 "deep_profiling.m"
              }
#line 313 "deep_profiling.m"
          }
#line 313 "deep_profiling.m"
      }
#line 313 "deep_profiling.m"
  }
#line 313 "deep_profiling.m"
}

#line 313 "deep_profiling.m"
static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_prof_tail_rec_info_0_0(
#line 313 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 313 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2)
#line 313 "deep_profiling.m"
{
#line 313 "deep_profiling.m"
  {
#line 313 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 313 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CastX_11 = (MR_Integer) ll_backend__deep_profiling__HeadVar__1_1;
#line 313 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CastY_12 = (MR_Integer) ll_backend__deep_profiling__HeadVar__2_2;

#line 313 "deep_profiling.m"
    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CastX_11 == ll_backend__deep_profiling__CastY_12);
#line 313 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 313 "deep_profiling.m"
      ll_backend__deep_profiling__succeeded = MR_TRUE;
#line 313 "deep_profiling.m"
    else
#line 313 "deep_profiling.m"
      {
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeInfo_14_14;
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeInfo_15_15;
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 2)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 3)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 2)));
#line 313 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 3)));

#line 2119 "ll_backend.deep_profiling.c"
        {
#line 2121 "ll_backend.deep_profiling.c"
          ll_backend__deep_profiling__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__deep_profiling__V_3_3, ll_backend__deep_profiling__V_7_7);
        }
#line 313 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 313 "deep_profiling.m"
          {
#line 2128 "ll_backend.deep_profiling.c"
            ll_backend__deep_profiling__TypeInfo_14_14 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[4];
#line 2130 "ll_backend.deep_profiling.c"
            {
#line 2132 "ll_backend.deep_profiling.c"
              ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_14_14, ((MR_Box) (ll_backend__deep_profiling__V_4_4)), ((MR_Box) (ll_backend__deep_profiling__V_8_8)));
            }
#line 313 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 313 "deep_profiling.m"
              {
#line 2139 "ll_backend.deep_profiling.c"
                ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_5_5 == ll_backend__deep_profiling__V_9_9);
#line 313 "deep_profiling.m"
                if (ll_backend__deep_profiling__succeeded)
#line 313 "deep_profiling.m"
                  {
#line 2145 "ll_backend.deep_profiling.c"
                    ll_backend__deep_profiling__TypeInfo_15_15 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[5];
#line 2147 "ll_backend.deep_profiling.c"
                    {
#line 2149 "ll_backend.deep_profiling.c"
                      return ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_15_15, ((MR_Box) (ll_backend__deep_profiling__V_6_6)), ((MR_Box) (ll_backend__deep_profiling__V_10_10)));
                    }
#line 313 "deep_profiling.m"
                  }
#line 313 "deep_profiling.m"
              }
#line 313 "deep_profiling.m"
          }
#line 313 "deep_profiling.m"
      }
#line 313 "deep_profiling.m"
    return ll_backend__deep_profiling__succeeded;
#line 313 "deep_profiling.m"
  }
#line 313 "deep_profiling.m"
}

#line 676 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling____Compare____deep_info_0_0(
#line 676 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__1_1,
#line 676 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
#line 676 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__3_3)
#line 676 "deep_profiling.m"
{
#line 676 "deep_profiling.m"
  {
#line 676 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 676 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CastX_30 = (MR_Integer) ll_backend__deep_profiling__HeadVar__2_2;
#line 676 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CastY_31 = (MR_Integer) ll_backend__deep_profiling__HeadVar__3_3;

#line 676 "deep_profiling.m"
    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CastX_30 == ll_backend__deep_profiling__CastY_31);
#line 676 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 2191 "ll_backend.deep_profiling.c"
      *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 0;
#line 676 "deep_profiling.m"
    else
#line 676 "deep_profiling.m"
      {
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 2)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 3)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 4)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 5)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 6)));
#line 676 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 7)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 8)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 0)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 1)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 2)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 3)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 4)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 5)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 6)));
#line 676 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 7)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 8)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_22_22;

#line 676 "deep_profiling.m"
        {
#line 676 "deep_profiling.m"
          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__deep_profiling__V_22_22, ll_backend__deep_profiling__V_4_4, ll_backend__deep_profiling__V_13_13);
        }
#line 2241 "ll_backend.deep_profiling.c"
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_22_22 == (MR_Integer) 0);
#line 676 "deep_profiling.m"
        ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 676 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
          *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__V_22_22;
#line 676 "deep_profiling.m"
        else
#line 676 "deep_profiling.m"
          {
#line 676 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_23_23;

#line 676 "deep_profiling.m"
            {
#line 676 "deep_profiling.m"
              hlds__hlds_pred____Compare____pred_proc_id_0_0(&ll_backend__deep_profiling__V_23_23, ll_backend__deep_profiling__V_5_5, ll_backend__deep_profiling__V_14_14);
            }
#line 2261 "ll_backend.deep_profiling.c"
            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_23_23 == (MR_Integer) 0);
#line 676 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 676 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
              *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__V_23_23;
#line 676 "deep_profiling.m"
            else
#line 676 "deep_profiling.m"
              {
#line 676 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_24_24;

#line 676 "deep_profiling.m"
                {
#line 676 "deep_profiling.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_1[3], &ll_backend__deep_profiling__V_24_24, ((MR_Box) (ll_backend__deep_profiling__V_6_6)), ((MR_Box) (ll_backend__deep_profiling__V_15_15)));
                }
#line 2281 "ll_backend.deep_profiling.c"
                ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_24_24 == (MR_Integer) 0);
#line 676 "deep_profiling.m"
                ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 676 "deep_profiling.m"
                if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
                  *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__V_24_24;
#line 676 "deep_profiling.m"
                else
#line 676 "deep_profiling.m"
                  {
#line 676 "deep_profiling.m"
                    MR_Word ll_backend__deep_profiling__V_25_25;

#line 676 "deep_profiling.m"
                    {
#line 676 "deep_profiling.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[1], &ll_backend__deep_profiling__V_25_25, ((MR_Box) (ll_backend__deep_profiling__V_7_7)), ((MR_Box) (ll_backend__deep_profiling__V_16_16)));
                    }
#line 2301 "ll_backend.deep_profiling.c"
                    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_25_25 == (MR_Integer) 0);
#line 676 "deep_profiling.m"
                    ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 676 "deep_profiling.m"
                    if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
                      *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__V_25_25;
#line 676 "deep_profiling.m"
                    else
#line 676 "deep_profiling.m"
                      {
#line 676 "deep_profiling.m"
                        MR_Word ll_backend__deep_profiling__V_26_26;

#line 676 "deep_profiling.m"
                        {
#line 676 "deep_profiling.m"
                          mercury__counter____Compare____counter_0_0(&ll_backend__deep_profiling__V_26_26, ll_backend__deep_profiling__V_8_8, ll_backend__deep_profiling__V_17_17);
                        }
#line 2321 "ll_backend.deep_profiling.c"
                        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_26_26 == (MR_Integer) 0);
#line 676 "deep_profiling.m"
                        ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 676 "deep_profiling.m"
                        if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
                          *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__V_26_26;
#line 676 "deep_profiling.m"
                        else
#line 676 "deep_profiling.m"
                          {
#line 676 "deep_profiling.m"
                            MR_Word ll_backend__deep_profiling__V_27_27;

#line 676 "deep_profiling.m"
                            {
#line 676 "deep_profiling.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[2], &ll_backend__deep_profiling__V_27_27, ((MR_Box) (ll_backend__deep_profiling__V_9_9)), ((MR_Box) (ll_backend__deep_profiling__V_18_18)));
                            }
#line 2341 "ll_backend.deep_profiling.c"
                            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_27_27 == (MR_Integer) 0);
#line 676 "deep_profiling.m"
                            ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 676 "deep_profiling.m"
                            if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
                              *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__V_27_27;
#line 676 "deep_profiling.m"
                            else
#line 676 "deep_profiling.m"
                              {
#line 676 "deep_profiling.m"
                                MR_Word ll_backend__deep_profiling__V_28_28;

#line 676 "deep_profiling.m"
                                {
#line 676 "deep_profiling.m"
                                  hlds__vartypes____Compare____prog_var_set_types_0_0(&ll_backend__deep_profiling__V_28_28, ll_backend__deep_profiling__V_10_10, ll_backend__deep_profiling__V_19_19);
                                }
#line 2361 "ll_backend.deep_profiling.c"
                                ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_28_28 == (MR_Integer) 0);
#line 676 "deep_profiling.m"
                                ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 676 "deep_profiling.m"
                                if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
                                  *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__V_28_28;
#line 676 "deep_profiling.m"
                                else
#line 676 "deep_profiling.m"
                                  {
#line 676 "deep_profiling.m"
                                    MR_Word ll_backend__deep_profiling__V_29_29;

#line 676 "deep_profiling.m"
                                    {
#line 676 "deep_profiling.m"
                                      mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__deep_profiling__V_29_29, ll_backend__deep_profiling__V_11_11, ll_backend__deep_profiling__V_20_20);
                                    }
#line 2381 "ll_backend.deep_profiling.c"
                                    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_29_29 == (MR_Integer) 0);
#line 676 "deep_profiling.m"
                                    ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 676 "deep_profiling.m"
                                    if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
                                      *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__V_29_29;
#line 676 "deep_profiling.m"
                                    else
#line 676 "deep_profiling.m"
                                      {
#line 676 "deep_profiling.m"
                                        {
#line 676 "deep_profiling.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[3], ll_backend__deep_profiling__HeadVar__1_1, ((MR_Box) (ll_backend__deep_profiling__V_12_12)), ((MR_Box) (ll_backend__deep_profiling__V_21_21)));
#line 676 "deep_profiling.m"
                                          return;
                                        }
#line 676 "deep_profiling.m"
                                      }
#line 676 "deep_profiling.m"
                                  }
#line 676 "deep_profiling.m"
                              }
#line 676 "deep_profiling.m"
                          }
#line 676 "deep_profiling.m"
                      }
#line 676 "deep_profiling.m"
                  }
#line 676 "deep_profiling.m"
              }
#line 676 "deep_profiling.m"
          }
#line 676 "deep_profiling.m"
      }
#line 676 "deep_profiling.m"
  }
#line 676 "deep_profiling.m"
}

#line 676 "deep_profiling.m"
static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____deep_info_0_0(
#line 676 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 676 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2)
#line 676 "deep_profiling.m"
{
#line 676 "deep_profiling.m"
  {
#line 676 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 676 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CastX_21 = (MR_Integer) ll_backend__deep_profiling__HeadVar__1_1;
#line 676 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CastY_22 = (MR_Integer) ll_backend__deep_profiling__HeadVar__2_2;

#line 676 "deep_profiling.m"
    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CastX_21 == ll_backend__deep_profiling__CastY_22);
#line 676 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
      ll_backend__deep_profiling__succeeded = MR_TRUE;
#line 676 "deep_profiling.m"
    else
#line 676 "deep_profiling.m"
      {
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeInfo_25_25;
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeInfo_26_26;
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeInfo_28_28;
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeInfo_30_30;
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 2)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 3)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 4)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 5)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 6)));
#line 676 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 7)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 8)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 2)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 3)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 4)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 5)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 6)));
#line 676 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 7)));
#line 676 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 8)));

#line 2496 "ll_backend.deep_profiling.c"
        {
#line 2498 "ll_backend.deep_profiling.c"
          ll_backend__deep_profiling__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__deep_profiling__V_3_3, ll_backend__deep_profiling__V_12_12);
        }
#line 676 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
          {
#line 2505 "ll_backend.deep_profiling.c"
            {
#line 2507 "ll_backend.deep_profiling.c"
              ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__deep_profiling__V_4_4, ll_backend__deep_profiling__V_13_13);
            }
#line 676 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
              {
#line 2514 "ll_backend.deep_profiling.c"
                ll_backend__deep_profiling__TypeInfo_25_25 = (MR_Word) &ll_backend__deep_profiling_scalar_common_1[3];
#line 2516 "ll_backend.deep_profiling.c"
                {
#line 2518 "ll_backend.deep_profiling.c"
                  ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_25_25, ((MR_Box) (ll_backend__deep_profiling__V_5_5)), ((MR_Box) (ll_backend__deep_profiling__V_14_14)));
                }
#line 676 "deep_profiling.m"
                if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
                  {
#line 2525 "ll_backend.deep_profiling.c"
                    ll_backend__deep_profiling__TypeInfo_26_26 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[1];
#line 2527 "ll_backend.deep_profiling.c"
                    {
#line 2529 "ll_backend.deep_profiling.c"
                      ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_26_26, ((MR_Box) (ll_backend__deep_profiling__V_6_6)), ((MR_Box) (ll_backend__deep_profiling__V_15_15)));
                    }
#line 676 "deep_profiling.m"
                    if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
                      {
#line 2536 "ll_backend.deep_profiling.c"
                        {
#line 2538 "ll_backend.deep_profiling.c"
                          ll_backend__deep_profiling__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__deep_profiling__V_7_7, ll_backend__deep_profiling__V_16_16);
                        }
#line 676 "deep_profiling.m"
                        if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
                          {
#line 2545 "ll_backend.deep_profiling.c"
                            ll_backend__deep_profiling__TypeInfo_28_28 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[2];
#line 2547 "ll_backend.deep_profiling.c"
                            {
#line 2549 "ll_backend.deep_profiling.c"
                              ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_28_28, ((MR_Box) (ll_backend__deep_profiling__V_8_8)), ((MR_Box) (ll_backend__deep_profiling__V_17_17)));
                            }
#line 676 "deep_profiling.m"
                            if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
                              {
#line 2556 "ll_backend.deep_profiling.c"
                                {
#line 2558 "ll_backend.deep_profiling.c"
                                  ll_backend__deep_profiling__succeeded = hlds__vartypes____Unify____prog_var_set_types_0_0(ll_backend__deep_profiling__V_9_9, ll_backend__deep_profiling__V_18_18);
                                }
#line 676 "deep_profiling.m"
                                if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
                                  {
#line 2565 "ll_backend.deep_profiling.c"
                                    ll_backend__deep_profiling__succeeded = (strcmp(ll_backend__deep_profiling__V_10_10, ll_backend__deep_profiling__V_19_19) == 0);
#line 676 "deep_profiling.m"
                                    if (ll_backend__deep_profiling__succeeded)
#line 676 "deep_profiling.m"
                                      {
#line 2571 "ll_backend.deep_profiling.c"
                                        ll_backend__deep_profiling__TypeInfo_30_30 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[3];
#line 2573 "ll_backend.deep_profiling.c"
                                        {
#line 2575 "ll_backend.deep_profiling.c"
                                          return ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_30_30, ((MR_Box) (ll_backend__deep_profiling__V_11_11)), ((MR_Box) (ll_backend__deep_profiling__V_20_20)));
                                        }
#line 676 "deep_profiling.m"
                                      }
#line 676 "deep_profiling.m"
                                  }
#line 676 "deep_profiling.m"
                              }
#line 676 "deep_profiling.m"
                          }
#line 676 "deep_profiling.m"
                      }
#line 676 "deep_profiling.m"
                  }
#line 676 "deep_profiling.m"
              }
#line 676 "deep_profiling.m"
          }
#line 676 "deep_profiling.m"
      }
#line 676 "deep_profiling.m"
    return ll_backend__deep_profiling__succeeded;
#line 676 "deep_profiling.m"
  }
#line 676 "deep_profiling.m"
}

#line 1596 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling____Compare____call_class_0_0(
#line 1596 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__1_1,
#line 1596 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
#line 1596 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__3_3)
#line 1596 "deep_profiling.m"
{
#line 1596 "deep_profiling.m"
  {
#line 1596 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1596 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CastX_29 = (MR_Integer) ll_backend__deep_profiling__HeadVar__2_2;
#line 1596 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CastY_30 = (MR_Integer) ll_backend__deep_profiling__HeadVar__3_3;

#line 1596 "deep_profiling.m"
    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CastX_29 == ll_backend__deep_profiling__CastY_30);
#line 1596 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 2627 "ll_backend.deep_profiling.c"
      *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 0;
#line 1596 "deep_profiling.m"
    else
#line 1596 "deep_profiling.m"
#line 1596 "deep_profiling.m"
      switch (MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__2_2)) {
#line 1596 "deep_profiling.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1596 "deep_profiling.m"
        case (MR_Integer) 0:
#line 1596 "deep_profiling.m"
          {
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_36_36 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__HeadVar__2_2), (MR_Integer) 0);

#line 1596 "deep_profiling.m"
#line 1596 "deep_profiling.m"
            switch (MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__3_3)) {
#line 1596 "deep_profiling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1596 "deep_profiling.m"
              case (MR_Integer) 0:
#line 1596 "deep_profiling.m"
                {
#line 1596 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_5_5 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__HeadVar__3_3), (MR_Integer) 0);

#line 1596 "deep_profiling.m"
                  {
#line 1596 "deep_profiling.m"
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(ll_backend__deep_profiling__HeadVar__1_1, ll_backend__deep_profiling__V_36_36, ll_backend__deep_profiling__V_5_5);
#line 1596 "deep_profiling.m"
                    return;
                  }
#line 1596 "deep_profiling.m"
                }
#line 1596 "deep_profiling.m"
                break;
#line 1596 "deep_profiling.m"
              case (MR_Integer) 1:
#line 2668 "ll_backend.deep_profiling.c"
                *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 1;
#line 1596 "deep_profiling.m"
                break;
#line 1596 "deep_profiling.m"
              case (MR_Integer) 2:
#line 2674 "ll_backend.deep_profiling.c"
                *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 1;
#line 1596 "deep_profiling.m"
                break;
#line 1596 "deep_profiling.m"
            }
#line 1596 "deep_profiling.m"
          }
#line 1596 "deep_profiling.m"
          break;
#line 1596 "deep_profiling.m"
        case (MR_Integer) 1:
#line 1596 "deep_profiling.m"
          {
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));

#line 1596 "deep_profiling.m"
#line 1596 "deep_profiling.m"
            switch (MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__3_3)) {
#line 1596 "deep_profiling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1596 "deep_profiling.m"
              case (MR_Integer) 0:
#line 2700 "ll_backend.deep_profiling.c"
                *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 2;
#line 1596 "deep_profiling.m"
                break;
#line 1596 "deep_profiling.m"
              case (MR_Integer) 1:
#line 1596 "deep_profiling.m"
                {
#line 1596 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 0)));
#line 1596 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 1)));
#line 1596 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_18_18;

#line 1596 "deep_profiling.m"
                  {
#line 1596 "deep_profiling.m"
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&ll_backend__deep_profiling__V_18_18, ll_backend__deep_profiling__V_38_38, ll_backend__deep_profiling__V_16_16);
                  }
#line 2720 "ll_backend.deep_profiling.c"
                  ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_18_18 == (MR_Integer) 0);
#line 1596 "deep_profiling.m"
                  ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 1596 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 1596 "deep_profiling.m"
                    *ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__V_18_18;
#line 1596 "deep_profiling.m"
                  else
#line 1596 "deep_profiling.m"
                    {
#line 1596 "deep_profiling.m"
                      {
#line 1596 "deep_profiling.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[1], ll_backend__deep_profiling__HeadVar__1_1, ((MR_Box) (ll_backend__deep_profiling__V_37_37)), ((MR_Box) (ll_backend__deep_profiling__V_17_17)));
#line 1596 "deep_profiling.m"
                        return;
                      }
#line 1596 "deep_profiling.m"
                    }
#line 1596 "deep_profiling.m"
                }
#line 1596 "deep_profiling.m"
                break;
#line 1596 "deep_profiling.m"
              case (MR_Integer) 2:
#line 2747 "ll_backend.deep_profiling.c"
                *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 1;
#line 1596 "deep_profiling.m"
                break;
#line 1596 "deep_profiling.m"
            }
#line 1596 "deep_profiling.m"
          }
#line 1596 "deep_profiling.m"
          break;
#line 1596 "deep_profiling.m"
        case (MR_Integer) 2:
#line 1596 "deep_profiling.m"
          {
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));

#line 1596 "deep_profiling.m"
#line 1596 "deep_profiling.m"
            switch (MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__3_3)) {
#line 1596 "deep_profiling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1596 "deep_profiling.m"
              case (MR_Integer) 0:
#line 2771 "ll_backend.deep_profiling.c"
                *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 2;
#line 1596 "deep_profiling.m"
                break;
#line 1596 "deep_profiling.m"
              case (MR_Integer) 1:
#line 2777 "ll_backend.deep_profiling.c"
                *ll_backend__deep_profiling__HeadVar__1_1 = (MR_Integer) 2;
#line 1596 "deep_profiling.m"
                break;
#line 1596 "deep_profiling.m"
              case (MR_Integer) 2:
#line 1596 "deep_profiling.m"
                {
#line 1596 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 0)));

#line 1596 "deep_profiling.m"
                  {
#line 1596 "deep_profiling.m"
                    hlds__hlds_goal____Compare____generic_call_0_0(ll_backend__deep_profiling__HeadVar__1_1, ll_backend__deep_profiling__V_35_35, ll_backend__deep_profiling__V_28_28);
#line 1596 "deep_profiling.m"
                    return;
                  }
#line 1596 "deep_profiling.m"
                }
#line 1596 "deep_profiling.m"
                break;
#line 1596 "deep_profiling.m"
            }
#line 1596 "deep_profiling.m"
          }
#line 1596 "deep_profiling.m"
          break;
#line 1596 "deep_profiling.m"
      }
#line 1596 "deep_profiling.m"
  }
#line 1596 "deep_profiling.m"
}

#line 1596 "deep_profiling.m"
static MR_bool MR_CALL 
ll_backend__deep_profiling____Unify____call_class_0_0(
#line 1596 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 1596 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2)
#line 1596 "deep_profiling.m"
{
#line 1596 "deep_profiling.m"
  {
#line 1596 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1596 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CastX_11 = (MR_Integer) ll_backend__deep_profiling__HeadVar__1_1;
#line 1596 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CastY_12 = (MR_Integer) ll_backend__deep_profiling__HeadVar__2_2;

#line 1596 "deep_profiling.m"
    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CastX_11 == ll_backend__deep_profiling__CastY_12);
#line 1596 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 1596 "deep_profiling.m"
      ll_backend__deep_profiling__succeeded = MR_TRUE;
#line 1596 "deep_profiling.m"
    else
#line 1596 "deep_profiling.m"
#line 1596 "deep_profiling.m"
      switch (MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__1_1)) {
#line 1596 "deep_profiling.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1596 "deep_profiling.m"
        case (MR_Integer) 0:
#line 1596 "deep_profiling.m"
          {
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_3_3 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__HeadVar__1_1), (MR_Integer) 0);
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_4_4;

#line 1596 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1596 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 1596 "deep_profiling.m"
              {
#line 1596 "deep_profiling.m"
                ll_backend__deep_profiling__V_4_4 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__HeadVar__2_2), (MR_Integer) 0);
#line 2860 "ll_backend.deep_profiling.c"
                {
#line 2862 "ll_backend.deep_profiling.c"
                  return ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__deep_profiling__V_3_3, ll_backend__deep_profiling__V_4_4);
                }
#line 1596 "deep_profiling.m"
              }
#line 1596 "deep_profiling.m"
          }
#line 1596 "deep_profiling.m"
          break;
#line 1596 "deep_profiling.m"
        case (MR_Integer) 1:
#line 1596 "deep_profiling.m"
          {
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__TypeInfo_16_16;
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_7_7;
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_8_8;

#line 1596 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1596 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 1596 "deep_profiling.m"
              {
#line 1596 "deep_profiling.m"
                ll_backend__deep_profiling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 1596 "deep_profiling.m"
                ll_backend__deep_profiling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 2896 "ll_backend.deep_profiling.c"
                {
#line 2898 "ll_backend.deep_profiling.c"
                  ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__deep_profiling__V_5_5, ll_backend__deep_profiling__V_7_7);
                }
#line 1596 "deep_profiling.m"
                if (ll_backend__deep_profiling__succeeded)
#line 1596 "deep_profiling.m"
                  {
#line 2905 "ll_backend.deep_profiling.c"
                    ll_backend__deep_profiling__TypeInfo_16_16 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[1];
#line 2907 "ll_backend.deep_profiling.c"
                    {
#line 2909 "ll_backend.deep_profiling.c"
                      return ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_16_16, ((MR_Box) (ll_backend__deep_profiling__V_6_6)), ((MR_Box) (ll_backend__deep_profiling__V_8_8)));
                    }
#line 1596 "deep_profiling.m"
                  }
#line 1596 "deep_profiling.m"
              }
#line 1596 "deep_profiling.m"
          }
#line 1596 "deep_profiling.m"
          break;
#line 1596 "deep_profiling.m"
        case (MR_Integer) 2:
#line 1596 "deep_profiling.m"
          {
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 1596 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_10_10;

#line 1596 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1596 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 1596 "deep_profiling.m"
              {
#line 1596 "deep_profiling.m"
                ll_backend__deep_profiling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 2937 "ll_backend.deep_profiling.c"
                {
#line 2939 "ll_backend.deep_profiling.c"
                  return ll_backend__deep_profiling__succeeded = hlds__hlds_goal____Unify____generic_call_0_0(ll_backend__deep_profiling__V_9_9, ll_backend__deep_profiling__V_10_10);
                }
#line 1596 "deep_profiling.m"
              }
#line 1596 "deep_profiling.m"
          }
#line 1596 "deep_profiling.m"
          break;
#line 1596 "deep_profiling.m"
      }
#line 1596 "deep_profiling.m"
    return ll_backend__deep_profiling__succeeded;
#line 1596 "deep_profiling.m"
  }
#line 1596 "deep_profiling.m"
}

#line 1923 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__extract_deep_rec_info_2_p_0(
#line 1923 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MaybeDeepProfInfo_3,
#line 1923 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__MaybeRecInfo_4)
#line 1923 "deep_profiling.m"
{
#line 1928 "deep_profiling.m"
  {
#line 1928 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 1928 "deep_profiling.m"
    if ((ll_backend__deep_profiling__MaybeDeepProfInfo_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1932 "deep_profiling.m"
      *ll_backend__deep_profiling__MaybeRecInfo_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1928 "deep_profiling.m"
    else
#line 1928 "deep_profiling.m"
      {
#line 1928 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__DeepProfInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDeepProfInfo_3, (MR_Integer) 0)));
#line 1929 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_6_6;
#line 1929 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_7_7;

#line 1929 "deep_profiling.m"
        *ll_backend__deep_profiling__MaybeRecInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepProfInfo_5, (MR_Integer) 0)));
#line 1929 "deep_profiling.m"
        ll_backend__deep_profiling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepProfInfo_5, (MR_Integer) 1)));
#line 1929 "deep_profiling.m"
        ll_backend__deep_profiling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepProfInfo_5, (MR_Integer) 2)));
#line 1928 "deep_profiling.m"
      }
#line 1928 "deep_profiling.m"
  }
#line 1923 "deep_profiling.m"
}

#line 1872 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_outermost_proc_dyns_8_p_0(
#line 1872 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__UseActivationCounts_9,
#line 1872 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TopCSD_10,
#line 1872 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MiddleCSD_11,
#line 1872 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__MaybeOldActivationPtr_12,
#line 1872 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__NewOutermostProcDyn_13,
#line 1872 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__ExcpVars_14,
#line 1872 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_17,
#line 1872 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_18)
#line 1872 "deep_profiling.m"
{
#line 1877 "deep_profiling.m"
  {
#line 1877 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1877 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21;
#line 1877 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_23_23;
#line 1877 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_58;
#line 1877 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_59;
#line 1877 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_60;
#line 1877 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_61;

#line 1883 "deep_profiling.m"
#line 1883 "deep_profiling.m"
    switch (ll_backend__deep_profiling__UseActivationCounts_9) {
#line 1883 "deep_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1883 "deep_profiling.m"
      case (MR_Integer) 0:
#line 1879 "deep_profiling.m"
        {
#line 1879 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__OldOutermostProcDyn0_16;
#line 1879 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_20_20;
#line 1879 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_33;
#line 1879 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_34;
#line 1879 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_35;
#line 1879 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_36;

#line 1880 "deep_profiling.m"
          {
#line 1880 "deep_profiling.m"
            ll_backend__deep_profiling__V_20_20 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 1840 "deep_profiling.m"
          ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_17, (MR_Integer) 0)));
#line 1840 "deep_profiling.m"
          ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_17, (MR_Integer) 1)));
#line 1852 "deep_profiling.m"
          {
#line 1852 "deep_profiling.m"
            mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "OldOutermost", &ll_backend__deep_profiling__OldOutermostProcDyn0_16, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_33, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_35);
          }
#line 1853 "deep_profiling.m"
          {
#line 1853 "deep_profiling.m"
            hlds__vartypes__add_var_type_4_p_0(ll_backend__deep_profiling__OldOutermostProcDyn0_16, ll_backend__deep_profiling__V_20_20, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_34, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_36);
          }
#line 1842 "deep_profiling.m"
          {
#line 1842 "deep_profiling.m"
            ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1842 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_35));
#line 1842 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_36));
#line 1842 "deep_profiling.m"
          }
#line 1882 "deep_profiling.m"
          {
#line 1882 "deep_profiling.m"
            MR_Word base;
#line 1882 "deep_profiling.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1882 "deep_profiling.m"
            *ll_backend__deep_profiling__MaybeOldActivationPtr_12 = base;
#line 1882 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__OldOutermostProcDyn0_16));
#line 1882 "deep_profiling.m"
          }
#line 1879 "deep_profiling.m"
        }
#line 1883 "deep_profiling.m"
        break;
#line 1883 "deep_profiling.m"
      case (MR_Integer) 1:
#line 1884 "deep_profiling.m"
        {
#line 1885 "deep_profiling.m"
          *ll_backend__deep_profiling__MaybeOldActivationPtr_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1884 "deep_profiling.m"
          ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21 = ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_17;
#line 1884 "deep_profiling.m"
        }
#line 1883 "deep_profiling.m"
        break;
#line 1883 "deep_profiling.m"
    }
#line 1887 "deep_profiling.m"
    {
#line 1887 "deep_profiling.m"
      MR_Word base;
#line 1887 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1887 "deep_profiling.m"
      *ll_backend__deep_profiling__ExcpVars_14 = base;
#line 1887 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_10));
#line 1887 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_11));
#line 1887 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (*ll_backend__deep_profiling__MaybeOldActivationPtr_12));
#line 1887 "deep_profiling.m"
    }
#line 1888 "deep_profiling.m"
    {
#line 1888 "deep_profiling.m"
      ll_backend__deep_profiling__V_23_23 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 1840 "deep_profiling.m"
    ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21, (MR_Integer) 0)));
#line 1840 "deep_profiling.m"
    ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_21_21, (MR_Integer) 1)));
#line 1852 "deep_profiling.m"
    {
#line 1852 "deep_profiling.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "NewOutermost", ll_backend__deep_profiling__NewOutermostProcDyn_13, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_58, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_60);
    }
#line 1853 "deep_profiling.m"
    {
#line 1853 "deep_profiling.m"
      hlds__vartypes__add_var_type_4_p_0(*ll_backend__deep_profiling__NewOutermostProcDyn_13, ll_backend__deep_profiling__V_23_23, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_59, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_61);
    }
#line 1842 "deep_profiling.m"
    {
#line 1842 "deep_profiling.m"
      MR_Word base;
#line 1842 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1842 "deep_profiling.m"
      *ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_18 = base;
#line 1842 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_60));
#line 1842 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_61));
#line 1842 "deep_profiling.m"
    }
#line 1877 "deep_profiling.m"
  }
#line 1872 "deep_profiling.m"
}

#line 1855 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(
#line 1855 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__UseActivationCounts_8,
#line 1855 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TopCSD_9,
#line 1855 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MiddleCSD_10,
#line 1855 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__MaybeActivationPtr_11,
#line 1855 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__ExcpVars_12,
#line 1855 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_15,
#line 1855 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_16)
#line 1855 "deep_profiling.m"
{
#line 1860 "deep_profiling.m"
  {
#line 1860 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 1866 "deep_profiling.m"
#line 1866 "deep_profiling.m"
    switch (ll_backend__deep_profiling__UseActivationCounts_8) {
#line 1866 "deep_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1866 "deep_profiling.m"
      case (MR_Integer) 0:
#line 1862 "deep_profiling.m"
        {
#line 1862 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__ActivationPtr0_14;
#line 1862 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_18_18;
#line 1862 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_28;
#line 1862 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_29;
#line 1862 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_30;
#line 1862 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_31;

#line 1863 "deep_profiling.m"
          {
#line 1863 "deep_profiling.m"
            ll_backend__deep_profiling__V_18_18 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 1840 "deep_profiling.m"
          ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_15, (MR_Integer) 0)));
#line 1840 "deep_profiling.m"
          ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_15, (MR_Integer) 1)));
#line 1852 "deep_profiling.m"
          {
#line 1852 "deep_profiling.m"
            mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "ActivationPtr", &ll_backend__deep_profiling__ActivationPtr0_14, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_28, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_30);
          }
#line 1853 "deep_profiling.m"
          {
#line 1853 "deep_profiling.m"
            hlds__vartypes__add_var_type_4_p_0(ll_backend__deep_profiling__ActivationPtr0_14, ll_backend__deep_profiling__V_18_18, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_29, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_31);
          }
#line 1842 "deep_profiling.m"
          {
#line 1842 "deep_profiling.m"
            MR_Word base;
#line 1842 "deep_profiling.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1842 "deep_profiling.m"
            *ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_16 = base;
#line 1842 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_30));
#line 1842 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_31));
#line 1842 "deep_profiling.m"
          }
#line 1865 "deep_profiling.m"
          {
#line 1865 "deep_profiling.m"
            MR_Word base;
#line 1865 "deep_profiling.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "deep_profiling.m"
            *ll_backend__deep_profiling__MaybeActivationPtr_11 = base;
#line 1865 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__ActivationPtr0_14));
#line 1865 "deep_profiling.m"
          }
#line 1862 "deep_profiling.m"
        }
#line 1866 "deep_profiling.m"
        break;
#line 1866 "deep_profiling.m"
      case (MR_Integer) 1:
#line 1867 "deep_profiling.m"
        {
#line 1868 "deep_profiling.m"
          *ll_backend__deep_profiling__MaybeActivationPtr_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1867 "deep_profiling.m"
          *ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_16 = ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_15;
#line 1867 "deep_profiling.m"
        }
#line 1866 "deep_profiling.m"
        break;
#line 1866 "deep_profiling.m"
    }
#line 1870 "deep_profiling.m"
    {
#line 1870 "deep_profiling.m"
      MR_Word base;
#line 1870 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1870 "deep_profiling.m"
      *ll_backend__deep_profiling__ExcpVars_12 = base;
#line 1870 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_9));
#line 1870 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_10));
#line 1870 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (*ll_backend__deep_profiling__MaybeActivationPtr_11));
#line 1870 "deep_profiling.m"
    }
#line 1860 "deep_profiling.m"
  }
#line 1855 "deep_profiling.m"
}

#line 1818 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_deep_cell_unify_5_p_0(
#line 1818 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__Length_6,
#line 1818 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ConsId_7,
#line 1818 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Args_8,
#line 1818 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Var_9,
#line 1818 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_10)
#line 1818 "deep_profiling.m"
{
#line 1821 "deep_profiling.m"
  {
#line 1821 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__NonLocals_12;
#line 1821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__InstMapDelta_13;
#line 1821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo_15;
#line 1821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ArgModes_17;
#line 1821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalExpr_18;
#line 1821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_21_21;
#line 1821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_27_27;
#line 1821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_34_34;

#line 1823 "deep_profiling.m"
    {
#line 1823 "deep_profiling.m"
      ll_backend__deep_profiling__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1823 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_21_21, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_9));
#line 1823 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_21_21, 1) = ((MR_Box) (ll_backend__deep_profiling__Args_8));
#line 1823 "deep_profiling.m"
    }
#line 1823 "deep_profiling.m"
    {
#line 1823 "deep_profiling.m"
      ll_backend__deep_profiling__NonLocals_12 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__V_21_21);
    }
#line 1824 "deep_profiling.m"
    {
#line 1824 "deep_profiling.m"
      ll_backend__deep_profiling__InstMapDelta_13 = hlds__instmap__instmap_delta_bind_var_1_f_0(ll_backend__deep_profiling__Var_9);
    }
#line 1826 "deep_profiling.m"
    {
#line 1826 "deep_profiling.m"
      hlds__hlds_goal__goal_info_init_5_p_0(ll_backend__deep_profiling__NonLocals_12, ll_backend__deep_profiling__InstMapDelta_13, (MR_Integer) 0, (MR_Integer) 0, &ll_backend__deep_profiling__GoalInfo_15);
    }
#line 1829 "deep_profiling.m"
    {
#line 1829 "deep_profiling.m"
      mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, ll_backend__deep_profiling__Length_6, ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[12])), &ll_backend__deep_profiling__ArgModes_17);
    }
#line 1830 "deep_profiling.m"
    {
#line 1830 "deep_profiling.m"
      ll_backend__deep_profiling__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1830 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_27_27, 0) = ((MR_Box) (ll_backend__deep_profiling__ConsId_7));
#line 1830 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_27_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1830 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_27_27, 2) = ((MR_Box) (ll_backend__deep_profiling__Args_8));
#line 1830 "deep_profiling.m"
    }
#line 1832 "deep_profiling.m"
    {
#line 1832 "deep_profiling.m"
      ll_backend__deep_profiling__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1832 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_34_34, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_9));
#line 1832 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_34_34, 1) = ((MR_Box) (ll_backend__deep_profiling__ConsId_7));
#line 1832 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_34_34, 2) = ((MR_Box) (ll_backend__deep_profiling__Args_8));
#line 1832 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_34_34, 3) = ((MR_Box) (ll_backend__deep_profiling__ArgModes_17));
#line 1832 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_34_34, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1832 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_34_34, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1832 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_34_34, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1832 "deep_profiling.m"
    }
#line 1830 "deep_profiling.m"
    {
#line 1830 "deep_profiling.m"
      ll_backend__deep_profiling__GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1830 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_18, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_9));
#line 1830 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_18, 1) = ((MR_Box) (ll_backend__deep_profiling__V_27_27));
#line 1830 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_18, 2) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[8]));
#line 1830 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_18, 3) = ((MR_Box) (ll_backend__deep_profiling__V_34_34));
#line 1830 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_18, 4) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[9]));
#line 1830 "deep_profiling.m"
    }
#line 1835 "deep_profiling.m"
    {
#line 1835 "deep_profiling.m"
      MR_Word base;
#line 1835 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1835 "deep_profiling.m"
      *ll_backend__deep_profiling__Goal_10 = base;
#line 1835 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_18));
#line 1835 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_15));
#line 1835 "deep_profiling.m"
    }
#line 1821 "deep_profiling.m"
  }
#line 1818 "deep_profiling.m"
}

#line 1779 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_deep_det_call_6_p_0(
#line 1779 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_7,
#line 1779 "deep_profiling.m"
  MR_String ll_backend__deep_profiling__Name_8,
#line 1779 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__Arity_9,
#line 1779 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ArgVars_10,
#line 1779 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__OutputVars_11,
#line 1779 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_12)
#line 1779 "deep_profiling.m"
{
#line 1782 "deep_profiling.m"
  {
#line 1782 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1782 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_13_13;

#line 1783 "deep_profiling.m"
    {
#line 1783 "deep_profiling.m"
      ll_backend__deep_profiling__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1783 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_13_13, 0) = ((MR_Box) (ll_backend__deep_profiling__OutputVars_11));
#line 1783 "deep_profiling.m"
    }
#line 1783 "deep_profiling.m"
    {
#line 1783 "deep_profiling.m"
      ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_7, ll_backend__deep_profiling__Name_8, ll_backend__deep_profiling__Arity_9, ll_backend__deep_profiling__ArgVars_10, ll_backend__deep_profiling__V_13_13, (MR_Integer) 0, ll_backend__deep_profiling__Goal_12);
#line 1783 "deep_profiling.m"
      return;
    }
#line 1782 "deep_profiling.m"
  }
#line 1779 "deep_profiling.m"
}

#line 1769 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(
#line 1769 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__CSN_5,
#line 1769 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
#line 1769 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12,
#line 1769 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_13)
#line 1769 "deep_profiling.m"
{
#line 1772 "deep_profiling.m"
  {
#line 1772 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1772 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CSNVar_6;
#line 1772 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__UnifyGoal_7;
#line 1772 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 6)));
#line 1772 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__VarName_10;
#line 1772 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarInfo_11;
#line 1772 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_18_18;
#line 1772 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_20_20;
#line 1772 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_38_38;
#line 1772 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_54;
#line 1772 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_55;
#line 1772 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_56;
#line 1772 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_57;
#line 1773 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 0)));
#line 1773 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 1)));
#line 1773 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 2)));
#line 1773 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 3)));
#line 1773 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 4)));
#line 1773 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 5)));
#line 1773 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 7)));
#line 1773 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 8)));
#line 1776 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_29_29;
#line 1776 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_30_30;
#line 1776 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_31_31;
#line 1776 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_32_32;
#line 1776 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_33_33;
#line 1776 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_34_34;
#line 1776 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_36_36;
#line 1776 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_37_37;
#line 1776 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_35_35;

#line 1774 "deep_profiling.m"
    {
#line 1774 "deep_profiling.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_6[2], ll_backend__deep_profiling__CSN_5, &ll_backend__deep_profiling__V_38_38);
    }
#line 1774 "deep_profiling.m"
    {
#line 1774 "deep_profiling.m"
      ll_backend__deep_profiling__VarName_10 = mercury__string__f_43_43_2_f_0((MR_String) "CSN", ll_backend__deep_profiling__V_38_38);
    }
#line 1775 "deep_profiling.m"
    {
#line 1775 "deep_profiling.m"
      ll_backend__deep_profiling__V_18_18 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1840 "deep_profiling.m"
    ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_9, (MR_Integer) 0)));
#line 1840 "deep_profiling.m"
    ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_9, (MR_Integer) 1)));
#line 1852 "deep_profiling.m"
    {
#line 1852 "deep_profiling.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__VarName_10, &ll_backend__deep_profiling__CSNVar_6, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_54, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_56);
    }
#line 1853 "deep_profiling.m"
    {
#line 1853 "deep_profiling.m"
      hlds__vartypes__add_var_type_4_p_0(ll_backend__deep_profiling__CSNVar_6, ll_backend__deep_profiling__V_18_18, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_55, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_57);
    }
#line 1842 "deep_profiling.m"
    {
#line 1842 "deep_profiling.m"
      ll_backend__deep_profiling__VarInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1842 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_11, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_56));
#line 1842 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_11, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_57));
#line 1842 "deep_profiling.m"
    }
#line 1776 "deep_profiling.m"
    ll_backend__deep_profiling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 0)));
#line 1776 "deep_profiling.m"
    ll_backend__deep_profiling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 1)));
#line 1776 "deep_profiling.m"
    ll_backend__deep_profiling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 2)));
#line 1776 "deep_profiling.m"
    ll_backend__deep_profiling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 3)));
#line 1776 "deep_profiling.m"
    ll_backend__deep_profiling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 4)));
#line 1776 "deep_profiling.m"
    ll_backend__deep_profiling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 5)));
#line 1776 "deep_profiling.m"
    ll_backend__deep_profiling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 6)));
#line 1776 "deep_profiling.m"
    ll_backend__deep_profiling__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 7)));
#line 1776 "deep_profiling.m"
    ll_backend__deep_profiling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_12, (MR_Integer) 8)));
#line 1776 "deep_profiling.m"
    {
#line 1776 "deep_profiling.m"
      MR_Word base;
#line 1776 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1776 "deep_profiling.m"
      *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_13 = base;
#line 1776 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__V_29_29));
#line 1776 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__V_30_30));
#line 1776 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__deep_profiling__V_31_31));
#line 1776 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__deep_profiling__V_32_32));
#line 1776 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__deep_profiling__V_33_33));
#line 1776 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__deep_profiling__V_34_34));
#line 1776 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo_11));
#line 1776 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__deep_profiling__V_36_36));
#line 1776 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__deep_profiling__V_37_37));
#line 1776 "deep_profiling.m"
    }
#line 1777 "deep_profiling.m"
    {
#line 1777 "deep_profiling.m"
      ll_backend__deep_profiling__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1777 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1777 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_20_20, 1) = ((MR_Box) (ll_backend__deep_profiling__CSN_5));
#line 1777 "deep_profiling.m"
    }
#line 1777 "deep_profiling.m"
    {
#line 1777 "deep_profiling.m"
      ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__deep_profiling__V_20_20, ll_backend__deep_profiling__CSNVar_6, &ll_backend__deep_profiling__UnifyGoal_7);
    }
#line 1772 "deep_profiling.m"
    {
#line 1772 "deep_profiling.m"
      MR_Word base;
#line 1772 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1772 "deep_profiling.m"
      *ll_backend__deep_profiling__HeadVar__2_2 = base;
#line 1772 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__CSNVar_6));
#line 1772 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__UnifyGoal_7));
#line 1772 "deep_profiling.m"
    }
#line 1772 "deep_profiling.m"
  }
#line 1769 "deep_profiling.m"
}

#line 1754 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_cell_6_p_0(
#line 1754 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__Length_7,
#line 1754 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__CSNVars_8,
#line 1754 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__CellVar_9,
#line 1754 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__CellGoal_10,
#line 1754 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19,
#line 1754 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_20)
#line 1754 "deep_profiling.m"
{
#line 1757 "deep_profiling.m"
  {
#line 1757 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1757 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 6)));
#line 1757 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ProfilingBuiltin_13;
#line 1757 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__CellTypeName_14;
#line 1757 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CellTypeCtor_15;
#line 1757 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CellType_16;
#line 1757 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarInfo_17;
#line 1757 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ConsId_18;
#line 1757 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_25_25;
#line 1757 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_48_48;
#line 1757 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_64;
#line 1757 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_65;
#line 1757 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_66;
#line 1757 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_67;
#line 1758 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 0)));
#line 1758 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 1)));
#line 1758 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 2)));
#line 1758 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 3)));
#line 1758 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 4)));
#line 1758 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 5)));
#line 1758 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 7)));
#line 1758 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 8)));
#line 1764 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_39_39;
#line 1764 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_40_40;
#line 1764 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_41_41;
#line 1764 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_42_42;
#line 1764 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_43_43;
#line 1764 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_44_44;
#line 1764 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_46_46;
#line 1764 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_47_47;
#line 1764 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_45_45;

#line 1759 "deep_profiling.m"
    {
#line 1759 "deep_profiling.m"
      ll_backend__deep_profiling__ProfilingBuiltin_13 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
    }
#line 1760 "deep_profiling.m"
    {
#line 1760 "deep_profiling.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_6[2], ll_backend__deep_profiling__Length_7, &ll_backend__deep_profiling__V_48_48);
    }
#line 1760 "deep_profiling.m"
    {
#line 1760 "deep_profiling.m"
      ll_backend__deep_profiling__CellTypeName_14 = mercury__string__f_43_43_2_f_0((MR_String) "call_site_nums_", ll_backend__deep_profiling__V_48_48);
    }
#line 1761 "deep_profiling.m"
    {
#line 1761 "deep_profiling.m"
      ll_backend__deep_profiling__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1761 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_25_25, 0) = ((MR_Box) (ll_backend__deep_profiling__ProfilingBuiltin_13));
#line 1761 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_25_25, 1) = ((MR_Box) (ll_backend__deep_profiling__CellTypeName_14));
#line 1761 "deep_profiling.m"
    }
#line 1761 "deep_profiling.m"
    {
#line 1761 "deep_profiling.m"
      ll_backend__deep_profiling__CellTypeCtor_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1761 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CellTypeCtor_15, 0) = ((MR_Box) (ll_backend__deep_profiling__V_25_25));
#line 1761 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CellTypeCtor_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1761 "deep_profiling.m"
    }
#line 1762 "deep_profiling.m"
    {
#line 1762 "deep_profiling.m"
      parse_tree__prog_type__construct_type_3_p_0(ll_backend__deep_profiling__CellTypeCtor_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__CellType_16);
    }
#line 1840 "deep_profiling.m"
    ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_12, (MR_Integer) 0)));
#line 1840 "deep_profiling.m"
    ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_12, (MR_Integer) 1)));
#line 1852 "deep_profiling.m"
    {
#line 1852 "deep_profiling.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "CSNCell", ll_backend__deep_profiling__CellVar_9, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_64, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_66);
    }
#line 1853 "deep_profiling.m"
    {
#line 1853 "deep_profiling.m"
      hlds__vartypes__add_var_type_4_p_0(*ll_backend__deep_profiling__CellVar_9, ll_backend__deep_profiling__CellType_16, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_65, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_67);
    }
#line 1842 "deep_profiling.m"
    {
#line 1842 "deep_profiling.m"
      ll_backend__deep_profiling__VarInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1842 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_17, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_66));
#line 1842 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_17, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_67));
#line 1842 "deep_profiling.m"
    }
#line 1764 "deep_profiling.m"
    ll_backend__deep_profiling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 0)));
#line 1764 "deep_profiling.m"
    ll_backend__deep_profiling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 1)));
#line 1764 "deep_profiling.m"
    ll_backend__deep_profiling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 2)));
#line 1764 "deep_profiling.m"
    ll_backend__deep_profiling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 3)));
#line 1764 "deep_profiling.m"
    ll_backend__deep_profiling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 4)));
#line 1764 "deep_profiling.m"
    ll_backend__deep_profiling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 5)));
#line 1764 "deep_profiling.m"
    ll_backend__deep_profiling__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 6)));
#line 1764 "deep_profiling.m"
    ll_backend__deep_profiling__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 7)));
#line 1764 "deep_profiling.m"
    ll_backend__deep_profiling__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_19, (MR_Integer) 8)));
#line 1764 "deep_profiling.m"
    {
#line 1764 "deep_profiling.m"
      MR_Word base;
#line 1764 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1764 "deep_profiling.m"
      *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_20 = base;
#line 1764 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__V_39_39));
#line 1764 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__V_40_40));
#line 1764 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__deep_profiling__V_41_41));
#line 1764 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__deep_profiling__V_42_42));
#line 1764 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__deep_profiling__V_43_43));
#line 1764 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__deep_profiling__V_44_44));
#line 1764 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo_17));
#line 1764 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__deep_profiling__V_46_46));
#line 1764 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__deep_profiling__V_47_47));
#line 1764 "deep_profiling.m"
    }
#line 1765 "deep_profiling.m"
    {
#line 1765 "deep_profiling.m"
      ll_backend__deep_profiling__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1765 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1765 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__ConsId_18, 1) = ((MR_Box) (ll_backend__deep_profiling__V_25_25));
#line 1765 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__ConsId_18, 2) = ((MR_Box) (ll_backend__deep_profiling__Length_7));
#line 1765 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__ConsId_18, 3) = ((MR_Box) (ll_backend__deep_profiling__CellTypeCtor_15));
#line 1765 "deep_profiling.m"
    }
#line 1767 "deep_profiling.m"
    {
#line 1767 "deep_profiling.m"
      ll_backend__deep_profiling__generate_deep_cell_unify_5_p_0(ll_backend__deep_profiling__Length_7, ll_backend__deep_profiling__ConsId_18, ll_backend__deep_profiling__CSNVars_8, *ll_backend__deep_profiling__CellVar_9, ll_backend__deep_profiling__CellGoal_10);
#line 1767 "deep_profiling.m"
      return;
    }
#line 1757 "deep_profiling.m"
  }
#line 1754 "deep_profiling.m"
}

#line 1744 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0_2(
#line 1744 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 1744 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 1744 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2,
#line 1744 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_3,
#line 1744 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_4)
#line 1744 "deep_profiling.m"
{
#line 1744 "deep_profiling.m"
  {
#line 1744 "deep_profiling.m"
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
#line 1744 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__conv1_HeadVar__2_2;
#line 1744 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__conv0_STATE_VARIABLE_DeepInfo_13;

#line 1744 "deep_profiling.m"
    {
#line 1744 "deep_profiling.m"
      ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(((MR_Integer) ll_backend__deep_profiling__wrapper_arg_1), &ll_backend__deep_profiling__conv1_HeadVar__2_2, ((MR_Word) ll_backend__deep_profiling__wrapper_arg_3), &ll_backend__deep_profiling__conv0_STATE_VARIABLE_DeepInfo_13);
    }
#line 1744 "deep_profiling.m"
    *ll_backend__deep_profiling__wrapper_arg_2 = ((MR_Box) (ll_backend__deep_profiling__conv1_HeadVar__2_2));
#line 1744 "deep_profiling.m"
    *ll_backend__deep_profiling__wrapper_arg_4 = ((MR_Box) (ll_backend__deep_profiling__conv0_STATE_VARIABLE_DeepInfo_13));
#line 1744 "deep_profiling.m"
  }
#line 1744 "deep_profiling.m"
}

#line 1742 "deep_profiling.m"
static MR_bool MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0_1(
#line 1742 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg)
#line 1742 "deep_profiling.m"
{
#line 1742 "deep_profiling.m"
  {
#line 1742 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1742 "deep_profiling.m"
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;

#line 1742 "deep_profiling.m"
    {
#line 1742 "deep_profiling.m"
      return ll_backend__deep_profiling__succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__closure, (MR_Integer) 4))));
    }
#line 1742 "deep_profiling.m"
    return ll_backend__deep_profiling__succeeded;
#line 1742 "deep_profiling.m"
  }
#line 1742 "deep_profiling.m"
}

#line 1731 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_csn_vector_7_p_0(
#line 1731 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__Length_8,
#line 1731 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__CSNs_9,
#line 1731 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__CSNVars_10,
#line 1731 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__UnifyGoals_11,
#line 1731 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__CellVar_12,
#line 1731 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_21,
#line 1731 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_22)
#line 1731 "deep_profiling.m"
{
#line 1741 "deep_profiling.m"
  {
#line 1741 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__CSNs_9)) == (MR_mktag((MR_Integer) 1)));
#line 1741 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__CSN_14;
#line 1736 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_23_23;

#line 1736 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 1736 "deep_profiling.m"
      {
#line 1736 "deep_profiling.m"
        ll_backend__deep_profiling__CSN_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CSNs_9, (MR_Integer) 0)));
#line 1736 "deep_profiling.m"
        ll_backend__deep_profiling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CSNs_9, (MR_Integer) 1)));
#line 1736 "deep_profiling.m"
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1736 "deep_profiling.m"
      }
#line 1741 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 1737 "deep_profiling.m"
      {
#line 1737 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__UnifyGoal_16;
#line 1737 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_24_24;

#line 1737 "deep_profiling.m"
        {
#line 1737 "deep_profiling.m"
          ll_backend__deep_profiling__generate_single_csn_unify_4_p_0(ll_backend__deep_profiling__CSN_14, &ll_backend__deep_profiling__V_24_24, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_21, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_22);
        }
#line 1737 "deep_profiling.m"
        *ll_backend__deep_profiling__CellVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_24_24, (MR_Integer) 0)));
#line 1737 "deep_profiling.m"
        ll_backend__deep_profiling__UnifyGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_24_24, (MR_Integer) 1)));
#line 1738 "deep_profiling.m"
        {
#line 1738 "deep_profiling.m"
          MR_Word base;
#line 1738 "deep_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1738 "deep_profiling.m"
          *ll_backend__deep_profiling__CSNVars_10 = base;
#line 1738 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*ll_backend__deep_profiling__CellVar_12));
#line 1738 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1738 "deep_profiling.m"
        }
#line 1739 "deep_profiling.m"
        {
#line 1739 "deep_profiling.m"
          MR_Word base;
#line 1739 "deep_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1739 "deep_profiling.m"
          *ll_backend__deep_profiling__UnifyGoals_11 = base;
#line 1739 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__UnifyGoal_16));
#line 1739 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1739 "deep_profiling.m"
        }
#line 1737 "deep_profiling.m"
      }
#line 1741 "deep_profiling.m"
    else
#line 1743 "deep_profiling.m"
      {
#line 1743 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeInfo_45_45;
#line 1743 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeCtorInfo_46_46;
#line 1743 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CSNVarsGoals_17;
#line 1743 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__InnerVars_18;
#line 1743 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__InnerGoals_19;
#line 1743 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CellGoal_20;
#line 1743 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_28_28;
#line 1743 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_34_34;
#line 1743 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_36_36;
#line 1744 "deep_profiling.m"
        MR_Box ll_backend__deep_profiling__conv2_STATE_VARIABLE_DeepInfo_34_34;

#line 1742 "deep_profiling.m"
        {
#line 1742 "deep_profiling.m"
          ll_backend__deep_profiling__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1742 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_28_28, 0) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_7[1]));
#line 1742 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_28_28, 1) = ((MR_Box) (ll_backend__deep_profiling__generate_csn_vector_7_p_0_1));
#line 1742 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1742 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_28_28, 3) = ((MR_Box) (ll_backend__deep_profiling__Length_8));
#line 1742 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_28_28, 4) = ((MR_Box) ((MR_Integer) 9));
#line 1742 "deep_profiling.m"
        }
#line 1742 "deep_profiling.m"
        {
#line 1742 "deep_profiling.m"
          mercury__require__expect_4_p_0(ll_backend__deep_profiling__V_28_28, (MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.generate_csn_vector\'/7", (MR_String) "too long");
        }
#line 1744 "deep_profiling.m"
        {
#line 1744 "deep_profiling.m"
          mercury__list__map_foldl_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__deep_profiling_scalar_common_1[2], (MR_Word) &ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0, (MR_Word) &ll_backend__deep_profiling_scalar_common_1[10], ll_backend__deep_profiling__CSNs_9, &ll_backend__deep_profiling__CSNVarsGoals_17, ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_21)), &ll_backend__deep_profiling__conv2_STATE_VARIABLE_DeepInfo_34_34);
        }
#line 1744 "deep_profiling.m"
        ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_34_34 = ((MR_Word) ll_backend__deep_profiling__conv2_STATE_VARIABLE_DeepInfo_34_34);
#line 4097 "ll_backend.deep_profiling.c"
        ll_backend__deep_profiling__TypeInfo_45_45 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[1];
#line 4099 "ll_backend.deep_profiling.c"
        ll_backend__deep_profiling__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1746 "deep_profiling.m"
        {
#line 1746 "deep_profiling.m"
          ll_backend__deep_profiling__InnerVars_18 = mercury__assoc_list__keys_1_f_0(ll_backend__deep_profiling__TypeInfo_45_45, ll_backend__deep_profiling__TypeCtorInfo_46_46, ll_backend__deep_profiling__CSNVarsGoals_17);
        }
#line 1747 "deep_profiling.m"
        {
#line 1747 "deep_profiling.m"
          ll_backend__deep_profiling__InnerGoals_19 = mercury__assoc_list__values_1_f_0(ll_backend__deep_profiling__TypeInfo_45_45, ll_backend__deep_profiling__TypeCtorInfo_46_46, ll_backend__deep_profiling__CSNVarsGoals_17);
        }
#line 1748 "deep_profiling.m"
        {
#line 1748 "deep_profiling.m"
          ll_backend__deep_profiling__generate_csn_vector_cell_6_p_0(ll_backend__deep_profiling__Length_8, ll_backend__deep_profiling__InnerVars_18, ll_backend__deep_profiling__CellVar_12, &ll_backend__deep_profiling__CellGoal_20, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_34_34, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_22);
        }
#line 1750 "deep_profiling.m"
        {
#line 1750 "deep_profiling.m"
          MR_Word base;
#line 1750 "deep_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1750 "deep_profiling.m"
          *ll_backend__deep_profiling__CSNVars_10 = base;
#line 1750 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (*ll_backend__deep_profiling__CellVar_12));
#line 1750 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__InnerVars_18));
#line 1750 "deep_profiling.m"
        }
#line 1751 "deep_profiling.m"
        {
#line 1751 "deep_profiling.m"
          ll_backend__deep_profiling__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1751 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_36_36, 0) = ((MR_Box) (ll_backend__deep_profiling__CellGoal_20));
#line 1751 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1751 "deep_profiling.m"
        }
#line 1751 "deep_profiling.m"
        {
#line 1751 "deep_profiling.m"
          *ll_backend__deep_profiling__UnifyGoals_11 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_46_46, ll_backend__deep_profiling__InnerGoals_19, ll_backend__deep_profiling__V_36_36);
        }
#line 1743 "deep_profiling.m"
      }
#line 1741 "deep_profiling.m"
  }
#line 1731 "deep_profiling.m"
}

#line 1722 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_depth_var_4_p_0(
#line 1722 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__CSN_5,
#line 1722 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__DepthVar_6,
#line 1722 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11,
#line 1722 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_12)
#line 1722 "deep_profiling.m"
{
#line 1725 "deep_profiling.m"
  {
#line 1725 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1725 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 6)));
#line 1725 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__VarName_9;
#line 1725 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarInfo_10;
#line 1725 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_17_17;
#line 1725 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_36_36;
#line 1725 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_52;
#line 1725 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_53;
#line 1725 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_54;
#line 1725 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_55;
#line 1726 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 0)));
#line 1726 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 1)));
#line 1726 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 2)));
#line 1726 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 3)));
#line 1726 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 4)));
#line 1726 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 5)));
#line 1726 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 7)));
#line 1726 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 8)));
#line 1729 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_27_27;
#line 1729 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_28_28;
#line 1729 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_29_29;
#line 1729 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_30_30;
#line 1729 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_31_31;
#line 1729 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_32_32;
#line 1729 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_34_34;
#line 1729 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_35_35;
#line 1729 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_33_33;

#line 1727 "deep_profiling.m"
    {
#line 1727 "deep_profiling.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_6[2], ll_backend__deep_profiling__CSN_5, &ll_backend__deep_profiling__V_36_36);
    }
#line 1727 "deep_profiling.m"
    {
#line 1727 "deep_profiling.m"
      ll_backend__deep_profiling__VarName_9 = mercury__string__f_43_43_2_f_0((MR_String) "Depth", ll_backend__deep_profiling__V_36_36);
    }
#line 1728 "deep_profiling.m"
    {
#line 1728 "deep_profiling.m"
      ll_backend__deep_profiling__V_17_17 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1840 "deep_profiling.m"
    ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_8, (MR_Integer) 0)));
#line 1840 "deep_profiling.m"
    ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_8, (MR_Integer) 1)));
#line 1852 "deep_profiling.m"
    {
#line 1852 "deep_profiling.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__VarName_9, ll_backend__deep_profiling__DepthVar_6, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_52, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_54);
    }
#line 1853 "deep_profiling.m"
    {
#line 1853 "deep_profiling.m"
      hlds__vartypes__add_var_type_4_p_0(*ll_backend__deep_profiling__DepthVar_6, ll_backend__deep_profiling__V_17_17, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_53, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_55);
    }
#line 1842 "deep_profiling.m"
    {
#line 1842 "deep_profiling.m"
      ll_backend__deep_profiling__VarInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1842 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_10, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_54));
#line 1842 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_10, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_55));
#line 1842 "deep_profiling.m"
    }
#line 1729 "deep_profiling.m"
    ll_backend__deep_profiling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 0)));
#line 1729 "deep_profiling.m"
    ll_backend__deep_profiling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 1)));
#line 1729 "deep_profiling.m"
    ll_backend__deep_profiling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 2)));
#line 1729 "deep_profiling.m"
    ll_backend__deep_profiling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 3)));
#line 1729 "deep_profiling.m"
    ll_backend__deep_profiling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 4)));
#line 1729 "deep_profiling.m"
    ll_backend__deep_profiling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 5)));
#line 1729 "deep_profiling.m"
    ll_backend__deep_profiling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 6)));
#line 1729 "deep_profiling.m"
    ll_backend__deep_profiling__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 7)));
#line 1729 "deep_profiling.m"
    ll_backend__deep_profiling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_11, (MR_Integer) 8)));
#line 1729 "deep_profiling.m"
    {
#line 1729 "deep_profiling.m"
      MR_Word base;
#line 1729 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1729 "deep_profiling.m"
      *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_12 = base;
#line 1729 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__V_27_27));
#line 1729 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__V_28_28));
#line 1729 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__deep_profiling__V_29_29));
#line 1729 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__deep_profiling__V_30_30));
#line 1729 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__deep_profiling__V_31_31));
#line 1729 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__deep_profiling__V_32_32));
#line 1729 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo_10));
#line 1729 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__deep_profiling__V_34_34));
#line 1729 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__deep_profiling__V_35_35));
#line 1729 "deep_profiling.m"
    }
#line 1725 "deep_profiling.m"
  }
#line 1722 "deep_profiling.m"
}

#line 1687 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0_1(
#line 1687 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 1687 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 1687 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2,
#line 1687 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_3,
#line 1687 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_4)
#line 1687 "deep_profiling.m"
{
#line 1687 "deep_profiling.m"
  {
#line 1687 "deep_profiling.m"
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
#line 1687 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__conv1_DepthVar_6;
#line 1687 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__conv0_STATE_VARIABLE_DeepInfo_12;

#line 1687 "deep_profiling.m"
    {
#line 1687 "deep_profiling.m"
      ll_backend__deep_profiling__generate_depth_var_4_p_0(((MR_Integer) ll_backend__deep_profiling__wrapper_arg_1), &ll_backend__deep_profiling__conv1_DepthVar_6, ((MR_Word) ll_backend__deep_profiling__wrapper_arg_3), &ll_backend__deep_profiling__conv0_STATE_VARIABLE_DeepInfo_12);
    }
#line 1687 "deep_profiling.m"
    *ll_backend__deep_profiling__wrapper_arg_2 = ((MR_Box) (ll_backend__deep_profiling__conv1_DepthVar_6));
#line 1687 "deep_profiling.m"
    *ll_backend__deep_profiling__wrapper_arg_4 = ((MR_Box) (ll_backend__deep_profiling__conv0_STATE_VARIABLE_DeepInfo_12));
#line 1687 "deep_profiling.m"
  }
#line 1687 "deep_profiling.m"
}

#line 1678 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(
#line 1678 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 1678 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__CSDVar_2,
#line 1678 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
#line 1678 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__4_4,
#line 1678 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__5_5,
#line 1678 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__6_6,
#line 1678 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_7,
#line 1678 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_8)
#line 1678 "deep_profiling.m"
{
#line 1683 "deep_profiling.m"
  {
#line 1683 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 1683 "deep_profiling.m"
    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1683 "deep_profiling.m"
      {
#line 1683 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1683 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1683 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1683 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1684 "deep_profiling.m"
        *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_8 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_7;
#line 1683 "deep_profiling.m"
      }
#line 1683 "deep_profiling.m"
    else
#line 1686 "deep_profiling.m"
      {
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeCtorInfo_97_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeInfo_98_98 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[1];
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeCtorInfo_100_100;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Chunk_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Chunks_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__DepthVars_21;
#line 1686 "deep_profiling.m"
        MR_Integer ll_backend__deep_profiling__Length_22;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CSNCallVars_23;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CSNCallGoals_24;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CallCellVar_25;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CSNExitVars_26;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CSNExitGoals_27;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__ExitCellVar_28;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CSNFailVars_29;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CSNFailGoals_30;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__FailCellVar_31;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CSNExtraVars_32;
#line 1686 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__CallPredName_33;
#line 1686 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__ExitPredName_34;
#line 1686 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__FailPredName_35;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__ModuleInfo_36;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CallCellGoal_37;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__ExitCellGoal_38;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__FailCellGoal_39;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TailCallGoals_40;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TailExitGoals_41;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TailFailGoals_42;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TailExtraVars_43;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_48_48;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_49_49;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_51_51;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_52_52;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_53_53;
#line 1686 "deep_profiling.m"
        MR_Integer ll_backend__deep_profiling__V_67_67;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_68_68;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_70_70;
#line 1686 "deep_profiling.m"
        MR_Integer ll_backend__deep_profiling__V_71_71;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_72_72;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_75_75;
#line 1686 "deep_profiling.m"
        MR_Integer ll_backend__deep_profiling__V_76_76;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_77_77;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_80_80;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_82_82;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_83_83;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_84_84;
#line 1686 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__V_101_101;
#line 1686 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_107_107;
#line 1686 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__V_109_109;
#line 1686 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__V_117_117;
#line 1687 "deep_profiling.m"
        MR_Box ll_backend__deep_profiling__conv2_STATE_VARIABLE_DeepInfo_47_47;
#line 1706 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_85_85;
#line 1706 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_86_86;
#line 1706 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_87_87;
#line 1706 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_88_88;
#line 1706 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_89_89;
#line 1706 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_90_90;
#line 1706 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__V_91_91;
#line 1706 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_92_92;

#line 1687 "deep_profiling.m"
        {
#line 1687 "deep_profiling.m"
          mercury__list__map_foldl_5_p_0(ll_backend__deep_profiling__TypeCtorInfo_97_97, ll_backend__deep_profiling__TypeInfo_98_98, (MR_Word) &ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0, (MR_Word) &ll_backend__deep_profiling_scalar_common_1[9], ll_backend__deep_profiling__Chunk_13, &ll_backend__deep_profiling__DepthVars_21, ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_7)), &ll_backend__deep_profiling__conv2_STATE_VARIABLE_DeepInfo_47_47);
        }
#line 1687 "deep_profiling.m"
        ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47 = ((MR_Word) ll_backend__deep_profiling__conv2_STATE_VARIABLE_DeepInfo_47_47);
#line 1692 "deep_profiling.m"
        {
#line 1692 "deep_profiling.m"
          mercury__list__length_2_p_0(ll_backend__deep_profiling__TypeCtorInfo_97_97, ll_backend__deep_profiling__Chunk_13, &ll_backend__deep_profiling__Length_22);
        }
#line 1693 "deep_profiling.m"
        {
#line 1693 "deep_profiling.m"
          ll_backend__deep_profiling__generate_csn_vector_7_p_0(ll_backend__deep_profiling__Length_22, ll_backend__deep_profiling__Chunk_13, &ll_backend__deep_profiling__CSNCallVars_23, &ll_backend__deep_profiling__CSNCallGoals_24, &ll_backend__deep_profiling__CallCellVar_25, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_48_48);
        }
#line 1695 "deep_profiling.m"
        {
#line 1695 "deep_profiling.m"
          ll_backend__deep_profiling__generate_csn_vector_7_p_0(ll_backend__deep_profiling__Length_22, ll_backend__deep_profiling__Chunk_13, &ll_backend__deep_profiling__CSNExitVars_26, &ll_backend__deep_profiling__CSNExitGoals_27, &ll_backend__deep_profiling__ExitCellVar_28, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_48_48, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_49_49);
        }
#line 1697 "deep_profiling.m"
        {
#line 1697 "deep_profiling.m"
          ll_backend__deep_profiling__generate_csn_vector_7_p_0(ll_backend__deep_profiling__Length_22, ll_backend__deep_profiling__Chunk_13, &ll_backend__deep_profiling__CSNFailVars_29, &ll_backend__deep_profiling__CSNFailGoals_30, &ll_backend__deep_profiling__FailCellVar_31, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_49_49, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50);
        }
#line 1699 "deep_profiling.m"
        {
#line 1699 "deep_profiling.m"
          ll_backend__deep_profiling__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_53_53, 0) = ((MR_Box) (ll_backend__deep_profiling__CSNFailVars_29));
#line 1699 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1699 "deep_profiling.m"
        }
#line 1699 "deep_profiling.m"
        {
#line 1699 "deep_profiling.m"
          ll_backend__deep_profiling__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_52_52, 0) = ((MR_Box) (ll_backend__deep_profiling__CSNExitVars_26));
#line 1699 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_52_52, 1) = ((MR_Box) (ll_backend__deep_profiling__V_53_53));
#line 1699 "deep_profiling.m"
        }
#line 1699 "deep_profiling.m"
        {
#line 1699 "deep_profiling.m"
          ll_backend__deep_profiling__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_51_51, 0) = ((MR_Box) (ll_backend__deep_profiling__CSNCallVars_23));
#line 1699 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_51_51, 1) = ((MR_Box) (ll_backend__deep_profiling__V_52_52));
#line 1699 "deep_profiling.m"
        }
#line 1699 "deep_profiling.m"
        {
#line 1699 "deep_profiling.m"
          mercury__list__condense_2_p_0(ll_backend__deep_profiling__TypeInfo_98_98, ll_backend__deep_profiling__V_51_51, &ll_backend__deep_profiling__CSNExtraVars_32);
        }
#line 4579 "ll_backend.deep_profiling.c"
        ll_backend__deep_profiling__V_107_107 = (MR_Word) &ll_backend__deep_profiling_scalar_common_6[2];
#line 1701 "deep_profiling.m"
        {
#line 1701 "deep_profiling.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__deep_profiling__V_107_107, ll_backend__deep_profiling__Length_22, &ll_backend__deep_profiling__V_101_101);
        }
#line 1701 "deep_profiling.m"
        {
#line 1701 "deep_profiling.m"
          ll_backend__deep_profiling__CallPredName_33 = mercury__string__f_43_43_2_f_0((MR_String) "save_recursion_depth_", ll_backend__deep_profiling__V_101_101);
        }
#line 1703 "deep_profiling.m"
        {
#line 1703 "deep_profiling.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__deep_profiling__V_107_107, ll_backend__deep_profiling__Length_22, &ll_backend__deep_profiling__V_109_109);
        }
#line 1702 "deep_profiling.m"
        {
#line 1702 "deep_profiling.m"
          ll_backend__deep_profiling__ExitPredName_34 = mercury__string__f_43_43_2_f_0((MR_String) "restore_recursion_depth_exit_", ll_backend__deep_profiling__V_109_109);
        }
#line 1705 "deep_profiling.m"
        {
#line 1705 "deep_profiling.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__deep_profiling__V_107_107, ll_backend__deep_profiling__Length_22, &ll_backend__deep_profiling__V_117_117);
        }
#line 1704 "deep_profiling.m"
        {
#line 1704 "deep_profiling.m"
          ll_backend__deep_profiling__FailPredName_35 = mercury__string__f_43_43_2_f_0((MR_String) "restore_recursion_depth_fail_", ll_backend__deep_profiling__V_117_117);
        }
#line 1706 "deep_profiling.m"
        ll_backend__deep_profiling__ModuleInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 0)));
#line 1706 "deep_profiling.m"
        ll_backend__deep_profiling__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 1)));
#line 1706 "deep_profiling.m"
        ll_backend__deep_profiling__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 2)));
#line 1706 "deep_profiling.m"
        ll_backend__deep_profiling__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 3)));
#line 1706 "deep_profiling.m"
        ll_backend__deep_profiling__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 4)));
#line 1706 "deep_profiling.m"
        ll_backend__deep_profiling__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 5)));
#line 1706 "deep_profiling.m"
        ll_backend__deep_profiling__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 6)));
#line 1706 "deep_profiling.m"
        ll_backend__deep_profiling__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 7)));
#line 1706 "deep_profiling.m"
        ll_backend__deep_profiling__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, (MR_Integer) 8)));
#line 1707 "deep_profiling.m"
        ll_backend__deep_profiling__V_67_67 = (ll_backend__deep_profiling__Length_22 + (MR_Integer) 2);
#line 1708 "deep_profiling.m"
        {
#line 1708 "deep_profiling.m"
          ll_backend__deep_profiling__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1708 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_70_70, 0) = ((MR_Box) (ll_backend__deep_profiling__CallCellVar_25));
#line 1708 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_70_70, 1) = ((MR_Box) (ll_backend__deep_profiling__DepthVars_21));
#line 1708 "deep_profiling.m"
        }
#line 1708 "deep_profiling.m"
        {
#line 1708 "deep_profiling.m"
          ll_backend__deep_profiling__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1708 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_68_68, 0) = ((MR_Box) (ll_backend__deep_profiling__CSDVar_2));
#line 1708 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_68_68, 1) = ((MR_Box) (ll_backend__deep_profiling__V_70_70));
#line 1708 "deep_profiling.m"
        }
#line 1707 "deep_profiling.m"
        {
#line 1707 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_36, ll_backend__deep_profiling__CallPredName_33, ll_backend__deep_profiling__V_67_67, ll_backend__deep_profiling__V_68_68, ll_backend__deep_profiling__DepthVars_21, &ll_backend__deep_profiling__CallCellGoal_37);
        }
#line 1709 "deep_profiling.m"
        ll_backend__deep_profiling__V_71_71 = (ll_backend__deep_profiling__Length_22 + (MR_Integer) 2);
#line 1710 "deep_profiling.m"
        {
#line 1710 "deep_profiling.m"
          ll_backend__deep_profiling__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1710 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_75_75, 0) = ((MR_Box) (ll_backend__deep_profiling__ExitCellVar_28));
#line 1710 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_75_75, 1) = ((MR_Box) (ll_backend__deep_profiling__DepthVars_21));
#line 1710 "deep_profiling.m"
        }
#line 1710 "deep_profiling.m"
        {
#line 1710 "deep_profiling.m"
          ll_backend__deep_profiling__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1710 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_72_72, 0) = ((MR_Box) (ll_backend__deep_profiling__CSDVar_2));
#line 1710 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_72_72, 1) = ((MR_Box) (ll_backend__deep_profiling__V_75_75));
#line 1710 "deep_profiling.m"
        }
#line 1709 "deep_profiling.m"
        {
#line 1709 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_36, ll_backend__deep_profiling__ExitPredName_34, ll_backend__deep_profiling__V_71_71, ll_backend__deep_profiling__V_72_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ExitCellGoal_38);
        }
#line 1711 "deep_profiling.m"
        ll_backend__deep_profiling__V_76_76 = (ll_backend__deep_profiling__Length_22 + (MR_Integer) 2);
#line 1712 "deep_profiling.m"
        {
#line 1712 "deep_profiling.m"
          ll_backend__deep_profiling__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1712 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_80_80, 0) = ((MR_Box) (ll_backend__deep_profiling__FailCellVar_31));
#line 1712 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_80_80, 1) = ((MR_Box) (ll_backend__deep_profiling__DepthVars_21));
#line 1712 "deep_profiling.m"
        }
#line 1712 "deep_profiling.m"
        {
#line 1712 "deep_profiling.m"
          ll_backend__deep_profiling__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1712 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_77_77, 0) = ((MR_Box) (ll_backend__deep_profiling__CSDVar_2));
#line 1712 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_77_77, 1) = ((MR_Box) (ll_backend__deep_profiling__V_80_80));
#line 1712 "deep_profiling.m"
        }
#line 1711 "deep_profiling.m"
        {
#line 1711 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_36, ll_backend__deep_profiling__FailPredName_35, ll_backend__deep_profiling__V_76_76, ll_backend__deep_profiling__V_77_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__FailCellGoal_39);
        }
#line 1714 "deep_profiling.m"
        {
#line 1714 "deep_profiling.m"
          ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(ll_backend__deep_profiling__Chunks_14, ll_backend__deep_profiling__CSDVar_2, &ll_backend__deep_profiling__TailCallGoals_40, &ll_backend__deep_profiling__TailExitGoals_41, &ll_backend__deep_profiling__TailFailGoals_42, &ll_backend__deep_profiling__TailExtraVars_43, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_50_50, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_8);
        }
#line 4715 "ll_backend.deep_profiling.c"
        ll_backend__deep_profiling__TypeCtorInfo_100_100 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1717 "deep_profiling.m"
        {
#line 1717 "deep_profiling.m"
          ll_backend__deep_profiling__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1717 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_82_82, 0) = ((MR_Box) (ll_backend__deep_profiling__CallCellGoal_37));
#line 1717 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_82_82, 1) = ((MR_Box) (ll_backend__deep_profiling__TailCallGoals_40));
#line 1717 "deep_profiling.m"
        }
#line 1717 "deep_profiling.m"
        {
#line 1717 "deep_profiling.m"
          *ll_backend__deep_profiling__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_100_100, ll_backend__deep_profiling__CSNCallGoals_24, ll_backend__deep_profiling__V_82_82);
        }
#line 1718 "deep_profiling.m"
        {
#line 1718 "deep_profiling.m"
          ll_backend__deep_profiling__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_83_83, 0) = ((MR_Box) (ll_backend__deep_profiling__ExitCellGoal_38));
#line 1718 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_83_83, 1) = ((MR_Box) (ll_backend__deep_profiling__TailExitGoals_41));
#line 1718 "deep_profiling.m"
        }
#line 1718 "deep_profiling.m"
        {
#line 1718 "deep_profiling.m"
          *ll_backend__deep_profiling__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_100_100, ll_backend__deep_profiling__CSNExitGoals_27, ll_backend__deep_profiling__V_83_83);
        }
#line 1719 "deep_profiling.m"
        {
#line 1719 "deep_profiling.m"
          ll_backend__deep_profiling__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1719 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_84_84, 0) = ((MR_Box) (ll_backend__deep_profiling__FailCellGoal_39));
#line 1719 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_84_84, 1) = ((MR_Box) (ll_backend__deep_profiling__TailFailGoals_42));
#line 1719 "deep_profiling.m"
        }
#line 1719 "deep_profiling.m"
        {
#line 1719 "deep_profiling.m"
          *ll_backend__deep_profiling__HeadVar__5_5 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_100_100, ll_backend__deep_profiling__CSNFailGoals_30, ll_backend__deep_profiling__V_84_84);
        }
#line 1720 "deep_profiling.m"
        {
#line 1720 "deep_profiling.m"
          *ll_backend__deep_profiling__HeadVar__6_6 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeInfo_98_98, ll_backend__deep_profiling__CSNExtraVars_32, ll_backend__deep_profiling__TailExtraVars_43);
        }
#line 1686 "deep_profiling.m"
      }
#line 1683 "deep_profiling.m"
  }
#line 1678 "deep_profiling.m"
}

#line 1667 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_p_0(
#line 1667 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__CSNs_9,
#line 1667 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__CSDVar_10,
#line 1667 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__CallGoals_11,
#line 1667 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__ExitGoals_12,
#line 1667 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__FailGoals_13,
#line 1667 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__ExtraVars_14,
#line 1667 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_17,
#line 1667 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_18)
#line 1667 "deep_profiling.m"
{
#line 1673 "deep_profiling.m"
  {
#line 1673 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1673 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CSNChunks_16;

#line 1674 "deep_profiling.m"
    {
#line 1674 "deep_profiling.m"
      mercury__list__chunk_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__deep_profiling__CSNs_9, (MR_Integer) 9, &ll_backend__deep_profiling__CSNChunks_16);
    }
#line 1675 "deep_profiling.m"
    {
#line 1675 "deep_profiling.m"
      ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_2_8_p_0(ll_backend__deep_profiling__CSNChunks_16, ll_backend__deep_profiling__CSDVar_10, ll_backend__deep_profiling__CallGoals_11, ll_backend__deep_profiling__ExitGoals_12, ll_backend__deep_profiling__FailGoals_13, ll_backend__deep_profiling__ExtraVars_14, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_17, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_18);
#line 1675 "deep_profiling.m"
      return;
    }
#line 1673 "deep_profiling.m"
  }
#line 1667 "deep_profiling.m"
}

#line 1607 "deep_profiling.m"
static MR_Word MR_CALL 
ll_backend__deep_profiling__classify_call_2_f_0(
#line 1607 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_4,
#line 1607 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Expr_5)
#line 1607 "deep_profiling.m"
{
#line 1611 "deep_profiling.m"
  {
#line 1611 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1611 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Class_6;

#line 1611 "deep_profiling.m"
#line 1611 "deep_profiling.m"
    switch (MR_tag((MR_Word) ll_backend__deep_profiling__Expr_5)) {
#line 1611 "deep_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1611 "deep_profiling.m"
      case (MR_Integer) 0:
#line 1650 "deep_profiling.m"
        {
#line 1651 "deep_profiling.m"
          {
#line 1651 "deep_profiling.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "function \140ll_backend.deep_profiling.classify_call\'/2", (MR_String) "unexpected goal type");
          }
#line 1650 "deep_profiling.m"
        }
#line 1611 "deep_profiling.m"
        break;
#line 1611 "deep_profiling.m"
      case (MR_Integer) 1:
#line 1650 "deep_profiling.m"
        {
#line 1651 "deep_profiling.m"
          {
#line 1651 "deep_profiling.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "function \140ll_backend.deep_profiling.classify_call\'/2", (MR_String) "unexpected goal type");
          }
#line 1650 "deep_profiling.m"
        }
#line 1611 "deep_profiling.m"
        break;
#line 1611 "deep_profiling.m"
      case (MR_Integer) 2:
#line 1611 "deep_profiling.m"
        {
#line 1611 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Expr_5, (MR_Integer) 0)));
#line 1611 "deep_profiling.m"
          MR_Integer ll_backend__deep_profiling__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Expr_5, (MR_Integer) 1)));
#line 1611 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Expr_5, (MR_Integer) 2)));
#line 1611 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Expr_5, (MR_Integer) 3)));
#line 1611 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Expr_5, (MR_Integer) 4)));
#line 1611 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Expr_5, (MR_Integer) 5)));
#line 1619 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__TypeInfoVar_14;
#line 1615 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_54_54;
#line 1615 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_78_78;
#line 1613 "deep_profiling.m"
          MR_Integer ll_backend__deep_profiling__V_13_13;
#line 1616 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_15_15;

#line 1614 "deep_profiling.m"
          {
#line 1614 "deep_profiling.m"
            ll_backend__deep_profiling__V_54_54 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          }
#line 1613 "deep_profiling.m"
          {
#line 1613 "deep_profiling.m"
            hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ll_backend__deep_profiling__ModuleInfo_4, ll_backend__deep_profiling__V_54_54, (MR_String) "unify", (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__deep_profiling_scalar_common_6[1]), &ll_backend__deep_profiling__V_78_78, &ll_backend__deep_profiling__V_13_13);
          }
#line 1613 "deep_profiling.m"
          {
#line 1613 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__deep_profiling__PredId_7, ll_backend__deep_profiling__V_78_78);
          }
#line 1615 "deep_profiling.m"
          if (ll_backend__deep_profiling__succeeded)
#line 1615 "deep_profiling.m"
            {
#line 1616 "deep_profiling.m"
              ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 1616 "deep_profiling.m"
              if (ll_backend__deep_profiling__succeeded)
#line 1616 "deep_profiling.m"
                {
#line 1616 "deep_profiling.m"
                  ll_backend__deep_profiling__TypeInfoVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Args_9, (MR_Integer) 0)));
#line 1616 "deep_profiling.m"
                  ll_backend__deep_profiling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Args_9, (MR_Integer) 1)));
#line 1616 "deep_profiling.m"
                }
#line 1615 "deep_profiling.m"
            }
#line 1619 "deep_profiling.m"
          if (ll_backend__deep_profiling__succeeded)
#line 1618 "deep_profiling.m"
            {
#line 1618 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_60_60;

#line 1618 "deep_profiling.m"
              {
#line 1618 "deep_profiling.m"
                ll_backend__deep_profiling__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1618 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_60_60, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_7));
#line 1618 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_60_60, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_8));
#line 1618 "deep_profiling.m"
              }
#line 1618 "deep_profiling.m"
              {
#line 1618 "deep_profiling.m"
                ll_backend__deep_profiling__Class_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1618 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Class_6, 0) = ((MR_Box) (ll_backend__deep_profiling__V_60_60));
#line 1618 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Class_6, 1) = ((MR_Box) (ll_backend__deep_profiling__TypeInfoVar_14));
#line 1618 "deep_profiling.m"
              }
#line 1618 "deep_profiling.m"
            }
#line 1619 "deep_profiling.m"
          else
#line 1626 "deep_profiling.m"
            {
#line 1626 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__TypeInfoVar_77;
#line 1622 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_61_61;
#line 1622 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_79_79;
#line 1620 "deep_profiling.m"
              MR_Integer ll_backend__deep_profiling__V_16_16;
#line 1623 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_17_17;

#line 1621 "deep_profiling.m"
              {
#line 1621 "deep_profiling.m"
                ll_backend__deep_profiling__V_61_61 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 1620 "deep_profiling.m"
              {
#line 1620 "deep_profiling.m"
                hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ll_backend__deep_profiling__ModuleInfo_4, ll_backend__deep_profiling__V_61_61, (MR_String) "compare", (MR_Integer) 0, (MR_Integer) 3, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__deep_profiling_scalar_common_6[1]), &ll_backend__deep_profiling__V_79_79, &ll_backend__deep_profiling__V_16_16);
              }
#line 1620 "deep_profiling.m"
              {
#line 1620 "deep_profiling.m"
                ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__deep_profiling__PredId_7, ll_backend__deep_profiling__V_79_79);
              }
#line 1622 "deep_profiling.m"
              if (ll_backend__deep_profiling__succeeded)
#line 1622 "deep_profiling.m"
                {
#line 1623 "deep_profiling.m"
                  ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 1623 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 1623 "deep_profiling.m"
                    {
#line 1623 "deep_profiling.m"
                      ll_backend__deep_profiling__TypeInfoVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Args_9, (MR_Integer) 0)));
#line 1623 "deep_profiling.m"
                      ll_backend__deep_profiling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Args_9, (MR_Integer) 1)));
#line 1623 "deep_profiling.m"
                    }
#line 1622 "deep_profiling.m"
                }
#line 1626 "deep_profiling.m"
              if (ll_backend__deep_profiling__succeeded)
#line 1625 "deep_profiling.m"
                {
#line 1625 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_67_67;

#line 1625 "deep_profiling.m"
                  {
#line 1625 "deep_profiling.m"
                    ll_backend__deep_profiling__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1625 "deep_profiling.m"
                    MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_67_67, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_7));
#line 1625 "deep_profiling.m"
                    MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_67_67, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_8));
#line 1625 "deep_profiling.m"
                  }
#line 1625 "deep_profiling.m"
                  {
#line 1625 "deep_profiling.m"
                    ll_backend__deep_profiling__Class_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1625 "deep_profiling.m"
                    MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Class_6, 0) = ((MR_Box) (ll_backend__deep_profiling__V_67_67));
#line 1625 "deep_profiling.m"
                    MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Class_6, 1) = ((MR_Box) (ll_backend__deep_profiling__TypeInfoVar_77));
#line 1625 "deep_profiling.m"
                  }
#line 1625 "deep_profiling.m"
                }
#line 1626 "deep_profiling.m"
              else
#line 1634 "deep_profiling.m"
                {
#line 1634 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__TypeInfoVar_76;
#line 1630 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_68_68;
#line 1630 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_80_80;
#line 1627 "deep_profiling.m"
                  MR_Integer ll_backend__deep_profiling__V_18_18;
#line 1631 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_19_19;

#line 1628 "deep_profiling.m"
                  {
#line 1628 "deep_profiling.m"
                    ll_backend__deep_profiling__V_68_68 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  }
#line 1627 "deep_profiling.m"
                  {
#line 1627 "deep_profiling.m"
                    hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ll_backend__deep_profiling__ModuleInfo_4, ll_backend__deep_profiling__V_68_68, (MR_String) "compare_representation", (MR_Integer) 0, (MR_Integer) 3, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__deep_profiling_scalar_common_6[1]), &ll_backend__deep_profiling__V_80_80, &ll_backend__deep_profiling__V_18_18);
                  }
#line 1627 "deep_profiling.m"
                  {
#line 1627 "deep_profiling.m"
                    ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__deep_profiling__PredId_7, ll_backend__deep_profiling__V_80_80);
                  }
#line 1630 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 1630 "deep_profiling.m"
                    {
#line 1631 "deep_profiling.m"
                      ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 1631 "deep_profiling.m"
                      if (ll_backend__deep_profiling__succeeded)
#line 1631 "deep_profiling.m"
                        {
#line 1631 "deep_profiling.m"
                          ll_backend__deep_profiling__TypeInfoVar_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Args_9, (MR_Integer) 0)));
#line 1631 "deep_profiling.m"
                          ll_backend__deep_profiling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Args_9, (MR_Integer) 1)));
#line 1631 "deep_profiling.m"
                        }
#line 1630 "deep_profiling.m"
                    }
#line 1634 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 1633 "deep_profiling.m"
                    {
#line 1633 "deep_profiling.m"
                      MR_Word ll_backend__deep_profiling__V_74_74;

#line 1633 "deep_profiling.m"
                      {
#line 1633 "deep_profiling.m"
                        ll_backend__deep_profiling__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1633 "deep_profiling.m"
                        MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_74_74, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_7));
#line 1633 "deep_profiling.m"
                        MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_74_74, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_8));
#line 1633 "deep_profiling.m"
                      }
#line 1633 "deep_profiling.m"
                      {
#line 1633 "deep_profiling.m"
                        ll_backend__deep_profiling__Class_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1633 "deep_profiling.m"
                        MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Class_6, 0) = ((MR_Box) (ll_backend__deep_profiling__V_74_74));
#line 1633 "deep_profiling.m"
                        MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Class_6, 1) = ((MR_Box) (ll_backend__deep_profiling__TypeInfoVar_76));
#line 1633 "deep_profiling.m"
                      }
#line 1633 "deep_profiling.m"
                    }
#line 1634 "deep_profiling.m"
                  else
#line 1635 "deep_profiling.m"
                    {
#line 1635 "deep_profiling.m"
                      MR_Word ll_backend__deep_profiling__V_75_75;

#line 1635 "deep_profiling.m"
                      {
#line 1635 "deep_profiling.m"
                        ll_backend__deep_profiling__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1635 "deep_profiling.m"
                        MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_75_75, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_7));
#line 1635 "deep_profiling.m"
                        MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_75_75, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_8));
#line 1635 "deep_profiling.m"
                      }
#line 1635 "deep_profiling.m"
                      ll_backend__deep_profiling__Class_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__deep_profiling__V_75_75);
#line 1635 "deep_profiling.m"
                    }
#line 1634 "deep_profiling.m"
                }
#line 1626 "deep_profiling.m"
            }
#line 1611 "deep_profiling.m"
        }
#line 1611 "deep_profiling.m"
        break;
#line 1611 "deep_profiling.m"
      case (MR_Integer) 3:
#line 1611 "deep_profiling.m"
#line 1611 "deep_profiling.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Expr_5, (MR_Integer) 0)))) {
#line 1611 "deep_profiling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1611 "deep_profiling.m"
          case (MR_Integer) 0:
#line 1638 "deep_profiling.m"
            {
#line 1638 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Generic_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Expr_5, (MR_Integer) 1)));
#line 1638 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Expr_5, (MR_Integer) 2)));
#line 1638 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Expr_5, (MR_Integer) 3)));
#line 1638 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Expr_5, (MR_Integer) 4)));
#line 1638 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Expr_5, (MR_Integer) 5)));

#line 1639 "deep_profiling.m"
              {
#line 1639 "deep_profiling.m"
                ll_backend__deep_profiling__Class_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1639 "deep_profiling.m"
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Class_6, 0) = ((MR_Box) (ll_backend__deep_profiling__Generic_20));
#line 1639 "deep_profiling.m"
              }
#line 1638 "deep_profiling.m"
            }
#line 1611 "deep_profiling.m"
            break;
#line 1611 "deep_profiling.m"
          case (MR_Integer) 1:
#line 1611 "deep_profiling.m"
          case (MR_Integer) 2:
#line 1611 "deep_profiling.m"
          case (MR_Integer) 3:
#line 1611 "deep_profiling.m"
          case (MR_Integer) 4:
#line 1611 "deep_profiling.m"
          case (MR_Integer) 5:
#line 1611 "deep_profiling.m"
          case (MR_Integer) 6:
#line 1611 "deep_profiling.m"
          case (MR_Integer) 7:
#line 1650 "deep_profiling.m"
            {
#line 1651 "deep_profiling.m"
              {
#line 1651 "deep_profiling.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "function \140ll_backend.deep_profiling.classify_call\'/2", (MR_String) "unexpected goal type");
              }
#line 1650 "deep_profiling.m"
            }
#line 1611 "deep_profiling.m"
            break;
#line 1611 "deep_profiling.m"
        }
#line 1611 "deep_profiling.m"
        break;
#line 1611 "deep_profiling.m"
    }
#line 1611 "deep_profiling.m"
    return ll_backend__deep_profiling__Class_6;
#line 1611 "deep_profiling.m"
  }
#line 1607 "deep_profiling.m"
}

#line 1587 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__compress_filename_3_p_0(
#line 1587 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Deep_4,
#line 1587 "deep_profiling.m"
  MR_String ll_backend__deep_profiling__FileName0_5,
#line 1587 "deep_profiling.m"
  MR_String * ll_backend__deep_profiling__FileName_6)
#line 1587 "deep_profiling.m"
{
#line 1592 "deep_profiling.m"
  {
#line 1592 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1590 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 7)));
#line 1590 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 0)));
#line 1590 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 1)));
#line 1590 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 2)));
#line 1590 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 3)));
#line 1590 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 4)));
#line 1590 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 5)));
#line 1590 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 6)));
#line 1590 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Deep_4, (MR_Integer) 8)));

#line 1590 "deep_profiling.m"
    ll_backend__deep_profiling__succeeded = (strcmp(ll_backend__deep_profiling__FileName0_5, ll_backend__deep_profiling__V_15_15) == 0);
#line 1592 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 1591 "deep_profiling.m"
      *ll_backend__deep_profiling__FileName_6 = (MR_String) "";
#line 1592 "deep_profiling.m"
    else
#line 1593 "deep_profiling.m"
      *ll_backend__deep_profiling__FileName_6 = ll_backend__deep_profiling__FileName0_5;
#line 1592 "deep_profiling.m"
  }
#line 1587 "deep_profiling.m"
}

#line 1553 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_foreign_code_4_p_0(
#line 1553 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_5,
#line 1553 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_6,
#line 1553 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29,
#line 1553 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_30)
#line 1553 "deep_profiling.m"
{
#line 1556 "deep_profiling.m"
  {
#line 1556 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_5, (MR_Integer) 1)));
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalId_10;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ContainingGoalMap_11;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalPath_12;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__SiteNumCounter0_13;
#line 1556 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__SiteNum_14;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__SiteNumCounter_15;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__SiteNumVar_16;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarInfo_17;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__SiteNumVarGoal_18;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ModuleInfo_19;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PrepareGoal_20;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Context_21;
#line 1556 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__LineNumber_22;
#line 1556 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__FileName0_23;
#line 1556 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__FileName_24;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CallSite_25;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo1_26;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo_27;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalExpr_28;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_32_32;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_33_33;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_34_34;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_37_37;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_42_42;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_43_43;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_44_44;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_49_49;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_83_83;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_84_84;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_85_85;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_86_86;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_88_88;
#line 1556 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_90_90;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_91_91;
#line 1556 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_97_97;
#line 1557 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling___GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_5, (MR_Integer) 0)));
#line 1559 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_51_51;
#line 1559 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_52_52;
#line 1559 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_53_53;
#line 1559 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_54_54;
#line 1559 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_55_55;
#line 1559 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_56_56;
#line 1559 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_57_57;
#line 1559 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_58_58;
#line 1562 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_59_59;
#line 1562 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_60_60;
#line 1562 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_61_61;
#line 1562 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_62_62;
#line 1562 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_63_63;
#line 1562 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_64_64;
#line 1562 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_65_65;
#line 1562 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_66_66;
#line 1564 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_67_67;
#line 1564 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_68_68;
#line 1564 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_69_69;
#line 1564 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_70_70;
#line 1564 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_71_71;
#line 1564 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_72_72;
#line 1564 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_73_73;
#line 1564 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_74_74;
#line 1568 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_75_75;
#line 1568 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_76_76;
#line 1568 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_77_77;
#line 1568 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_78_78;
#line 1568 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_79_79;
#line 1568 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_80_80;
#line 1568 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_81_81;
#line 1568 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_82_82;
#line 1582 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_87_87;
#line 1582 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_89_89;
#line 1584 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_109_109;
#line 1584 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_110_110;
#line 1584 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_111_111;
#line 1584 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_112_112;
#line 1584 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_113_113;
#line 1584 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_115_115;
#line 1584 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_116_116;
#line 1584 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_117_117;
#line 1584 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_114_114;

#line 1558 "deep_profiling.m"
    {
#line 1558 "deep_profiling.m"
      ll_backend__deep_profiling__GoalId_10 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
    }
#line 1559 "deep_profiling.m"
    ll_backend__deep_profiling__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 0)));
#line 1559 "deep_profiling.m"
    ll_backend__deep_profiling__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 1)));
#line 1559 "deep_profiling.m"
    ll_backend__deep_profiling__ContainingGoalMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 2)));
#line 1559 "deep_profiling.m"
    ll_backend__deep_profiling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 3)));
#line 1559 "deep_profiling.m"
    ll_backend__deep_profiling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 4)));
#line 1559 "deep_profiling.m"
    ll_backend__deep_profiling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 5)));
#line 1559 "deep_profiling.m"
    ll_backend__deep_profiling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 6)));
#line 1559 "deep_profiling.m"
    ll_backend__deep_profiling__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 7)));
#line 1559 "deep_profiling.m"
    ll_backend__deep_profiling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 8)));
#line 1560 "deep_profiling.m"
    {
#line 1560 "deep_profiling.m"
      ll_backend__deep_profiling__GoalPath_12 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__deep_profiling__ContainingGoalMap_11, ll_backend__deep_profiling__GoalId_10);
    }
#line 1562 "deep_profiling.m"
    ll_backend__deep_profiling__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 0)));
#line 1562 "deep_profiling.m"
    ll_backend__deep_profiling__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 1)));
#line 1562 "deep_profiling.m"
    ll_backend__deep_profiling__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 2)));
#line 1562 "deep_profiling.m"
    ll_backend__deep_profiling__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 3)));
#line 1562 "deep_profiling.m"
    ll_backend__deep_profiling__SiteNumCounter0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 4)));
#line 1562 "deep_profiling.m"
    ll_backend__deep_profiling__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 5)));
#line 1562 "deep_profiling.m"
    ll_backend__deep_profiling__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 6)));
#line 1562 "deep_profiling.m"
    ll_backend__deep_profiling__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 7)));
#line 1562 "deep_profiling.m"
    ll_backend__deep_profiling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 8)));
#line 1563 "deep_profiling.m"
    {
#line 1563 "deep_profiling.m"
      mercury__counter__allocate_3_p_0(&ll_backend__deep_profiling__SiteNum_14, ll_backend__deep_profiling__SiteNumCounter0_13, &ll_backend__deep_profiling__SiteNumCounter_15);
    }
#line 1564 "deep_profiling.m"
    {
#line 1564 "deep_profiling.m"
      ll_backend__deep_profiling__V_32_32 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1564 "deep_profiling.m"
    ll_backend__deep_profiling__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 0)));
#line 1564 "deep_profiling.m"
    ll_backend__deep_profiling__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 1)));
#line 1564 "deep_profiling.m"
    ll_backend__deep_profiling__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 2)));
#line 1564 "deep_profiling.m"
    ll_backend__deep_profiling__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 3)));
#line 1564 "deep_profiling.m"
    ll_backend__deep_profiling__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 4)));
#line 1564 "deep_profiling.m"
    ll_backend__deep_profiling__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 5)));
#line 1564 "deep_profiling.m"
    ll_backend__deep_profiling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 6)));
#line 1564 "deep_profiling.m"
    ll_backend__deep_profiling__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 7)));
#line 1564 "deep_profiling.m"
    ll_backend__deep_profiling__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 8)));
#line 1564 "deep_profiling.m"
    {
#line 1564 "deep_profiling.m"
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "SiteNum", ll_backend__deep_profiling__V_32_32, &ll_backend__deep_profiling__SiteNumVar_16, ll_backend__deep_profiling__V_33_33, &ll_backend__deep_profiling__VarInfo_17);
    }
#line 1566 "deep_profiling.m"
    {
#line 1566 "deep_profiling.m"
      ll_backend__deep_profiling__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1566 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1566 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_34_34, 1) = ((MR_Box) (ll_backend__deep_profiling__SiteNum_14));
#line 1566 "deep_profiling.m"
    }
#line 1566 "deep_profiling.m"
    {
#line 1566 "deep_profiling.m"
      ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__deep_profiling__V_34_34, ll_backend__deep_profiling__SiteNumVar_16, &ll_backend__deep_profiling__SiteNumVarGoal_18);
    }
#line 1568 "deep_profiling.m"
    ll_backend__deep_profiling__ModuleInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 0)));
#line 1568 "deep_profiling.m"
    ll_backend__deep_profiling__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 1)));
#line 1568 "deep_profiling.m"
    ll_backend__deep_profiling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 2)));
#line 1568 "deep_profiling.m"
    ll_backend__deep_profiling__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 3)));
#line 1568 "deep_profiling.m"
    ll_backend__deep_profiling__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 4)));
#line 1568 "deep_profiling.m"
    ll_backend__deep_profiling__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 5)));
#line 1568 "deep_profiling.m"
    ll_backend__deep_profiling__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 6)));
#line 1568 "deep_profiling.m"
    ll_backend__deep_profiling__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 7)));
#line 1568 "deep_profiling.m"
    ll_backend__deep_profiling__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 8)));
#line 1570 "deep_profiling.m"
    {
#line 1570 "deep_profiling.m"
      ll_backend__deep_profiling__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1570 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_37_37, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVar_16));
#line 1570 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1570 "deep_profiling.m"
    }
#line 1569 "deep_profiling.m"
    {
#line 1569 "deep_profiling.m"
      ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_19, (MR_String) "prepare_for_callback", (MR_Integer) 1, ll_backend__deep_profiling__V_37_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__PrepareGoal_20);
    }
#line 1572 "deep_profiling.m"
    {
#line 1572 "deep_profiling.m"
      ll_backend__deep_profiling__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
    }
#line 1573 "deep_profiling.m"
    {
#line 1573 "deep_profiling.m"
      ll_backend__deep_profiling__LineNumber_22 = mercury__term__context_line_1_f_0(ll_backend__deep_profiling__Context_21);
    }
#line 1574 "deep_profiling.m"
    {
#line 1574 "deep_profiling.m"
      ll_backend__deep_profiling__FileName0_23 = mercury__term__context_file_1_f_0(ll_backend__deep_profiling__Context_21);
    }
#line 1575 "deep_profiling.m"
    {
#line 1575 "deep_profiling.m"
      ll_backend__deep_profiling__compress_filename_3_p_0(ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, ll_backend__deep_profiling__FileName0_23, &ll_backend__deep_profiling__FileName_24);
    }
#line 1576 "deep_profiling.m"
    {
#line 1576 "deep_profiling.m"
      ll_backend__deep_profiling__CallSite_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1576 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1576 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_25, 1) = ((MR_Box) (ll_backend__deep_profiling__FileName_24));
#line 1576 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_25, 2) = ((MR_Box) (ll_backend__deep_profiling__LineNumber_22));
#line 1576 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_25, 3) = ((MR_Box) (ll_backend__deep_profiling__GoalPath_12));
#line 1576 "deep_profiling.m"
    }
#line 1578 "deep_profiling.m"
    {
#line 1578 "deep_profiling.m"
      hlds__hlds_goal__make_impure_2_p_0(ll_backend__deep_profiling__GoalInfo0_9, &ll_backend__deep_profiling__GoalInfo1_26);
    }
#line 1579 "deep_profiling.m"
    {
#line 1579 "deep_profiling.m"
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__GoalInfo1_26, &ll_backend__deep_profiling__GoalInfo_27);
    }
#line 1580 "deep_profiling.m"
    {
#line 1580 "deep_profiling.m"
      ll_backend__deep_profiling__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_44_44, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_5));
#line 1580 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1580 "deep_profiling.m"
    }
#line 1580 "deep_profiling.m"
    {
#line 1580 "deep_profiling.m"
      ll_backend__deep_profiling__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_43_43, 0) = ((MR_Box) (ll_backend__deep_profiling__PrepareGoal_20));
#line 1580 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_43_43, 1) = ((MR_Box) (ll_backend__deep_profiling__V_44_44));
#line 1580 "deep_profiling.m"
    }
#line 1580 "deep_profiling.m"
    {
#line 1580 "deep_profiling.m"
      ll_backend__deep_profiling__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_42_42, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVarGoal_18));
#line 1580 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_42_42, 1) = ((MR_Box) (ll_backend__deep_profiling__V_43_43));
#line 1580 "deep_profiling.m"
    }
#line 1580 "deep_profiling.m"
    {
#line 1580 "deep_profiling.m"
      ll_backend__deep_profiling__GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1580 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_28, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1580 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_28, 2) = ((MR_Box) (ll_backend__deep_profiling__V_42_42));
#line 1580 "deep_profiling.m"
    }
#line 1581 "deep_profiling.m"
    {
#line 1581 "deep_profiling.m"
      MR_Word base;
#line 1581 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1581 "deep_profiling.m"
      *ll_backend__deep_profiling__Goal_6 = base;
#line 1581 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_28));
#line 1581 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_27));
#line 1581 "deep_profiling.m"
    }
#line 1582 "deep_profiling.m"
    ll_backend__deep_profiling__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 0)));
#line 1582 "deep_profiling.m"
    ll_backend__deep_profiling__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 1)));
#line 1582 "deep_profiling.m"
    ll_backend__deep_profiling__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 2)));
#line 1582 "deep_profiling.m"
    ll_backend__deep_profiling__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 3)));
#line 1582 "deep_profiling.m"
    ll_backend__deep_profiling__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 4)));
#line 1582 "deep_profiling.m"
    ll_backend__deep_profiling__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 5)));
#line 1582 "deep_profiling.m"
    ll_backend__deep_profiling__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 6)));
#line 1582 "deep_profiling.m"
    ll_backend__deep_profiling__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 7)));
#line 1582 "deep_profiling.m"
    ll_backend__deep_profiling__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_29, (MR_Integer) 8)));
#line 1583 "deep_profiling.m"
    ll_backend__deep_profiling__V_97_97 = ll_backend__deep_profiling__V_88_88;
#line 1583 "deep_profiling.m"
    {
#line 1583 "deep_profiling.m"
      ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1583 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 0) = ((MR_Box) (ll_backend__deep_profiling__V_83_83));
#line 1583 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 1) = ((MR_Box) (ll_backend__deep_profiling__V_84_84));
#line 1583 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 2) = ((MR_Box) (ll_backend__deep_profiling__V_85_85));
#line 1583 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 3) = ((MR_Box) (ll_backend__deep_profiling__V_86_86));
#line 1583 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 4) = ((MR_Box) (ll_backend__deep_profiling__SiteNumCounter_15));
#line 1583 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 5) = ((MR_Box) (ll_backend__deep_profiling__V_97_97));
#line 1583 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo_17));
#line 1583 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 7) = ((MR_Box) (ll_backend__deep_profiling__V_90_90));
#line 1583 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, 8) = ((MR_Box) (ll_backend__deep_profiling__V_91_91));
#line 1583 "deep_profiling.m"
    }
#line 1585 "deep_profiling.m"
    {
#line 1585 "deep_profiling.m"
      ll_backend__deep_profiling__V_49_49 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0, ll_backend__deep_profiling__V_97_97, ((MR_Box) (ll_backend__deep_profiling__CallSite_25)));
    }
#line 1584 "deep_profiling.m"
    ll_backend__deep_profiling__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 0)));
#line 1584 "deep_profiling.m"
    ll_backend__deep_profiling__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 1)));
#line 1584 "deep_profiling.m"
    ll_backend__deep_profiling__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 2)));
#line 1584 "deep_profiling.m"
    ll_backend__deep_profiling__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 3)));
#line 1584 "deep_profiling.m"
    ll_backend__deep_profiling__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 4)));
#line 1584 "deep_profiling.m"
    ll_backend__deep_profiling__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 5)));
#line 1584 "deep_profiling.m"
    ll_backend__deep_profiling__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 6)));
#line 1584 "deep_profiling.m"
    ll_backend__deep_profiling__V_116_116 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 7)));
#line 1584 "deep_profiling.m"
    ll_backend__deep_profiling__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_47_47, (MR_Integer) 8)));
#line 1584 "deep_profiling.m"
    {
#line 1584 "deep_profiling.m"
      MR_Word base;
#line 1584 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1584 "deep_profiling.m"
      *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_30 = base;
#line 1584 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__V_109_109));
#line 1584 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__V_110_110));
#line 1584 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__deep_profiling__V_111_111));
#line 1584 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__deep_profiling__V_112_112));
#line 1584 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__deep_profiling__V_113_113));
#line 1584 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__deep_profiling__V_49_49));
#line 1584 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__deep_profiling__V_115_115));
#line 1584 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__deep_profiling__V_116_116));
#line 1584 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__deep_profiling__V_117_117));
#line 1584 "deep_profiling.m"
    }
#line 1556 "deep_profiling.m"
  }
#line 1553 "deep_profiling.m"
}

#line 1431 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_p_0(
#line 1431 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Globals_7,
#line 1431 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__CodeModel_8,
#line 1431 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_9,
#line 1431 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_10,
#line 1431 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35,
#line 1431 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_36)
#line 1431 "deep_profiling.m"
{
#line 1435 "deep_profiling.m"
  {
#line 1435 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__SavedPtrVar_13;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__UseActivationCounts_14;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ExtraNonLocals_16;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__SaveStuff_17;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__RestoreStuff_18;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ReZeroStuff_19;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo0_21;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ExtGoalInfo0_22;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ExtGoalInfo_23;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__EmptyDelta_24;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__NoBindExtGoalInfo_25;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__FailGoalInfo0_26;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__FailGoalInfo_27;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__FailGoal_28;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__RestoreFailGoalInfo0_29;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__RestoreFailGoalInfo_30;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__RezeroFailGoalInfo0_31;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__RezeroFailGoalInfo_32;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo_33;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_39_39;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_40_40;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_62_62;
#line 1435 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_94_94;
#line 1437 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
#line 1437 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
#line 1437 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
#line 1437 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
#line 1437 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
#line 1437 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
#line 1437 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_163_163 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
#line 1437 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
#line 1476 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_213_213;
#line 1476 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_214_214;
#line 1476 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_215_215;
#line 1476 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_216_216;
#line 1476 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_217_217;
#line 1476 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_218_218;
#line 1476 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_220_220;
#line 1476 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_221_221;
#line 1476 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_219_219;
#line 1479 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_20_20;

#line 1439 "deep_profiling.m"
    {
#line 1439 "deep_profiling.m"
      ll_backend__deep_profiling__V_39_39 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 1439 "deep_profiling.m"
    {
#line 1439 "deep_profiling.m"
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "SavedPtr", ll_backend__deep_profiling__V_39_39, &ll_backend__deep_profiling__SavedPtrVar_13, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_37_37, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_40_40);
    }
#line 1441 "deep_profiling.m"
    {
#line 1441 "deep_profiling.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__deep_profiling__Globals_7, (MR_Integer) 197, &ll_backend__deep_profiling__UseActivationCounts_14);
    }
#line 1460 "deep_profiling.m"
#line 1460 "deep_profiling.m"
    switch (ll_backend__deep_profiling__UseActivationCounts_14) {
#line 1460 "deep_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1460 "deep_profiling.m"
      case (MR_Integer) 0:
#line 1461 "deep_profiling.m"
        {
#line 1461 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_42_42;
#line 1461 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_45_45;
#line 1461 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_49_49;
#line 1461 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_55_55;
#line 1465 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_189_189;
#line 1465 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_190_190;
#line 1465 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_191_191;
#line 1465 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_192_192;
#line 1465 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_193_193;
#line 1465 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_194_194;
#line 1465 "deep_profiling.m"
          MR_String ll_backend__deep_profiling__V_195_195;
#line 1465 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_196_196;
#line 1468 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_197_197;
#line 1468 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_198_198;
#line 1468 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_199_199;
#line 1468 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_200_200;
#line 1468 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_201_201;
#line 1468 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_202_202;
#line 1468 "deep_profiling.m"
          MR_String ll_backend__deep_profiling__V_203_203;
#line 1468 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_204_204;
#line 1471 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_205_205;
#line 1471 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_206_206;
#line 1471 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_207_207;
#line 1471 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_208_208;
#line 1471 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_209_209;
#line 1471 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_210_210;
#line 1471 "deep_profiling.m"
          MR_String ll_backend__deep_profiling__V_211_211;
#line 1471 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_212_212;

#line 1463 "deep_profiling.m"
          {
#line 1463 "deep_profiling.m"
            ll_backend__deep_profiling__ExtraNonLocals_16 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__SavedPtrVar_13);
          }
#line 1465 "deep_profiling.m"
          ll_backend__deep_profiling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
#line 1465 "deep_profiling.m"
          ll_backend__deep_profiling__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
#line 1465 "deep_profiling.m"
          ll_backend__deep_profiling__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
#line 1465 "deep_profiling.m"
          ll_backend__deep_profiling__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
#line 1465 "deep_profiling.m"
          ll_backend__deep_profiling__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
#line 1465 "deep_profiling.m"
          ll_backend__deep_profiling__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
#line 1465 "deep_profiling.m"
          ll_backend__deep_profiling__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
#line 1465 "deep_profiling.m"
          ll_backend__deep_profiling__V_195_195 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
#line 1465 "deep_profiling.m"
          ll_backend__deep_profiling__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
#line 1467 "deep_profiling.m"
          {
#line 1467 "deep_profiling.m"
            ll_backend__deep_profiling__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_45_45, 0) = ((MR_Box) (ll_backend__deep_profiling__SavedPtrVar_13));
#line 1467 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1467 "deep_profiling.m"
          }
#line 1465 "deep_profiling.m"
          {
#line 1465 "deep_profiling.m"
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__V_42_42, (MR_String) "save_and_zero_activation_info_sr", (MR_Integer) 1, ll_backend__deep_profiling__V_45_45, ll_backend__deep_profiling__V_45_45, &ll_backend__deep_profiling__SaveStuff_17);
          }
#line 1468 "deep_profiling.m"
          ll_backend__deep_profiling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
#line 1468 "deep_profiling.m"
          ll_backend__deep_profiling__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
#line 1468 "deep_profiling.m"
          ll_backend__deep_profiling__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
#line 1468 "deep_profiling.m"
          ll_backend__deep_profiling__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
#line 1468 "deep_profiling.m"
          ll_backend__deep_profiling__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
#line 1468 "deep_profiling.m"
          ll_backend__deep_profiling__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
#line 1468 "deep_profiling.m"
          ll_backend__deep_profiling__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
#line 1468 "deep_profiling.m"
          ll_backend__deep_profiling__V_203_203 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
#line 1468 "deep_profiling.m"
          ll_backend__deep_profiling__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
#line 1468 "deep_profiling.m"
          {
#line 1468 "deep_profiling.m"
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__V_49_49, (MR_String) "reset_activation_info_sr", (MR_Integer) 1, ll_backend__deep_profiling__V_45_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__RestoreStuff_18);
          }
#line 1471 "deep_profiling.m"
          ll_backend__deep_profiling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
#line 1471 "deep_profiling.m"
          ll_backend__deep_profiling__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
#line 1471 "deep_profiling.m"
          ll_backend__deep_profiling__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
#line 1471 "deep_profiling.m"
          ll_backend__deep_profiling__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
#line 1471 "deep_profiling.m"
          ll_backend__deep_profiling__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
#line 1471 "deep_profiling.m"
          ll_backend__deep_profiling__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
#line 1471 "deep_profiling.m"
          ll_backend__deep_profiling__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
#line 1471 "deep_profiling.m"
          ll_backend__deep_profiling__V_211_211 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
#line 1471 "deep_profiling.m"
          ll_backend__deep_profiling__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
#line 1471 "deep_profiling.m"
          {
#line 1471 "deep_profiling.m"
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__V_55_55, (MR_String) "rezero_activation_info_sr", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ReZeroStuff_19);
          }
#line 1461 "deep_profiling.m"
          ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_62_62 = ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_40_40;
#line 1461 "deep_profiling.m"
        }
#line 1460 "deep_profiling.m"
        break;
#line 1460 "deep_profiling.m"
      case (MR_Integer) 1:
#line 1444 "deep_profiling.m"
        {
#line 1444 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__SavedCountVar_15;
#line 1444 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_61_61;
#line 1444 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_63_63;
#line 1444 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_64_64;
#line 1444 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_66_66;
#line 1444 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_75_75;
#line 1444 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_82_82;
#line 1450 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_165_165;
#line 1450 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_166_166;
#line 1450 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_167_167;
#line 1450 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_168_168;
#line 1450 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_169_169;
#line 1450 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_170_170;
#line 1450 "deep_profiling.m"
          MR_String ll_backend__deep_profiling__V_171_171;
#line 1450 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_172_172;
#line 1454 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_173_173;
#line 1454 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_174_174;
#line 1454 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_175_175;
#line 1454 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_176_176;
#line 1454 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_177_177;
#line 1454 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_178_178;
#line 1454 "deep_profiling.m"
          MR_String ll_backend__deep_profiling__V_179_179;
#line 1454 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_180_180;
#line 1457 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_181_181;
#line 1457 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_182_182;
#line 1457 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_183_183;
#line 1457 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_184_184;
#line 1457 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_185_185;
#line 1457 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_186_186;
#line 1457 "deep_profiling.m"
          MR_String ll_backend__deep_profiling__V_187_187;
#line 1457 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_188_188;

#line 1446 "deep_profiling.m"
          {
#line 1446 "deep_profiling.m"
            ll_backend__deep_profiling__V_61_61 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 1446 "deep_profiling.m"
          {
#line 1446 "deep_profiling.m"
            ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "SavedCounter", ll_backend__deep_profiling__V_61_61, &ll_backend__deep_profiling__SavedCountVar_15, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_40_40, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_62_62);
          }
#line 1448 "deep_profiling.m"
          {
#line 1448 "deep_profiling.m"
            ll_backend__deep_profiling__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_64_64, 0) = ((MR_Box) (ll_backend__deep_profiling__SavedPtrVar_13));
#line 1448 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1448 "deep_profiling.m"
          }
#line 1448 "deep_profiling.m"
          {
#line 1448 "deep_profiling.m"
            ll_backend__deep_profiling__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_63_63, 0) = ((MR_Box) (ll_backend__deep_profiling__SavedCountVar_15));
#line 1448 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_63_63, 1) = ((MR_Box) (ll_backend__deep_profiling__V_64_64));
#line 1448 "deep_profiling.m"
          }
#line 1448 "deep_profiling.m"
          {
#line 1448 "deep_profiling.m"
            ll_backend__deep_profiling__ExtraNonLocals_16 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__V_63_63);
          }
#line 1450 "deep_profiling.m"
          ll_backend__deep_profiling__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
#line 1450 "deep_profiling.m"
          ll_backend__deep_profiling__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
#line 1450 "deep_profiling.m"
          ll_backend__deep_profiling__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
#line 1450 "deep_profiling.m"
          ll_backend__deep_profiling__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
#line 1450 "deep_profiling.m"
          ll_backend__deep_profiling__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
#line 1450 "deep_profiling.m"
          ll_backend__deep_profiling__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
#line 1450 "deep_profiling.m"
          ll_backend__deep_profiling__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
#line 1450 "deep_profiling.m"
          ll_backend__deep_profiling__V_171_171 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
#line 1450 "deep_profiling.m"
          ll_backend__deep_profiling__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
#line 1450 "deep_profiling.m"
          {
#line 1450 "deep_profiling.m"
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__V_66_66, (MR_String) "save_and_zero_activation_info_ac", (MR_Integer) 2, ll_backend__deep_profiling__V_63_63, ll_backend__deep_profiling__V_63_63, &ll_backend__deep_profiling__SaveStuff_17);
          }
#line 1454 "deep_profiling.m"
          ll_backend__deep_profiling__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
#line 1454 "deep_profiling.m"
          ll_backend__deep_profiling__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
#line 1454 "deep_profiling.m"
          ll_backend__deep_profiling__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
#line 1454 "deep_profiling.m"
          ll_backend__deep_profiling__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
#line 1454 "deep_profiling.m"
          ll_backend__deep_profiling__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
#line 1454 "deep_profiling.m"
          ll_backend__deep_profiling__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
#line 1454 "deep_profiling.m"
          ll_backend__deep_profiling__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
#line 1454 "deep_profiling.m"
          ll_backend__deep_profiling__V_179_179 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
#line 1454 "deep_profiling.m"
          ll_backend__deep_profiling__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
#line 1454 "deep_profiling.m"
          {
#line 1454 "deep_profiling.m"
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__V_75_75, (MR_String) "reset_activation_info_ac", (MR_Integer) 2, ll_backend__deep_profiling__V_63_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__RestoreStuff_18);
          }
#line 1457 "deep_profiling.m"
          ll_backend__deep_profiling__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
#line 1457 "deep_profiling.m"
          ll_backend__deep_profiling__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
#line 1457 "deep_profiling.m"
          ll_backend__deep_profiling__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
#line 1457 "deep_profiling.m"
          ll_backend__deep_profiling__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
#line 1457 "deep_profiling.m"
          ll_backend__deep_profiling__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
#line 1457 "deep_profiling.m"
          ll_backend__deep_profiling__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
#line 1457 "deep_profiling.m"
          ll_backend__deep_profiling__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
#line 1457 "deep_profiling.m"
          ll_backend__deep_profiling__V_187_187 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
#line 1457 "deep_profiling.m"
          ll_backend__deep_profiling__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
#line 1457 "deep_profiling.m"
          {
#line 1457 "deep_profiling.m"
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__V_82_82, (MR_String) "rezero_activation_info_ac", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ReZeroStuff_19);
          }
#line 1444 "deep_profiling.m"
        }
#line 1460 "deep_profiling.m"
        break;
#line 1460 "deep_profiling.m"
    }
#line 1476 "deep_profiling.m"
    ll_backend__deep_profiling__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 0)));
#line 1476 "deep_profiling.m"
    ll_backend__deep_profiling__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 1)));
#line 1476 "deep_profiling.m"
    ll_backend__deep_profiling__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 2)));
#line 1476 "deep_profiling.m"
    ll_backend__deep_profiling__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 3)));
#line 1476 "deep_profiling.m"
    ll_backend__deep_profiling__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 4)));
#line 1476 "deep_profiling.m"
    ll_backend__deep_profiling__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 5)));
#line 1476 "deep_profiling.m"
    ll_backend__deep_profiling__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 6)));
#line 1476 "deep_profiling.m"
    ll_backend__deep_profiling__V_220_220 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 7)));
#line 1476 "deep_profiling.m"
    ll_backend__deep_profiling__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_35, (MR_Integer) 8)));
#line 1476 "deep_profiling.m"
    {
#line 1476 "deep_profiling.m"
      MR_Word base;
#line 1476 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1476 "deep_profiling.m"
      *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_36 = base;
#line 1476 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__V_213_213));
#line 1476 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__V_214_214));
#line 1476 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__deep_profiling__V_215_215));
#line 1476 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__deep_profiling__V_216_216));
#line 1476 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__deep_profiling__V_217_217));
#line 1476 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__deep_profiling__V_218_218));
#line 1476 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_62_62));
#line 1476 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__deep_profiling__V_220_220));
#line 1476 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__deep_profiling__V_221_221));
#line 1476 "deep_profiling.m"
    }
#line 1479 "deep_profiling.m"
    ll_backend__deep_profiling__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_9, (MR_Integer) 0)));
#line 1479 "deep_profiling.m"
    ll_backend__deep_profiling__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_9, (MR_Integer) 1)));
#line 1480 "deep_profiling.m"
    {
#line 1480 "deep_profiling.m"
      ll_backend__deep_profiling__ExtGoalInfo0_22 = hlds__hlds_goal__goal_info_add_nonlocals_make_impure_2_f_0(ll_backend__deep_profiling__GoalInfo0_21, ll_backend__deep_profiling__ExtraNonLocals_16);
    }
#line 1482 "deep_profiling.m"
    {
#line 1482 "deep_profiling.m"
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__ExtGoalInfo0_22, &ll_backend__deep_profiling__ExtGoalInfo_23);
    }
#line 1485 "deep_profiling.m"
    {
#line 1485 "deep_profiling.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&ll_backend__deep_profiling__EmptyDelta_24);
    }
#line 1486 "deep_profiling.m"
    {
#line 1486 "deep_profiling.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(ll_backend__deep_profiling__EmptyDelta_24, ll_backend__deep_profiling__ExtGoalInfo_23, &ll_backend__deep_profiling__NoBindExtGoalInfo_25);
    }
#line 1488 "deep_profiling.m"
    {
#line 1488 "deep_profiling.m"
      ll_backend__deep_profiling__FailGoalInfo0_26 = hlds__make_goal__fail_goal_info_0_f_0();
    }
#line 1489 "deep_profiling.m"
    {
#line 1489 "deep_profiling.m"
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__FailGoalInfo0_26, &ll_backend__deep_profiling__FailGoalInfo_27);
    }
#line 1491 "deep_profiling.m"
    {
#line 1491 "deep_profiling.m"
      ll_backend__deep_profiling__FailGoal_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1491 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__FailGoal_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_2[11])));
#line 1491 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__FailGoal_28, 1) = ((MR_Box) (ll_backend__deep_profiling__FailGoalInfo_27));
#line 1491 "deep_profiling.m"
    }
#line 1493 "deep_profiling.m"
    {
#line 1493 "deep_profiling.m"
      ll_backend__deep_profiling__RestoreFailGoalInfo0_29 = hlds__hlds_goal__impure_unreachable_init_goal_info_2_f_0(ll_backend__deep_profiling__ExtraNonLocals_16, (MR_Integer) 7);
    }
#line 1495 "deep_profiling.m"
    {
#line 1495 "deep_profiling.m"
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__RestoreFailGoalInfo0_29, &ll_backend__deep_profiling__RestoreFailGoalInfo_30);
    }
#line 1498 "deep_profiling.m"
    {
#line 1498 "deep_profiling.m"
      ll_backend__deep_profiling__V_94_94 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 1498 "deep_profiling.m"
    {
#line 1498 "deep_profiling.m"
      ll_backend__deep_profiling__RezeroFailGoalInfo0_31 = hlds__hlds_goal__impure_unreachable_init_goal_info_2_f_0(ll_backend__deep_profiling__V_94_94, (MR_Integer) 7);
    }
#line 1500 "deep_profiling.m"
    {
#line 1500 "deep_profiling.m"
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__RezeroFailGoalInfo0_31, &ll_backend__deep_profiling__RezeroFailGoalInfo_32);
    }
#line 1503 "deep_profiling.m"
    {
#line 1503 "deep_profiling.m"
      hlds__hlds_goal__make_impure_2_p_0(ll_backend__deep_profiling__GoalInfo0_21, &ll_backend__deep_profiling__GoalInfo_33);
    }
#line 1508 "deep_profiling.m"
#line 1508 "deep_profiling.m"
    switch (ll_backend__deep_profiling__CodeModel_8) {
#line 1508 "deep_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1508 "deep_profiling.m"
      case (MR_Integer) 0:
#line 1505 "deep_profiling.m"
        {
#line 1505 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__GoalExpr_34;
#line 1505 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_151_151;
#line 1505 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_152_152;
#line 1505 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_153_153;

#line 1506 "deep_profiling.m"
          {
#line 1506 "deep_profiling.m"
            ll_backend__deep_profiling__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_153_153, 0) = ((MR_Box) (ll_backend__deep_profiling__RestoreStuff_18));
#line 1506 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1506 "deep_profiling.m"
          }
#line 1506 "deep_profiling.m"
          {
#line 1506 "deep_profiling.m"
            ll_backend__deep_profiling__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_152_152, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_9));
#line 1506 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_152_152, 1) = ((MR_Box) (ll_backend__deep_profiling__V_153_153));
#line 1506 "deep_profiling.m"
          }
#line 1506 "deep_profiling.m"
          {
#line 1506 "deep_profiling.m"
            ll_backend__deep_profiling__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_151_151, 0) = ((MR_Box) (ll_backend__deep_profiling__SaveStuff_17));
#line 1506 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_151_151, 1) = ((MR_Box) (ll_backend__deep_profiling__V_152_152));
#line 1506 "deep_profiling.m"
          }
#line 1506 "deep_profiling.m"
          {
#line 1506 "deep_profiling.m"
            ll_backend__deep_profiling__GoalExpr_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1506 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_34, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1506 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_34, 2) = ((MR_Box) (ll_backend__deep_profiling__V_151_151));
#line 1506 "deep_profiling.m"
          }
#line 1507 "deep_profiling.m"
          {
#line 1507 "deep_profiling.m"
            MR_Word base;
#line 1507 "deep_profiling.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1507 "deep_profiling.m"
            *ll_backend__deep_profiling__Goal_10 = base;
#line 1507 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_34));
#line 1507 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_33));
#line 1507 "deep_profiling.m"
          }
#line 1505 "deep_profiling.m"
        }
#line 1508 "deep_profiling.m"
        break;
#line 1508 "deep_profiling.m"
      case (MR_Integer) 2:
#line 1525 "deep_profiling.m"
        {
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_98_98;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_99_99;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_100_100;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_101_101;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_102_102;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_103_103;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_104_104;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_106_106;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_107_107;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_108_108;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_109_109;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_110_110;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_111_111;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_112_112;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_113_113;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_115_115;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_116_116;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_120_120;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_121_121;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_122_122;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_124_124;
#line 1525 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__GoalExpr_156;

#line 1538 "deep_profiling.m"
          {
#line 1538 "deep_profiling.m"
            ll_backend__deep_profiling__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_116_116, 0) = ((MR_Box) (ll_backend__deep_profiling__FailGoal_28));
#line 1538 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1538 "deep_profiling.m"
          }
#line 1538 "deep_profiling.m"
          {
#line 1538 "deep_profiling.m"
            ll_backend__deep_profiling__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_115_115, 0) = ((MR_Box) (ll_backend__deep_profiling__ReZeroStuff_19));
#line 1538 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_115_115, 1) = ((MR_Box) (ll_backend__deep_profiling__V_116_116));
#line 1538 "deep_profiling.m"
          }
#line 1537 "deep_profiling.m"
          {
#line 1537 "deep_profiling.m"
            ll_backend__deep_profiling__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1537 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_113_113, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1537 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_113_113, 2) = ((MR_Box) (ll_backend__deep_profiling__V_115_115));
#line 1537 "deep_profiling.m"
          }
#line 1536 "deep_profiling.m"
          {
#line 1536 "deep_profiling.m"
            ll_backend__deep_profiling__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_112_112, 0) = ((MR_Box) (ll_backend__deep_profiling__V_113_113));
#line 1536 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_112_112, 1) = ((MR_Box) (ll_backend__deep_profiling__RezeroFailGoalInfo_32));
#line 1536 "deep_profiling.m"
          }
#line 1540 "deep_profiling.m"
          {
#line 1540 "deep_profiling.m"
            ll_backend__deep_profiling__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_111_111, 0) = ((MR_Box) (ll_backend__deep_profiling__V_112_112));
#line 1540 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1540 "deep_profiling.m"
          }
#line 1535 "deep_profiling.m"
          {
#line 1535 "deep_profiling.m"
            ll_backend__deep_profiling__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_110_110, 0) = ((MR_Box) (ll_backend__deep_profiling__RestoreStuff_18));
#line 1535 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_110_110, 1) = ((MR_Box) (ll_backend__deep_profiling__V_111_111));
#line 1535 "deep_profiling.m"
          }
#line 1534 "deep_profiling.m"
          {
#line 1534 "deep_profiling.m"
            ll_backend__deep_profiling__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1534 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1534 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_109_109, 1) = ((MR_Box) (ll_backend__deep_profiling__V_110_110));
#line 1534 "deep_profiling.m"
          }
#line 1533 "deep_profiling.m"
          {
#line 1533 "deep_profiling.m"
            ll_backend__deep_profiling__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1533 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_108_108, 0) = ((MR_Box) (ll_backend__deep_profiling__V_109_109));
#line 1533 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_108_108, 1) = ((MR_Box) (ll_backend__deep_profiling__NoBindExtGoalInfo_25));
#line 1533 "deep_profiling.m"
          }
#line 1542 "deep_profiling.m"
          {
#line 1542 "deep_profiling.m"
            ll_backend__deep_profiling__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1542 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_107_107, 0) = ((MR_Box) (ll_backend__deep_profiling__V_108_108));
#line 1542 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1542 "deep_profiling.m"
          }
#line 1532 "deep_profiling.m"
          {
#line 1532 "deep_profiling.m"
            ll_backend__deep_profiling__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_106_106, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_9));
#line 1532 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_106_106, 1) = ((MR_Box) (ll_backend__deep_profiling__V_107_107));
#line 1532 "deep_profiling.m"
          }
#line 1531 "deep_profiling.m"
          {
#line 1531 "deep_profiling.m"
            ll_backend__deep_profiling__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1531 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_104_104, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1531 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_104_104, 2) = ((MR_Box) (ll_backend__deep_profiling__V_106_106));
#line 1531 "deep_profiling.m"
          }
#line 1530 "deep_profiling.m"
          {
#line 1530 "deep_profiling.m"
            ll_backend__deep_profiling__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1530 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_103_103, 0) = ((MR_Box) (ll_backend__deep_profiling__V_104_104));
#line 1530 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_103_103, 1) = ((MR_Box) (ll_backend__deep_profiling__ExtGoalInfo_23));
#line 1530 "deep_profiling.m"
          }
#line 1545 "deep_profiling.m"
          {
#line 1545 "deep_profiling.m"
            ll_backend__deep_profiling__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1545 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_124_124, 0) = ((MR_Box) (ll_backend__deep_profiling__RestoreStuff_18));
#line 1545 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_124_124, 1) = ((MR_Box) (ll_backend__deep_profiling__V_116_116));
#line 1545 "deep_profiling.m"
          }
#line 1545 "deep_profiling.m"
          {
#line 1545 "deep_profiling.m"
            ll_backend__deep_profiling__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1545 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1545 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_122_122, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1545 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_122_122, 2) = ((MR_Box) (ll_backend__deep_profiling__V_124_124));
#line 1545 "deep_profiling.m"
          }
#line 1544 "deep_profiling.m"
          {
#line 1544 "deep_profiling.m"
            ll_backend__deep_profiling__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1544 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_121_121, 0) = ((MR_Box) (ll_backend__deep_profiling__V_122_122));
#line 1544 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_121_121, 1) = ((MR_Box) (ll_backend__deep_profiling__RestoreFailGoalInfo_30));
#line 1544 "deep_profiling.m"
          }
#line 1547 "deep_profiling.m"
          {
#line 1547 "deep_profiling.m"
            ll_backend__deep_profiling__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1547 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_120_120, 0) = ((MR_Box) (ll_backend__deep_profiling__V_121_121));
#line 1547 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1547 "deep_profiling.m"
          }
#line 1543 "deep_profiling.m"
          {
#line 1543 "deep_profiling.m"
            ll_backend__deep_profiling__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1543 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_102_102, 0) = ((MR_Box) (ll_backend__deep_profiling__V_103_103));
#line 1543 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_102_102, 1) = ((MR_Box) (ll_backend__deep_profiling__V_120_120));
#line 1543 "deep_profiling.m"
          }
#line 1529 "deep_profiling.m"
          {
#line 1529 "deep_profiling.m"
            ll_backend__deep_profiling__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1529 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_101_101, 1) = ((MR_Box) (ll_backend__deep_profiling__V_102_102));
#line 1529 "deep_profiling.m"
          }
#line 1528 "deep_profiling.m"
          {
#line 1528 "deep_profiling.m"
            ll_backend__deep_profiling__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1528 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_100_100, 0) = ((MR_Box) (ll_backend__deep_profiling__V_101_101));
#line 1528 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_100_100, 1) = ((MR_Box) (ll_backend__deep_profiling__ExtGoalInfo_23));
#line 1528 "deep_profiling.m"
          }
#line 1549 "deep_profiling.m"
          {
#line 1549 "deep_profiling.m"
            ll_backend__deep_profiling__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_99_99, 0) = ((MR_Box) (ll_backend__deep_profiling__V_100_100));
#line 1549 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1549 "deep_profiling.m"
          }
#line 1527 "deep_profiling.m"
          {
#line 1527 "deep_profiling.m"
            ll_backend__deep_profiling__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_98_98, 0) = ((MR_Box) (ll_backend__deep_profiling__SaveStuff_17));
#line 1527 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_98_98, 1) = ((MR_Box) (ll_backend__deep_profiling__V_99_99));
#line 1527 "deep_profiling.m"
          }
#line 1526 "deep_profiling.m"
          {
#line 1526 "deep_profiling.m"
            ll_backend__deep_profiling__GoalExpr_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1526 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1526 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_156, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1526 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_156, 2) = ((MR_Box) (ll_backend__deep_profiling__V_98_98));
#line 1526 "deep_profiling.m"
          }
#line 1550 "deep_profiling.m"
          {
#line 1550 "deep_profiling.m"
            MR_Word base;
#line 1550 "deep_profiling.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "deep_profiling.m"
            *ll_backend__deep_profiling__Goal_10 = base;
#line 1550 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_156));
#line 1550 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_33));
#line 1550 "deep_profiling.m"
          }
#line 1525 "deep_profiling.m"
        }
#line 1508 "deep_profiling.m"
        break;
#line 1508 "deep_profiling.m"
      case (MR_Integer) 1:
#line 1509 "deep_profiling.m"
        {
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_130_130;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_131_131;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_132_132;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_133_133;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_134_134;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_135_135;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_136_136;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_138_138;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_139_139;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_141_141;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_142_142;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_143_143;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_145_145;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_146_146;
#line 1509 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__GoalExpr_155;

#line 1515 "deep_profiling.m"
          {
#line 1515 "deep_profiling.m"
            ll_backend__deep_profiling__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_139_139, 0) = ((MR_Box) (ll_backend__deep_profiling__RestoreStuff_18));
#line 1515 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1515 "deep_profiling.m"
          }
#line 1515 "deep_profiling.m"
          {
#line 1515 "deep_profiling.m"
            ll_backend__deep_profiling__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_138_138, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_9));
#line 1515 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_138_138, 1) = ((MR_Box) (ll_backend__deep_profiling__V_139_139));
#line 1515 "deep_profiling.m"
          }
#line 1515 "deep_profiling.m"
          {
#line 1515 "deep_profiling.m"
            ll_backend__deep_profiling__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1515 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_136_136, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1515 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_136_136, 2) = ((MR_Box) (ll_backend__deep_profiling__V_138_138));
#line 1515 "deep_profiling.m"
          }
#line 1514 "deep_profiling.m"
          {
#line 1514 "deep_profiling.m"
            ll_backend__deep_profiling__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1514 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_135_135, 0) = ((MR_Box) (ll_backend__deep_profiling__V_136_136));
#line 1514 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_135_135, 1) = ((MR_Box) (ll_backend__deep_profiling__ExtGoalInfo_23));
#line 1514 "deep_profiling.m"
          }
#line 1518 "deep_profiling.m"
          {
#line 1518 "deep_profiling.m"
            ll_backend__deep_profiling__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_146_146, 0) = ((MR_Box) (ll_backend__deep_profiling__FailGoal_28));
#line 1518 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1518 "deep_profiling.m"
          }
#line 1518 "deep_profiling.m"
          {
#line 1518 "deep_profiling.m"
            ll_backend__deep_profiling__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_145_145, 0) = ((MR_Box) (ll_backend__deep_profiling__RestoreStuff_18));
#line 1518 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_145_145, 1) = ((MR_Box) (ll_backend__deep_profiling__V_146_146));
#line 1518 "deep_profiling.m"
          }
#line 1518 "deep_profiling.m"
          {
#line 1518 "deep_profiling.m"
            ll_backend__deep_profiling__V_143_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_143_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1518 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_143_143, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1518 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_143_143, 2) = ((MR_Box) (ll_backend__deep_profiling__V_145_145));
#line 1518 "deep_profiling.m"
          }
#line 1517 "deep_profiling.m"
          {
#line 1517 "deep_profiling.m"
            ll_backend__deep_profiling__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1517 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_142_142, 0) = ((MR_Box) (ll_backend__deep_profiling__V_143_143));
#line 1517 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_142_142, 1) = ((MR_Box) (ll_backend__deep_profiling__RestoreFailGoalInfo_30));
#line 1517 "deep_profiling.m"
          }
#line 1520 "deep_profiling.m"
          {
#line 1520 "deep_profiling.m"
            ll_backend__deep_profiling__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1520 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_141_141, 0) = ((MR_Box) (ll_backend__deep_profiling__V_142_142));
#line 1520 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1520 "deep_profiling.m"
          }
#line 1516 "deep_profiling.m"
          {
#line 1516 "deep_profiling.m"
            ll_backend__deep_profiling__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_134_134, 0) = ((MR_Box) (ll_backend__deep_profiling__V_135_135));
#line 1516 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_134_134, 1) = ((MR_Box) (ll_backend__deep_profiling__V_141_141));
#line 1516 "deep_profiling.m"
          }
#line 1513 "deep_profiling.m"
          {
#line 1513 "deep_profiling.m"
            ll_backend__deep_profiling__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1513 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_133_133, 1) = ((MR_Box) (ll_backend__deep_profiling__V_134_134));
#line 1513 "deep_profiling.m"
          }
#line 1512 "deep_profiling.m"
          {
#line 1512 "deep_profiling.m"
            ll_backend__deep_profiling__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1512 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_132_132, 0) = ((MR_Box) (ll_backend__deep_profiling__V_133_133));
#line 1512 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_132_132, 1) = ((MR_Box) (ll_backend__deep_profiling__ExtGoalInfo_23));
#line 1512 "deep_profiling.m"
          }
#line 1522 "deep_profiling.m"
          {
#line 1522 "deep_profiling.m"
            ll_backend__deep_profiling__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1522 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_131_131, 0) = ((MR_Box) (ll_backend__deep_profiling__V_132_132));
#line 1522 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1522 "deep_profiling.m"
          }
#line 1511 "deep_profiling.m"
          {
#line 1511 "deep_profiling.m"
            ll_backend__deep_profiling__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_130_130, 0) = ((MR_Box) (ll_backend__deep_profiling__SaveStuff_17));
#line 1511 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_130_130, 1) = ((MR_Box) (ll_backend__deep_profiling__V_131_131));
#line 1511 "deep_profiling.m"
          }
#line 1510 "deep_profiling.m"
          {
#line 1510 "deep_profiling.m"
            ll_backend__deep_profiling__GoalExpr_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1510 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1510 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_155, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1510 "deep_profiling.m"
            MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_155, 2) = ((MR_Box) (ll_backend__deep_profiling__V_130_130));
#line 1510 "deep_profiling.m"
          }
#line 1523 "deep_profiling.m"
          {
#line 1523 "deep_profiling.m"
            MR_Word base;
#line 1523 "deep_profiling.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1523 "deep_profiling.m"
            *ll_backend__deep_profiling__Goal_10 = base;
#line 1523 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_155));
#line 1523 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_33));
#line 1523 "deep_profiling.m"
          }
#line 1509 "deep_profiling.m"
        }
#line 1508 "deep_profiling.m"
        break;
#line 1508 "deep_profiling.m"
    }
#line 1435 "deep_profiling.m"
  }
#line 1431 "deep_profiling.m"
}

#line 1234 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(
#line 1234 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_5,
#line 1234 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_6,
#line 1234 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96,
#line 1234 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97)
#line 1234 "deep_profiling.m"
{
#line 1237 "deep_profiling.m"
  {
#line 1237 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_5, (MR_Integer) 0)));
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_5, (MR_Integer) 1)));
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalId_10;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ContainingGoalMap_11;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalPath_12;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ModuleInfo_13;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalFeatures_14;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo1_15;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo2_16;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__MdprofInstGoalInfo_17;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Goal1_18;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__SiteNumCounter0_19;
#line 1237 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__SiteNum_20;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__SiteNumCounter_21;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarInfo0_22;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__SiteNumVar_23;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarInfo1_24;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__SiteNumVarGoal_25;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Context_26;
#line 1237 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__FileName0_27;
#line 1237 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__LineNumber_28;
#line 1237 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__FileName_29;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CallKind_30;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PrepareGoal_32;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CallSite_44;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Goal2_45;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalExpr_84;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_101_101;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_102_102;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_154_154;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_155_155;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_240_240;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_241_241;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_242_242;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_243_243;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_245_245;
#line 1237 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_247_247;
#line 1237 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_248_248;
#line 1240 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_208_208;
#line 1240 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_209_209;
#line 1240 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_210_210;
#line 1240 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_211_211;
#line 1240 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_212_212;
#line 1240 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_213_213;
#line 1240 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_214_214;
#line 1240 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_215_215;
#line 1243 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_216_216;
#line 1243 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_217_217;
#line 1243 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_218_218;
#line 1243 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_219_219;
#line 1243 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_220_220;
#line 1243 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_221_221;
#line 1243 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_222_222;
#line 1243 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_223_223;
#line 1260 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_224_224;
#line 1260 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_225_225;
#line 1260 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_226_226;
#line 1260 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_227_227;
#line 1260 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_228_228;
#line 1260 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_229_229;
#line 1260 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_230_230;
#line 1260 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_231_231;
#line 1262 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_232_232;
#line 1262 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_233_233;
#line 1262 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_234_234;
#line 1262 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_235_235;
#line 1262 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_236_236;
#line 1262 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_237_237;
#line 1262 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_238_238;
#line 1262 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_239_239;
#line 1265 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_244_244;
#line 1265 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_246_246;
#line 1359 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_301_301;
#line 1359 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_302_302;
#line 1359 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_303_303;
#line 1359 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_304_304;
#line 1359 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_305_305;
#line 1359 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_306_306;
#line 1359 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_307_307;
#line 1359 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_308_308;
#line 1358 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_309_309;
#line 1358 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_310_310;
#line 1358 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_311_311;
#line 1358 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_312_312;
#line 1358 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_313_313;
#line 1358 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_315_315;
#line 1358 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_316_316;
#line 1358 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_317_317;
#line 1358 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_314_314;
#line 1426 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_321_321;
#line 1426 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_326_326;
#line 1361 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__RecInfo_70;
#line 1361 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_157_157;
#line 1361 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_158_158;
#line 1362 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_318_318;
#line 1362 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_319_319;
#line 1362 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_320_320;
#line 1362 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_322_322;
#line 1362 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_323_323;
#line 1362 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_324_324;
#line 1362 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_325_325;
#line 1363 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_71_71;

#line 1239 "deep_profiling.m"
    {
#line 1239 "deep_profiling.m"
      ll_backend__deep_profiling__GoalId_10 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
    }
#line 1240 "deep_profiling.m"
    ll_backend__deep_profiling__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 0)));
#line 1240 "deep_profiling.m"
    ll_backend__deep_profiling__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 1)));
#line 1240 "deep_profiling.m"
    ll_backend__deep_profiling__ContainingGoalMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 2)));
#line 1240 "deep_profiling.m"
    ll_backend__deep_profiling__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 3)));
#line 1240 "deep_profiling.m"
    ll_backend__deep_profiling__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 4)));
#line 1240 "deep_profiling.m"
    ll_backend__deep_profiling__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 5)));
#line 1240 "deep_profiling.m"
    ll_backend__deep_profiling__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 6)));
#line 1240 "deep_profiling.m"
    ll_backend__deep_profiling__V_214_214 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 7)));
#line 1240 "deep_profiling.m"
    ll_backend__deep_profiling__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 8)));
#line 1241 "deep_profiling.m"
    {
#line 1241 "deep_profiling.m"
      ll_backend__deep_profiling__GoalPath_12 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__deep_profiling__ContainingGoalMap_11, ll_backend__deep_profiling__GoalId_10);
    }
#line 1243 "deep_profiling.m"
    ll_backend__deep_profiling__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 0)));
#line 1243 "deep_profiling.m"
    ll_backend__deep_profiling__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 1)));
#line 1243 "deep_profiling.m"
    ll_backend__deep_profiling__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 2)));
#line 1243 "deep_profiling.m"
    ll_backend__deep_profiling__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 3)));
#line 1243 "deep_profiling.m"
    ll_backend__deep_profiling__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 4)));
#line 1243 "deep_profiling.m"
    ll_backend__deep_profiling__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 5)));
#line 1243 "deep_profiling.m"
    ll_backend__deep_profiling__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 6)));
#line 1243 "deep_profiling.m"
    ll_backend__deep_profiling__V_222_222 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 7)));
#line 1243 "deep_profiling.m"
    ll_backend__deep_profiling__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 8)));
#line 1244 "deep_profiling.m"
    {
#line 1244 "deep_profiling.m"
      ll_backend__deep_profiling__GoalFeatures_14 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
    }
#line 1245 "deep_profiling.m"
    {
#line 1245 "deep_profiling.m"
      hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 9, ll_backend__deep_profiling__GoalInfo0_9, &ll_backend__deep_profiling__GoalInfo1_15);
    }
#line 1246 "deep_profiling.m"
    {
#line 1246 "deep_profiling.m"
      hlds__hlds_goal__make_impure_2_p_0(ll_backend__deep_profiling__GoalInfo1_15, &ll_backend__deep_profiling__GoalInfo2_16);
    }
#line 1247 "deep_profiling.m"
    {
#line 1247 "deep_profiling.m"
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__GoalInfo2_16, &ll_backend__deep_profiling__MdprofInstGoalInfo_17);
    }
#line 1258 "deep_profiling.m"
    {
#line 1258 "deep_profiling.m"
      ll_backend__deep_profiling__Goal1_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1258 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal1_18, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr0_8));
#line 1258 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal1_18, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo2_16));
#line 1258 "deep_profiling.m"
    }
#line 1260 "deep_profiling.m"
    ll_backend__deep_profiling__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 0)));
#line 1260 "deep_profiling.m"
    ll_backend__deep_profiling__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 1)));
#line 1260 "deep_profiling.m"
    ll_backend__deep_profiling__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 2)));
#line 1260 "deep_profiling.m"
    ll_backend__deep_profiling__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 3)));
#line 1260 "deep_profiling.m"
    ll_backend__deep_profiling__SiteNumCounter0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 4)));
#line 1260 "deep_profiling.m"
    ll_backend__deep_profiling__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 5)));
#line 1260 "deep_profiling.m"
    ll_backend__deep_profiling__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 6)));
#line 1260 "deep_profiling.m"
    ll_backend__deep_profiling__V_230_230 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 7)));
#line 1260 "deep_profiling.m"
    ll_backend__deep_profiling__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 8)));
#line 1261 "deep_profiling.m"
    {
#line 1261 "deep_profiling.m"
      mercury__counter__allocate_3_p_0(&ll_backend__deep_profiling__SiteNum_20, ll_backend__deep_profiling__SiteNumCounter0_19, &ll_backend__deep_profiling__SiteNumCounter_21);
    }
#line 1262 "deep_profiling.m"
    ll_backend__deep_profiling__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 0)));
#line 1262 "deep_profiling.m"
    ll_backend__deep_profiling__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 1)));
#line 1262 "deep_profiling.m"
    ll_backend__deep_profiling__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 2)));
#line 1262 "deep_profiling.m"
    ll_backend__deep_profiling__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 3)));
#line 1262 "deep_profiling.m"
    ll_backend__deep_profiling__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 4)));
#line 1262 "deep_profiling.m"
    ll_backend__deep_profiling__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 5)));
#line 1262 "deep_profiling.m"
    ll_backend__deep_profiling__VarInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 6)));
#line 1262 "deep_profiling.m"
    ll_backend__deep_profiling__V_238_238 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 7)));
#line 1262 "deep_profiling.m"
    ll_backend__deep_profiling__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 8)));
#line 1263 "deep_profiling.m"
    {
#line 1263 "deep_profiling.m"
      ll_backend__deep_profiling__V_101_101 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1263 "deep_profiling.m"
    {
#line 1263 "deep_profiling.m"
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "SiteNum", ll_backend__deep_profiling__V_101_101, &ll_backend__deep_profiling__SiteNumVar_23, ll_backend__deep_profiling__VarInfo0_22, &ll_backend__deep_profiling__VarInfo1_24);
    }
#line 1264 "deep_profiling.m"
    {
#line 1264 "deep_profiling.m"
      ll_backend__deep_profiling__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1264 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_102_102, 1) = ((MR_Box) (ll_backend__deep_profiling__SiteNum_20));
#line 1264 "deep_profiling.m"
    }
#line 1264 "deep_profiling.m"
    {
#line 1264 "deep_profiling.m"
      ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__deep_profiling__V_102_102, ll_backend__deep_profiling__SiteNumVar_23, &ll_backend__deep_profiling__SiteNumVarGoal_25);
    }
#line 1265 "deep_profiling.m"
    ll_backend__deep_profiling__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 0)));
#line 1265 "deep_profiling.m"
    ll_backend__deep_profiling__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 1)));
#line 1265 "deep_profiling.m"
    ll_backend__deep_profiling__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 2)));
#line 1265 "deep_profiling.m"
    ll_backend__deep_profiling__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 3)));
#line 1265 "deep_profiling.m"
    ll_backend__deep_profiling__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 4)));
#line 1265 "deep_profiling.m"
    ll_backend__deep_profiling__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 5)));
#line 1265 "deep_profiling.m"
    ll_backend__deep_profiling__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 6)));
#line 1265 "deep_profiling.m"
    ll_backend__deep_profiling__V_247_247 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 7)));
#line 1265 "deep_profiling.m"
    ll_backend__deep_profiling__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_96, (MR_Integer) 8)));
#line 1266 "deep_profiling.m"
    {
#line 1266 "deep_profiling.m"
      ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1266 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 0) = ((MR_Box) (ll_backend__deep_profiling__V_240_240));
#line 1266 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 1) = ((MR_Box) (ll_backend__deep_profiling__V_241_241));
#line 1266 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 2) = ((MR_Box) (ll_backend__deep_profiling__V_242_242));
#line 1266 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 3) = ((MR_Box) (ll_backend__deep_profiling__V_243_243));
#line 1266 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 4) = ((MR_Box) (ll_backend__deep_profiling__SiteNumCounter_21));
#line 1266 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 5) = ((MR_Box) (ll_backend__deep_profiling__V_245_245));
#line 1266 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo1_24));
#line 1266 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 7) = ((MR_Box) (ll_backend__deep_profiling__V_247_247));
#line 1266 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, 8) = ((MR_Box) (ll_backend__deep_profiling__V_248_248));
#line 1266 "deep_profiling.m"
    }
#line 1268 "deep_profiling.m"
    {
#line 1268 "deep_profiling.m"
      ll_backend__deep_profiling__Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
    }
#line 1269 "deep_profiling.m"
    {
#line 1269 "deep_profiling.m"
      ll_backend__deep_profiling__FileName0_27 = mercury__term__context_file_1_f_0(ll_backend__deep_profiling__Context_26);
    }
#line 1270 "deep_profiling.m"
    {
#line 1270 "deep_profiling.m"
      ll_backend__deep_profiling__LineNumber_28 = mercury__term__context_line_1_f_0(ll_backend__deep_profiling__Context_26);
    }
#line 1271 "deep_profiling.m"
    {
#line 1271 "deep_profiling.m"
      ll_backend__deep_profiling__compress_filename_3_p_0(ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, ll_backend__deep_profiling__FileName0_27, &ll_backend__deep_profiling__FileName_29);
    }
#line 1272 "deep_profiling.m"
    {
#line 1272 "deep_profiling.m"
      ll_backend__deep_profiling__CallKind_30 = ll_backend__deep_profiling__classify_call_2_f_0(ll_backend__deep_profiling__ModuleInfo_13, ll_backend__deep_profiling__GoalExpr0_8);
    }
#line 1308 "deep_profiling.m"
#line 1308 "deep_profiling.m"
    switch (MR_tag((MR_Word) ll_backend__deep_profiling__CallKind_30)) {
#line 1308 "deep_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1308 "deep_profiling.m"
      case (MR_Integer) 0:
#line 1274 "deep_profiling.m"
        {
#line 1274 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__PredProcId_31 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__CallKind_30), (MR_Integer) 0);
#line 1274 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__PredId_33;
#line 1274 "deep_profiling.m"
          MR_Integer ll_backend__deep_profiling__ProcId_34;
#line 1274 "deep_profiling.m"
          MR_String ll_backend__deep_profiling__TypeSubst_35;
#line 1274 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__MaybeRecInfo_36;
#line 1274 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__RttiProcLabel_41;
#line 1284 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_258_258;
#line 1284 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_259_259;
#line 1284 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_260_260;
#line 1284 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_261_261;
#line 1284 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_262_262;
#line 1284 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_263_263;
#line 1284 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_264_264;
#line 1284 "deep_profiling.m"
          MR_String ll_backend__deep_profiling__V_265_265;
#line 1293 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__OuterPredProcId_38;
#line 1286 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__RecInfo1_37;
#line 1286 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_151_151;
#line 1286 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_344_344;
#line 1287 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_266_266;
#line 1288 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_267_267;
#line 1288 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_268_268;
#line 1288 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_269_269;
#line 1288 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_270_270;
#line 1288 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_271_271;
#line 1288 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_272_272;
#line 1288 "deep_profiling.m"
          MR_String ll_backend__deep_profiling__V_273_273;
#line 1288 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_274_274;

#line 1275 "deep_profiling.m"
          {
#line 1275 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 9)), ll_backend__deep_profiling__GoalFeatures_14);
          }
#line 1278 "deep_profiling.m"
          if (ll_backend__deep_profiling__succeeded)
#line 1276 "deep_profiling.m"
            {
#line 1276 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_143_143;

#line 1277 "deep_profiling.m"
              {
#line 1277 "deep_profiling.m"
                ll_backend__deep_profiling__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1277 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_143_143, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVar_23));
#line 1277 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1277 "deep_profiling.m"
              }
#line 1276 "deep_profiling.m"
              {
#line 1276 "deep_profiling.m"
                ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_13, (MR_String) "prepare_for_tail_call", (MR_Integer) 1, ll_backend__deep_profiling__V_143_143, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__PrepareGoal_32);
              }
#line 1276 "deep_profiling.m"
            }
#line 1278 "deep_profiling.m"
          else
#line 1279 "deep_profiling.m"
            {
#line 1279 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_148_148;

#line 1280 "deep_profiling.m"
              {
#line 1280 "deep_profiling.m"
                ll_backend__deep_profiling__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_148_148, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVar_23));
#line 1280 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1280 "deep_profiling.m"
              }
#line 1279 "deep_profiling.m"
              {
#line 1279 "deep_profiling.m"
                ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_13, (MR_String) "prepare_for_normal_call", (MR_Integer) 1, ll_backend__deep_profiling__V_148_148, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__PrepareGoal_32);
              }
#line 1279 "deep_profiling.m"
            }
#line 1282 "deep_profiling.m"
          ll_backend__deep_profiling__PredId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_31, (MR_Integer) 0)));
#line 1282 "deep_profiling.m"
          ll_backend__deep_profiling__ProcId_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_31, (MR_Integer) 1)));
#line 1283 "deep_profiling.m"
          {
#line 1283 "deep_profiling.m"
            ll_backend__deep_profiling__TypeSubst_35 = ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_109_112_117_116_101_95_116_121_112_101_95_115_117_98_115_116_95_95_91_49_44_32_50_93_95_48_2_f_0();
          }
#line 1284 "deep_profiling.m"
          ll_backend__deep_profiling__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 0)));
#line 1284 "deep_profiling.m"
          ll_backend__deep_profiling__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 1)));
#line 1284 "deep_profiling.m"
          ll_backend__deep_profiling__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 2)));
#line 1284 "deep_profiling.m"
          ll_backend__deep_profiling__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 3)));
#line 1284 "deep_profiling.m"
          ll_backend__deep_profiling__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 4)));
#line 1284 "deep_profiling.m"
          ll_backend__deep_profiling__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 5)));
#line 1284 "deep_profiling.m"
          ll_backend__deep_profiling__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 6)));
#line 1284 "deep_profiling.m"
          ll_backend__deep_profiling__V_265_265 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 7)));
#line 1284 "deep_profiling.m"
          ll_backend__deep_profiling__MaybeRecInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 8)));
#line 1286 "deep_profiling.m"
          ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__MaybeRecInfo_36)) == (MR_mktag((MR_Integer) 1)));
#line 1286 "deep_profiling.m"
          if (ll_backend__deep_profiling__succeeded)
#line 1286 "deep_profiling.m"
            {
#line 1286 "deep_profiling.m"
              ll_backend__deep_profiling__RecInfo1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeRecInfo_36, (MR_Integer) 0)));
#line 1287 "deep_profiling.m"
              ll_backend__deep_profiling__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo1_37, (MR_Integer) 0)));
#line 1287 "deep_profiling.m"
              ll_backend__deep_profiling__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo1_37, (MR_Integer) 1)));
#line 1287 "deep_profiling.m"
              ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__V_151_151)) == (MR_mktag((MR_Integer) 0)));
#line 1287 "deep_profiling.m"
              if (ll_backend__deep_profiling__succeeded)
#line 1287 "deep_profiling.m"
                {
#line 1287 "deep_profiling.m"
                  ll_backend__deep_profiling__OuterPredProcId_38 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__V_151_151), (MR_Integer) 0);
#line 1288 "deep_profiling.m"
                  ll_backend__deep_profiling__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 0)));
#line 1288 "deep_profiling.m"
                  ll_backend__deep_profiling__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 1)));
#line 1288 "deep_profiling.m"
                  ll_backend__deep_profiling__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 2)));
#line 1288 "deep_profiling.m"
                  ll_backend__deep_profiling__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 3)));
#line 1288 "deep_profiling.m"
                  ll_backend__deep_profiling__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 4)));
#line 1288 "deep_profiling.m"
                  ll_backend__deep_profiling__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 5)));
#line 1288 "deep_profiling.m"
                  ll_backend__deep_profiling__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 6)));
#line 1288 "deep_profiling.m"
                  ll_backend__deep_profiling__V_273_273 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 7)));
#line 1288 "deep_profiling.m"
                  ll_backend__deep_profiling__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 8)));
#line 1288 "deep_profiling.m"
                  {
#line 1288 "deep_profiling.m"
                    ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__deep_profiling__PredProcId_31, ll_backend__deep_profiling__V_344_344);
                  }
#line 1287 "deep_profiling.m"
                }
#line 1286 "deep_profiling.m"
            }
#line 1293 "deep_profiling.m"
          if (ll_backend__deep_profiling__succeeded)
#line 1290 "deep_profiling.m"
            {
#line 1290 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__OuterPredId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OuterPredProcId_38, (MR_Integer) 0)));
#line 1290 "deep_profiling.m"
              MR_Integer ll_backend__deep_profiling__OuterProcId_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OuterPredProcId_38, (MR_Integer) 1)));

#line 1291 "deep_profiling.m"
              {
#line 1291 "deep_profiling.m"
                ll_backend__deep_profiling__RttiProcLabel_41 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__deep_profiling__ModuleInfo_13, ll_backend__deep_profiling__OuterPredId_39, ll_backend__deep_profiling__OuterProcId_40);
              }
#line 1290 "deep_profiling.m"
            }
#line 1293 "deep_profiling.m"
          else
#line 1302 "deep_profiling.m"
            {
#line 1294 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__RecInfo2_42;
#line 1294 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__InnerPredProcId_43;
#line 1294 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_152_152;
#line 1295 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_275_275;

#line 1294 "deep_profiling.m"
              ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__MaybeRecInfo_36)) == (MR_mktag((MR_Integer) 1)));
#line 1294 "deep_profiling.m"
              if (ll_backend__deep_profiling__succeeded)
#line 1294 "deep_profiling.m"
                {
#line 1294 "deep_profiling.m"
                  ll_backend__deep_profiling__RecInfo2_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeRecInfo_36, (MR_Integer) 0)));
#line 1295 "deep_profiling.m"
                  ll_backend__deep_profiling__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo2_42, (MR_Integer) 0)));
#line 1295 "deep_profiling.m"
                  ll_backend__deep_profiling__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo2_42, (MR_Integer) 1)));
#line 1295 "deep_profiling.m"
                  ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__V_152_152)) == (MR_mktag((MR_Integer) 1)));
#line 1295 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 1295 "deep_profiling.m"
                    {
#line 1295 "deep_profiling.m"
                      ll_backend__deep_profiling__InnerPredProcId_43 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__V_152_152), (MR_Integer) 1);
#line 1296 "deep_profiling.m"
                      {
#line 1296 "deep_profiling.m"
                        ll_backend__deep_profiling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__deep_profiling__PredProcId_31, ll_backend__deep_profiling__InnerPredProcId_43);
                      }
#line 1295 "deep_profiling.m"
                    }
#line 1294 "deep_profiling.m"
                }
#line 1302 "deep_profiling.m"
              if (ll_backend__deep_profiling__succeeded)
#line 1298 "deep_profiling.m"
                {
#line 1298 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__OuterPredProcId_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 1)));
#line 1298 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__OuterPredId_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OuterPredProcId_201, (MR_Integer) 0)));
#line 1298 "deep_profiling.m"
                  MR_Integer ll_backend__deep_profiling__OuterProcId_203 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OuterPredProcId_201, (MR_Integer) 1)));
#line 1298 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 0)));
#line 1298 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 2)));
#line 1298 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 3)));
#line 1298 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 4)));
#line 1298 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 5)));
#line 1298 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 6)));
#line 1298 "deep_profiling.m"
                  MR_String ll_backend__deep_profiling__V_282_282 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 7)));
#line 1298 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 8)));

#line 1300 "deep_profiling.m"
                  {
#line 1300 "deep_profiling.m"
                    ll_backend__deep_profiling__RttiProcLabel_41 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__deep_profiling__ModuleInfo_13, ll_backend__deep_profiling__OuterPredId_202, ll_backend__deep_profiling__OuterProcId_203);
                  }
#line 1298 "deep_profiling.m"
                }
#line 1302 "deep_profiling.m"
              else
#line 1303 "deep_profiling.m"
                {
#line 1303 "deep_profiling.m"
                  ll_backend__deep_profiling__RttiProcLabel_41 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__deep_profiling__ModuleInfo_13, ll_backend__deep_profiling__PredId_33, ll_backend__deep_profiling__ProcId_34);
                }
#line 1302 "deep_profiling.m"
            }
#line 1305 "deep_profiling.m"
          {
#line 1305 "deep_profiling.m"
            ll_backend__deep_profiling__CallSite_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CallSite_44, 0) = ((MR_Box) (ll_backend__deep_profiling__RttiProcLabel_41));
#line 1305 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CallSite_44, 1) = ((MR_Box) (ll_backend__deep_profiling__TypeSubst_35));
#line 1305 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CallSite_44, 2) = ((MR_Box) (ll_backend__deep_profiling__FileName_29));
#line 1305 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CallSite_44, 3) = ((MR_Box) (ll_backend__deep_profiling__LineNumber_28));
#line 1305 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CallSite_44, 4) = ((MR_Box) (ll_backend__deep_profiling__GoalPath_12));
#line 1305 "deep_profiling.m"
          }
#line 1307 "deep_profiling.m"
          ll_backend__deep_profiling__Goal2_45 = ll_backend__deep_profiling__Goal1_18;
#line 1274 "deep_profiling.m"
          ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104;
#line 1274 "deep_profiling.m"
        }
#line 1308 "deep_profiling.m"
        break;
#line 1308 "deep_profiling.m"
      case (MR_Integer) 1:
#line 1309 "deep_profiling.m"
        {
#line 1309 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__TypeInfoVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CallKind_30, (MR_Integer) 1)));
#line 1309 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_136_136;
#line 1309 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_138_138;
#line 1309 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling___PredProcId_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CallKind_30, (MR_Integer) 0)));

#line 1311 "deep_profiling.m"
          {
#line 1311 "deep_profiling.m"
            ll_backend__deep_profiling__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_138_138, 0) = ((MR_Box) (ll_backend__deep_profiling__TypeInfoVar_47));
#line 1311 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1311 "deep_profiling.m"
          }
#line 1311 "deep_profiling.m"
          {
#line 1311 "deep_profiling.m"
            ll_backend__deep_profiling__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_136_136, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVar_23));
#line 1311 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_136_136, 1) = ((MR_Box) (ll_backend__deep_profiling__V_138_138));
#line 1311 "deep_profiling.m"
          }
#line 1310 "deep_profiling.m"
          {
#line 1310 "deep_profiling.m"
            ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_13, (MR_String) "prepare_for_special_call", (MR_Integer) 2, ll_backend__deep_profiling__V_136_136, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__PrepareGoal_32);
          }
#line 1312 "deep_profiling.m"
          {
#line 1312 "deep_profiling.m"
            ll_backend__deep_profiling__CallSite_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CallSite_44, 0) = ((MR_Box) (ll_backend__deep_profiling__FileName_29));
#line 1312 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CallSite_44, 1) = ((MR_Box) (ll_backend__deep_profiling__LineNumber_28));
#line 1312 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CallSite_44, 2) = ((MR_Box) (ll_backend__deep_profiling__GoalPath_12));
#line 1312 "deep_profiling.m"
          }
#line 1313 "deep_profiling.m"
          ll_backend__deep_profiling__Goal2_45 = ll_backend__deep_profiling__Goal1_18;
#line 1309 "deep_profiling.m"
          ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104;
#line 1309 "deep_profiling.m"
        }
#line 1308 "deep_profiling.m"
        break;
#line 1308 "deep_profiling.m"
      case (MR_Integer) 2:
#line 1315 "deep_profiling.m"
        {
#line 1315 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__Generic_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__CallKind_30, (MR_Integer) 0)));
#line 1315 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__GoalCodeModel_67;
#line 1315 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__Globals_68;
#line 1315 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__UseZeroing_69;
#line 1315 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113;

#line 1321 "deep_profiling.m"
#line 1321 "deep_profiling.m"
          switch (MR_tag((MR_Word) ll_backend__deep_profiling__Generic_48)) {
#line 1321 "deep_profiling.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1321 "deep_profiling.m"
            case (MR_Integer) 0:
#line 1317 "deep_profiling.m"
              {
#line 1317 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__ClosureVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Generic_48, (MR_Integer) 0)));
#line 1317 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_128_128;
#line 1317 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_130_130;
#line 1317 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Generic_48, (MR_Integer) 1)));
#line 1317 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Generic_48, (MR_Integer) 2)));
#line 1317 "deep_profiling.m"
                MR_Integer ll_backend__deep_profiling__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Generic_48, (MR_Integer) 3)));

#line 1319 "deep_profiling.m"
                {
#line 1319 "deep_profiling.m"
                  ll_backend__deep_profiling__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1319 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_130_130, 0) = ((MR_Box) (ll_backend__deep_profiling__ClosureVar_49));
#line 1319 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1319 "deep_profiling.m"
                }
#line 1319 "deep_profiling.m"
                {
#line 1319 "deep_profiling.m"
                  ll_backend__deep_profiling__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1319 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_128_128, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVar_23));
#line 1319 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_128_128, 1) = ((MR_Box) (ll_backend__deep_profiling__V_130_130));
#line 1319 "deep_profiling.m"
                }
#line 1318 "deep_profiling.m"
                {
#line 1318 "deep_profiling.m"
                  ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_13, (MR_String) "prepare_for_ho_call", (MR_Integer) 2, ll_backend__deep_profiling__V_128_128, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__PrepareGoal_32);
                }
#line 1320 "deep_profiling.m"
                {
#line 1320 "deep_profiling.m"
                  ll_backend__deep_profiling__CallSite_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "deep_profiling.m"
                  MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__CallSite_44, 0) = ((MR_Box) (ll_backend__deep_profiling__FileName_29));
#line 1320 "deep_profiling.m"
                  MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__CallSite_44, 1) = ((MR_Box) (ll_backend__deep_profiling__LineNumber_28));
#line 1320 "deep_profiling.m"
                  MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__CallSite_44, 2) = ((MR_Box) (ll_backend__deep_profiling__GoalPath_12));
#line 1320 "deep_profiling.m"
                }
#line 1317 "deep_profiling.m"
                ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104;
#line 1317 "deep_profiling.m"
              }
#line 1321 "deep_profiling.m"
              break;
#line 1321 "deep_profiling.m"
            case (MR_Integer) 1:
#line 1322 "deep_profiling.m"
              {
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__TypeClassInfoVar_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Generic_48, (MR_Integer) 0)));
#line 1322 "deep_profiling.m"
                MR_Integer ll_backend__deep_profiling__MethodNum_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Generic_48, (MR_Integer) 1)));
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__VarInfo2_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 6)));
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__MethodNumVar_58;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__VarInfo3_59;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__MethodNumVarGoal_60;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__PrepareCallGoal_61;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__PrepareCallGoalInfo_63;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__PrepareGoalExpr_64;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_112_112;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_114_114;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_117_117;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_119_119;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_120_120;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_123_123;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_124_124;
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Generic_48, (MR_Integer) 2)));
#line 1322 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Generic_48, (MR_Integer) 3)));
#line 1323 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 0)));
#line 1323 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 1)));
#line 1323 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 2)));
#line 1323 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 3)));
#line 1323 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 4)));
#line 1323 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 5)));
#line 1323 "deep_profiling.m"
                MR_String ll_backend__deep_profiling__V_290_290 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 7)));
#line 1323 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 8)));
#line 1326 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_292_292;
#line 1326 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_293_293;
#line 1326 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_294_294;
#line 1326 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_295_295;
#line 1326 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_296_296;
#line 1326 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_297_297;
#line 1326 "deep_profiling.m"
                MR_String ll_backend__deep_profiling__V_299_299;
#line 1326 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_300_300;
#line 1326 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_298_298;
#line 1332 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_62_62;

#line 1324 "deep_profiling.m"
                {
#line 1324 "deep_profiling.m"
                  ll_backend__deep_profiling__V_112_112 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 1324 "deep_profiling.m"
                {
#line 1324 "deep_profiling.m"
                  ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "MethodNum", ll_backend__deep_profiling__V_112_112, &ll_backend__deep_profiling__MethodNumVar_58, ll_backend__deep_profiling__VarInfo2_57, &ll_backend__deep_profiling__VarInfo3_59);
                }
#line 1326 "deep_profiling.m"
                ll_backend__deep_profiling__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 0)));
#line 1326 "deep_profiling.m"
                ll_backend__deep_profiling__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 1)));
#line 1326 "deep_profiling.m"
                ll_backend__deep_profiling__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 2)));
#line 1326 "deep_profiling.m"
                ll_backend__deep_profiling__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 3)));
#line 1326 "deep_profiling.m"
                ll_backend__deep_profiling__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 4)));
#line 1326 "deep_profiling.m"
                ll_backend__deep_profiling__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 5)));
#line 1326 "deep_profiling.m"
                ll_backend__deep_profiling__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 6)));
#line 1326 "deep_profiling.m"
                ll_backend__deep_profiling__V_299_299 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 7)));
#line 1326 "deep_profiling.m"
                ll_backend__deep_profiling__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_104_104, (MR_Integer) 8)));
#line 1326 "deep_profiling.m"
                {
#line 1326 "deep_profiling.m"
                  ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1326 "deep_profiling.m"
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 0) = ((MR_Box) (ll_backend__deep_profiling__V_292_292));
#line 1326 "deep_profiling.m"
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 1) = ((MR_Box) (ll_backend__deep_profiling__V_293_293));
#line 1326 "deep_profiling.m"
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 2) = ((MR_Box) (ll_backend__deep_profiling__V_294_294));
#line 1326 "deep_profiling.m"
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 3) = ((MR_Box) (ll_backend__deep_profiling__V_295_295));
#line 1326 "deep_profiling.m"
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 4) = ((MR_Box) (ll_backend__deep_profiling__V_296_296));
#line 1326 "deep_profiling.m"
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 5) = ((MR_Box) (ll_backend__deep_profiling__V_297_297));
#line 1326 "deep_profiling.m"
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo3_59));
#line 1326 "deep_profiling.m"
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 7) = ((MR_Box) (ll_backend__deep_profiling__V_299_299));
#line 1326 "deep_profiling.m"
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, 8) = ((MR_Box) (ll_backend__deep_profiling__V_300_300));
#line 1326 "deep_profiling.m"
                }
#line 1327 "deep_profiling.m"
                {
#line 1327 "deep_profiling.m"
                  ll_backend__deep_profiling__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "deep_profiling.m"
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1327 "deep_profiling.m"
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_114_114, 1) = ((MR_Box) (ll_backend__deep_profiling__MethodNum_54));
#line 1327 "deep_profiling.m"
                }
#line 1327 "deep_profiling.m"
                {
#line 1327 "deep_profiling.m"
                  ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__deep_profiling__V_114_114, ll_backend__deep_profiling__MethodNumVar_58, &ll_backend__deep_profiling__MethodNumVarGoal_60);
                }
#line 1330 "deep_profiling.m"
                {
#line 1330 "deep_profiling.m"
                  ll_backend__deep_profiling__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_120_120, 0) = ((MR_Box) (ll_backend__deep_profiling__MethodNumVar_58));
#line 1330 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1330 "deep_profiling.m"
                }
#line 1330 "deep_profiling.m"
                {
#line 1330 "deep_profiling.m"
                  ll_backend__deep_profiling__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_119_119, 0) = ((MR_Box) (ll_backend__deep_profiling__TypeClassInfoVar_53));
#line 1330 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_119_119, 1) = ((MR_Box) (ll_backend__deep_profiling__V_120_120));
#line 1330 "deep_profiling.m"
                }
#line 1330 "deep_profiling.m"
                {
#line 1330 "deep_profiling.m"
                  ll_backend__deep_profiling__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_117_117, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVar_23));
#line 1330 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_117_117, 1) = ((MR_Box) (ll_backend__deep_profiling__V_119_119));
#line 1330 "deep_profiling.m"
                }
#line 1329 "deep_profiling.m"
                {
#line 1329 "deep_profiling.m"
                  ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_13, (MR_String) "prepare_for_method_call", (MR_Integer) 3, ll_backend__deep_profiling__V_117_117, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__PrepareCallGoal_61);
                }
#line 1332 "deep_profiling.m"
                ll_backend__deep_profiling__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PrepareCallGoal_61, (MR_Integer) 0)));
#line 1332 "deep_profiling.m"
                ll_backend__deep_profiling__PrepareCallGoalInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PrepareCallGoal_61, (MR_Integer) 1)));
#line 1334 "deep_profiling.m"
                {
#line 1334 "deep_profiling.m"
                  ll_backend__deep_profiling__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_124_124, 0) = ((MR_Box) (ll_backend__deep_profiling__PrepareCallGoal_61));
#line 1334 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1334 "deep_profiling.m"
                }
#line 1334 "deep_profiling.m"
                {
#line 1334 "deep_profiling.m"
                  ll_backend__deep_profiling__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_123_123, 0) = ((MR_Box) (ll_backend__deep_profiling__MethodNumVarGoal_60));
#line 1334 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_123_123, 1) = ((MR_Box) (ll_backend__deep_profiling__V_124_124));
#line 1334 "deep_profiling.m"
                }
#line 1333 "deep_profiling.m"
                {
#line 1333 "deep_profiling.m"
                  ll_backend__deep_profiling__PrepareGoalExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "deep_profiling.m"
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__PrepareGoalExpr_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1333 "deep_profiling.m"
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__PrepareGoalExpr_64, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1333 "deep_profiling.m"
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__PrepareGoalExpr_64, 2) = ((MR_Box) (ll_backend__deep_profiling__V_123_123));
#line 1333 "deep_profiling.m"
                }
#line 1335 "deep_profiling.m"
                {
#line 1335 "deep_profiling.m"
                  ll_backend__deep_profiling__PrepareGoal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1335 "deep_profiling.m"
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PrepareGoal_32, 0) = ((MR_Box) (ll_backend__deep_profiling__PrepareGoalExpr_64));
#line 1335 "deep_profiling.m"
                  MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PrepareGoal_32, 1) = ((MR_Box) (ll_backend__deep_profiling__PrepareCallGoalInfo_63));
#line 1335 "deep_profiling.m"
                }
#line 1336 "deep_profiling.m"
                {
#line 1336 "deep_profiling.m"
                  ll_backend__deep_profiling__CallSite_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "deep_profiling.m"
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1336 "deep_profiling.m"
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_44, 1) = ((MR_Box) (ll_backend__deep_profiling__FileName_29));
#line 1336 "deep_profiling.m"
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_44, 2) = ((MR_Box) (ll_backend__deep_profiling__LineNumber_28));
#line 1336 "deep_profiling.m"
                  MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__CallSite_44, 3) = ((MR_Box) (ll_backend__deep_profiling__GoalPath_12));
#line 1336 "deep_profiling.m"
                }
#line 1322 "deep_profiling.m"
              }
#line 1321 "deep_profiling.m"
              break;
#line 1321 "deep_profiling.m"
            case (MR_Integer) 2:
#line 1338 "deep_profiling.m"
              {
#line 1339 "deep_profiling.m"
                {
#line 1339 "deep_profiling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.deep_prof_wrap_call\'/4", (MR_String) "event_call");
#line 1339 "deep_profiling.m"
                  return;
                }
#line 1338 "deep_profiling.m"
              }
#line 1321 "deep_profiling.m"
              break;
#line 1321 "deep_profiling.m"
            case (MR_Integer) 3:
#line 1341 "deep_profiling.m"
              {
#line 1342 "deep_profiling.m"
                {
#line 1342 "deep_profiling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.deep_prof_wrap_call\'/4", (MR_String) "cast");
#line 1342 "deep_profiling.m"
                  return;
                }
#line 1341 "deep_profiling.m"
              }
#line 1321 "deep_profiling.m"
              break;
#line 1321 "deep_profiling.m"
          }
#line 1344 "deep_profiling.m"
          {
#line 1344 "deep_profiling.m"
            ll_backend__deep_profiling__GoalCodeModel_67 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
          }
#line 1345 "deep_profiling.m"
          {
#line 1345 "deep_profiling.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__deep_profiling__ModuleInfo_13, &ll_backend__deep_profiling__Globals_68);
          }
#line 1346 "deep_profiling.m"
          {
#line 1346 "deep_profiling.m"
            libs__globals__lookup_bool_option_3_p_0(ll_backend__deep_profiling__Globals_68, (MR_Integer) 210, &ll_backend__deep_profiling__UseZeroing_69);
          }
#line 1352 "deep_profiling.m"
#line 1352 "deep_profiling.m"
          switch (ll_backend__deep_profiling__UseZeroing_69) {
#line 1352 "deep_profiling.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1352 "deep_profiling.m"
            case (MR_Integer) 0:
#line 1353 "deep_profiling.m"
              {
#line 1354 "deep_profiling.m"
                ll_backend__deep_profiling__Goal2_45 = ll_backend__deep_profiling__Goal1_18;
#line 1353 "deep_profiling.m"
                ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113;
#line 1353 "deep_profiling.m"
              }
#line 1352 "deep_profiling.m"
              break;
#line 1352 "deep_profiling.m"
            case (MR_Integer) 1:
#line 1349 "deep_profiling.m"
              {
#line 1349 "deep_profiling.m"
                ll_backend__deep_profiling__deep_prof_transform_higher_order_call_6_p_0(ll_backend__deep_profiling__Globals_68, ll_backend__deep_profiling__GoalCodeModel_67, ll_backend__deep_profiling__Goal1_18, &ll_backend__deep_profiling__Goal2_45, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_113_113, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133);
              }
#line 1352 "deep_profiling.m"
              break;
#line 1352 "deep_profiling.m"
          }
#line 1315 "deep_profiling.m"
        }
#line 1308 "deep_profiling.m"
        break;
#line 1308 "deep_profiling.m"
    }
#line 1359 "deep_profiling.m"
    ll_backend__deep_profiling__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 0)));
#line 1359 "deep_profiling.m"
    ll_backend__deep_profiling__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 1)));
#line 1359 "deep_profiling.m"
    ll_backend__deep_profiling__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 2)));
#line 1359 "deep_profiling.m"
    ll_backend__deep_profiling__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 3)));
#line 1359 "deep_profiling.m"
    ll_backend__deep_profiling__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 4)));
#line 1359 "deep_profiling.m"
    ll_backend__deep_profiling__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 5)));
#line 1359 "deep_profiling.m"
    ll_backend__deep_profiling__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 6)));
#line 1359 "deep_profiling.m"
    ll_backend__deep_profiling__V_307_307 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 7)));
#line 1359 "deep_profiling.m"
    ll_backend__deep_profiling__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 8)));
#line 1359 "deep_profiling.m"
    {
#line 1359 "deep_profiling.m"
      ll_backend__deep_profiling__V_154_154 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0, ll_backend__deep_profiling__V_155_155, ((MR_Box) (ll_backend__deep_profiling__CallSite_44)));
    }
#line 1358 "deep_profiling.m"
    ll_backend__deep_profiling__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 0)));
#line 1358 "deep_profiling.m"
    ll_backend__deep_profiling__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 1)));
#line 1358 "deep_profiling.m"
    ll_backend__deep_profiling__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 2)));
#line 1358 "deep_profiling.m"
    ll_backend__deep_profiling__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 3)));
#line 1358 "deep_profiling.m"
    ll_backend__deep_profiling__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 4)));
#line 1358 "deep_profiling.m"
    ll_backend__deep_profiling__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 5)));
#line 1358 "deep_profiling.m"
    ll_backend__deep_profiling__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 6)));
#line 1358 "deep_profiling.m"
    ll_backend__deep_profiling__V_316_316 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 7)));
#line 1358 "deep_profiling.m"
    ll_backend__deep_profiling__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_133_133, (MR_Integer) 8)));
#line 1358 "deep_profiling.m"
    {
#line 1358 "deep_profiling.m"
      ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1358 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 0) = ((MR_Box) (ll_backend__deep_profiling__V_309_309));
#line 1358 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 1) = ((MR_Box) (ll_backend__deep_profiling__V_310_310));
#line 1358 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 2) = ((MR_Box) (ll_backend__deep_profiling__V_311_311));
#line 1358 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 3) = ((MR_Box) (ll_backend__deep_profiling__V_312_312));
#line 1358 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 4) = ((MR_Box) (ll_backend__deep_profiling__V_313_313));
#line 1358 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 5) = ((MR_Box) (ll_backend__deep_profiling__V_154_154));
#line 1358 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 6) = ((MR_Box) (ll_backend__deep_profiling__V_315_315));
#line 1358 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 7) = ((MR_Box) (ll_backend__deep_profiling__V_316_316));
#line 1358 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, 8) = ((MR_Box) (ll_backend__deep_profiling__V_317_317));
#line 1358 "deep_profiling.m"
    }
#line 1361 "deep_profiling.m"
    {
#line 1361 "deep_profiling.m"
      ll_backend__deep_profiling__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 9)), ll_backend__deep_profiling__GoalFeatures_14);
    }
#line 1361 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 1361 "deep_profiling.m"
      {
#line 1362 "deep_profiling.m"
        ll_backend__deep_profiling__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 0)));
#line 1362 "deep_profiling.m"
        ll_backend__deep_profiling__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 1)));
#line 1362 "deep_profiling.m"
        ll_backend__deep_profiling__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 2)));
#line 1362 "deep_profiling.m"
        ll_backend__deep_profiling__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 3)));
#line 1362 "deep_profiling.m"
        ll_backend__deep_profiling__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 4)));
#line 1362 "deep_profiling.m"
        ll_backend__deep_profiling__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 5)));
#line 1362 "deep_profiling.m"
        ll_backend__deep_profiling__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 6)));
#line 1362 "deep_profiling.m"
        ll_backend__deep_profiling__V_325_325 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 7)));
#line 1362 "deep_profiling.m"
        ll_backend__deep_profiling__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, (MR_Integer) 8)));
#line 1362 "deep_profiling.m"
        ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__V_157_157)) == (MR_mktag((MR_Integer) 1)));
#line 1362 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 1362 "deep_profiling.m"
          {
#line 1362 "deep_profiling.m"
            ll_backend__deep_profiling__RecInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_157_157, (MR_Integer) 0)));
#line 1363 "deep_profiling.m"
            ll_backend__deep_profiling__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo_70, (MR_Integer) 0)));
#line 1363 "deep_profiling.m"
            ll_backend__deep_profiling__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo_70, (MR_Integer) 1)));
#line 1363 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__V_158_158)) == (MR_mktag((MR_Integer) 1)));
#line 1363 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 1363 "deep_profiling.m"
              ll_backend__deep_profiling__V_71_71 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__V_158_158), (MR_Integer) 1);
#line 1362 "deep_profiling.m"
          }
#line 1361 "deep_profiling.m"
      }
#line 1426 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 1365 "deep_profiling.m"
      {
#line 1365 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CallGoals_74;
#line 1365 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__ExitGoals_75;
#line 1365 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__FailGoals_76;
#line 1365 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__SaveRestoreVars_77;
#line 1365 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CodeModel_82;

#line 1373 "deep_profiling.m"
        if ((ll_backend__deep_profiling__V_326_326 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1368 "deep_profiling.m"
          {
#line 1369 "deep_profiling.m"
            ll_backend__deep_profiling__CallGoals_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1370 "deep_profiling.m"
            ll_backend__deep_profiling__ExitGoals_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1371 "deep_profiling.m"
            ll_backend__deep_profiling__FailGoals_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1372 "deep_profiling.m"
            ll_backend__deep_profiling__SaveRestoreVars_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1368 "deep_profiling.m"
            *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153;
#line 1368 "deep_profiling.m"
          }
#line 1373 "deep_profiling.m"
        else
#line 1373 "deep_profiling.m"
          {
#line 1373 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_326_326, (MR_Integer) 1)));
#line 1373 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_326_326, (MR_Integer) 0)));

#line 1373 "deep_profiling.m"
            if ((ll_backend__deep_profiling__V_345_345 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1374 "deep_profiling.m"
              {
#line 1374 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_346_346, (MR_Integer) 2)));
#line 1375 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_346_346, (MR_Integer) 0)));
#line 1375 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_346_346, (MR_Integer) 1)));

#line 1375 "deep_profiling.m"
                {
#line 1375 "deep_profiling.m"
                  ll_backend__deep_profiling__generate_recursion_counter_saves_and_restores_8_p_0(ll_backend__deep_profiling__V_164_164, ll_backend__deep_profiling__V_321_321, &ll_backend__deep_profiling__CallGoals_74, &ll_backend__deep_profiling__ExitGoals_75, &ll_backend__deep_profiling__FailGoals_76, &ll_backend__deep_profiling__SaveRestoreVars_77, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97);
                }
#line 1374 "deep_profiling.m"
              }
#line 1373 "deep_profiling.m"
            else
#line 1379 "deep_profiling.m"
              {
#line 1380 "deep_profiling.m"
                {
#line 1380 "deep_profiling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.deep_prof_wrap_call\'/4", (MR_String) "multi-procedure SCCs not yet implemented");
#line 1380 "deep_profiling.m"
                  return;
                }
#line 1379 "deep_profiling.m"
              }
#line 1373 "deep_profiling.m"
          }
#line 1384 "deep_profiling.m"
        {
#line 1384 "deep_profiling.m"
          ll_backend__deep_profiling__CodeModel_82 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__deep_profiling__GoalInfo0_9);
        }
#line 1390 "deep_profiling.m"
#line 1390 "deep_profiling.m"
        switch (ll_backend__deep_profiling__CodeModel_82) {
#line 1390 "deep_profiling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1390 "deep_profiling.m"
          case (MR_Integer) 0:
#line 1386 "deep_profiling.m"
            {
#line 1386 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__TypeCtorInfo_341_341 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1386 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Goals_83;
#line 1386 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_190_190;
#line 1386 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_191_191;
#line 1386 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_192_192;
#line 1386 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_193_193;

#line 1388 "deep_profiling.m"
              {
#line 1388 "deep_profiling.m"
                ll_backend__deep_profiling__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_193_193, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal2_45));
#line 1388 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1388 "deep_profiling.m"
              }
#line 1388 "deep_profiling.m"
              {
#line 1388 "deep_profiling.m"
                ll_backend__deep_profiling__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_192_192, 0) = ((MR_Box) (ll_backend__deep_profiling__PrepareGoal_32));
#line 1388 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_192_192, 1) = ((MR_Box) (ll_backend__deep_profiling__V_193_193));
#line 1388 "deep_profiling.m"
              }
#line 1388 "deep_profiling.m"
              {
#line 1388 "deep_profiling.m"
                ll_backend__deep_profiling__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_191_191, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVarGoal_25));
#line 1388 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_191_191, 1) = ((MR_Box) (ll_backend__deep_profiling__V_192_192));
#line 1388 "deep_profiling.m"
              }
#line 1388 "deep_profiling.m"
              {
#line 1388 "deep_profiling.m"
                ll_backend__deep_profiling__V_190_190 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_341_341, ll_backend__deep_profiling__V_191_191, ll_backend__deep_profiling__ExitGoals_75);
              }
#line 1388 "deep_profiling.m"
              {
#line 1388 "deep_profiling.m"
                ll_backend__deep_profiling__Goals_83 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_341_341, ll_backend__deep_profiling__CallGoals_74, ll_backend__deep_profiling__V_190_190);
              }
#line 1389 "deep_profiling.m"
              {
#line 1389 "deep_profiling.m"
                ll_backend__deep_profiling__GoalExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1389 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1389 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 2) = ((MR_Box) (ll_backend__deep_profiling__Goals_83));
#line 1389 "deep_profiling.m"
              }
#line 1386 "deep_profiling.m"
            }
#line 1390 "deep_profiling.m"
            break;
#line 1390 "deep_profiling.m"
          case (MR_Integer) 2:
#line 1390 "deep_profiling.m"
          case (MR_Integer) 1:
#line 1393 "deep_profiling.m"
            {
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__TypeCtorInfo_343_343;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__ExtraVars_85;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__WrappedGoalGoalInfo0_86;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__WrappedGoalGoalInfo_87;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__ReturnFailsGoalInfo0_88;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__ReturnFailsGoalInfo_89;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__FailGoalInfo0_90;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__FailGoalInfo_91;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__FailGoal_92;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__FailGoalsAndFail_93;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__DisjGoalExpr_94;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__DisjGoal_95;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_166_166;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_173_173;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_175_175;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_176_176;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_177_177;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_179_179;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_180_180;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_181_181;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_182_182;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_183_183;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_184_184;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_187_187;
#line 1393 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Goals_207;

#line 1394 "deep_profiling.m"
              {
#line 1394 "deep_profiling.m"
                ll_backend__deep_profiling__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_166_166, 0) = ((MR_Box) (ll_backend__deep_profiling__V_321_321));
#line 1394 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_166_166, 1) = ((MR_Box) (ll_backend__deep_profiling__SaveRestoreVars_77));
#line 1394 "deep_profiling.m"
              }
#line 1394 "deep_profiling.m"
              {
#line 1394 "deep_profiling.m"
                ll_backend__deep_profiling__ExtraVars_85 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__V_166_166);
              }
#line 1395 "deep_profiling.m"
              {
#line 1395 "deep_profiling.m"
                ll_backend__deep_profiling__WrappedGoalGoalInfo0_86 = hlds__hlds_goal__goal_info_add_nonlocals_make_impure_2_f_0(ll_backend__deep_profiling__MdprofInstGoalInfo_17, ll_backend__deep_profiling__ExtraVars_85);
              }
#line 1398 "deep_profiling.m"
              {
#line 1398 "deep_profiling.m"
                hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__WrappedGoalGoalInfo0_86, &ll_backend__deep_profiling__WrappedGoalGoalInfo_87);
              }
#line 1402 "deep_profiling.m"
              {
#line 1402 "deep_profiling.m"
                ll_backend__deep_profiling__ReturnFailsGoalInfo0_88 = hlds__hlds_goal__impure_unreachable_init_goal_info_2_f_0(ll_backend__deep_profiling__ExtraVars_85, (MR_Integer) 7);
              }
#line 1403 "deep_profiling.m"
              {
#line 1403 "deep_profiling.m"
                hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__ReturnFailsGoalInfo0_88, &ll_backend__deep_profiling__ReturnFailsGoalInfo_89);
              }
#line 1406 "deep_profiling.m"
              {
#line 1406 "deep_profiling.m"
                ll_backend__deep_profiling__FailGoalInfo0_90 = hlds__make_goal__fail_goal_info_0_f_0();
              }
#line 1407 "deep_profiling.m"
              {
#line 1407 "deep_profiling.m"
                hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__FailGoalInfo0_90, &ll_backend__deep_profiling__FailGoalInfo_91);
              }
#line 1409 "deep_profiling.m"
              {
#line 1409 "deep_profiling.m"
                ll_backend__deep_profiling__FailGoal_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1409 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__FailGoal_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_2[11])));
#line 1409 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__FailGoal_92, 1) = ((MR_Box) (ll_backend__deep_profiling__FailGoalInfo_91));
#line 1409 "deep_profiling.m"
              }
#line 8526 "ll_backend.deep_profiling.c"
              ll_backend__deep_profiling__TypeCtorInfo_343_343 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1411 "deep_profiling.m"
              {
#line 1411 "deep_profiling.m"
                ll_backend__deep_profiling__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_173_173, 0) = ((MR_Box) (ll_backend__deep_profiling__FailGoal_92));
#line 1411 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_173_173, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1411 "deep_profiling.m"
              }
#line 1411 "deep_profiling.m"
              {
#line 1411 "deep_profiling.m"
                ll_backend__deep_profiling__FailGoalsAndFail_93 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_343_343, ll_backend__deep_profiling__FailGoals_76, ll_backend__deep_profiling__V_173_173);
              }
#line 1416 "deep_profiling.m"
              {
#line 1416 "deep_profiling.m"
                ll_backend__deep_profiling__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1416 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_181_181, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal2_45));
#line 1416 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_181_181, 1) = ((MR_Box) (ll_backend__deep_profiling__ExitGoals_75));
#line 1416 "deep_profiling.m"
              }
#line 1416 "deep_profiling.m"
              {
#line 1416 "deep_profiling.m"
                ll_backend__deep_profiling__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1416 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_180_180, 0) = ((MR_Box) (ll_backend__deep_profiling__PrepareGoal_32));
#line 1416 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_180_180, 1) = ((MR_Box) (ll_backend__deep_profiling__V_181_181));
#line 1416 "deep_profiling.m"
              }
#line 1416 "deep_profiling.m"
              {
#line 1416 "deep_profiling.m"
                ll_backend__deep_profiling__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1416 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_179_179, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVarGoal_25));
#line 1416 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_179_179, 1) = ((MR_Box) (ll_backend__deep_profiling__V_180_180));
#line 1416 "deep_profiling.m"
              }
#line 1415 "deep_profiling.m"
              {
#line 1415 "deep_profiling.m"
                ll_backend__deep_profiling__V_177_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_177_177, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1415 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_177_177, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1415 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_177_177, 2) = ((MR_Box) (ll_backend__deep_profiling__V_179_179));
#line 1415 "deep_profiling.m"
              }
#line 1414 "deep_profiling.m"
              {
#line 1414 "deep_profiling.m"
                ll_backend__deep_profiling__V_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1414 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_176_176, 0) = ((MR_Box) (ll_backend__deep_profiling__V_177_177));
#line 1414 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_176_176, 1) = ((MR_Box) (ll_backend__deep_profiling__WrappedGoalGoalInfo_87));
#line 1414 "deep_profiling.m"
              }
#line 1419 "deep_profiling.m"
              {
#line 1419 "deep_profiling.m"
                ll_backend__deep_profiling__V_184_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_184_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1419 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_184_184, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1419 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_184_184, 2) = ((MR_Box) (ll_backend__deep_profiling__FailGoalsAndFail_93));
#line 1419 "deep_profiling.m"
              }
#line 1418 "deep_profiling.m"
              {
#line 1418 "deep_profiling.m"
                ll_backend__deep_profiling__V_183_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1418 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_183_183, 0) = ((MR_Box) (ll_backend__deep_profiling__V_184_184));
#line 1418 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_183_183, 1) = ((MR_Box) (ll_backend__deep_profiling__ReturnFailsGoalInfo_89));
#line 1418 "deep_profiling.m"
              }
#line 1421 "deep_profiling.m"
              {
#line 1421 "deep_profiling.m"
                ll_backend__deep_profiling__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_182_182, 0) = ((MR_Box) (ll_backend__deep_profiling__V_183_183));
#line 1421 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_182_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1421 "deep_profiling.m"
              }
#line 1417 "deep_profiling.m"
              {
#line 1417 "deep_profiling.m"
                ll_backend__deep_profiling__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1417 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_175_175, 0) = ((MR_Box) (ll_backend__deep_profiling__V_176_176));
#line 1417 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_175_175, 1) = ((MR_Box) (ll_backend__deep_profiling__V_182_182));
#line 1417 "deep_profiling.m"
              }
#line 1413 "deep_profiling.m"
              {
#line 1413 "deep_profiling.m"
                ll_backend__deep_profiling__DisjGoalExpr_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1413 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__DisjGoalExpr_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1413 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__DisjGoalExpr_94, 1) = ((MR_Box) (ll_backend__deep_profiling__V_175_175));
#line 1413 "deep_profiling.m"
              }
#line 1422 "deep_profiling.m"
              {
#line 1422 "deep_profiling.m"
                ll_backend__deep_profiling__DisjGoal_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1422 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DisjGoal_95, 0) = ((MR_Box) (ll_backend__deep_profiling__DisjGoalExpr_94));
#line 1422 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DisjGoal_95, 1) = ((MR_Box) (ll_backend__deep_profiling__WrappedGoalGoalInfo_87));
#line 1422 "deep_profiling.m"
              }
#line 1423 "deep_profiling.m"
              {
#line 1423 "deep_profiling.m"
                ll_backend__deep_profiling__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_187_187, 0) = ((MR_Box) (ll_backend__deep_profiling__DisjGoal_95));
#line 1423 "deep_profiling.m"
                MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_187_187, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1423 "deep_profiling.m"
              }
#line 1423 "deep_profiling.m"
              {
#line 1423 "deep_profiling.m"
                ll_backend__deep_profiling__Goals_207 = mercury__list__f_43_43_2_f_0(ll_backend__deep_profiling__TypeCtorInfo_343_343, ll_backend__deep_profiling__CallGoals_74, ll_backend__deep_profiling__V_187_187);
              }
#line 1424 "deep_profiling.m"
              {
#line 1424 "deep_profiling.m"
                ll_backend__deep_profiling__GoalExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1424 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1424 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1424 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 2) = ((MR_Box) (ll_backend__deep_profiling__Goals_207));
#line 1424 "deep_profiling.m"
              }
#line 1393 "deep_profiling.m"
            }
#line 1390 "deep_profiling.m"
            break;
#line 1390 "deep_profiling.m"
        }
#line 1365 "deep_profiling.m"
      }
#line 1426 "deep_profiling.m"
    else
#line 1427 "deep_profiling.m"
      {
#line 1427 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_197_197;
#line 1427 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_198_198;
#line 1427 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_199_199;

#line 1427 "deep_profiling.m"
        {
#line 1427 "deep_profiling.m"
          ll_backend__deep_profiling__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_199_199, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal2_45));
#line 1427 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_199_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1427 "deep_profiling.m"
        }
#line 1427 "deep_profiling.m"
        {
#line 1427 "deep_profiling.m"
          ll_backend__deep_profiling__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_198_198, 0) = ((MR_Box) (ll_backend__deep_profiling__PrepareGoal_32));
#line 1427 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_198_198, 1) = ((MR_Box) (ll_backend__deep_profiling__V_199_199));
#line 1427 "deep_profiling.m"
        }
#line 1427 "deep_profiling.m"
        {
#line 1427 "deep_profiling.m"
          ll_backend__deep_profiling__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_197_197, 0) = ((MR_Box) (ll_backend__deep_profiling__SiteNumVarGoal_25));
#line 1427 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_197_197, 1) = ((MR_Box) (ll_backend__deep_profiling__V_198_198));
#line 1427 "deep_profiling.m"
        }
#line 1427 "deep_profiling.m"
        {
#line 1427 "deep_profiling.m"
          ll_backend__deep_profiling__GoalExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "deep_profiling.m"
          MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1427 "deep_profiling.m"
          MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1427 "deep_profiling.m"
          MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_84, 2) = ((MR_Box) (ll_backend__deep_profiling__V_197_197));
#line 1427 "deep_profiling.m"
        }
#line 1427 "deep_profiling.m"
        *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_153_153;
#line 1427 "deep_profiling.m"
      }
#line 1429 "deep_profiling.m"
    {
#line 1429 "deep_profiling.m"
      MR_Word base;
#line 1429 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "deep_profiling.m"
      *ll_backend__deep_profiling__Goal_6 = base;
#line 1429 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_84));
#line 1429 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__MdprofInstGoalInfo_17));
#line 1429 "deep_profiling.m"
    }
#line 1237 "deep_profiling.m"
  }
#line 1234 "deep_profiling.m"
}

#line 1221 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(
#line 1221 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 1221 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
#line 1221 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
#line 1221 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4,
#line 1221 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5)
#line 1221 "deep_profiling.m"
{
#line 1224 "deep_profiling.m"
  {
#line 1224 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 1224 "deep_profiling.m"
    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1224 "deep_profiling.m"
      {
#line 1224 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1224 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__3_3 = (MR_Integer) 0;
#line 1224 "deep_profiling.m"
        *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4;
#line 1224 "deep_profiling.m"
      }
#line 1224 "deep_profiling.m"
    else
#line 1226 "deep_profiling.m"
      {
#line 1226 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 1226 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 1226 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Case_11;
#line 1226 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Cases_12;
#line 1226 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case0_9, (MR_Integer) 0)));
#line 1226 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case0_9, (MR_Integer) 1)));
#line 1226 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case0_9, (MR_Integer) 2)));
#line 1226 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goal_18;
#line 1226 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__AddedImpurityFirst_19;
#line 1226 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__AddedImpurityLater_20;
#line 1226 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_23_23;

#line 1228 "deep_profiling.m"
        {
#line 1228 "deep_profiling.m"
          ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Goal0_17, &ll_backend__deep_profiling__Goal_18, &ll_backend__deep_profiling__AddedImpurityFirst_19, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_23_23);
        }
#line 1229 "deep_profiling.m"
        {
#line 1229 "deep_profiling.m"
          ll_backend__deep_profiling__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_11, 0) = ((MR_Box) (ll_backend__deep_profiling__MainConsId_15));
#line 1229 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_11, 1) = ((MR_Box) (ll_backend__deep_profiling__OtherConsIds_16));
#line 1229 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_11, 2) = ((MR_Box) (ll_backend__deep_profiling__Goal_18));
#line 1229 "deep_profiling.m"
        }
#line 1230 "deep_profiling.m"
        {
#line 1230 "deep_profiling.m"
          ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(ll_backend__deep_profiling__Cases0_10, &ll_backend__deep_profiling__Cases_12, &ll_backend__deep_profiling__AddedImpurityLater_20, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_23_23, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5);
        }
#line 1225 "deep_profiling.m"
        {
#line 1225 "deep_profiling.m"
          MR_Word base;
#line 1225 "deep_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "deep_profiling.m"
          *ll_backend__deep_profiling__HeadVar__2_2 = base;
#line 1225 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Case_11));
#line 1225 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Cases_12));
#line 1225 "deep_profiling.m"
        }
#line 1232 "deep_profiling.m"
        {
#line 1232 "deep_profiling.m"
          mercury__bool__or_3_p_0(ll_backend__deep_profiling__AddedImpurityFirst_19, ll_backend__deep_profiling__AddedImpurityLater_20, ll_backend__deep_profiling__HeadVar__3_3);
#line 1232 "deep_profiling.m"
          return;
        }
#line 1226 "deep_profiling.m"
      }
#line 1224 "deep_profiling.m"
  }
#line 1221 "deep_profiling.m"
}

#line 1210 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(
#line 1210 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 1210 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
#line 1210 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
#line 1210 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4,
#line 1210 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5)
#line 1210 "deep_profiling.m"
{
#line 1213 "deep_profiling.m"
  {
#line 1213 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 1213 "deep_profiling.m"
    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1213 "deep_profiling.m"
      {
#line 1213 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1213 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__3_3 = (MR_Integer) 0;
#line 1213 "deep_profiling.m"
        *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4;
#line 1213 "deep_profiling.m"
      }
#line 1213 "deep_profiling.m"
    else
#line 1215 "deep_profiling.m"
      {
#line 1215 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 1215 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 1215 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goal_11;
#line 1215 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goals_12;
#line 1215 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__AddedImpurityFirst_15;
#line 1215 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__AddedImpurityLater_16;
#line 1215 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_19_19;

#line 1216 "deep_profiling.m"
        {
#line 1216 "deep_profiling.m"
          ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Goal0_9, &ll_backend__deep_profiling__Goal_11, &ll_backend__deep_profiling__AddedImpurityFirst_15, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_4, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_19_19);
        }
#line 1217 "deep_profiling.m"
        {
#line 1217 "deep_profiling.m"
          ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(ll_backend__deep_profiling__Goals0_10, &ll_backend__deep_profiling__Goals_12, &ll_backend__deep_profiling__AddedImpurityLater_16, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_19_19, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_5);
        }
#line 1214 "deep_profiling.m"
        {
#line 1214 "deep_profiling.m"
          MR_Word base;
#line 1214 "deep_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "deep_profiling.m"
          *ll_backend__deep_profiling__HeadVar__2_2 = base;
#line 1214 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal_11));
#line 1214 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Goals_12));
#line 1214 "deep_profiling.m"
        }
#line 1219 "deep_profiling.m"
        {
#line 1219 "deep_profiling.m"
          mercury__bool__or_3_p_0(ll_backend__deep_profiling__AddedImpurityFirst_15, ll_backend__deep_profiling__AddedImpurityLater_16, ll_backend__deep_profiling__HeadVar__3_3);
#line 1219 "deep_profiling.m"
          return;
        }
#line 1215 "deep_profiling.m"
      }
#line 1213 "deep_profiling.m"
  }
#line 1210 "deep_profiling.m"
}

#line 1189 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(
#line 1189 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ConjType_1,
#line 1189 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
#line 1189 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__3_3,
#line 1189 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__4_4,
#line 1189 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_5,
#line 1189 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_6)
#line 1189 "deep_profiling.m"
{
#line 1193 "deep_profiling.m"
  {
#line 1193 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 1193 "deep_profiling.m"
    if ((ll_backend__deep_profiling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1193 "deep_profiling.m"
      {
#line 1193 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1193 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__4_4 = (MR_Integer) 0;
#line 1193 "deep_profiling.m"
        *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_6 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_5;
#line 1193 "deep_profiling.m"
      }
#line 1193 "deep_profiling.m"
    else
#line 1195 "deep_profiling.m"
      {
#line 1195 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 1195 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 1195 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goal_17;
#line 1195 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__AddedImpurityFirst_18;
#line 1195 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TailGoals_19;
#line 1195 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__AddedImpurityLater_20;
#line 1195 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__GoalExpr_21;
#line 1195 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_26_26;
#line 1199 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_22_22;
#line 1205 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Conjuncts_23;
#line 1201 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_28_28;

#line 1196 "deep_profiling.m"
        {
#line 1196 "deep_profiling.m"
          ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Goal0_12, &ll_backend__deep_profiling__Goal_17, &ll_backend__deep_profiling__AddedImpurityFirst_18, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_5, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_26_26);
        }
#line 1197 "deep_profiling.m"
        {
#line 1197 "deep_profiling.m"
          ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(ll_backend__deep_profiling__ConjType_1, ll_backend__deep_profiling__Goals0_13, &ll_backend__deep_profiling__TailGoals_19, &ll_backend__deep_profiling__AddedImpurityLater_20, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_26_26, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_6);
        }
#line 1199 "deep_profiling.m"
        ll_backend__deep_profiling__GoalExpr_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal_17, (MR_Integer) 0)));
#line 1199 "deep_profiling.m"
        ll_backend__deep_profiling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal_17, (MR_Integer) 1)));
#line 1202 "deep_profiling.m"
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__ConjType_1 == (MR_Integer) 0);
#line 1201 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 1201 "deep_profiling.m"
          {
#line 1201 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__deep_profiling__GoalExpr_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1201 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 1201 "deep_profiling.m"
              {
#line 1201 "deep_profiling.m"
                ll_backend__deep_profiling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_21, (MR_Integer) 1)));
#line 1201 "deep_profiling.m"
                ll_backend__deep_profiling__Conjuncts_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_21, (MR_Integer) 2)));
#line 1201 "deep_profiling.m"
                ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_28_28 == (MR_Integer) 0);
#line 1201 "deep_profiling.m"
              }
#line 1201 "deep_profiling.m"
          }
#line 1205 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 1204 "deep_profiling.m"
          {
#line 1204 "deep_profiling.m"
            {
#line 1204 "deep_profiling.m"
              *ll_backend__deep_profiling__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__deep_profiling__Conjuncts_23, ll_backend__deep_profiling__TailGoals_19);
            }
#line 1204 "deep_profiling.m"
          }
#line 1205 "deep_profiling.m"
        else
#line 1206 "deep_profiling.m"
          {
#line 1206 "deep_profiling.m"
            MR_Word base;
#line 1206 "deep_profiling.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "deep_profiling.m"
            *ll_backend__deep_profiling__HeadVar__3_3 = base;
#line 1206 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal_17));
#line 1206 "deep_profiling.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__TailGoals_19));
#line 1206 "deep_profiling.m"
          }
#line 1208 "deep_profiling.m"
        {
#line 1208 "deep_profiling.m"
          mercury__bool__or_3_p_0(ll_backend__deep_profiling__AddedImpurityFirst_18, ll_backend__deep_profiling__AddedImpurityLater_20, ll_backend__deep_profiling__HeadVar__4_4);
#line 1208 "deep_profiling.m"
          return;
        }
#line 1195 "deep_profiling.m"
      }
#line 1193 "deep_profiling.m"
  }
#line 1189 "deep_profiling.m"
}

#line 1181 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(
#line 1181 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_3,
#line 1181 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_4)
#line 1181 "deep_profiling.m"
{
#line 1184 "deep_profiling.m"
  {
#line 1184 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1184 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_3, (MR_Integer) 1)));
#line 1184 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo_6;
#line 1185 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_3, (MR_Integer) 0)));
#line 1187 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_9_9;
#line 1187 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_10_10;

#line 1186 "deep_profiling.m"
    {
#line 1186 "deep_profiling.m"
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 1, ll_backend__deep_profiling__GoalInfo0_5, &ll_backend__deep_profiling__GoalInfo_6);
    }
#line 1187 "deep_profiling.m"
    ll_backend__deep_profiling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_3, (MR_Integer) 0)));
#line 1187 "deep_profiling.m"
    ll_backend__deep_profiling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_3, (MR_Integer) 1)));
#line 1187 "deep_profiling.m"
    {
#line 1187 "deep_profiling.m"
      MR_Word base;
#line 1187 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "deep_profiling.m"
      *ll_backend__deep_profiling__Goal_4 = base;
#line 1187 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__V_9_9));
#line 1187 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_6));
#line 1187 "deep_profiling.m"
    }
#line 1184 "deep_profiling.m"
  }
#line 1181 "deep_profiling.m"
}

#line 1158 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_2(
#line 1158 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 1158 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 1158 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2)
#line 1158 "deep_profiling.m"
{
#line 1158 "deep_profiling.m"
  {
#line 1158 "deep_profiling.m"
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
#line 1158 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__conv1_Goal_4;

#line 1158 "deep_profiling.m"
    {
#line 1158 "deep_profiling.m"
      ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), &ll_backend__deep_profiling__conv1_Goal_4);
    }
#line 1158 "deep_profiling.m"
    *ll_backend__deep_profiling__wrapper_arg_2 = ((MR_Box) (ll_backend__deep_profiling__conv1_Goal_4));
#line 1158 "deep_profiling.m"
  }
#line 1158 "deep_profiling.m"
}

#line 1158 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0_1(
#line 1158 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 1158 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 1158 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_2)
#line 1158 "deep_profiling.m"
{
#line 1158 "deep_profiling.m"
  {
#line 1158 "deep_profiling.m"
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
#line 1158 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__conv0_Goal_4;

#line 1158 "deep_profiling.m"
    {
#line 1158 "deep_profiling.m"
      ll_backend__deep_profiling__deep_prof_mark_goal_as_not_mdprof_inst_2_p_0(((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), &ll_backend__deep_profiling__conv0_Goal_4);
    }
#line 1158 "deep_profiling.m"
    *ll_backend__deep_profiling__wrapper_arg_2 = ((MR_Box) (ll_backend__deep_profiling__conv0_Goal_4));
#line 1158 "deep_profiling.m"
  }
#line 1158 "deep_profiling.m"
}

#line 1033 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(
#line 1033 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_6,
#line 1033 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_7,
#line 1033 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__AddedImpurity_8,
#line 1033 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81,
#line 1033 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82)
#line 1033 "deep_profiling.m"
{
#line 1036 "deep_profiling.m"
  {
#line 1036 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1036 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_6, (MR_Integer) 0)));
#line 1036 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_6, (MR_Integer) 1)));
#line 1036 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo1_12;
#line 1036 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Goal1_13;

#line 1038 "deep_profiling.m"
    {
#line 1038 "deep_profiling.m"
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 1, ll_backend__deep_profiling__GoalInfo0_11, &ll_backend__deep_profiling__GoalInfo1_12);
    }
#line 1039 "deep_profiling.m"
    {
#line 1039 "deep_profiling.m"
      ll_backend__deep_profiling__Goal1_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal1_13, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr0_10));
#line 1039 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal1_13, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo1_12));
#line 1039 "deep_profiling.m"
    }
#line 1053 "deep_profiling.m"
#line 1053 "deep_profiling.m"
    switch (MR_tag((MR_Word) ll_backend__deep_profiling__GoalExpr0_10)) {
#line 1053 "deep_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1053 "deep_profiling.m"
      case (MR_Integer) 0:
#line 1101 "deep_profiling.m"
        {
#line 1101 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__SubGoal0_56 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__GoalExpr0_10), (MR_Integer) 0);
#line 1101 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__SubGoal_57;
#line 1101 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__GoalInfo_113;
#line 1101 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__GoalExpr_114;

#line 1102 "deep_profiling.m"
          {
#line 1102 "deep_profiling.m"
            ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__SubGoal0_56, &ll_backend__deep_profiling__SubGoal_57, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
          }
#line 1103 "deep_profiling.m"
          {
#line 1103 "deep_profiling.m"
            hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_113);
          }
#line 1104 "deep_profiling.m"
          ll_backend__deep_profiling__GoalExpr_114 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__deep_profiling__SubGoal_57);
#line 1105 "deep_profiling.m"
          {
#line 1105 "deep_profiling.m"
            MR_Word base;
#line 1105 "deep_profiling.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1105 "deep_profiling.m"
            *ll_backend__deep_profiling__Goal_7 = base;
#line 1105 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_114));
#line 1105 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_113));
#line 1105 "deep_profiling.m"
          }
#line 1101 "deep_profiling.m"
        }
#line 1053 "deep_profiling.m"
        break;
#line 1053 "deep_profiling.m"
      case (MR_Integer) 1:
#line 1078 "deep_profiling.m"
        {
#line 1079 "deep_profiling.m"
          *ll_backend__deep_profiling__Goal_7 = ll_backend__deep_profiling__Goal1_13;
#line 1080 "deep_profiling.m"
          *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
#line 1078 "deep_profiling.m"
          *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81;
#line 1078 "deep_profiling.m"
        }
#line 1053 "deep_profiling.m"
        break;
#line 1053 "deep_profiling.m"
      case (MR_Integer) 2:
#line 1041 "deep_profiling.m"
        {
#line 1041 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__BuiltinState_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 3)));
#line 1041 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 0)));
#line 1041 "deep_profiling.m"
          MR_Integer ll_backend__deep_profiling__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
#line 1041 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
#line 1041 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 4)));
#line 1041 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 5)));

#line 1048 "deep_profiling.m"
#line 1048 "deep_profiling.m"
          switch (ll_backend__deep_profiling__BuiltinState_17) {
#line 1048 "deep_profiling.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1048 "deep_profiling.m"
            case (MR_Integer) 0:
#line 1049 "deep_profiling.m"
              {
#line 1050 "deep_profiling.m"
                *ll_backend__deep_profiling__Goal_7 = ll_backend__deep_profiling__Goal1_13;
#line 1051 "deep_profiling.m"
                *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
#line 1049 "deep_profiling.m"
                *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81;
#line 1049 "deep_profiling.m"
              }
#line 1048 "deep_profiling.m"
              break;
#line 1048 "deep_profiling.m"
            case (MR_Integer) 2:
#line 1048 "deep_profiling.m"
            case (MR_Integer) 1:
#line 1045 "deep_profiling.m"
              {
#line 1046 "deep_profiling.m"
                {
#line 1046 "deep_profiling.m"
                  ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(ll_backend__deep_profiling__Goal1_13, ll_backend__deep_profiling__Goal_7, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
                }
#line 1047 "deep_profiling.m"
                *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 1;
#line 1045 "deep_profiling.m"
              }
#line 1048 "deep_profiling.m"
              break;
#line 1048 "deep_profiling.m"
          }
#line 1041 "deep_profiling.m"
        }
#line 1053 "deep_profiling.m"
        break;
#line 1053 "deep_profiling.m"
      case (MR_Integer) 3:
#line 1053 "deep_profiling.m"
#line 1053 "deep_profiling.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 0)))) {
#line 1053 "deep_profiling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1053 "deep_profiling.m"
          case (MR_Integer) 0:
#line 1054 "deep_profiling.m"
            {
#line 1054 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GenericCall_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
#line 1054 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
#line 1054 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 3)));
#line 1054 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 4)));
#line 1054 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 5)));

#line 1061 "deep_profiling.m"
#line 1061 "deep_profiling.m"
              switch (MR_tag((MR_Word) ll_backend__deep_profiling__GenericCall_20)) {
#line 1061 "deep_profiling.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1061 "deep_profiling.m"
                case (MR_Integer) 0:
#line 1061 "deep_profiling.m"
                case (MR_Integer) 1:
#line 1058 "deep_profiling.m"
                  {
#line 1059 "deep_profiling.m"
                    {
#line 1059 "deep_profiling.m"
                      ll_backend__deep_profiling__deep_prof_wrap_call_4_p_0(ll_backend__deep_profiling__Goal1_13, ll_backend__deep_profiling__Goal_7, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
                    }
#line 1060 "deep_profiling.m"
                    *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 1;
#line 1058 "deep_profiling.m"
                  }
#line 1061 "deep_profiling.m"
                  break;
#line 1061 "deep_profiling.m"
                case (MR_Integer) 2:
#line 1061 "deep_profiling.m"
                case (MR_Integer) 3:
#line 1064 "deep_profiling.m"
                  {
#line 1065 "deep_profiling.m"
                    *ll_backend__deep_profiling__Goal_7 = ll_backend__deep_profiling__Goal1_13;
#line 1066 "deep_profiling.m"
                    *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
#line 1064 "deep_profiling.m"
                    *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81;
#line 1064 "deep_profiling.m"
                  }
#line 1061 "deep_profiling.m"
                  break;
#line 1061 "deep_profiling.m"
              }
#line 1054 "deep_profiling.m"
            }
#line 1053 "deep_profiling.m"
            break;
#line 1053 "deep_profiling.m"
          case (MR_Integer) 1:
#line 1069 "deep_profiling.m"
            {
#line 1069 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Attrs_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
#line 1069 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
#line 1069 "deep_profiling.m"
              MR_Integer ll_backend__deep_profiling__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 3)));
#line 1069 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 4)));
#line 1069 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 5)));
#line 1069 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 6)));
#line 1069 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 7)));
#line 1070 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_103_103;

#line 1070 "deep_profiling.m"
              {
#line 1070 "deep_profiling.m"
                ll_backend__deep_profiling__V_103_103 = parse_tree__prog_data__get_may_call_mercury_1_f_0(ll_backend__deep_profiling__Attrs_35);
              }
#line 1070 "deep_profiling.m"
              ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_103_103 == (MR_Integer) 0);
#line 1073 "deep_profiling.m"
              if (ll_backend__deep_profiling__succeeded)
#line 1071 "deep_profiling.m"
                {
#line 1071 "deep_profiling.m"
                  {
#line 1071 "deep_profiling.m"
                    ll_backend__deep_profiling__deep_prof_wrap_foreign_code_4_p_0(ll_backend__deep_profiling__Goal1_13, ll_backend__deep_profiling__Goal_7, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
                  }
#line 1072 "deep_profiling.m"
                  *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 1;
#line 1071 "deep_profiling.m"
                }
#line 1073 "deep_profiling.m"
              else
#line 1074 "deep_profiling.m"
                {
#line 1074 "deep_profiling.m"
                  *ll_backend__deep_profiling__Goal_7 = ll_backend__deep_profiling__Goal1_13;
#line 1075 "deep_profiling.m"
                  *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
#line 1074 "deep_profiling.m"
                  *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81;
#line 1074 "deep_profiling.m"
                }
#line 1069 "deep_profiling.m"
            }
#line 1053 "deep_profiling.m"
            break;
#line 1053 "deep_profiling.m"
          case (MR_Integer) 2:
#line 1082 "deep_profiling.m"
            {
#line 1082 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__ConjType_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
#line 1082 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Goals0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
#line 1082 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Goals_49;
#line 1082 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalInfo_50;
#line 1082 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalExpr_51;

#line 1083 "deep_profiling.m"
              {
#line 1083 "deep_profiling.m"
                ll_backend__deep_profiling__deep_prof_transform_conj_6_p_0(ll_backend__deep_profiling__ConjType_47, ll_backend__deep_profiling__Goals0_48, &ll_backend__deep_profiling__Goals_49, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
              }
#line 1085 "deep_profiling.m"
              {
#line 1085 "deep_profiling.m"
                hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_50);
              }
#line 1086 "deep_profiling.m"
              {
#line 1086 "deep_profiling.m"
                ll_backend__deep_profiling__GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1086 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_51, 1) = ((MR_Box) (ll_backend__deep_profiling__ConjType_47));
#line 1086 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_51, 2) = ((MR_Box) (ll_backend__deep_profiling__Goals_49));
#line 1086 "deep_profiling.m"
              }
#line 1087 "deep_profiling.m"
              {
#line 1087 "deep_profiling.m"
                MR_Word base;
#line 1087 "deep_profiling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "deep_profiling.m"
                *ll_backend__deep_profiling__Goal_7 = base;
#line 1087 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_51));
#line 1087 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_50));
#line 1087 "deep_profiling.m"
              }
#line 1082 "deep_profiling.m"
            }
#line 1053 "deep_profiling.m"
            break;
#line 1053 "deep_profiling.m"
          case (MR_Integer) 3:
#line 1089 "deep_profiling.m"
            {
#line 1089 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Goals0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
#line 1089 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Goals_108;
#line 1089 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalInfo_109;
#line 1089 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalExpr_110;

#line 1090 "deep_profiling.m"
              {
#line 1090 "deep_profiling.m"
                ll_backend__deep_profiling__deep_prof_transform_disj_5_p_0(ll_backend__deep_profiling__Goals0_107, &ll_backend__deep_profiling__Goals_108, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
              }
#line 1091 "deep_profiling.m"
              {
#line 1091 "deep_profiling.m"
                hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_109);
              }
#line 1092 "deep_profiling.m"
              {
#line 1092 "deep_profiling.m"
                ll_backend__deep_profiling__GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1092 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_110, 1) = ((MR_Box) (ll_backend__deep_profiling__Goals_108));
#line 1092 "deep_profiling.m"
              }
#line 1093 "deep_profiling.m"
              {
#line 1093 "deep_profiling.m"
                MR_Word base;
#line 1093 "deep_profiling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1093 "deep_profiling.m"
                *ll_backend__deep_profiling__Goal_7 = base;
#line 1093 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_110));
#line 1093 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_109));
#line 1093 "deep_profiling.m"
              }
#line 1089 "deep_profiling.m"
            }
#line 1053 "deep_profiling.m"
            break;
#line 1053 "deep_profiling.m"
          case (MR_Integer) 4:
#line 1095 "deep_profiling.m"
            {
#line 1095 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
#line 1095 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__CanFail_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
#line 1095 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Cases0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 3)));
#line 1095 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Cases_55;
#line 1095 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalInfo_111;
#line 1095 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalExpr_112;

#line 1096 "deep_profiling.m"
              {
#line 1096 "deep_profiling.m"
                ll_backend__deep_profiling__deep_prof_transform_switch_5_p_0(ll_backend__deep_profiling__Cases0_54, &ll_backend__deep_profiling__Cases_55, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
              }
#line 1097 "deep_profiling.m"
              {
#line 1097 "deep_profiling.m"
                hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_111);
              }
#line 1098 "deep_profiling.m"
              {
#line 1098 "deep_profiling.m"
                ll_backend__deep_profiling__GoalExpr_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1098 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_52));
#line 1098 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 2) = ((MR_Box) (ll_backend__deep_profiling__CanFail_53));
#line 1098 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 3) = ((MR_Box) (ll_backend__deep_profiling__Cases_55));
#line 1098 "deep_profiling.m"
              }
#line 1099 "deep_profiling.m"
              {
#line 1099 "deep_profiling.m"
                MR_Word base;
#line 1099 "deep_profiling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1099 "deep_profiling.m"
                *ll_backend__deep_profiling__Goal_7 = base;
#line 1099 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_112));
#line 1099 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_111));
#line 1099 "deep_profiling.m"
              }
#line 1095 "deep_profiling.m"
            }
#line 1053 "deep_profiling.m"
            break;
#line 1053 "deep_profiling.m"
          case (MR_Integer) 5:
#line 1125 "deep_profiling.m"
            {
#line 1125 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Reason0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
#line 1125 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__InnerInfo_70;
#line 1125 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__OuterDetism_71;
#line 1125 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__InnerDetism_72;
#line 1125 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
#line 1126 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__SubGoal0_118, (MR_Integer) 0)));

#line 1126 "deep_profiling.m"
              ll_backend__deep_profiling__InnerInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__SubGoal0_118, (MR_Integer) 1)));
#line 1127 "deep_profiling.m"
              {
#line 1127 "deep_profiling.m"
                ll_backend__deep_profiling__OuterDetism_71 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__deep_profiling__GoalInfo1_12);
              }
#line 1128 "deep_profiling.m"
              {
#line 1128 "deep_profiling.m"
                ll_backend__deep_profiling__InnerDetism_72 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__deep_profiling__InnerInfo_70);
              }
#line 1129 "deep_profiling.m"
              ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__InnerDetism_72 == ll_backend__deep_profiling__OuterDetism_71);
#line 9699 "ll_backend.deep_profiling.c"
              if (ll_backend__deep_profiling__succeeded)
#line 9701 "ll_backend.deep_profiling.c"
                {
#line 9703 "ll_backend.deep_profiling.c"
                  MR_Word ll_backend__deep_profiling__V_95_95;
#line 9705 "ll_backend.deep_profiling.c"
                  MR_Word ll_backend__deep_profiling__GoalInfo_117;
#line 9707 "ll_backend.deep_profiling.c"
                  MR_Word ll_backend__deep_profiling__SubGoal_119;
#line 1150 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__FGT_77;
#line 1150 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_76_76;

#line 1150 "deep_profiling.m"
                  ll_backend__deep_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__deep_profiling__Reason0_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1150 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 1150 "deep_profiling.m"
                    {
#line 1150 "deep_profiling.m"
                      ll_backend__deep_profiling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 1)));
#line 1150 "deep_profiling.m"
                      ll_backend__deep_profiling__FGT_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 2)));
#line 1152 "deep_profiling.m"
#line 1152 "deep_profiling.m"
                      switch (ll_backend__deep_profiling__FGT_77) {
#line 1152 "deep_profiling.m"
                        default:
#line 1152 "deep_profiling.m"
                          ll_backend__deep_profiling__succeeded = MR_FALSE;
#line 1152 "deep_profiling.m"
                          break;
#line 1152 "deep_profiling.m"
                        case (MR_Integer) 1:
#line 1151 "deep_profiling.m"
                          ll_backend__deep_profiling__succeeded = MR_TRUE;
#line 1152 "deep_profiling.m"
                          break;
#line 1152 "deep_profiling.m"
                        case (MR_Integer) 2:
#line 1152 "deep_profiling.m"
                          ll_backend__deep_profiling__succeeded = MR_TRUE;
#line 1152 "deep_profiling.m"
                          break;
#line 1152 "deep_profiling.m"
                      }
#line 1150 "deep_profiling.m"
                    }
#line 1161 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 1159 "deep_profiling.m"
                    {
#line 1158 "deep_profiling.m"
                      {
#line 1158 "deep_profiling.m"
                        hlds__goal_util__transform_all_goals_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_1[7], ll_backend__deep_profiling__SubGoal0_118, &ll_backend__deep_profiling__SubGoal_119);
                      }
#line 1160 "deep_profiling.m"
                      *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
#line 1159 "deep_profiling.m"
                      *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81;
#line 1159 "deep_profiling.m"
                    }
#line 1161 "deep_profiling.m"
                  else
#line 1162 "deep_profiling.m"
                    {
#line 1162 "deep_profiling.m"
                      ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__SubGoal0_118, &ll_backend__deep_profiling__SubGoal_119, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
                    }
#line 1165 "deep_profiling.m"
                  {
#line 1165 "deep_profiling.m"
                    hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_117);
                  }
#line 1168 "deep_profiling.m"
                  {
#line 1168 "deep_profiling.m"
                    ll_backend__deep_profiling__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "deep_profiling.m"
                    MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1168 "deep_profiling.m"
                    MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_95_95, 1) = ((MR_Box) (ll_backend__deep_profiling__Reason0_68));
#line 1168 "deep_profiling.m"
                    MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_95_95, 2) = ((MR_Box) (ll_backend__deep_profiling__SubGoal_119));
#line 1168 "deep_profiling.m"
                  }
#line 1168 "deep_profiling.m"
                  {
#line 1168 "deep_profiling.m"
                    MR_Word base;
#line 1168 "deep_profiling.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "deep_profiling.m"
                    *ll_backend__deep_profiling__Goal_7 = base;
#line 1168 "deep_profiling.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__V_95_95));
#line 1168 "deep_profiling.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_117));
#line 1168 "deep_profiling.m"
                  }
#line 9802 "ll_backend.deep_profiling.c"
                }
#line 9804 "ll_backend.deep_profiling.c"
              else
#line 9806 "ll_backend.deep_profiling.c"
                {
#line 1141 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_75_75;

#line 1141 "deep_profiling.m"
                  ll_backend__deep_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__deep_profiling__Reason0_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1141 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 1141 "deep_profiling.m"
                    {
#line 1141 "deep_profiling.m"
                      ll_backend__deep_profiling__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 1)));
#line 9819 "ll_backend.deep_profiling.c"
                      {
#line 9821 "ll_backend.deep_profiling.c"
                        MR_Word ll_backend__deep_profiling__V_129_129;
#line 9823 "ll_backend.deep_profiling.c"
                        MR_Word ll_backend__deep_profiling__GoalInfo_137;
#line 9825 "ll_backend.deep_profiling.c"
                        MR_Word ll_backend__deep_profiling__SubGoal_138;

#line 1162 "deep_profiling.m"
                        {
#line 1162 "deep_profiling.m"
                          ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__SubGoal0_118, &ll_backend__deep_profiling__SubGoal_138, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
                        }
#line 1165 "deep_profiling.m"
                        {
#line 1165 "deep_profiling.m"
                          hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_137);
                        }
#line 1168 "deep_profiling.m"
                        {
#line 1168 "deep_profiling.m"
                          ll_backend__deep_profiling__V_129_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "deep_profiling.m"
                          MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_129_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1168 "deep_profiling.m"
                          MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_2[10])));
#line 1168 "deep_profiling.m"
                          MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_129_129, 2) = ((MR_Box) (ll_backend__deep_profiling__SubGoal_138));
#line 1168 "deep_profiling.m"
                        }
#line 1168 "deep_profiling.m"
                        {
#line 1168 "deep_profiling.m"
                          MR_Word base;
#line 1168 "deep_profiling.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "deep_profiling.m"
                          *ll_backend__deep_profiling__Goal_7 = base;
#line 1168 "deep_profiling.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__V_129_129));
#line 1168 "deep_profiling.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_137));
#line 1168 "deep_profiling.m"
                        }
#line 9864 "ll_backend.deep_profiling.c"
                      }
#line 1141 "deep_profiling.m"
                    }
#line 1141 "deep_profiling.m"
                  else
#line 9870 "ll_backend.deep_profiling.c"
                    {
#line 9872 "ll_backend.deep_profiling.c"
                      MR_Word ll_backend__deep_profiling__InnerGoalInfo_78;
#line 9874 "ll_backend.deep_profiling.c"
                      MR_Word ll_backend__deep_profiling__InnerGoal_79;
#line 9876 "ll_backend.deep_profiling.c"
                      MR_Word ll_backend__deep_profiling__V_91_91;
#line 9878 "ll_backend.deep_profiling.c"
                      MR_Word ll_backend__deep_profiling__V_92_92;
#line 9880 "ll_backend.deep_profiling.c"
                      MR_Word ll_backend__deep_profiling__GoalInfo_152;
#line 9882 "ll_backend.deep_profiling.c"
                      MR_Word ll_backend__deep_profiling__SubGoal_153;
#line 1150 "deep_profiling.m"
                      MR_Word ll_backend__deep_profiling__FGT_142;
#line 1150 "deep_profiling.m"
                      MR_Word ll_backend__deep_profiling__V_140_140;

#line 1150 "deep_profiling.m"
                      ll_backend__deep_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__deep_profiling__Reason0_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1150 "deep_profiling.m"
                      if (ll_backend__deep_profiling__succeeded)
#line 1150 "deep_profiling.m"
                        {
#line 1150 "deep_profiling.m"
                          ll_backend__deep_profiling__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 1)));
#line 1150 "deep_profiling.m"
                          ll_backend__deep_profiling__FGT_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason0_68, (MR_Integer) 2)));
#line 1152 "deep_profiling.m"
#line 1152 "deep_profiling.m"
                          switch (ll_backend__deep_profiling__FGT_142) {
#line 1152 "deep_profiling.m"
                            default:
#line 1152 "deep_profiling.m"
                              ll_backend__deep_profiling__succeeded = MR_FALSE;
#line 1152 "deep_profiling.m"
                              break;
#line 1152 "deep_profiling.m"
                            case (MR_Integer) 1:
#line 1151 "deep_profiling.m"
                              ll_backend__deep_profiling__succeeded = MR_TRUE;
#line 1152 "deep_profiling.m"
                              break;
#line 1152 "deep_profiling.m"
                            case (MR_Integer) 2:
#line 1152 "deep_profiling.m"
                              ll_backend__deep_profiling__succeeded = MR_TRUE;
#line 1152 "deep_profiling.m"
                              break;
#line 1152 "deep_profiling.m"
                          }
#line 1150 "deep_profiling.m"
                        }
#line 1161 "deep_profiling.m"
                      if (ll_backend__deep_profiling__succeeded)
#line 1159 "deep_profiling.m"
                        {
#line 1158 "deep_profiling.m"
                          {
#line 1158 "deep_profiling.m"
                            hlds__goal_util__transform_all_goals_3_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_1[8], ll_backend__deep_profiling__SubGoal0_118, &ll_backend__deep_profiling__SubGoal_153);
                          }
#line 1160 "deep_profiling.m"
                          *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
#line 1159 "deep_profiling.m"
                          *ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82 = ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81;
#line 1159 "deep_profiling.m"
                        }
#line 1161 "deep_profiling.m"
                      else
#line 1162 "deep_profiling.m"
                        {
#line 1162 "deep_profiling.m"
                          ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__SubGoal0_118, &ll_backend__deep_profiling__SubGoal_153, ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
                        }
#line 1165 "deep_profiling.m"
                      {
#line 1165 "deep_profiling.m"
                        hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_152);
                      }
#line 1171 "deep_profiling.m"
                      {
#line 1171 "deep_profiling.m"
                        hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__GoalInfo_152, &ll_backend__deep_profiling__InnerGoalInfo_78);
                      }
#line 1173 "deep_profiling.m"
                      {
#line 1173 "deep_profiling.m"
                        ll_backend__deep_profiling__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "deep_profiling.m"
                        MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1173 "deep_profiling.m"
                        MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_91_91, 1) = ((MR_Box) (ll_backend__deep_profiling__Reason0_68));
#line 1173 "deep_profiling.m"
                        MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_91_91, 2) = ((MR_Box) (ll_backend__deep_profiling__SubGoal_153));
#line 1173 "deep_profiling.m"
                      }
#line 1173 "deep_profiling.m"
                      {
#line 1173 "deep_profiling.m"
                        ll_backend__deep_profiling__InnerGoal_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "deep_profiling.m"
                        MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__InnerGoal_79, 0) = ((MR_Box) (ll_backend__deep_profiling__V_91_91));
#line 1173 "deep_profiling.m"
                        MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__InnerGoal_79, 1) = ((MR_Box) (ll_backend__deep_profiling__InnerGoalInfo_78));
#line 1173 "deep_profiling.m"
                      }
#line 1174 "deep_profiling.m"
                      {
#line 1174 "deep_profiling.m"
                        ll_backend__deep_profiling__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "deep_profiling.m"
                        MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1174 "deep_profiling.m"
                        MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__deep_profiling_scalar_common_2[10])));
#line 1174 "deep_profiling.m"
                        MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_92_92, 2) = ((MR_Box) (ll_backend__deep_profiling__InnerGoal_79));
#line 1174 "deep_profiling.m"
                      }
#line 1174 "deep_profiling.m"
                      {
#line 1174 "deep_profiling.m"
                        MR_Word base;
#line 1174 "deep_profiling.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "deep_profiling.m"
                        *ll_backend__deep_profiling__Goal_7 = base;
#line 1174 "deep_profiling.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__V_92_92));
#line 1174 "deep_profiling.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_152));
#line 1174 "deep_profiling.m"
                      }
#line 10004 "ll_backend.deep_profiling.c"
                    }
#line 10006 "ll_backend.deep_profiling.c"
                }
#line 1125 "deep_profiling.m"
            }
#line 1053 "deep_profiling.m"
            break;
#line 1053 "deep_profiling.m"
          case (MR_Integer) 6:
#line 1107 "deep_profiling.m"
            {
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__IVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 1)));
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Cond0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 2)));
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Then0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 3)));
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Else0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_10, (MR_Integer) 4)));
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Cond_62;
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__AddedImpurityC_63;
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Then_64;
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__AddedImpurityT_65;
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Else_66;
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__AddedImpurityE_67;
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_96_96;
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97_97;
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalInfo_115;
#line 1107 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalExpr_116;

#line 1108 "deep_profiling.m"
              {
#line 1108 "deep_profiling.m"
                ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Cond0_59, &ll_backend__deep_profiling__Cond_62, &ll_backend__deep_profiling__AddedImpurityC_63, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_0_81, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_96_96);
              }
#line 1109 "deep_profiling.m"
              {
#line 1109 "deep_profiling.m"
                ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Then0_60, &ll_backend__deep_profiling__Then_64, &ll_backend__deep_profiling__AddedImpurityT_65, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_96_96, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97_97);
              }
#line 1110 "deep_profiling.m"
              {
#line 1110 "deep_profiling.m"
                ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Else0_61, &ll_backend__deep_profiling__Else_66, &ll_backend__deep_profiling__AddedImpurityE_67, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_97_97, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_82);
              }
#line 1112 "deep_profiling.m"
              ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__AddedImpurityC_63 == (MR_Integer) 1);
#line 1113 "deep_profiling.m"
              if (!(ll_backend__deep_profiling__succeeded))
#line 1113 "deep_profiling.m"
                {
#line 1113 "deep_profiling.m"
                  ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__AddedImpurityT_65 == (MR_Integer) 1);
#line 1113 "deep_profiling.m"
                  if (!(ll_backend__deep_profiling__succeeded))
#line 1114 "deep_profiling.m"
                    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__AddedImpurityE_67 == (MR_Integer) 1);
#line 1113 "deep_profiling.m"
                }
#line 1118 "deep_profiling.m"
              if (ll_backend__deep_profiling__succeeded)
#line 1117 "deep_profiling.m"
                *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 1;
#line 1118 "deep_profiling.m"
              else
#line 1119 "deep_profiling.m"
                *ll_backend__deep_profiling__AddedImpurity_8 = (MR_Integer) 0;
#line 1121 "deep_profiling.m"
              {
#line 1121 "deep_profiling.m"
                hlds__hlds_goal__add_impurity_if_needed_3_p_0(*ll_backend__deep_profiling__AddedImpurity_8, ll_backend__deep_profiling__GoalInfo1_12, &ll_backend__deep_profiling__GoalInfo_115);
              }
#line 1122 "deep_profiling.m"
              {
#line 1122 "deep_profiling.m"
                ll_backend__deep_profiling__GoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1122 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_116, 1) = ((MR_Box) (ll_backend__deep_profiling__IVars_58));
#line 1122 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_116, 2) = ((MR_Box) (ll_backend__deep_profiling__Cond_62));
#line 1122 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_116, 3) = ((MR_Box) (ll_backend__deep_profiling__Then_64));
#line 1122 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_116, 4) = ((MR_Box) (ll_backend__deep_profiling__Else_66));
#line 1122 "deep_profiling.m"
              }
#line 1123 "deep_profiling.m"
              {
#line 1123 "deep_profiling.m"
                MR_Word base;
#line 1123 "deep_profiling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "deep_profiling.m"
                *ll_backend__deep_profiling__Goal_7 = base;
#line 1123 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_116));
#line 1123 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_115));
#line 1123 "deep_profiling.m"
              }
#line 1107 "deep_profiling.m"
            }
#line 1053 "deep_profiling.m"
            break;
#line 1053 "deep_profiling.m"
          case (MR_Integer) 7:
#line 1177 "deep_profiling.m"
            {
#line 1178 "deep_profiling.m"
              {
#line 1178 "deep_profiling.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.deep_prof_transform_goal\'/5", (MR_String) "shorthand");
#line 1178 "deep_profiling.m"
                return;
              }
#line 1177 "deep_profiling.m"
            }
#line 1053 "deep_profiling.m"
            break;
#line 1053 "deep_profiling.m"
        }
#line 1053 "deep_profiling.m"
        break;
#line 1053 "deep_profiling.m"
    }
#line 1036 "deep_profiling.m"
  }
#line 1033 "deep_profiling.m"
}

#line 941 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__build_non_proc_body_10_p_0(
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_11,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TopCSD_12,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MiddleCSD_13,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ProcStaticVar_14,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MaybeOldActivationPtr_15,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__NewOutermostProcDyn_16,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__GoalInfo0_17,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_18,
#line 941 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_19,
#line 941 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_20)
#line 941 "deep_profiling.m"
{
#line 947 "deep_profiling.m"
  {
#line 947 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CallPortCode_23;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ExitPortCode_24;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__FailPortCode_25;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__RedoPortCode0_26;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__NewNonlocals_27;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__RedoPortExpr_28;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__RedoPortGoalInfo0_29;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__RedoPortGoalInfo_30;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__RedoPortCode_31;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Detism0_32;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CanFail_33;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Detism_35;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo1_36;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ExitRedoNonLocals_37;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ExitRedoGoalInfo_38;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CallExitRedoGoalInfo_39;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo_40;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalExpr_41;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_121_121;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_122_122;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_123_123;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_124_124;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_125_125;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_126_126;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_127_127;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_128_128;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_130_130;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_131_131;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_132_132;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_133_133;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_134_134;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_135_135;
#line 947 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_138_138;
#line 997 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_34_34;

#line 967 "deep_profiling.m"
    if ((ll_backend__deep_profiling__MaybeOldActivationPtr_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 968 "deep_profiling.m"
      {
#line 968 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_44_44;
#line 968 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_46_46;
#line 968 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_47_47;
#line 968 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_48_48;
#line 968 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_56_56;
#line 968 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_58_58;
#line 968 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CallPortCode0_141;

#line 970 "deep_profiling.m"
        {
#line 970 "deep_profiling.m"
          ll_backend__deep_profiling__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_48_48, 0) = ((MR_Box) (ll_backend__deep_profiling__NewOutermostProcDyn_16));
#line 970 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 970 "deep_profiling.m"
        }
#line 970 "deep_profiling.m"
        {
#line 970 "deep_profiling.m"
          ll_backend__deep_profiling__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_47_47, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_13));
#line 970 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_47_47, 1) = ((MR_Box) (ll_backend__deep_profiling__V_48_48));
#line 970 "deep_profiling.m"
        }
#line 970 "deep_profiling.m"
        {
#line 970 "deep_profiling.m"
          ll_backend__deep_profiling__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_46_46, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_12));
#line 970 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_46_46, 1) = ((MR_Box) (ll_backend__deep_profiling__V_47_47));
#line 970 "deep_profiling.m"
        }
#line 970 "deep_profiling.m"
        {
#line 970 "deep_profiling.m"
          ll_backend__deep_profiling__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_44_44, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStaticVar_14));
#line 970 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_44_44, 1) = ((MR_Box) (ll_backend__deep_profiling__V_46_46));
#line 970 "deep_profiling.m"
        }
#line 969 "deep_profiling.m"
        {
#line 969 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_call_port_code_ac", (MR_Integer) 4, ll_backend__deep_profiling__V_44_44, ll_backend__deep_profiling__V_46_46, &ll_backend__deep_profiling__CallPortCode0_141);
        }
#line 973 "deep_profiling.m"
        {
#line 973 "deep_profiling.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, ll_backend__deep_profiling__CallPortCode0_141, &ll_backend__deep_profiling__CallPortCode_23);
        }
#line 976 "deep_profiling.m"
        {
#line 976 "deep_profiling.m"
          ll_backend__deep_profiling__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_58_58, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_13));
#line 976 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 976 "deep_profiling.m"
        }
#line 976 "deep_profiling.m"
        {
#line 976 "deep_profiling.m"
          ll_backend__deep_profiling__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_56_56, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_12));
#line 976 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_56_56, 1) = ((MR_Box) (ll_backend__deep_profiling__V_58_58));
#line 976 "deep_profiling.m"
        }
#line 975 "deep_profiling.m"
        {
#line 975 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_exit_port_code_ac", (MR_Integer) 2, ll_backend__deep_profiling__V_56_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ExitPortCode_24);
        }
#line 977 "deep_profiling.m"
        {
#line 977 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_fail_port_code_ac", (MR_Integer) 2, ll_backend__deep_profiling__V_56_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 7, &ll_backend__deep_profiling__FailPortCode_25);
        }
#line 979 "deep_profiling.m"
        {
#line 979 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_redo_port_code_ac", (MR_Integer) 2, ll_backend__deep_profiling__V_47_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 7, &ll_backend__deep_profiling__RedoPortCode0_26);
        }
#line 982 "deep_profiling.m"
        {
#line 982 "deep_profiling.m"
          ll_backend__deep_profiling__NewNonlocals_27 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__V_56_56);
        }
#line 968 "deep_profiling.m"
      }
#line 967 "deep_profiling.m"
    else
#line 949 "deep_profiling.m"
      {
#line 949 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__OldOutermostProcDyn2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeOldActivationPtr_15, (MR_Integer) 0)));
#line 949 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CallPortCode0_22;
#line 949 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_79_79;
#line 949 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_81_81;
#line 949 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_82_82;
#line 949 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_83_83;
#line 949 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_84_84;
#line 949 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_93_93;
#line 949 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_95_95;
#line 949 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_96_96;
#line 949 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_108_108;

#line 952 "deep_profiling.m"
        {
#line 952 "deep_profiling.m"
          ll_backend__deep_profiling__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_84_84, 0) = ((MR_Box) (ll_backend__deep_profiling__NewOutermostProcDyn_16));
#line 952 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 952 "deep_profiling.m"
        }
#line 952 "deep_profiling.m"
        {
#line 952 "deep_profiling.m"
          ll_backend__deep_profiling__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_83_83, 0) = ((MR_Box) (ll_backend__deep_profiling__OldOutermostProcDyn2_21));
#line 952 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_83_83, 1) = ((MR_Box) (ll_backend__deep_profiling__V_84_84));
#line 952 "deep_profiling.m"
        }
#line 951 "deep_profiling.m"
        {
#line 951 "deep_profiling.m"
          ll_backend__deep_profiling__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_82_82, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_13));
#line 951 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_82_82, 1) = ((MR_Box) (ll_backend__deep_profiling__V_83_83));
#line 951 "deep_profiling.m"
        }
#line 951 "deep_profiling.m"
        {
#line 951 "deep_profiling.m"
          ll_backend__deep_profiling__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_81_81, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_12));
#line 951 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_81_81, 1) = ((MR_Box) (ll_backend__deep_profiling__V_82_82));
#line 951 "deep_profiling.m"
        }
#line 951 "deep_profiling.m"
        {
#line 951 "deep_profiling.m"
          ll_backend__deep_profiling__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_79_79, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStaticVar_14));
#line 951 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_79_79, 1) = ((MR_Box) (ll_backend__deep_profiling__V_81_81));
#line 951 "deep_profiling.m"
        }
#line 950 "deep_profiling.m"
        {
#line 950 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_call_port_code_sr", (MR_Integer) 5, ll_backend__deep_profiling__V_79_79, ll_backend__deep_profiling__V_81_81, &ll_backend__deep_profiling__CallPortCode0_22);
        }
#line 955 "deep_profiling.m"
        {
#line 955 "deep_profiling.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, ll_backend__deep_profiling__CallPortCode0_22, &ll_backend__deep_profiling__CallPortCode_23);
        }
#line 958 "deep_profiling.m"
        {
#line 958 "deep_profiling.m"
          ll_backend__deep_profiling__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_96_96, 0) = ((MR_Box) (ll_backend__deep_profiling__OldOutermostProcDyn2_21));
#line 958 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "deep_profiling.m"
        }
#line 958 "deep_profiling.m"
        {
#line 958 "deep_profiling.m"
          ll_backend__deep_profiling__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_95_95, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_13));
#line 958 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_95_95, 1) = ((MR_Box) (ll_backend__deep_profiling__V_96_96));
#line 958 "deep_profiling.m"
        }
#line 958 "deep_profiling.m"
        {
#line 958 "deep_profiling.m"
          ll_backend__deep_profiling__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_93_93, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_12));
#line 958 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_93_93, 1) = ((MR_Box) (ll_backend__deep_profiling__V_95_95));
#line 958 "deep_profiling.m"
        }
#line 957 "deep_profiling.m"
        {
#line 957 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_exit_port_code_sr", (MR_Integer) 3, ll_backend__deep_profiling__V_93_93, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ExitPortCode_24);
        }
#line 960 "deep_profiling.m"
        {
#line 960 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_fail_port_code_sr", (MR_Integer) 3, ll_backend__deep_profiling__V_93_93, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 7, &ll_backend__deep_profiling__FailPortCode_25);
        }
#line 964 "deep_profiling.m"
        {
#line 964 "deep_profiling.m"
          ll_backend__deep_profiling__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_108_108, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_13));
#line 964 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_108_108, 1) = ((MR_Box) (ll_backend__deep_profiling__V_84_84));
#line 964 "deep_profiling.m"
        }
#line 963 "deep_profiling.m"
        {
#line 963 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_11, (MR_String) "non_redo_port_code_sr", (MR_Integer) 2, ll_backend__deep_profiling__V_108_108, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 7, &ll_backend__deep_profiling__RedoPortCode0_26);
        }
#line 966 "deep_profiling.m"
        {
#line 966 "deep_profiling.m"
          ll_backend__deep_profiling__NewNonlocals_27 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__V_93_93);
        }
#line 949 "deep_profiling.m"
      }
#line 985 "deep_profiling.m"
    ll_backend__deep_profiling__RedoPortExpr_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RedoPortCode0_26, (MR_Integer) 0)));
#line 985 "deep_profiling.m"
    ll_backend__deep_profiling__RedoPortGoalInfo0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RedoPortCode0_26, (MR_Integer) 1)));
#line 986 "deep_profiling.m"
    {
#line 986 "deep_profiling.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, ll_backend__deep_profiling__RedoPortGoalInfo0_29, &ll_backend__deep_profiling__RedoPortGoalInfo_30);
    }
#line 988 "deep_profiling.m"
    {
#line 988 "deep_profiling.m"
      ll_backend__deep_profiling__RedoPortCode_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 988 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RedoPortCode_31, 0) = ((MR_Box) (ll_backend__deep_profiling__RedoPortExpr_28));
#line 988 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RedoPortCode_31, 1) = ((MR_Box) (ll_backend__deep_profiling__RedoPortGoalInfo_30));
#line 988 "deep_profiling.m"
    }
#line 996 "deep_profiling.m"
    {
#line 996 "deep_profiling.m"
      ll_backend__deep_profiling__Detism0_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__deep_profiling__GoalInfo0_17);
    }
#line 997 "deep_profiling.m"
    {
#line 997 "deep_profiling.m"
      parse_tree__prog_data__determinism_components_3_p_0(ll_backend__deep_profiling__Detism0_32, &ll_backend__deep_profiling__CanFail_33, &ll_backend__deep_profiling__V_34_34);
    }
#line 998 "deep_profiling.m"
    {
#line 998 "deep_profiling.m"
      parse_tree__prog_data__determinism_components_3_p_1(&ll_backend__deep_profiling__Detism_35, ll_backend__deep_profiling__CanFail_33, (MR_Integer) 3);
    }
#line 999 "deep_profiling.m"
    {
#line 999 "deep_profiling.m"
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(ll_backend__deep_profiling__Detism_35, ll_backend__deep_profiling__GoalInfo0_17, &ll_backend__deep_profiling__GoalInfo1_36);
    }
#line 1001 "deep_profiling.m"
    {
#line 1001 "deep_profiling.m"
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__NewOutermostProcDyn_16, ll_backend__deep_profiling__NewNonlocals_27, &ll_backend__deep_profiling__ExitRedoNonLocals_37);
    }
#line 1002 "deep_profiling.m"
    {
#line 1002 "deep_profiling.m"
      ll_backend__deep_profiling__ExitRedoGoalInfo_38 = hlds__hlds_goal__impure_reachable_init_goal_info_2_f_0(ll_backend__deep_profiling__ExitRedoNonLocals_37, (MR_Integer) 2);
    }
#line 1005 "deep_profiling.m"
    {
#line 1005 "deep_profiling.m"
      ll_backend__deep_profiling__CallExitRedoGoalInfo_39 = hlds__hlds_goal__goal_info_add_nonlocals_make_impure_2_f_0(ll_backend__deep_profiling__GoalInfo1_36, ll_backend__deep_profiling__ExitRedoNonLocals_37);
    }
#line 1008 "deep_profiling.m"
    {
#line 1008 "deep_profiling.m"
      hlds__hlds_goal__make_impure_2_p_0(ll_backend__deep_profiling__GoalInfo1_36, &ll_backend__deep_profiling__GoalInfo_40);
    }
#line 1021 "deep_profiling.m"
    {
#line 1021 "deep_profiling.m"
      ll_backend__deep_profiling__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_135_135, 0) = ((MR_Box) (ll_backend__deep_profiling__RedoPortCode_31));
#line 1021 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "deep_profiling.m"
    }
#line 1019 "deep_profiling.m"
    {
#line 1019 "deep_profiling.m"
      ll_backend__deep_profiling__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_134_134, 0) = ((MR_Box) (ll_backend__deep_profiling__ExitPortCode_24));
#line 1019 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_134_134, 1) = ((MR_Box) (ll_backend__deep_profiling__V_135_135));
#line 1019 "deep_profiling.m"
    }
#line 1018 "deep_profiling.m"
    {
#line 1018 "deep_profiling.m"
      ll_backend__deep_profiling__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1018 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_133_133, 1) = ((MR_Box) (ll_backend__deep_profiling__V_134_134));
#line 1018 "deep_profiling.m"
    }
#line 1017 "deep_profiling.m"
    {
#line 1017 "deep_profiling.m"
      ll_backend__deep_profiling__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_132_132, 0) = ((MR_Box) (ll_backend__deep_profiling__V_133_133));
#line 1017 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_132_132, 1) = ((MR_Box) (ll_backend__deep_profiling__ExitRedoGoalInfo_38));
#line 1017 "deep_profiling.m"
    }
#line 1023 "deep_profiling.m"
    {
#line 1023 "deep_profiling.m"
      ll_backend__deep_profiling__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_131_131, 0) = ((MR_Box) (ll_backend__deep_profiling__V_132_132));
#line 1023 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "deep_profiling.m"
    }
#line 1016 "deep_profiling.m"
    {
#line 1016 "deep_profiling.m"
      ll_backend__deep_profiling__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_130_130, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_19));
#line 1016 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_130_130, 1) = ((MR_Box) (ll_backend__deep_profiling__V_131_131));
#line 1016 "deep_profiling.m"
    }
#line 1015 "deep_profiling.m"
    {
#line 1015 "deep_profiling.m"
      ll_backend__deep_profiling__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1015 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_128_128, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1015 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_128_128, 2) = ((MR_Box) (ll_backend__deep_profiling__V_130_130));
#line 1015 "deep_profiling.m"
    }
#line 1014 "deep_profiling.m"
    {
#line 1014 "deep_profiling.m"
      ll_backend__deep_profiling__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1014 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_127_127, 0) = ((MR_Box) (ll_backend__deep_profiling__V_128_128));
#line 1014 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_127_127, 1) = ((MR_Box) (ll_backend__deep_profiling__CallExitRedoGoalInfo_39));
#line 1014 "deep_profiling.m"
    }
#line 1026 "deep_profiling.m"
    {
#line 1026 "deep_profiling.m"
      ll_backend__deep_profiling__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_138_138, 0) = ((MR_Box) (ll_backend__deep_profiling__FailPortCode_25));
#line 1026 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1026 "deep_profiling.m"
    }
#line 1024 "deep_profiling.m"
    {
#line 1024 "deep_profiling.m"
      ll_backend__deep_profiling__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_126_126, 0) = ((MR_Box) (ll_backend__deep_profiling__V_127_127));
#line 1024 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_126_126, 1) = ((MR_Box) (ll_backend__deep_profiling__V_138_138));
#line 1024 "deep_profiling.m"
    }
#line 1013 "deep_profiling.m"
    {
#line 1013 "deep_profiling.m"
      ll_backend__deep_profiling__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1013 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_125_125, 1) = ((MR_Box) (ll_backend__deep_profiling__V_126_126));
#line 1013 "deep_profiling.m"
    }
#line 1012 "deep_profiling.m"
    {
#line 1012 "deep_profiling.m"
      ll_backend__deep_profiling__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_124_124, 0) = ((MR_Box) (ll_backend__deep_profiling__V_125_125));
#line 1012 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_124_124, 1) = ((MR_Box) (ll_backend__deep_profiling__CallExitRedoGoalInfo_39));
#line 1012 "deep_profiling.m"
    }
#line 1028 "deep_profiling.m"
    {
#line 1028 "deep_profiling.m"
      ll_backend__deep_profiling__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_123_123, 0) = ((MR_Box) (ll_backend__deep_profiling__V_124_124));
#line 1028 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1028 "deep_profiling.m"
    }
#line 1011 "deep_profiling.m"
    {
#line 1011 "deep_profiling.m"
      ll_backend__deep_profiling__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_122_122, 0) = ((MR_Box) (ll_backend__deep_profiling__CallPortCode_23));
#line 1011 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_122_122, 1) = ((MR_Box) (ll_backend__deep_profiling__V_123_123));
#line 1011 "deep_profiling.m"
    }
#line 1010 "deep_profiling.m"
    {
#line 1010 "deep_profiling.m"
      ll_backend__deep_profiling__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_121_121, 0) = ((MR_Box) (ll_backend__deep_profiling__BindProcStaticVarGoal_18));
#line 1010 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_121_121, 1) = ((MR_Box) (ll_backend__deep_profiling__V_122_122));
#line 1010 "deep_profiling.m"
    }
#line 1009 "deep_profiling.m"
    {
#line 1009 "deep_profiling.m"
      ll_backend__deep_profiling__GoalExpr_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1009 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1009 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_41, 2) = ((MR_Box) (ll_backend__deep_profiling__V_121_121));
#line 1009 "deep_profiling.m"
    }
#line 1029 "deep_profiling.m"
    {
#line 1029 "deep_profiling.m"
      MR_Word base;
#line 1029 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "deep_profiling.m"
      *ll_backend__deep_profiling__Goal_20 = base;
#line 1029 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_41));
#line 1029 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_40));
#line 1029 "deep_profiling.m"
    }
#line 947 "deep_profiling.m"
  }
#line 941 "deep_profiling.m"
}

#line 890 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__build_semi_proc_body_9_p_0(
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_10,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TopCSD_11,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MiddleCSD_12,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ProcStaticVar_13,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MaybeActivationPtr_14,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__GoalInfo0_15,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_16,
#line 890 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_17,
#line 890 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_18)
#line 890 "deep_profiling.m"
{
#line 895 "deep_profiling.m"
  {
#line 895 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CallPortCode_21;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ExitPortCode_22;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__FailPortCode_23;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__NewNonlocals_24;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ExitConjGoalInfo_25;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo_26;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalExpr_27;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_86_86;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_87_87;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_88_88;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_89_89;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_90_90;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_91_91;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_92_92;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_93_93;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_95_95;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_96_96;
#line 895 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_98_98;

#line 910 "deep_profiling.m"
    if ((ll_backend__deep_profiling__MaybeActivationPtr_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 911 "deep_profiling.m"
      {
#line 911 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_30_30;
#line 911 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_32_32;
#line 911 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_33_33;
#line 911 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CallPortCode0_101;

#line 913 "deep_profiling.m"
        {
#line 913 "deep_profiling.m"
          ll_backend__deep_profiling__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_33_33, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_12));
#line 913 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "deep_profiling.m"
        }
#line 913 "deep_profiling.m"
        {
#line 913 "deep_profiling.m"
          ll_backend__deep_profiling__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_32_32, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_11));
#line 913 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_32_32, 1) = ((MR_Box) (ll_backend__deep_profiling__V_33_33));
#line 913 "deep_profiling.m"
        }
#line 913 "deep_profiling.m"
        {
#line 913 "deep_profiling.m"
          ll_backend__deep_profiling__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_30_30, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStaticVar_13));
#line 913 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_30_30, 1) = ((MR_Box) (ll_backend__deep_profiling__V_32_32));
#line 913 "deep_profiling.m"
        }
#line 912 "deep_profiling.m"
        {
#line 912 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "semi_call_port_code_ac", (MR_Integer) 3, ll_backend__deep_profiling__V_30_30, ll_backend__deep_profiling__V_32_32, &ll_backend__deep_profiling__CallPortCode0_101);
        }
#line 915 "deep_profiling.m"
        {
#line 915 "deep_profiling.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, ll_backend__deep_profiling__CallPortCode0_101, &ll_backend__deep_profiling__CallPortCode_21);
        }
#line 917 "deep_profiling.m"
        {
#line 917 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "semi_exit_port_code_ac", (MR_Integer) 2, ll_backend__deep_profiling__V_32_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ExitPortCode_22);
        }
#line 919 "deep_profiling.m"
        {
#line 919 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "semi_fail_port_code_ac", (MR_Integer) 2, ll_backend__deep_profiling__V_32_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 7, &ll_backend__deep_profiling__FailPortCode_23);
        }
#line 921 "deep_profiling.m"
        {
#line 921 "deep_profiling.m"
          ll_backend__deep_profiling__NewNonlocals_24 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__V_32_32);
        }
#line 911 "deep_profiling.m"
      }
#line 910 "deep_profiling.m"
    else
#line 897 "deep_profiling.m"
      {
#line 897 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__ActivationPtr1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeActivationPtr_14, (MR_Integer) 0)));
#line 897 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CallPortCode0_20;
#line 897 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_56_56;
#line 897 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_58_58;
#line 897 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_59_59;
#line 897 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_60_60;

#line 899 "deep_profiling.m"
        {
#line 899 "deep_profiling.m"
          ll_backend__deep_profiling__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_60_60, 0) = ((MR_Box) (ll_backend__deep_profiling__ActivationPtr1_19));
#line 899 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 899 "deep_profiling.m"
        }
#line 899 "deep_profiling.m"
        {
#line 899 "deep_profiling.m"
          ll_backend__deep_profiling__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_59_59, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_12));
#line 899 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_59_59, 1) = ((MR_Box) (ll_backend__deep_profiling__V_60_60));
#line 899 "deep_profiling.m"
        }
#line 899 "deep_profiling.m"
        {
#line 899 "deep_profiling.m"
          ll_backend__deep_profiling__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_58_58, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_11));
#line 899 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_58_58, 1) = ((MR_Box) (ll_backend__deep_profiling__V_59_59));
#line 899 "deep_profiling.m"
        }
#line 899 "deep_profiling.m"
        {
#line 899 "deep_profiling.m"
          ll_backend__deep_profiling__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_56_56, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStaticVar_13));
#line 899 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_56_56, 1) = ((MR_Box) (ll_backend__deep_profiling__V_58_58));
#line 899 "deep_profiling.m"
        }
#line 898 "deep_profiling.m"
        {
#line 898 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "semi_call_port_code_sr", (MR_Integer) 4, ll_backend__deep_profiling__V_56_56, ll_backend__deep_profiling__V_58_58, &ll_backend__deep_profiling__CallPortCode0_20);
        }
#line 901 "deep_profiling.m"
        {
#line 901 "deep_profiling.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, ll_backend__deep_profiling__CallPortCode0_20, &ll_backend__deep_profiling__CallPortCode_21);
        }
#line 903 "deep_profiling.m"
        {
#line 903 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "semi_exit_port_code_sr", (MR_Integer) 3, ll_backend__deep_profiling__V_58_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ExitPortCode_22);
        }
#line 905 "deep_profiling.m"
        {
#line 905 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "semi_fail_port_code_sr", (MR_Integer) 3, ll_backend__deep_profiling__V_58_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 7, &ll_backend__deep_profiling__FailPortCode_23);
        }
#line 909 "deep_profiling.m"
        {
#line 909 "deep_profiling.m"
          ll_backend__deep_profiling__NewNonlocals_24 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__V_58_58);
        }
#line 897 "deep_profiling.m"
      }
#line 924 "deep_profiling.m"
    {
#line 924 "deep_profiling.m"
      ll_backend__deep_profiling__ExitConjGoalInfo_25 = hlds__hlds_goal__goal_info_add_nonlocals_make_impure_2_f_0(ll_backend__deep_profiling__GoalInfo0_15, ll_backend__deep_profiling__NewNonlocals_24);
    }
#line 927 "deep_profiling.m"
    {
#line 927 "deep_profiling.m"
      hlds__hlds_goal__make_impure_2_p_0(ll_backend__deep_profiling__GoalInfo0_15, &ll_backend__deep_profiling__GoalInfo_26);
    }
#line 933 "deep_profiling.m"
    {
#line 933 "deep_profiling.m"
      ll_backend__deep_profiling__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_96_96, 0) = ((MR_Box) (ll_backend__deep_profiling__ExitPortCode_22));
#line 933 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "deep_profiling.m"
    }
#line 933 "deep_profiling.m"
    {
#line 933 "deep_profiling.m"
      ll_backend__deep_profiling__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_95_95, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_17));
#line 933 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_95_95, 1) = ((MR_Box) (ll_backend__deep_profiling__V_96_96));
#line 933 "deep_profiling.m"
    }
#line 933 "deep_profiling.m"
    {
#line 933 "deep_profiling.m"
      ll_backend__deep_profiling__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 933 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 933 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_93_93, 1) = ((MR_Box) ((MR_Integer) 0));
#line 933 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_93_93, 2) = ((MR_Box) (ll_backend__deep_profiling__V_95_95));
#line 933 "deep_profiling.m"
    }
#line 933 "deep_profiling.m"
    {
#line 933 "deep_profiling.m"
      ll_backend__deep_profiling__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 933 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_92_92, 0) = ((MR_Box) (ll_backend__deep_profiling__V_93_93));
#line 933 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_92_92, 1) = ((MR_Box) (ll_backend__deep_profiling__ExitConjGoalInfo_25));
#line 933 "deep_profiling.m"
    }
#line 936 "deep_profiling.m"
    {
#line 936 "deep_profiling.m"
      ll_backend__deep_profiling__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_98_98, 0) = ((MR_Box) (ll_backend__deep_profiling__FailPortCode_23));
#line 936 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "deep_profiling.m"
    }
#line 934 "deep_profiling.m"
    {
#line 934 "deep_profiling.m"
      ll_backend__deep_profiling__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_91_91, 0) = ((MR_Box) (ll_backend__deep_profiling__V_92_92));
#line 934 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_91_91, 1) = ((MR_Box) (ll_backend__deep_profiling__V_98_98));
#line 934 "deep_profiling.m"
    }
#line 932 "deep_profiling.m"
    {
#line 932 "deep_profiling.m"
      ll_backend__deep_profiling__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 932 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__V_90_90, 1) = ((MR_Box) (ll_backend__deep_profiling__V_91_91));
#line 932 "deep_profiling.m"
    }
#line 931 "deep_profiling.m"
    {
#line 931 "deep_profiling.m"
      ll_backend__deep_profiling__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 931 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_89_89, 0) = ((MR_Box) (ll_backend__deep_profiling__V_90_90));
#line 931 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_89_89, 1) = ((MR_Box) (ll_backend__deep_profiling__ExitConjGoalInfo_25));
#line 931 "deep_profiling.m"
    }
#line 938 "deep_profiling.m"
    {
#line 938 "deep_profiling.m"
      ll_backend__deep_profiling__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_88_88, 0) = ((MR_Box) (ll_backend__deep_profiling__V_89_89));
#line 938 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "deep_profiling.m"
    }
#line 930 "deep_profiling.m"
    {
#line 930 "deep_profiling.m"
      ll_backend__deep_profiling__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_87_87, 0) = ((MR_Box) (ll_backend__deep_profiling__CallPortCode_21));
#line 930 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_87_87, 1) = ((MR_Box) (ll_backend__deep_profiling__V_88_88));
#line 930 "deep_profiling.m"
    }
#line 929 "deep_profiling.m"
    {
#line 929 "deep_profiling.m"
      ll_backend__deep_profiling__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_86_86, 0) = ((MR_Box) (ll_backend__deep_profiling__BindProcStaticVarGoal_16));
#line 929 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_86_86, 1) = ((MR_Box) (ll_backend__deep_profiling__V_87_87));
#line 929 "deep_profiling.m"
    }
#line 928 "deep_profiling.m"
    {
#line 928 "deep_profiling.m"
      ll_backend__deep_profiling__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 928 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 928 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 928 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_27, 2) = ((MR_Box) (ll_backend__deep_profiling__V_86_86));
#line 928 "deep_profiling.m"
    }
#line 939 "deep_profiling.m"
    {
#line 939 "deep_profiling.m"
      MR_Word base;
#line 939 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 939 "deep_profiling.m"
      *ll_backend__deep_profiling__Goal_18 = base;
#line 939 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_27));
#line 939 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_26));
#line 939 "deep_profiling.m"
    }
#line 895 "deep_profiling.m"
  }
#line 890 "deep_profiling.m"
}

#line 850 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__build_det_proc_body_9_p_0(
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_10,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TopCSD_11,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MiddleCSD_12,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ProcStaticVar_13,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MaybeActivationPtr_14,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__GoalInfo0_15,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_16,
#line 850 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_17,
#line 850 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_18)
#line 850 "deep_profiling.m"
{
#line 855 "deep_profiling.m"
  {
#line 855 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 855 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CallPortCode_21;
#line 855 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ExitPortCode_22;
#line 855 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo_23;
#line 855 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalExpr_24;
#line 855 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_61_61;
#line 855 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_62_62;
#line 855 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_63_63;
#line 855 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_64_64;

#line 865 "deep_profiling.m"
    if ((ll_backend__deep_profiling__MaybeActivationPtr_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "deep_profiling.m"
      {
#line 866 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_27_27;
#line 866 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_29_29;
#line 866 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_30_30;
#line 866 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CallPortCode0_66;
#line 866 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_73_73;

#line 868 "deep_profiling.m"
        {
#line 868 "deep_profiling.m"
          ll_backend__deep_profiling__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_30_30, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_12));
#line 868 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 868 "deep_profiling.m"
        }
#line 868 "deep_profiling.m"
        {
#line 868 "deep_profiling.m"
          ll_backend__deep_profiling__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_29_29, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_11));
#line 868 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_29_29, 1) = ((MR_Box) (ll_backend__deep_profiling__V_30_30));
#line 868 "deep_profiling.m"
        }
#line 868 "deep_profiling.m"
        {
#line 868 "deep_profiling.m"
          ll_backend__deep_profiling__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_27_27, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStaticVar_13));
#line 868 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_27_27, 1) = ((MR_Box) (ll_backend__deep_profiling__V_29_29));
#line 868 "deep_profiling.m"
        }
#line 1783 "deep_profiling.m"
        {
#line 1783 "deep_profiling.m"
          ll_backend__deep_profiling__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1783 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_73_73, 0) = ((MR_Box) (ll_backend__deep_profiling__V_29_29));
#line 1783 "deep_profiling.m"
        }
#line 1783 "deep_profiling.m"
        {
#line 1783 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "det_call_port_code_ac", (MR_Integer) 3, ll_backend__deep_profiling__V_27_27, ll_backend__deep_profiling__V_73_73, (MR_Integer) 0, &ll_backend__deep_profiling__CallPortCode0_66);
        }
#line 870 "deep_profiling.m"
        {
#line 870 "deep_profiling.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, ll_backend__deep_profiling__CallPortCode0_66, &ll_backend__deep_profiling__CallPortCode_21);
        }
#line 1783 "deep_profiling.m"
        {
#line 1783 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "det_exit_port_code_ac", (MR_Integer) 2, ll_backend__deep_profiling__V_29_29, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__deep_profiling_scalar_common_6[0]), (MR_Integer) 0, &ll_backend__deep_profiling__ExitPortCode_22);
        }
#line 866 "deep_profiling.m"
      }
#line 865 "deep_profiling.m"
    else
#line 857 "deep_profiling.m"
      {
#line 857 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__ActivationPtr1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeActivationPtr_14, (MR_Integer) 0)));
#line 857 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__CallPortCode0_20;
#line 857 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_43_43;
#line 857 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_45_45;
#line 857 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_46_46;
#line 857 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_47_47;
#line 857 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_89_89;

#line 859 "deep_profiling.m"
        {
#line 859 "deep_profiling.m"
          ll_backend__deep_profiling__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_47_47, 0) = ((MR_Box) (ll_backend__deep_profiling__ActivationPtr1_19));
#line 859 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 859 "deep_profiling.m"
        }
#line 859 "deep_profiling.m"
        {
#line 859 "deep_profiling.m"
          ll_backend__deep_profiling__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_46_46, 0) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_12));
#line 859 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_46_46, 1) = ((MR_Box) (ll_backend__deep_profiling__V_47_47));
#line 859 "deep_profiling.m"
        }
#line 859 "deep_profiling.m"
        {
#line 859 "deep_profiling.m"
          ll_backend__deep_profiling__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_45_45, 0) = ((MR_Box) (ll_backend__deep_profiling__TopCSD_11));
#line 859 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_45_45, 1) = ((MR_Box) (ll_backend__deep_profiling__V_46_46));
#line 859 "deep_profiling.m"
        }
#line 859 "deep_profiling.m"
        {
#line 859 "deep_profiling.m"
          ll_backend__deep_profiling__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_43_43, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStaticVar_13));
#line 859 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_43_43, 1) = ((MR_Box) (ll_backend__deep_profiling__V_45_45));
#line 859 "deep_profiling.m"
        }
#line 1783 "deep_profiling.m"
        {
#line 1783 "deep_profiling.m"
          ll_backend__deep_profiling__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1783 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_89_89, 0) = ((MR_Box) (ll_backend__deep_profiling__V_45_45));
#line 1783 "deep_profiling.m"
        }
#line 1783 "deep_profiling.m"
        {
#line 1783 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_call_7_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "det_call_port_code_sr", (MR_Integer) 4, ll_backend__deep_profiling__V_43_43, ll_backend__deep_profiling__V_89_89, (MR_Integer) 0, &ll_backend__deep_profiling__CallPortCode0_20);
        }
#line 861 "deep_profiling.m"
        {
#line 861 "deep_profiling.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 7, ll_backend__deep_profiling__CallPortCode0_20, &ll_backend__deep_profiling__CallPortCode_21);
        }
#line 863 "deep_profiling.m"
        {
#line 863 "deep_profiling.m"
          ll_backend__deep_profiling__generate_deep_det_call_6_p_0(ll_backend__deep_profiling__ModuleInfo_10, (MR_String) "det_exit_port_code_sr", (MR_Integer) 3, ll_backend__deep_profiling__V_45_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__ExitPortCode_22);
        }
#line 857 "deep_profiling.m"
      }
#line 876 "deep_profiling.m"
    {
#line 876 "deep_profiling.m"
      hlds__hlds_goal__make_impure_2_p_0(ll_backend__deep_profiling__GoalInfo0_15, &ll_backend__deep_profiling__GoalInfo_23);
    }
#line 882 "deep_profiling.m"
    {
#line 882 "deep_profiling.m"
      ll_backend__deep_profiling__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 882 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_64_64, 0) = ((MR_Box) (ll_backend__deep_profiling__ExitPortCode_22));
#line 882 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "deep_profiling.m"
    }
#line 880 "deep_profiling.m"
    {
#line 880 "deep_profiling.m"
      ll_backend__deep_profiling__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_63_63, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal0_17));
#line 880 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_63_63, 1) = ((MR_Box) (ll_backend__deep_profiling__V_64_64));
#line 880 "deep_profiling.m"
    }
#line 879 "deep_profiling.m"
    {
#line 879 "deep_profiling.m"
      ll_backend__deep_profiling__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_62_62, 0) = ((MR_Box) (ll_backend__deep_profiling__CallPortCode_21));
#line 879 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_62_62, 1) = ((MR_Box) (ll_backend__deep_profiling__V_63_63));
#line 879 "deep_profiling.m"
    }
#line 878 "deep_profiling.m"
    {
#line 878 "deep_profiling.m"
      ll_backend__deep_profiling__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_61_61, 0) = ((MR_Box) (ll_backend__deep_profiling__BindProcStaticVarGoal_16));
#line 878 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_61_61, 1) = ((MR_Box) (ll_backend__deep_profiling__V_62_62));
#line 878 "deep_profiling.m"
    }
#line 877 "deep_profiling.m"
    {
#line 877 "deep_profiling.m"
      ll_backend__deep_profiling__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 877 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 877 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_24, 1) = ((MR_Box) ((MR_Integer) 0));
#line 877 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_24, 2) = ((MR_Box) (ll_backend__deep_profiling__V_61_61));
#line 877 "deep_profiling.m"
    }
#line 883 "deep_profiling.m"
    {
#line 883 "deep_profiling.m"
      MR_Word base;
#line 883 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 883 "deep_profiling.m"
      *ll_backend__deep_profiling__Goal_18 = base;
#line 883 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_24));
#line 883 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_23));
#line 883 "deep_profiling.m"
    }
#line 855 "deep_profiling.m"
  }
#line 850 "deep_profiling.m"
}

#line 798 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_inner_proc_4_p_0(
#line 798 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_5,
#line 798 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__PredProcId_6,
#line 798 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_0_28,
#line 798 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_29)
#line 798 "deep_profiling.m"
{
#line 801 "deep_profiling.m"
  {
#line 801 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ContainingGoalMap_8;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Goal0_9;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo0_11;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarSet0_12;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarTypes0_13;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarInfo0_14;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__MiddleCSD_15;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarInfo1_16;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Context_17;
#line 801 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__FileName_18;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__MaybeDeepProfInfo_19;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__MaybeRecInfo_20;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__DeepInfo0_21;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Goal_22;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__DeepInfo_24;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarInfo_25;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarSet_26;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarTypes_27;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_32_32;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_33_33;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_35_35;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_36_36;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_37_37;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_56;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_57;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_58;
#line 801 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_59;
#line 805 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_10_10;
#line 819 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_23_23;
#line 821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_39_39;
#line 821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_40_40;
#line 821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_41_41;
#line 821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_42_42;
#line 821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_43_43;
#line 821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_44_44;
#line 821 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_45_45;
#line 821 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_46_46;

#line 802 "deep_profiling.m"
    {
#line 802 "deep_profiling.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ll_backend__deep_profiling__ModuleInfo_5, &ll_backend__deep_profiling__ContainingGoalMap_8, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_0_28, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30);
    }
#line 804 "deep_profiling.m"
    {
#line 804 "deep_profiling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30, &ll_backend__deep_profiling__Goal0_9);
    }
#line 805 "deep_profiling.m"
    ll_backend__deep_profiling__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_9, (MR_Integer) 0)));
#line 805 "deep_profiling.m"
    ll_backend__deep_profiling__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_9, (MR_Integer) 1)));
#line 806 "deep_profiling.m"
    {
#line 806 "deep_profiling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30, &ll_backend__deep_profiling__VarSet0_12);
    }
#line 807 "deep_profiling.m"
    {
#line 807 "deep_profiling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30, &ll_backend__deep_profiling__VarTypes0_13);
    }
#line 808 "deep_profiling.m"
    {
#line 808 "deep_profiling.m"
      ll_backend__deep_profiling__VarInfo0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 808 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_14, 0) = ((MR_Box) (ll_backend__deep_profiling__VarSet0_12));
#line 808 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_14, 1) = ((MR_Box) (ll_backend__deep_profiling__VarTypes0_13));
#line 808 "deep_profiling.m"
    }
#line 809 "deep_profiling.m"
    {
#line 809 "deep_profiling.m"
      ll_backend__deep_profiling__V_32_32 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 1840 "deep_profiling.m"
    ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_14, (MR_Integer) 0)));
#line 1840 "deep_profiling.m"
    ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo0_14, (MR_Integer) 1)));
#line 1852 "deep_profiling.m"
    {
#line 1852 "deep_profiling.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "MiddleCSD", &ll_backend__deep_profiling__MiddleCSD_15, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_56, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_58);
    }
#line 1853 "deep_profiling.m"
    {
#line 1853 "deep_profiling.m"
      hlds__vartypes__add_var_type_4_p_0(ll_backend__deep_profiling__MiddleCSD_15, ll_backend__deep_profiling__V_32_32, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_57, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_59);
    }
#line 1842 "deep_profiling.m"
    {
#line 1842 "deep_profiling.m"
      ll_backend__deep_profiling__VarInfo1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1842 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo1_16, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_58));
#line 1842 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo1_16, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_59));
#line 1842 "deep_profiling.m"
    }
#line 811 "deep_profiling.m"
    {
#line 811 "deep_profiling.m"
      ll_backend__deep_profiling__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__deep_profiling__GoalInfo0_11);
    }
#line 812 "deep_profiling.m"
    {
#line 812 "deep_profiling.m"
      ll_backend__deep_profiling__FileName_18 = mercury__term__context_file_1_f_0(ll_backend__deep_profiling__Context_17);
    }
#line 814 "deep_profiling.m"
    {
#line 814 "deep_profiling.m"
      hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30, &ll_backend__deep_profiling__MaybeDeepProfInfo_19);
    }
#line 1928 "deep_profiling.m"
    if ((ll_backend__deep_profiling__MaybeDeepProfInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1932 "deep_profiling.m"
      ll_backend__deep_profiling__MaybeRecInfo_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1928 "deep_profiling.m"
    else
#line 1928 "deep_profiling.m"
      {
#line 1928 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__DeepProfInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDeepProfInfo_19, (MR_Integer) 0)));
#line 1929 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_76_76;
#line 1929 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_77_77;

#line 1929 "deep_profiling.m"
        ll_backend__deep_profiling__MaybeRecInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepProfInfo_75, (MR_Integer) 0)));
#line 1929 "deep_profiling.m"
        ll_backend__deep_profiling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepProfInfo_75, (MR_Integer) 1)));
#line 1929 "deep_profiling.m"
        ll_backend__deep_profiling__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepProfInfo_75, (MR_Integer) 2)));
#line 1928 "deep_profiling.m"
      }
#line 817 "deep_profiling.m"
    {
#line 817 "deep_profiling.m"
      ll_backend__deep_profiling__V_33_33 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 817 "deep_profiling.m"
    {
#line 817 "deep_profiling.m"
      ll_backend__deep_profiling__V_35_35 = mercury__cord__empty_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0);
    }
#line 816 "deep_profiling.m"
    {
#line 816 "deep_profiling.m"
      ll_backend__deep_profiling__DeepInfo0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 816 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 0) = ((MR_Box) (ll_backend__deep_profiling__ModuleInfo_5));
#line 816 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 1) = ((MR_Box) (ll_backend__deep_profiling__PredProcId_6));
#line 816 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 2) = ((MR_Box) (ll_backend__deep_profiling__ContainingGoalMap_8));
#line 816 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 3) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_15));
#line 816 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 4) = ((MR_Box) (ll_backend__deep_profiling__V_33_33));
#line 816 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 5) = ((MR_Box) (ll_backend__deep_profiling__V_35_35));
#line 816 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 6) = ((MR_Box) (ll_backend__deep_profiling__VarInfo1_16));
#line 816 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 7) = ((MR_Box) (ll_backend__deep_profiling__FileName_18));
#line 816 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_21, 8) = ((MR_Box) (ll_backend__deep_profiling__MaybeRecInfo_20));
#line 816 "deep_profiling.m"
    }
#line 819 "deep_profiling.m"
    {
#line 819 "deep_profiling.m"
      ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__Goal0_9, &ll_backend__deep_profiling__Goal_22, &ll_backend__deep_profiling__V_23_23, ll_backend__deep_profiling__DeepInfo0_21, &ll_backend__deep_profiling__DeepInfo_24);
    }
#line 821 "deep_profiling.m"
    ll_backend__deep_profiling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 0)));
#line 821 "deep_profiling.m"
    ll_backend__deep_profiling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 1)));
#line 821 "deep_profiling.m"
    ll_backend__deep_profiling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 2)));
#line 821 "deep_profiling.m"
    ll_backend__deep_profiling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 3)));
#line 821 "deep_profiling.m"
    ll_backend__deep_profiling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 4)));
#line 821 "deep_profiling.m"
    ll_backend__deep_profiling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 5)));
#line 821 "deep_profiling.m"
    ll_backend__deep_profiling__VarInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 6)));
#line 821 "deep_profiling.m"
    ll_backend__deep_profiling__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 7)));
#line 821 "deep_profiling.m"
    ll_backend__deep_profiling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_24, (MR_Integer) 8)));
#line 822 "deep_profiling.m"
    ll_backend__deep_profiling__VarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_25, (MR_Integer) 0)));
#line 822 "deep_profiling.m"
    ll_backend__deep_profiling__VarTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__VarInfo_25, (MR_Integer) 1)));
#line 824 "deep_profiling.m"
    {
#line 824 "deep_profiling.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(ll_backend__deep_profiling__VarSet_26, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_30_30, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_36_36);
    }
#line 825 "deep_profiling.m"
    {
#line 825 "deep_profiling.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ll_backend__deep_profiling__VarTypes_27, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_36_36, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_37_37);
    }
#line 826 "deep_profiling.m"
    {
#line 826 "deep_profiling.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__deep_profiling__Goal_22, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_37_37, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_29);
#line 826 "deep_profiling.m"
      return;
    }
#line 801 "deep_profiling.m"
  }
#line 798 "deep_profiling.m"
}

#line 691 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(
#line 691 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_6,
#line 691 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__PredProcId_7,
#line 691 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_0_48,
#line 691 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_49,
#line 691 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__DeepLayoutInfo_9)
#line 691 "deep_profiling.m"
{
#line 695 "deep_profiling.m"
  {
#line 695 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__TypeCtorInfo_103_103;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ContainingGoalMap_10;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Globals_11;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarSet0_12;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarTypes0_13;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo0_18;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__TopCSD_19;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__MiddleCSD_20;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ProcStaticVar_21;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Context_22;
#line 695 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__FileName_23;
#line 695 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__LineNumber_24;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__MaybeDeepProfInfo_25;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__MaybeRecInfo_26;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CallSites_28;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__DoCoverageProfiling_29;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CoveragePoints_30;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredId_33;
#line 695 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__ProcId_34;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__UseActivationCounts_35;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__IsInInterface_36;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ProcStatic_37;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ShroudedPredProcId_38;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ProcStaticConsId_39;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__BindProcStaticVarGoal_40;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__CodeModel_41;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ExcpVars_43;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Vars_46;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__VarTypes_47;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_Goal_51_51;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_52_52;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_54_54;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_55_55;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_57_57;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_58_58;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_60_60;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_61_61;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_63_63;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_65_65;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_Goal_66_66;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_68_68;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_Goal_71_71;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_72_72;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_75_75;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_80_80;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_Goal_81_81;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_82_82;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_83_83;
#line 695 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_91_91;
#line 703 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_17_17;
#line 722 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_27_27;
#line 723 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_86_86;
#line 723 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_87_87;
#line 723 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_88_88;
#line 723 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_89_89;
#line 723 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_90_90;
#line 723 "deep_profiling.m"
    MR_String ll_backend__deep_profiling__V_92_92;
#line 723 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_93_93;
#line 744 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__OuterPredProcId_32;
#line 740 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__RecInfo_31;
#line 740 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_73_73;
#line 741 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_102_102;

#line 696 "deep_profiling.m"
    {
#line 696 "deep_profiling.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(ll_backend__deep_profiling__ModuleInfo_6, &ll_backend__deep_profiling__ContainingGoalMap_10, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_0_48, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50);
    }
#line 698 "deep_profiling.m"
    {
#line 698 "deep_profiling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__deep_profiling__ModuleInfo_6, &ll_backend__deep_profiling__Globals_11);
    }
#line 699 "deep_profiling.m"
    {
#line 699 "deep_profiling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50, &ll_backend__deep_profiling__VarSet0_12);
    }
#line 700 "deep_profiling.m"
    {
#line 700 "deep_profiling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50, &ll_backend__deep_profiling__VarTypes0_13);
    }
#line 702 "deep_profiling.m"
    {
#line 702 "deep_profiling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50, &ll_backend__deep_profiling__STATE_VARIABLE_Goal_51_51);
    }
#line 703 "deep_profiling.m"
    ll_backend__deep_profiling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_Goal_51_51, (MR_Integer) 0)));
#line 703 "deep_profiling.m"
    ll_backend__deep_profiling__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_Goal_51_51, (MR_Integer) 1)));
#line 705 "deep_profiling.m"
    {
#line 705 "deep_profiling.m"
      ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 705 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_52_52, 0) = ((MR_Box) (ll_backend__deep_profiling__VarSet0_12));
#line 705 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_52_52, 1) = ((MR_Box) (ll_backend__deep_profiling__VarTypes0_13));
#line 705 "deep_profiling.m"
    }
#line 706 "deep_profiling.m"
    {
#line 706 "deep_profiling.m"
      ll_backend__deep_profiling__V_54_54 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 706 "deep_profiling.m"
    {
#line 706 "deep_profiling.m"
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "TopCSD", ll_backend__deep_profiling__V_54_54, &ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_52_52, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_55_55);
    }
#line 707 "deep_profiling.m"
    {
#line 707 "deep_profiling.m"
      ll_backend__deep_profiling__V_57_57 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 707 "deep_profiling.m"
    {
#line 707 "deep_profiling.m"
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "MiddleCSD", ll_backend__deep_profiling__V_57_57, &ll_backend__deep_profiling__MiddleCSD_20, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_55_55, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_58_58);
    }
#line 708 "deep_profiling.m"
    {
#line 708 "deep_profiling.m"
      ll_backend__deep_profiling__V_60_60 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 708 "deep_profiling.m"
    {
#line 708 "deep_profiling.m"
      ll_backend__deep_profiling__generate_var_5_p_0((MR_String) "ProcStaticLayout", ll_backend__deep_profiling__V_60_60, &ll_backend__deep_profiling__ProcStaticVar_21, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_58_58, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_61_61);
    }
#line 711 "deep_profiling.m"
    {
#line 711 "deep_profiling.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50, &ll_backend__deep_profiling__Context_22);
    }
#line 712 "deep_profiling.m"
    {
#line 712 "deep_profiling.m"
      ll_backend__deep_profiling__FileName_23 = mercury__term__context_file_1_f_0(ll_backend__deep_profiling__Context_22);
    }
#line 713 "deep_profiling.m"
    {
#line 713 "deep_profiling.m"
      ll_backend__deep_profiling__LineNumber_24 = mercury__term__context_line_1_f_0(ll_backend__deep_profiling__Context_22);
    }
#line 715 "deep_profiling.m"
    {
#line 715 "deep_profiling.m"
      hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50, &ll_backend__deep_profiling__MaybeDeepProfInfo_25);
    }
#line 716 "deep_profiling.m"
    {
#line 716 "deep_profiling.m"
      ll_backend__deep_profiling__extract_deep_rec_info_2_p_0(ll_backend__deep_profiling__MaybeDeepProfInfo_25, &ll_backend__deep_profiling__MaybeRecInfo_26);
    }
#line 718 "deep_profiling.m"
    {
#line 718 "deep_profiling.m"
      ll_backend__deep_profiling__V_63_63 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 11919 "ll_backend.deep_profiling.c"
    ll_backend__deep_profiling__TypeCtorInfo_103_103 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0;
#line 718 "deep_profiling.m"
    {
#line 718 "deep_profiling.m"
      ll_backend__deep_profiling__V_65_65 = mercury__cord__empty_0_f_0(ll_backend__deep_profiling__TypeCtorInfo_103_103);
    }
#line 717 "deep_profiling.m"
    {
#line 717 "deep_profiling.m"
      ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 717 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 0) = ((MR_Box) (ll_backend__deep_profiling__ModuleInfo_6));
#line 717 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 1) = ((MR_Box) (ll_backend__deep_profiling__PredProcId_7));
#line 717 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 2) = ((MR_Box) (ll_backend__deep_profiling__ContainingGoalMap_10));
#line 717 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 3) = ((MR_Box) (ll_backend__deep_profiling__MiddleCSD_20));
#line 717 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 4) = ((MR_Box) (ll_backend__deep_profiling__V_63_63));
#line 717 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 5) = ((MR_Box) (ll_backend__deep_profiling__V_65_65));
#line 717 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 6) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_61_61));
#line 717 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 7) = ((MR_Box) (ll_backend__deep_profiling__FileName_23));
#line 717 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, 8) = ((MR_Box) (ll_backend__deep_profiling__MaybeRecInfo_26));
#line 717 "deep_profiling.m"
    }
#line 722 "deep_profiling.m"
    {
#line 722 "deep_profiling.m"
      ll_backend__deep_profiling__deep_prof_transform_goal_5_p_0(ll_backend__deep_profiling__STATE_VARIABLE_Goal_51_51, &ll_backend__deep_profiling__STATE_VARIABLE_Goal_66_66, &ll_backend__deep_profiling__V_27_27, ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_62_62, &ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67);
    }
#line 723 "deep_profiling.m"
    ll_backend__deep_profiling__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 0)));
#line 723 "deep_profiling.m"
    ll_backend__deep_profiling__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 1)));
#line 723 "deep_profiling.m"
    ll_backend__deep_profiling__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 2)));
#line 723 "deep_profiling.m"
    ll_backend__deep_profiling__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 3)));
#line 723 "deep_profiling.m"
    ll_backend__deep_profiling__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 4)));
#line 723 "deep_profiling.m"
    ll_backend__deep_profiling__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 5)));
#line 723 "deep_profiling.m"
    ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 6)));
#line 723 "deep_profiling.m"
    ll_backend__deep_profiling__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 7)));
#line 723 "deep_profiling.m"
    ll_backend__deep_profiling__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_DeepInfo_67_67, (MR_Integer) 8)));
#line 724 "deep_profiling.m"
    {
#line 724 "deep_profiling.m"
      ll_backend__deep_profiling__CallSites_28 = mercury__cord__list_1_f_0(ll_backend__deep_profiling__TypeCtorInfo_103_103, ll_backend__deep_profiling__V_91_91);
    }
#line 727 "deep_profiling.m"
    {
#line 727 "deep_profiling.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__deep_profiling__Globals_11, (MR_Integer) 200, &ll_backend__deep_profiling__DoCoverageProfiling_29);
    }
#line 734 "deep_profiling.m"
#line 734 "deep_profiling.m"
    switch (ll_backend__deep_profiling__DoCoverageProfiling_29) {
#line 734 "deep_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 734 "deep_profiling.m"
      case (MR_Integer) 0:
#line 735 "deep_profiling.m"
        {
#line 736 "deep_profiling.m"
          ll_backend__deep_profiling__CoveragePoints_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 735 "deep_profiling.m"
          ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_72_72 = ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_68_68;
#line 735 "deep_profiling.m"
          ll_backend__deep_profiling__STATE_VARIABLE_Goal_71_71 = ll_backend__deep_profiling__STATE_VARIABLE_Goal_66_66;
#line 735 "deep_profiling.m"
        }
#line 734 "deep_profiling.m"
        break;
#line 734 "deep_profiling.m"
      case (MR_Integer) 1:
#line 731 "deep_profiling.m"
        {
#line 731 "deep_profiling.m"
          ll_backend__coverage_profiling__coverage_prof_transform_proc_body_9_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__PredProcId_7, ll_backend__deep_profiling__ContainingGoalMap_10, ll_backend__deep_profiling__MaybeRecInfo_26, ll_backend__deep_profiling__STATE_VARIABLE_Goal_66_66, &ll_backend__deep_profiling__STATE_VARIABLE_Goal_71_71, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_68_68, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_72_72, &ll_backend__deep_profiling__CoveragePoints_30);
        }
#line 734 "deep_profiling.m"
        break;
#line 734 "deep_profiling.m"
    }
#line 740 "deep_profiling.m"
    ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__MaybeRecInfo_26)) == (MR_mktag((MR_Integer) 1)));
#line 740 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 740 "deep_profiling.m"
      {
#line 740 "deep_profiling.m"
        ll_backend__deep_profiling__RecInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeRecInfo_26, (MR_Integer) 0)));
#line 741 "deep_profiling.m"
        ll_backend__deep_profiling__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo_31, (MR_Integer) 0)));
#line 741 "deep_profiling.m"
        ll_backend__deep_profiling__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo_31, (MR_Integer) 1)));
#line 741 "deep_profiling.m"
        ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__V_73_73)) == (MR_mktag((MR_Integer) 0)));
#line 741 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 741 "deep_profiling.m"
          ll_backend__deep_profiling__OuterPredProcId_32 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__V_73_73), (MR_Integer) 0);
#line 740 "deep_profiling.m"
      }
#line 744 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 743 "deep_profiling.m"
      {
#line 743 "deep_profiling.m"
        ll_backend__deep_profiling__PredId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OuterPredProcId_32, (MR_Integer) 0)));
#line 743 "deep_profiling.m"
        ll_backend__deep_profiling__ProcId_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OuterPredProcId_32, (MR_Integer) 1)));
#line 743 "deep_profiling.m"
      }
#line 744 "deep_profiling.m"
    else
#line 745 "deep_profiling.m"
      {
#line 745 "deep_profiling.m"
        ll_backend__deep_profiling__PredId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_7, (MR_Integer) 0)));
#line 745 "deep_profiling.m"
        ll_backend__deep_profiling__ProcId_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_7, (MR_Integer) 1)));
#line 745 "deep_profiling.m"
      }
#line 748 "deep_profiling.m"
    {
#line 748 "deep_profiling.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__deep_profiling__Globals_11, (MR_Integer) 197, &ll_backend__deep_profiling__UseActivationCounts_35);
    }
#line 751 "deep_profiling.m"
    {
#line 751 "deep_profiling.m"
      ll_backend__deep_profiling__IsInInterface_36 = ll_backend__deep_profiling__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_115_95_112_114_111_99_95_105_110_95_105_110_116_101_114_102_97_99_101_95_95_91_51_93_95_48_3_f_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__PredId_33);
    }
#line 752 "deep_profiling.m"
    {
#line 752 "deep_profiling.m"
      ll_backend__deep_profiling__ProcStatic_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 752 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ProcStatic_37, 0) = ((MR_Box) (ll_backend__deep_profiling__FileName_23));
#line 752 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ProcStatic_37, 1) = ((MR_Box) (ll_backend__deep_profiling__LineNumber_24));
#line 752 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ProcStatic_37, 2) = ((MR_Box) (ll_backend__deep_profiling__IsInInterface_36));
#line 752 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ProcStatic_37, 3) = ((MR_Box) (ll_backend__deep_profiling__CallSites_28));
#line 752 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ProcStatic_37, 4) = ((MR_Box) (ll_backend__deep_profiling__CoveragePoints_30));
#line 752 "deep_profiling.m"
    }
#line 754 "deep_profiling.m"
    {
#line 754 "deep_profiling.m"
      ll_backend__deep_profiling__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 754 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_75_75, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_33));
#line 754 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_75_75, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_34));
#line 754 "deep_profiling.m"
    }
#line 754 "deep_profiling.m"
    {
#line 754 "deep_profiling.m"
      ll_backend__deep_profiling__ShroudedPredProcId_38 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(ll_backend__deep_profiling__V_75_75);
    }
#line 755 "deep_profiling.m"
    {
#line 755 "deep_profiling.m"
      ll_backend__deep_profiling__ProcStaticConsId_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__ProcStaticConsId_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 755 "deep_profiling.m"
      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__ProcStaticConsId_39, 1) = ((MR_Box) (ll_backend__deep_profiling__ShroudedPredProcId_38));
#line 755 "deep_profiling.m"
    }
#line 756 "deep_profiling.m"
    {
#line 756 "deep_profiling.m"
      ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(ll_backend__deep_profiling__ProcStaticConsId_39, ll_backend__deep_profiling__ProcStaticVar_21, &ll_backend__deep_profiling__BindProcStaticVarGoal_40);
    }
#line 762 "deep_profiling.m"
    {
#line 762 "deep_profiling.m"
      ll_backend__deep_profiling__CodeModel_41 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50);
    }
#line 769 "deep_profiling.m"
#line 769 "deep_profiling.m"
    switch (ll_backend__deep_profiling__CodeModel_41) {
#line 769 "deep_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 769 "deep_profiling.m"
      case (MR_Integer) 0:
#line 764 "deep_profiling.m"
        {
#line 764 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__MaybeActivationPtr_42;

#line 765 "deep_profiling.m"
          {
#line 765 "deep_profiling.m"
            ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(ll_backend__deep_profiling__UseActivationCounts_35, ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__MiddleCSD_20, &ll_backend__deep_profiling__MaybeActivationPtr_42, &ll_backend__deep_profiling__ExcpVars_43, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_72_72, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_80_80);
          }
#line 767 "deep_profiling.m"
          {
#line 767 "deep_profiling.m"
            ll_backend__deep_profiling__build_det_proc_body_9_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__MiddleCSD_20, ll_backend__deep_profiling__ProcStaticVar_21, ll_backend__deep_profiling__MaybeActivationPtr_42, ll_backend__deep_profiling__GoalInfo0_18, ll_backend__deep_profiling__BindProcStaticVarGoal_40, ll_backend__deep_profiling__STATE_VARIABLE_Goal_71_71, &ll_backend__deep_profiling__STATE_VARIABLE_Goal_81_81);
          }
#line 764 "deep_profiling.m"
        }
#line 769 "deep_profiling.m"
        break;
#line 769 "deep_profiling.m"
      case (MR_Integer) 2:
#line 776 "deep_profiling.m"
        {
#line 776 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__MaybeOldActivationPtr_44;
#line 776 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__NewOutermostProcDyn_45;

#line 777 "deep_profiling.m"
          {
#line 777 "deep_profiling.m"
            ll_backend__deep_profiling__generate_outermost_proc_dyns_8_p_0(ll_backend__deep_profiling__UseActivationCounts_35, ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__MiddleCSD_20, &ll_backend__deep_profiling__MaybeOldActivationPtr_44, &ll_backend__deep_profiling__NewOutermostProcDyn_45, &ll_backend__deep_profiling__ExcpVars_43, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_72_72, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_80_80);
          }
#line 780 "deep_profiling.m"
          {
#line 780 "deep_profiling.m"
            ll_backend__deep_profiling__build_non_proc_body_10_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__MiddleCSD_20, ll_backend__deep_profiling__ProcStaticVar_21, ll_backend__deep_profiling__MaybeOldActivationPtr_44, ll_backend__deep_profiling__NewOutermostProcDyn_45, ll_backend__deep_profiling__GoalInfo0_18, ll_backend__deep_profiling__BindProcStaticVarGoal_40, ll_backend__deep_profiling__STATE_VARIABLE_Goal_71_71, &ll_backend__deep_profiling__STATE_VARIABLE_Goal_81_81);
          }
#line 776 "deep_profiling.m"
        }
#line 769 "deep_profiling.m"
        break;
#line 769 "deep_profiling.m"
      case (MR_Integer) 1:
#line 770 "deep_profiling.m"
        {
#line 770 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__MaybeActivationPtr_85;

#line 771 "deep_profiling.m"
          {
#line 771 "deep_profiling.m"
            ll_backend__deep_profiling__maybe_generate_activation_ptr_7_p_0(ll_backend__deep_profiling__UseActivationCounts_35, ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__MiddleCSD_20, &ll_backend__deep_profiling__MaybeActivationPtr_85, &ll_backend__deep_profiling__ExcpVars_43, ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_72_72, &ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_80_80);
          }
#line 773 "deep_profiling.m"
          {
#line 773 "deep_profiling.m"
            ll_backend__deep_profiling__build_semi_proc_body_9_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__TopCSD_19, ll_backend__deep_profiling__MiddleCSD_20, ll_backend__deep_profiling__ProcStaticVar_21, ll_backend__deep_profiling__MaybeActivationPtr_85, ll_backend__deep_profiling__GoalInfo0_18, ll_backend__deep_profiling__BindProcStaticVarGoal_40, ll_backend__deep_profiling__STATE_VARIABLE_Goal_71_71, &ll_backend__deep_profiling__STATE_VARIABLE_Goal_81_81);
          }
#line 770 "deep_profiling.m"
        }
#line 769 "deep_profiling.m"
        break;
#line 769 "deep_profiling.m"
    }
#line 785 "deep_profiling.m"
    ll_backend__deep_profiling__Vars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_80_80, (MR_Integer) 0)));
#line 785 "deep_profiling.m"
    ll_backend__deep_profiling__VarTypes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_80_80, (MR_Integer) 1)));
#line 786 "deep_profiling.m"
    {
#line 786 "deep_profiling.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(ll_backend__deep_profiling__Vars_46, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_50_50, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_82_82);
    }
#line 787 "deep_profiling.m"
    {
#line 787 "deep_profiling.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ll_backend__deep_profiling__VarTypes_47, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_82_82, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_83_83);
    }
#line 788 "deep_profiling.m"
    {
#line 788 "deep_profiling.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__deep_profiling__STATE_VARIABLE_Goal_81_81, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_83_83, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_49);
    }
#line 789 "deep_profiling.m"
    {
#line 789 "deep_profiling.m"
      MR_Word base;
#line 789 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "deep_profiling.m"
      *ll_backend__deep_profiling__DeepLayoutInfo_9 = base;
#line 789 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcStatic_37));
#line 789 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__ExcpVars_43));
#line 789 "deep_profiling.m"
    }
#line 695 "deep_profiling.m"
  }
#line 691 "deep_profiling.m"
}

#line 594 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_maybe_transform_proc_5_p_0(
#line 594 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_6,
#line 594 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__PredId_7,
#line 594 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__ProcId_8,
#line 594 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_0_17,
#line 594 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_18)
#line 594 "deep_profiling.m"
{
#line 597 "deep_profiling.m"
  {
#line 597 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 597 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 597 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ProcInfo0_10;
#line 597 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredModuleName_11;
#line 598 "deep_profiling.m"
    MR_Box ll_backend__deep_profiling__conv0_ProcInfo0_10;
#line 603 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_31_31;

#line 598 "deep_profiling.m"
    {
#line 598 "deep_profiling.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(ll_backend__deep_profiling__TypeCtorInfo_30_30, ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_0_17, ll_backend__deep_profiling__ProcId_8, &ll_backend__deep_profiling__conv0_ProcInfo0_10);
    }
#line 598 "deep_profiling.m"
    ll_backend__deep_profiling__ProcInfo0_10 = ((MR_Word) ll_backend__deep_profiling__conv0_ProcInfo0_10);
#line 599 "deep_profiling.m"
    {
#line 599 "deep_profiling.m"
      ll_backend__deep_profiling__PredModuleName_11 = hlds__hlds_module__predicate_module_2_f_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__PredId_7);
    }
#line 603 "deep_profiling.m"
    {
#line 603 "deep_profiling.m"
      ll_backend__deep_profiling__V_31_31 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
    }
#line 603 "deep_profiling.m"
    {
#line 603 "deep_profiling.m"
      ll_backend__deep_profiling__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__deep_profiling__PredModuleName_11, ll_backend__deep_profiling__V_31_31);
    }
#line 606 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 606 "deep_profiling.m"
      *ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_18 = ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_0_17;
#line 606 "deep_profiling.m"
    else
#line 613 "deep_profiling.m"
      {
#line 613 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__ProcInfo_16;
#line 613 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_27_27;
#line 613 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__MaybeDeepInfo_38;
#line 613 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__MaybeDeepRecInfo_40;
#line 613 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__OrigBody_42;
#line 613 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__MaybeDeepLayoutInfo_45;
#line 613 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__DeepInfo_47;
#line 613 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_22_50;
#line 613 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_52_52;
#line 607 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Globals_13;
#line 607 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__VeryVerbose_14;
#line 607 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__ProcName_15;
#line 607 "deep_profiling.m"
        MR_String ll_backend__deep_profiling__V_21_21;
#line 607 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_24_24;
#line 607 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_25_25;

#line 608 "deep_profiling.m"
        {
#line 608 "deep_profiling.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__deep_profiling__ModuleInfo_6, &ll_backend__deep_profiling__Globals_13);
        }
#line 609 "deep_profiling.m"
        {
#line 609 "deep_profiling.m"
          libs__globals__lookup_bool_option_3_p_0(ll_backend__deep_profiling__Globals_13, (MR_Integer) 46, &ll_backend__deep_profiling__VeryVerbose_14);
        }
#line 610 "deep_profiling.m"
        {
#line 610 "deep_profiling.m"
          ll_backend__deep_profiling__ProcName_15 = hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_f_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__PredId_7, ll_backend__deep_profiling__ProcId_8);
        }
#line 612 "deep_profiling.m"
        {
#line 612 "deep_profiling.m"
          ll_backend__deep_profiling__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 612 "deep_profiling.m"
          MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__V_25_25, 0) = ((MR_Box) (ll_backend__deep_profiling__ProcName_15));
#line 612 "deep_profiling.m"
        }
#line 612 "deep_profiling.m"
        {
#line 612 "deep_profiling.m"
          ll_backend__deep_profiling__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_24_24, 0) = ((MR_Box) (ll_backend__deep_profiling__V_25_25));
#line 612 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "deep_profiling.m"
        }
#line 612 "deep_profiling.m"
        {
#line 612 "deep_profiling.m"
          ll_backend__deep_profiling__V_21_21 = mercury__string__format_2_f_0((MR_String) "%% Deep profiling: %s\n", ll_backend__deep_profiling__V_24_24);
        }
#line 611 "deep_profiling.m"
        {
#line 611 "deep_profiling.m"
          libs__file_util__maybe_write_string_4_p_0(ll_backend__deep_profiling__VeryVerbose_14, ll_backend__deep_profiling__V_21_21);
        }
#line 614 "deep_profiling.m"
        {
#line 614 "deep_profiling.m"
          ll_backend__deep_profiling__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 614 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_27_27, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_7));
#line 614 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_27_27, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_8));
#line 614 "deep_profiling.m"
        }
#line 623 "deep_profiling.m"
        {
#line 623 "deep_profiling.m"
          hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__MaybeDeepInfo_38);
        }
#line 638 "deep_profiling.m"
        if ((ll_backend__deep_profiling__MaybeDeepInfo_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 639 "deep_profiling.m"
          {
#line 639 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__DeepLayoutInfo_54;
#line 639 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Body_59;
#line 639 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__HeadVars_60;
#line 639 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Instmap_61;
#line 639 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Vartypes_62;
#line 639 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__MaybeDetism_63;
#line 639 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Detism_64;
#line 639 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Varset_65;

#line 656 "deep_profiling.m"
            {
#line 656 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__Body_59);
            }
#line 657 "deep_profiling.m"
            {
#line 657 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__HeadVars_60);
            }
#line 658 "deep_profiling.m"
            {
#line 658 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__deep_profiling__ProcInfo0_10, ll_backend__deep_profiling__ModuleInfo_6, &ll_backend__deep_profiling__Instmap_61);
            }
#line 659 "deep_profiling.m"
            {
#line 659 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__Vartypes_62);
            }
#line 660 "deep_profiling.m"
            {
#line 660 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__MaybeDetism_63);
            }
#line 663 "deep_profiling.m"
            if ((ll_backend__deep_profiling__MaybeDetism_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "deep_profiling.m"
              {
#line 665 "deep_profiling.m"
                hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__Detism_64);
              }
#line 663 "deep_profiling.m"
            else
#line 662 "deep_profiling.m"
              ll_backend__deep_profiling__Detism_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDetism_63, (MR_Integer) 0)));
#line 667 "deep_profiling.m"
            {
#line 667 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__Varset_65);
            }
#line 668 "deep_profiling.m"
            {
#line 668 "deep_profiling.m"
              ll_backend__deep_profiling__OrigBody_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 668 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigBody_42, 0) = ((MR_Box) (ll_backend__deep_profiling__Body_59));
#line 668 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigBody_42, 1) = ((MR_Box) (ll_backend__deep_profiling__HeadVars_60));
#line 668 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigBody_42, 2) = ((MR_Box) (ll_backend__deep_profiling__Instmap_61));
#line 668 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigBody_42, 3) = ((MR_Box) (ll_backend__deep_profiling__Vartypes_62));
#line 668 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigBody_42, 4) = ((MR_Box) (ll_backend__deep_profiling__Detism_64));
#line 668 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigBody_42, 5) = ((MR_Box) (ll_backend__deep_profiling__Varset_65));
#line 668 "deep_profiling.m"
            }
#line 641 "deep_profiling.m"
            {
#line 641 "deep_profiling.m"
              ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__V_27_27, ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_22_50, &ll_backend__deep_profiling__DeepLayoutInfo_54);
            }
#line 643 "deep_profiling.m"
            {
#line 643 "deep_profiling.m"
              ll_backend__deep_profiling__MaybeDeepLayoutInfo_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 643 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDeepLayoutInfo_45, 0) = ((MR_Box) (ll_backend__deep_profiling__DeepLayoutInfo_54));
#line 643 "deep_profiling.m"
            }
#line 644 "deep_profiling.m"
            ll_backend__deep_profiling__MaybeDeepRecInfo_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "deep_profiling.m"
          }
#line 638 "deep_profiling.m"
        else
#line 625 "deep_profiling.m"
          {
#line 625 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__DeepInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDeepInfo_38, (MR_Integer) 0)));
#line 626 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_41_41;
#line 628 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__RecInfo_43;
#line 628 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_49_49;
#line 629 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_55_55;
#line 629 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_44_44;

#line 626 "deep_profiling.m"
            ll_backend__deep_profiling__MaybeDeepRecInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_39, (MR_Integer) 0)));
#line 626 "deep_profiling.m"
            ll_backend__deep_profiling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_39, (MR_Integer) 1)));
#line 626 "deep_profiling.m"
            ll_backend__deep_profiling__OrigBody_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo0_39, (MR_Integer) 2)));
#line 628 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__MaybeDeepRecInfo_40)) == (MR_mktag((MR_Integer) 1)));
#line 628 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 628 "deep_profiling.m"
              {
#line 628 "deep_profiling.m"
                ll_backend__deep_profiling__RecInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDeepRecInfo_40, (MR_Integer) 0)));
#line 629 "deep_profiling.m"
                ll_backend__deep_profiling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo_43, (MR_Integer) 0)));
#line 629 "deep_profiling.m"
                ll_backend__deep_profiling__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__RecInfo_43, (MR_Integer) 1)));
#line 629 "deep_profiling.m"
                ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__V_49_49)) == (MR_mktag((MR_Integer) 0)));
#line 629 "deep_profiling.m"
                if (ll_backend__deep_profiling__succeeded)
#line 629 "deep_profiling.m"
                  ll_backend__deep_profiling__V_44_44 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__V_49_49), (MR_Integer) 0);
#line 628 "deep_profiling.m"
              }
#line 633 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 631 "deep_profiling.m"
              {
#line 631 "deep_profiling.m"
                {
#line 631 "deep_profiling.m"
                  ll_backend__deep_profiling__deep_prof_transform_inner_proc_4_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__V_27_27, ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_22_50);
                }
#line 632 "deep_profiling.m"
                ll_backend__deep_profiling__MaybeDeepLayoutInfo_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 631 "deep_profiling.m"
              }
#line 633 "deep_profiling.m"
            else
#line 635 "deep_profiling.m"
              {
#line 635 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__DeepLayoutInfo_46;

#line 634 "deep_profiling.m"
                {
#line 634 "deep_profiling.m"
                  ll_backend__deep_profiling__deep_prof_transform_normal_proc_5_p_0(ll_backend__deep_profiling__ModuleInfo_6, ll_backend__deep_profiling__V_27_27, ll_backend__deep_profiling__ProcInfo0_10, &ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_22_50, &ll_backend__deep_profiling__DeepLayoutInfo_46);
                }
#line 636 "deep_profiling.m"
                {
#line 636 "deep_profiling.m"
                  ll_backend__deep_profiling__MaybeDeepLayoutInfo_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDeepLayoutInfo_45, 0) = ((MR_Box) (ll_backend__deep_profiling__DeepLayoutInfo_46));
#line 636 "deep_profiling.m"
                }
#line 635 "deep_profiling.m"
              }
#line 625 "deep_profiling.m"
          }
#line 646 "deep_profiling.m"
        {
#line 646 "deep_profiling.m"
          ll_backend__deep_profiling__DeepInfo_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 646 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_47, 0) = ((MR_Box) (ll_backend__deep_profiling__MaybeDeepRecInfo_40));
#line 646 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_47, 1) = ((MR_Box) (ll_backend__deep_profiling__MaybeDeepLayoutInfo_45));
#line 646 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepInfo_47, 2) = ((MR_Box) (ll_backend__deep_profiling__OrigBody_42));
#line 646 "deep_profiling.m"
        }
#line 648 "deep_profiling.m"
        {
#line 648 "deep_profiling.m"
          ll_backend__deep_profiling__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 648 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_52_52, 0) = ((MR_Box) (ll_backend__deep_profiling__DeepInfo_47));
#line 648 "deep_profiling.m"
        }
#line 648 "deep_profiling.m"
        {
#line 648 "deep_profiling.m"
          hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_p_0(ll_backend__deep_profiling__V_52_52, ll_backend__deep_profiling__STATE_VARIABLE_ProcInfo_22_50, &ll_backend__deep_profiling__ProcInfo_16);
        }
#line 616 "deep_profiling.m"
        {
#line 616 "deep_profiling.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(ll_backend__deep_profiling__TypeCtorInfo_30_30, ll_backend__deep_profiling__ProcId_8, ((MR_Box) (ll_backend__deep_profiling__ProcInfo_16)), ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_0_17, ll_backend__deep_profiling__STATE_VARIABLE_ProcTable_18);
#line 616 "deep_profiling.m"
          return;
        }
#line 613 "deep_profiling.m"
      }
#line 597 "deep_profiling.m"
  }
#line 594 "deep_profiling.m"
}

#line 589 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0_1(
#line 589 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 589 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 589 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
#line 589 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_3)
#line 589 "deep_profiling.m"
{
#line 589 "deep_profiling.m"
  {
#line 589 "deep_profiling.m"
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
#line 589 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__conv1_STATE_VARIABLE_ProcTable_18;

#line 589 "deep_profiling.m"
    {
#line 589 "deep_profiling.m"
      ll_backend__deep_profiling__deep_prof_maybe_transform_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__closure, (MR_Integer) 4))), ((MR_Integer) ll_backend__deep_profiling__wrapper_arg_1), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2), &ll_backend__deep_profiling__conv1_STATE_VARIABLE_ProcTable_18);
    }
#line 589 "deep_profiling.m"
    *ll_backend__deep_profiling__wrapper_arg_3 = ((MR_Box) (ll_backend__deep_profiling__conv1_STATE_VARIABLE_ProcTable_18));
#line 589 "deep_profiling.m"
  }
#line 589 "deep_profiling.m"
}

#line 582 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0(
#line 582 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_5,
#line 582 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__PredId_6,
#line 582 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_PredMap_0_13,
#line 582 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_PredMap_14)
#line 582 "deep_profiling.m"
{
#line 585 "deep_profiling.m"
  {
#line 585 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 585 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 585 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 585 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredInfo0_8;
#line 585 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ProcIds_9;
#line 585 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ProcTable0_10;
#line 585 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ProcTable_11;
#line 585 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredInfo_12;
#line 585 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_15_15;
#line 586 "deep_profiling.m"
    MR_Box ll_backend__deep_profiling__conv0_PredInfo0_8;
#line 589 "deep_profiling.m"
    MR_Box ll_backend__deep_profiling__conv2_ProcTable_11;

#line 586 "deep_profiling.m"
    {
#line 586 "deep_profiling.m"
      mercury__map__lookup_3_p_0(ll_backend__deep_profiling__TypeCtorInfo_17_17, ll_backend__deep_profiling__TypeCtorInfo_18_18, ll_backend__deep_profiling__STATE_VARIABLE_PredMap_0_13, ((MR_Box) (ll_backend__deep_profiling__PredId_6)), &ll_backend__deep_profiling__conv0_PredInfo0_8);
    }
#line 586 "deep_profiling.m"
    ll_backend__deep_profiling__PredInfo0_8 = ((MR_Word) ll_backend__deep_profiling__conv0_PredInfo0_8);
#line 587 "deep_profiling.m"
    {
#line 587 "deep_profiling.m"
      ll_backend__deep_profiling__ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ll_backend__deep_profiling__PredInfo0_8);
    }
#line 588 "deep_profiling.m"
    {
#line 588 "deep_profiling.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__deep_profiling__PredInfo0_8, &ll_backend__deep_profiling__ProcTable0_10);
    }
#line 589 "deep_profiling.m"
    {
#line 589 "deep_profiling.m"
      ll_backend__deep_profiling__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 589 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_15_15, 0) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_5[0]));
#line 589 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_15_15, 1) = ((MR_Box) (ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0_1));
#line 589 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 589 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_15_15, 3) = ((MR_Box) (ll_backend__deep_profiling__ModuleInfo_5));
#line 589 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_15_15, 4) = ((MR_Box) (ll_backend__deep_profiling__PredId_6));
#line 589 "deep_profiling.m"
    }
#line 589 "deep_profiling.m"
    {
#line 589 "deep_profiling.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__deep_profiling_scalar_common_1[1], ll_backend__deep_profiling__V_15_15, ll_backend__deep_profiling__ProcIds_9, ((MR_Box) (ll_backend__deep_profiling__ProcTable0_10)), &ll_backend__deep_profiling__conv2_ProcTable_11);
    }
#line 589 "deep_profiling.m"
    ll_backend__deep_profiling__ProcTable_11 = ((MR_Word) ll_backend__deep_profiling__conv2_ProcTable_11);
#line 591 "deep_profiling.m"
    {
#line 591 "deep_profiling.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ll_backend__deep_profiling__ProcTable_11, ll_backend__deep_profiling__PredInfo0_8, &ll_backend__deep_profiling__PredInfo_12);
    }
#line 592 "deep_profiling.m"
    {
#line 592 "deep_profiling.m"
      mercury__map__det_update_4_p_0(ll_backend__deep_profiling__TypeCtorInfo_17_17, ll_backend__deep_profiling__TypeCtorInfo_18_18, ((MR_Box) (ll_backend__deep_profiling__PredId_6)), ((MR_Box) (ll_backend__deep_profiling__PredInfo_12)), ll_backend__deep_profiling__STATE_VARIABLE_PredMap_0_13, ll_backend__deep_profiling__STATE_VARIABLE_PredMap_14);
#line 592 "deep_profiling.m"
      return;
    }
#line 585 "deep_profiling.m"
  }
#line 582 "deep_profiling.m"
}

#line 571 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_p_0(
#line 571 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 571 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0_2,
#line 571 "deep_profiling.m"
  MR_Integer * ll_backend__deep_profiling__STATE_VARIABLE_N_3,
#line 571 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4,
#line 571 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_5)
#line 571 "deep_profiling.m"
{
#line 574 "deep_profiling.m"
  while (MR_TRUE)
#line 574 "deep_profiling.m"
    {
#line 574 "deep_profiling.m"
      /* tailcall optimized into a loop */
#line 574 "deep_profiling.m"
      {
#line 574 "deep_profiling.m"
        MR_bool ll_backend__deep_profiling__succeeded;

#line 574 "deep_profiling.m"
        if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "deep_profiling.m"
          {
#line 574 "deep_profiling.m"
            *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_5 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4;
#line 574 "deep_profiling.m"
            *ll_backend__deep_profiling__STATE_VARIABLE_N_3 = ll_backend__deep_profiling__STATE_VARIABLE_N_0_2;
#line 574 "deep_profiling.m"
          }
#line 574 "deep_profiling.m"
        else
#line 575 "deep_profiling.m"
          {
#line 575 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Case_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 575 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 575 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_12, (MR_Integer) 2)));
#line 575 "deep_profiling.m"
            MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_23_23;
#line 575 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_24_24;
#line 576 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_12, (MR_Integer) 0)));
#line 576 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_12, (MR_Integer) 1)));

#line 577 "deep_profiling.m"
            {
#line 577 "deep_profiling.m"
              ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(ll_backend__deep_profiling__Goal_18, ll_backend__deep_profiling__STATE_VARIABLE_N_0_2, &ll_backend__deep_profiling__STATE_VARIABLE_N_23_23, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4, &ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_24_24);
            }
#line 578 "deep_profiling.m"
            /* direct tailcall eliminated */
#line 578 "deep_profiling.m"
            {
#line 578 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__HeadVar__1__tmp_copy_1 = ll_backend__deep_profiling__Cases_13;
#line 578 "deep_profiling.m"
              MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0__tmp_copy_2 = ll_backend__deep_profiling__STATE_VARIABLE_N_23_23;
#line 578 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0__tmp_copy_4 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_24_24;

#line 578 "deep_profiling.m"
              ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0__tmp_copy_4;
#line 578 "deep_profiling.m"
              ll_backend__deep_profiling__STATE_VARIABLE_N_0_2 = ll_backend__deep_profiling__STATE_VARIABLE_N_0__tmp_copy_2;
#line 578 "deep_profiling.m"
              ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__HeadVar__1__tmp_copy_1;
#line 578 "deep_profiling.m"
            }
#line 578 "deep_profiling.m"
            continue;
#line 575 "deep_profiling.m"
          }
#line 574 "deep_profiling.m"
      }
#line 574 "deep_profiling.m"
      break;
#line 574 "deep_profiling.m"
    }
#line 571 "deep_profiling.m"
}

#line 563 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(
#line 563 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 563 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0_2,
#line 563 "deep_profiling.m"
  MR_Integer * ll_backend__deep_profiling__STATE_VARIABLE_N_3,
#line 563 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4,
#line 563 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_5)
#line 563 "deep_profiling.m"
{
#line 566 "deep_profiling.m"
  while (MR_TRUE)
#line 566 "deep_profiling.m"
    {
#line 566 "deep_profiling.m"
      /* tailcall optimized into a loop */
#line 566 "deep_profiling.m"
      {
#line 566 "deep_profiling.m"
        MR_bool ll_backend__deep_profiling__succeeded;

#line 566 "deep_profiling.m"
        if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 566 "deep_profiling.m"
          {
#line 566 "deep_profiling.m"
            *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_5 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4;
#line 566 "deep_profiling.m"
            *ll_backend__deep_profiling__STATE_VARIABLE_N_3 = ll_backend__deep_profiling__STATE_VARIABLE_N_0_2;
#line 566 "deep_profiling.m"
          }
#line 566 "deep_profiling.m"
        else
#line 567 "deep_profiling.m"
          {
#line 567 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 567 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 567 "deep_profiling.m"
            MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_20_20;
#line 567 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_21_21;

#line 568 "deep_profiling.m"
            {
#line 568 "deep_profiling.m"
              ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(ll_backend__deep_profiling__Goal_12, ll_backend__deep_profiling__STATE_VARIABLE_N_0_2, &ll_backend__deep_profiling__STATE_VARIABLE_N_20_20, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4, &ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_21_21);
            }
#line 569 "deep_profiling.m"
            /* direct tailcall eliminated */
#line 569 "deep_profiling.m"
            {
#line 569 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__HeadVar__1__tmp_copy_1 = ll_backend__deep_profiling__Goals_13;
#line 569 "deep_profiling.m"
              MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0__tmp_copy_2 = ll_backend__deep_profiling__STATE_VARIABLE_N_20_20;
#line 569 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0__tmp_copy_4 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_21_21;

#line 569 "deep_profiling.m"
              ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_4 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0__tmp_copy_4;
#line 569 "deep_profiling.m"
              ll_backend__deep_profiling__STATE_VARIABLE_N_0_2 = ll_backend__deep_profiling__STATE_VARIABLE_N_0__tmp_copy_2;
#line 569 "deep_profiling.m"
              ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__HeadVar__1__tmp_copy_1;
#line 569 "deep_profiling.m"
            }
#line 569 "deep_profiling.m"
            continue;
#line 567 "deep_profiling.m"
          }
#line 566 "deep_profiling.m"
      }
#line 566 "deep_profiling.m"
      break;
#line 566 "deep_profiling.m"
    }
#line 563 "deep_profiling.m"
}

#line 494 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(
#line 494 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal_6,
#line 494 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0_50,
#line 494 "deep_profiling.m"
  MR_Integer * ll_backend__deep_profiling__STATE_VARIABLE_N_51,
#line 494 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52,
#line 494 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53)
#line 494 "deep_profiling.m"
{
#line 497 "deep_profiling.m"
  while (MR_TRUE)
#line 497 "deep_profiling.m"
    {
#line 497 "deep_profiling.m"
      /* tailcall optimized into a loop */
#line 497 "deep_profiling.m"
      {
#line 497 "deep_profiling.m"
        MR_bool ll_backend__deep_profiling__succeeded;
#line 497 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal_6, (MR_Integer) 0)));
#line 497 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal_6, (MR_Integer) 1)));

#line 508 "deep_profiling.m"
#line 508 "deep_profiling.m"
        switch (MR_tag((MR_Word) ll_backend__deep_profiling__GoalExpr_9)) {
#line 508 "deep_profiling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 508 "deep_profiling.m"
          case (MR_Integer) 0:
#line 544 "deep_profiling.m"
            {
#line 544 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__SubGoal_45 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__GoalExpr_9), (MR_Integer) 0);

#line 545 "deep_profiling.m"
              /* direct tailcall eliminated */
#line 545 "deep_profiling.m"
              {
#line 545 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__Goal__tmp_copy_6 = ll_backend__deep_profiling__SubGoal_45;

#line 545 "deep_profiling.m"
                ll_backend__deep_profiling__Goal_6 = ll_backend__deep_profiling__Goal__tmp_copy_6;
#line 545 "deep_profiling.m"
              }
#line 545 "deep_profiling.m"
              continue;
#line 544 "deep_profiling.m"
            }
#line 508 "deep_profiling.m"
            break;
#line 508 "deep_profiling.m"
          case (MR_Integer) 1:
#line 528 "deep_profiling.m"
            {
#line 528 "deep_profiling.m"
              *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = ll_backend__deep_profiling__STATE_VARIABLE_N_0_50;
#line 528 "deep_profiling.m"
              *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52;
#line 528 "deep_profiling.m"
            }
#line 508 "deep_profiling.m"
            break;
#line 508 "deep_profiling.m"
          case (MR_Integer) 2:
#line 509 "deep_profiling.m"
            {
#line 509 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__BuiltinState_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 3)));
#line 509 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Features_25;
#line 509 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 0)));
#line 509 "deep_profiling.m"
              MR_Integer ll_backend__deep_profiling__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));
#line 509 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 2)));
#line 509 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 4)));
#line 509 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 5)));

#line 510 "deep_profiling.m"
              {
#line 510 "deep_profiling.m"
                ll_backend__deep_profiling__Features_25 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__deep_profiling__GoalInfo_10);
              }
#line 511 "deep_profiling.m"
              {
#line 511 "deep_profiling.m"
                ll_backend__deep_profiling__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 9)), ll_backend__deep_profiling__Features_25);
              }
#line 513 "deep_profiling.m"
              if (ll_backend__deep_profiling__succeeded)
#line 512 "deep_profiling.m"
                {
#line 512 "deep_profiling.m"
                  MR_Word base;
#line 512 "deep_profiling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "deep_profiling.m"
                  *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53 = base;
#line 512 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_N_0_50));
#line 512 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52));
#line 512 "deep_profiling.m"
                }
#line 513 "deep_profiling.m"
              else
#line 513 "deep_profiling.m"
                *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52;
#line 521 "deep_profiling.m"
#line 521 "deep_profiling.m"
              switch (ll_backend__deep_profiling__BuiltinState_22) {
#line 521 "deep_profiling.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 521 "deep_profiling.m"
                case (MR_Integer) 0:
#line 522 "deep_profiling.m"
                  *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = ll_backend__deep_profiling__STATE_VARIABLE_N_0_50;
#line 521 "deep_profiling.m"
                  break;
#line 521 "deep_profiling.m"
                case (MR_Integer) 2:
#line 521 "deep_profiling.m"
                case (MR_Integer) 1:
#line 519 "deep_profiling.m"
                  {
#line 520 "deep_profiling.m"
                    *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = (ll_backend__deep_profiling__STATE_VARIABLE_N_0_50 + (MR_Integer) 1);
#line 519 "deep_profiling.m"
                  }
#line 521 "deep_profiling.m"
                  break;
#line 521 "deep_profiling.m"
              }
#line 509 "deep_profiling.m"
            }
#line 508 "deep_profiling.m"
            break;
#line 508 "deep_profiling.m"
          case (MR_Integer) 3:
#line 508 "deep_profiling.m"
#line 508 "deep_profiling.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 0)))) {
#line 508 "deep_profiling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 508 "deep_profiling.m"
              case (MR_Integer) 0:
#line 525 "deep_profiling.m"
                {
#line 526 "deep_profiling.m"
                  *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = (ll_backend__deep_profiling__STATE_VARIABLE_N_0_50 + (MR_Integer) 1);
#line 525 "deep_profiling.m"
                  *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52;
#line 525 "deep_profiling.m"
                }
#line 508 "deep_profiling.m"
                break;
#line 508 "deep_profiling.m"
              case (MR_Integer) 1:
#line 500 "deep_profiling.m"
                {
#line 500 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Attrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));
#line 500 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__MayCallMercury_18;
#line 500 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 2)));
#line 500 "deep_profiling.m"
                  MR_Integer ll_backend__deep_profiling__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 3)));
#line 500 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 4)));
#line 500 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 5)));
#line 500 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 6)));
#line 500 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 7)));

#line 501 "deep_profiling.m"
                  {
#line 501 "deep_profiling.m"
                    ll_backend__deep_profiling__MayCallMercury_18 = parse_tree__prog_data__get_may_call_mercury_1_f_0(ll_backend__deep_profiling__Attrs_11);
                  }
#line 505 "deep_profiling.m"
#line 505 "deep_profiling.m"
                  switch (ll_backend__deep_profiling__MayCallMercury_18) {
#line 505 "deep_profiling.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 505 "deep_profiling.m"
                    case (MR_Integer) 0:
#line 503 "deep_profiling.m"
                      {
#line 504 "deep_profiling.m"
                        *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = (ll_backend__deep_profiling__STATE_VARIABLE_N_0_50 + (MR_Integer) 1);
#line 503 "deep_profiling.m"
                      }
#line 505 "deep_profiling.m"
                      break;
#line 505 "deep_profiling.m"
                    case (MR_Integer) 1:
#line 506 "deep_profiling.m"
                      *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = ll_backend__deep_profiling__STATE_VARIABLE_N_0_50;
#line 505 "deep_profiling.m"
                      break;
#line 505 "deep_profiling.m"
                  }
#line 500 "deep_profiling.m"
                  *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52;
#line 500 "deep_profiling.m"
                }
#line 508 "deep_profiling.m"
                break;
#line 508 "deep_profiling.m"
              case (MR_Integer) 2:
#line 530 "deep_profiling.m"
                {
#line 530 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Goals_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 2)));
#line 530 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling___ConjType_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));

#line 531 "deep_profiling.m"
                  {
#line 531 "deep_profiling.m"
                    ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(ll_backend__deep_profiling__Goals_37, ll_backend__deep_profiling__STATE_VARIABLE_N_0_50, ll_backend__deep_profiling__STATE_VARIABLE_N_51, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53);
#line 531 "deep_profiling.m"
                    return;
                  }
#line 530 "deep_profiling.m"
                }
#line 508 "deep_profiling.m"
                break;
#line 508 "deep_profiling.m"
              case (MR_Integer) 3:
#line 533 "deep_profiling.m"
                {
#line 533 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Goals_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));

#line 534 "deep_profiling.m"
                  {
#line 534 "deep_profiling.m"
                    ll_backend__deep_profiling__figure_out_rec_call_numbers_in_goal_list_5_p_0(ll_backend__deep_profiling__Goals_81, ll_backend__deep_profiling__STATE_VARIABLE_N_0_50, ll_backend__deep_profiling__STATE_VARIABLE_N_51, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53);
#line 534 "deep_profiling.m"
                    return;
                  }
#line 533 "deep_profiling.m"
                }
#line 508 "deep_profiling.m"
                break;
#line 508 "deep_profiling.m"
              case (MR_Integer) 4:
#line 536 "deep_profiling.m"
                {
#line 536 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 3)));
#line 536 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));
#line 536 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 2)));

#line 537 "deep_profiling.m"
                  {
#line 537 "deep_profiling.m"
                    ll_backend__deep_profiling__figure_out_rec_call_numbers_in_case_list_5_p_0(ll_backend__deep_profiling__Cases_40, ll_backend__deep_profiling__STATE_VARIABLE_N_0_50, ll_backend__deep_profiling__STATE_VARIABLE_N_51, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53);
#line 537 "deep_profiling.m"
                    return;
                  }
#line 536 "deep_profiling.m"
                }
#line 508 "deep_profiling.m"
                break;
#line 508 "deep_profiling.m"
              case (MR_Integer) 5:
#line 547 "deep_profiling.m"
                {
#line 547 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Reason_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));
#line 547 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__SubGoal_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 2)));
#line 549 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__FGT_48;
#line 549 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_47_47;

#line 549 "deep_profiling.m"
                  ll_backend__deep_profiling__succeeded = ((((MR_tag((MR_Word) ll_backend__deep_profiling__Reason_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason_46, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 549 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 549 "deep_profiling.m"
                    {
#line 549 "deep_profiling.m"
                      ll_backend__deep_profiling__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason_46, (MR_Integer) 1)));
#line 549 "deep_profiling.m"
                      ll_backend__deep_profiling__FGT_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__Reason_46, (MR_Integer) 2)));
#line 551 "deep_profiling.m"
#line 551 "deep_profiling.m"
                      switch (ll_backend__deep_profiling__FGT_48) {
#line 551 "deep_profiling.m"
                        default:
#line 551 "deep_profiling.m"
                          ll_backend__deep_profiling__succeeded = MR_FALSE;
#line 551 "deep_profiling.m"
                          break;
#line 551 "deep_profiling.m"
                        case (MR_Integer) 1:
#line 550 "deep_profiling.m"
                          ll_backend__deep_profiling__succeeded = MR_TRUE;
#line 551 "deep_profiling.m"
                          break;
#line 551 "deep_profiling.m"
                        case (MR_Integer) 2:
#line 551 "deep_profiling.m"
                          ll_backend__deep_profiling__succeeded = MR_TRUE;
#line 551 "deep_profiling.m"
                          break;
#line 551 "deep_profiling.m"
                      }
#line 549 "deep_profiling.m"
                    }
#line 555 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 554 "deep_profiling.m"
                    {
#line 554 "deep_profiling.m"
                      *ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_53 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52;
#line 554 "deep_profiling.m"
                      *ll_backend__deep_profiling__STATE_VARIABLE_N_51 = ll_backend__deep_profiling__STATE_VARIABLE_N_0_50;
#line 554 "deep_profiling.m"
                    }
#line 555 "deep_profiling.m"
                  else
#line 556 "deep_profiling.m"
                    {
#line 556 "deep_profiling.m"
                      /* direct tailcall eliminated */
#line 556 "deep_profiling.m"
                      {
#line 556 "deep_profiling.m"
                        MR_Word ll_backend__deep_profiling__Goal__tmp_copy_6 = ll_backend__deep_profiling__SubGoal_82;

#line 556 "deep_profiling.m"
                        ll_backend__deep_profiling__Goal_6 = ll_backend__deep_profiling__Goal__tmp_copy_6;
#line 556 "deep_profiling.m"
                      }
#line 556 "deep_profiling.m"
                      continue;
#line 556 "deep_profiling.m"
                    }
#line 547 "deep_profiling.m"
                }
#line 508 "deep_profiling.m"
                break;
#line 508 "deep_profiling.m"
              case (MR_Integer) 6:
#line 539 "deep_profiling.m"
                {
#line 539 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Cond_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 2)));
#line 539 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Then_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 3)));
#line 539 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Else_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 4)));
#line 539 "deep_profiling.m"
                  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_61_61;
#line 539 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_62_62;
#line 539 "deep_profiling.m"
                  MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_63_63;
#line 539 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_64_64;
#line 539 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_9, (MR_Integer) 1)));

#line 540 "deep_profiling.m"
                  {
#line 540 "deep_profiling.m"
                    ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(ll_backend__deep_profiling__Cond_42, ll_backend__deep_profiling__STATE_VARIABLE_N_0_50, &ll_backend__deep_profiling__STATE_VARIABLE_N_61_61, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52, &ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_62_62);
                  }
#line 541 "deep_profiling.m"
                  {
#line 541 "deep_profiling.m"
                    ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(ll_backend__deep_profiling__Then_43, ll_backend__deep_profiling__STATE_VARIABLE_N_61_61, &ll_backend__deep_profiling__STATE_VARIABLE_N_63_63, ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_62_62, &ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_64_64);
                  }
#line 542 "deep_profiling.m"
                  /* direct tailcall eliminated */
#line 542 "deep_profiling.m"
                  {
#line 542 "deep_profiling.m"
                    MR_Word ll_backend__deep_profiling__Goal__tmp_copy_6 = ll_backend__deep_profiling__Else_44;
#line 542 "deep_profiling.m"
                    MR_Integer ll_backend__deep_profiling__STATE_VARIABLE_N_0__tmp_copy_50 = ll_backend__deep_profiling__STATE_VARIABLE_N_63_63;
#line 542 "deep_profiling.m"
                    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0__tmp_copy_52 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_64_64;

#line 542 "deep_profiling.m"
                    ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0_52 = ll_backend__deep_profiling__STATE_VARIABLE_TailCallSites_0__tmp_copy_52;
#line 542 "deep_profiling.m"
                    ll_backend__deep_profiling__STATE_VARIABLE_N_0_50 = ll_backend__deep_profiling__STATE_VARIABLE_N_0__tmp_copy_50;
#line 542 "deep_profiling.m"
                    ll_backend__deep_profiling__Goal_6 = ll_backend__deep_profiling__Goal__tmp_copy_6;
#line 542 "deep_profiling.m"
                  }
#line 542 "deep_profiling.m"
                  continue;
#line 539 "deep_profiling.m"
                }
#line 508 "deep_profiling.m"
                break;
#line 508 "deep_profiling.m"
              case (MR_Integer) 7:
#line 559 "deep_profiling.m"
                {
#line 560 "deep_profiling.m"
                  {
#line 560 "deep_profiling.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.figure_out_rec_call_numbers\'/5", (MR_String) "shorthand");
#line 560 "deep_profiling.m"
                    return;
                  }
#line 559 "deep_profiling.m"
                }
#line 508 "deep_profiling.m"
                break;
#line 508 "deep_profiling.m"
            }
#line 508 "deep_profiling.m"
            break;
#line 508 "deep_profiling.m"
        }
#line 497 "deep_profiling.m"
      }
#line 497 "deep_profiling.m"
      break;
#line 497 "deep_profiling.m"
    }
#line 494 "deep_profiling.m"
}

#line 479 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(
#line 479 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 479 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
#line 479 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TailRecInfo_3,
#line 479 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4,
#line 479 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5)
#line 479 "deep_profiling.m"
{
#line 482 "deep_profiling.m"
  {
#line 482 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 482 "deep_profiling.m"
    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "deep_profiling.m"
      {
#line 482 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "deep_profiling.m"
        *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4;
#line 482 "deep_profiling.m"
      }
#line 482 "deep_profiling.m"
    else
#line 484 "deep_profiling.m"
      {
#line 484 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Case0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 484 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Cases0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 484 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Case_12;
#line 484 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Cases_13;
#line 484 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case0_10, (MR_Integer) 0)));
#line 484 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case0_10, (MR_Integer) 1)));
#line 484 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case0_10, (MR_Integer) 2)));
#line 484 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goal_19;
#line 484 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_23_23;
#line 486 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_20_20;

#line 486 "deep_profiling.m"
        {
#line 486 "deep_profiling.m"
          ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__Goal0_18, &ll_backend__deep_profiling__Goal_19, ll_backend__deep_profiling__TailRecInfo_3, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4, &ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_23_23, &ll_backend__deep_profiling__V_20_20);
        }
#line 488 "deep_profiling.m"
        {
#line 488 "deep_profiling.m"
          ll_backend__deep_profiling__Case_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 488 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_12, 0) = ((MR_Box) (ll_backend__deep_profiling__MainConsId_16));
#line 488 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_12, 1) = ((MR_Box) (ll_backend__deep_profiling__OtherConsIds_17));
#line 488 "deep_profiling.m"
          MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_12, 2) = ((MR_Box) (ll_backend__deep_profiling__Goal_19));
#line 488 "deep_profiling.m"
        }
#line 489 "deep_profiling.m"
        {
#line 489 "deep_profiling.m"
          ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(ll_backend__deep_profiling__Cases0_11, &ll_backend__deep_profiling__Cases_13, ll_backend__deep_profiling__TailRecInfo_3, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_23_23, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5);
        }
#line 483 "deep_profiling.m"
        {
#line 483 "deep_profiling.m"
          MR_Word base;
#line 483 "deep_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "deep_profiling.m"
          *ll_backend__deep_profiling__HeadVar__2_2 = base;
#line 483 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Case_12));
#line 483 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Cases_13));
#line 483 "deep_profiling.m"
        }
#line 484 "deep_profiling.m"
      }
#line 482 "deep_profiling.m"
  }
#line 479 "deep_profiling.m"
}

#line 464 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(
#line 464 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 464 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
#line 464 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TailRecInfo_3,
#line 464 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4,
#line 464 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5)
#line 464 "deep_profiling.m"
{
#line 468 "deep_profiling.m"
  {
#line 468 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 468 "deep_profiling.m"
    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 468 "deep_profiling.m"
      {
#line 468 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 468 "deep_profiling.m"
        *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4;
#line 468 "deep_profiling.m"
      }
#line 468 "deep_profiling.m"
    else
#line 468 "deep_profiling.m"
      {
#line 468 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 468 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));

#line 468 "deep_profiling.m"
        if ((ll_backend__deep_profiling__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 470 "deep_profiling.m"
          {
#line 470 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Goal_11;
#line 471 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_14_14;

#line 471 "deep_profiling.m"
            {
#line 471 "deep_profiling.m"
              ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__V_31_31, &ll_backend__deep_profiling__Goal_11, ll_backend__deep_profiling__TailRecInfo_3, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5, &ll_backend__deep_profiling__V_14_14);
            }
#line 469 "deep_profiling.m"
            {
#line 469 "deep_profiling.m"
              MR_Word base;
#line 469 "deep_profiling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "deep_profiling.m"
              *ll_backend__deep_profiling__HeadVar__2_2 = base;
#line 469 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal_11));
#line 469 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "deep_profiling.m"
            }
#line 470 "deep_profiling.m"
          }
#line 468 "deep_profiling.m"
        else
#line 474 "deep_profiling.m"
          {
#line 474 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Goals_22;
#line 474 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_30_30, (MR_Integer) 1)));
#line 474 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_30_30, (MR_Integer) 0)));

#line 468 "deep_profiling.m"
            if ((ll_backend__deep_profiling__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 470 "deep_profiling.m"
              {
#line 470 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__Goal_37;
#line 471 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_40_40;

#line 471 "deep_profiling.m"
                {
#line 471 "deep_profiling.m"
                  ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__V_57_57, &ll_backend__deep_profiling__Goal_37, ll_backend__deep_profiling__TailRecInfo_3, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5, &ll_backend__deep_profiling__V_40_40);
                }
#line 469 "deep_profiling.m"
                {
#line 469 "deep_profiling.m"
                  ll_backend__deep_profiling__Goals_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Goals_22, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal_37));
#line 469 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Goals_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "deep_profiling.m"
                }
#line 470 "deep_profiling.m"
              }
#line 468 "deep_profiling.m"
            else
#line 474 "deep_profiling.m"
              {
#line 474 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__Goals_48;

#line 476 "deep_profiling.m"
                {
#line 476 "deep_profiling.m"
                  ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(ll_backend__deep_profiling__V_56_56, &ll_backend__deep_profiling__Goals_48, ll_backend__deep_profiling__TailRecInfo_3, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5);
                }
#line 473 "deep_profiling.m"
                {
#line 473 "deep_profiling.m"
                  ll_backend__deep_profiling__Goals_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Goals_22, 0) = ((MR_Box) (ll_backend__deep_profiling__V_57_57));
#line 473 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__Goals_22, 1) = ((MR_Box) (ll_backend__deep_profiling__Goals_48));
#line 473 "deep_profiling.m"
                }
#line 474 "deep_profiling.m"
              }
#line 473 "deep_profiling.m"
            {
#line 473 "deep_profiling.m"
              MR_Word base;
#line 473 "deep_profiling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "deep_profiling.m"
              *ll_backend__deep_profiling__HeadVar__2_2 = base;
#line 473 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__V_31_31));
#line 473 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Goals_22));
#line 473 "deep_profiling.m"
            }
#line 474 "deep_profiling.m"
          }
#line 468 "deep_profiling.m"
      }
#line 468 "deep_profiling.m"
  }
#line 464 "deep_profiling.m"
}

#line 443 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(
#line 443 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 443 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__2_2,
#line 443 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TailRecInfo_3,
#line 443 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4,
#line 443 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5,
#line 443 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__6_6)
#line 443 "deep_profiling.m"
{
#line 447 "deep_profiling.m"
  {
#line 447 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 447 "deep_profiling.m"
    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 447 "deep_profiling.m"
      {
#line 447 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_11_11;
#line 448 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_26_26;
#line 448 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_27_27;
#line 448 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_28_28;

#line 447 "deep_profiling.m"
        *ll_backend__deep_profiling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 448 "deep_profiling.m"
        ll_backend__deep_profiling__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 0)));
#line 448 "deep_profiling.m"
        ll_backend__deep_profiling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 1)));
#line 448 "deep_profiling.m"
        ll_backend__deep_profiling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 2)));
#line 448 "deep_profiling.m"
        ll_backend__deep_profiling__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 3)));
#line 448 "deep_profiling.m"
        {
#line 448 "deep_profiling.m"
          MR_Word base;
#line 448 "deep_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 448 "deep_profiling.m"
          *ll_backend__deep_profiling__HeadVar__6_6 = base;
#line 448 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__V_11_11));
#line 448 "deep_profiling.m"
        }
#line 448 "deep_profiling.m"
        *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4;
#line 447 "deep_profiling.m"
      }
#line 447 "deep_profiling.m"
    else
#line 450 "deep_profiling.m"
      {
#line 450 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 450 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 450 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goal_14;
#line 450 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goals_15;
#line 450 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TailContinue_19;
#line 450 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_24_24;

#line 451 "deep_profiling.m"
        {
#line 451 "deep_profiling.m"
          ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(ll_backend__deep_profiling__Goals0_13, &ll_backend__deep_profiling__Goals_15, ll_backend__deep_profiling__TailRecInfo_3, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_4, &ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_24_24, &ll_backend__deep_profiling__TailContinue_19);
        }
#line 458 "deep_profiling.m"
        if ((ll_backend__deep_profiling__TailContinue_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "deep_profiling.m"
          {
#line 460 "deep_profiling.m"
            ll_backend__deep_profiling__Goal_14 = ll_backend__deep_profiling__Goal0_12;
#line 461 "deep_profiling.m"
            *ll_backend__deep_profiling__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 459 "deep_profiling.m"
            *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_24_24;
#line 459 "deep_profiling.m"
          }
#line 458 "deep_profiling.m"
        else
#line 454 "deep_profiling.m"
          {
#line 454 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Outputs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__TailContinue_19, (MR_Integer) 0)));
#line 454 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__HeadTailRecInfo_21;
#line 455 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 0)));
#line 455 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 1)));
#line 455 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 2)));
#line 455 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_3, (MR_Integer) 3)));

#line 455 "deep_profiling.m"
            {
#line 455 "deep_profiling.m"
              ll_backend__deep_profiling__HeadTailRecInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 455 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadTailRecInfo_21, 0) = ((MR_Box) (ll_backend__deep_profiling__V_29_29));
#line 455 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadTailRecInfo_21, 1) = ((MR_Box) (ll_backend__deep_profiling__V_30_30));
#line 455 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadTailRecInfo_21, 2) = ((MR_Box) (ll_backend__deep_profiling__V_31_31));
#line 455 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__HeadTailRecInfo_21, 3) = ((MR_Box) (ll_backend__deep_profiling__Outputs_20));
#line 455 "deep_profiling.m"
            }
#line 456 "deep_profiling.m"
            {
#line 456 "deep_profiling.m"
              ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__Goal0_12, &ll_backend__deep_profiling__Goal_14, ll_backend__deep_profiling__HeadTailRecInfo_21, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_24_24, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_5, ll_backend__deep_profiling__HeadVar__6_6);
            }
#line 454 "deep_profiling.m"
          }
#line 449 "deep_profiling.m"
        {
#line 449 "deep_profiling.m"
          MR_Word base;
#line 449 "deep_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "deep_profiling.m"
          *ll_backend__deep_profiling__HeadVar__2_2 = base;
#line 449 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Goal_14));
#line 449 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Goals_15));
#line 449 "deep_profiling.m"
        }
#line 450 "deep_profiling.m"
      }
#line 447 "deep_profiling.m"
  }
#line 443 "deep_profiling.m"
}

#line 430 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(
#line 430 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 430 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ToVar_2,
#line 430 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__FromVar_3,
#line 430 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__4_4)
#line 430 "deep_profiling.m"
{
#line 433 "deep_profiling.m"
  {
#line 433 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 433 "deep_profiling.m"
    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 433 "deep_profiling.m"
      *ll_backend__deep_profiling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 433 "deep_profiling.m"
    else
#line 435 "deep_profiling.m"
      {
#line 435 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Output0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 435 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Outputs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 435 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Output_11;
#line 435 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Outputs_12;

#line 436 "deep_profiling.m"
        {
#line 436 "deep_profiling.m"
          ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[1], ((MR_Box) (ll_backend__deep_profiling__ToVar_2)), ((MR_Box) (ll_backend__deep_profiling__Output0_7)));
        }
#line 438 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 437 "deep_profiling.m"
          ll_backend__deep_profiling__Output_11 = ll_backend__deep_profiling__FromVar_3;
#line 438 "deep_profiling.m"
        else
#line 439 "deep_profiling.m"
          ll_backend__deep_profiling__Output_11 = ll_backend__deep_profiling__Output0_7;
#line 441 "deep_profiling.m"
        {
#line 441 "deep_profiling.m"
          ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(ll_backend__deep_profiling__Outputs0_8, ll_backend__deep_profiling__ToVar_2, ll_backend__deep_profiling__FromVar_3, &ll_backend__deep_profiling__Outputs_12);
        }
#line 435 "deep_profiling.m"
        {
#line 435 "deep_profiling.m"
          MR_Word base;
#line 435 "deep_profiling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "deep_profiling.m"
          *ll_backend__deep_profiling__HeadVar__4_4 = base;
#line 435 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Output_11));
#line 435 "deep_profiling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__Outputs_12));
#line 435 "deep_profiling.m"
        }
#line 435 "deep_profiling.m"
      }
#line 433 "deep_profiling.m"
  }
#line 430 "deep_profiling.m"
}

#line 321 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(
#line 321 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal0_7,
#line 321 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_8,
#line 321 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__TailRecInfo_9,
#line 321 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88,
#line 321 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89,
#line 321 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Continue_11)
#line 321 "deep_profiling.m"
{
#line 326 "deep_profiling.m"
  {
#line 326 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 326 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_7, (MR_Integer) 0)));
#line 326 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal0_7, (MR_Integer) 1)));

#line 332 "deep_profiling.m"
#line 332 "deep_profiling.m"
    switch (MR_tag((MR_Word) ll_backend__deep_profiling__GoalExpr0_12)) {
#line 332 "deep_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 332 "deep_profiling.m"
      case (MR_Integer) 0:
#line 422 "deep_profiling.m"
        {
#line 423 "deep_profiling.m"
          *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
#line 424 "deep_profiling.m"
          *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "deep_profiling.m"
          *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
#line 422 "deep_profiling.m"
        }
#line 332 "deep_profiling.m"
        break;
#line 332 "deep_profiling.m"
      case (MR_Integer) 1:
#line 366 "deep_profiling.m"
        {
#line 366 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__Unify0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 3)));
#line 366 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 0)));
#line 366 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 1)));
#line 366 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 2)));
#line 366 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 4)));

#line 367 "deep_profiling.m"
          *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
#line 373 "deep_profiling.m"
#line 373 "deep_profiling.m"
          switch (MR_tag((MR_Word) ll_backend__deep_profiling__Unify0_47)) {
#line 373 "deep_profiling.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 373 "deep_profiling.m"
            case (MR_Integer) 0:
#line 373 "deep_profiling.m"
            case (MR_Integer) 1:
#line 379 "deep_profiling.m"
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 373 "deep_profiling.m"
              break;
#line 373 "deep_profiling.m"
            case (MR_Integer) 2:
#line 369 "deep_profiling.m"
              {
#line 369 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__ToVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Unify0_47, (MR_Integer) 0)));
#line 369 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__FromVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__Unify0_47, (MR_Integer) 1)));
#line 369 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__Outputs_51;
#line 369 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 3)));
#line 370 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 0)));
#line 370 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 1)));
#line 370 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 2)));

#line 370 "deep_profiling.m"
                {
#line 370 "deep_profiling.m"
                  ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_assign_4_p_0(ll_backend__deep_profiling__V_98_98, ll_backend__deep_profiling__ToVar_49, ll_backend__deep_profiling__FromVar_50, &ll_backend__deep_profiling__Outputs_51);
                }
#line 372 "deep_profiling.m"
                {
#line 372 "deep_profiling.m"
                  MR_Word base;
#line 372 "deep_profiling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 372 "deep_profiling.m"
                  *ll_backend__deep_profiling__Continue_11 = base;
#line 372 "deep_profiling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Outputs_51));
#line 372 "deep_profiling.m"
                }
#line 369 "deep_profiling.m"
              }
#line 373 "deep_profiling.m"
              break;
#line 373 "deep_profiling.m"
            case (MR_Integer) 3:
#line 379 "deep_profiling.m"
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 373 "deep_profiling.m"
              break;
#line 373 "deep_profiling.m"
          }
#line 366 "deep_profiling.m"
          *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
#line 366 "deep_profiling.m"
        }
#line 332 "deep_profiling.m"
        break;
#line 332 "deep_profiling.m"
      case (MR_Integer) 2:
#line 334 "deep_profiling.m"
        {
#line 334 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 0)));
#line 334 "deep_profiling.m"
          MR_Integer ll_backend__deep_profiling__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 1)));
#line 334 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 2)));
#line 334 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__Builtin_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 3)));
#line 334 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__UnifyContext_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 4)));
#line 334 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 5)));
#line 357 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__ClonePredProcId_28;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__TypeCtorInfo_131_131 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__TypeInfo_134_134;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__PredProcId_27;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__PredInfo_29;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__ProcInfo_30;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__CallDetism_31;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__Types_32;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__Modes_33;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__CallOutputs_34;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 1)));
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_100_100;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_101_101;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_132_132;
#line 336 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_133_133;
#line 337 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 0)));
#line 337 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 2)));
#line 337 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 3)));
#line 337 "deep_profiling.m"
          MR_Box ll_backend__deep_profiling__conv0_ClonePredProcId_28;
#line 339 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_116_116;
#line 339 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_117_117;
#line 339 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_118_118;
#line 342 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_119_119;
#line 342 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_120_120;
#line 342 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_121_121;
#line 345 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_122_122;
#line 345 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_123_123;
#line 345 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_124_124;
#line 347 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_125_125;
#line 347 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_126_126;
#line 347 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__V_127_127;

#line 336 "deep_profiling.m"
          {
#line 336 "deep_profiling.m"
            ll_backend__deep_profiling__PredProcId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 336 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_27, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_21));
#line 336 "deep_profiling.m"
            MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_27, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_22));
#line 336 "deep_profiling.m"
          }
#line 337 "deep_profiling.m"
          {
#line 337 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = mercury__assoc_list__search_3_p_0(ll_backend__deep_profiling__TypeCtorInfo_131_131, ll_backend__deep_profiling__TypeCtorInfo_131_131, ll_backend__deep_profiling__V_99_99, ((MR_Box) (ll_backend__deep_profiling__PredProcId_27)), &ll_backend__deep_profiling__conv0_ClonePredProcId_28);
          }
#line 337 "deep_profiling.m"
          if (ll_backend__deep_profiling__succeeded)
#line 337 "deep_profiling.m"
            {
#line 337 "deep_profiling.m"
              ll_backend__deep_profiling__ClonePredProcId_28 = ((MR_Word) ll_backend__deep_profiling__conv0_ClonePredProcId_28);
#line 337 "deep_profiling.m"
              ll_backend__deep_profiling__succeeded = MR_TRUE;
#line 337 "deep_profiling.m"
            }
#line 336 "deep_profiling.m"
          if (ll_backend__deep_profiling__succeeded)
#line 336 "deep_profiling.m"
            {
#line 339 "deep_profiling.m"
              ll_backend__deep_profiling__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 0)));
#line 339 "deep_profiling.m"
              ll_backend__deep_profiling__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 1)));
#line 339 "deep_profiling.m"
              ll_backend__deep_profiling__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 2)));
#line 339 "deep_profiling.m"
              ll_backend__deep_profiling__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 3)));
#line 339 "deep_profiling.m"
              {
#line 339 "deep_profiling.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__deep_profiling__V_100_100, ll_backend__deep_profiling__PredId_21, ll_backend__deep_profiling__ProcId_22, &ll_backend__deep_profiling__PredInfo_29, &ll_backend__deep_profiling__ProcInfo_30);
              }
#line 341 "deep_profiling.m"
              {
#line 341 "deep_profiling.m"
                hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ll_backend__deep_profiling__ProcInfo_30, &ll_backend__deep_profiling__CallDetism_31);
              }
#line 342 "deep_profiling.m"
              ll_backend__deep_profiling__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 0)));
#line 342 "deep_profiling.m"
              ll_backend__deep_profiling__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 1)));
#line 342 "deep_profiling.m"
              ll_backend__deep_profiling__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 2)));
#line 342 "deep_profiling.m"
              ll_backend__deep_profiling__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 3)));
#line 342 "deep_profiling.m"
              ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__CallDetism_31 == ll_backend__deep_profiling__V_132_132);
#line 336 "deep_profiling.m"
              if (ll_backend__deep_profiling__succeeded)
#line 336 "deep_profiling.m"
                {
#line 343 "deep_profiling.m"
                  {
#line 343 "deep_profiling.m"
                    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ll_backend__deep_profiling__PredInfo_29, &ll_backend__deep_profiling__Types_32);
                  }
#line 344 "deep_profiling.m"
                  {
#line 344 "deep_profiling.m"
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__deep_profiling__ProcInfo_30, &ll_backend__deep_profiling__Modes_33);
                  }
#line 345 "deep_profiling.m"
                  ll_backend__deep_profiling__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 0)));
#line 345 "deep_profiling.m"
                  ll_backend__deep_profiling__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 1)));
#line 345 "deep_profiling.m"
                  ll_backend__deep_profiling__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 2)));
#line 345 "deep_profiling.m"
                  ll_backend__deep_profiling__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 3)));
#line 345 "deep_profiling.m"
                  {
#line 345 "deep_profiling.m"
                    ll_backend__deep_profiling__find_list_of_output_args_5_p_0(ll_backend__deep_profiling__Args_23, ll_backend__deep_profiling__Modes_33, ll_backend__deep_profiling__Types_32, ll_backend__deep_profiling__V_101_101, &ll_backend__deep_profiling__CallOutputs_34);
                  }
#line 347 "deep_profiling.m"
                  ll_backend__deep_profiling__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 0)));
#line 347 "deep_profiling.m"
                  ll_backend__deep_profiling__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 1)));
#line 347 "deep_profiling.m"
                  ll_backend__deep_profiling__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 2)));
#line 347 "deep_profiling.m"
                  ll_backend__deep_profiling__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_9, (MR_Integer) 3)));
#line 14123 "ll_backend.deep_profiling.c"
                  ll_backend__deep_profiling__TypeInfo_134_134 = (MR_Word) &ll_backend__deep_profiling_scalar_common_2[5];
#line 347 "deep_profiling.m"
                  {
#line 347 "deep_profiling.m"
                    ll_backend__deep_profiling__succeeded = mercury__builtin__unify_2_p_0(ll_backend__deep_profiling__TypeInfo_134_134, ((MR_Box) (ll_backend__deep_profiling__CallOutputs_34)), ((MR_Box) (ll_backend__deep_profiling__V_133_133)));
                  }
#line 336 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 348 "deep_profiling.m"
                    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__Builtin_24 == (MR_Integer) 2);
#line 336 "deep_profiling.m"
                }
#line 336 "deep_profiling.m"
            }
#line 357 "deep_profiling.m"
          if (ll_backend__deep_profiling__succeeded)
#line 350 "deep_profiling.m"
            {
#line 350 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__ClonePredId_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ClonePredProcId_28, (MR_Integer) 0)));
#line 350 "deep_profiling.m"
              MR_Integer ll_backend__deep_profiling__CloneProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ClonePredProcId_28, (MR_Integer) 1)));
#line 350 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalExpr_37;
#line 350 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalInfo_38;

#line 351 "deep_profiling.m"
              {
#line 351 "deep_profiling.m"
                ll_backend__deep_profiling__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 351 "deep_profiling.m"
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_37, 0) = ((MR_Box) (ll_backend__deep_profiling__ClonePredId_35));
#line 351 "deep_profiling.m"
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_37, 1) = ((MR_Box) (ll_backend__deep_profiling__CloneProcId_36));
#line 351 "deep_profiling.m"
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_37, 2) = ((MR_Box) (ll_backend__deep_profiling__Args_23));
#line 351 "deep_profiling.m"
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_37, 3) = ((MR_Box) (ll_backend__deep_profiling__Builtin_24));
#line 351 "deep_profiling.m"
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_37, 4) = ((MR_Box) (ll_backend__deep_profiling__UnifyContext_25));
#line 351 "deep_profiling.m"
                MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_37, 5) = ((MR_Box) (ll_backend__deep_profiling__SymName_26));
#line 351 "deep_profiling.m"
              }
#line 353 "deep_profiling.m"
              {
#line 353 "deep_profiling.m"
                hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 9, ll_backend__deep_profiling__GoalInfo0_13, &ll_backend__deep_profiling__GoalInfo_38);
              }
#line 355 "deep_profiling.m"
              {
#line 355 "deep_profiling.m"
                MR_Word base;
#line 355 "deep_profiling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 355 "deep_profiling.m"
                *ll_backend__deep_profiling__Goal_8 = base;
#line 355 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_37));
#line 355 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_38));
#line 355 "deep_profiling.m"
              }
#line 356 "deep_profiling.m"
              *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = (MR_Integer) 1;
#line 350 "deep_profiling.m"
            }
#line 357 "deep_profiling.m"
          else
#line 358 "deep_profiling.m"
            {
#line 358 "deep_profiling.m"
              *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
#line 358 "deep_profiling.m"
              *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
#line 358 "deep_profiling.m"
            }
#line 360 "deep_profiling.m"
          *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 334 "deep_profiling.m"
        }
#line 332 "deep_profiling.m"
        break;
#line 332 "deep_profiling.m"
      case (MR_Integer) 3:
#line 332 "deep_profiling.m"
#line 332 "deep_profiling.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 0)))) {
#line 332 "deep_profiling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 332 "deep_profiling.m"
          case (MR_Integer) 0:
#line 362 "deep_profiling.m"
            {
#line 363 "deep_profiling.m"
              *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
#line 364 "deep_profiling.m"
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 362 "deep_profiling.m"
              *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
#line 362 "deep_profiling.m"
            }
#line 332 "deep_profiling.m"
            break;
#line 332 "deep_profiling.m"
          case (MR_Integer) 1:
#line 329 "deep_profiling.m"
            {
#line 330 "deep_profiling.m"
              *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
#line 331 "deep_profiling.m"
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 329 "deep_profiling.m"
              *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
#line 329 "deep_profiling.m"
            }
#line 332 "deep_profiling.m"
            break;
#line 332 "deep_profiling.m"
          case (MR_Integer) 2:
#line 382 "deep_profiling.m"
            {
#line 382 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__ConjType_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 1)));
#line 382 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Goals0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 2)));

#line 389 "deep_profiling.m"
#line 389 "deep_profiling.m"
              switch (ll_backend__deep_profiling__ConjType_69) {
#line 389 "deep_profiling.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 389 "deep_profiling.m"
                case (MR_Integer) 1:
#line 390 "deep_profiling.m"
                  {
#line 391 "deep_profiling.m"
                    *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
#line 392 "deep_profiling.m"
                    *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 390 "deep_profiling.m"
                    *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
#line 390 "deep_profiling.m"
                  }
#line 389 "deep_profiling.m"
                  break;
#line 389 "deep_profiling.m"
                case (MR_Integer) 0:
#line 384 "deep_profiling.m"
                  {
#line 384 "deep_profiling.m"
                    MR_Word ll_backend__deep_profiling__Goals_71;
#line 384 "deep_profiling.m"
                    MR_Word ll_backend__deep_profiling__GoalExpr_105;

#line 385 "deep_profiling.m"
                    {
#line 385 "deep_profiling.m"
                      ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_conj_6_p_0(ll_backend__deep_profiling__Goals0_70, &ll_backend__deep_profiling__Goals_71, ll_backend__deep_profiling__TailRecInfo_9, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89, ll_backend__deep_profiling__Continue_11);
                    }
#line 387 "deep_profiling.m"
                    {
#line 387 "deep_profiling.m"
                      ll_backend__deep_profiling__GoalExpr_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 387 "deep_profiling.m"
                      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 387 "deep_profiling.m"
                      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_105, 1) = ((MR_Box) (ll_backend__deep_profiling__ConjType_69));
#line 387 "deep_profiling.m"
                      MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_105, 2) = ((MR_Box) (ll_backend__deep_profiling__Goals_71));
#line 387 "deep_profiling.m"
                    }
#line 388 "deep_profiling.m"
                    {
#line 388 "deep_profiling.m"
                      MR_Word base;
#line 388 "deep_profiling.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 388 "deep_profiling.m"
                      *ll_backend__deep_profiling__Goal_8 = base;
#line 388 "deep_profiling.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_105));
#line 388 "deep_profiling.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo0_13));
#line 388 "deep_profiling.m"
                    }
#line 384 "deep_profiling.m"
                  }
#line 389 "deep_profiling.m"
                  break;
#line 389 "deep_profiling.m"
              }
#line 382 "deep_profiling.m"
            }
#line 332 "deep_profiling.m"
            break;
#line 332 "deep_profiling.m"
          case (MR_Integer) 3:
#line 395 "deep_profiling.m"
            {
#line 395 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalExpr_108;
#line 395 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Goals0_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 1)));
#line 395 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Goals_110;

#line 396 "deep_profiling.m"
              {
#line 396 "deep_profiling.m"
                ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_disj_5_p_0(ll_backend__deep_profiling__Goals0_109, &ll_backend__deep_profiling__Goals_110, ll_backend__deep_profiling__TailRecInfo_9, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89);
              }
#line 398 "deep_profiling.m"
              {
#line 398 "deep_profiling.m"
                ll_backend__deep_profiling__GoalExpr_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 398 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_108, 1) = ((MR_Box) (ll_backend__deep_profiling__Goals_110));
#line 398 "deep_profiling.m"
              }
#line 399 "deep_profiling.m"
              {
#line 399 "deep_profiling.m"
                MR_Word base;
#line 399 "deep_profiling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 399 "deep_profiling.m"
                *ll_backend__deep_profiling__Goal_8 = base;
#line 399 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_108));
#line 399 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo0_13));
#line 399 "deep_profiling.m"
              }
#line 400 "deep_profiling.m"
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 395 "deep_profiling.m"
            }
#line 332 "deep_profiling.m"
            break;
#line 332 "deep_profiling.m"
          case (MR_Integer) 4:
#line 402 "deep_profiling.m"
            {
#line 402 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 1)));
#line 402 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__CanFail_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 2)));
#line 402 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Cases0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 3)));
#line 402 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Cases_75;
#line 402 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalExpr_111;

#line 403 "deep_profiling.m"
              {
#line 403 "deep_profiling.m"
                ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_cases_5_p_0(ll_backend__deep_profiling__Cases0_74, &ll_backend__deep_profiling__Cases_75, ll_backend__deep_profiling__TailRecInfo_9, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89);
              }
#line 405 "deep_profiling.m"
              {
#line 405 "deep_profiling.m"
                ll_backend__deep_profiling__GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 405 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 405 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_111, 1) = ((MR_Box) (ll_backend__deep_profiling__Var_72));
#line 405 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_111, 2) = ((MR_Box) (ll_backend__deep_profiling__CanFail_73));
#line 405 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_111, 3) = ((MR_Box) (ll_backend__deep_profiling__Cases_75));
#line 405 "deep_profiling.m"
              }
#line 406 "deep_profiling.m"
              {
#line 406 "deep_profiling.m"
                MR_Word base;
#line 406 "deep_profiling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "deep_profiling.m"
                *ll_backend__deep_profiling__Goal_8 = base;
#line 406 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_111));
#line 406 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo0_13));
#line 406 "deep_profiling.m"
              }
#line 407 "deep_profiling.m"
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 402 "deep_profiling.m"
            }
#line 332 "deep_profiling.m"
            break;
#line 332 "deep_profiling.m"
          case (MR_Integer) 5:
#line 418 "deep_profiling.m"
            {
#line 419 "deep_profiling.m"
              *ll_backend__deep_profiling__Goal_8 = ll_backend__deep_profiling__Goal0_7;
#line 420 "deep_profiling.m"
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 418 "deep_profiling.m"
              *ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89 = ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88;
#line 418 "deep_profiling.m"
            }
#line 332 "deep_profiling.m"
            break;
#line 332 "deep_profiling.m"
          case (MR_Integer) 6:
#line 409 "deep_profiling.m"
            {
#line 409 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Vars_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 1)));
#line 409 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Cond_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 2)));
#line 409 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Then0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 3)));
#line 409 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Else0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr0_12, (MR_Integer) 4)));
#line 409 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Then_80;
#line 409 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__Else_82;
#line 409 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_93_93;
#line 409 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__GoalExpr_112;
#line 410 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_81_81;
#line 412 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__V_83_83;

#line 410 "deep_profiling.m"
              {
#line 410 "deep_profiling.m"
                ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__Then0_78, &ll_backend__deep_profiling__Then_80, ll_backend__deep_profiling__TailRecInfo_9, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_0_88, &ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_93_93, &ll_backend__deep_profiling__V_81_81);
              }
#line 412 "deep_profiling.m"
              {
#line 412 "deep_profiling.m"
                ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__Else0_79, &ll_backend__deep_profiling__Else_82, ll_backend__deep_profiling__TailRecInfo_9, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_93_93, ll_backend__deep_profiling__STATE_VARIABLE_FoundTailCall_89, &ll_backend__deep_profiling__V_83_83);
              }
#line 414 "deep_profiling.m"
              {
#line 414 "deep_profiling.m"
                ll_backend__deep_profiling__GoalExpr_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 414 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 414 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 1) = ((MR_Box) (ll_backend__deep_profiling__Vars_76));
#line 414 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 2) = ((MR_Box) (ll_backend__deep_profiling__Cond_77));
#line 414 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 3) = ((MR_Box) (ll_backend__deep_profiling__Then_80));
#line 414 "deep_profiling.m"
                MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_112, 4) = ((MR_Box) (ll_backend__deep_profiling__Else_82));
#line 414 "deep_profiling.m"
              }
#line 415 "deep_profiling.m"
              {
#line 415 "deep_profiling.m"
                MR_Word base;
#line 415 "deep_profiling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 415 "deep_profiling.m"
                *ll_backend__deep_profiling__Goal_8 = base;
#line 415 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_112));
#line 415 "deep_profiling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo0_13));
#line 415 "deep_profiling.m"
              }
#line 416 "deep_profiling.m"
              *ll_backend__deep_profiling__Continue_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "deep_profiling.m"
            }
#line 332 "deep_profiling.m"
            break;
#line 332 "deep_profiling.m"
          case (MR_Integer) 7:
#line 426 "deep_profiling.m"
            {
#line 427 "deep_profiling.m"
              {
#line 427 "deep_profiling.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.apply_deep_prof_tail_rec_to_goal\'/6", (MR_String) "shorthand");
#line 427 "deep_profiling.m"
                return;
              }
#line 426 "deep_profiling.m"
            }
#line 332 "deep_profiling.m"
            break;
#line 332 "deep_profiling.m"
        }
#line 332 "deep_profiling.m"
        break;
#line 332 "deep_profiling.m"
    }
#line 326 "deep_profiling.m"
  }
#line 321 "deep_profiling.m"
}

#line 300 "deep_profiling.m"
static MR_Word MR_CALL 
ll_backend__deep_profiling__cases_contain_builtin_unify_or_compare_1_f_0(
#line 300 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1)
#line 300 "deep_profiling.m"
{
#line 302 "deep_profiling.m"
  while (MR_TRUE)
#line 302 "deep_profiling.m"
    {
#line 302 "deep_profiling.m"
      /* tailcall optimized into a loop */
#line 302 "deep_profiling.m"
      {
#line 302 "deep_profiling.m"
        MR_bool ll_backend__deep_profiling__succeeded;
#line 302 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__HeadVar__2_2;

#line 302 "deep_profiling.m"
        if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "deep_profiling.m"
          ll_backend__deep_profiling__HeadVar__2_2 = (MR_Integer) 0;
#line 302 "deep_profiling.m"
        else
#line 303 "deep_profiling.m"
          {
#line 303 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 303 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 303 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_3, (MR_Integer) 2)));
#line 304 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_3, (MR_Integer) 0)));
#line 304 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Case_3, (MR_Integer) 1)));
#line 305 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_9_9;

#line 305 "deep_profiling.m"
            {
#line 305 "deep_profiling.m"
              ll_backend__deep_profiling__V_9_9 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Goal_8);
            }
#line 305 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_9_9 == (MR_Integer) 1);
#line 307 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 306 "deep_profiling.m"
              ll_backend__deep_profiling__HeadVar__2_2 = (MR_Integer) 1;
#line 307 "deep_profiling.m"
            else
#line 308 "deep_profiling.m"
              {
#line 308 "deep_profiling.m"
                /* direct tailcall eliminated */
#line 308 "deep_profiling.m"
                {
#line 308 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__HeadVar__1__tmp_copy_1 = ll_backend__deep_profiling__Cases_4;

#line 308 "deep_profiling.m"
                  ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__HeadVar__1__tmp_copy_1;
#line 308 "deep_profiling.m"
                }
#line 308 "deep_profiling.m"
                continue;
#line 308 "deep_profiling.m"
              }
#line 303 "deep_profiling.m"
          }
#line 302 "deep_profiling.m"
        return ll_backend__deep_profiling__HeadVar__2_2;
#line 302 "deep_profiling.m"
      }
#line 302 "deep_profiling.m"
      break;
#line 302 "deep_profiling.m"
    }
#line 300 "deep_profiling.m"
}

#line 290 "deep_profiling.m"
static MR_Word MR_CALL 
ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(
#line 290 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1)
#line 290 "deep_profiling.m"
{
#line 292 "deep_profiling.m"
  while (MR_TRUE)
#line 292 "deep_profiling.m"
    {
#line 292 "deep_profiling.m"
      /* tailcall optimized into a loop */
#line 292 "deep_profiling.m"
      {
#line 292 "deep_profiling.m"
        MR_bool ll_backend__deep_profiling__succeeded;
#line 292 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__HeadVar__2_2;

#line 292 "deep_profiling.m"
        if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "deep_profiling.m"
          ll_backend__deep_profiling__HeadVar__2_2 = (MR_Integer) 0;
#line 292 "deep_profiling.m"
        else
#line 293 "deep_profiling.m"
          {
#line 293 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 294 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_6_6;

#line 294 "deep_profiling.m"
            {
#line 294 "deep_profiling.m"
              ll_backend__deep_profiling__V_6_6 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Goal_3);
            }
#line 294 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_6_6 == (MR_Integer) 1);
#line 296 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 295 "deep_profiling.m"
              ll_backend__deep_profiling__HeadVar__2_2 = (MR_Integer) 1;
#line 296 "deep_profiling.m"
            else
#line 297 "deep_profiling.m"
              {
#line 297 "deep_profiling.m"
                /* direct tailcall eliminated */
#line 297 "deep_profiling.m"
                {
#line 297 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__HeadVar__1__tmp_copy_1 = ll_backend__deep_profiling__Goals_4;

#line 297 "deep_profiling.m"
                  ll_backend__deep_profiling__HeadVar__1_1 = ll_backend__deep_profiling__HeadVar__1__tmp_copy_1;
#line 297 "deep_profiling.m"
                }
#line 297 "deep_profiling.m"
                continue;
#line 297 "deep_profiling.m"
              }
#line 293 "deep_profiling.m"
          }
#line 292 "deep_profiling.m"
        return ll_backend__deep_profiling__HeadVar__2_2;
#line 292 "deep_profiling.m"
      }
#line 292 "deep_profiling.m"
      break;
#line 292 "deep_profiling.m"
    }
#line 290 "deep_profiling.m"
}

#line 235 "deep_profiling.m"
static MR_Word MR_CALL 
ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(
#line 235 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Goal_3)
#line 235 "deep_profiling.m"
{
#line 237 "deep_profiling.m"
  while (MR_TRUE)
#line 237 "deep_profiling.m"
    {
#line 237 "deep_profiling.m"
      /* tailcall optimized into a loop */
#line 237 "deep_profiling.m"
      {
#line 237 "deep_profiling.m"
        MR_bool ll_backend__deep_profiling__succeeded;
#line 237 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Contains_4;
#line 237 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal_3, (MR_Integer) 0)));
#line 238 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling___GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Goal_3, (MR_Integer) 1)));

#line 242 "deep_profiling.m"
#line 242 "deep_profiling.m"
        switch (MR_tag((MR_Word) ll_backend__deep_profiling__GoalExpr_5)) {
#line 242 "deep_profiling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 242 "deep_profiling.m"
          case (MR_Integer) 0:
#line 283 "deep_profiling.m"
            {
#line 283 "deep_profiling.m"
              MR_Word ll_backend__deep_profiling__SubGoal_40 = (MR_Word) MR_body(((MR_Word) ll_backend__deep_profiling__GoalExpr_5), (MR_Integer) 0);

#line 284 "deep_profiling.m"
              /* direct tailcall eliminated */
#line 284 "deep_profiling.m"
              {
#line 284 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__Goal__tmp_copy_3 = ll_backend__deep_profiling__SubGoal_40;

#line 284 "deep_profiling.m"
                ll_backend__deep_profiling__Goal_3 = ll_backend__deep_profiling__Goal__tmp_copy_3;
#line 284 "deep_profiling.m"
              }
#line 284 "deep_profiling.m"
              continue;
#line 283 "deep_profiling.m"
            }
#line 242 "deep_profiling.m"
            break;
#line 242 "deep_profiling.m"
          case (MR_Integer) 1:
#line 241 "deep_profiling.m"
            ll_backend__deep_profiling__Contains_4 = (MR_Integer) 0;
#line 242 "deep_profiling.m"
            break;
#line 242 "deep_profiling.m"
          case (MR_Integer) 2:
#line 249 "deep_profiling.m"
            ll_backend__deep_profiling__Contains_4 = (MR_Integer) 1;
#line 242 "deep_profiling.m"
            break;
#line 242 "deep_profiling.m"
          case (MR_Integer) 3:
#line 242 "deep_profiling.m"
#line 242 "deep_profiling.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 0)))) {
#line 242 "deep_profiling.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 242 "deep_profiling.m"
              case (MR_Integer) 0:
#line 249 "deep_profiling.m"
                ll_backend__deep_profiling__Contains_4 = (MR_Integer) 1;
#line 242 "deep_profiling.m"
                break;
#line 242 "deep_profiling.m"
              case (MR_Integer) 1:
#line 251 "deep_profiling.m"
                {
#line 251 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Attributes_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 1)));
#line 251 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__MayCallMercury_30;
#line 251 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 2)));
#line 251 "deep_profiling.m"
                  MR_Integer ll_backend__deep_profiling__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 3)));
#line 251 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 4)));
#line 251 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 5)));
#line 251 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 6)));
#line 251 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 7)));

#line 252 "deep_profiling.m"
                  {
#line 252 "deep_profiling.m"
                    ll_backend__deep_profiling__MayCallMercury_30 = parse_tree__prog_data__get_may_call_mercury_1_f_0(ll_backend__deep_profiling__Attributes_23);
                  }
#line 256 "deep_profiling.m"
#line 256 "deep_profiling.m"
                  switch (ll_backend__deep_profiling__MayCallMercury_30) {
#line 256 "deep_profiling.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 256 "deep_profiling.m"
                    case (MR_Integer) 0:
#line 259 "deep_profiling.m"
                      ll_backend__deep_profiling__Contains_4 = (MR_Integer) 1;
#line 256 "deep_profiling.m"
                      break;
#line 256 "deep_profiling.m"
                    case (MR_Integer) 1:
#line 255 "deep_profiling.m"
                      ll_backend__deep_profiling__Contains_4 = (MR_Integer) 0;
#line 256 "deep_profiling.m"
                      break;
#line 256 "deep_profiling.m"
                  }
#line 251 "deep_profiling.m"
                }
#line 242 "deep_profiling.m"
                break;
#line 242 "deep_profiling.m"
              case (MR_Integer) 2:
#line 264 "deep_profiling.m"
                {
#line 264 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Goals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 2)));
#line 262 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 1)));

#line 265 "deep_profiling.m"
                  {
#line 265 "deep_profiling.m"
                    return ll_backend__deep_profiling__Contains_4 = ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Goals_32);
                  }
#line 264 "deep_profiling.m"
                }
#line 242 "deep_profiling.m"
                break;
#line 242 "deep_profiling.m"
              case (MR_Integer) 3:
#line 264 "deep_profiling.m"
                {
#line 264 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Goals_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 1)));

#line 265 "deep_profiling.m"
                  {
#line 265 "deep_profiling.m"
                    return ll_backend__deep_profiling__Contains_4 = ll_backend__deep_profiling__goals_contain_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Goals_49);
                  }
#line 264 "deep_profiling.m"
                }
#line 242 "deep_profiling.m"
                break;
#line 242 "deep_profiling.m"
              case (MR_Integer) 4:
#line 267 "deep_profiling.m"
                {
#line 267 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Cases_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 3)));
#line 267 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 1)));
#line 267 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 2)));

#line 268 "deep_profiling.m"
                  {
#line 268 "deep_profiling.m"
                    return ll_backend__deep_profiling__Contains_4 = ll_backend__deep_profiling__cases_contain_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Cases_35);
                  }
#line 267 "deep_profiling.m"
                }
#line 242 "deep_profiling.m"
                break;
#line 242 "deep_profiling.m"
              case (MR_Integer) 5:
#line 283 "deep_profiling.m"
                {
#line 283 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__SubGoal_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 2)));
#line 282 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 1)));

#line 284 "deep_profiling.m"
                  /* direct tailcall eliminated */
#line 284 "deep_profiling.m"
                  {
#line 284 "deep_profiling.m"
                    MR_Word ll_backend__deep_profiling__Goal__tmp_copy_3 = ll_backend__deep_profiling__SubGoal_50;

#line 284 "deep_profiling.m"
                    ll_backend__deep_profiling__Goal_3 = ll_backend__deep_profiling__Goal__tmp_copy_3;
#line 284 "deep_profiling.m"
                  }
#line 284 "deep_profiling.m"
                  continue;
#line 283 "deep_profiling.m"
                }
#line 242 "deep_profiling.m"
                break;
#line 242 "deep_profiling.m"
              case (MR_Integer) 6:
#line 270 "deep_profiling.m"
                {
#line 270 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Cond_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 2)));
#line 270 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Then_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 3)));
#line 270 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__Else_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 4)));
#line 270 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__deep_profiling__GoalExpr_5, (MR_Integer) 1)));
#line 272 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_46_46;
#line 272 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_47_47;
#line 272 "deep_profiling.m"
                  MR_Word ll_backend__deep_profiling__V_48_48;

#line 272 "deep_profiling.m"
                  {
#line 272 "deep_profiling.m"
                    ll_backend__deep_profiling__V_46_46 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Cond_37);
                  }
#line 272 "deep_profiling.m"
                  ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_46_46 == (MR_Integer) 0);
#line 272 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 272 "deep_profiling.m"
                    {
#line 273 "deep_profiling.m"
                      {
#line 273 "deep_profiling.m"
                        ll_backend__deep_profiling__V_47_47 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Then_38);
                      }
#line 273 "deep_profiling.m"
                      ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_47_47 == (MR_Integer) 0);
#line 272 "deep_profiling.m"
                      if (ll_backend__deep_profiling__succeeded)
#line 272 "deep_profiling.m"
                        {
#line 274 "deep_profiling.m"
                          {
#line 274 "deep_profiling.m"
                            ll_backend__deep_profiling__V_48_48 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Else_39);
                          }
#line 274 "deep_profiling.m"
                          ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_48_48 == (MR_Integer) 0);
#line 272 "deep_profiling.m"
                        }
#line 272 "deep_profiling.m"
                    }
#line 277 "deep_profiling.m"
                  if (ll_backend__deep_profiling__succeeded)
#line 276 "deep_profiling.m"
                    ll_backend__deep_profiling__Contains_4 = (MR_Integer) 0;
#line 277 "deep_profiling.m"
                  else
#line 278 "deep_profiling.m"
                    ll_backend__deep_profiling__Contains_4 = (MR_Integer) 1;
#line 270 "deep_profiling.m"
                }
#line 242 "deep_profiling.m"
                break;
#line 242 "deep_profiling.m"
              case (MR_Integer) 7:
#line 286 "deep_profiling.m"
                {
#line 287 "deep_profiling.m"
                  {
#line 287 "deep_profiling.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "function \140ll_backend.deep_profiling.goal_contains_builtin_unify_or_compare\'/1", (MR_String) "shorthand");
                  }
#line 286 "deep_profiling.m"
                }
#line 242 "deep_profiling.m"
                break;
#line 242 "deep_profiling.m"
            }
#line 242 "deep_profiling.m"
            break;
#line 242 "deep_profiling.m"
        }
#line 237 "deep_profiling.m"
        return ll_backend__deep_profiling__Contains_4;
#line 237 "deep_profiling.m"
      }
#line 237 "deep_profiling.m"
      break;
#line 237 "deep_profiling.m"
    }
#line 235 "deep_profiling.m"
}

#line 217 "deep_profiling.m"
static MR_bool MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(
#line 217 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__1_1,
#line 217 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__2_2,
#line 217 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__HeadVar__3_3,
#line 217 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_4,
#line 217 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__HeadVar__5_5)
#line 217 "deep_profiling.m"
{
#line 220 "deep_profiling.m"
  {
#line 220 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;

#line 220 "deep_profiling.m"
    if ((ll_backend__deep_profiling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 220 "deep_profiling.m"
      {
#line 220 "deep_profiling.m"
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 220 "deep_profiling.m"
          {
#line 220 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 220 "deep_profiling.m"
              {
#line 220 "deep_profiling.m"
                *ll_backend__deep_profiling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 220 "deep_profiling.m"
                ll_backend__deep_profiling__succeeded = MR_TRUE;
#line 220 "deep_profiling.m"
              }
#line 220 "deep_profiling.m"
          }
#line 220 "deep_profiling.m"
      }
#line 220 "deep_profiling.m"
    else
#line 222 "deep_profiling.m"
      {
#line 222 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 0)));
#line 222 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Mode_9;
#line 222 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Modes_10;
#line 222 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Type_11;
#line 222 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Types_12;
#line 222 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__LaterOutputs_15;
#line 222 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__ArgMode_16;

#line 221 "deep_profiling.m"
        ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 221 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 221 "deep_profiling.m"
          {
#line 221 "deep_profiling.m"
            ll_backend__deep_profiling__Mode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 0)));
#line 221 "deep_profiling.m"
            ll_backend__deep_profiling__Modes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__2_2, (MR_Integer) 1)));
#line 221 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 221 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 221 "deep_profiling.m"
              {
#line 221 "deep_profiling.m"
                ll_backend__deep_profiling__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 0)));
#line 221 "deep_profiling.m"
                ll_backend__deep_profiling__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__HeadVar__3_3, (MR_Integer) 1)));
#line 223 "deep_profiling.m"
                {
#line 223 "deep_profiling.m"
                  ll_backend__deep_profiling__succeeded = ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(ll_backend__deep_profiling__Vars_8, ll_backend__deep_profiling__Modes_10, ll_backend__deep_profiling__Types_12, ll_backend__deep_profiling__ModuleInfo_4, &ll_backend__deep_profiling__LaterOutputs_15);
                }
#line 222 "deep_profiling.m"
                if (ll_backend__deep_profiling__succeeded)
#line 222 "deep_profiling.m"
                  {
#line 224 "deep_profiling.m"
                    {
#line 224 "deep_profiling.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__deep_profiling__ModuleInfo_4, ll_backend__deep_profiling__Mode_9, ll_backend__deep_profiling__Type_11, &ll_backend__deep_profiling__ArgMode_16);
                    }
#line 228 "deep_profiling.m"
#line 228 "deep_profiling.m"
                    switch (ll_backend__deep_profiling__ArgMode_16) {
#line 228 "deep_profiling.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 228 "deep_profiling.m"
                      case (MR_Integer) 0:
#line 227 "deep_profiling.m"
                        *ll_backend__deep_profiling__HeadVar__5_5 = ll_backend__deep_profiling__LaterOutputs_15;
#line 228 "deep_profiling.m"
                        break;
#line 228 "deep_profiling.m"
                      case (MR_Integer) 1:
#line 228 "deep_profiling.m"
                      case (MR_Integer) 2:
#line 232 "deep_profiling.m"
                        {
#line 232 "deep_profiling.m"
                          MR_Word base;
#line 232 "deep_profiling.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "deep_profiling.m"
                          *ll_backend__deep_profiling__HeadVar__5_5 = base;
#line 232 "deep_profiling.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_7));
#line 232 "deep_profiling.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__deep_profiling__LaterOutputs_15));
#line 232 "deep_profiling.m"
                        }
#line 228 "deep_profiling.m"
                        break;
#line 228 "deep_profiling.m"
                    }
#line 228 "deep_profiling.m"
                    ll_backend__deep_profiling__succeeded = MR_TRUE;
#line 222 "deep_profiling.m"
                  }
#line 221 "deep_profiling.m"
              }
#line 221 "deep_profiling.m"
          }
#line 222 "deep_profiling.m"
      }
#line 220 "deep_profiling.m"
    return ll_backend__deep_profiling__succeeded;
#line 220 "deep_profiling.m"
  }
#line 217 "deep_profiling.m"
}

#line 207 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__find_list_of_output_args_5_p_0(
#line 207 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Vars_6,
#line 207 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Modes_7,
#line 207 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Types_8,
#line 207 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_9,
#line 207 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_Outputs_11)
#line 207 "deep_profiling.m"
{
#line 213 "deep_profiling.m"
  {
#line 213 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 213 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_Outputs_12_12;

#line 211 "deep_profiling.m"
    {
#line 211 "deep_profiling.m"
      ll_backend__deep_profiling__succeeded = ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(ll_backend__deep_profiling__Vars_6, ll_backend__deep_profiling__Modes_7, ll_backend__deep_profiling__Types_8, ll_backend__deep_profiling__ModuleInfo_9, &ll_backend__deep_profiling__STATE_VARIABLE_Outputs_12_12);
    }
#line 213 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 213 "deep_profiling.m"
      *ll_backend__deep_profiling__STATE_VARIABLE_Outputs_11 = ll_backend__deep_profiling__STATE_VARIABLE_Outputs_12_12;
#line 213 "deep_profiling.m"
    else
#line 214 "deep_profiling.m"
      {
#line 214 "deep_profiling.m"
        {
#line 214 "deep_profiling.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.find_list_of_output_args\'/5", (MR_String) "list length mismatch");
#line 214 "deep_profiling.m"
          return;
        }
#line 214 "deep_profiling.m"
      }
#line 213 "deep_profiling.m"
  }
#line 207 "deep_profiling.m"
}

#line 128 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_prof_tail_rec_transform_to_scc_3_p_0(
#line 128 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__SCC_4,
#line 128 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7,
#line 128 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8)
#line 128 "deep_profiling.m"
{
#line 139 "deep_profiling.m"
  {
#line 139 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__SCC_4)) == (MR_mktag((MR_Integer) 1)));
#line 139 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredProcId_6;
#line 137 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_9_9;

#line 137 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 137 "deep_profiling.m"
      {
#line 137 "deep_profiling.m"
        ll_backend__deep_profiling__PredProcId_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__SCC_4, (MR_Integer) 0)));
#line 137 "deep_profiling.m"
        ll_backend__deep_profiling__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__SCC_4, (MR_Integer) 1)));
#line 137 "deep_profiling.m"
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "deep_profiling.m"
      }
#line 139 "deep_profiling.m"
    if (ll_backend__deep_profiling__succeeded)
#line 146 "deep_profiling.m"
      {
#line 146 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeCtorInfo_66_73;
#line 146 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeCtorInfo_67_74;
#line 146 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TypeCtorInfo_69_76;
#line 146 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_6, (MR_Integer) 0)));
#line 146 "deep_profiling.m"
        MR_Integer ll_backend__deep_profiling__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__PredProcId_6, (MR_Integer) 1)));
#line 146 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__PredTable0_17;
#line 146 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__PredInfo0_18;
#line 146 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Types_19;
#line 146 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Origin_20;
#line 146 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__ProcTable0_21;
#line 146 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__ProcInfo0_22;
#line 146 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goal0_23;
#line 146 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Detism_24;
#line 149 "deep_profiling.m"
        MR_Box ll_backend__deep_profiling__conv0_PredInfo0_18;
#line 153 "deep_profiling.m"
        MR_Box ll_backend__deep_profiling__conv1_ProcInfo0_22;
#line 203 "deep_profiling.m"
        MR_Integer ll_backend__deep_profiling__CloneProcId_30;
#line 203 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__ClonePredProcId_31;
#line 203 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Goal_33;
#line 157 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__SolnCount_26;
#line 157 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__HeadVars_27;
#line 157 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Modes_28;
#line 157 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__Outputs_29;
#line 157 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__TailRecInfo_32;
#line 157 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__FoundTailCall_34;
#line 157 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_51_51;
#line 157 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_52_52;
#line 157 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_53_53;
#line 157 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_54_54;
#line 157 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling___CanFail_25;
#line 213 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__STATE_VARIABLE_Outputs_12_83;
#line 167 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling___Continue_35;
#line 176 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_36_36;
#line 178 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_55_55;

#line 148 "deep_profiling.m"
        {
#line 148 "deep_profiling.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7, &ll_backend__deep_profiling__PredTable0_17);
        }
#line 15303 "ll_backend.deep_profiling.c"
        ll_backend__deep_profiling__TypeCtorInfo_66_73 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 15305 "ll_backend.deep_profiling.c"
        ll_backend__deep_profiling__TypeCtorInfo_67_74 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 149 "deep_profiling.m"
        {
#line 149 "deep_profiling.m"
          mercury__map__lookup_3_p_0(ll_backend__deep_profiling__TypeCtorInfo_66_73, ll_backend__deep_profiling__TypeCtorInfo_67_74, ll_backend__deep_profiling__PredTable0_17, ((MR_Box) (ll_backend__deep_profiling__PredId_15)), &ll_backend__deep_profiling__conv0_PredInfo0_18);
        }
#line 149 "deep_profiling.m"
        ll_backend__deep_profiling__PredInfo0_18 = ((MR_Word) ll_backend__deep_profiling__conv0_PredInfo0_18);
#line 150 "deep_profiling.m"
        {
#line 150 "deep_profiling.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ll_backend__deep_profiling__PredInfo0_18, &ll_backend__deep_profiling__Types_19);
        }
#line 151 "deep_profiling.m"
        {
#line 151 "deep_profiling.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__deep_profiling__PredInfo0_18, &ll_backend__deep_profiling__Origin_20);
        }
#line 152 "deep_profiling.m"
        {
#line 152 "deep_profiling.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__deep_profiling__PredInfo0_18, &ll_backend__deep_profiling__ProcTable0_21);
        }
#line 15329 "ll_backend.deep_profiling.c"
        ll_backend__deep_profiling__TypeCtorInfo_69_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 153 "deep_profiling.m"
        {
#line 153 "deep_profiling.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(ll_backend__deep_profiling__TypeCtorInfo_69_76, ll_backend__deep_profiling__ProcTable0_21, ll_backend__deep_profiling__ProcId_16, &ll_backend__deep_profiling__conv1_ProcInfo0_22);
        }
#line 153 "deep_profiling.m"
        ll_backend__deep_profiling__ProcInfo0_22 = ((MR_Word) ll_backend__deep_profiling__conv1_ProcInfo0_22);
#line 154 "deep_profiling.m"
        {
#line 154 "deep_profiling.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__deep_profiling__ProcInfo0_22, &ll_backend__deep_profiling__Goal0_23);
        }
#line 155 "deep_profiling.m"
        {
#line 155 "deep_profiling.m"
          hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ll_backend__deep_profiling__ProcInfo0_22, &ll_backend__deep_profiling__Detism_24);
        }
#line 157 "deep_profiling.m"
        {
#line 157 "deep_profiling.m"
          parse_tree__prog_data__determinism_components_3_p_0(ll_backend__deep_profiling__Detism_24, &ll_backend__deep_profiling___CanFail_25, &ll_backend__deep_profiling__SolnCount_26);
        }
#line 158 "deep_profiling.m"
        ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__SolnCount_26 == (MR_Integer) 3);
#line 158 "deep_profiling.m"
        ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 157 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 157 "deep_profiling.m"
          {
#line 159 "deep_profiling.m"
            {
#line 159 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__deep_profiling__ProcInfo0_22, &ll_backend__deep_profiling__HeadVars_27);
            }
#line 160 "deep_profiling.m"
            {
#line 160 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__deep_profiling__ProcInfo0_22, &ll_backend__deep_profiling__Modes_28);
            }
#line 211 "deep_profiling.m"
            {
#line 211 "deep_profiling.m"
              ll_backend__deep_profiling__succeeded = ll_backend__deep_profiling__find_list_of_output_args_2_5_p_0(ll_backend__deep_profiling__HeadVars_27, ll_backend__deep_profiling__Modes_28, ll_backend__deep_profiling__Types_19, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7, &ll_backend__deep_profiling__STATE_VARIABLE_Outputs_12_83);
            }
#line 213 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 213 "deep_profiling.m"
              ll_backend__deep_profiling__Outputs_29 = ll_backend__deep_profiling__STATE_VARIABLE_Outputs_12_83;
#line 213 "deep_profiling.m"
            else
#line 214 "deep_profiling.m"
              {
#line 214 "deep_profiling.m"
                {
#line 214 "deep_profiling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.find_list_of_output_args\'/5", (MR_String) "list length mismatch");
#line 214 "deep_profiling.m"
                  return;
                }
#line 214 "deep_profiling.m"
              }
#line 163 "deep_profiling.m"
            {
#line 163 "deep_profiling.m"
              hlds__hlds_pred__clone_proc_id_3_p_0(ll_backend__deep_profiling__ProcTable0_21, ll_backend__deep_profiling__ProcId_16, &ll_backend__deep_profiling__CloneProcId_30);
            }
#line 166 "deep_profiling.m"
            ll_backend__deep_profiling__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 168 "deep_profiling.m"
            ll_backend__deep_profiling__V_54_54 = (MR_Integer) 0;
#line 164 "deep_profiling.m"
            {
#line 164 "deep_profiling.m"
              ll_backend__deep_profiling__ClonePredProcId_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 164 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ClonePredProcId_31, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_15));
#line 164 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__ClonePredProcId_31, 1) = ((MR_Box) (ll_backend__deep_profiling__CloneProcId_30));
#line 164 "deep_profiling.m"
            }
#line 166 "deep_profiling.m"
            {
#line 166 "deep_profiling.m"
              ll_backend__deep_profiling__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 166 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_52_52, 0) = ((MR_Box) (ll_backend__deep_profiling__PredProcId_6));
#line 166 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_52_52, 1) = ((MR_Box) (ll_backend__deep_profiling__ClonePredProcId_31));
#line 166 "deep_profiling.m"
            }
#line 166 "deep_profiling.m"
            {
#line 166 "deep_profiling.m"
              ll_backend__deep_profiling__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_51_51, 0) = ((MR_Box) (ll_backend__deep_profiling__V_52_52));
#line 166 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_51_51, 1) = ((MR_Box) (ll_backend__deep_profiling__V_53_53));
#line 166 "deep_profiling.m"
            }
#line 165 "deep_profiling.m"
            {
#line 165 "deep_profiling.m"
              ll_backend__deep_profiling__TailRecInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 165 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_32, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7));
#line 165 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_32, 1) = ((MR_Box) (ll_backend__deep_profiling__V_51_51));
#line 165 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_32, 2) = ((MR_Box) (ll_backend__deep_profiling__Detism_24));
#line 165 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__TailRecInfo_32, 3) = ((MR_Box) (ll_backend__deep_profiling__Outputs_29));
#line 165 "deep_profiling.m"
            }
#line 167 "deep_profiling.m"
            {
#line 167 "deep_profiling.m"
              ll_backend__deep_profiling__apply_deep_prof_tail_rec_to_goal_6_p_0(ll_backend__deep_profiling__Goal0_23, &ll_backend__deep_profiling__Goal_33, ll_backend__deep_profiling__TailRecInfo_32, ll_backend__deep_profiling__V_54_54, &ll_backend__deep_profiling__FoundTailCall_34, &ll_backend__deep_profiling___Continue_35);
            }
#line 169 "deep_profiling.m"
            ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__FoundTailCall_34 == (MR_Integer) 1);
#line 157 "deep_profiling.m"
            if (ll_backend__deep_profiling__succeeded)
#line 157 "deep_profiling.m"
              {
#line 176 "deep_profiling.m"
                ll_backend__deep_profiling__succeeded = ((MR_tag((MR_Word) ll_backend__deep_profiling__Origin_20)) == (MR_mktag((MR_Integer) 0)));
#line 176 "deep_profiling.m"
                if (ll_backend__deep_profiling__succeeded)
#line 176 "deep_profiling.m"
                  {
#line 176 "deep_profiling.m"
                    ll_backend__deep_profiling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__Origin_20, (MR_Integer) 0)));
#line 178 "deep_profiling.m"
                    {
#line 178 "deep_profiling.m"
                      ll_backend__deep_profiling__V_55_55 = ll_backend__deep_profiling__goal_contains_builtin_unify_or_compare_1_f_0(ll_backend__deep_profiling__Goal_33);
                    }
#line 178 "deep_profiling.m"
                    ll_backend__deep_profiling__succeeded = (ll_backend__deep_profiling__V_55_55 == (MR_Integer) 0);
#line 177 "deep_profiling.m"
                    ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 176 "deep_profiling.m"
                  }
#line 177 "deep_profiling.m"
                ll_backend__deep_profiling__succeeded = !(ll_backend__deep_profiling__succeeded);
#line 157 "deep_profiling.m"
              }
#line 157 "deep_profiling.m"
          }
#line 203 "deep_profiling.m"
        if (ll_backend__deep_profiling__succeeded)
#line 181 "deep_profiling.m"
          {
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__ProcInfo1_37;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__TailCallSites_39;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__OrigDeepRecInfo_40;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__DeepOriginalBody_41;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__OrigDeepProfileInfo_42;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__CloneDeepRecInfo_43;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__CloneDeepProfileInfo_44;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__ProcInfo_45;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__CloneProcInfo_46;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__ProcTable1_47;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__ProcTable_48;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__PredInfo_49;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__PredTable_50;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_58_58;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_59_59;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_60_60;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_61_61;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_64_64;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_65_65;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_70_70;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__V_71_71;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Body_91;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__HeadVars_92;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Instmap_93;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Vartypes_94;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__MaybeDetism_95;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Detism_96;
#line 181 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Varset_97;
#line 182 "deep_profiling.m"
            MR_Integer ll_backend__deep_profiling___Num_38;

#line 181 "deep_profiling.m"
            {
#line 181 "deep_profiling.m"
              hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__deep_profiling__Goal_33, ll_backend__deep_profiling__ProcInfo0_22, &ll_backend__deep_profiling__ProcInfo1_37);
            }
#line 182 "deep_profiling.m"
            {
#line 182 "deep_profiling.m"
              ll_backend__deep_profiling__figure_out_rec_call_numbers_5_p_0(ll_backend__deep_profiling__Goal_33, (MR_Integer) 0, &ll_backend__deep_profiling___Num_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__deep_profiling__TailCallSites_39);
            }
#line 184 "deep_profiling.m"
            ll_backend__deep_profiling__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ll_backend__deep_profiling__ClonePredProcId_31);
#line 185 "deep_profiling.m"
            {
#line 185 "deep_profiling.m"
              ll_backend__deep_profiling__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 185 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_61_61, 0) = ((MR_Box) (ll_backend__deep_profiling__PredProcId_6));
#line 185 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_61_61, 1) = ((MR_Box) (ll_backend__deep_profiling__ClonePredProcId_31));
#line 185 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_61_61, 2) = ((MR_Box) (ll_backend__deep_profiling__TailCallSites_39));
#line 185 "deep_profiling.m"
            }
#line 185 "deep_profiling.m"
            {
#line 185 "deep_profiling.m"
              ll_backend__deep_profiling__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_60_60, 0) = ((MR_Box) (ll_backend__deep_profiling__V_61_61));
#line 185 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "deep_profiling.m"
            }
#line 183 "deep_profiling.m"
            {
#line 183 "deep_profiling.m"
              ll_backend__deep_profiling__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_58_58, 0) = ((MR_Box) (ll_backend__deep_profiling__V_59_59));
#line 183 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_58_58, 1) = ((MR_Box) (ll_backend__deep_profiling__V_60_60));
#line 183 "deep_profiling.m"
            }
#line 183 "deep_profiling.m"
            {
#line 183 "deep_profiling.m"
              ll_backend__deep_profiling__OrigDeepRecInfo_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__OrigDeepRecInfo_40, 0) = ((MR_Box) (ll_backend__deep_profiling__V_58_58));
#line 183 "deep_profiling.m"
            }
#line 656 "deep_profiling.m"
            {
#line 656 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__deep_profiling__ProcInfo0_22, &ll_backend__deep_profiling__Body_91);
            }
#line 657 "deep_profiling.m"
            {
#line 657 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__deep_profiling__ProcInfo0_22, &ll_backend__deep_profiling__HeadVars_92);
            }
#line 658 "deep_profiling.m"
            {
#line 658 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__deep_profiling__ProcInfo0_22, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7, &ll_backend__deep_profiling__Instmap_93);
            }
#line 659 "deep_profiling.m"
            {
#line 659 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__deep_profiling__ProcInfo0_22, &ll_backend__deep_profiling__Vartypes_94);
            }
#line 660 "deep_profiling.m"
            {
#line 660 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ll_backend__deep_profiling__ProcInfo0_22, &ll_backend__deep_profiling__MaybeDetism_95);
            }
#line 663 "deep_profiling.m"
            if ((ll_backend__deep_profiling__MaybeDetism_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "deep_profiling.m"
              {
#line 665 "deep_profiling.m"
                hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ll_backend__deep_profiling__ProcInfo0_22, &ll_backend__deep_profiling__Detism_96);
              }
#line 663 "deep_profiling.m"
            else
#line 662 "deep_profiling.m"
              ll_backend__deep_profiling__Detism_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeDetism_95, (MR_Integer) 0)));
#line 667 "deep_profiling.m"
            {
#line 667 "deep_profiling.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__deep_profiling__ProcInfo0_22, &ll_backend__deep_profiling__Varset_97);
            }
#line 668 "deep_profiling.m"
            {
#line 668 "deep_profiling.m"
              ll_backend__deep_profiling__DeepOriginalBody_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 668 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepOriginalBody_41, 0) = ((MR_Box) (ll_backend__deep_profiling__Body_91));
#line 668 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepOriginalBody_41, 1) = ((MR_Box) (ll_backend__deep_profiling__HeadVars_92));
#line 668 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepOriginalBody_41, 2) = ((MR_Box) (ll_backend__deep_profiling__Instmap_93));
#line 668 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepOriginalBody_41, 3) = ((MR_Box) (ll_backend__deep_profiling__Vartypes_94));
#line 668 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepOriginalBody_41, 4) = ((MR_Box) (ll_backend__deep_profiling__Detism_96));
#line 668 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__DeepOriginalBody_41, 5) = ((MR_Box) (ll_backend__deep_profiling__Varset_97));
#line 668 "deep_profiling.m"
            }
#line 187 "deep_profiling.m"
            {
#line 187 "deep_profiling.m"
              ll_backend__deep_profiling__OrigDeepProfileInfo_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 187 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigDeepProfileInfo_42, 0) = ((MR_Box) (ll_backend__deep_profiling__OrigDeepRecInfo_40));
#line 187 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigDeepProfileInfo_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__OrigDeepProfileInfo_42, 2) = ((MR_Box) (ll_backend__deep_profiling__DeepOriginalBody_41));
#line 187 "deep_profiling.m"
            }
#line 190 "deep_profiling.m"
            ll_backend__deep_profiling__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__deep_profiling__PredProcId_6);
#line 189 "deep_profiling.m"
            {
#line 189 "deep_profiling.m"
              ll_backend__deep_profiling__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_64_64, 0) = ((MR_Box) (ll_backend__deep_profiling__V_65_65));
#line 189 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_64_64, 1) = ((MR_Box) (ll_backend__deep_profiling__V_60_60));
#line 189 "deep_profiling.m"
            }
#line 189 "deep_profiling.m"
            {
#line 189 "deep_profiling.m"
              ll_backend__deep_profiling__CloneDeepRecInfo_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 189 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__CloneDeepRecInfo_43, 0) = ((MR_Box) (ll_backend__deep_profiling__V_64_64));
#line 189 "deep_profiling.m"
            }
#line 192 "deep_profiling.m"
            {
#line 192 "deep_profiling.m"
              ll_backend__deep_profiling__CloneDeepProfileInfo_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 192 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CloneDeepProfileInfo_44, 0) = ((MR_Box) (ll_backend__deep_profiling__CloneDeepRecInfo_43));
#line 192 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CloneDeepProfileInfo_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "deep_profiling.m"
              MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__CloneDeepProfileInfo_44, 2) = ((MR_Box) (ll_backend__deep_profiling__DeepOriginalBody_41));
#line 192 "deep_profiling.m"
            }
#line 194 "deep_profiling.m"
            {
#line 194 "deep_profiling.m"
              ll_backend__deep_profiling__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 194 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_70_70, 0) = ((MR_Box) (ll_backend__deep_profiling__OrigDeepProfileInfo_42));
#line 194 "deep_profiling.m"
            }
#line 194 "deep_profiling.m"
            {
#line 194 "deep_profiling.m"
              hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_p_0(ll_backend__deep_profiling__V_70_70, ll_backend__deep_profiling__ProcInfo1_37, &ll_backend__deep_profiling__ProcInfo_45);
            }
#line 196 "deep_profiling.m"
            {
#line 196 "deep_profiling.m"
              ll_backend__deep_profiling__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 196 "deep_profiling.m"
              MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_71_71, 0) = ((MR_Box) (ll_backend__deep_profiling__CloneDeepProfileInfo_44));
#line 196 "deep_profiling.m"
            }
#line 196 "deep_profiling.m"
            {
#line 196 "deep_profiling.m"
              hlds__hlds_pred__proc_info_set_maybe_deep_profile_info_3_p_0(ll_backend__deep_profiling__V_71_71, ll_backend__deep_profiling__ProcInfo1_37, &ll_backend__deep_profiling__CloneProcInfo_46);
            }
#line 198 "deep_profiling.m"
            {
#line 198 "deep_profiling.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(ll_backend__deep_profiling__TypeCtorInfo_69_76, ll_backend__deep_profiling__ProcId_16, ((MR_Box) (ll_backend__deep_profiling__ProcInfo_45)), ll_backend__deep_profiling__ProcTable0_21, &ll_backend__deep_profiling__ProcTable1_47);
            }
#line 199 "deep_profiling.m"
            {
#line 199 "deep_profiling.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(ll_backend__deep_profiling__TypeCtorInfo_69_76, ll_backend__deep_profiling__CloneProcId_30, ((MR_Box) (ll_backend__deep_profiling__CloneProcInfo_46)), ll_backend__deep_profiling__ProcTable1_47, &ll_backend__deep_profiling__ProcTable_48);
            }
#line 200 "deep_profiling.m"
            {
#line 200 "deep_profiling.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ll_backend__deep_profiling__ProcTable_48, ll_backend__deep_profiling__PredInfo0_18, &ll_backend__deep_profiling__PredInfo_49);
            }
#line 201 "deep_profiling.m"
            {
#line 201 "deep_profiling.m"
              mercury__map__det_update_4_p_0(ll_backend__deep_profiling__TypeCtorInfo_66_73, ll_backend__deep_profiling__TypeCtorInfo_67_74, ((MR_Box) (ll_backend__deep_profiling__PredId_15)), ((MR_Box) (ll_backend__deep_profiling__PredInfo_49)), ll_backend__deep_profiling__PredTable0_17, &ll_backend__deep_profiling__PredTable_50);
            }
#line 202 "deep_profiling.m"
            {
#line 202 "deep_profiling.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(ll_backend__deep_profiling__PredTable_50, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8);
#line 202 "deep_profiling.m"
              return;
            }
#line 181 "deep_profiling.m"
          }
#line 203 "deep_profiling.m"
        else
#line 203 "deep_profiling.m"
          *ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8 = ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7;
#line 146 "deep_profiling.m"
      }
#line 139 "deep_profiling.m"
    else
#line 139 "deep_profiling.m"
      *ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8 = ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_7;
#line 139 "deep_profiling.m"
  }
#line 128 "deep_profiling.m"
}

#line 46 "deep_profiling.m"
void MR_CALL 
ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_p_0(
#line 46 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_6,
#line 46 "deep_profiling.m"
  MR_String ll_backend__deep_profiling__Name_7,
#line 46 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__Arity_8,
#line 46 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__PredId_9,
#line 46 "deep_profiling.m"
  MR_Integer * ll_backend__deep_profiling__ProcId_10)
#line 46 "deep_profiling.m"
{
#line 1894 "deep_profiling.m"
  {
#line 1894 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1894 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__ModuleName_11;
#line 1894 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredTable_12;
#line 1894 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredIds_13;

#line 1895 "deep_profiling.m"
    {
#line 1895 "deep_profiling.m"
      ll_backend__deep_profiling__ModuleName_11 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
    }
#line 1896 "deep_profiling.m"
    {
#line 1896 "deep_profiling.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ll_backend__deep_profiling__ModuleInfo_6, &ll_backend__deep_profiling__PredTable_12);
    }
#line 1897 "deep_profiling.m"
    {
#line 1897 "deep_profiling.m"
      hlds__pred_table__predicate_table_lookup_pred_m_n_a_6_p_0(ll_backend__deep_profiling__PredTable_12, (MR_Integer) 0, ll_backend__deep_profiling__ModuleName_11, ll_backend__deep_profiling__Name_7, ll_backend__deep_profiling__Arity_8, &ll_backend__deep_profiling__PredIds_13);
    }
#line 1902 "deep_profiling.m"
    if ((ll_backend__deep_profiling__PredIds_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1900 "deep_profiling.m"
      {
#line 1901 "deep_profiling.m"
        {
#line 1901 "deep_profiling.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.get_deep_profile_builtin_ppid\'/5", (MR_String) "no pred_id");
#line 1901 "deep_profiling.m"
          return;
        }
#line 1900 "deep_profiling.m"
      }
#line 1902 "deep_profiling.m"
    else
#line 1902 "deep_profiling.m"
      {
#line 1902 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__PredIds_13, (MR_Integer) 1)));
#line 1902 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__PredIds_13, (MR_Integer) 0)));

#line 1902 "deep_profiling.m"
        if ((ll_backend__deep_profiling__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1903 "deep_profiling.m"
          {
#line 1903 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__Preds_14;
#line 1903 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__PredInfo_15;
#line 1903 "deep_profiling.m"
            MR_Word ll_backend__deep_profiling__ProcIds_16;
#line 1905 "deep_profiling.m"
            MR_Box ll_backend__deep_profiling__conv0_PredInfo_15;

#line 1903 "deep_profiling.m"
            *ll_backend__deep_profiling__PredId_9 = ll_backend__deep_profiling__V_43_43;
#line 1904 "deep_profiling.m"
            {
#line 1904 "deep_profiling.m"
              hlds__pred_table__predicate_table_get_preds_2_p_0(ll_backend__deep_profiling__PredTable_12, &ll_backend__deep_profiling__Preds_14);
            }
#line 1905 "deep_profiling.m"
            {
#line 1905 "deep_profiling.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__deep_profiling__Preds_14, ((MR_Box) (*ll_backend__deep_profiling__PredId_9)), &ll_backend__deep_profiling__conv0_PredInfo_15);
            }
#line 1905 "deep_profiling.m"
            ll_backend__deep_profiling__PredInfo_15 = ((MR_Word) ll_backend__deep_profiling__conv0_PredInfo_15);
#line 1906 "deep_profiling.m"
            {
#line 1906 "deep_profiling.m"
              ll_backend__deep_profiling__ProcIds_16 = hlds__hlds_pred__pred_info_procids_1_f_0(ll_backend__deep_profiling__PredInfo_15);
            }
#line 1910 "deep_profiling.m"
            if ((ll_backend__deep_profiling__ProcIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1908 "deep_profiling.m"
              {
#line 1909 "deep_profiling.m"
                {
#line 1909 "deep_profiling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.get_deep_profile_builtin_ppid\'/5", (MR_String) "no proc_id");
#line 1909 "deep_profiling.m"
                  return;
                }
#line 1908 "deep_profiling.m"
              }
#line 1910 "deep_profiling.m"
            else
#line 1910 "deep_profiling.m"
              {
#line 1910 "deep_profiling.m"
                MR_Word ll_backend__deep_profiling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__ProcIds_16, (MR_Integer) 1)));
#line 1910 "deep_profiling.m"
                MR_Integer ll_backend__deep_profiling__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__ProcIds_16, (MR_Integer) 0)));

#line 1910 "deep_profiling.m"
                if ((ll_backend__deep_profiling__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1911 "deep_profiling.m"
                  *ll_backend__deep_profiling__ProcId_10 = ll_backend__deep_profiling__V_45_45;
#line 1910 "deep_profiling.m"
                else
#line 1913 "deep_profiling.m"
                  {
#line 1914 "deep_profiling.m"
                    {
#line 1914 "deep_profiling.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.get_deep_profile_builtin_ppid\'/5", (MR_String) "proc_id not unique");
#line 1914 "deep_profiling.m"
                      return;
                    }
#line 1913 "deep_profiling.m"
                  }
#line 1910 "deep_profiling.m"
              }
#line 1903 "deep_profiling.m"
          }
#line 1902 "deep_profiling.m"
        else
#line 1917 "deep_profiling.m"
          {
#line 1918 "deep_profiling.m"
            {
#line 1918 "deep_profiling.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.deep_profiling", (MR_String) "predicate \140ll_backend.deep_profiling.get_deep_profile_builtin_ppid\'/5", (MR_String) "pred_id not unique");
#line 1918 "deep_profiling.m"
              return;
            }
#line 1917 "deep_profiling.m"
          }
#line 1902 "deep_profiling.m"
      }
#line 1894 "deep_profiling.m"
  }
#line 46 "deep_profiling.m"
}

#line 43 "deep_profiling.m"
void MR_CALL 
ll_backend__deep_profiling__generate_deep_const_unify_3_p_0(
#line 43 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ConsId_4,
#line 43 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Var_5,
#line 43 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_6)
#line 43 "deep_profiling.m"
{
#line 1803 "deep_profiling.m"
  {
#line 1803 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1803 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__NonLocals_8;
#line 1803 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__InstMapDelta_9;
#line 1803 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo1_11;
#line 1803 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo_12;
#line 1803 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalExpr_13;
#line 1803 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_18_18;
#line 1803 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_26_26;

#line 1805 "deep_profiling.m"
    {
#line 1805 "deep_profiling.m"
      ll_backend__deep_profiling__NonLocals_8 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__Var_5);
    }
#line 1806 "deep_profiling.m"
    {
#line 1806 "deep_profiling.m"
      ll_backend__deep_profiling__InstMapDelta_9 = hlds__instmap__instmap_delta_bind_var_1_f_0(ll_backend__deep_profiling__Var_5);
    }
#line 1808 "deep_profiling.m"
    {
#line 1808 "deep_profiling.m"
      hlds__hlds_goal__goal_info_init_5_p_0(ll_backend__deep_profiling__NonLocals_8, ll_backend__deep_profiling__InstMapDelta_9, (MR_Integer) 0, (MR_Integer) 0, &ll_backend__deep_profiling__GoalInfo1_11);
    }
#line 1810 "deep_profiling.m"
    {
#line 1810 "deep_profiling.m"
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__GoalInfo1_11, &ll_backend__deep_profiling__GoalInfo_12);
    }
#line 1811 "deep_profiling.m"
    {
#line 1811 "deep_profiling.m"
      ll_backend__deep_profiling__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1811 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_18_18, 0) = ((MR_Box) (ll_backend__deep_profiling__ConsId_4));
#line 1811 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_18_18, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1811 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__V_18_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1811 "deep_profiling.m"
    }
#line 1813 "deep_profiling.m"
    {
#line 1813 "deep_profiling.m"
      ll_backend__deep_profiling__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1813 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_26_26, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_5));
#line 1813 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_26_26, 1) = ((MR_Box) (ll_backend__deep_profiling__ConsId_4));
#line 1813 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_26_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1813 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_26_26, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1813 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_26_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1813 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_26_26, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1813 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_26_26, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1813 "deep_profiling.m"
    }
#line 1811 "deep_profiling.m"
    {
#line 1811 "deep_profiling.m"
      ll_backend__deep_profiling__GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1811 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_13, 0) = ((MR_Box) (ll_backend__deep_profiling__Var_5));
#line 1811 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_13, 1) = ((MR_Box) (ll_backend__deep_profiling__V_18_18));
#line 1811 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_13, 2) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[8]));
#line 1811 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_13, 3) = ((MR_Box) (ll_backend__deep_profiling__V_26_26));
#line 1811 "deep_profiling.m"
      MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__GoalExpr_13, 4) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_2[9]));
#line 1811 "deep_profiling.m"
    }
#line 1816 "deep_profiling.m"
    {
#line 1816 "deep_profiling.m"
      MR_Word base;
#line 1816 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1816 "deep_profiling.m"
      *ll_backend__deep_profiling__Goal_6 = base;
#line 1816 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_13));
#line 1816 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_12));
#line 1816 "deep_profiling.m"
    }
#line 1803 "deep_profiling.m"
  }
#line 43 "deep_profiling.m"
}

#line 39 "deep_profiling.m"
void MR_CALL 
ll_backend__deep_profiling__generate_deep_call_7_p_0(
#line 39 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ModuleInfo_8,
#line 39 "deep_profiling.m"
  MR_String ll_backend__deep_profiling__Name_9,
#line 39 "deep_profiling.m"
  MR_Integer ll_backend__deep_profiling__Arity_10,
#line 39 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__ArgVars_11,
#line 39 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__MaybeOutputVars_12,
#line 39 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Detism_13,
#line 39 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Goal_14)
#line 39 "deep_profiling.m"
{
#line 1787 "deep_profiling.m"
  {
#line 1787 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1787 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredId_15;
#line 1787 "deep_profiling.m"
    MR_Integer ll_backend__deep_profiling__ProcId_16;
#line 1787 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__NonLocals_17;
#line 1787 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__InstMapDelta_19;
#line 1787 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__SymName_20;
#line 1787 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalExpr_21;
#line 1787 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo1_22;
#line 1787 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__GoalInfo_23;

#line 1788 "deep_profiling.m"
    {
#line 1788 "deep_profiling.m"
      ll_backend__deep_profiling__get_deep_profile_builtin_ppid_5_p_0(ll_backend__deep_profiling__ModuleInfo_8, ll_backend__deep_profiling__Name_9, ll_backend__deep_profiling__Arity_10, &ll_backend__deep_profiling__PredId_15, &ll_backend__deep_profiling__ProcId_16);
    }
#line 1789 "deep_profiling.m"
    {
#line 1789 "deep_profiling.m"
      ll_backend__deep_profiling__NonLocals_17 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__ArgVars_11);
    }
#line 1793 "deep_profiling.m"
    if ((ll_backend__deep_profiling__MaybeOutputVars_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1795 "deep_profiling.m"
      {
#line 1795 "deep_profiling.m"
        hlds__instmap__instmap_delta_init_unreachable_1_p_0(&ll_backend__deep_profiling__InstMapDelta_19);
      }
#line 1793 "deep_profiling.m"
    else
#line 1791 "deep_profiling.m"
      {
#line 1791 "deep_profiling.m"
        MR_Word ll_backend__deep_profiling__OutputVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__deep_profiling__MaybeOutputVars_12, (MR_Integer) 0)));

#line 1792 "deep_profiling.m"
        {
#line 1792 "deep_profiling.m"
          ll_backend__deep_profiling__InstMapDelta_19 = hlds__instmap__instmap_delta_bind_vars_1_f_0(ll_backend__deep_profiling__OutputVars_18);
        }
#line 1791 "deep_profiling.m"
      }
#line 1797 "deep_profiling.m"
    {
#line 1797 "deep_profiling.m"
      ll_backend__deep_profiling__SymName_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1797 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__SymName_20, 0) = ((MR_Box) (ll_backend__deep_profiling__Name_9));
#line 1797 "deep_profiling.m"
    }
#line 1798 "deep_profiling.m"
    {
#line 1798 "deep_profiling.m"
      ll_backend__deep_profiling__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1798 "deep_profiling.m"
      MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_21, 0) = ((MR_Box) (ll_backend__deep_profiling__PredId_15));
#line 1798 "deep_profiling.m"
      MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_21, 1) = ((MR_Box) (ll_backend__deep_profiling__ProcId_16));
#line 1798 "deep_profiling.m"
      MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_21, 2) = ((MR_Box) (ll_backend__deep_profiling__ArgVars_11));
#line 1798 "deep_profiling.m"
      MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_21, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1798 "deep_profiling.m"
      MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1798 "deep_profiling.m"
      MR_hl_field(MR_mktag(2), ll_backend__deep_profiling__GoalExpr_21, 5) = ((MR_Box) (ll_backend__deep_profiling__SymName_20));
#line 1798 "deep_profiling.m"
    }
#line 1799 "deep_profiling.m"
    {
#line 1799 "deep_profiling.m"
      ll_backend__deep_profiling__GoalInfo1_22 = hlds__hlds_goal__impure_init_goal_info_3_f_0(ll_backend__deep_profiling__NonLocals_17, ll_backend__deep_profiling__InstMapDelta_19, ll_backend__deep_profiling__Detism_13);
    }
#line 1800 "deep_profiling.m"
    {
#line 1800 "deep_profiling.m"
      hlds__hlds_goal__goal_info_set_mdprof_inst_3_p_0((MR_Integer) 0, ll_backend__deep_profiling__GoalInfo1_22, &ll_backend__deep_profiling__GoalInfo_23);
    }
#line 1801 "deep_profiling.m"
    {
#line 1801 "deep_profiling.m"
      MR_Word base;
#line 1801 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1801 "deep_profiling.m"
      *ll_backend__deep_profiling__Goal_14 = base;
#line 1801 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__GoalExpr_21));
#line 1801 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__GoalInfo_23));
#line 1801 "deep_profiling.m"
    }
#line 1787 "deep_profiling.m"
  }
#line 39 "deep_profiling.m"
}

#line 36 "deep_profiling.m"
void MR_CALL 
ll_backend__deep_profiling__generate_var_5_p_0(
#line 36 "deep_profiling.m"
  MR_String ll_backend__deep_profiling__Name_6,
#line 36 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__Type_7,
#line 36 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__Var_8,
#line 36 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_12,
#line 36 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_13)
#line 36 "deep_profiling.m"
{
#line 1840 "deep_profiling.m"
  {
#line 1840 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 1840 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_12, (MR_Integer) 0)));
#line 1840 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_0_12, (MR_Integer) 1)));
#line 1840 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_16;
#line 1840 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_17;

#line 1852 "deep_profiling.m"
    {
#line 1852 "deep_profiling.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__deep_profiling__Name_6, ll_backend__deep_profiling__Var_8, ll_backend__deep_profiling__STATE_VARIABLE_VarSet_14_14, &ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_16);
    }
#line 1853 "deep_profiling.m"
    {
#line 1853 "deep_profiling.m"
      hlds__vartypes__add_var_type_4_p_0(*ll_backend__deep_profiling__Var_8, ll_backend__deep_profiling__Type_7, ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_15_15, &ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_17);
    }
#line 1842 "deep_profiling.m"
    {
#line 1842 "deep_profiling.m"
      MR_Word base;
#line 1842 "deep_profiling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1842 "deep_profiling.m"
      *ll_backend__deep_profiling__STATE_VARIABLE_VarInfo_13 = base;
#line 1842 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarSet_16_16));
#line 1842 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_VarTypes_17_17));
#line 1842 "deep_profiling.m"
    }
#line 1840 "deep_profiling.m"
  }
#line 36 "deep_profiling.m"
}

#line 112 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_2(
#line 112 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 112 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 112 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
#line 112 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_3)
#line 112 "deep_profiling.m"
{
#line 112 "deep_profiling.m"
  {
#line 112 "deep_profiling.m"
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
#line 112 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__conv2_STATE_VARIABLE_PredMap_14;

#line 112 "deep_profiling.m"
    {
#line 112 "deep_profiling.m"
      ll_backend__deep_profiling__deep_prof_transform_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2), &ll_backend__deep_profiling__conv2_STATE_VARIABLE_PredMap_14);
    }
#line 112 "deep_profiling.m"
    *ll_backend__deep_profiling__wrapper_arg_3 = ((MR_Box) (ll_backend__deep_profiling__conv2_STATE_VARIABLE_PredMap_14));
#line 112 "deep_profiling.m"
  }
#line 112 "deep_profiling.m"
}

#line 126 "deep_profiling.m"
static void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_1(
#line 126 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__closure_arg,
#line 126 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_1,
#line 126 "deep_profiling.m"
  MR_Box ll_backend__deep_profiling__wrapper_arg_2,
#line 126 "deep_profiling.m"
  MR_Box * ll_backend__deep_profiling__wrapper_arg_3)
#line 126 "deep_profiling.m"
{
#line 126 "deep_profiling.m"
  {
#line 126 "deep_profiling.m"
    MR_Box ll_backend__deep_profiling__closure = ll_backend__deep_profiling__closure_arg;
#line 126 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__conv0_STATE_VARIABLE_ModuleInfo_8;

#line 126 "deep_profiling.m"
    {
#line 126 "deep_profiling.m"
      ll_backend__deep_profiling__apply_deep_prof_tail_rec_transform_to_scc_3_p_0(((MR_Word) ll_backend__deep_profiling__wrapper_arg_1), ((MR_Word) ll_backend__deep_profiling__wrapper_arg_2), &ll_backend__deep_profiling__conv0_STATE_VARIABLE_ModuleInfo_8);
    }
#line 126 "deep_profiling.m"
    *ll_backend__deep_profiling__wrapper_arg_3 = ((MR_Box) (ll_backend__deep_profiling__conv0_STATE_VARIABLE_ModuleInfo_8));
#line 126 "deep_profiling.m"
  }
#line 126 "deep_profiling.m"
}

#line 30 "deep_profiling.m"
void MR_CALL 
ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0(
#line 30 "deep_profiling.m"
  MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_12,
#line 30 "deep_profiling.m"
  MR_Word * ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_13)
#line 30 "deep_profiling.m"
{
#line 94 "deep_profiling.m"
  {
#line 94 "deep_profiling.m"
    MR_bool ll_backend__deep_profiling__succeeded;
#line 94 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__Globals_5;
#line 94 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__TailRecursion_6;
#line 94 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredIds_7;
#line 94 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredTable0_8;
#line 94 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredMap0_9;
#line 94 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredMap_10;
#line 94 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__PredTable_11;
#line 94 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_15_15;
#line 94 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_17_17;
#line 94 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling__V_18_18;
#line 99 "deep_profiling.m"
    MR_Word ll_backend__deep_profiling___ElimSpecs_4;
#line 112 "deep_profiling.m"
    MR_Box ll_backend__deep_profiling__conv3_PredMap_10;

#line 99 "deep_profiling.m"
    {
#line 99 "deep_profiling.m"
      transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 0, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_0_12, &ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_15_15, &ll_backend__deep_profiling___ElimSpecs_4);
    }
#line 100 "deep_profiling.m"
    {
#line 100 "deep_profiling.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_15_15, &ll_backend__deep_profiling__Globals_5);
    }
#line 101 "deep_profiling.m"
    {
#line 101 "deep_profiling.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__deep_profiling__Globals_5, (MR_Integer) 212, &ll_backend__deep_profiling__TailRecursion_6);
    }
#line 106 "deep_profiling.m"
#line 106 "deep_profiling.m"
    switch (ll_backend__deep_profiling__TailRecursion_6) {
#line 106 "deep_profiling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 106 "deep_profiling.m"
      case (MR_Integer) 0:
#line 107 "deep_profiling.m"
        ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_17_17 = ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_15_15;
#line 106 "deep_profiling.m"
        break;
#line 106 "deep_profiling.m"
      case (MR_Integer) 1:
#line 122 "deep_profiling.m"
        {
#line 122 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__DepInfo_28;
#line 122 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__SCCs_29;
#line 122 "deep_profiling.m"
          MR_Word ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8_30;
#line 126 "deep_profiling.m"
          MR_Box ll_backend__deep_profiling__conv1_STATE_VARIABLE_ModuleInfo_17_17;

#line 123 "deep_profiling.m"
          {
#line 123 "deep_profiling.m"
            transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_15_15, &ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8_30);
          }
#line 124 "deep_profiling.m"
          {
#line 124 "deep_profiling.m"
            hlds__hlds_module__module_info_dependency_info_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8_30, &ll_backend__deep_profiling__DepInfo_28);
          }
#line 125 "deep_profiling.m"
          {
#line 125 "deep_profiling.m"
            hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ll_backend__deep_profiling__DepInfo_28, &ll_backend__deep_profiling__SCCs_29);
          }
#line 126 "deep_profiling.m"
          {
#line 126 "deep_profiling.m"
            mercury__list__foldl_4_p_0((MR_Word) &ll_backend__deep_profiling_scalar_common_2[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &ll_backend__deep_profiling_scalar_common_1[5], ll_backend__deep_profiling__SCCs_29, ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_8_30)), &ll_backend__deep_profiling__conv1_STATE_VARIABLE_ModuleInfo_17_17);
          }
#line 126 "deep_profiling.m"
          ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_17_17 = ((MR_Word) ll_backend__deep_profiling__conv1_STATE_VARIABLE_ModuleInfo_17_17);
#line 122 "deep_profiling.m"
        }
#line 106 "deep_profiling.m"
        break;
#line 106 "deep_profiling.m"
    }
#line 109 "deep_profiling.m"
    {
#line 109 "deep_profiling.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_17_17, &ll_backend__deep_profiling__PredIds_7);
    }
#line 110 "deep_profiling.m"
    {
#line 110 "deep_profiling.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_17_17, &ll_backend__deep_profiling__PredTable0_8);
    }
#line 111 "deep_profiling.m"
    {
#line 111 "deep_profiling.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(ll_backend__deep_profiling__PredTable0_8, &ll_backend__deep_profiling__PredMap0_9);
    }
#line 112 "deep_profiling.m"
    {
#line 112 "deep_profiling.m"
      ll_backend__deep_profiling__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 112 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_18_18, 0) = ((MR_Box) (&ll_backend__deep_profiling_scalar_common_4[0]));
#line 112 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_18_18, 1) = ((MR_Box) (ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0_2));
#line 112 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 112 "deep_profiling.m"
      MR_hl_field(MR_mktag(0), ll_backend__deep_profiling__V_18_18, 3) = ((MR_Box) (ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_17_17));
#line 112 "deep_profiling.m"
    }
#line 112 "deep_profiling.m"
    {
#line 112 "deep_profiling.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &ll_backend__deep_profiling_scalar_common_1[0], ll_backend__deep_profiling__V_18_18, ll_backend__deep_profiling__PredIds_7, ((MR_Box) (ll_backend__deep_profiling__PredMap0_9)), &ll_backend__deep_profiling__conv3_PredMap_10);
    }
#line 112 "deep_profiling.m"
    ll_backend__deep_profiling__PredMap_10 = ((MR_Word) ll_backend__deep_profiling__conv3_PredMap_10);
#line 114 "deep_profiling.m"
    {
#line 114 "deep_profiling.m"
      hlds__pred_table__predicate_table_set_preds_3_p_0(ll_backend__deep_profiling__PredMap_10, ll_backend__deep_profiling__PredTable0_8, &ll_backend__deep_profiling__PredTable_11);
    }
#line 115 "deep_profiling.m"
    {
#line 115 "deep_profiling.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(ll_backend__deep_profiling__PredTable_11, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_17_17, ll_backend__deep_profiling__STATE_VARIABLE_ModuleInfo_13);
#line 115 "deep_profiling.m"
      return;
    }
#line 94 "deep_profiling.m"
  }
#line 30 "deep_profiling.m"
}

void mercury__ll_backend__deep_profiling__init(void)
{
}

void mercury__ll_backend__deep_profiling__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_call_class_0);
	MR_register_type_ctor_info(&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_info_0);
	MR_register_type_ctor_info(&ll_backend__deep_profiling__ll_backend__deep_profiling__type_ctor_info_deep_prof_tail_rec_info_0);
}

void mercury__ll_backend__deep_profiling__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.deep_profiling. */
