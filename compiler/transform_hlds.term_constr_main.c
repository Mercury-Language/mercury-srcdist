/*
** Automatically generated from `term_constr_main.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "cord.mih"
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
#include "set_tree234.mih"
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
#include "mdbcomp.sym_name.mih"
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




#line 144 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 147 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 150 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 153 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0;

#line 156 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0;

#line 159 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0;

#line 162 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 165 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 168 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 171 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 174 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main__type_ctor_info_term_reason_0__plain_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 177 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 180 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0;

#line 183 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1;

#line 186 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_intermod_status_0[2];

#line 189 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_intermod_status_0[2];

#line 192 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_intermod_status_0[2];

#line 195 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0;

#line 198 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1;

#line 201 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2;

#line 204 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3;

#line 207 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4;

#line 210 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_term_reason_0[5];

#line 213 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_term_reason_0[5];

#line 216 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_term_reason_0[5];

#line 219 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 222 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

#line 225 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 228 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 231 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 234 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0;

#line 237 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 240 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_main__type_ctor_info_intermod_status_0;

#line 243 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

#line 246 "transform_hlds.term_constr_main.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_main__transform_hlds__term_constr_main__field_types_termination2_info_0_0[9];

#line 249 "transform_hlds.term_constr_main.c"
static const MR_ConstString transform_hlds__term_constr_main__transform_hlds__term_constr_main__field_names_termination2_info_0_0[9];

#line 252 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0;

#line 255 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0[1];

#line 258 "transform_hlds.term_constr_main.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_ptag_ordered_termination2_info_0[1];

#line 261 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_name_ordered_termination2_info_0[1];

#line 264 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_termination2_info_0[1];

#line 267 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0_10001(
#line 270 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 272 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 275 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0_10001(
#line 278 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 280 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 282 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 285 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_termination_info_0_0_10001(
#line 288 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 290 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 293 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_termination_info_0_0_10001(
#line 296 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 298 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 300 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 303 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____intermod_status_0_0_10001(
#line 306 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 308 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 311 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____intermod_status_0_0_10001(
#line 314 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 316 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 318 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 321 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____term_reason_0_0_10001(
#line 324 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 326 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 329 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____term_reason_0_0_10001(
#line 332 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 334 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 336 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 339 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____termination2_info_0_0_10001(
#line 342 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 344 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 347 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____termination2_info_0_0_10001(
#line 350 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 352 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 354 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 545 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_p_0(
#line 545 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 545 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ProcTable_3,
#line 545 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PredOrFunc_4,
#line 545 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SymName_5,
#line 545 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Context_6);

#line 616 "term_constr_main.m"
static MR_String MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__616__1_2_f_0(
#line 616 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__VarToVarIdMap_5,
#line 616 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_20);

#line 614 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__614__1_2_p_0(
#line 614 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_19,
#line 614 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_30);

#line 409 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__409__1_2_p_0(
#line 409 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_45,
#line 409 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_56);

#line 391 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__391__1_2_p_0(
#line 391 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_39,
#line 391 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_52);

#line 663 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(
#line 663 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 663 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 656 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_term_info_2_p_0(
#line 656 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 656 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 647 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_arg_size_info_2_p_0(
#line 647 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 647 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 621 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__output_maybe_termination2_info_3_p_0(
#line 621 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeConstrTermInfo_4);

#line 616 "term_constr_main.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_3(
#line 616 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 616 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 614 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_2(
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 614 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_1(
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 603 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0(
#line 603 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__VarToVarIdMap_5,
#line 603 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeArgSizeConstrs_6);

#line 496 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0_1(
#line 496 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 496 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 496 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 496 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 462 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0(
#line 462 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_4);

#line 447 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(
#line 447 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__TerminationInfo_5,
#line 447 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_6,
#line 447 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13,
#line 447 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14);

#line 444 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_7(
#line 444 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 444 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 444 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 444 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 444 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_6(
#line 444 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 444 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 444 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 444 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 409 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_5(
#line 409 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 409 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 409 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_4(
#line 409 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 409 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 391 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_3(
#line 391 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 391 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 391 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_2(
#line 391 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 391 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 379 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_1(
#line 379 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 379 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 369 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0(
#line 369 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__DepOrder_10,
#line 369 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__BuildOpts_11,
#line 369 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__FixpointOpts_12,
#line 369 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Pass2Opts_13,
#line 369 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SCC_14,
#line 369 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31,
#line 369 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32);

#line 616 "term_constr_main.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_3(
#line 616 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 616 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 614 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_2(
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 614 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_1(
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 323 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__pass_4_p_0_1(
#line 323 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 323 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 323 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 323 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3,
#line 323 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_4,
#line 323 "term_constr_main.m"
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



#line 847 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 855 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 863 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 871 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0
  }
};

#line 880 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 888 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 897 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 905 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 914 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 923 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 931 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main__type_ctor_info_term_reason_0__plain_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_term_reason_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 940 "transform_hlds.term_constr_main.c"
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

#line 961 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_term_reason_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 970 "transform_hlds.term_constr_main.c"
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

#line 991 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0 = {
  (MR_String) "not_mutually_recursive",
  (MR_Integer) 0
};

#line 997 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1 = {
  (MR_String) "may_be_mutually_recursive",
  (MR_Integer) 1
};

#line 1003 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1
};

#line 1009 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0
};

#line 1015 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_intermod_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1021 "transform_hlds.term_constr_main.c"
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

#line 1042 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0 = {
  (MR_String) "term_reason_builtin",
  (MR_Integer) 0
};

#line 1048 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1 = {
  (MR_String) "term_reason_pragma_supplied",
  (MR_Integer) 1
};

#line 1054 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2 = {
  (MR_String) "term_reason_foreign_supplied",
  (MR_Integer) 2
};

#line 1060 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3 = {
  (MR_String) "term_reason_import_supplied",
  (MR_Integer) 3
};

#line 1066 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4 = {
  (MR_String) "term_reason_analysis",
  (MR_Integer) 4
};

#line 1072 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4
};

#line 1081 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1
};

#line 1090 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_term_reason_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1099 "transform_hlds.term_constr_main.c"
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

#line 1120 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1128 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1137 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1145 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 1153 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 1161 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
  }
};

#line 1169 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1177 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_main__type_ctor_info_intermod_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_intermod_status_0
  }
};

#line 1185 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

#line 1193 "transform_hlds.term_constr_main.c"
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

#line 1206 "transform_hlds.term_constr_main.c"
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

#line 1219 "transform_hlds.term_constr_main.c"
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

#line 1234 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0[1] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0
};

#line 1239 "transform_hlds.term_constr_main.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_ptag_ordered_termination2_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0
  }
};

#line 1248 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_name_ordered_termination2_info_0[1] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0
};

#line 1253 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_termination2_info_0[1] = {
  (MR_Integer) 0
};

#line 1258 "transform_hlds.term_constr_main.c"
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

#line 1279 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0_10001(
#line 1282 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1284 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1286 "transform_hlds.term_constr_main.c"
{
#line 1288 "transform_hlds.term_constr_main.c"
  {
#line 1290 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1293 "transform_hlds.term_constr_main.c"
    {
#line 1295 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1298 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1300 "transform_hlds.term_constr_main.c"
  }
#line 1302 "transform_hlds.term_constr_main.c"
}

#line 1305 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0_10001(
#line 1308 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1310 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1312 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1314 "transform_hlds.term_constr_main.c"
{
#line 1316 "transform_hlds.term_constr_main.c"
  {
#line 1318 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1321 "transform_hlds.term_constr_main.c"
    {
#line 1323 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1326 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1328 "transform_hlds.term_constr_main.c"
  }
#line 1330 "transform_hlds.term_constr_main.c"
}

#line 1333 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_termination_info_0_0_10001(
#line 1336 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1338 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1340 "transform_hlds.term_constr_main.c"
{
#line 1342 "transform_hlds.term_constr_main.c"
  {
#line 1344 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1347 "transform_hlds.term_constr_main.c"
    {
#line 1349 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____constr_termination_info_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1352 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1354 "transform_hlds.term_constr_main.c"
  }
#line 1356 "transform_hlds.term_constr_main.c"
}

#line 1359 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_termination_info_0_0_10001(
#line 1362 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1364 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1366 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1368 "transform_hlds.term_constr_main.c"
{
#line 1370 "transform_hlds.term_constr_main.c"
  {
#line 1372 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1375 "transform_hlds.term_constr_main.c"
    {
#line 1377 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____constr_termination_info_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1380 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1382 "transform_hlds.term_constr_main.c"
  }
#line 1384 "transform_hlds.term_constr_main.c"
}

#line 1387 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____intermod_status_0_0_10001(
#line 1390 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1392 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1394 "transform_hlds.term_constr_main.c"
{
#line 1396 "transform_hlds.term_constr_main.c"
  {
#line 1398 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1401 "transform_hlds.term_constr_main.c"
    {
#line 1403 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____intermod_status_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1406 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1408 "transform_hlds.term_constr_main.c"
  }
#line 1410 "transform_hlds.term_constr_main.c"
}

#line 1413 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____intermod_status_0_0_10001(
#line 1416 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1418 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1420 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1422 "transform_hlds.term_constr_main.c"
{
#line 1424 "transform_hlds.term_constr_main.c"
  {
#line 1426 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1429 "transform_hlds.term_constr_main.c"
    {
#line 1431 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____intermod_status_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1434 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1436 "transform_hlds.term_constr_main.c"
  }
#line 1438 "transform_hlds.term_constr_main.c"
}

#line 1441 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____term_reason_0_0_10001(
#line 1444 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1446 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1448 "transform_hlds.term_constr_main.c"
{
#line 1450 "transform_hlds.term_constr_main.c"
  {
#line 1452 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1455 "transform_hlds.term_constr_main.c"
    {
#line 1457 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____term_reason_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1460 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1462 "transform_hlds.term_constr_main.c"
  }
#line 1464 "transform_hlds.term_constr_main.c"
}

#line 1467 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____term_reason_0_0_10001(
#line 1470 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1472 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1474 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1476 "transform_hlds.term_constr_main.c"
{
#line 1478 "transform_hlds.term_constr_main.c"
  {
#line 1480 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1483 "transform_hlds.term_constr_main.c"
    {
#line 1485 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____term_reason_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1488 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1490 "transform_hlds.term_constr_main.c"
  }
#line 1492 "transform_hlds.term_constr_main.c"
}

#line 1495 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____termination2_info_0_0_10001(
#line 1498 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1500 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1502 "transform_hlds.term_constr_main.c"
{
#line 1504 "transform_hlds.term_constr_main.c"
  {
#line 1506 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1509 "transform_hlds.term_constr_main.c"
    {
#line 1511 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____termination2_info_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1514 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1516 "transform_hlds.term_constr_main.c"
  }
#line 1518 "transform_hlds.term_constr_main.c"
}

#line 1521 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____termination2_info_0_0_10001(
#line 1524 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1526 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1528 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1530 "transform_hlds.term_constr_main.c"
{
#line 1532 "transform_hlds.term_constr_main.c"
  {
#line 1534 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1537 "transform_hlds.term_constr_main.c"
    {
#line 1539 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____termination2_info_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1542 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1544 "transform_hlds.term_constr_main.c"
  }
#line 1546 "transform_hlds.term_constr_main.c"
}

#line 545 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_p_0(
#line 545 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 545 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ProcTable_3,
#line 545 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PredOrFunc_4,
#line 545 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SymName_5,
#line 545 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Context_6)
#line 545 "term_constr_main.m"
{
#line 549 "term_constr_main.m"
  while (MR_TRUE)
#line 549 "term_constr_main.m"
    {
#line 549 "term_constr_main.m"
      /* tailcall optimized into a loop */
#line 549 "term_constr_main.m"
      {
#line 549 "term_constr_main.m"
        MR_bool transform_hlds__term_constr_main__succeeded;

#line 549 "term_constr_main.m"
        if ((transform_hlds__term_constr_main__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 549 "term_constr_main.m"
          {
#line 549 "term_constr_main.m"
          }
#line 549 "term_constr_main.m"
        else
#line 551 "term_constr_main.m"
          {
#line 551 "term_constr_main.m"
            MR_Integer transform_hlds__term_constr_main__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 0)));
#line 551 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ProcIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 1)));
#line 551 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ProcInfo_25;
#line 551 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__TermInfo_26;
#line 551 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ModeList_27;
#line 551 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__HeadVars_28;
#line 551 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__SizeVarMap_29;
#line 551 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__HeadSizeVars_30;
#line 551 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_33_33;
#line 551 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_52_52;
#line 551 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_53_53;
#line 552 "term_constr_main.m"
            MR_Box transform_hlds__term_constr_main__conv0_ProcInfo_25;
#line 145 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_40_40;
#line 145 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_41_41;
#line 145 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_42_42;
#line 145 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_43_43;
#line 145 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_44_44;
#line 145 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_45_45;
#line 145 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_46_46;
#line 145 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_47_47;
#line 150 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_48_48;
#line 150 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_49_49;
#line 150 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_50_50;
#line 150 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_51_51;
#line 150 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_54_54;
#line 150 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_55_55;

#line 552 "term_constr_main.m"
            {
#line 552 "term_constr_main.m"
              transform_hlds__term_constr_main__conv0_ProcInfo_25 = mercury__map__det_elem_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ((MR_Box) (transform_hlds__term_constr_main__ProcId_18)), transform_hlds__term_constr_main__ProcTable_3);
            }
#line 552 "term_constr_main.m"
            transform_hlds__term_constr_main__ProcInfo_25 = ((MR_Word) transform_hlds__term_constr_main__conv0_ProcInfo_25);
#line 553 "term_constr_main.m"
            {
#line 553 "term_constr_main.m"
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_25, &transform_hlds__term_constr_main__TermInfo_26);
            }
#line 554 "term_constr_main.m"
            {
#line 554 "term_constr_main.m"
              hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(transform_hlds__term_constr_main__ProcInfo_25, &transform_hlds__term_constr_main__ModeList_27);
            }
#line 555 "term_constr_main.m"
            {
#line 555 "term_constr_main.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_main__ProcInfo_25, &transform_hlds__term_constr_main__HeadVars_28);
            }
#line 145 "term_constr_main.m"
            transform_hlds__term_constr_main__SizeVarMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 0)));
#line 145 "term_constr_main.m"
            transform_hlds__term_constr_main__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 1)));
#line 145 "term_constr_main.m"
            transform_hlds__term_constr_main__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 2)));
#line 145 "term_constr_main.m"
            transform_hlds__term_constr_main__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 3)));
#line 145 "term_constr_main.m"
            transform_hlds__term_constr_main__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 4)));
#line 145 "term_constr_main.m"
            transform_hlds__term_constr_main__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 5)));
#line 145 "term_constr_main.m"
            transform_hlds__term_constr_main__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 6)));
#line 145 "term_constr_main.m"
            transform_hlds__term_constr_main__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 7)));
#line 145 "term_constr_main.m"
            transform_hlds__term_constr_main__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 8)));
#line 557 "term_constr_main.m"
            {
#line 557 "term_constr_main.m"
              transform_hlds__term_constr_main__HeadSizeVars_30 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_main__SizeVarMap_29, transform_hlds__term_constr_main__HeadVars_28);
            }
#line 150 "term_constr_main.m"
            transform_hlds__term_constr_main__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 0)));
#line 150 "term_constr_main.m"
            transform_hlds__term_constr_main__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 1)));
#line 150 "term_constr_main.m"
            transform_hlds__term_constr_main__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 2)));
#line 150 "term_constr_main.m"
            transform_hlds__term_constr_main__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 3)));
#line 150 "term_constr_main.m"
            transform_hlds__term_constr_main__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 4)));
#line 150 "term_constr_main.m"
            transform_hlds__term_constr_main__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 5)));
#line 150 "term_constr_main.m"
            transform_hlds__term_constr_main__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 6)));
#line 150 "term_constr_main.m"
            transform_hlds__term_constr_main__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 7)));
#line 150 "term_constr_main.m"
            transform_hlds__term_constr_main__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_26, (MR_Integer) 8)));
#line 558 "term_constr_main.m"
            {
#line 558 "term_constr_main.m"
              transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0(transform_hlds__term_constr_main__PredOrFunc_4, transform_hlds__term_constr_main__SymName_5, transform_hlds__term_constr_main__ModeList_27, transform_hlds__term_constr_main__Context_6, transform_hlds__term_constr_main__V_33_33, transform_hlds__term_constr_main__V_52_52, transform_hlds__term_constr_main__V_53_53, transform_hlds__term_constr_main__HeadSizeVars_30);
            }
#line 562 "term_constr_main.m"
            /* direct tailcall eliminated */
#line 562 "term_constr_main.m"
            {
#line 562 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__HeadVar__2__tmp_copy_2 = transform_hlds__term_constr_main__ProcIds_19;

#line 562 "term_constr_main.m"
              transform_hlds__term_constr_main__HeadVar__2_2 = transform_hlds__term_constr_main__HeadVar__2__tmp_copy_2;
#line 562 "term_constr_main.m"
            }
#line 562 "term_constr_main.m"
            continue;
#line 551 "term_constr_main.m"
          }
#line 549 "term_constr_main.m"
      }
#line 549 "term_constr_main.m"
      break;
#line 549 "term_constr_main.m"
    }
#line 545 "term_constr_main.m"
}

#line 616 "term_constr_main.m"
static MR_String MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__616__1_2_f_0(
#line 616 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__VarToVarIdMap_5,
#line 616 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_20)
#line 616 "term_constr_main.m"
{
#line 616 "term_constr_main.m"
  {
#line 616 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 616 "term_constr_main.m"
    MR_String transform_hlds__term_constr_main__HeadVar__3_21;
#line 616 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__V_22_22;
#line 616 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv0_V_22_22;

#line 616 "term_constr_main.m"
    {
#line 616 "term_constr_main.m"
      transform_hlds__term_constr_main__conv0_V_22_22 = mercury__map__det_elem_2_f_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_20)), transform_hlds__term_constr_main__VarToVarIdMap_5);
    }
#line 616 "term_constr_main.m"
    transform_hlds__term_constr_main__V_22_22 = ((MR_Integer) transform_hlds__term_constr_main__conv0_V_22_22);
#line 616 "term_constr_main.m"
    {
#line 616 "term_constr_main.m"
      return transform_hlds__term_constr_main__HeadVar__3_21 = mercury__string__int_to_string_1_f_0(transform_hlds__term_constr_main__V_22_22);
    }
#line 616 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_21;
#line 616 "term_constr_main.m"
  }
#line 616 "term_constr_main.m"
}

#line 614 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__614__1_2_p_0(
#line 614 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_19,
#line 614 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_30)
#line 614 "term_constr_main.m"
{
#line 614 "term_constr_main.m"
  {
#line 614 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 614 "term_constr_main.m"
    {
#line 614 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, transform_hlds__term_constr_main__HeadVar__1_19, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_30)));
    }
#line 614 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 614 "term_constr_main.m"
  }
#line 614 "term_constr_main.m"
}

#line 409 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__409__1_2_p_0(
#line 409 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_45,
#line 409 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_56)
#line 409 "term_constr_main.m"
{
#line 409 "term_constr_main.m"
  {
#line 409 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 409 "term_constr_main.m"
    {
#line 409 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__HeadVar__1_45, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_56)));
    }
#line 409 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 409 "term_constr_main.m"
  }
#line 409 "term_constr_main.m"
}

#line 391 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__391__1_2_p_0(
#line 391 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_39,
#line 391 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_52)
#line 391 "term_constr_main.m"
{
#line 391 "term_constr_main.m"
  {
#line 391 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 391 "term_constr_main.m"
    {
#line 391 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__HeadVar__1_39, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_52)));
    }
#line 391 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 391 "term_constr_main.m"
  }
#line 391 "term_constr_main.m"
}

#line 238 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main____Compare____termination2_info_0_0(
#line 238 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__HeadVar__1_1,
#line 238 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 238 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__3_3)
#line 238 "term_constr_main.m"
{
#line 238 "term_constr_main.m"
  {
#line 238 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 238 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CastX_30 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__2_2;
#line 238 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CastY_31 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__3_3;

#line 238 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__CastX_30 == transform_hlds__term_constr_main__CastY_31);
#line 238 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 1871 "transform_hlds.term_constr_main.c"
      *transform_hlds__term_constr_main__HeadVar__1_1 = (MR_Integer) 0;
#line 238 "term_constr_main.m"
    else
#line 238 "term_constr_main.m"
      {
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 2)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 3)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 4)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 5)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 6)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 7)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 8)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 0)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 1)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 2)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 3)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 4)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 5)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 6)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 7)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 8)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_22_22;

#line 238 "term_constr_main.m"
        {
#line 238 "term_constr_main.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[2], &transform_hlds__term_constr_main__V_22_22, ((MR_Box) (transform_hlds__term_constr_main__V_4_4)), ((MR_Box) (transform_hlds__term_constr_main__V_13_13)));
        }
#line 1921 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_22_22 == (MR_Integer) 0);
#line 238 "term_constr_main.m"
        transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 238 "term_constr_main.m"
        if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
          *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_22_22;
#line 238 "term_constr_main.m"
        else
#line 238 "term_constr_main.m"
          {
#line 238 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_23_23;

#line 238 "term_constr_main.m"
            {
#line 238 "term_constr_main.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[4], &transform_hlds__term_constr_main__V_23_23, ((MR_Box) (transform_hlds__term_constr_main__V_5_5)), ((MR_Box) (transform_hlds__term_constr_main__V_14_14)));
            }
#line 1941 "transform_hlds.term_constr_main.c"
            transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_23_23 == (MR_Integer) 0);
#line 238 "term_constr_main.m"
            transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 238 "term_constr_main.m"
            if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
              *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_23_23;
#line 238 "term_constr_main.m"
            else
#line 238 "term_constr_main.m"
              {
#line 238 "term_constr_main.m"
                MR_Word transform_hlds__term_constr_main__V_24_24;

#line 238 "term_constr_main.m"
                {
#line 238 "term_constr_main.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6], &transform_hlds__term_constr_main__V_24_24, ((MR_Box) (transform_hlds__term_constr_main__V_6_6)), ((MR_Box) (transform_hlds__term_constr_main__V_15_15)));
                }
#line 1961 "transform_hlds.term_constr_main.c"
                transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_24_24 == (MR_Integer) 0);
#line 238 "term_constr_main.m"
                transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 238 "term_constr_main.m"
                if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
                  *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_24_24;
#line 238 "term_constr_main.m"
                else
#line 238 "term_constr_main.m"
                  {
#line 238 "term_constr_main.m"
                    MR_Word transform_hlds__term_constr_main__V_25_25;

#line 238 "term_constr_main.m"
                    {
#line 238 "term_constr_main.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6], &transform_hlds__term_constr_main__V_25_25, ((MR_Box) (transform_hlds__term_constr_main__V_7_7)), ((MR_Box) (transform_hlds__term_constr_main__V_16_16)));
                    }
#line 1981 "transform_hlds.term_constr_main.c"
                    transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_25_25 == (MR_Integer) 0);
#line 238 "term_constr_main.m"
                    transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 238 "term_constr_main.m"
                    if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
                      *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_25_25;
#line 238 "term_constr_main.m"
                    else
#line 238 "term_constr_main.m"
                      {
#line 238 "term_constr_main.m"
                        MR_Word transform_hlds__term_constr_main__V_26_26;

#line 238 "term_constr_main.m"
                        {
#line 238 "term_constr_main.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7], &transform_hlds__term_constr_main__V_26_26, ((MR_Box) (transform_hlds__term_constr_main__V_8_8)), ((MR_Box) (transform_hlds__term_constr_main__V_17_17)));
                        }
#line 2001 "transform_hlds.term_constr_main.c"
                        transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_26_26 == (MR_Integer) 0);
#line 238 "term_constr_main.m"
                        transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 238 "term_constr_main.m"
                        if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
                          *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_26_26;
#line 238 "term_constr_main.m"
                        else
#line 238 "term_constr_main.m"
                          {
#line 238 "term_constr_main.m"
                            MR_Word transform_hlds__term_constr_main__V_27_27;

#line 238 "term_constr_main.m"
                            {
#line 238 "term_constr_main.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7], &transform_hlds__term_constr_main__V_27_27, ((MR_Box) (transform_hlds__term_constr_main__V_9_9)), ((MR_Box) (transform_hlds__term_constr_main__V_18_18)));
                            }
#line 2021 "transform_hlds.term_constr_main.c"
                            transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_27_27 == (MR_Integer) 0);
#line 238 "term_constr_main.m"
                            transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 238 "term_constr_main.m"
                            if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
                              *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_27_27;
#line 238 "term_constr_main.m"
                            else
#line 238 "term_constr_main.m"
                              {
#line 238 "term_constr_main.m"
                                MR_Word transform_hlds__term_constr_main__V_28_28;

#line 238 "term_constr_main.m"
                                {
#line 238 "term_constr_main.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[8], &transform_hlds__term_constr_main__V_28_28, ((MR_Box) (transform_hlds__term_constr_main__V_10_10)), ((MR_Box) (transform_hlds__term_constr_main__V_19_19)));
                                }
#line 2041 "transform_hlds.term_constr_main.c"
                                transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_28_28 == (MR_Integer) 0);
#line 238 "term_constr_main.m"
                                transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 238 "term_constr_main.m"
                                if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
                                  *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_28_28;
#line 238 "term_constr_main.m"
                                else
#line 238 "term_constr_main.m"
                                  {
#line 238 "term_constr_main.m"
                                    MR_Word transform_hlds__term_constr_main__V_29_29;

#line 238 "term_constr_main.m"
                                    {
#line 238 "term_constr_main.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[9], &transform_hlds__term_constr_main__V_29_29, ((MR_Box) (transform_hlds__term_constr_main__V_11_11)), ((MR_Box) (transform_hlds__term_constr_main__V_20_20)));
                                    }
#line 2061 "transform_hlds.term_constr_main.c"
                                    transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_29_29 == (MR_Integer) 0);
#line 238 "term_constr_main.m"
                                    transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 238 "term_constr_main.m"
                                    if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
                                      *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_29_29;
#line 238 "term_constr_main.m"
                                    else
#line 238 "term_constr_main.m"
                                      {
#line 238 "term_constr_main.m"
                                        {
#line 238 "term_constr_main.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[10], transform_hlds__term_constr_main__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_main__V_12_12)), ((MR_Box) (transform_hlds__term_constr_main__V_21_21)));
#line 238 "term_constr_main.m"
                                          return;
                                        }
#line 238 "term_constr_main.m"
                                      }
#line 238 "term_constr_main.m"
                                  }
#line 238 "term_constr_main.m"
                              }
#line 238 "term_constr_main.m"
                          }
#line 238 "term_constr_main.m"
                      }
#line 238 "term_constr_main.m"
                  }
#line 238 "term_constr_main.m"
              }
#line 238 "term_constr_main.m"
          }
#line 238 "term_constr_main.m"
      }
#line 238 "term_constr_main.m"
  }
#line 238 "term_constr_main.m"
}

#line 238 "term_constr_main.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____termination2_info_0_0(
#line 238 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 238 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 238 "term_constr_main.m"
{
#line 238 "term_constr_main.m"
  {
#line 238 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 238 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CastX_21 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__1_1;
#line 238 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CastY_22 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__2_2;

#line 238 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__CastX_21 == transform_hlds__term_constr_main__CastY_22);
#line 238 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
      transform_hlds__term_constr_main__succeeded = MR_TRUE;
#line 238 "term_constr_main.m"
    else
#line 238 "term_constr_main.m"
      {
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_24_24;
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_25_25;
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_26_26;
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_27_27;
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_28_28;
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_29_29;
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_30_30;
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_31_31;
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 2)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 3)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 4)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 5)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 6)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 7)));
#line 238 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 8)));

#line 2184 "transform_hlds.term_constr_main.c"
        {
#line 2186 "transform_hlds.term_constr_main.c"
          transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[2], ((MR_Box) (transform_hlds__term_constr_main__V_3_3)), ((MR_Box) (transform_hlds__term_constr_main__V_12_12)));
        }
#line 238 "term_constr_main.m"
        if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
          {
#line 2193 "transform_hlds.term_constr_main.c"
            transform_hlds__term_constr_main__TypeInfo_24_24 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[4];
#line 2195 "transform_hlds.term_constr_main.c"
            {
#line 2197 "transform_hlds.term_constr_main.c"
              transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_24_24, ((MR_Box) (transform_hlds__term_constr_main__V_4_4)), ((MR_Box) (transform_hlds__term_constr_main__V_13_13)));
            }
#line 238 "term_constr_main.m"
            if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
              {
#line 2204 "transform_hlds.term_constr_main.c"
                transform_hlds__term_constr_main__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6];
#line 2206 "transform_hlds.term_constr_main.c"
                {
#line 2208 "transform_hlds.term_constr_main.c"
                  transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_25_25, ((MR_Box) (transform_hlds__term_constr_main__V_5_5)), ((MR_Box) (transform_hlds__term_constr_main__V_14_14)));
                }
#line 238 "term_constr_main.m"
                if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
                  {
#line 2215 "transform_hlds.term_constr_main.c"
                    transform_hlds__term_constr_main__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6];
#line 2217 "transform_hlds.term_constr_main.c"
                    {
#line 2219 "transform_hlds.term_constr_main.c"
                      transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_26_26, ((MR_Box) (transform_hlds__term_constr_main__V_6_6)), ((MR_Box) (transform_hlds__term_constr_main__V_15_15)));
                    }
#line 238 "term_constr_main.m"
                    if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
                      {
#line 2226 "transform_hlds.term_constr_main.c"
                        transform_hlds__term_constr_main__TypeInfo_27_27 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7];
#line 2228 "transform_hlds.term_constr_main.c"
                        {
#line 2230 "transform_hlds.term_constr_main.c"
                          transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_27_27, ((MR_Box) (transform_hlds__term_constr_main__V_7_7)), ((MR_Box) (transform_hlds__term_constr_main__V_16_16)));
                        }
#line 238 "term_constr_main.m"
                        if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
                          {
#line 2237 "transform_hlds.term_constr_main.c"
                            transform_hlds__term_constr_main__TypeInfo_28_28 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7];
#line 2239 "transform_hlds.term_constr_main.c"
                            {
#line 2241 "transform_hlds.term_constr_main.c"
                              transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_28_28, ((MR_Box) (transform_hlds__term_constr_main__V_8_8)), ((MR_Box) (transform_hlds__term_constr_main__V_17_17)));
                            }
#line 238 "term_constr_main.m"
                            if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
                              {
#line 2248 "transform_hlds.term_constr_main.c"
                                transform_hlds__term_constr_main__TypeInfo_29_29 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[8];
#line 2250 "transform_hlds.term_constr_main.c"
                                {
#line 2252 "transform_hlds.term_constr_main.c"
                                  transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_29_29, ((MR_Box) (transform_hlds__term_constr_main__V_9_9)), ((MR_Box) (transform_hlds__term_constr_main__V_18_18)));
                                }
#line 238 "term_constr_main.m"
                                if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
                                  {
#line 2259 "transform_hlds.term_constr_main.c"
                                    transform_hlds__term_constr_main__TypeInfo_30_30 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[9];
#line 2261 "transform_hlds.term_constr_main.c"
                                    {
#line 2263 "transform_hlds.term_constr_main.c"
                                      transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_30_30, ((MR_Box) (transform_hlds__term_constr_main__V_10_10)), ((MR_Box) (transform_hlds__term_constr_main__V_19_19)));
                                    }
#line 238 "term_constr_main.m"
                                    if (transform_hlds__term_constr_main__succeeded)
#line 238 "term_constr_main.m"
                                      {
#line 2270 "transform_hlds.term_constr_main.c"
                                        transform_hlds__term_constr_main__TypeInfo_31_31 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[10];
#line 2272 "transform_hlds.term_constr_main.c"
                                        {
#line 2274 "transform_hlds.term_constr_main.c"
                                          return transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_31_31, ((MR_Box) (transform_hlds__term_constr_main__V_11_11)), ((MR_Box) (transform_hlds__term_constr_main__V_20_20)));
                                        }
#line 238 "term_constr_main.m"
                                      }
#line 238 "term_constr_main.m"
                                  }
#line 238 "term_constr_main.m"
                              }
#line 238 "term_constr_main.m"
                          }
#line 238 "term_constr_main.m"
                      }
#line 238 "term_constr_main.m"
                  }
#line 238 "term_constr_main.m"
              }
#line 238 "term_constr_main.m"
          }
#line 238 "term_constr_main.m"
      }
#line 238 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 238 "term_constr_main.m"
  }
#line 238 "term_constr_main.m"
}

#line 105 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main____Compare____term_reason_0_0(
#line 105 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__HeadVar__1_1,
#line 105 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 105 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__3_3)
#line 105 "term_constr_main.m"
{
#line 105 "term_constr_main.m"
  {
#line 105 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 105 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__2_2;
#line 105 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__3_3;

#line 105 "term_constr_main.m"
    {
#line 105 "term_constr_main.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_main__HeadVar__1_1, transform_hlds__term_constr_main__Cast_HeadVar1_4, transform_hlds__term_constr_main__Cast_HeadVar2_5);
#line 105 "term_constr_main.m"
      return;
    }
#line 105 "term_constr_main.m"
  }
#line 105 "term_constr_main.m"
}

#line 105 "term_constr_main.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____term_reason_0_0(
#line 105 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_1,
#line 105 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 105 "term_constr_main.m"
{
#line 2343 "transform_hlds.term_constr_main.c"
  {
#line 2345 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__HeadVar__2_1 == transform_hlds__term_constr_main__HeadVar__2_2);

#line 2348 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 2350 "transform_hlds.term_constr_main.c"
  }
#line 105 "term_constr_main.m"
}

#line 128 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main____Compare____intermod_status_0_0(
#line 128 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__HeadVar__1_1,
#line 128 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 128 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__3_3)
#line 128 "term_constr_main.m"
{
#line 128 "term_constr_main.m"
  {
#line 128 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 128 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__2_2;
#line 128 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__3_3;

#line 128 "term_constr_main.m"
    {
#line 128 "term_constr_main.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_main__HeadVar__1_1, transform_hlds__term_constr_main__Cast_HeadVar1_4, transform_hlds__term_constr_main__Cast_HeadVar2_5);
#line 128 "term_constr_main.m"
      return;
    }
#line 128 "term_constr_main.m"
  }
#line 128 "term_constr_main.m"
}

#line 128 "term_constr_main.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____intermod_status_0_0(
#line 128 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_1,
#line 128 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 128 "term_constr_main.m"
{
#line 2396 "transform_hlds.term_constr_main.c"
  {
#line 2398 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__HeadVar__2_1 == transform_hlds__term_constr_main__HeadVar__2_2);

#line 2401 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 2403 "transform_hlds.term_constr_main.c"
  }
#line 128 "term_constr_main.m"
}

#line 99 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_termination_info_0_0(
#line 99 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__HeadVar__1_1,
#line 99 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 99 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__3_3)
#line 99 "term_constr_main.m"
{
#line 99 "term_constr_main.m"
  {
#line 99 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 99 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar1_4 = transform_hlds__term_constr_main__HeadVar__2_2;
#line 99 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar2_5 = transform_hlds__term_constr_main__HeadVar__3_3;

#line 99 "term_constr_main.m"
    {
#line 99 "term_constr_main.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[1], transform_hlds__term_constr_main__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_main__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_main__Cast_HeadVar2_5)));
#line 99 "term_constr_main.m"
      return;
    }
#line 99 "term_constr_main.m"
  }
#line 99 "term_constr_main.m"
}

#line 99 "term_constr_main.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_termination_info_0_0(
#line 99 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 99 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 99 "term_constr_main.m"
{
#line 99 "term_constr_main.m"
  {
#line 99 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 99 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar1_3 = transform_hlds__term_constr_main__HeadVar__1_1;
#line 99 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar2_4 = transform_hlds__term_constr_main__HeadVar__2_2;

#line 99 "term_constr_main.m"
    {
#line 99 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[1], ((MR_Box) (transform_hlds__term_constr_main__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_main__Cast_HeadVar2_4)));
    }
#line 99 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 99 "term_constr_main.m"
  }
#line 99 "term_constr_main.m"
}

#line 94 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0(
#line 94 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__HeadVar__1_1,
#line 94 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 94 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__3_3)
#line 94 "term_constr_main.m"
{
#line 94 "term_constr_main.m"
  {
#line 94 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 94 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar1_4 = transform_hlds__term_constr_main__HeadVar__2_2;
#line 94 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar2_5 = transform_hlds__term_constr_main__HeadVar__3_3;

#line 94 "term_constr_main.m"
    {
#line 94 "term_constr_main.m"
      libs__polyhedron____Compare____polyhedron_0_0(transform_hlds__term_constr_main__HeadVar__1_1, transform_hlds__term_constr_main__Cast_HeadVar1_4, transform_hlds__term_constr_main__Cast_HeadVar2_5);
#line 94 "term_constr_main.m"
      return;
    }
#line 94 "term_constr_main.m"
  }
#line 94 "term_constr_main.m"
}

#line 94 "term_constr_main.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0(
#line 94 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 94 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 94 "term_constr_main.m"
{
#line 94 "term_constr_main.m"
  {
#line 94 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 94 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar1_3 = transform_hlds__term_constr_main__HeadVar__1_1;
#line 94 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Cast_HeadVar2_4 = transform_hlds__term_constr_main__HeadVar__2_2;

#line 94 "term_constr_main.m"
    {
#line 94 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_main__Cast_HeadVar1_3, transform_hlds__term_constr_main__Cast_HeadVar2_4);
    }
#line 94 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 94 "term_constr_main.m"
  }
#line 94 "term_constr_main.m"
}

#line 663 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(
#line 663 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 663 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 663 "term_constr_main.m"
{
#line 665 "term_constr_main.m"
  {
#line 665 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 665 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 665 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 666 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;

#line 666 "term_constr_main.m"
    {
#line 666 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 667 "term_constr_main.m"
    {
#line 667 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_6, &transform_hlds__term_constr_main__TermInfo_7);
    }
#line 669 "term_constr_main.m"
    {
#line 669 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 4)));
#line 150 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 0)));
#line 150 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 1)));
#line 150 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 2)));
#line 150 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 3)));
#line 150 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 5)));
#line 150 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 6)));
#line 150 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 7)));
#line 150 "term_constr_main.m"
      MR_Word transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 8)));

#line 669 "term_constr_main.m"
      transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "term_constr_main.m"
    }
#line 670 "term_constr_main.m"
    if (!(transform_hlds__term_constr_main__succeeded))
#line 671 "term_constr_main.m"
      {
#line 671 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 6)));
#line 152 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 0)));
#line 152 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 1)));
#line 152 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 2)));
#line 152 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 3)));
#line 152 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 4)));
#line 152 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 5)));
#line 152 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 7)));
#line 152 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 8)));

#line 671 "term_constr_main.m"
        transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "term_constr_main.m"
      }
#line 665 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 665 "term_constr_main.m"
  }
#line 663 "term_constr_main.m"
}

#line 656 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_term_info_2_p_0(
#line 656 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 656 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 656 "term_constr_main.m"
{
#line 658 "term_constr_main.m"
  {
#line 658 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 658 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 658 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 658 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9;
#line 659 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10;
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11;
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12;
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_13_13;
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_14_14;
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_15_15;
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_16_16;
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_17_17;
#line 661 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8;

#line 659 "term_constr_main.m"
    {
#line 659 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 660 "term_constr_main.m"
    {
#line 660 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_6, &transform_hlds__term_constr_main__TermInfo_7);
    }
#line 152 "term_constr_main.m"
    transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 0)));
#line 152 "term_constr_main.m"
    transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 1)));
#line 152 "term_constr_main.m"
    transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 2)));
#line 152 "term_constr_main.m"
    transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 3)));
#line 152 "term_constr_main.m"
    transform_hlds__term_constr_main__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 4)));
#line 152 "term_constr_main.m"
    transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 5)));
#line 152 "term_constr_main.m"
    transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 6)));
#line 152 "term_constr_main.m"
    transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 7)));
#line 152 "term_constr_main.m"
    transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 8)));
#line 661 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_main__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 661 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 661 "term_constr_main.m"
      transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_9_9, (MR_Integer) 0)));
#line 658 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 658 "term_constr_main.m"
  }
#line 656 "term_constr_main.m"
}

#line 647 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_arg_size_info_2_p_0(
#line 647 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 647 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 647 "term_constr_main.m"
{
#line 649 "term_constr_main.m"
  {
#line 649 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 649 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 649 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 649 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9;
#line 650 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10;
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11;
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12;
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_13_13;
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_14_14;
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_15_15;
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_16_16;
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_17_17;
#line 652 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8;

#line 650 "term_constr_main.m"
    {
#line 650 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 651 "term_constr_main.m"
    {
#line 651 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_6, &transform_hlds__term_constr_main__TermInfo_7);
    }
#line 150 "term_constr_main.m"
    transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 0)));
#line 150 "term_constr_main.m"
    transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 1)));
#line 150 "term_constr_main.m"
    transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 2)));
#line 150 "term_constr_main.m"
    transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 3)));
#line 150 "term_constr_main.m"
    transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 4)));
#line 150 "term_constr_main.m"
    transform_hlds__term_constr_main__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 5)));
#line 150 "term_constr_main.m"
    transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 6)));
#line 150 "term_constr_main.m"
    transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 7)));
#line 150 "term_constr_main.m"
    transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_7, (MR_Integer) 8)));
#line 652 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_main__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 652 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 652 "term_constr_main.m"
      transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_9_9, (MR_Integer) 0)));
#line 649 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 649 "term_constr_main.m"
  }
#line 647 "term_constr_main.m"
}

#line 621 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__output_maybe_termination2_info_3_p_0(
#line 621 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeConstrTermInfo_4)
#line 621 "term_constr_main.m"
{
#line 626 "term_constr_main.m"
  {
#line 626 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 626 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__MaybeConstrTermInfo_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 626 "term_constr_main.m"
      {
#line 627 "term_constr_main.m"
        {
#line 627 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
#line 627 "term_constr_main.m"
          return;
        }
#line 626 "term_constr_main.m"
      }
#line 626 "term_constr_main.m"
    else
#line 626 "term_constr_main.m"
      {
#line 626 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeConstrTermInfo_4, (MR_Integer) 0)));

#line 626 "term_constr_main.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_main__V_18_18)) == (MR_mktag((MR_Integer) 1))))
#line 632 "term_constr_main.m"
          {
#line 633 "term_constr_main.m"
            {
#line 633 "term_constr_main.m"
              mercury__io__write_string_3_p_0((MR_String) "can_loop");
#line 633 "term_constr_main.m"
              return;
            }
#line 632 "term_constr_main.m"
          }
#line 626 "term_constr_main.m"
        else
#line 629 "term_constr_main.m"
          {
#line 630 "term_constr_main.m"
            {
#line 630 "term_constr_main.m"
              mercury__io__write_string_3_p_0((MR_String) "cannot_loop");
#line 630 "term_constr_main.m"
              return;
            }
#line 629 "term_constr_main.m"
          }
#line 626 "term_constr_main.m"
      }
#line 626 "term_constr_main.m"
  }
#line 621 "term_constr_main.m"
}

#line 616 "term_constr_main.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_3(
#line 616 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 616 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 616 "term_constr_main.m"
{
#line 616 "term_constr_main.m"
  {
#line 616 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__wrapper_arg_2;
#line 616 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 616 "term_constr_main.m"
    MR_String transform_hlds__term_constr_main__conv0_HeadVar__3_21;

#line 616 "term_constr_main.m"
    {
#line 616 "term_constr_main.m"
      transform_hlds__term_constr_main__conv0_HeadVar__3_21 = transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__616__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 616 "term_constr_main.m"
    transform_hlds__term_constr_main__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__3_21));
#line 616 "term_constr_main.m"
    return transform_hlds__term_constr_main__wrapper_arg_2;
#line 616 "term_constr_main.m"
  }
#line 616 "term_constr_main.m"
}

#line 614 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_2(
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 614 "term_constr_main.m"
{
#line 614 "term_constr_main.m"
  {
#line 614 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 614 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 614 "term_constr_main.m"
    {
#line 614 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__614__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 614 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 614 "term_constr_main.m"
  }
#line 614 "term_constr_main.m"
}

#line 614 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_1(
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 614 "term_constr_main.m"
{
#line 614 "term_constr_main.m"
  {
#line 614 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 614 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 614 "term_constr_main.m"
    {
#line 614 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 614 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 614 "term_constr_main.m"
  }
#line 614 "term_constr_main.m"
}

#line 603 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0(
#line 603 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__VarToVarIdMap_5,
#line 603 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeArgSizeConstrs_6)
#line 603 "term_constr_main.m"
{
#line 608 "term_constr_main.m"
  {
#line 608 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 608 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__MaybeArgSizeConstrs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 608 "term_constr_main.m"
      {
#line 609 "term_constr_main.m"
        {
#line 609 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
#line 609 "term_constr_main.m"
          return;
        }
#line 608 "term_constr_main.m"
      }
#line 608 "term_constr_main.m"
    else
#line 611 "term_constr_main.m"
      {
#line 611 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeCtorInfo_29_29;
#line 611 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Polyhedron_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeArgSizeConstrs_6, (MR_Integer) 0)));
#line 611 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints0_9;
#line 611 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints1_10;
#line 611 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints_11;
#line 611 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__OutputVar_12;

#line 612 "term_constr_main.m"
        {
#line 612 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "constraints(");
        }
#line 613 "term_constr_main.m"
        {
#line 613 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints0_9 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_main__Polyhedron_8);
        }
#line 2990 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__TypeCtorInfo_29_29 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 614 "term_constr_main.m"
        {
#line 614 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints1_10 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_29_29, (MR_Word) &transform_hlds__term_constr_main_scalar_common_4[2], transform_hlds__term_constr_main__Constraints0_9);
        }
#line 615 "term_constr_main.m"
        {
#line 615 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints_11 = mercury__list__sort_1_f_0(transform_hlds__term_constr_main__TypeCtorInfo_29_29, transform_hlds__term_constr_main__Constraints1_10);
        }
#line 616 "term_constr_main.m"
        {
#line 616 "term_constr_main.m"
          transform_hlds__term_constr_main__OutputVar_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 616 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_12, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_6[0]));
#line 616 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_12, 1) = ((MR_Box) (transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_3));
#line 616 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 616 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_12, 3) = ((MR_Box) (transform_hlds__term_constr_main__VarToVarIdMap_5));
#line 616 "term_constr_main.m"
        }
#line 617 "term_constr_main.m"
        {
#line 617 "term_constr_main.m"
          libs__lp_rational__output_constraints_4_p_0(transform_hlds__term_constr_main__OutputVar_12, transform_hlds__term_constr_main__Constraints_11);
        }
#line 618 "term_constr_main.m"
        {
#line 618 "term_constr_main.m"
          mercury__io__write_char_3_p_0((MR_Char) 41);
#line 618 "term_constr_main.m"
          return;
        }
#line 611 "term_constr_main.m"
      }
#line 608 "term_constr_main.m"
  }
#line 603 "term_constr_main.m"
}

#line 496 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0_1(
#line 496 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 496 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 496 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 496 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 496 "term_constr_main.m"
{
#line 496 "term_constr_main.m"
  {
#line 496 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 496 "term_constr_main.m"
    {
#line 496 "term_constr_main.m"
      transform_hlds__term_constr_main__output_pred_termination2_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
#line 496 "term_constr_main.m"
      return;
    }
#line 496 "term_constr_main.m"
  }
#line 496 "term_constr_main.m"
}

#line 462 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0(
#line 462 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_4)
#line 462 "term_constr_main.m"
{
#line 465 "term_constr_main.m"
  {
#line 465 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 465 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_6;
#line 465 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__MakeOptInt_7;

#line 467 "term_constr_main.m"
    {
#line 467 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__ModuleInfo_4, &transform_hlds__term_constr_main__Globals_6);
    }
#line 468 "term_constr_main.m"
    {
#line 468 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_6, (MR_Integer) 86, &transform_hlds__term_constr_main__MakeOptInt_7);
    }
#line 474 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__MakeOptInt_7 == (MR_Integer) 0))
#line 475 "term_constr_main.m"
      {
#line 475 "term_constr_main.m"
      }
#line 474 "term_constr_main.m"
    else
#line 471 "term_constr_main.m"
      {
#line 471 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__PredIds_8;
#line 471 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Globals_18;
#line 471 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__ModuleName_19;
#line 471 "term_constr_main.m"
        MR_String transform_hlds__term_constr_main__OptFileName_20;
#line 471 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Verbose_21;
#line 471 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__OptFileRes_22;

#line 472 "term_constr_main.m"
        {
#line 472 "term_constr_main.m"
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__term_constr_main__ModuleInfo_4, &transform_hlds__term_constr_main__PredIds_8);
        }
#line 482 "term_constr_main.m"
        {
#line 482 "term_constr_main.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__ModuleInfo_4, &transform_hlds__term_constr_main__Globals_18);
        }
#line 483 "term_constr_main.m"
        {
#line 483 "term_constr_main.m"
          hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__term_constr_main__ModuleInfo_4, &transform_hlds__term_constr_main__ModuleName_19);
        }
#line 484 "term_constr_main.m"
        {
#line 484 "term_constr_main.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__term_constr_main__Globals_18, transform_hlds__term_constr_main__ModuleName_19, (MR_String) ".opt.tmp", (MR_Integer) 1, &transform_hlds__term_constr_main__OptFileName_20);
        }
#line 486 "term_constr_main.m"
        {
#line 486 "term_constr_main.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_18, (MR_Integer) 45, &transform_hlds__term_constr_main__Verbose_21);
        }
#line 487 "term_constr_main.m"
        {
#line 487 "term_constr_main.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_21, (MR_String) "% Appending termination2_info pragmas to \140");
        }
#line 489 "term_constr_main.m"
        {
#line 489 "term_constr_main.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_21, transform_hlds__term_constr_main__OptFileName_20);
        }
#line 490 "term_constr_main.m"
        {
#line 490 "term_constr_main.m"
          libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_21, (MR_String) "\'...");
        }
#line 491 "term_constr_main.m"
        {
#line 491 "term_constr_main.m"
          libs__file_util__maybe_flush_output_3_p_0(transform_hlds__term_constr_main__Verbose_21);
        }
#line 492 "term_constr_main.m"
        {
#line 492 "term_constr_main.m"
          mercury__io__open_append_4_p_0(transform_hlds__term_constr_main__OptFileName_20, &transform_hlds__term_constr_main__OptFileRes_22);
        }
#line 500 "term_constr_main.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_main__OptFileRes_22)) == (MR_mktag((MR_Integer) 1))))
#line 501 "term_constr_main.m"
          {
#line 501 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__IOError_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__OptFileRes_22, (MR_Integer) 0)));
#line 501 "term_constr_main.m"
            MR_String transform_hlds__term_constr_main__IOErrorMessage_27;
#line 501 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_41_41;
#line 501 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_44_44;
#line 501 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_45_45;
#line 501 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_47_47;

#line 502 "term_constr_main.m"
            {
#line 502 "term_constr_main.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_21, (MR_String) " failed!\n");
            }
#line 503 "term_constr_main.m"
            {
#line 503 "term_constr_main.m"
              mercury__io__error_message_2_p_0(transform_hlds__term_constr_main__IOError_26, &transform_hlds__term_constr_main__IOErrorMessage_27);
            }
#line 505 "term_constr_main.m"
            {
#line 505 "term_constr_main.m"
              transform_hlds__term_constr_main__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_47_47, 0) = ((MR_Box) (transform_hlds__term_constr_main__IOErrorMessage_27));
#line 505 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "term_constr_main.m"
            }
#line 505 "term_constr_main.m"
            {
#line 505 "term_constr_main.m"
              transform_hlds__term_constr_main__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_45_45, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 505 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_45_45, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_47_47));
#line 505 "term_constr_main.m"
            }
#line 505 "term_constr_main.m"
            {
#line 505 "term_constr_main.m"
              transform_hlds__term_constr_main__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_44_44, 0) = ((MR_Box) (transform_hlds__term_constr_main__OptFileName_20));
#line 505 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_44_44, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_45_45));
#line 505 "term_constr_main.m"
            }
#line 504 "term_constr_main.m"
            {
#line 504 "term_constr_main.m"
              transform_hlds__term_constr_main__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_41_41, 0) = ((MR_Box) ((MR_String) "Error opening file \140"));
#line 504 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_41_41, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_44_44));
#line 504 "term_constr_main.m"
            }
#line 504 "term_constr_main.m"
            {
#line 504 "term_constr_main.m"
              mercury__io__write_strings_3_p_0(transform_hlds__term_constr_main__V_41_41);
            }
#line 506 "term_constr_main.m"
            {
#line 506 "term_constr_main.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 506 "term_constr_main.m"
              return;
            }
#line 501 "term_constr_main.m"
          }
#line 500 "term_constr_main.m"
        else
#line 494 "term_constr_main.m"
          {
#line 494 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__OptFile_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OptFileRes_22, (MR_Integer) 0)));
#line 494 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__OldStream_24;
#line 494 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_52_52;
#line 496 "term_constr_main.m"
            MR_Box transform_hlds__term_constr_main__conv0_STATE_VARIABLE_IO_45_53;
#line 497 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_25_25;

#line 495 "term_constr_main.m"
            {
#line 495 "term_constr_main.m"
              mercury__io__set_output_stream_4_p_0(transform_hlds__term_constr_main__OptFile_23, &transform_hlds__term_constr_main__OldStream_24);
            }
#line 496 "term_constr_main.m"
            {
#line 496 "term_constr_main.m"
              transform_hlds__term_constr_main__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 496 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_52_52, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_7[1]));
#line 496 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_52_52, 1) = ((MR_Box) (transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0_1));
#line 496 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 496 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_52_52, 3) = ((MR_Box) (transform_hlds__term_constr_main__ModuleInfo_4));
#line 496 "term_constr_main.m"
            }
#line 496 "term_constr_main.m"
            {
#line 496 "term_constr_main.m"
              mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_main__V_52_52, transform_hlds__term_constr_main__PredIds_8, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_IO_45_53);
            }
#line 497 "term_constr_main.m"
            {
#line 497 "term_constr_main.m"
              mercury__io__set_output_stream_4_p_0(transform_hlds__term_constr_main__OldStream_24, &transform_hlds__term_constr_main__V_25_25);
            }
#line 498 "term_constr_main.m"
            {
#line 498 "term_constr_main.m"
              mercury__io__close_output_3_p_0(transform_hlds__term_constr_main__OptFile_23);
            }
#line 499 "term_constr_main.m"
            {
#line 499 "term_constr_main.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_21, (MR_String) " done.\n");
#line 499 "term_constr_main.m"
              return;
            }
#line 494 "term_constr_main.m"
          }
#line 471 "term_constr_main.m"
      }
#line 465 "term_constr_main.m"
  }
#line 462 "term_constr_main.m"
}

#line 447 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(
#line 447 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__TerminationInfo_5,
#line 447 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_6,
#line 447 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13,
#line 447 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14)
#line 447 "term_constr_main.m"
{
#line 450 "term_constr_main.m"
  {
#line 450 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 450 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__PredInfo_8;
#line 450 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo0_9;
#line 450 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo0_10;
#line 450 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_11;
#line 450 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_12;
#line 450 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_15_15;
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_17_17;
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_18_18;
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_19_19;
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_20_20;
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_21_21;
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_22_22;
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_24_24;
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_25_25;
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_23_23;

#line 451 "term_constr_main.m"
    {
#line 451 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__term_constr_main__PPId_6, &transform_hlds__term_constr_main__PredInfo_8, &transform_hlds__term_constr_main__ProcInfo0_9);
    }
#line 452 "term_constr_main.m"
    {
#line 452 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo0_9, &transform_hlds__term_constr_main__TermInfo0_10);
    }
#line 453 "term_constr_main.m"
    {
#line 453 "term_constr_main.m"
      transform_hlds__term_constr_main__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 453 "term_constr_main.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_15_15, 0) = ((MR_Box) (transform_hlds__term_constr_main__TerminationInfo_5));
#line 453 "term_constr_main.m"
    }
#line 166 "term_constr_main.m"
    transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 0)));
#line 166 "term_constr_main.m"
    transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 1)));
#line 166 "term_constr_main.m"
    transform_hlds__term_constr_main__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 2)));
#line 166 "term_constr_main.m"
    transform_hlds__term_constr_main__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 3)));
#line 166 "term_constr_main.m"
    transform_hlds__term_constr_main__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 4)));
#line 166 "term_constr_main.m"
    transform_hlds__term_constr_main__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 5)));
#line 166 "term_constr_main.m"
    transform_hlds__term_constr_main__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 6)));
#line 166 "term_constr_main.m"
    transform_hlds__term_constr_main__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 7)));
#line 166 "term_constr_main.m"
    transform_hlds__term_constr_main__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo0_10, (MR_Integer) 8)));
#line 166 "term_constr_main.m"
    {
#line 166 "term_constr_main.m"
      transform_hlds__term_constr_main__TermInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_17_17));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_18_18));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_19_19));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_20_20));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_21_21));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_22_22));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_15_15));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_24_24));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TermInfo_11, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_25_25));
#line 166 "term_constr_main.m"
    }
#line 454 "term_constr_main.m"
    {
#line 454 "term_constr_main.m"
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_main__TermInfo_11, transform_hlds__term_constr_main__ProcInfo0_9, &transform_hlds__term_constr_main__ProcInfo_12);
    }
#line 455 "term_constr_main.m"
    {
#line 455 "term_constr_main.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__term_constr_main__PPId_6, transform_hlds__term_constr_main__PredInfo_8, transform_hlds__term_constr_main__ProcInfo_12, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14);
#line 455 "term_constr_main.m"
      return;
    }
#line 450 "term_constr_main.m"
  }
#line 447 "term_constr_main.m"
}

#line 444 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_7(
#line 444 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 444 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 444 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 444 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 444 "term_constr_main.m"
{
#line 444 "term_constr_main.m"
  {
#line 444 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 444 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14;

#line 444 "term_constr_main.m"
    {
#line 444 "term_constr_main.m"
      transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14);
    }
#line 444 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14));
#line 444 "term_constr_main.m"
  }
#line 444 "term_constr_main.m"
}

#line 444 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_6(
#line 444 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 444 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 444 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 444 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 444 "term_constr_main.m"
{
#line 444 "term_constr_main.m"
  {
#line 444 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 444 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14;

#line 444 "term_constr_main.m"
    {
#line 444 "term_constr_main.m"
      transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14);
    }
#line 444 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14));
#line 444 "term_constr_main.m"
  }
#line 444 "term_constr_main.m"
}

#line 409 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_5(
#line 409 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 409 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 409 "term_constr_main.m"
{
#line 409 "term_constr_main.m"
  {
#line 409 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 409 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 409 "term_constr_main.m"
    {
#line 409 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__409__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 409 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 409 "term_constr_main.m"
  }
#line 409 "term_constr_main.m"
}

#line 409 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_4(
#line 409 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 409 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 409 "term_constr_main.m"
{
#line 409 "term_constr_main.m"
  {
#line 409 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 409 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 409 "term_constr_main.m"
    {
#line 409 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__has_term_info_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 409 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 409 "term_constr_main.m"
  }
#line 409 "term_constr_main.m"
}

#line 391 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_3(
#line 391 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 391 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 391 "term_constr_main.m"
{
#line 391 "term_constr_main.m"
  {
#line 391 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 391 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 391 "term_constr_main.m"
    {
#line 391 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__391__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 391 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 391 "term_constr_main.m"
  }
#line 391 "term_constr_main.m"
}

#line 391 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_2(
#line 391 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 391 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 391 "term_constr_main.m"
{
#line 391 "term_constr_main.m"
  {
#line 391 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 391 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 391 "term_constr_main.m"
    {
#line 391 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__has_arg_size_info_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 391 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 391 "term_constr_main.m"
  }
#line 391 "term_constr_main.m"
}

#line 379 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_1(
#line 379 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 379 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 379 "term_constr_main.m"
{
#line 379 "term_constr_main.m"
  {
#line 379 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 379 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 379 "term_constr_main.m"
    {
#line 379 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 379 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 379 "term_constr_main.m"
  }
#line 379 "term_constr_main.m"
}

#line 369 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0(
#line 369 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__DepOrder_10,
#line 369 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__BuildOpts_11,
#line 369 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__FixpointOpts_12,
#line 369 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Pass2Opts_13,
#line 369 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SCC_14,
#line 369 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31,
#line 369 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32)
#line 369 "term_constr_main.m"
{
#line 375 "term_constr_main.m"
  {
#line 375 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__NeedsAR_17;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__BuildErrors_18;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__NeedsArgSize_19;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FixpointErrors_20;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Pass1Errors_21;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__MaybeEarlyPass2Result_22;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_25;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ArgSizeOnly_26;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_35_35;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_38_38;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_39_39;
#line 375 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41;

#line 379 "term_constr_main.m"
    {
#line 379 "term_constr_main.m"
      transform_hlds__term_constr_main__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 379 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[1]));
#line 379 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_1));
#line 379 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 379 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31));
#line 379 "term_constr_main.m"
    }
#line 379 "term_constr_main.m"
    {
#line 379 "term_constr_main.m"
      transform_hlds__term_constr_main__NeedsAR_17 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_50_50, transform_hlds__term_constr_main__V_35_35, transform_hlds__term_constr_main__SCC_14);
    }
#line 384 "term_constr_main.m"
    {
#line 384 "term_constr_main.m"
      transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0(transform_hlds__term_constr_main__DepOrder_10, transform_hlds__term_constr_main__NeedsAR_17, transform_hlds__term_constr_main__BuildOpts_11, &transform_hlds__term_constr_main__BuildErrors_18, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36);
    }
#line 391 "term_constr_main.m"
    {
#line 391 "term_constr_main.m"
      transform_hlds__term_constr_main__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 391 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[1]));
#line 391 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_2));
#line 391 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 391 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36));
#line 391 "term_constr_main.m"
    }
#line 391 "term_constr_main.m"
    {
#line 391 "term_constr_main.m"
      transform_hlds__term_constr_main__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 391 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[2]));
#line 391 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_3));
#line 391 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 391 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_39_39));
#line 391 "term_constr_main.m"
    }
#line 391 "term_constr_main.m"
    {
#line 391 "term_constr_main.m"
      transform_hlds__term_constr_main__NeedsArgSize_19 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_50_50, transform_hlds__term_constr_main__V_38_38, transform_hlds__term_constr_main__NeedsAR_17);
    }
#line 392 "term_constr_main.m"
    {
#line 392 "term_constr_main.m"
      transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(transform_hlds__term_constr_main__FixpointOpts_12, transform_hlds__term_constr_main__NeedsArgSize_19, (MR_Integer) 1, &transform_hlds__term_constr_main__FixpointErrors_20, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41);
    }
#line 397 "term_constr_main.m"
    {
#line 397 "term_constr_main.m"
      transform_hlds__term_constr_main__Pass1Errors_21 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[0], transform_hlds__term_constr_main__BuildErrors_18, transform_hlds__term_constr_main__FixpointErrors_20);
    }
#line 401 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__Pass1Errors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 400 "term_constr_main.m"
      transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "term_constr_main.m"
    else
#line 402 "term_constr_main.m"
      {
#line 402 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_42_42;

#line 403 "term_constr_main.m"
        {
#line 403 "term_constr_main.m"
          transform_hlds__term_constr_main__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "term_constr_main.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_42_42, 0) = ((MR_Box) (transform_hlds__term_constr_main__Pass1Errors_21));
#line 403 "term_constr_main.m"
        }
#line 403 "term_constr_main.m"
        {
#line 403 "term_constr_main.m"
          transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "term_constr_main.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeEarlyPass2Result_22, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_42_42));
#line 403 "term_constr_main.m"
        }
#line 402 "term_constr_main.m"
      }
#line 405 "term_constr_main.m"
    {
#line 405 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__term_constr_main__Globals_25);
    }
#line 406 "term_constr_main.m"
    {
#line 406 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_25, (MR_Integer) 426, &transform_hlds__term_constr_main__ArgSizeOnly_26);
    }
#line 431 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__ArgSizeOnly_26 == (MR_Integer) 0))
#line 408 "term_constr_main.m"
      {
#line 408 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeCtorInfo_15_69;
#line 408 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeCtorInfo_16_70;
#line 408 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__NeedsTerm_27;
#line 408 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_44_44;
#line 408 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_45_45;

#line 409 "term_constr_main.m"
        {
#line 409 "term_constr_main.m"
          transform_hlds__term_constr_main__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 409 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[1]));
#line 409 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_4));
#line 409 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 409 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41));
#line 409 "term_constr_main.m"
        }
#line 409 "term_constr_main.m"
        {
#line 409 "term_constr_main.m"
          transform_hlds__term_constr_main__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 409 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[2]));
#line 409 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_5));
#line 409 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 409 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_45_45));
#line 409 "term_constr_main.m"
        }
#line 409 "term_constr_main.m"
        {
#line 409 "term_constr_main.m"
          transform_hlds__term_constr_main__NeedsTerm_27 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_50_50, transform_hlds__term_constr_main__V_44_44, transform_hlds__term_constr_main__NeedsAR_17);
        }
#line 3845 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__TypeCtorInfo_15_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3847 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__TypeCtorInfo_16_70 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 3849 "transform_hlds.term_constr_main.c"
        if ((transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3851 "transform_hlds.term_constr_main.c"
          {
#line 3853 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__Pass2Result_28;
#line 3855 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47;
#line 3857 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__V_64_64;
#line 444 "term_constr_main.m"
            MR_Box transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_47_47;

#line 418 "term_constr_main.m"
            {
#line 418 "term_constr_main.m"
              transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0(transform_hlds__term_constr_main__Pass2Opts_13, transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__term_constr_main__Pass2Result_28);
            }
#line 444 "term_constr_main.m"
            {
#line 444 "term_constr_main.m"
              transform_hlds__term_constr_main__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 444 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_7[0]));
#line 444 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_6));
#line 444 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 444 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 3) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Result_28));
#line 444 "term_constr_main.m"
            }
#line 444 "term_constr_main.m"
            {
#line 444 "term_constr_main.m"
              mercury__list__foldl_4_p_0(transform_hlds__term_constr_main__TypeCtorInfo_15_69, transform_hlds__term_constr_main__TypeCtorInfo_16_70, transform_hlds__term_constr_main__V_64_64, transform_hlds__term_constr_main__NeedsTerm_27, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41)), &transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_47_47);
            }
#line 444 "term_constr_main.m"
            transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47 = ((MR_Word) transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_47_47);
#line 428 "term_constr_main.m"
            if (((MR_tag((MR_Word) transform_hlds__term_constr_main__Pass2Result_28)) == (MR_mktag((MR_Integer) 1))))
#line 426 "term_constr_main.m"
              {
#line 426 "term_constr_main.m"
                MR_Word transform_hlds__term_constr_main__Errors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__Pass2Result_28, (MR_Integer) 0)));

#line 427 "term_constr_main.m"
                {
#line 427 "term_constr_main.m"
                  transform_hlds__term_constr_errors__report_termination2_errors_6_p_0(transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__Errors_29, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32);
#line 427 "term_constr_main.m"
                  return;
                }
#line 426 "term_constr_main.m"
              }
#line 428 "term_constr_main.m"
            else
#line 429 "term_constr_main.m"
              *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32 = transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47;
#line 3908 "transform_hlds.term_constr_main.c"
          }
#line 3910 "transform_hlds.term_constr_main.c"
        else
#line 3912 "transform_hlds.term_constr_main.c"
          {
#line 3914 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__Pass2Result_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeEarlyPass2Result_22, (MR_Integer) 0)));
#line 3916 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__Errors_72;
#line 3918 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74;
#line 3920 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__V_75_75;
#line 444 "term_constr_main.m"
            MR_Box transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_47_74;

#line 444 "term_constr_main.m"
            {
#line 444 "term_constr_main.m"
              transform_hlds__term_constr_main__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 444 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_7[0]));
#line 444 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_7));
#line 444 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 444 "term_constr_main.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 3) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Result_71));
#line 444 "term_constr_main.m"
            }
#line 444 "term_constr_main.m"
            {
#line 444 "term_constr_main.m"
              mercury__list__foldl_4_p_0(transform_hlds__term_constr_main__TypeCtorInfo_15_69, transform_hlds__term_constr_main__TypeCtorInfo_16_70, transform_hlds__term_constr_main__V_75_75, transform_hlds__term_constr_main__NeedsTerm_27, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41)), &transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_47_74);
            }
#line 444 "term_constr_main.m"
            transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74 = ((MR_Word) transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_47_74);
#line 426 "term_constr_main.m"
            transform_hlds__term_constr_main__Errors_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__Pass2Result_71, (MR_Integer) 0)));
#line 427 "term_constr_main.m"
            {
#line 427 "term_constr_main.m"
              transform_hlds__term_constr_errors__report_termination2_errors_6_p_0(transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__Errors_72, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32);
#line 427 "term_constr_main.m"
              return;
            }
#line 3955 "transform_hlds.term_constr_main.c"
          }
#line 408 "term_constr_main.m"
      }
#line 431 "term_constr_main.m"
    else
#line 432 "term_constr_main.m"
      *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32 = transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41;
#line 375 "term_constr_main.m"
  }
#line 369 "term_constr_main.m"
}

#line 616 "term_constr_main.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_3(
#line 616 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 616 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 616 "term_constr_main.m"
{
#line 616 "term_constr_main.m"
  {
#line 616 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__wrapper_arg_2;
#line 616 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 616 "term_constr_main.m"
    MR_String transform_hlds__term_constr_main__conv1_HeadVar__3_21;

#line 616 "term_constr_main.m"
    {
#line 616 "term_constr_main.m"
      transform_hlds__term_constr_main__conv1_HeadVar__3_21 = transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__616__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 616 "term_constr_main.m"
    transform_hlds__term_constr_main__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_main__conv1_HeadVar__3_21));
#line 616 "term_constr_main.m"
    return transform_hlds__term_constr_main__wrapper_arg_2;
#line 616 "term_constr_main.m"
  }
#line 616 "term_constr_main.m"
}

#line 614 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_2(
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 614 "term_constr_main.m"
{
#line 614 "term_constr_main.m"
  {
#line 614 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 614 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 614 "term_constr_main.m"
    {
#line 614 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__614__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 614 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 614 "term_constr_main.m"
  }
#line 614 "term_constr_main.m"
}

#line 614 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_1(
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 614 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 614 "term_constr_main.m"
{
#line 614 "term_constr_main.m"
  {
#line 614 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 614 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 614 "term_constr_main.m"
    {
#line 614 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 614 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 614 "term_constr_main.m"
  }
#line 614 "term_constr_main.m"
}

#line 195 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0(
#line 195 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PredOrFunc_11,
#line 195 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SymName_12,
#line 195 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModeList_13,
#line 195 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Context_14,
#line 195 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeSuccess_15,
#line 195 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeFailure_16,
#line 195 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeTermination_17,
#line 195 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVars_18)
#line 195 "term_constr_main.m"
{
#line 575 "term_constr_main.m"
  {
#line 575 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 575 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TypeInfo_53_53;
#line 575 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TypeCtorInfo_54_54;
#line 575 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__NumHeadVars_22;
#line 575 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVarIds_23;
#line 575 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__VarToVarIdMap_24;
#line 575 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__V_36_36;
#line 575 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_38_38;

#line 576 "term_constr_main.m"
    {
#line 576 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination2_info(");
    }
#line 581 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__PredOrFunc_11 == (MR_Integer) 1))
#line 582 "term_constr_main.m"
      {
#line 582 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__FuncModeList_20;
#line 582 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__RetMode_21;
#line 582 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_29_29;
#line 583 "term_constr_main.m"
        MR_Box transform_hlds__term_constr_main__conv0_RetMode_21;

#line 583 "term_constr_main.m"
        {
#line 583 "term_constr_main.m"
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__term_constr_main__ModeList_13, &transform_hlds__term_constr_main__FuncModeList_20, &transform_hlds__term_constr_main__conv0_RetMode_21);
        }
#line 583 "term_constr_main.m"
        transform_hlds__term_constr_main__RetMode_21 = ((MR_Word) transform_hlds__term_constr_main__conv0_RetMode_21);
#line 584 "term_constr_main.m"
        {
#line 584 "term_constr_main.m"
          transform_hlds__term_constr_main__V_29_29 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
        }
#line 584 "term_constr_main.m"
        {
#line 584 "term_constr_main.m"
          parse_tree__mercury_to_mercury__mercury_output_func_mode_subdecl_8_p_0(transform_hlds__term_constr_main__V_29_29, transform_hlds__term_constr_main__SymName_12, transform_hlds__term_constr_main__FuncModeList_20, transform_hlds__term_constr_main__RetMode_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_constr_main__Context_14);
        }
#line 582 "term_constr_main.m"
      }
#line 581 "term_constr_main.m"
    else
#line 578 "term_constr_main.m"
      {
#line 578 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_32_32;

#line 579 "term_constr_main.m"
        {
#line 579 "term_constr_main.m"
          transform_hlds__term_constr_main__V_32_32 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
        }
#line 579 "term_constr_main.m"
        {
#line 579 "term_constr_main.m"
          parse_tree__mercury_to_mercury__mercury_output_pred_mode_subdecl_7_p_0(transform_hlds__term_constr_main__V_32_32, transform_hlds__term_constr_main__SymName_12, transform_hlds__term_constr_main__ModeList_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_constr_main__Context_14);
        }
#line 578 "term_constr_main.m"
      }
#line 4152 "transform_hlds.term_constr_main.c"
    transform_hlds__term_constr_main__TypeInfo_53_53 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[1];
#line 588 "term_constr_main.m"
    {
#line 588 "term_constr_main.m"
      mercury__list__length_2_p_0(transform_hlds__term_constr_main__TypeInfo_53_53, transform_hlds__term_constr_main__HeadVars_18, &transform_hlds__term_constr_main__NumHeadVars_22);
    }
#line 589 "term_constr_main.m"
    transform_hlds__term_constr_main__V_36_36 = (transform_hlds__term_constr_main__NumHeadVars_22 - (MR_Integer) 1);
#line 589 "term_constr_main.m"
    {
#line 589 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVarIds_23 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, transform_hlds__term_constr_main__V_36_36);
    }
#line 4166 "transform_hlds.term_constr_main.c"
    transform_hlds__term_constr_main__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 591 "term_constr_main.m"
    {
#line 591 "term_constr_main.m"
      transform_hlds__term_constr_main__V_38_38 = mercury__map__init_0_f_0(transform_hlds__term_constr_main__TypeInfo_53_53, transform_hlds__term_constr_main__TypeCtorInfo_54_54);
    }
#line 590 "term_constr_main.m"
    {
#line 590 "term_constr_main.m"
      mercury__map__det_insert_from_corresponding_lists_4_p_0(transform_hlds__term_constr_main__TypeInfo_53_53, transform_hlds__term_constr_main__TypeCtorInfo_54_54, transform_hlds__term_constr_main__HeadVars_18, transform_hlds__term_constr_main__HeadVarIds_23, transform_hlds__term_constr_main__V_38_38, &transform_hlds__term_constr_main__VarToVarIdMap_24);
    }
#line 593 "term_constr_main.m"
    {
#line 593 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 608 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__MaybeSuccess_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 608 "term_constr_main.m"
      {
#line 609 "term_constr_main.m"
        {
#line 609 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 608 "term_constr_main.m"
      }
#line 608 "term_constr_main.m"
    else
#line 611 "term_constr_main.m"
      {
#line 611 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeCtorInfo_29_79;
#line 611 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Polyhedron_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeSuccess_15, (MR_Integer) 0)));
#line 611 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints0_61;
#line 611 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints1_62;
#line 611 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints_63;
#line 611 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__OutputVar_64;

#line 612 "term_constr_main.m"
        {
#line 612 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "constraints(");
        }
#line 613 "term_constr_main.m"
        {
#line 613 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints0_61 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_main__Polyhedron_60);
        }
#line 4221 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__TypeCtorInfo_29_79 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 614 "term_constr_main.m"
        {
#line 614 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints1_62 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_29_79, (MR_Word) &transform_hlds__term_constr_main_scalar_common_4[1], transform_hlds__term_constr_main__Constraints0_61);
        }
#line 615 "term_constr_main.m"
        {
#line 615 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints_63 = mercury__list__sort_1_f_0(transform_hlds__term_constr_main__TypeCtorInfo_29_79, transform_hlds__term_constr_main__Constraints1_62);
        }
#line 616 "term_constr_main.m"
        {
#line 616 "term_constr_main.m"
          transform_hlds__term_constr_main__OutputVar_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 616 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_64, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_6[0]));
#line 616 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_64, 1) = ((MR_Box) (transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_3));
#line 616 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 616 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_64, 3) = ((MR_Box) (transform_hlds__term_constr_main__VarToVarIdMap_24));
#line 616 "term_constr_main.m"
        }
#line 617 "term_constr_main.m"
        {
#line 617 "term_constr_main.m"
          libs__lp_rational__output_constraints_4_p_0(transform_hlds__term_constr_main__OutputVar_64, transform_hlds__term_constr_main__Constraints_63);
        }
#line 618 "term_constr_main.m"
        {
#line 618 "term_constr_main.m"
          mercury__io__write_char_3_p_0((MR_Char) 41);
        }
#line 611 "term_constr_main.m"
      }
#line 596 "term_constr_main.m"
    {
#line 596 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 597 "term_constr_main.m"
    {
#line 597 "term_constr_main.m"
      transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0(transform_hlds__term_constr_main__VarToVarIdMap_24, transform_hlds__term_constr_main__MaybeFailure_16);
    }
#line 599 "term_constr_main.m"
    {
#line 599 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 600 "term_constr_main.m"
    {
#line 600 "term_constr_main.m"
      transform_hlds__term_constr_main__output_maybe_termination2_info_3_p_0(transform_hlds__term_constr_main__MaybeTermination_17);
    }
#line 601 "term_constr_main.m"
    {
#line 601 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 601 "term_constr_main.m"
      return;
    }
#line 575 "term_constr_main.m"
  }
#line 195 "term_constr_main.m"
}

#line 189 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main__output_pred_termination2_info_4_p_0(
#line 189 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_5,
#line 189 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PredId_6)
#line 189 "term_constr_main.m"
{
#line 509 "term_constr_main.m"
  {
#line 509 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 509 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_8;
#line 509 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__RunningTerm2_9;

#line 514 "term_constr_main.m"
    {
#line 514 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__ModuleInfo_5, &transform_hlds__term_constr_main__Globals_8);
    }
#line 515 "term_constr_main.m"
    {
#line 515 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_8, (MR_Integer) 421, &transform_hlds__term_constr_main__RunningTerm2_9);
    }
#line 541 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__RunningTerm2_9 == (MR_Integer) 0))
#line 542 "term_constr_main.m"
      {
#line 542 "term_constr_main.m"
      }
#line 541 "term_constr_main.m"
    else
#line 517 "term_constr_main.m"
      {
#line 517 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__PredInfo_10;
#line 517 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__ImportStatus_11;
#line 517 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeSpecInfo_12;
#line 517 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeSpecForcePreds_14;
#line 521 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_13_13;
#line 521 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_15_15;
#line 521 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_16_16;
#line 527 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeCtorInfo_28_28;

#line 518 "term_constr_main.m"
        {
#line 518 "term_constr_main.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_constr_main__ModuleInfo_5, transform_hlds__term_constr_main__PredId_6, &transform_hlds__term_constr_main__PredInfo_10);
        }
#line 519 "term_constr_main.m"
        {
#line 519 "term_constr_main.m"
          hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__term_constr_main__PredInfo_10, &transform_hlds__term_constr_main__ImportStatus_11);
        }
#line 520 "term_constr_main.m"
        {
#line 520 "term_constr_main.m"
          hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__term_constr_main__ModuleInfo_5, &transform_hlds__term_constr_main__TypeSpecInfo_12);
        }
#line 521 "term_constr_main.m"
        transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TypeSpecInfo_12, (MR_Integer) 0)));
#line 521 "term_constr_main.m"
        transform_hlds__term_constr_main__TypeSpecForcePreds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TypeSpecInfo_12, (MR_Integer) 1)));
#line 521 "term_constr_main.m"
        transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TypeSpecInfo_12, (MR_Integer) 2)));
#line 521 "term_constr_main.m"
        transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TypeSpecInfo_12, (MR_Integer) 3)));
#line 524 "term_constr_main.m"
        if ((transform_hlds__term_constr_main__ImportStatus_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 523 "term_constr_main.m"
          transform_hlds__term_constr_main__succeeded = MR_TRUE;
#line 524 "term_constr_main.m"
        else
#line 524 "term_constr_main.m"
          if ((transform_hlds__term_constr_main__ImportStatus_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 524 "term_constr_main.m"
            transform_hlds__term_constr_main__succeeded = MR_TRUE;
#line 524 "term_constr_main.m"
          else
#line 524 "term_constr_main.m"
            transform_hlds__term_constr_main__succeeded = MR_FALSE;
#line 525 "term_constr_main.m"
        if (transform_hlds__term_constr_main__succeeded)
#line 525 "term_constr_main.m"
          {
#line 526 "term_constr_main.m"
            {
#line 526 "term_constr_main.m"
              transform_hlds__term_constr_main__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__term_constr_main__PredInfo_10);
            }
#line 526 "term_constr_main.m"
            transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 525 "term_constr_main.m"
            if (transform_hlds__term_constr_main__succeeded)
#line 525 "term_constr_main.m"
              {
#line 4398 "transform_hlds.term_constr_main.c"
                transform_hlds__term_constr_main__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 527 "term_constr_main.m"
                {
#line 527 "term_constr_main.m"
                  transform_hlds__term_constr_main__succeeded = mercury__set__member_2_p_0(transform_hlds__term_constr_main__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__term_constr_main__PredId_6)), transform_hlds__term_constr_main__TypeSpecForcePreds_14);
                }
#line 527 "term_constr_main.m"
                transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 525 "term_constr_main.m"
              }
#line 525 "term_constr_main.m"
          }
#line 538 "term_constr_main.m"
        if (transform_hlds__term_constr_main__succeeded)
#line 529 "term_constr_main.m"
          {
#line 529 "term_constr_main.m"
            MR_String transform_hlds__term_constr_main__PredName_17;
#line 529 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ProcTable_18;
#line 529 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__Context_19;
#line 529 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__PredOrFunc_20;
#line 529 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ModuleName_21;
#line 529 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ProcIds_22;
#line 529 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__SymName_23;

#line 529 "term_constr_main.m"
            {
#line 529 "term_constr_main.m"
              transform_hlds__term_constr_main__PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__term_constr_main__PredInfo_10);
            }
#line 530 "term_constr_main.m"
            {
#line 530 "term_constr_main.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_constr_main__PredInfo_10, &transform_hlds__term_constr_main__ProcTable_18);
            }
#line 531 "term_constr_main.m"
            {
#line 531 "term_constr_main.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_constr_main__PredInfo_10, &transform_hlds__term_constr_main__Context_19);
            }
#line 532 "term_constr_main.m"
            {
#line 532 "term_constr_main.m"
              transform_hlds__term_constr_main__PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__term_constr_main__PredInfo_10);
            }
#line 533 "term_constr_main.m"
            {
#line 533 "term_constr_main.m"
              transform_hlds__term_constr_main__ModuleName_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__term_constr_main__PredInfo_10);
            }
#line 534 "term_constr_main.m"
            {
#line 534 "term_constr_main.m"
              transform_hlds__term_constr_main__ProcIds_22 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__term_constr_main__PredInfo_10);
            }
#line 535 "term_constr_main.m"
            {
#line 535 "term_constr_main.m"
              transform_hlds__term_constr_main__SymName_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__SymName_23, 0) = ((MR_Box) (transform_hlds__term_constr_main__ModuleName_21));
#line 535 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__SymName_23, 1) = ((MR_Box) (transform_hlds__term_constr_main__PredName_17));
#line 535 "term_constr_main.m"
            }
#line 536 "term_constr_main.m"
            {
#line 536 "term_constr_main.m"
              transform_hlds__term_constr_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_p_0(transform_hlds__term_constr_main__ProcIds_22, transform_hlds__term_constr_main__ProcTable_18, transform_hlds__term_constr_main__PredOrFunc_20, transform_hlds__term_constr_main__SymName_23, transform_hlds__term_constr_main__Context_19);
#line 536 "term_constr_main.m"
              return;
            }
#line 529 "term_constr_main.m"
          }
#line 538 "term_constr_main.m"
        else
#line 538 "term_constr_main.m"
          {
#line 538 "term_constr_main.m"
          }
#line 517 "term_constr_main.m"
      }
#line 509 "term_constr_main.m"
  }
#line 189 "term_constr_main.m"
}

#line 323 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__pass_4_p_0_1(
#line 323 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 323 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 323 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 323 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3,
#line 323 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_4,
#line 323 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_5)
#line 323 "term_constr_main.m"
{
#line 323 "term_constr_main.m"
  {
#line 323 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 323 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_32;

#line 323 "term_constr_main.m"
    {
#line 323 "term_constr_main.m"
      transform_hlds__term_constr_main__analyse_scc_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_32);
    }
#line 323 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_32));
#line 323 "term_constr_main.m"
  }
#line 323 "term_constr_main.m"
}

#line 182 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main__pass_4_p_0(
#line 182 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20,
#line 182 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_21)
#line 182 "term_constr_main.m"
{
#line 286 "term_constr_main.m"
  {
#line 286 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_7;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Norm_8;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FunctorInfo_9;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Fail_10;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ArgSizeOnly_11;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__BuildOptions_12;
#line 286 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__MaxSize_13;
#line 286 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CutOff_14;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Widening_15;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FixpointOptions_16;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Pass2Options_17;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__DepInfo_18;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__SCCs_19;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30;
#line 286 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_31_31;
#line 323 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_21;
#line 323 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv1_STATE_VARIABLE_IO_33_33;

#line 291 "term_constr_main.m"
    {
#line 291 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__term_constr_main__Globals_7);
    }
#line 292 "term_constr_main.m"
    {
#line 292 "term_constr_main.m"
      libs__globals__get_termination2_norm_2_p_0(transform_hlds__term_constr_main__Globals_7, &transform_hlds__term_constr_main__Norm_8);
    }
#line 293 "term_constr_main.m"
    {
#line 293 "term_constr_main.m"
      transform_hlds__term_constr_main__FunctorInfo_9 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__term_constr_main__Norm_8);
    }
#line 294 "term_constr_main.m"
    {
#line 294 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 427, &transform_hlds__term_constr_main__Fail_10);
    }
#line 295 "term_constr_main.m"
    {
#line 295 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 426, &transform_hlds__term_constr_main__ArgSizeOnly_11);
    }
#line 296 "term_constr_main.m"
    {
#line 296 "term_constr_main.m"
      transform_hlds__term_constr_main__BuildOptions_12 = transform_hlds__term_constr_build__term_build_options_init_3_f_0(transform_hlds__term_constr_main__FunctorInfo_9, transform_hlds__term_constr_main__Fail_10, transform_hlds__term_constr_main__ArgSizeOnly_11);
    }
#line 303 "term_constr_main.m"
    {
#line 303 "term_constr_main.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 428, &transform_hlds__term_constr_main__MaxSize_13);
    }
#line 304 "term_constr_main.m"
    {
#line 304 "term_constr_main.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 425, &transform_hlds__term_constr_main__CutOff_14);
    }
#line 307 "term_constr_main.m"
    transform_hlds__term_constr_main__Widening_15 = (MR_Word) transform_hlds__term_constr_main__CutOff_14;
#line 308 "term_constr_main.m"
    {
#line 308 "term_constr_main.m"
      transform_hlds__term_constr_main__FixpointOptions_16 = transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_f_0(transform_hlds__term_constr_main__Widening_15, transform_hlds__term_constr_main__MaxSize_13);
    }
#line 312 "term_constr_main.m"
    {
#line 312 "term_constr_main.m"
      transform_hlds__term_constr_main__Pass2Options_17 = transform_hlds__term_constr_pass2__pass2_options_init_1_f_0(transform_hlds__term_constr_main__MaxSize_13);
    }
#line 317 "term_constr_main.m"
    {
#line 317 "term_constr_main.m"
      transform_hlds__term_constr_initial__preprocess_module_4_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28);
    }
#line 320 "term_constr_main.m"
    {
#line 320 "term_constr_main.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 321 "term_constr_main.m"
    {
#line 321 "term_constr_main.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__term_constr_main__DepInfo_18);
    }
#line 322 "term_constr_main.m"
    {
#line 322 "term_constr_main.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__DepInfo_18, &transform_hlds__term_constr_main__SCCs_19);
    }
#line 323 "term_constr_main.m"
    {
#line 323 "term_constr_main.m"
      transform_hlds__term_constr_main__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 323 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[0]));
#line 323 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 1) = ((MR_Box) (transform_hlds__term_constr_main__pass_4_p_0_1));
#line 323 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 323 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 3) = ((MR_Box) (transform_hlds__term_constr_main__SCCs_19));
#line 323 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 4) = ((MR_Box) (transform_hlds__term_constr_main__BuildOptions_12));
#line 323 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 5) = ((MR_Box) (transform_hlds__term_constr_main__FixpointOptions_16));
#line 323 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 6) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Options_17));
#line 323 "term_constr_main.m"
    }
#line 323 "term_constr_main.m"
    {
#line 323 "term_constr_main.m"
      mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_main__V_31_31, transform_hlds__term_constr_main__SCCs_19, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30)), &transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_main__conv1_STATE_VARIABLE_IO_33_33);
    }
#line 323 "term_constr_main.m"
    *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_21);
#line 327 "term_constr_main.m"
    {
#line 327 "term_constr_main.m"
      transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0(*transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_21);
#line 327 "term_constr_main.m"
      return;
    }
#line 286 "term_constr_main.m"
  }
#line 182 "term_constr_main.m"
}

#line 172 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_104_101_97_100_95_118_97_114_115_32_58_61_2_f_0(
#line 172 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 172 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 172 "term_constr_main.m"
{
#line 172 "term_constr_main.m"
  {
#line 172 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 172 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 172 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 172 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 172 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 172 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 172 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 172 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 172 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 172 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 172 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));

#line 172 "term_constr_main.m"
    {
#line 172 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 172 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 172 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 172 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 172 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 172 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 172 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 172 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 172 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 172 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 172 "term_constr_main.m"
    }
#line 172 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 172 "term_constr_main.m"
  }
#line 172 "term_constr_main.m"
}

#line 170 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_97_98_115_116_114_97_99_116_95_114_101_112_32_58_61_2_f_0(
#line 170 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 170 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 170 "term_constr_main.m"
{
#line 170 "term_constr_main.m"
  {
#line 170 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 170 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 170 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 170 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 170 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 170 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 170 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 170 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 170 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 170 "term_constr_main.m"
    {
#line 170 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 170 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 170 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 170 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 170 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 170 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 170 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 170 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 170 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 170 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 170 "term_constr_main.m"
    }
#line 170 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 170 "term_constr_main.m"
  }
#line 170 "term_constr_main.m"
}

#line 168 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_f_0(
#line 168 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 168 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 168 "term_constr_main.m"
{
#line 168 "term_constr_main.m"
  {
#line 168 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 168 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 168 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 168 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 168 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 168 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 168 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 168 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 168 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 168 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 168 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));

#line 168 "term_constr_main.m"
    {
#line 168 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 168 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 168 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 168 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 168 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 168 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 168 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 168 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 168 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 168 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 168 "term_constr_main.m"
    }
#line 168 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 168 "term_constr_main.m"
  }
#line 168 "term_constr_main.m"
}

#line 166 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_f_0(
#line 166 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 166 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 166 "term_constr_main.m"
{
#line 166 "term_constr_main.m"
  {
#line 166 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 166 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));

#line 166 "term_constr_main.m"
    {
#line 166 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 166 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 166 "term_constr_main.m"
    }
#line 166 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 166 "term_constr_main.m"
  }
#line 166 "term_constr_main.m"
}

#line 164 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_102_97_105_108_117_114_101_95_99_111_110_115_116_114_115_32_58_61_2_f_0(
#line 164 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 164 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 164 "term_constr_main.m"
{
#line 164 "term_constr_main.m"
  {
#line 164 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 164 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 164 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 164 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 164 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 164 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 164 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 164 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 164 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 164 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 164 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));

#line 164 "term_constr_main.m"
    {
#line 164 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 164 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 164 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 164 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 164 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 164 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 164 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 164 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 164 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 164 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 164 "term_constr_main.m"
    }
#line 164 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 164 "term_constr_main.m"
  }
#line 164 "term_constr_main.m"
}

#line 162 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_f_0(
#line 162 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 162 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 162 "term_constr_main.m"
{
#line 162 "term_constr_main.m"
  {
#line 162 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 162 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 162 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 162 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 162 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 162 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 162 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 162 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 162 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 162 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 162 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));

#line 162 "term_constr_main.m"
    {
#line 162 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 162 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 162 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 162 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 162 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 162 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 162 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 162 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 162 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 162 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 162 "term_constr_main.m"
    }
#line 162 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 162 "term_constr_main.m"
  }
#line 162 "term_constr_main.m"
}

#line 160 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_105_109_112_111_114_116_95_102_97_105_108_117_114_101_32_58_61_2_f_0(
#line 160 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 160 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 160 "term_constr_main.m"
{
#line 160 "term_constr_main.m"
  {
#line 160 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 160 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 160 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 160 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 160 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 160 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 160 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 160 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 160 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 160 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 160 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));

#line 160 "term_constr_main.m"
    {
#line 160 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 160 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 160 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 160 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
#line 160 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 160 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 160 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 160 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 160 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 160 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 160 "term_constr_main.m"
    }
#line 160 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 160 "term_constr_main.m"
  }
#line 160 "term_constr_main.m"
}

#line 158 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_105_109_112_111_114_116_95_115_117_99_99_101_115_115_32_58_61_2_f_0(
#line 158 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 158 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 158 "term_constr_main.m"
{
#line 158 "term_constr_main.m"
  {
#line 158 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 158 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__3_3;
#line 158 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 158 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 158 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 158 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 158 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 158 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 158 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 158 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 158 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));

#line 158 "term_constr_main.m"
    {
#line 158 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 158 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_4_4));
#line 158 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 158 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 158 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_7_7));
#line 158 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main__V_8_8));
#line 158 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main__V_9_9));
#line 158 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main__V_10_10));
#line 158 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main__V_11_11));
#line 158 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main__V_12_12));
#line 158 "term_constr_main.m"
    }
#line 158 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_3;
#line 158 "term_constr_main.m"
  }
#line 158 "term_constr_main.m"
}

#line 157 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__f_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_f_0(
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
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 157 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
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
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));

#line 157 "term_constr_main.m"
    {
#line 157 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 157 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_2));
#line 157 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_5_5));
#line 157 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main__V_6_6));
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

#line 155 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__head_vars_1_f_0(
#line 155 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 155 "term_constr_main.m"
{
#line 155 "term_constr_main.m"
  {
#line 155 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 155 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 155 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 155 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 155 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 155 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 155 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 155 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 155 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 155 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 155 "term_constr_main.m"
  }
#line 155 "term_constr_main.m"
}

#line 154 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__intermod_status_1_f_0(
#line 154 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 154 "term_constr_main.m"
{
#line 154 "term_constr_main.m"
  {
#line 154 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 154 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
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
transform_hlds__term_constr_main__abstract_rep_1_f_0(
#line 153 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 153 "term_constr_main.m"
{
#line 153 "term_constr_main.m"
  {
#line 153 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 153 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
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
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));

#line 153 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 153 "term_constr_main.m"
  }
#line 153 "term_constr_main.m"
}

#line 152 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__term_status_1_f_0(
#line 152 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 152 "term_constr_main.m"
{
#line 152 "term_constr_main.m"
  {
#line 152 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
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
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 152 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 152 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 152 "term_constr_main.m"
  }
#line 152 "term_constr_main.m"
}

#line 151 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__failure_constrs_1_f_0(
#line 151 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 151 "term_constr_main.m"
{
#line 151 "term_constr_main.m"
  {
#line 151 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 151 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
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
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
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
transform_hlds__term_constr_main__success_constrs_1_f_0(
#line 150 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 150 "term_constr_main.m"
{
#line 150 "term_constr_main.m"
  {
#line 150 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 150 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
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

#line 148 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__import_failure_1_f_0(
#line 148 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 148 "term_constr_main.m"
{
#line 148 "term_constr_main.m"
  {
#line 148 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 148 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 148 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 148 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 148 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 148 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 148 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 148 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 148 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 148 "term_constr_main.m"
  }
#line 148 "term_constr_main.m"
}

#line 146 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__import_success_1_f_0(
#line 146 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 146 "term_constr_main.m"
{
#line 146 "term_constr_main.m"
  {
#line 146 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 146 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 146 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 146 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 146 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 146 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 146 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 146 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 146 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 146 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));

#line 146 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__2_2;
#line 146 "term_constr_main.m"
  }
#line 146 "term_constr_main.m"
}

#line 145 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__size_var_map_1_f_0(
#line 145 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1)
#line 145 "term_constr_main.m"
{
#line 145 "term_constr_main.m"
  {
#line 145 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 145 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 145 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 145 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
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

#line 143 "term_constr_main.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main__term2_info_init_0_f_0(void)
#line 143 "term_constr_main.m"
{
#line 279 "term_constr_main.m"
  {
#line 279 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 279 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__1_1;
#line 279 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_2_2;

#line 279 "term_constr_main.m"
    {
#line 279 "term_constr_main.m"
      transform_hlds__term_constr_main__V_2_2 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[1]);
    }
#line 279 "term_constr_main.m"
    {
#line 279 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 279 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_2_2));
#line 279 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "term_constr_main.m"
    }
#line 279 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__1_1;
#line 279 "term_constr_main.m"
  }
#line 143 "term_constr_main.m"
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
