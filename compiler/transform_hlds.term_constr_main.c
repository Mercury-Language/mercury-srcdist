/*
** Automatically generated from `term_constr_main.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module transform_hlds.term_constr_main. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_main__init
ENDINIT
*/

#include "transform_hlds.term_constr_main.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_build.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_fixpoint.mih"
#include "transform_hlds.term_constr_initial.mih"
#include "transform_hlds.term_constr_pass2.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 144 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 147 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 150 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0;

#line 153 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0;

#line 156 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0;

#line 159 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 162 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 165 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 168 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 171 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main__type_ctor_info_term_reason_0__plain_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 174 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 177 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0;

#line 180 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1;

#line 183 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_intermod_status_0[2];

#line 186 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_intermod_status_0[2];

#line 189 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_intermod_status_0[2];

#line 192 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0;

#line 195 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1;

#line 198 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2;

#line 201 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3;

#line 204 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4;

#line 207 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_term_reason_0[5];

#line 210 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_term_reason_0[5];

#line 213 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_term_reason_0[5];

#line 216 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 219 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

#line 222 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 225 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 228 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 231 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0;

#line 234 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 237 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_main__type_ctor_info_intermod_status_0;

#line 240 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

#line 243 "transform_hlds.term_constr_main.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_main__transform_hlds__term_constr_main__field_types_termination2_info_0_0[9];

#line 246 "transform_hlds.term_constr_main.c"
static const MR_ConstString transform_hlds__term_constr_main__transform_hlds__term_constr_main__field_names_termination2_info_0_0[9];

#line 249 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0;

#line 252 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0[1];

#line 255 "transform_hlds.term_constr_main.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_ptag_ordered_termination2_info_0[1];

#line 258 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_name_ordered_termination2_info_0[1];

#line 261 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_termination2_info_0[1];

#line 264 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0_10001(
#line 267 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 269 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 272 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0_10001(
#line 275 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 277 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 279 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 282 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_termination_info_0_0_10001(
#line 285 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 287 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 290 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_termination_info_0_0_10001(
#line 293 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 295 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 297 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 300 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____intermod_status_0_0_10001(
#line 303 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 305 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 308 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____intermod_status_0_0_10001(
#line 311 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 313 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 315 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 318 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____term_reason_0_0_10001(
#line 321 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 323 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 326 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____term_reason_0_0_10001(
#line 329 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 331 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 333 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 336 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____termination2_info_0_0_10001(
#line 339 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 341 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 344 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____termination2_info_0_0_10001(
#line 347 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 349 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 351 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 544 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_p_0(
#line 544 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 544 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ProcTable_3,
#line 544 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PredOrFunc_4,
#line 544 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SymName_5,
#line 544 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Context_6);

#line 615 "term_constr_main.m"
static MR_String MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__615__1_2_f_0(
#line 615 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__VarToVarIdMap_5,
#line 615 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_20);

#line 613 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__613__1_2_p_0(
#line 613 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_19,
#line 613 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_30);

#line 408 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__408__1_2_p_0(
#line 408 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_45,
#line 408 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_56);

#line 390 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__390__1_2_p_0(
#line 390 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_39,
#line 390 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_52);

#line 662 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(
#line 662 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 662 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 655 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_term_info_2_p_0(
#line 655 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 655 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 646 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_arg_size_info_2_p_0(
#line 646 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 646 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 620 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__output_maybe_termination2_info_3_p_0(
#line 620 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeConstrTermInfo_4);

#line 615 "term_constr_main.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_3(
#line 615 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 615 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 613 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_2(
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 613 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_1(
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 602 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0(
#line 602 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__VarToVarIdMap_5,
#line 602 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeArgSizeConstrs_6);

#line 495 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0_1(
#line 495 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 495 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 495 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 495 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 461 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0(
#line 461 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_4);

#line 446 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(
#line 446 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__TerminationInfo_5,
#line 446 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_6,
#line 446 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13,
#line 446 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14);

#line 443 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_7(
#line 443 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 443 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 443 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 443 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 443 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_6(
#line 443 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 443 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 443 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 443 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 408 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_5(
#line 408 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 408 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 408 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_4(
#line 408 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 408 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 390 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_3(
#line 390 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 390 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 390 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_2(
#line 390 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 390 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 378 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_1(
#line 378 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 378 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 368 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0(
#line 368 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__DepOrder_10,
#line 368 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__BuildOpts_11,
#line 368 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__FixpointOpts_12,
#line 368 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Pass2Opts_13,
#line 368 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SCC_14,
#line 368 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31,
#line 368 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32);

#line 615 "term_constr_main.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_3(
#line 615 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 615 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 613 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_2(
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 613 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_1(
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 322 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__pass_4_p_0_1(
#line 322 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 322 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 322 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 322 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3,
#line 322 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_4,
#line 322 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_2[5][3];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_3[1][12];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_4[3][4];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_5[3][5];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_6[1][6];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_7[2][7];




static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_2[1]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_intermod_status_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_term_reason_0)),
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_1[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_3[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__term_constr_main__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0)),
    ((MR_Box) (&transform_hlds__term_constr_main__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_4[3][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_2[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_2[4]))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_main____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_main__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_main__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main__type_ctor_info_term_reason_0__plain_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 844 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 852 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 860 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 868 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0
  }
};

#line 877 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 885 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 894 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 902 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 911 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 920 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 928 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main__type_ctor_info_term_reason_0__plain_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_term_reason_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 937 "transform_hlds.term_constr_main.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_constr_arg_size_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main",
  (MR_String) "constr_arg_size_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 958 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_term_reason_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 967 "transform_hlds.term_constr_main.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_constr_termination_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_main____Unify____constr_termination_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main____Compare____constr_termination_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main",
  (MR_String) "constr_termination_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 988 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0 = {
  (MR_String) "not_mutually_recursive",
  (MR_Integer) 0
};

#line 994 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1 = {
  (MR_String) "may_be_mutually_recursive",
  (MR_Integer) 1
};

#line 1000 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1
};

#line 1006 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0
};

#line 1012 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_intermod_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1018 "transform_hlds.term_constr_main.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_intermod_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_constr_main____Unify____intermod_status_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main____Compare____intermod_status_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main",
  (MR_String) "intermod_status",
  {
    transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_intermod_status_0
  },
  {
    transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_intermod_status_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_intermod_status_0
};

#line 1039 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0 = {
  (MR_String) "term_reason_builtin",
  (MR_Integer) 0
};

#line 1045 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1 = {
  (MR_String) "term_reason_pragma_supplied",
  (MR_Integer) 1
};

#line 1051 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2 = {
  (MR_String) "term_reason_foreign_supplied",
  (MR_Integer) 2
};

#line 1057 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3 = {
  (MR_String) "term_reason_import_supplied",
  (MR_Integer) 3
};

#line 1063 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4 = {
  (MR_String) "term_reason_analysis",
  (MR_Integer) 4
};

#line 1069 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4
};

#line 1078 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1
};

#line 1087 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_term_reason_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1096 "transform_hlds.term_constr_main.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_term_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_constr_main____Unify____term_reason_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main____Compare____term_reason_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main",
  (MR_String) "term_reason",
  {
    transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_term_reason_0
  },
  {
    transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_term_reason_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_term_reason_0
};

#line 1117 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1125 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1134 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1142 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 1150 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 1158 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
  }
};

#line 1166 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1174 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_main__type_ctor_info_intermod_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_intermod_status_0
  }
};

#line 1182 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

#line 1190 "transform_hlds.term_constr_main.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_main__transform_hlds__term_constr_main__field_types_termination2_info_0_0[9] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_main__type_ctor_info_intermod_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
};

#line 1203 "transform_hlds.term_constr_main.c"
static const MR_ConstString transform_hlds__term_constr_main__transform_hlds__term_constr_main__field_names_termination2_info_0_0[9] = {
  (MR_String) "size_var_map",
  (MR_String) "head_vars",
  (MR_String) "import_success",
  (MR_String) "import_failure",
  (MR_String) "success_constrs",
  (MR_String) "failure_constrs",
  (MR_String) "term_status",
  (MR_String) "intermod_status",
  (MR_String) "abstract_rep"
};

#line 1216 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0 = {
  (MR_String) "term2_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_main__transform_hlds__term_constr_main__field_types_termination2_info_0_0,
  transform_hlds__term_constr_main__transform_hlds__term_constr_main__field_names_termination2_info_0_0,
  NULL,
  NULL
};

#line 1231 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0[1] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0
};

#line 1236 "transform_hlds.term_constr_main.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_ptag_ordered_termination2_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0
  }
};

#line 1245 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_name_ordered_termination2_info_0[1] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0
};

#line 1250 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_termination2_info_0[1] = {
  (MR_Integer) 0
};

#line 1255 "transform_hlds.term_constr_main.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_termination2_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_main____Unify____termination2_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main____Compare____termination2_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main",
  (MR_String) "termination2_info",
  {
    transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_name_ordered_termination2_info_0
  },
  {
    transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_ptag_ordered_termination2_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_termination2_info_0
};

#line 1276 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0_10001(
#line 1279 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1281 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1283 "transform_hlds.term_constr_main.c"
{
#line 1285 "transform_hlds.term_constr_main.c"
  {
#line 1287 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1290 "transform_hlds.term_constr_main.c"
    {
#line 1292 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1295 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1297 "transform_hlds.term_constr_main.c"
  }
#line 1299 "transform_hlds.term_constr_main.c"
}

#line 1302 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0_10001(
#line 1305 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1307 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1309 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1311 "transform_hlds.term_constr_main.c"
{
#line 1313 "transform_hlds.term_constr_main.c"
  {
#line 1315 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1318 "transform_hlds.term_constr_main.c"
    {
#line 1320 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1323 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1325 "transform_hlds.term_constr_main.c"
  }
#line 1327 "transform_hlds.term_constr_main.c"
}

#line 1330 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_termination_info_0_0_10001(
#line 1333 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1335 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1337 "transform_hlds.term_constr_main.c"
{
#line 1339 "transform_hlds.term_constr_main.c"
  {
#line 1341 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1344 "transform_hlds.term_constr_main.c"
    {
#line 1346 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____constr_termination_info_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1349 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1351 "transform_hlds.term_constr_main.c"
  }
#line 1353 "transform_hlds.term_constr_main.c"
}

#line 1356 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_termination_info_0_0_10001(
#line 1359 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1361 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1363 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1365 "transform_hlds.term_constr_main.c"
{
#line 1367 "transform_hlds.term_constr_main.c"
  {
#line 1369 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1372 "transform_hlds.term_constr_main.c"
    {
#line 1374 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____constr_termination_info_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1377 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1379 "transform_hlds.term_constr_main.c"
  }
#line 1381 "transform_hlds.term_constr_main.c"
}

#line 1384 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____intermod_status_0_0_10001(
#line 1387 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1389 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1391 "transform_hlds.term_constr_main.c"
{
#line 1393 "transform_hlds.term_constr_main.c"
  {
#line 1395 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1398 "transform_hlds.term_constr_main.c"
    {
#line 1400 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____intermod_status_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1403 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1405 "transform_hlds.term_constr_main.c"
  }
#line 1407 "transform_hlds.term_constr_main.c"
}

#line 1410 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____intermod_status_0_0_10001(
#line 1413 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1415 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1417 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1419 "transform_hlds.term_constr_main.c"
{
#line 1421 "transform_hlds.term_constr_main.c"
  {
#line 1423 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1426 "transform_hlds.term_constr_main.c"
    {
#line 1428 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____intermod_status_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1431 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1433 "transform_hlds.term_constr_main.c"
  }
#line 1435 "transform_hlds.term_constr_main.c"
}

#line 1438 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____term_reason_0_0_10001(
#line 1441 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1443 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1445 "transform_hlds.term_constr_main.c"
{
#line 1447 "transform_hlds.term_constr_main.c"
  {
#line 1449 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1452 "transform_hlds.term_constr_main.c"
    {
#line 1454 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____term_reason_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1457 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1459 "transform_hlds.term_constr_main.c"
  }
#line 1461 "transform_hlds.term_constr_main.c"
}

#line 1464 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____term_reason_0_0_10001(
#line 1467 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1469 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1471 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1473 "transform_hlds.term_constr_main.c"
{
#line 1475 "transform_hlds.term_constr_main.c"
  {
#line 1477 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1480 "transform_hlds.term_constr_main.c"
    {
#line 1482 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____term_reason_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1485 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1487 "transform_hlds.term_constr_main.c"
  }
#line 1489 "transform_hlds.term_constr_main.c"
}

#line 1492 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____termination2_info_0_0_10001(
#line 1495 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1497 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1499 "transform_hlds.term_constr_main.c"
{
#line 1501 "transform_hlds.term_constr_main.c"
  {
#line 1503 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1506 "transform_hlds.term_constr_main.c"
    {
#line 1508 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____termination2_info_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1511 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1513 "transform_hlds.term_constr_main.c"
  }
#line 1515 "transform_hlds.term_constr_main.c"
}

#line 1518 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____termination2_info_0_0_10001(
#line 1521 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1523 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1525 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1527 "transform_hlds.term_constr_main.c"
{
#line 1529 "transform_hlds.term_constr_main.c"
  {
#line 1531 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1534 "transform_hlds.term_constr_main.c"
    {
#line 1536 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____termination2_info_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1539 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1541 "transform_hlds.term_constr_main.c"
  }
#line 1543 "transform_hlds.term_constr_main.c"
}

#line 544 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_p_0(
#line 544 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 544 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ProcTable_3,
#line 544 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PredOrFunc_4,
#line 544 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SymName_5,
#line 544 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Context_6)
#line 544 "term_constr_main.m"
{
#line 548 "term_constr_main.m"
  while (MR_TRUE)
#line 548 "term_constr_main.m"
    {
#line 548 "term_constr_main.m"
      /* tailcall optimized into a loop */
#line 548 "term_constr_main.m"
      {
#line 548 "term_constr_main.m"
        MR_bool transform_hlds__term_constr_main__succeeded;

#line 548 "term_constr_main.m"
        if ((transform_hlds__term_constr_main__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 548 "term_constr_main.m"
          {
#line 548 "term_constr_main.m"
          }
#line 548 "term_constr_main.m"
        else
#line 550 "term_constr_main.m"
          {
#line 550 "term_constr_main.m"
            MR_Integer transform_hlds__term_constr_main__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 0)));
#line 550 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ProcIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 1)));
#line 550 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ProcInfo_25;
#line 550 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__TermInfo_26;
#line 550 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ModeList_27;
#line 550 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__HeadVars_28;
#line 550 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__SizeVarMap_29;
#line 550 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__HeadSizeVars_30;
#line 550 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_33_33;
#line 550 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_52_52;
#line 550 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_53_53;
#line 551 "term_constr_main.m"
            MR_Box transform_hlds__term_constr_main__conv0_ProcInfo_25;
#line 144 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_40_40;
#line 144 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_41_41;
#line 144 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_42_42;
#line 144 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_43_43;
#line 144 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_44_44;
#line 144 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_45_45;
#line 144 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_46_46;
#line 144 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_47_47;
#line 149 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_48_48;
#line 149 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_49_49;
#line 149 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_50_50;
#line 149 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_51_51;
#line 149 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_54_54;
#line 149 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_55_55;

#line 551 "term_constr_main.m"
            {
#line 551 "term_constr_main.m"
              transform_hlds__term_constr_main__conv0_ProcInfo_25 = mercury__map__det_elem_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__term_constr_main__ProcId_18)), transform_hlds__term_constr_main__ProcTable_3);
            }
#line 551 "term_constr_main.m"
            transform_hlds__term_constr_main__ProcInfo_25 = ((MR_Word) transform_hlds__term_constr_main__conv0_ProcInfo_25);
#line 552 "term_constr_main.m"
            {
#line 552 "term_constr_main.m"
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_25, &transform_hlds__term_constr_main__TermInfo_26);
            }
#line 553 "term_constr_main.m"
            {
#line 553 "term_constr_main.m"
              hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(transform_hlds__term_constr_main__ProcInfo_25, &transform_hlds__term_constr_main__ModeList_27);
            }
#line 554 "term_constr_main.m"
            {
#line 554 "term_constr_main.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_main__ProcInfo_25, &transform_hlds__term_constr_main__HeadVars_28);
            }
#line 144 "term_constr_main.m"
            transform_hlds__term_constr_main__SizeVarMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 0)));
#line 144 "term_constr_main.m"
            transform_hlds__term_constr_main__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 1)));
#line 144 "term_constr_main.m"
            transform_hlds__term_constr_main__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 2)));
#line 144 "term_constr_main.m"
            transform_hlds__term_constr_main__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 3)));
#line 144 "term_constr_main.m"
            transform_hlds__term_constr_main__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 4)));
#line 144 "term_constr_main.m"
            transform_hlds__term_constr_main__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 5)));
#line 144 "term_constr_main.m"
            transform_hlds__term_constr_main__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 6)));
#line 144 "term_constr_main.m"
            transform_hlds__term_constr_main__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 7)));
#line 144 "term_constr_main.m"
            transform_hlds__term_constr_main__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 8)));
#line 556 "term_constr_main.m"
            {
#line 556 "term_constr_main.m"
              transform_hlds__term_constr_main__HeadSizeVars_30 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_main__SizeVarMap_29, transform_hlds__term_constr_main__HeadVars_28);
            }
#line 149 "term_constr_main.m"
            transform_hlds__term_constr_main__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 0)));
#line 149 "term_constr_main.m"
            transform_hlds__term_constr_main__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 1)));
#line 149 "term_constr_main.m"
            transform_hlds__term_constr_main__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 2)));
#line 149 "term_constr_main.m"
            transform_hlds__term_constr_main__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 3)));
#line 149 "term_constr_main.m"
            transform_hlds__term_constr_main__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 4)));
#line 149 "term_constr_main.m"
            transform_hlds__term_constr_main__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 5)));
#line 149 "term_constr_main.m"
            transform_hlds__term_constr_main__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 6)));
#line 149 "term_constr_main.m"
            transform_hlds__term_constr_main__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 7)));
#line 149 "term_constr_main.m"
            transform_hlds__term_constr_main__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 8)));
#line 557 "term_constr_main.m"
            {
#line 557 "term_constr_main.m"
              transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0(transform_hlds__term_constr_main__PredOrFunc_4, transform_hlds__term_constr_main__SymName_5, transform_hlds__term_constr_main__ModeList_27, transform_hlds__term_constr_main__Context_6, transform_hlds__term_constr_main__V_33_33, transform_hlds__term_constr_main__V_52_52, transform_hlds__term_constr_main__V_53_53, transform_hlds__term_constr_main__HeadSizeVars_30);
            }
#line 561 "term_constr_main.m"
            /* direct tailcall eliminated */
#line 561 "term_constr_main.m"
            {
#line 561 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__HeadVar__2__tmp_copy_2 = transform_hlds__term_constr_main__ProcIds_19;

#line 561 "term_constr_main.m"
              transform_hlds__term_constr_main__HeadVar__2_2 = transform_hlds__term_constr_main__HeadVar__2__tmp_copy_2;
#line 561 "term_constr_main.m"
            }
#line 561 "term_constr_main.m"
            continue;
#line 550 "term_constr_main.m"
          }
#line 548 "term_constr_main.m"
      }
#line 548 "term_constr_main.m"
      break;
#line 548 "term_constr_main.m"
    }
#line 544 "term_constr_main.m"
}

#line 615 "term_constr_main.m"
static MR_String MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__615__1_2_f_0(
#line 615 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__VarToVarIdMap_5,
#line 615 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_20)
#line 615 "term_constr_main.m"
{
#line 615 "term_constr_main.m"
  {
#line 615 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 615 "term_constr_main.m"
    MR_String transform_hlds__term_constr_main__HeadVar__3_21;
#line 615 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__V_22_22;
#line 615 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv0_V_22_22;

#line 615 "term_constr_main.m"
    {
#line 615 "term_constr_main.m"
      transform_hlds__term_constr_main__conv0_V_22_22 = mercury__map__det_elem_2_f_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_20)), transform_hlds__term_constr_main__VarToVarIdMap_5);
    }
#line 615 "term_constr_main.m"
    transform_hlds__term_constr_main__V_22_22 = ((MR_Integer) transform_hlds__term_constr_main__conv0_V_22_22);
#line 615 "term_constr_main.m"
    {
#line 615 "term_constr_main.m"
      return transform_hlds__term_constr_main__HeadVar__3_21 = mercury__string__int_to_string_1_f_0(transform_hlds__term_constr_main__V_22_22);
    }
#line 615 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_21;
#line 615 "term_constr_main.m"
  }
#line 615 "term_constr_main.m"
}

#line 613 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__613__1_2_p_0(
#line 613 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_19,
#line 613 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_30)
#line 613 "term_constr_main.m"
{
#line 613 "term_constr_main.m"
  {
#line 613 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 613 "term_constr_main.m"
    {
#line 613 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, transform_hlds__term_constr_main__HeadVar__1_19, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_30)));
    }
#line 613 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 613 "term_constr_main.m"
  }
#line 613 "term_constr_main.m"
}

#line 408 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__408__1_2_p_0(
#line 408 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_45,
#line 408 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_56)
#line 408 "term_constr_main.m"
{
#line 408 "term_constr_main.m"
  {
#line 408 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 408 "term_constr_main.m"
    {
#line 408 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__HeadVar__1_45, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_56)));
    }
#line 408 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 408 "term_constr_main.m"
  }
#line 408 "term_constr_main.m"
}

#line 390 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__390__1_2_p_0(
#line 390 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_39,
#line 390 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_52)
#line 390 "term_constr_main.m"
{
#line 390 "term_constr_main.m"
  {
#line 390 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 390 "term_constr_main.m"
    {
#line 390 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__HeadVar__1_39, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_52)));
    }
#line 390 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 390 "term_constr_main.m"
  }
#line 390 "term_constr_main.m"
}

#line 237 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main____Compare____termination2_info_0_0(
#line 237 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__HeadVar__1_1,
#line 237 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 237 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__3_3)
#line 237 "term_constr_main.m"
{
#line 237 "term_constr_main.m"
  {
#line 237 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 237 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CastX_30 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__2_2;
#line 237 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CastY_31 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__3_3;

#line 237 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__CastX_30 == transform_hlds__term_constr_main__CastY_31);
#line 237 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 1868 "transform_hlds.term_constr_main.c"
      *transform_hlds__term_constr_main__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "term_constr_main.m"
    else
#line 237 "term_constr_main.m"
      {
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 2)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 3)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 4)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 5)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 6)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 7)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 8)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 0)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 1)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 2)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 3)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 4)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 5)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 6)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 7)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 8)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_22_22;

#line 237 "term_constr_main.m"
        {
#line 237 "term_constr_main.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[2], &transform_hlds__term_constr_main__V_22_22, ((MR_Box) (transform_hlds__term_constr_main__V_4_4)), ((MR_Box) (transform_hlds__term_constr_main__V_13_13)));
        }
#line 1918 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_22_22 == (MR_Integer) 0);
#line 237 "term_constr_main.m"
        transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 237 "term_constr_main.m"
        if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
          *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_22_22;
#line 237 "term_constr_main.m"
        else
#line 237 "term_constr_main.m"
          {
#line 237 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_23_23;

#line 237 "term_constr_main.m"
            {
#line 237 "term_constr_main.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[4], &transform_hlds__term_constr_main__V_23_23, ((MR_Box) (transform_hlds__term_constr_main__V_5_5)), ((MR_Box) (transform_hlds__term_constr_main__V_14_14)));
            }
#line 1938 "transform_hlds.term_constr_main.c"
            transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_23_23 == (MR_Integer) 0);
#line 237 "term_constr_main.m"
            transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 237 "term_constr_main.m"
            if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
              *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_23_23;
#line 237 "term_constr_main.m"
            else
#line 237 "term_constr_main.m"
              {
#line 237 "term_constr_main.m"
                MR_Word transform_hlds__term_constr_main__V_24_24;

#line 237 "term_constr_main.m"
                {
#line 237 "term_constr_main.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6], &transform_hlds__term_constr_main__V_24_24, ((MR_Box) (transform_hlds__term_constr_main__V_6_6)), ((MR_Box) (transform_hlds__term_constr_main__V_15_15)));
                }
#line 1958 "transform_hlds.term_constr_main.c"
                transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_24_24 == (MR_Integer) 0);
#line 237 "term_constr_main.m"
                transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 237 "term_constr_main.m"
                if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                  *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_24_24;
#line 237 "term_constr_main.m"
                else
#line 237 "term_constr_main.m"
                  {
#line 237 "term_constr_main.m"
                    MR_Word transform_hlds__term_constr_main__V_25_25;

#line 237 "term_constr_main.m"
                    {
#line 237 "term_constr_main.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6], &transform_hlds__term_constr_main__V_25_25, ((MR_Box) (transform_hlds__term_constr_main__V_7_7)), ((MR_Box) (transform_hlds__term_constr_main__V_16_16)));
                    }
#line 1978 "transform_hlds.term_constr_main.c"
                    transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_25_25 == (MR_Integer) 0);
#line 237 "term_constr_main.m"
                    transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 237 "term_constr_main.m"
                    if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                      *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_25_25;
#line 237 "term_constr_main.m"
                    else
#line 237 "term_constr_main.m"
                      {
#line 237 "term_constr_main.m"
                        MR_Word transform_hlds__term_constr_main__V_26_26;

#line 237 "term_constr_main.m"
                        {
#line 237 "term_constr_main.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7], &transform_hlds__term_constr_main__V_26_26, ((MR_Box) (transform_hlds__term_constr_main__V_8_8)), ((MR_Box) (transform_hlds__term_constr_main__V_17_17)));
                        }
#line 1998 "transform_hlds.term_constr_main.c"
                        transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_26_26 == (MR_Integer) 0);
#line 237 "term_constr_main.m"
                        transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 237 "term_constr_main.m"
                        if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                          *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_26_26;
#line 237 "term_constr_main.m"
                        else
#line 237 "term_constr_main.m"
                          {
#line 237 "term_constr_main.m"
                            MR_Word transform_hlds__term_constr_main__V_27_27;

#line 237 "term_constr_main.m"
                            {
#line 237 "term_constr_main.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7], &transform_hlds__term_constr_main__V_27_27, ((MR_Box) (transform_hlds__term_constr_main__V_9_9)), ((MR_Box) (transform_hlds__term_constr_main__V_18_18)));
                            }
#line 2018 "transform_hlds.term_constr_main.c"
                            transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_27_27 == (MR_Integer) 0);
#line 237 "term_constr_main.m"
                            transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 237 "term_constr_main.m"
                            if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                              *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_27_27;
#line 237 "term_constr_main.m"
                            else
#line 237 "term_constr_main.m"
                              {
#line 237 "term_constr_main.m"
                                MR_Word transform_hlds__term_constr_main__V_28_28;

#line 237 "term_constr_main.m"
                                {
#line 237 "term_constr_main.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[8], &transform_hlds__term_constr_main__V_28_28, ((MR_Box) (transform_hlds__term_constr_main__V_10_10)), ((MR_Box) (transform_hlds__term_constr_main__V_19_19)));
                                }
#line 2038 "transform_hlds.term_constr_main.c"
                                transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_28_28 == (MR_Integer) 0);
#line 237 "term_constr_main.m"
                                transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 237 "term_constr_main.m"
                                if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                                  *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_28_28;
#line 237 "term_constr_main.m"
                                else
#line 237 "term_constr_main.m"
                                  {
#line 237 "term_constr_main.m"
                                    MR_Word transform_hlds__term_constr_main__V_29_29;

#line 237 "term_constr_main.m"
                                    {
#line 237 "term_constr_main.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[9], &transform_hlds__term_constr_main__V_29_29, ((MR_Box) (transform_hlds__term_constr_main__V_11_11)), ((MR_Box) (transform_hlds__term_constr_main__V_20_20)));
                                    }
#line 2058 "transform_hlds.term_constr_main.c"
                                    transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_29_29 == (MR_Integer) 0);
#line 237 "term_constr_main.m"
                                    transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 237 "term_constr_main.m"
                                    if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                                      *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_29_29;
#line 237 "term_constr_main.m"
                                    else
#line 237 "term_constr_main.m"
                                      {
#line 237 "term_constr_main.m"
                                        {
#line 237 "term_constr_main.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[10], transform_hlds__term_constr_main__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_main__V_12_12)), ((MR_Box) (transform_hlds__term_constr_main__V_21_21)));
#line 237 "term_constr_main.m"
                                          return;
                                        }
#line 237 "term_constr_main.m"
                                      }
#line 237 "term_constr_main.m"
                                  }
#line 237 "term_constr_main.m"
                              }
#line 237 "term_constr_main.m"
                          }
#line 237 "term_constr_main.m"
                      }
#line 237 "term_constr_main.m"
                  }
#line 237 "term_constr_main.m"
              }
#line 237 "term_constr_main.m"
          }
#line 237 "term_constr_main.m"
      }
#line 237 "term_constr_main.m"
  }
#line 237 "term_constr_main.m"
}

#line 237 "term_constr_main.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____termination2_info_0_0(
#line 237 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 237 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 237 "term_constr_main.m"
{
#line 237 "term_constr_main.m"
  {
#line 237 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 237 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CastX_21 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__1_1;
#line 237 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CastY_22 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__2_2;

#line 237 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__CastX_21 == transform_hlds__term_constr_main__CastY_22);
#line 237 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
      transform_hlds__term_constr_main__succeeded = MR_TRUE;
#line 237 "term_constr_main.m"
    else
#line 237 "term_constr_main.m"
      {
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_24_24;
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_25_25;
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_26_26;
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_27_27;
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_28_28;
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_29_29;
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_30_30;
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_31_31;
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 2)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 3)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 4)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 5)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 6)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 7)));
#line 237 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 8)));

#line 2181 "transform_hlds.term_constr_main.c"
        {
#line 2183 "transform_hlds.term_constr_main.c"
          transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[2], ((MR_Box) (transform_hlds__term_constr_main__V_3_3)), ((MR_Box) (transform_hlds__term_constr_main__V_12_12)));
        }
#line 237 "term_constr_main.m"
        if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
          {
#line 2190 "transform_hlds.term_constr_main.c"
            transform_hlds__term_constr_main__TypeInfo_24_24 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[4];
#line 2192 "transform_hlds.term_constr_main.c"
            {
#line 2194 "transform_hlds.term_constr_main.c"
              transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_24_24, ((MR_Box) (transform_hlds__term_constr_main__V_4_4)), ((MR_Box) (transform_hlds__term_constr_main__V_13_13)));
            }
#line 237 "term_constr_main.m"
            if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
              {
#line 2201 "transform_hlds.term_constr_main.c"
                transform_hlds__term_constr_main__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6];
#line 2203 "transform_hlds.term_constr_main.c"
                {
#line 2205 "transform_hlds.term_constr_main.c"
                  transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_25_25, ((MR_Box) (transform_hlds__term_constr_main__V_5_5)), ((MR_Box) (transform_hlds__term_constr_main__V_14_14)));
                }
#line 237 "term_constr_main.m"
                if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                  {
#line 2212 "transform_hlds.term_constr_main.c"
                    transform_hlds__term_constr_main__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6];
#line 2214 "transform_hlds.term_constr_main.c"
                    {
#line 2216 "transform_hlds.term_constr_main.c"
                      transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_26_26, ((MR_Box) (transform_hlds__term_constr_main__V_6_6)), ((MR_Box) (transform_hlds__term_constr_main__V_15_15)));
                    }
#line 237 "term_constr_main.m"
                    if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                      {
#line 2223 "transform_hlds.term_constr_main.c"
                        transform_hlds__term_constr_main__TypeInfo_27_27 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7];
#line 2225 "transform_hlds.term_constr_main.c"
                        {
#line 2227 "transform_hlds.term_constr_main.c"
                          transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_27_27, ((MR_Box) (transform_hlds__term_constr_main__V_7_7)), ((MR_Box) (transform_hlds__term_constr_main__V_16_16)));
                        }
#line 237 "term_constr_main.m"
                        if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                          {
#line 2234 "transform_hlds.term_constr_main.c"
                            transform_hlds__term_constr_main__TypeInfo_28_28 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7];
#line 2236 "transform_hlds.term_constr_main.c"
                            {
#line 2238 "transform_hlds.term_constr_main.c"
                              transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_28_28, ((MR_Box) (transform_hlds__term_constr_main__V_8_8)), ((MR_Box) (transform_hlds__term_constr_main__V_17_17)));
                            }
#line 237 "term_constr_main.m"
                            if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                              {
#line 2245 "transform_hlds.term_constr_main.c"
                                transform_hlds__term_constr_main__TypeInfo_29_29 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[8];
#line 2247 "transform_hlds.term_constr_main.c"
                                {
#line 2249 "transform_hlds.term_constr_main.c"
                                  transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_29_29, ((MR_Box) (transform_hlds__term_constr_main__V_9_9)), ((MR_Box) (transform_hlds__term_constr_main__V_18_18)));
                                }
#line 237 "term_constr_main.m"
                                if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                                  {
#line 2256 "transform_hlds.term_constr_main.c"
                                    transform_hlds__term_constr_main__TypeInfo_30_30 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[9];
#line 2258 "transform_hlds.term_constr_main.c"
                                    {
#line 2260 "transform_hlds.term_constr_main.c"
                                      transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_30_30, ((MR_Box) (transform_hlds__term_constr_main__V_10_10)), ((MR_Box) (transform_hlds__term_constr_main__V_19_19)));
                                    }
#line 237 "term_constr_main.m"
                                    if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                                      {
#line 2267 "transform_hlds.term_constr_main.c"
                                        transform_hlds__term_constr_main__TypeInfo_31_31 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[10];
#line 2269 "transform_hlds.term_constr_main.c"
                                        {
#line 2271 "transform_hlds.term_constr_main.c"
                                          return transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_31_31, ((MR_Box) (transform_hlds__term_constr_main__V_11_11)), ((MR_Box) (transform_hlds__term_constr_main__V_20_20)));
                                        }
#line 237 "term_constr_main.m"
                                      }
#line 237 "term_constr_main.m"
                                  }
#line 237 "term_constr_main.m"
                              }
#line 237 "term_constr_main.m"
                          }
#line 237 "term_constr_main.m"
                      }
#line 237 "term_constr_main.m"
                  }
#line 237 "term_constr_main.m"
              }
#line 237 "term_constr_main.m"
          }
#line 237 "term_constr_main.m"
      }
#line 237 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 237 "term_constr_main.m"
  }
#line 237 "term_constr_main.m"
}

#line 104 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main____Compare____term_reason_0_0(
#line 104 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__HeadVar__1_1,
#line 104 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 104 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__3_3)
#line 104 "term_constr_main.m"
{
#line 104 "term_constr_main.m"
  {
#line 104 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 104 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__2_2;
#line 104 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__3_3;

#line 104 "term_constr_main.m"
    {
#line 104 "term_constr_main.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_main__HeadVar__1_1, transform_hlds__term_constr_main__Cast_HeadVar1_4, transform_hlds__term_constr_main__Cast_HeadVar2_5);
#line 104 "term_constr_main.m"
      return;
    }
#line 104 "term_constr_main.m"
  }
#line 104 "term_constr_main.m"
}

#line 104 "term_constr_main.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____term_reason_0_0(
#line 104 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_1,
#line 104 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 104 "term_constr_main.m"
{
#line 2340 "transform_hlds.term_constr_main.c"
  {
#line 2342 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__HeadVar__2_1 == transform_hlds__term_constr_main__HeadVar__2_2);

#line 2345 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 2347 "transform_hlds.term_constr_main.c"
  }
#line 104 "term_constr_main.m"
}

#line 127 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main____Compare____intermod_status_0_0(
#line 127 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__HeadVar__1_1,
#line 127 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 127 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__3_3)
#line 127 "term_constr_main.m"
{
#line 127 "term_constr_main.m"
  {
#line 127 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 127 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__2_2;
#line 127 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__3_3;

#line 127 "term_constr_main.m"
    {
#line 127 "term_constr_main.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_main__HeadVar__1_1, transform_hlds__term_constr_main__Cast_HeadVar1_4, transform_hlds__term_constr_main__Cast_HeadVar2_5);
#line 127 "term_constr_main.m"
      return;
    }
#line 127 "term_constr_main.m"
  }
#line 127 "term_constr_main.m"
}

#line 127 "term_constr_main.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____intermod_status_0_0(
#line 127 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_1,
#line 127 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 127 "term_constr_main.m"
{
#line 2393 "transform_hlds.term_constr_main.c"
  {
#line 2395 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__HeadVar__2_1 == transform_hlds__term_constr_main__HeadVar__2_2);

#line 2398 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 2400 "transform_hlds.term_constr_main.c"
  }
#line 127 "term_constr_main.m"
}

#line 98 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_termination_info_0_0(
#line 98 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__HeadVar__1_1,
#line 98 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 98 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__3_3)
#line 98 "term_constr_main.m"
{
#line 98 "term_constr_main.m"
  {
#line 98 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 98 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar1_4 = transform_hlds__term_constr_main__HeadVar__2_2;
#line 98 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar2_5 = transform_hlds__term_constr_main__HeadVar__3_3;

#line 98 "term_constr_main.m"
    {
#line 98 "term_constr_main.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[1], transform_hlds__term_constr_main__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_main__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_main__Cast_HeadVar2_5)));
#line 98 "term_constr_main.m"
      return;
    }
#line 98 "term_constr_main.m"
  }
#line 98 "term_constr_main.m"
}

#line 98 "term_constr_main.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_termination_info_0_0(
#line 98 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 98 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 98 "term_constr_main.m"
{
#line 98 "term_constr_main.m"
  {
#line 98 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 98 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar1_3 = transform_hlds__term_constr_main__HeadVar__1_1;
#line 98 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar2_4 = transform_hlds__term_constr_main__HeadVar__2_2;

#line 98 "term_constr_main.m"
    {
#line 98 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[1], ((MR_Box) (transform_hlds__term_constr_main__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_main__Cast_HeadVar2_4)));
    }
#line 98 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 98 "term_constr_main.m"
  }
#line 98 "term_constr_main.m"
}

#line 93 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0(
#line 93 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__HeadVar__1_1,
#line 93 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 93 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__3_3)
#line 93 "term_constr_main.m"
{
#line 93 "term_constr_main.m"
  {
#line 93 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 93 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar1_4 = transform_hlds__term_constr_main__HeadVar__2_2;
#line 93 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar2_5 = transform_hlds__term_constr_main__HeadVar__3_3;

#line 93 "term_constr_main.m"
    {
#line 93 "term_constr_main.m"
      libs__polyhedron____Compare____polyhedron_0_0(transform_hlds__term_constr_main__HeadVar__1_1, transform_hlds__term_constr_main__Cast_HeadVar1_4, transform_hlds__term_constr_main__Cast_HeadVar2_5);
#line 93 "term_constr_main.m"
      return;
    }
#line 93 "term_constr_main.m"
  }
#line 93 "term_constr_main.m"
}

#line 93 "term_constr_main.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0(
#line 93 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 93 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 93 "term_constr_main.m"
{
#line 93 "term_constr_main.m"
  {
#line 93 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 93 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar1_3 = transform_hlds__term_constr_main__HeadVar__1_1;
#line 93 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar2_4 = transform_hlds__term_constr_main__HeadVar__2_2;

#line 93 "term_constr_main.m"
    {
#line 93 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_main__Cast_HeadVar1_3, transform_hlds__term_constr_main__Cast_HeadVar2_4);
    }
#line 93 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 93 "term_constr_main.m"
  }
#line 93 "term_constr_main.m"
}

#line 662 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(
#line 662 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 662 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 662 "term_constr_main.m"
{
#line 664 "term_constr_main.m"
  {
#line 664 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 664 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 664 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 665 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;

#line 665 "term_constr_main.m"
    {
#line 665 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 666 "term_constr_main.m"
    {
#line 666 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_6, &transform_hlds__term_constr_main__TermInfo_7);
    }
#line 668 "term_constr_main.m"
    {
#line 668 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 4)));
#line 149 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 0)));
#line 149 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 1)));
#line 149 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 2)));
#line 149 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 3)));
#line 149 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 5)));
#line 149 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 6)));
#line 149 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 7)));
#line 149 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 8)));

#line 668 "term_constr_main.m"
      transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "term_constr_main.m"
    }
#line 669 "term_constr_main.m"
    if (!(transform_hlds__term_constr_main__succeeded))
#line 670 "term_constr_main.m"
      {
#line 670 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 6)));
#line 151 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 0)));
#line 151 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 1)));
#line 151 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 2)));
#line 151 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 3)));
#line 151 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 4)));
#line 151 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 5)));
#line 151 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 7)));
#line 151 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 8)));

#line 670 "term_constr_main.m"
        transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "term_constr_main.m"
      }
#line 664 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 664 "term_constr_main.m"
  }
#line 662 "term_constr_main.m"
}

#line 655 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_term_info_2_p_0(
#line 655 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 655 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 655 "term_constr_main.m"
{
#line 657 "term_constr_main.m"
  {
#line 657 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 657 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 657 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 657 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9;
#line 658 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10;
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11;
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12;
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_13_13;
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_14_14;
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_15_15;
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_16_16;
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_17_17;
#line 660 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8;

#line 658 "term_constr_main.m"
    {
#line 658 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 659 "term_constr_main.m"
    {
#line 659 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_6, &transform_hlds__term_constr_main__TermInfo_7);
    }
#line 151 "term_constr_main.m"
    transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 0)));
#line 151 "term_constr_main.m"
    transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 1)));
#line 151 "term_constr_main.m"
    transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 2)));
#line 151 "term_constr_main.m"
    transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 3)));
#line 151 "term_constr_main.m"
    transform_hlds__term_constr_main__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 4)));
#line 151 "term_constr_main.m"
    transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 5)));
#line 151 "term_constr_main.m"
    transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 6)));
#line 151 "term_constr_main.m"
    transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 7)));
#line 151 "term_constr_main.m"
    transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 8)));
#line 660 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_main__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 660 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 660 "term_constr_main.m"
      transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_9_9, (MR_Integer) 0)));
#line 657 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 657 "term_constr_main.m"
  }
#line 655 "term_constr_main.m"
}

#line 646 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_arg_size_info_2_p_0(
#line 646 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 646 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 646 "term_constr_main.m"
{
#line 648 "term_constr_main.m"
  {
#line 648 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 648 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 648 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 648 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9;
#line 649 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10;
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11;
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12;
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_13_13;
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_14_14;
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_15_15;
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_16_16;
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_17_17;
#line 651 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8;

#line 649 "term_constr_main.m"
    {
#line 649 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 650 "term_constr_main.m"
    {
#line 650 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_6, &transform_hlds__term_constr_main__TermInfo_7);
    }
#line 149 "term_constr_main.m"
    transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 0)));
#line 149 "term_constr_main.m"
    transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 1)));
#line 149 "term_constr_main.m"
    transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 2)));
#line 149 "term_constr_main.m"
    transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 3)));
#line 149 "term_constr_main.m"
    transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 4)));
#line 149 "term_constr_main.m"
    transform_hlds__term_constr_main__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 5)));
#line 149 "term_constr_main.m"
    transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 6)));
#line 149 "term_constr_main.m"
    transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 7)));
#line 149 "term_constr_main.m"
    transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 8)));
#line 651 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_main__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 651 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 651 "term_constr_main.m"
      transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_9_9, (MR_Integer) 0)));
#line 648 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 648 "term_constr_main.m"
  }
#line 646 "term_constr_main.m"
}

#line 620 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__output_maybe_termination2_info_3_p_0(
#line 620 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeConstrTermInfo_4)
#line 620 "term_constr_main.m"
{
#line 625 "term_constr_main.m"
  {
#line 625 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 625 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__MaybeConstrTermInfo_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "term_constr_main.m"
      {
#line 626 "term_constr_main.m"
        {
#line 626 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
#line 626 "term_constr_main.m"
          return;
        }
#line 625 "term_constr_main.m"
      }
#line 625 "term_constr_main.m"
    else
#line 625 "term_constr_main.m"
      {
#line 625 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeConstrTermInfo_4, (MR_Integer) 0)));

#line 625 "term_constr_main.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_main__V_18_18)) == (MR_mktag((MR_Integer) 1))))
#line 631 "term_constr_main.m"
          {
#line 632 "term_constr_main.m"
            {
#line 632 "term_constr_main.m"
              mercury__io__write_string_3_p_0((MR_String) "can_loop");
#line 632 "term_constr_main.m"
              return;
            }
#line 631 "term_constr_main.m"
          }
#line 625 "term_constr_main.m"
        else
#line 628 "term_constr_main.m"
          {
#line 629 "term_constr_main.m"
            {
#line 629 "term_constr_main.m"
              mercury__io__write_string_3_p_0((MR_String) "cannot_loop");
#line 629 "term_constr_main.m"
              return;
            }
#line 628 "term_constr_main.m"
          }
#line 625 "term_constr_main.m"
      }
#line 625 "term_constr_main.m"
  }
#line 620 "term_constr_main.m"
}

#line 615 "term_constr_main.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_3(
#line 615 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 615 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 615 "term_constr_main.m"
{
#line 615 "term_constr_main.m"
  {
#line 615 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__wrapper_arg_2;
#line 615 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 615 "term_constr_main.m"
    MR_String transform_hlds__term_constr_main__conv0_HeadVar__3_21;

#line 615 "term_constr_main.m"
    {
#line 615 "term_constr_main.m"
      transform_hlds__term_constr_main__conv0_HeadVar__3_21 = transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__615__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 615 "term_constr_main.m"
    transform_hlds__term_constr_main__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__3_21));
#line 615 "term_constr_main.m"
    return transform_hlds__term_constr_main__wrapper_arg_2;
#line 615 "term_constr_main.m"
  }
#line 615 "term_constr_main.m"
}

#line 613 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_2(
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 613 "term_constr_main.m"
{
#line 613 "term_constr_main.m"
  {
#line 613 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 613 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 613 "term_constr_main.m"
    {
#line 613 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__613__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 613 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 613 "term_constr_main.m"
  }
#line 613 "term_constr_main.m"
}

#line 613 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_1(
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 613 "term_constr_main.m"
{
#line 613 "term_constr_main.m"
  {
#line 613 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 613 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 613 "term_constr_main.m"
    {
#line 613 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 613 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 613 "term_constr_main.m"
  }
#line 613 "term_constr_main.m"
}

#line 602 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0(
#line 602 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__VarToVarIdMap_5,
#line 602 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeArgSizeConstrs_6)
#line 602 "term_constr_main.m"
{
#line 607 "term_constr_main.m"
  {
#line 607 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 607 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__MaybeArgSizeConstrs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "term_constr_main.m"
      {
#line 608 "term_constr_main.m"
        {
#line 608 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
#line 608 "term_constr_main.m"
          return;
        }
#line 607 "term_constr_main.m"
      }
#line 607 "term_constr_main.m"
    else
#line 610 "term_constr_main.m"
      {
#line 610 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeCtorInfo_29_29;
#line 610 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Polyhedron_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeArgSizeConstrs_6, (MR_Integer) 0)));
#line 610 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints0_9;
#line 610 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints1_10;
#line 610 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints_11;
#line 610 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__OutputVar_12;

#line 611 "term_constr_main.m"
        {
#line 611 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "constraints(");
        }
#line 612 "term_constr_main.m"
        {
#line 612 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints0_9 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_main__Polyhedron_8);
        }
#line 2987 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__TypeCtorInfo_29_29 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 613 "term_constr_main.m"
        {
#line 613 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints1_10 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_29_29, (MR_Word) &transform_hlds__term_constr_main_scalar_common_4[2], transform_hlds__term_constr_main__Constraints0_9);
        }
#line 614 "term_constr_main.m"
        {
#line 614 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints_11 = mercury__list__sort_1_f_0(transform_hlds__term_constr_main__TypeCtorInfo_29_29, transform_hlds__term_constr_main__Constraints1_10);
        }
#line 615 "term_constr_main.m"
        {
#line 615 "term_constr_main.m"
          transform_hlds__term_constr_main__OutputVar_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 615 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_12, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_6[0]));
#line 615 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_12, 1) = ((MR_Box) (transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_3));
#line 615 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 615 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_12, 3) = ((MR_Box) (transform_hlds__term_constr_main__VarToVarIdMap_5));
#line 615 "term_constr_main.m"
        }
#line 616 "term_constr_main.m"
        {
#line 616 "term_constr_main.m"
          libs__lp_rational__output_constraints_4_p_0(transform_hlds__term_constr_main__OutputVar_12, transform_hlds__term_constr_main__Constraints_11);
        }
#line 617 "term_constr_main.m"
        {
#line 617 "term_constr_main.m"
          mercury__io__write_char_3_p_0((MR_Char) 41);
#line 617 "term_constr_main.m"
          return;
        }
#line 610 "term_constr_main.m"
      }
#line 607 "term_constr_main.m"
  }
#line 602 "term_constr_main.m"
}

#line 495 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0_1(
#line 495 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 495 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 495 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 495 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 495 "term_constr_main.m"
{
#line 495 "term_constr_main.m"
  {
#line 495 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 495 "term_constr_main.m"
    {
#line 495 "term_constr_main.m"
      transform_hlds__term_constr_main__output_pred_termination2_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
#line 495 "term_constr_main.m"
      return;
    }
#line 495 "term_constr_main.m"
  }
#line 495 "term_constr_main.m"
}

#line 461 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0(
#line 461 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_4)
#line 461 "term_constr_main.m"
{
#line 464 "term_constr_main.m"
  {
#line 464 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 464 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_6;
#line 464 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__MakeOptInt_7;

#line 466 "term_constr_main.m"
    {
#line 466 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__ModuleInfo_4, &transform_hlds__term_constr_main__Globals_6);
    }
#line 467 "term_constr_main.m"
    {
#line 467 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_6, (MR_Integer) 85, &transform_hlds__term_constr_main__MakeOptInt_7);
    }
#line 473 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__MakeOptInt_7 == (MR_Integer) 0))
#line 474 "term_constr_main.m"
      {
#line 474 "term_constr_main.m"
      }
#line 473 "term_constr_main.m"
    else
#line 470 "term_constr_main.m"
      {
#line 470 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__PredIds_8;
#line 470 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Globals_19;
#line 470 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__ModuleName_20;
#line 470 "term_constr_main.m"
        MR_String transform_hlds__term_constr_main__OptFileName_21;
#line 470 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Verbose_22;
#line 470 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__OptFileRes_23;
#line 471 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main___ModuleInfo_9;

#line 471 "term_constr_main.m"
        {
#line 471 "term_constr_main.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__term_constr_main__PredIds_8, transform_hlds__term_constr_main__ModuleInfo_4, &transform_hlds__term_constr_main___ModuleInfo_9);
        }
#line 481 "term_constr_main.m"
        {
#line 481 "term_constr_main.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__ModuleInfo_4, &transform_hlds__term_constr_main__Globals_19);
        }
#line 482 "term_constr_main.m"
        {
#line 482 "term_constr_main.m"
          hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__term_constr_main__ModuleInfo_4, &transform_hlds__term_constr_main__ModuleName_20);
        }
#line 483 "term_constr_main.m"
        {
#line 483 "term_constr_main.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__term_constr_main__Globals_19, transform_hlds__term_constr_main__ModuleName_20, (MR_String) ".opt.tmp", (MR_Integer) 1, &transform_hlds__term_constr_main__OptFileName_21);
        }
#line 485 "term_constr_main.m"
        {
#line 485 "term_constr_main.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_19, (MR_Integer) 44, &transform_hlds__term_constr_main__Verbose_22);
        }
#line 486 "term_constr_main.m"
        {
#line 486 "term_constr_main.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_22, (MR_String) "% Appending termination2_info pragmas to \140");
        }
#line 488 "term_constr_main.m"
        {
#line 488 "term_constr_main.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_22, transform_hlds__term_constr_main__OptFileName_21);
        }
#line 489 "term_constr_main.m"
        {
#line 489 "term_constr_main.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_22, (MR_String) "\'...");
        }
#line 490 "term_constr_main.m"
        {
#line 490 "term_constr_main.m"
          libs__file_util__maybe_flush_output_3_p_0(transform_hlds__term_constr_main__Verbose_22);
        }
#line 491 "term_constr_main.m"
        {
#line 491 "term_constr_main.m"
          mercury__io__open_append_4_p_0(transform_hlds__term_constr_main__OptFileName_21, &transform_hlds__term_constr_main__OptFileRes_23);
        }
#line 499 "term_constr_main.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_main__OptFileRes_23)) == (MR_mktag((MR_Integer) 1))))
#line 500 "term_constr_main.m"
          {
#line 500 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__IOError_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__OptFileRes_23, (MR_Integer) 0)));
#line 500 "term_constr_main.m"
            MR_String transform_hlds__term_constr_main__IOErrorMessage_28;
#line 500 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_42_42;
#line 500 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_45_45;
#line 500 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_46_46;
#line 500 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_48_48;

#line 501 "term_constr_main.m"
            {
#line 501 "term_constr_main.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_22, (MR_String) " failed!\n");
            }
#line 502 "term_constr_main.m"
            {
#line 502 "term_constr_main.m"
              mercury__io__error_message_2_p_0(transform_hlds__term_constr_main__IOError_27, &transform_hlds__term_constr_main__IOErrorMessage_28);
            }
#line 504 "term_constr_main.m"
            {
#line 504 "term_constr_main.m"
              transform_hlds__term_constr_main__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_48_48, 0) = ((MR_Box) (transform_hlds__term_constr_main__IOErrorMessage_28));
#line 504 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "term_constr_main.m"
            }
#line 504 "term_constr_main.m"
            {
#line 504 "term_constr_main.m"
              transform_hlds__term_constr_main__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_46_46, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 504 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_46_46, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_48_48));
#line 504 "term_constr_main.m"
            }
#line 504 "term_constr_main.m"
            {
#line 504 "term_constr_main.m"
              transform_hlds__term_constr_main__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_45_45, 0) = ((MR_Box) (transform_hlds__term_constr_main__OptFileName_21));
#line 504 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_45_45, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_46_46));
#line 504 "term_constr_main.m"
            }
#line 503 "term_constr_main.m"
            {
#line 503 "term_constr_main.m"
              transform_hlds__term_constr_main__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_42_42, 0) = ((MR_Box) ((MR_String) "Error opening file \140"));
#line 503 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_42_42, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_45_45));
#line 503 "term_constr_main.m"
            }
#line 503 "term_constr_main.m"
            {
#line 503 "term_constr_main.m"
              mercury__io__write_strings_3_p_0(transform_hlds__term_constr_main__V_42_42);
            }
#line 505 "term_constr_main.m"
            {
#line 505 "term_constr_main.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 505 "term_constr_main.m"
              return;
            }
#line 500 "term_constr_main.m"
          }
#line 499 "term_constr_main.m"
        else
#line 493 "term_constr_main.m"
          {
#line 493 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__OptFile_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OptFileRes_23, (MR_Integer) 0)));
#line 493 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__OldStream_25;
#line 493 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_53_53;
#line 495 "term_constr_main.m"
            MR_Box transform_hlds__term_constr_main__conv0_STATE_VARIABLE_IO_45_54;
#line 496 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_26_26;

#line 494 "term_constr_main.m"
            {
#line 494 "term_constr_main.m"
              mercury__io__set_output_stream_4_p_0(transform_hlds__term_constr_main__OptFile_24, &transform_hlds__term_constr_main__OldStream_25);
            }
#line 495 "term_constr_main.m"
            {
#line 495 "term_constr_main.m"
              transform_hlds__term_constr_main__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 495 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_53_53, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_7[1]));
#line 495 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_53_53, 1) = ((MR_Box) (transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0_1));
#line 495 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 495 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_53_53, 3) = ((MR_Box) (transform_hlds__term_constr_main__ModuleInfo_4));
#line 495 "term_constr_main.m"
            }
#line 495 "term_constr_main.m"
            {
#line 495 "term_constr_main.m"
              mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_main__V_53_53, transform_hlds__term_constr_main__PredIds_8, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_IO_45_54);
            }
#line 496 "term_constr_main.m"
            {
#line 496 "term_constr_main.m"
              mercury__io__set_output_stream_4_p_0(transform_hlds__term_constr_main__OldStream_25, &transform_hlds__term_constr_main__V_26_26);
            }
#line 497 "term_constr_main.m"
            {
#line 497 "term_constr_main.m"
              mercury__io__close_output_3_p_0(transform_hlds__term_constr_main__OptFile_24);
            }
#line 498 "term_constr_main.m"
            {
#line 498 "term_constr_main.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_22, (MR_String) " done.\n");
#line 498 "term_constr_main.m"
              return;
            }
#line 493 "term_constr_main.m"
          }
#line 470 "term_constr_main.m"
      }
#line 464 "term_constr_main.m"
  }
#line 461 "term_constr_main.m"
}

#line 446 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(
#line 446 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__TerminationInfo_5,
#line 446 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_6,
#line 446 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13,
#line 446 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14)
#line 446 "term_constr_main.m"
{
#line 449 "term_constr_main.m"
  {
#line 449 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 449 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__PredInfo_8;
#line 449 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo0_9;
#line 449 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo0_10;
#line 449 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_11;
#line 449 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_12;
#line 449 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_15_15;
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_17_17;
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_18_18;
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_19_19;
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_20_20;
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_21_21;
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_22_22;
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_24_24;
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_25_25;
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_23_23;

#line 450 "term_constr_main.m"
    {
#line 450 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__term_constr_main__PPId_6, &transform_hlds__term_constr_main__PredInfo_8, &transform_hlds__term_constr_main__ProcInfo0_9);
    }
#line 451 "term_constr_main.m"
    {
#line 451 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo0_9, &transform_hlds__term_constr_main__TermInfo0_10);
    }
#line 452 "term_constr_main.m"
    {
#line 452 "term_constr_main.m"
      transform_hlds__term_constr_main__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 452 "term_constr_main.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_15_15, 0) = ((MR_Box) (transform_hlds__term_constr_main__TerminationInfo_5));
#line 452 "term_constr_main.m"
    }
#line 165 "term_constr_main.m"
    transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 0)));
#line 165 "term_constr_main.m"
    transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 1)));
#line 165 "term_constr_main.m"
    transform_hlds__term_constr_main__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 2)));
#line 165 "term_constr_main.m"
    transform_hlds__term_constr_main__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 3)));
#line 165 "term_constr_main.m"
    transform_hlds__term_constr_main__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 4)));
#line 165 "term_constr_main.m"
    transform_hlds__term_constr_main__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 5)));
#line 165 "term_constr_main.m"
    transform_hlds__term_constr_main__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 6)));
#line 165 "term_constr_main.m"
    transform_hlds__term_constr_main__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 7)));
#line 165 "term_constr_main.m"
    transform_hlds__term_constr_main__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 8)));
#line 165 "term_constr_main.m"
    {
#line 165 "term_constr_main.m"
      transform_hlds__term_constr_main__TermInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_17_17));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_18_18));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_19_19));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_20_20));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_21_21));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_22_22));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_15_15));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_24_24));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_25_25));
#line 165 "term_constr_main.m"
    }
#line 453 "term_constr_main.m"
    {
#line 453 "term_constr_main.m"
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_main__TermInfo_11, transform_hlds__term_constr_main__ProcInfo0_9, &transform_hlds__term_constr_main__ProcInfo_12);
    }
#line 454 "term_constr_main.m"
    {
#line 454 "term_constr_main.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__term_constr_main__PPId_6, transform_hlds__term_constr_main__PredInfo_8, transform_hlds__term_constr_main__ProcInfo_12, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14);
#line 454 "term_constr_main.m"
      return;
    }
#line 449 "term_constr_main.m"
  }
#line 446 "term_constr_main.m"
}

#line 443 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_7(
#line 443 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 443 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 443 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 443 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 443 "term_constr_main.m"
{
#line 443 "term_constr_main.m"
  {
#line 443 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 443 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14;

#line 443 "term_constr_main.m"
    {
#line 443 "term_constr_main.m"
      transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14);
    }
#line 443 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14));
#line 443 "term_constr_main.m"
  }
#line 443 "term_constr_main.m"
}

#line 443 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_6(
#line 443 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 443 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 443 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 443 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 443 "term_constr_main.m"
{
#line 443 "term_constr_main.m"
  {
#line 443 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 443 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14;

#line 443 "term_constr_main.m"
    {
#line 443 "term_constr_main.m"
      transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14);
    }
#line 443 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14));
#line 443 "term_constr_main.m"
  }
#line 443 "term_constr_main.m"
}

#line 408 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_5(
#line 408 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 408 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 408 "term_constr_main.m"
{
#line 408 "term_constr_main.m"
  {
#line 408 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 408 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 408 "term_constr_main.m"
    {
#line 408 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__408__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 408 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 408 "term_constr_main.m"
  }
#line 408 "term_constr_main.m"
}

#line 408 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_4(
#line 408 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 408 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 408 "term_constr_main.m"
{
#line 408 "term_constr_main.m"
  {
#line 408 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 408 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 408 "term_constr_main.m"
    {
#line 408 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__has_term_info_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 408 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 408 "term_constr_main.m"
  }
#line 408 "term_constr_main.m"
}

#line 390 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_3(
#line 390 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 390 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 390 "term_constr_main.m"
{
#line 390 "term_constr_main.m"
  {
#line 390 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 390 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 390 "term_constr_main.m"
    {
#line 390 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__390__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 390 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 390 "term_constr_main.m"
  }
#line 390 "term_constr_main.m"
}

#line 390 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_2(
#line 390 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 390 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 390 "term_constr_main.m"
{
#line 390 "term_constr_main.m"
  {
#line 390 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 390 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 390 "term_constr_main.m"
    {
#line 390 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__has_arg_size_info_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 390 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 390 "term_constr_main.m"
  }
#line 390 "term_constr_main.m"
}

#line 378 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_1(
#line 378 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 378 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 378 "term_constr_main.m"
{
#line 378 "term_constr_main.m"
  {
#line 378 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 378 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 378 "term_constr_main.m"
    {
#line 378 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 378 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 378 "term_constr_main.m"
  }
#line 378 "term_constr_main.m"
}

#line 368 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0(
#line 368 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__DepOrder_10,
#line 368 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__BuildOpts_11,
#line 368 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__FixpointOpts_12,
#line 368 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Pass2Opts_13,
#line 368 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SCC_14,
#line 368 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31,
#line 368 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32)
#line 368 "term_constr_main.m"
{
#line 374 "term_constr_main.m"
  {
#line 374 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__NeedsAR_17;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__BuildErrors_18;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__NeedsArgSize_19;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FixpointErrors_20;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Pass1Errors_21;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__MaybeEarlyPass2Result_22;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_25;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ArgSizeOnly_26;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_35_35;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_38_38;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_39_39;
#line 374 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41;

#line 378 "term_constr_main.m"
    {
#line 378 "term_constr_main.m"
      transform_hlds__term_constr_main__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 378 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[1]));
#line 378 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_1));
#line 378 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 378 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31));
#line 378 "term_constr_main.m"
    }
#line 378 "term_constr_main.m"
    {
#line 378 "term_constr_main.m"
      transform_hlds__term_constr_main__NeedsAR_17 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_50_50, transform_hlds__term_constr_main__V_35_35, transform_hlds__term_constr_main__SCC_14);
    }
#line 383 "term_constr_main.m"
    {
#line 383 "term_constr_main.m"
      transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0(transform_hlds__term_constr_main__DepOrder_10, transform_hlds__term_constr_main__NeedsAR_17, transform_hlds__term_constr_main__BuildOpts_11, &transform_hlds__term_constr_main__BuildErrors_18, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36);
    }
#line 390 "term_constr_main.m"
    {
#line 390 "term_constr_main.m"
      transform_hlds__term_constr_main__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 390 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[1]));
#line 390 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_2));
#line 390 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 390 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36));
#line 390 "term_constr_main.m"
    }
#line 390 "term_constr_main.m"
    {
#line 390 "term_constr_main.m"
      transform_hlds__term_constr_main__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 390 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[2]));
#line 390 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_3));
#line 390 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 390 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_39_39));
#line 390 "term_constr_main.m"
    }
#line 390 "term_constr_main.m"
    {
#line 390 "term_constr_main.m"
      transform_hlds__term_constr_main__NeedsArgSize_19 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_50_50, transform_hlds__term_constr_main__V_38_38, transform_hlds__term_constr_main__NeedsAR_17);
    }
#line 391 "term_constr_main.m"
    {
#line 391 "term_constr_main.m"
      transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(transform_hlds__term_constr_main__FixpointOpts_12, transform_hlds__term_constr_main__NeedsArgSize_19, (MR_Integer) 1, &transform_hlds__term_constr_main__FixpointErrors_20, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41);
    }
#line 396 "term_constr_main.m"
    {
#line 396 "term_constr_main.m"
      transform_hlds__term_constr_main__Pass1Errors_21 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[0], transform_hlds__term_constr_main__BuildErrors_18, transform_hlds__term_constr_main__FixpointErrors_20);
    }
#line 400 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__Pass1Errors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "term_constr_main.m"
      transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 400 "term_constr_main.m"
    else
#line 401 "term_constr_main.m"
      {
#line 401 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_42_42;

#line 402 "term_constr_main.m"
        {
#line 402 "term_constr_main.m"
          transform_hlds__term_constr_main__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "term_constr_main.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_42_42, 0) = ((MR_Box) (transform_hlds__term_constr_main__Pass1Errors_21));
#line 402 "term_constr_main.m"
        }
#line 402 "term_constr_main.m"
        {
#line 402 "term_constr_main.m"
          transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "term_constr_main.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeEarlyPass2Result_22, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_42_42));
#line 402 "term_constr_main.m"
        }
#line 401 "term_constr_main.m"
      }
#line 404 "term_constr_main.m"
    {
#line 404 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__term_constr_main__Globals_25);
    }
#line 405 "term_constr_main.m"
    {
#line 405 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_25, (MR_Integer) 423, &transform_hlds__term_constr_main__ArgSizeOnly_26);
    }
#line 430 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__ArgSizeOnly_26 == (MR_Integer) 0))
#line 407 "term_constr_main.m"
      {
#line 407 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeCtorInfo_15_69;
#line 407 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeCtorInfo_16_70;
#line 407 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__NeedsTerm_27;
#line 407 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_44_44;
#line 407 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_45_45;

#line 408 "term_constr_main.m"
        {
#line 408 "term_constr_main.m"
          transform_hlds__term_constr_main__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 408 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[1]));
#line 408 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_4));
#line 408 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 408 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41));
#line 408 "term_constr_main.m"
        }
#line 408 "term_constr_main.m"
        {
#line 408 "term_constr_main.m"
          transform_hlds__term_constr_main__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 408 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[2]));
#line 408 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_5));
#line 408 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 408 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_45_45));
#line 408 "term_constr_main.m"
        }
#line 408 "term_constr_main.m"
        {
#line 408 "term_constr_main.m"
          transform_hlds__term_constr_main__NeedsTerm_27 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_50_50, transform_hlds__term_constr_main__V_44_44, transform_hlds__term_constr_main__NeedsAR_17);
        }
#line 3844 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__TypeCtorInfo_15_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3846 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__TypeCtorInfo_16_70 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 3848 "transform_hlds.term_constr_main.c"
        if ((transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3850 "transform_hlds.term_constr_main.c"
          {
#line 3852 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__Pass2Result_28;
#line 3854 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47;
#line 3856 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__V_64_64;
#line 443 "term_constr_main.m"
            MR_Box transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_47_47;

#line 417 "term_constr_main.m"
            {
#line 417 "term_constr_main.m"
              transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0(transform_hlds__term_constr_main__Pass2Opts_13, transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__term_constr_main__Pass2Result_28);
            }
#line 443 "term_constr_main.m"
            {
#line 443 "term_constr_main.m"
              transform_hlds__term_constr_main__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 443 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_7[0]));
#line 443 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_6));
#line 443 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 443 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 3) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Result_28));
#line 443 "term_constr_main.m"
            }
#line 443 "term_constr_main.m"
            {
#line 443 "term_constr_main.m"
              mercury__list__foldl_4_p_0(transform_hlds__term_constr_main__TypeCtorInfo_15_69, transform_hlds__term_constr_main__TypeCtorInfo_16_70, transform_hlds__term_constr_main__V_64_64, transform_hlds__term_constr_main__NeedsTerm_27, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41)), &transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_47_47);
            }
#line 443 "term_constr_main.m"
            transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47 = ((MR_Word) transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_47_47);
#line 427 "term_constr_main.m"
            if (((MR_tag((MR_Word) transform_hlds__term_constr_main__Pass2Result_28)) == (MR_mktag((MR_Integer) 1))))
#line 425 "term_constr_main.m"
              {
#line 425 "term_constr_main.m"
                MR_Word transform_hlds__term_constr_main__Errors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__Pass2Result_28, (MR_Integer) 0)));

#line 426 "term_constr_main.m"
                {
#line 426 "term_constr_main.m"
                  transform_hlds__term_constr_errors__report_termination2_errors_6_p_0(transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__Errors_29, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32);
#line 426 "term_constr_main.m"
                  return;
                }
#line 425 "term_constr_main.m"
              }
#line 427 "term_constr_main.m"
            else
#line 428 "term_constr_main.m"
              *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32 = transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47;
#line 3907 "transform_hlds.term_constr_main.c"
          }
#line 3909 "transform_hlds.term_constr_main.c"
        else
#line 3911 "transform_hlds.term_constr_main.c"
          {
#line 3913 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__Pass2Result_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeEarlyPass2Result_22, (MR_Integer) 0)));
#line 3915 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__Errors_72;
#line 3917 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74;
#line 3919 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__V_75_75;
#line 443 "term_constr_main.m"
            MR_Box transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_47_74;

#line 443 "term_constr_main.m"
            {
#line 443 "term_constr_main.m"
              transform_hlds__term_constr_main__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 443 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_7[0]));
#line 443 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_7));
#line 443 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 443 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 3) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Result_71));
#line 443 "term_constr_main.m"
            }
#line 443 "term_constr_main.m"
            {
#line 443 "term_constr_main.m"
              mercury__list__foldl_4_p_0(transform_hlds__term_constr_main__TypeCtorInfo_15_69, transform_hlds__term_constr_main__TypeCtorInfo_16_70, transform_hlds__term_constr_main__V_75_75, transform_hlds__term_constr_main__NeedsTerm_27, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41)), &transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_47_74);
            }
#line 443 "term_constr_main.m"
            transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74 = ((MR_Word) transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_47_74);
#line 425 "term_constr_main.m"
            transform_hlds__term_constr_main__Errors_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__Pass2Result_71, (MR_Integer) 0)));
#line 426 "term_constr_main.m"
            {
#line 426 "term_constr_main.m"
              transform_hlds__term_constr_errors__report_termination2_errors_6_p_0(transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__Errors_72, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32);
#line 426 "term_constr_main.m"
              return;
            }
#line 3954 "transform_hlds.term_constr_main.c"
          }
#line 407 "term_constr_main.m"
      }
#line 430 "term_constr_main.m"
    else
#line 431 "term_constr_main.m"
      *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32 = transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41;
#line 374 "term_constr_main.m"
  }
#line 368 "term_constr_main.m"
}

#line 615 "term_constr_main.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_3(
#line 615 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 615 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 615 "term_constr_main.m"
{
#line 615 "term_constr_main.m"
  {
#line 615 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__wrapper_arg_2;
#line 615 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 615 "term_constr_main.m"
    MR_String transform_hlds__term_constr_main__conv1_HeadVar__3_21;

#line 615 "term_constr_main.m"
    {
#line 615 "term_constr_main.m"
      transform_hlds__term_constr_main__conv1_HeadVar__3_21 = transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__615__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 615 "term_constr_main.m"
    transform_hlds__term_constr_main__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_main__conv1_HeadVar__3_21));
#line 615 "term_constr_main.m"
    return transform_hlds__term_constr_main__wrapper_arg_2;
#line 615 "term_constr_main.m"
  }
#line 615 "term_constr_main.m"
}

#line 613 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_2(
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 613 "term_constr_main.m"
{
#line 613 "term_constr_main.m"
  {
#line 613 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 613 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 613 "term_constr_main.m"
    {
#line 613 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__613__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 613 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 613 "term_constr_main.m"
  }
#line 613 "term_constr_main.m"
}

#line 613 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_1(
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 613 "term_constr_main.m"
{
#line 613 "term_constr_main.m"
  {
#line 613 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 613 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 613 "term_constr_main.m"
    {
#line 613 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 613 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 613 "term_constr_main.m"
  }
#line 613 "term_constr_main.m"
}

#line 194 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0(
#line 194 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PredOrFunc_11,
#line 194 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SymName_12,
#line 194 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModeList_13,
#line 194 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Context_14,
#line 194 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeSuccess_15,
#line 194 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeFailure_16,
#line 194 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeTermination_17,
#line 194 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVars_18)
#line 194 "term_constr_main.m"
{
#line 574 "term_constr_main.m"
  {
#line 574 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 574 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TypeInfo_53_53;
#line 574 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TypeCtorInfo_54_54;
#line 574 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__NumHeadVars_22;
#line 574 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVarIds_23;
#line 574 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__VarToVarIdMap_24;
#line 574 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__V_36_36;
#line 574 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_38_38;

#line 575 "term_constr_main.m"
    {
#line 575 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination2_info(");
    }
#line 580 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__PredOrFunc_11 == (MR_Integer) 1))
#line 581 "term_constr_main.m"
      {
#line 581 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__FuncModeList_20;
#line 581 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__RetMode_21;
#line 581 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_29_29;
#line 582 "term_constr_main.m"
        MR_Box transform_hlds__term_constr_main__conv0_RetMode_21;

#line 582 "term_constr_main.m"
        {
#line 582 "term_constr_main.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__term_constr_main__ModeList_13, &transform_hlds__term_constr_main__FuncModeList_20, &transform_hlds__term_constr_main__conv0_RetMode_21);
        }
#line 582 "term_constr_main.m"
        transform_hlds__term_constr_main__RetMode_21 = ((MR_Word) transform_hlds__term_constr_main__conv0_RetMode_21);
#line 583 "term_constr_main.m"
        {
#line 583 "term_constr_main.m"
          transform_hlds__term_constr_main__V_29_29 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
        }
#line 583 "term_constr_main.m"
        {
#line 583 "term_constr_main.m"
          parse_tree__mercury_to_mercury__mercury_output_func_mode_subdecl_8_p_0(transform_hlds__term_constr_main__V_29_29, transform_hlds__term_constr_main__SymName_12, transform_hlds__term_constr_main__FuncModeList_20, transform_hlds__term_constr_main__RetMode_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_constr_main__Context_14);
        }
#line 581 "term_constr_main.m"
      }
#line 580 "term_constr_main.m"
    else
#line 577 "term_constr_main.m"
      {
#line 577 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_32_32;

#line 578 "term_constr_main.m"
        {
#line 578 "term_constr_main.m"
          transform_hlds__term_constr_main__V_32_32 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
        }
#line 578 "term_constr_main.m"
        {
#line 578 "term_constr_main.m"
          parse_tree__mercury_to_mercury__mercury_output_pred_mode_subdecl_7_p_0(transform_hlds__term_constr_main__V_32_32, transform_hlds__term_constr_main__SymName_12, transform_hlds__term_constr_main__ModeList_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_constr_main__Context_14);
        }
#line 577 "term_constr_main.m"
      }
#line 4151 "transform_hlds.term_constr_main.c"
    transform_hlds__term_constr_main__TypeInfo_53_53 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[1];
#line 587 "term_constr_main.m"
    {
#line 587 "term_constr_main.m"
      mercury__list__length_2_p_0(transform_hlds__term_constr_main__TypeInfo_53_53, transform_hlds__term_constr_main__HeadVars_18, &transform_hlds__term_constr_main__NumHeadVars_22);
    }
#line 588 "term_constr_main.m"
    transform_hlds__term_constr_main__V_36_36 = (transform_hlds__term_constr_main__NumHeadVars_22 - (MR_Integer) 1);
#line 588 "term_constr_main.m"
    {
#line 588 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVarIds_23 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, transform_hlds__term_constr_main__V_36_36);
    }
#line 4165 "transform_hlds.term_constr_main.c"
    transform_hlds__term_constr_main__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 590 "term_constr_main.m"
    {
#line 590 "term_constr_main.m"
      transform_hlds__term_constr_main__V_38_38 = mercury__map__init_0_f_0(transform_hlds__term_constr_main__TypeInfo_53_53, transform_hlds__term_constr_main__TypeCtorInfo_54_54);
    }
#line 589 "term_constr_main.m"
    {
#line 589 "term_constr_main.m"
      mercury__map__det_insert_from_corresponding_lists_4_p_0(transform_hlds__term_constr_main__TypeInfo_53_53, transform_hlds__term_constr_main__TypeCtorInfo_54_54, transform_hlds__term_constr_main__HeadVars_18, transform_hlds__term_constr_main__HeadVarIds_23, transform_hlds__term_constr_main__V_38_38, &transform_hlds__term_constr_main__VarToVarIdMap_24);
    }
#line 592 "term_constr_main.m"
    {
#line 592 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 607 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__MaybeSuccess_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "term_constr_main.m"
      {
#line 608 "term_constr_main.m"
        {
#line 608 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 607 "term_constr_main.m"
      }
#line 607 "term_constr_main.m"
    else
#line 610 "term_constr_main.m"
      {
#line 610 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeCtorInfo_29_79;
#line 610 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Polyhedron_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeSuccess_15, (MR_Integer) 0)));
#line 610 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints0_61;
#line 610 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints1_62;
#line 610 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints_63;
#line 610 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__OutputVar_64;

#line 611 "term_constr_main.m"
        {
#line 611 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "constraints(");
        }
#line 612 "term_constr_main.m"
        {
#line 612 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints0_61 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_main__Polyhedron_60);
        }
#line 4220 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__TypeCtorInfo_29_79 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 613 "term_constr_main.m"
        {
#line 613 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints1_62 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_29_79, (MR_Word) &transform_hlds__term_constr_main_scalar_common_4[1], transform_hlds__term_constr_main__Constraints0_61);
        }
#line 614 "term_constr_main.m"
        {
#line 614 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints_63 = mercury__list__sort_1_f_0(transform_hlds__term_constr_main__TypeCtorInfo_29_79, transform_hlds__term_constr_main__Constraints1_62);
        }
#line 615 "term_constr_main.m"
        {
#line 615 "term_constr_main.m"
          transform_hlds__term_constr_main__OutputVar_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 615 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_64, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_6[0]));
#line 615 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_64, 1) = ((MR_Box) (transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_3));
#line 615 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 615 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_64, 3) = ((MR_Box) (transform_hlds__term_constr_main__VarToVarIdMap_24));
#line 615 "term_constr_main.m"
        }
#line 616 "term_constr_main.m"
        {
#line 616 "term_constr_main.m"
          libs__lp_rational__output_constraints_4_p_0(transform_hlds__term_constr_main__OutputVar_64, transform_hlds__term_constr_main__Constraints_63);
        }
#line 617 "term_constr_main.m"
        {
#line 617 "term_constr_main.m"
          mercury__io__write_char_3_p_0((MR_Char) 41);
        }
#line 610 "term_constr_main.m"
      }
#line 595 "term_constr_main.m"
    {
#line 595 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 596 "term_constr_main.m"
    {
#line 596 "term_constr_main.m"
      transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0(transform_hlds__term_constr_main__VarToVarIdMap_24, transform_hlds__term_constr_main__MaybeFailure_16);
    }
#line 598 "term_constr_main.m"
    {
#line 598 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 599 "term_constr_main.m"
    {
#line 599 "term_constr_main.m"
      transform_hlds__term_constr_main__output_maybe_termination2_info_3_p_0(transform_hlds__term_constr_main__MaybeTermination_17);
    }
#line 600 "term_constr_main.m"
    {
#line 600 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 600 "term_constr_main.m"
      return;
    }
#line 574 "term_constr_main.m"
  }
#line 194 "term_constr_main.m"
}

#line 188 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main__output_pred_termination2_info_4_p_0(
#line 188 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_5,
#line 188 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PredId_6)
#line 188 "term_constr_main.m"
{
#line 508 "term_constr_main.m"
  {
#line 508 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 508 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_8;
#line 508 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__RunningTerm2_9;

#line 513 "term_constr_main.m"
    {
#line 513 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__ModuleInfo_5, &transform_hlds__term_constr_main__Globals_8);
    }
#line 514 "term_constr_main.m"
    {
#line 514 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_8, (MR_Integer) 418, &transform_hlds__term_constr_main__RunningTerm2_9);
    }
#line 540 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__RunningTerm2_9 == (MR_Integer) 0))
#line 541 "term_constr_main.m"
      {
#line 541 "term_constr_main.m"
      }
#line 540 "term_constr_main.m"
    else
#line 516 "term_constr_main.m"
      {
#line 516 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__PredInfo_10;
#line 516 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__ImportStatus_11;
#line 516 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeSpecInfo_12;
#line 516 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeSpecForcePreds_14;
#line 520 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_13_13;
#line 520 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_15_15;
#line 520 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_16_16;
#line 526 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeCtorInfo_28_28;

#line 517 "term_constr_main.m"
        {
#line 517 "term_constr_main.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_constr_main__ModuleInfo_5, transform_hlds__term_constr_main__PredId_6, &transform_hlds__term_constr_main__PredInfo_10);
        }
#line 518 "term_constr_main.m"
        {
#line 518 "term_constr_main.m"
          hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__term_constr_main__PredInfo_10, &transform_hlds__term_constr_main__ImportStatus_11);
        }
#line 519 "term_constr_main.m"
        {
#line 519 "term_constr_main.m"
          hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__term_constr_main__ModuleInfo_5, &transform_hlds__term_constr_main__TypeSpecInfo_12);
        }
#line 520 "term_constr_main.m"
        transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TypeSpecInfo_12, (MR_Integer) 0)));
#line 520 "term_constr_main.m"
        transform_hlds__term_constr_main__TypeSpecForcePreds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TypeSpecInfo_12, (MR_Integer) 1)));
#line 520 "term_constr_main.m"
        transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TypeSpecInfo_12, (MR_Integer) 2)));
#line 520 "term_constr_main.m"
        transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TypeSpecInfo_12, (MR_Integer) 3)));
#line 523 "term_constr_main.m"
        if ((transform_hlds__term_constr_main__ImportStatus_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 522 "term_constr_main.m"
          transform_hlds__term_constr_main__succeeded = MR_TRUE;
#line 523 "term_constr_main.m"
        else
#line 523 "term_constr_main.m"
          if ((transform_hlds__term_constr_main__ImportStatus_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 523 "term_constr_main.m"
            transform_hlds__term_constr_main__succeeded = MR_TRUE;
#line 523 "term_constr_main.m"
          else
#line 523 "term_constr_main.m"
            transform_hlds__term_constr_main__succeeded = MR_FALSE;
#line 524 "term_constr_main.m"
        if (transform_hlds__term_constr_main__succeeded)
#line 524 "term_constr_main.m"
          {
#line 525 "term_constr_main.m"
            {
#line 525 "term_constr_main.m"
              transform_hlds__term_constr_main__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__term_constr_main__PredInfo_10);
            }
#line 525 "term_constr_main.m"
            transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 524 "term_constr_main.m"
            if (transform_hlds__term_constr_main__succeeded)
#line 524 "term_constr_main.m"
              {
#line 4397 "transform_hlds.term_constr_main.c"
                transform_hlds__term_constr_main__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 526 "term_constr_main.m"
                {
#line 526 "term_constr_main.m"
                  transform_hlds__term_constr_main__succeeded = mercury__set__member_2_p_0(transform_hlds__term_constr_main__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__term_constr_main__PredId_6)), transform_hlds__term_constr_main__TypeSpecForcePreds_14);
                }
#line 526 "term_constr_main.m"
                transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 524 "term_constr_main.m"
              }
#line 524 "term_constr_main.m"
          }
#line 537 "term_constr_main.m"
        if (transform_hlds__term_constr_main__succeeded)
#line 528 "term_constr_main.m"
          {
#line 528 "term_constr_main.m"
            MR_String transform_hlds__term_constr_main__PredName_17;
#line 528 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ProcTable_18;
#line 528 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__Context_19;
#line 528 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__PredOrFunc_20;
#line 528 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ModuleName_21;
#line 528 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ProcIds_22;
#line 528 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__SymName_23;

#line 528 "term_constr_main.m"
            {
#line 528 "term_constr_main.m"
              transform_hlds__term_constr_main__PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__term_constr_main__PredInfo_10);
            }
#line 529 "term_constr_main.m"
            {
#line 529 "term_constr_main.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__term_constr_main__PredInfo_10, &transform_hlds__term_constr_main__ProcTable_18);
            }
#line 530 "term_constr_main.m"
            {
#line 530 "term_constr_main.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_constr_main__PredInfo_10, &transform_hlds__term_constr_main__Context_19);
            }
#line 531 "term_constr_main.m"
            {
#line 531 "term_constr_main.m"
              transform_hlds__term_constr_main__PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__term_constr_main__PredInfo_10);
            }
#line 532 "term_constr_main.m"
            {
#line 532 "term_constr_main.m"
              transform_hlds__term_constr_main__ModuleName_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__term_constr_main__PredInfo_10);
            }
#line 533 "term_constr_main.m"
            {
#line 533 "term_constr_main.m"
              transform_hlds__term_constr_main__ProcIds_22 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__term_constr_main__PredInfo_10);
            }
#line 534 "term_constr_main.m"
            {
#line 534 "term_constr_main.m"
              transform_hlds__term_constr_main__SymName_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__SymName_23, 0) = ((MR_Box) (transform_hlds__term_constr_main__ModuleName_21));
#line 534 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__SymName_23, 1) = ((MR_Box) (transform_hlds__term_constr_main__PredName_17));
#line 534 "term_constr_main.m"
            }
#line 535 "term_constr_main.m"
            {
#line 535 "term_constr_main.m"
              transform_hlds__term_constr_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_p_0(transform_hlds__term_constr_main__ProcIds_22, transform_hlds__term_constr_main__ProcTable_18, transform_hlds__term_constr_main__PredOrFunc_20, transform_hlds__term_constr_main__SymName_23, transform_hlds__term_constr_main__Context_19);
#line 535 "term_constr_main.m"
              return;
            }
#line 528 "term_constr_main.m"
          }
#line 537 "term_constr_main.m"
        else
#line 535 "term_constr_main.m"
          {
#line 535 "term_constr_main.m"
          }
#line 516 "term_constr_main.m"
      }
#line 508 "term_constr_main.m"
  }
#line 188 "term_constr_main.m"
}

#line 322 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__pass_4_p_0_1(
#line 322 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 322 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 322 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 322 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3,
#line 322 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_4,
#line 322 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_5)
#line 322 "term_constr_main.m"
{
#line 322 "term_constr_main.m"
  {
#line 322 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 322 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_32;

#line 322 "term_constr_main.m"
    {
#line 322 "term_constr_main.m"
      transform_hlds__term_constr_main__analyse_scc_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_32);
    }
#line 322 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_32));
#line 322 "term_constr_main.m"
  }
#line 322 "term_constr_main.m"
}

#line 181 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main__pass_4_p_0(
#line 181 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20,
#line 181 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_21)
#line 181 "term_constr_main.m"
{
#line 285 "term_constr_main.m"
  {
#line 285 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_7;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Norm_8;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FunctorInfo_9;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Fail_10;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ArgSizeOnly_11;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__BuildOptions_12;
#line 285 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__MaxSize_13;
#line 285 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CutOff_14;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Widening_15;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FixpointOptions_16;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Pass2Options_17;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__DepInfo_18;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__SCCs_19;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30;
#line 285 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_31_31;
#line 322 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_21;
#line 322 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv1_STATE_VARIABLE_IO_33_33;

#line 290 "term_constr_main.m"
    {
#line 290 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__term_constr_main__Globals_7);
    }
#line 291 "term_constr_main.m"
    {
#line 291 "term_constr_main.m"
      libs__globals__get_termination2_norm_2_p_0(transform_hlds__term_constr_main__Globals_7, &transform_hlds__term_constr_main__Norm_8);
    }
#line 292 "term_constr_main.m"
    {
#line 292 "term_constr_main.m"
      transform_hlds__term_constr_main__FunctorInfo_9 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__term_constr_main__Norm_8);
    }
#line 293 "term_constr_main.m"
    {
#line 293 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 424, &transform_hlds__term_constr_main__Fail_10);
    }
#line 294 "term_constr_main.m"
    {
#line 294 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 423, &transform_hlds__term_constr_main__ArgSizeOnly_11);
    }
#line 295 "term_constr_main.m"
    {
#line 295 "term_constr_main.m"
      transform_hlds__term_constr_main__BuildOptions_12 = transform_hlds__term_constr_build__term_build_options_init_3_f_0(transform_hlds__term_constr_main__FunctorInfo_9, transform_hlds__term_constr_main__Fail_10, transform_hlds__term_constr_main__ArgSizeOnly_11);
    }
#line 302 "term_constr_main.m"
    {
#line 302 "term_constr_main.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 425, &transform_hlds__term_constr_main__MaxSize_13);
    }
#line 303 "term_constr_main.m"
    {
#line 303 "term_constr_main.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 422, &transform_hlds__term_constr_main__CutOff_14);
    }
#line 306 "term_constr_main.m"
    transform_hlds__term_constr_main__Widening_15 = (MR_Word) transform_hlds__term_constr_main__CutOff_14;
#line 307 "term_constr_main.m"
    {
#line 307 "term_constr_main.m"
      transform_hlds__term_constr_main__FixpointOptions_16 = transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_f_0(transform_hlds__term_constr_main__Widening_15, transform_hlds__term_constr_main__MaxSize_13);
    }
#line 311 "term_constr_main.m"
    {
#line 311 "term_constr_main.m"
      transform_hlds__term_constr_main__Pass2Options_17 = transform_hlds__term_constr_pass2__pass2_options_init_1_f_0(transform_hlds__term_constr_main__MaxSize_13);
    }
#line 316 "term_constr_main.m"
    {
#line 316 "term_constr_main.m"
      transform_hlds__term_constr_initial__preprocess_module_4_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28);
    }
#line 319 "term_constr_main.m"
    {
#line 319 "term_constr_main.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 320 "term_constr_main.m"
    {
#line 320 "term_constr_main.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__term_constr_main__DepInfo_18);
    }
#line 321 "term_constr_main.m"
    {
#line 321 "term_constr_main.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__DepInfo_18, &transform_hlds__term_constr_main__SCCs_19);
    }
#line 322 "term_constr_main.m"
    {
#line 322 "term_constr_main.m"
      transform_hlds__term_constr_main__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 322 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[0]));
#line 322 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 1) = ((MR_Box) (transform_hlds__term_constr_main__pass_4_p_0_1));
#line 322 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 322 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 3) = ((MR_Box) (transform_hlds__term_constr_main__SCCs_19));
#line 322 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 4) = ((MR_Box) (transform_hlds__term_constr_main__BuildOptions_12));
#line 322 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 5) = ((MR_Box) (transform_hlds__term_constr_main__FixpointOptions_16));
#line 322 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 6) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Options_17));
#line 322 "term_constr_main.m"
    }
#line 322 "term_constr_main.m"
    {
#line 322 "term_constr_main.m"
      mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_main__V_31_31, transform_hlds__term_constr_main__SCCs_19, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30)), &transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_main__conv1_STATE_VARIABLE_IO_33_33);
    }
#line 322 "term_constr_main.m"
    *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_21);
#line 326 "term_constr_main.m"
    {
#line 326 "term_constr_main.m"
      transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0(*transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_21);
#line 326 "term_constr_main.m"
      return;
    }
#line 285 "term_constr_main.m"
  }
#line 181 "term_constr_main.m"
}

#line 171 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_104_101_97_100_95_118_97_114_115_32_58_61_2_f_0(
#line 171 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 171 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 171 "term_constr_main.m"
{
#line 171 "term_constr_main.m"
  {
#line 171 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 171 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 171 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 171 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 171 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 171 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 171 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 171 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 171 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 171 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 171 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));

#line 171 "term_constr_main.m"
    {
#line 171 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 171 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 171 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 171 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 171 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 171 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 171 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 171 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 171 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 171 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 171 "term_constr_main.m"
    }
#line 171 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 171 "term_constr_main.m"
  }
#line 171 "term_constr_main.m"
}

#line 169 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_97_98_115_116_114_97_99_116_95_114_101_112_32_58_61_2_f_0(
#line 169 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 169 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 169 "term_constr_main.m"
{
#line 169 "term_constr_main.m"
  {
#line 169 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 169 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 169 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 169 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 169 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 169 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 169 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 169 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 169 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 169 "term_constr_main.m"
    {
#line 169 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 169 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 169 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 169 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 169 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 169 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 169 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 169 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 169 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 169 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 169 "term_constr_main.m"
    }
#line 169 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 169 "term_constr_main.m"
  }
#line 169 "term_constr_main.m"
}

#line 167 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_f_0(
#line 167 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 167 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 167 "term_constr_main.m"
{
#line 167 "term_constr_main.m"
  {
#line 167 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 167 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 167 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 167 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 167 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 167 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 167 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 167 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 167 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 167 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 167 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));

#line 167 "term_constr_main.m"
    {
#line 167 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 167 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 167 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 167 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 167 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 167 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 167 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 167 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 167 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 167 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 167 "term_constr_main.m"
    }
#line 167 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 167 "term_constr_main.m"
  }
#line 167 "term_constr_main.m"
}

#line 165 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_f_0(
#line 165 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 165 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 165 "term_constr_main.m"
{
#line 165 "term_constr_main.m"
  {
#line 165 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 165 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));

#line 165 "term_constr_main.m"
    {
#line 165 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 165 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 165 "term_constr_main.m"
    }
#line 165 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 165 "term_constr_main.m"
  }
#line 165 "term_constr_main.m"
}

#line 163 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_102_97_105_108_117_114_101_95_99_111_110_115_116_114_115_32_58_61_2_f_0(
#line 163 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 163 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 163 "term_constr_main.m"
{
#line 163 "term_constr_main.m"
  {
#line 163 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 163 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 163 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 163 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 163 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 163 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 163 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 163 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 163 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 163 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 163 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));

#line 163 "term_constr_main.m"
    {
#line 163 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 163 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 163 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 163 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 163 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 163 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 163 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 163 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 163 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 163 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 163 "term_constr_main.m"
    }
#line 163 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 163 "term_constr_main.m"
  }
#line 163 "term_constr_main.m"
}

#line 161 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_f_0(
#line 161 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 161 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 161 "term_constr_main.m"
{
#line 161 "term_constr_main.m"
  {
#line 161 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 161 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 161 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 161 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 161 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 161 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 161 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 161 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 161 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 161 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 161 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));

#line 161 "term_constr_main.m"
    {
#line 161 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 161 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 161 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 161 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 161 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 161 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 161 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 161 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 161 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 161 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 161 "term_constr_main.m"
    }
#line 161 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 161 "term_constr_main.m"
  }
#line 161 "term_constr_main.m"
}

#line 159 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_105_109_112_111_114_116_95_102_97_105_108_117_114_101_32_58_61_2_f_0(
#line 159 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 159 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 159 "term_constr_main.m"
{
#line 159 "term_constr_main.m"
  {
#line 159 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 159 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 159 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 159 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 159 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 159 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 159 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 159 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 159 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 159 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 159 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));

#line 159 "term_constr_main.m"
    {
#line 159 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 159 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 159 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 159 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 159 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 159 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 159 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 159 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 159 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 159 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 159 "term_constr_main.m"
    }
#line 159 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 159 "term_constr_main.m"
  }
#line 159 "term_constr_main.m"
}

#line 157 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_105_109_112_111_114_116_95_115_117_99_99_101_115_115_32_58_61_2_f_0(
#line 157 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 157 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 157 "term_constr_main.m"
{
#line 157 "term_constr_main.m"
  {
#line 157 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 157 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 157 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 157 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 157 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 157 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 157 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 157 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 157 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 157 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 157 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));

#line 157 "term_constr_main.m"
    {
#line 157 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 157 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 157 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 157 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 157 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 157 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 157 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 157 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 157 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 157 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 157 "term_constr_main.m"
    }
#line 157 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 157 "term_constr_main.m"
  }
#line 157 "term_constr_main.m"
}

#line 156 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_f_0(
#line 156 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 156 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 156 "term_constr_main.m"
{
#line 156 "term_constr_main.m"
  {
#line 156 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 156 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 156 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 156 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 156 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 156 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 156 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 156 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 156 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 156 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 156 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));

#line 156 "term_constr_main.m"
    {
#line 156 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 156 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 156 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 156 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 156 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 156 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 156 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 156 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 156 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 156 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 156 "term_constr_main.m"
    }
#line 156 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 156 "term_constr_main.m"
  }
#line 156 "term_constr_main.m"
}

#line 154 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__head_vars_1_f_0(
#line 154 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 154 "term_constr_main.m"
{
#line 154 "term_constr_main.m"
  {
#line 154 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 154 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 154 "term_constr_main.m"
  }
#line 154 "term_constr_main.m"
}

#line 153 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__intermod_status_1_f_0(
#line 153 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 153 "term_constr_main.m"
{
#line 153 "term_constr_main.m"
  {
#line 153 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 153 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 153 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 153 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 153 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 153 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 153 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 153 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 153 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 153 "term_constr_main.m"
  }
#line 153 "term_constr_main.m"
}

#line 152 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__abstract_rep_1_f_0(
#line 152 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 152 "term_constr_main.m"
{
#line 152 "term_constr_main.m"
  {
#line 152 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));

#line 152 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 152 "term_constr_main.m"
  }
#line 152 "term_constr_main.m"
}

#line 151 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__term_status_1_f_0(
#line 151 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 151 "term_constr_main.m"
{
#line 151 "term_constr_main.m"
  {
#line 151 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 151 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 151 "term_constr_main.m"
  }
#line 151 "term_constr_main.m"
}

#line 150 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__failure_constrs_1_f_0(
#line 150 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 150 "term_constr_main.m"
{
#line 150 "term_constr_main.m"
  {
#line 150 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 150 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 150 "term_constr_main.m"
  }
#line 150 "term_constr_main.m"
}

#line 149 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__success_constrs_1_f_0(
#line 149 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 149 "term_constr_main.m"
{
#line 149 "term_constr_main.m"
  {
#line 149 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 149 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 149 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 149 "term_constr_main.m"
  }
#line 149 "term_constr_main.m"
}

#line 147 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__import_failure_1_f_0(
#line 147 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 147 "term_constr_main.m"
{
#line 147 "term_constr_main.m"
  {
#line 147 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 147 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 147 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 147 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 147 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 147 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 147 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 147 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 147 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 147 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 147 "term_constr_main.m"
  }
#line 147 "term_constr_main.m"
}

#line 145 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__import_success_1_f_0(
#line 145 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 145 "term_constr_main.m"
{
#line 145 "term_constr_main.m"
  {
#line 145 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 145 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 145 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 145 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 145 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 145 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 145 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 145 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 145 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 145 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 145 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 145 "term_constr_main.m"
  }
#line 145 "term_constr_main.m"
}

#line 144 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__size_var_map_1_f_0(
#line 144 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 144 "term_constr_main.m"
{
#line 144 "term_constr_main.m"
  {
#line 144 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 144 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 144 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 144 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 144 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 144 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 144 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 144 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 144 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 144 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 144 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 144 "term_constr_main.m"
  }
#line 144 "term_constr_main.m"
}

#line 142 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__term2_info_init_0_f_0(void)
#line 142 "term_constr_main.m"
{
#line 278 "term_constr_main.m"
  {
#line 278 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 278 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__1_1;
#line 278 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_2_2;

#line 278 "term_constr_main.m"
    {
#line 278 "term_constr_main.m"
      transform_hlds__term_constr_main__V_2_2 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[1]);
    }
#line 278 "term_constr_main.m"
    {
#line 278 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 278 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_2_2));
#line 278 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_constr_main.m"
    }
#line 278 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__1_1;
#line 278 "term_constr_main.m"
  }
#line 142 "term_constr_main.m"
}

void mercury__transform_hlds__term_constr_main__init(void)
{
}

void mercury__transform_hlds__term_constr_main__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_constr_arg_size_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_constr_termination_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_intermod_status_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_term_reason_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_termination2_info_0);
}

void mercury__transform_hlds__term_constr_main__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_constr_main. */
