/*
** Automatically generated from `term_constr_main.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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




#line 140 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 143 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 146 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 149 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0;

#line 152 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0;

#line 155 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0;

#line 158 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 161 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 164 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 167 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 170 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main__type_ctor_info_term_reason_0__plain_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 173 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 176 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0;

#line 179 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1;

#line 182 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_intermod_status_0[2];

#line 185 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_intermod_status_0[2];

#line 188 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_intermod_status_0[2];

#line 191 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0;

#line 194 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1;

#line 197 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2;

#line 200 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3;

#line 203 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4;

#line 206 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_term_reason_0[5];

#line 209 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_term_reason_0[5];

#line 212 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_term_reason_0[5];

#line 215 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 218 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

#line 221 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 224 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 227 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 230 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0;

#line 233 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 236 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_main__type_ctor_info_intermod_status_0;

#line 239 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

#line 242 "transform_hlds.term_constr_main.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_main__transform_hlds__term_constr_main__field_types_termination2_info_0_0[9];

#line 245 "transform_hlds.term_constr_main.c"
static const MR_ConstString transform_hlds__term_constr_main__transform_hlds__term_constr_main__field_names_termination2_info_0_0[9];

#line 248 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0;

#line 251 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0[1];

#line 254 "transform_hlds.term_constr_main.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_ptag_ordered_termination2_info_0[1];

#line 257 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_name_ordered_termination2_info_0[1];

#line 260 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_termination2_info_0[1];

#line 263 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0_10001(
#line 266 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 268 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 271 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0_10001(
#line 274 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 276 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 278 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 281 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_termination_info_0_0_10001(
#line 284 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 286 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 289 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_termination_info_0_0_10001(
#line 292 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 294 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 296 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 299 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____intermod_status_0_0_10001(
#line 302 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 304 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 307 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____intermod_status_0_0_10001(
#line 310 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 312 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 314 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 317 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____term_reason_0_0_10001(
#line 320 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 322 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 325 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____term_reason_0_0_10001(
#line 328 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 330 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 332 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 335 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____termination2_info_0_0_10001(
#line 338 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 340 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 343 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____termination2_info_0_0_10001(
#line 346 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 348 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 350 "transform_hlds.term_constr_main.c"
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



#line 843 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 851 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 859 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 867 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0
  }
};

#line 876 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 884 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 893 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 901 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 910 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 919 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 927 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main__type_ctor_info_term_reason_0__plain_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_term_reason_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 936 "transform_hlds.term_constr_main.c"
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

#line 957 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_term_reason_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 966 "transform_hlds.term_constr_main.c"
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

#line 987 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0 = {
  (MR_String) "not_mutually_recursive",
  (MR_Integer) 0
};

#line 993 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1 = {
  (MR_String) "may_be_mutually_recursive",
  (MR_Integer) 1
};

#line 999 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1
};

#line 1005 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0
};

#line 1011 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_intermod_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1017 "transform_hlds.term_constr_main.c"
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

#line 1038 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0 = {
  (MR_String) "term_reason_builtin",
  (MR_Integer) 0
};

#line 1044 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1 = {
  (MR_String) "term_reason_pragma_supplied",
  (MR_Integer) 1
};

#line 1050 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2 = {
  (MR_String) "term_reason_foreign_supplied",
  (MR_Integer) 2
};

#line 1056 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3 = {
  (MR_String) "term_reason_import_supplied",
  (MR_Integer) 3
};

#line 1062 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4 = {
  (MR_String) "term_reason_analysis",
  (MR_Integer) 4
};

#line 1068 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4
};

#line 1077 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1
};

#line 1086 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_term_reason_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1095 "transform_hlds.term_constr_main.c"
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

#line 1116 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1124 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1133 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1141 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 1149 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 1157 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
  }
};

#line 1165 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1173 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_main__type_ctor_info_intermod_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_intermod_status_0
  }
};

#line 1181 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

#line 1189 "transform_hlds.term_constr_main.c"
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

#line 1202 "transform_hlds.term_constr_main.c"
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

#line 1215 "transform_hlds.term_constr_main.c"
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

#line 1230 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0[1] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0
};

#line 1235 "transform_hlds.term_constr_main.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_ptag_ordered_termination2_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0
  }
};

#line 1244 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_name_ordered_termination2_info_0[1] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0
};

#line 1249 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_termination2_info_0[1] = {
  (MR_Integer) 0
};

#line 1254 "transform_hlds.term_constr_main.c"
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

#line 1275 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0_10001(
#line 1278 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1280 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1282 "transform_hlds.term_constr_main.c"
{
#line 1284 "transform_hlds.term_constr_main.c"
  {
#line 1286 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1289 "transform_hlds.term_constr_main.c"
    {
#line 1291 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1294 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1296 "transform_hlds.term_constr_main.c"
  }
#line 1298 "transform_hlds.term_constr_main.c"
}

#line 1301 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0_10001(
#line 1304 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1306 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1308 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1310 "transform_hlds.term_constr_main.c"
{
#line 1312 "transform_hlds.term_constr_main.c"
  {
#line 1314 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1317 "transform_hlds.term_constr_main.c"
    {
#line 1319 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1322 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1324 "transform_hlds.term_constr_main.c"
  }
#line 1326 "transform_hlds.term_constr_main.c"
}

#line 1329 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_termination_info_0_0_10001(
#line 1332 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1334 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1336 "transform_hlds.term_constr_main.c"
{
#line 1338 "transform_hlds.term_constr_main.c"
  {
#line 1340 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1343 "transform_hlds.term_constr_main.c"
    {
#line 1345 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____constr_termination_info_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1348 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1350 "transform_hlds.term_constr_main.c"
  }
#line 1352 "transform_hlds.term_constr_main.c"
}

#line 1355 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_termination_info_0_0_10001(
#line 1358 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1360 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1362 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1364 "transform_hlds.term_constr_main.c"
{
#line 1366 "transform_hlds.term_constr_main.c"
  {
#line 1368 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1371 "transform_hlds.term_constr_main.c"
    {
#line 1373 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____constr_termination_info_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1376 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1378 "transform_hlds.term_constr_main.c"
  }
#line 1380 "transform_hlds.term_constr_main.c"
}

#line 1383 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____intermod_status_0_0_10001(
#line 1386 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1388 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1390 "transform_hlds.term_constr_main.c"
{
#line 1392 "transform_hlds.term_constr_main.c"
  {
#line 1394 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1397 "transform_hlds.term_constr_main.c"
    {
#line 1399 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____intermod_status_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1402 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1404 "transform_hlds.term_constr_main.c"
  }
#line 1406 "transform_hlds.term_constr_main.c"
}

#line 1409 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____intermod_status_0_0_10001(
#line 1412 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1414 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1416 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1418 "transform_hlds.term_constr_main.c"
{
#line 1420 "transform_hlds.term_constr_main.c"
  {
#line 1422 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1425 "transform_hlds.term_constr_main.c"
    {
#line 1427 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____intermod_status_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1430 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1432 "transform_hlds.term_constr_main.c"
  }
#line 1434 "transform_hlds.term_constr_main.c"
}

#line 1437 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____term_reason_0_0_10001(
#line 1440 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1442 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1444 "transform_hlds.term_constr_main.c"
{
#line 1446 "transform_hlds.term_constr_main.c"
  {
#line 1448 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1451 "transform_hlds.term_constr_main.c"
    {
#line 1453 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____term_reason_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1456 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1458 "transform_hlds.term_constr_main.c"
  }
#line 1460 "transform_hlds.term_constr_main.c"
}

#line 1463 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____term_reason_0_0_10001(
#line 1466 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1468 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1470 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1472 "transform_hlds.term_constr_main.c"
{
#line 1474 "transform_hlds.term_constr_main.c"
  {
#line 1476 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1479 "transform_hlds.term_constr_main.c"
    {
#line 1481 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____term_reason_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1484 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1486 "transform_hlds.term_constr_main.c"
  }
#line 1488 "transform_hlds.term_constr_main.c"
}

#line 1491 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____termination2_info_0_0_10001(
#line 1494 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1496 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1498 "transform_hlds.term_constr_main.c"
{
#line 1500 "transform_hlds.term_constr_main.c"
  {
#line 1502 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1505 "transform_hlds.term_constr_main.c"
    {
#line 1507 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____termination2_info_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1510 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1512 "transform_hlds.term_constr_main.c"
  }
#line 1514 "transform_hlds.term_constr_main.c"
}

#line 1517 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____termination2_info_0_0_10001(
#line 1520 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1522 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1524 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1526 "transform_hlds.term_constr_main.c"
{
#line 1528 "transform_hlds.term_constr_main.c"
  {
#line 1530 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1533 "transform_hlds.term_constr_main.c"
    {
#line 1535 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____termination2_info_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1538 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1540 "transform_hlds.term_constr_main.c"
  }
#line 1542 "transform_hlds.term_constr_main.c"
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
#line 1867 "transform_hlds.term_constr_main.c"
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
#line 1917 "transform_hlds.term_constr_main.c"
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
#line 1937 "transform_hlds.term_constr_main.c"
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
#line 1957 "transform_hlds.term_constr_main.c"
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
#line 1977 "transform_hlds.term_constr_main.c"
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
#line 1997 "transform_hlds.term_constr_main.c"
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
#line 2017 "transform_hlds.term_constr_main.c"
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
#line 2037 "transform_hlds.term_constr_main.c"
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
#line 2057 "transform_hlds.term_constr_main.c"
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

#line 2180 "transform_hlds.term_constr_main.c"
        {
#line 2182 "transform_hlds.term_constr_main.c"
          transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[2], ((MR_Box) (transform_hlds__term_constr_main__V_3_3)), ((MR_Box) (transform_hlds__term_constr_main__V_12_12)));
        }
#line 237 "term_constr_main.m"
        if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
          {
#line 2189 "transform_hlds.term_constr_main.c"
            transform_hlds__term_constr_main__TypeInfo_24_24 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[4];
#line 2191 "transform_hlds.term_constr_main.c"
            {
#line 2193 "transform_hlds.term_constr_main.c"
              transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_24_24, ((MR_Box) (transform_hlds__term_constr_main__V_4_4)), ((MR_Box) (transform_hlds__term_constr_main__V_13_13)));
            }
#line 237 "term_constr_main.m"
            if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
              {
#line 2200 "transform_hlds.term_constr_main.c"
                transform_hlds__term_constr_main__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6];
#line 2202 "transform_hlds.term_constr_main.c"
                {
#line 2204 "transform_hlds.term_constr_main.c"
                  transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_25_25, ((MR_Box) (transform_hlds__term_constr_main__V_5_5)), ((MR_Box) (transform_hlds__term_constr_main__V_14_14)));
                }
#line 237 "term_constr_main.m"
                if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                  {
#line 2211 "transform_hlds.term_constr_main.c"
                    transform_hlds__term_constr_main__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6];
#line 2213 "transform_hlds.term_constr_main.c"
                    {
#line 2215 "transform_hlds.term_constr_main.c"
                      transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_26_26, ((MR_Box) (transform_hlds__term_constr_main__V_6_6)), ((MR_Box) (transform_hlds__term_constr_main__V_15_15)));
                    }
#line 237 "term_constr_main.m"
                    if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                      {
#line 2222 "transform_hlds.term_constr_main.c"
                        transform_hlds__term_constr_main__TypeInfo_27_27 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7];
#line 2224 "transform_hlds.term_constr_main.c"
                        {
#line 2226 "transform_hlds.term_constr_main.c"
                          transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_27_27, ((MR_Box) (transform_hlds__term_constr_main__V_7_7)), ((MR_Box) (transform_hlds__term_constr_main__V_16_16)));
                        }
#line 237 "term_constr_main.m"
                        if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                          {
#line 2233 "transform_hlds.term_constr_main.c"
                            transform_hlds__term_constr_main__TypeInfo_28_28 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7];
#line 2235 "transform_hlds.term_constr_main.c"
                            {
#line 2237 "transform_hlds.term_constr_main.c"
                              transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_28_28, ((MR_Box) (transform_hlds__term_constr_main__V_8_8)), ((MR_Box) (transform_hlds__term_constr_main__V_17_17)));
                            }
#line 237 "term_constr_main.m"
                            if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                              {
#line 2244 "transform_hlds.term_constr_main.c"
                                transform_hlds__term_constr_main__TypeInfo_29_29 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[8];
#line 2246 "transform_hlds.term_constr_main.c"
                                {
#line 2248 "transform_hlds.term_constr_main.c"
                                  transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_29_29, ((MR_Box) (transform_hlds__term_constr_main__V_9_9)), ((MR_Box) (transform_hlds__term_constr_main__V_18_18)));
                                }
#line 237 "term_constr_main.m"
                                if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                                  {
#line 2255 "transform_hlds.term_constr_main.c"
                                    transform_hlds__term_constr_main__TypeInfo_30_30 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[9];
#line 2257 "transform_hlds.term_constr_main.c"
                                    {
#line 2259 "transform_hlds.term_constr_main.c"
                                      transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_30_30, ((MR_Box) (transform_hlds__term_constr_main__V_10_10)), ((MR_Box) (transform_hlds__term_constr_main__V_19_19)));
                                    }
#line 237 "term_constr_main.m"
                                    if (transform_hlds__term_constr_main__succeeded)
#line 237 "term_constr_main.m"
                                      {
#line 2266 "transform_hlds.term_constr_main.c"
                                        transform_hlds__term_constr_main__TypeInfo_31_31 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[10];
#line 2268 "transform_hlds.term_constr_main.c"
                                        {
#line 2270 "transform_hlds.term_constr_main.c"
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
#line 2339 "transform_hlds.term_constr_main.c"
  {
#line 2341 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__HeadVar__2_1 == transform_hlds__term_constr_main__HeadVar__2_2);

#line 2344 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 2346 "transform_hlds.term_constr_main.c"
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
#line 2392 "transform_hlds.term_constr_main.c"
  {
#line 2394 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__HeadVar__2_1 == transform_hlds__term_constr_main__HeadVar__2_2);

#line 2397 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 2399 "transform_hlds.term_constr_main.c"
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
#line 2986 "transform_hlds.term_constr_main.c"
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
#line 503 "term_constr_main.m"
            {
#line 503 "term_constr_main.m"
              transform_hlds__term_constr_main__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_45_45, 0) = ((MR_Box) (transform_hlds__term_constr_main__OptFileName_21));
#line 503 "term_constr_main.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_45_45, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_46_46));
#line 503 "term_constr_main.m"
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
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_25, (MR_Integer) 426, &transform_hlds__term_constr_main__ArgSizeOnly_26);
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
#line 3843 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__TypeCtorInfo_15_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3845 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__TypeCtorInfo_16_70 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 3847 "transform_hlds.term_constr_main.c"
        if ((transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3849 "transform_hlds.term_constr_main.c"
          {
#line 3851 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__Pass2Result_28;
#line 3853 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47;
#line 3855 "transform_hlds.term_constr_main.c"
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
#line 3906 "transform_hlds.term_constr_main.c"
          }
#line 3908 "transform_hlds.term_constr_main.c"
        else
#line 3910 "transform_hlds.term_constr_main.c"
          {
#line 3912 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__Pass2Result_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeEarlyPass2Result_22, (MR_Integer) 0)));
#line 3914 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__Errors_72;
#line 3916 "transform_hlds.term_constr_main.c"
            MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74;
#line 3918 "transform_hlds.term_constr_main.c"
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
#line 3953 "transform_hlds.term_constr_main.c"
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
#line 4150 "transform_hlds.term_constr_main.c"
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
#line 4164 "transform_hlds.term_constr_main.c"
    transform_hlds__term_constr_main__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 589 "term_constr_main.m"
    {
#line 589 "term_constr_main.m"
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
#line 4219 "transform_hlds.term_constr_main.c"
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
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_8, (MR_Integer) 421, &transform_hlds__term_constr_main__RunningTerm2_9);
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
#line 4396 "transform_hlds.term_constr_main.c"
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
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 427, &transform_hlds__term_constr_main__Fail_10);
    }
#line 294 "term_constr_main.m"
    {
#line 294 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 426, &transform_hlds__term_constr_main__ArgSizeOnly_11);
    }
#line 295 "term_constr_main.m"
    {
#line 295 "term_constr_main.m"
      transform_hlds__term_constr_main__BuildOptions_12 = transform_hlds__term_constr_build__term_build_options_init_3_f_0(transform_hlds__term_constr_main__FunctorInfo_9, transform_hlds__term_constr_main__Fail_10, transform_hlds__term_constr_main__ArgSizeOnly_11);
    }
#line 302 "term_constr_main.m"
    {
#line 302 "term_constr_main.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 428, &transform_hlds__term_constr_main__MaxSize_13);
    }
#line 303 "term_constr_main.m"
    {
#line 303 "term_constr_main.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 425, &transform_hlds__term_constr_main__CutOff_14);
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
