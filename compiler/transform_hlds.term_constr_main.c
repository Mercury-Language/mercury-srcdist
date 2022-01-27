/*
** Automatically generated from `term_constr_main.m'
** by the Mercury compiler,
** version DEV
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
#include "integer.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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




#line 148 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 151 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 154 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 157 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0;

#line 160 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0;

#line 163 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0;

#line 166 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 169 "transform_hlds.term_constr_main.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 172 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 175 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 178 "transform_hlds.term_constr_main.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main__type_ctor_info_term_reason_0__plain_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 181 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 184 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0;

#line 187 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1;

#line 190 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_intermod_status_0[2];

#line 193 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_intermod_status_0[2];

#line 196 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_intermod_status_0[2];

#line 199 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0;

#line 202 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1;

#line 205 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2;

#line 208 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3;

#line 211 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4;

#line 214 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_term_reason_0[5];

#line 217 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_term_reason_0[5];

#line 220 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_term_reason_0[5];

#line 223 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 226 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

#line 229 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 232 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 235 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 238 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0;

#line 241 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 244 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_main__type_ctor_info_intermod_status_0;

#line 247 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

#line 250 "transform_hlds.term_constr_main.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_main__transform_hlds__term_constr_main__field_types_termination2_info_0_0[9];

#line 253 "transform_hlds.term_constr_main.c"
static const MR_ConstString transform_hlds__term_constr_main__transform_hlds__term_constr_main__field_names_termination2_info_0_0[9];

#line 256 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0;

#line 259 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0[1];

#line 262 "transform_hlds.term_constr_main.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_ptag_ordered_termination2_info_0[1];

#line 265 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_name_ordered_termination2_info_0[1];

#line 268 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_termination2_info_0[1];

#line 271 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0_10001(
#line 274 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 276 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 279 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0_10001(
#line 282 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 284 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 286 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 289 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_termination_info_0_0_10001(
#line 292 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 294 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 297 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_termination_info_0_0_10001(
#line 300 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 302 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 304 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 307 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____intermod_status_0_0_10001(
#line 310 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 312 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 315 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____intermod_status_0_0_10001(
#line 318 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 320 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 322 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 325 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____term_reason_0_0_10001(
#line 328 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 330 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 333 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____term_reason_0_0_10001(
#line 336 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 338 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 340 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 343 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____termination2_info_0_0_10001(
#line 346 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 348 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2);

#line 351 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____termination2_info_0_0_10001(
#line 354 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 356 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 358 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3);

#line 542 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_p_0(
#line 542 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 542 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ProcTable_3,
#line 542 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PredOrFunc_4,
#line 542 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SymName_5,
#line 542 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Context_6);

#line 613 "term_constr_main.m"
static MR_String MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__613__1_2_f_0(
#line 613 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__VarToVarIdMap_5,
#line 613 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_20);

#line 611 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__611__1_2_p_0(
#line 611 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_19,
#line 611 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_30);

#line 406 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__406__1_2_p_0(
#line 406 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_45,
#line 406 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_56);

#line 388 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__388__1_2_p_0(
#line 388 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_39,
#line 388 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_52);

#line 660 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(
#line 660 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 660 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 653 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_term_info_2_p_0(
#line 653 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 653 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 644 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_arg_size_info_2_p_0(
#line 644 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 644 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4);

#line 618 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__output_maybe_termination2_info_3_p_0(
#line 618 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeConstrTermInfo_4);

#line 613 "term_constr_main.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_3(
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 611 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_2(
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 611 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_1(
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 600 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0(
#line 600 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__VarToVarIdMap_5,
#line 600 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeArgSizeConstrs_6);

#line 493 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0_1(
#line 493 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 493 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 493 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 493 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 459 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0(
#line 459 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_4);

#line 444 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(
#line 444 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__TerminationInfo_5,
#line 444 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_6,
#line 444 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13,
#line 444 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14);

#line 441 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_7(
#line 441 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 441 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 441 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 441 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 441 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_6(
#line 441 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 441 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 441 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 441 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3);

#line 406 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_5(
#line 406 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 406 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 406 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_4(
#line 406 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 406 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 388 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_3(
#line 388 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 388 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 388 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_2(
#line 388 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 388 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 376 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_1(
#line 376 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 376 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 366 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0(
#line 366 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__DepOrder_10,
#line 366 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__BuildOpts_11,
#line 366 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__FixpointOpts_12,
#line 366 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Pass2Opts_13,
#line 366 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SCC_14,
#line 366 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31,
#line 366 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32);

#line 613 "term_constr_main.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_3(
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 611 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_2(
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 611 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_1(
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1);

#line 320 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__pass_4_p_0_1(
#line 320 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 320 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 320 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 320 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3,
#line 320 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_4,
#line 320 "term_constr_main.m"
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
#include "string.mh"
#include "time.mh"
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
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 953 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_term_reason_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 962 "transform_hlds.term_constr_main.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_constr_termination_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_main____Unify____constr_termination_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main____Compare____constr_termination_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main",
  (MR_String) "constr_termination_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 979 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0 = {
  (MR_String) "not_mutually_recursive",
  (MR_Integer) 0
};

#line 985 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1 = {
  (MR_String) "may_be_mutually_recursive",
  (MR_Integer) 1
};

#line 991 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1
};

#line 997 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_1,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_intermod_status_0_0
};

#line 1003 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_intermod_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1009 "transform_hlds.term_constr_main.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_intermod_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_constr_main____Unify____intermod_status_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main____Compare____intermod_status_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main",
  (MR_String) "intermod_status",
  {     transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_intermod_status_0 },
  {     transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_intermod_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_intermod_status_0
};

#line 1026 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0 = {
  (MR_String) "term_reason_builtin",
  (MR_Integer) 0
};

#line 1032 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1 = {
  (MR_String) "term_reason_pragma_supplied",
  (MR_Integer) 1
};

#line 1038 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2 = {
  (MR_String) "term_reason_foreign_supplied",
  (MR_Integer) 2
};

#line 1044 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3 = {
  (MR_String) "term_reason_import_supplied",
  (MR_Integer) 3
};

#line 1050 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4 = {
  (MR_String) "term_reason_analysis",
  (MR_Integer) 4
};

#line 1056 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4
};

#line 1065 "transform_hlds.term_constr_main.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_4,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_functor_desc_term_reason_0_1
};

#line 1074 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_term_reason_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1083 "transform_hlds.term_constr_main.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_term_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_constr_main____Unify____term_reason_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main____Compare____term_reason_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main",
  (MR_String) "term_reason",
  {     transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_name_ordered_term_reason_0 },
  {     transform_hlds__term_constr_main__transform_hlds__term_constr_main__enum_value_ordered_term_reason_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_term_reason_0
};

#line 1100 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1108 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1117 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1125 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 1133 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 1141 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
  }
};

#line 1149 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1157 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_main__type_ctor_info_intermod_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_intermod_status_0
  }
};

#line 1165 "transform_hlds.term_constr_main.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

#line 1173 "transform_hlds.term_constr_main.c"
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

#line 1186 "transform_hlds.term_constr_main.c"
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

#line 1199 "transform_hlds.term_constr_main.c"
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

#line 1214 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0[1] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0
};

#line 1219 "transform_hlds.term_constr_main.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_ptag_ordered_termination2_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_stag_ordered_termination2_info_0_0
  }
};

#line 1228 "transform_hlds.term_constr_main.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_name_ordered_termination2_info_0[1] = {
  &transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_functor_desc_termination2_info_0_0
};

#line 1233 "transform_hlds.term_constr_main.c"
static const MR_Integer transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_termination2_info_0[1] = {
  (MR_Integer) 0
};

#line 1238 "transform_hlds.term_constr_main.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_termination2_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_main____Unify____termination2_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main____Compare____termination2_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main",
  (MR_String) "termination2_info",
  {     transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_name_ordered_termination2_info_0 },
  {     transform_hlds__term_constr_main__transform_hlds__term_constr_main__du_ptag_ordered_termination2_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_main__transform_hlds__term_constr_main__functor_number_map_termination2_info_0
};

#line 1255 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0_10001(
#line 1258 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1260 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1262 "transform_hlds.term_constr_main.c"
{
#line 1264 "transform_hlds.term_constr_main.c"
  {
#line 1266 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1269 "transform_hlds.term_constr_main.c"
    {
#line 1271 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____constr_arg_size_info_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1274 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1276 "transform_hlds.term_constr_main.c"
  }
#line 1278 "transform_hlds.term_constr_main.c"
}

#line 1281 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0_10001(
#line 1284 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1286 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1288 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1290 "transform_hlds.term_constr_main.c"
{
#line 1292 "transform_hlds.term_constr_main.c"
  {
#line 1294 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1297 "transform_hlds.term_constr_main.c"
    {
#line 1299 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____constr_arg_size_info_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1302 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1304 "transform_hlds.term_constr_main.c"
  }
#line 1306 "transform_hlds.term_constr_main.c"
}

#line 1309 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____constr_termination_info_0_0_10001(
#line 1312 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1314 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1316 "transform_hlds.term_constr_main.c"
{
#line 1318 "transform_hlds.term_constr_main.c"
  {
#line 1320 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1323 "transform_hlds.term_constr_main.c"
    {
#line 1325 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____constr_termination_info_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1328 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1330 "transform_hlds.term_constr_main.c"
  }
#line 1332 "transform_hlds.term_constr_main.c"
}

#line 1335 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____constr_termination_info_0_0_10001(
#line 1338 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1340 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1342 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1344 "transform_hlds.term_constr_main.c"
{
#line 1346 "transform_hlds.term_constr_main.c"
  {
#line 1348 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1351 "transform_hlds.term_constr_main.c"
    {
#line 1353 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____constr_termination_info_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1356 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1358 "transform_hlds.term_constr_main.c"
  }
#line 1360 "transform_hlds.term_constr_main.c"
}

#line 1363 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____intermod_status_0_0_10001(
#line 1366 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1368 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1370 "transform_hlds.term_constr_main.c"
{
#line 1372 "transform_hlds.term_constr_main.c"
  {
#line 1374 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1377 "transform_hlds.term_constr_main.c"
    {
#line 1379 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____intermod_status_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1382 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1384 "transform_hlds.term_constr_main.c"
  }
#line 1386 "transform_hlds.term_constr_main.c"
}

#line 1389 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____intermod_status_0_0_10001(
#line 1392 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1394 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1396 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1398 "transform_hlds.term_constr_main.c"
{
#line 1400 "transform_hlds.term_constr_main.c"
  {
#line 1402 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1405 "transform_hlds.term_constr_main.c"
    {
#line 1407 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____intermod_status_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1410 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1412 "transform_hlds.term_constr_main.c"
  }
#line 1414 "transform_hlds.term_constr_main.c"
}

#line 1417 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____term_reason_0_0_10001(
#line 1420 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1422 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1424 "transform_hlds.term_constr_main.c"
{
#line 1426 "transform_hlds.term_constr_main.c"
  {
#line 1428 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1431 "transform_hlds.term_constr_main.c"
    {
#line 1433 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____term_reason_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1436 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1438 "transform_hlds.term_constr_main.c"
  }
#line 1440 "transform_hlds.term_constr_main.c"
}

#line 1443 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____term_reason_0_0_10001(
#line 1446 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1448 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1450 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1452 "transform_hlds.term_constr_main.c"
{
#line 1454 "transform_hlds.term_constr_main.c"
  {
#line 1456 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1459 "transform_hlds.term_constr_main.c"
    {
#line 1461 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____term_reason_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1464 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1466 "transform_hlds.term_constr_main.c"
  }
#line 1468 "transform_hlds.term_constr_main.c"
}

#line 1471 "transform_hlds.term_constr_main.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____termination2_info_0_0_10001(
#line 1474 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 1476 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2)
#line 1478 "transform_hlds.term_constr_main.c"
{
#line 1480 "transform_hlds.term_constr_main.c"
  {
#line 1482 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 1485 "transform_hlds.term_constr_main.c"
    {
#line 1487 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main____Unify____termination2_info_0_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2));
    }
#line 1490 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 1492 "transform_hlds.term_constr_main.c"
  }
#line 1494 "transform_hlds.term_constr_main.c"
}

#line 1497 "transform_hlds.term_constr_main.c"
static void MR_CALL 
transform_hlds__term_constr_main____Compare____termination2_info_0_0_10001(
#line 1500 "transform_hlds.term_constr_main.c"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_1,
#line 1502 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 1504 "transform_hlds.term_constr_main.c"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_3)
#line 1506 "transform_hlds.term_constr_main.c"
{
#line 1508 "transform_hlds.term_constr_main.c"
  {
#line 1510 "transform_hlds.term_constr_main.c"
    MR_Word transform_hlds__term_constr_main__conv0_HeadVar__1_1;

#line 1513 "transform_hlds.term_constr_main.c"
    {
#line 1515 "transform_hlds.term_constr_main.c"
      transform_hlds__term_constr_main____Compare____termination2_info_0_0(&transform_hlds__term_constr_main__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_3));
    }
#line 1518 "transform_hlds.term_constr_main.c"
    *transform_hlds__term_constr_main__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__1_1));
#line 1520 "transform_hlds.term_constr_main.c"
  }
#line 1522 "transform_hlds.term_constr_main.c"
}

#line 542 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_p_0(
#line 542 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 542 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ProcTable_3,
#line 542 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PredOrFunc_4,
#line 542 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SymName_5,
#line 542 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Context_6)
#line 542 "term_constr_main.m"
{
#line 546 "term_constr_main.m"
  while (MR_TRUE)
#line 546 "term_constr_main.m"
    {
#line 546 "term_constr_main.m"
      /* tailcall optimized into a loop */
#line 546 "term_constr_main.m"
      {
#line 546 "term_constr_main.m"
        MR_bool transform_hlds__term_constr_main__succeeded;

#line 546 "term_constr_main.m"
        if ((transform_hlds__term_constr_main__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "term_constr_main.m"
          {
#line 546 "term_constr_main.m"
          }
#line 546 "term_constr_main.m"
        else
#line 548 "term_constr_main.m"
          {
#line 548 "term_constr_main.m"
            MR_Integer transform_hlds__term_constr_main__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 0)));
#line 548 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ProcIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 1)));
#line 548 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ProcInfo_25;
#line 548 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__TermInfo_26;
#line 548 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__ModeList_27;
#line 548 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__HeadVars_28;
#line 548 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__SizeVarMap_29;
#line 548 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__HeadSizeVars_30;
#line 548 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_33_33;
#line 548 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_52_52;
#line 548 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_53_53;
#line 549 "term_constr_main.m"
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

#line 549 "term_constr_main.m"
            {
#line 549 "term_constr_main.m"
              transform_hlds__term_constr_main__conv0_ProcInfo_25 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__term_constr_main__ProcId_18, transform_hlds__term_constr_main__ProcTable_3);
            }
#line 549 "term_constr_main.m"
            transform_hlds__term_constr_main__ProcInfo_25 = ((MR_Word) transform_hlds__term_constr_main__conv0_ProcInfo_25);
#line 550 "term_constr_main.m"
            {
#line 550 "term_constr_main.m"
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_25, &transform_hlds__term_constr_main__TermInfo_26);
            }
#line 551 "term_constr_main.m"
            {
#line 551 "term_constr_main.m"
              hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(transform_hlds__term_constr_main__ProcInfo_25, &transform_hlds__term_constr_main__ModeList_27);
            }
#line 552 "term_constr_main.m"
            {
#line 552 "term_constr_main.m"
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
#line 554 "term_constr_main.m"
            {
#line 554 "term_constr_main.m"
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
#line 555 "term_constr_main.m"
            {
#line 555 "term_constr_main.m"
              transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0(transform_hlds__term_constr_main__PredOrFunc_4, transform_hlds__term_constr_main__SymName_5, transform_hlds__term_constr_main__ModeList_27, transform_hlds__term_constr_main__Context_6, transform_hlds__term_constr_main__V_33_33, transform_hlds__term_constr_main__V_52_52, transform_hlds__term_constr_main__V_53_53, transform_hlds__term_constr_main__HeadSizeVars_30);
            }
#line 559 "term_constr_main.m"
            /* direct tailcall eliminated */
#line 559 "term_constr_main.m"
            {
#line 559 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__HeadVar__2__tmp_copy_2 = transform_hlds__term_constr_main__ProcIds_19;

#line 559 "term_constr_main.m"
              transform_hlds__term_constr_main__HeadVar__2_2 = transform_hlds__term_constr_main__HeadVar__2__tmp_copy_2;
#line 559 "term_constr_main.m"
            }
#line 559 "term_constr_main.m"
            continue;
#line 548 "term_constr_main.m"
          }
#line 546 "term_constr_main.m"
      }
#line 546 "term_constr_main.m"
      break;
#line 546 "term_constr_main.m"
    }
#line 542 "term_constr_main.m"
}

#line 613 "term_constr_main.m"
static MR_String MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__613__1_2_f_0(
#line 613 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__VarToVarIdMap_5,
#line 613 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_20)
#line 613 "term_constr_main.m"
{
#line 613 "term_constr_main.m"
  {
#line 613 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 613 "term_constr_main.m"
    MR_String transform_hlds__term_constr_main__HeadVar__3_21;
#line 613 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__V_22_22;
#line 613 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv0_V_22_22;

#line 613 "term_constr_main.m"
    {
#line 613 "term_constr_main.m"
      transform_hlds__term_constr_main__conv0_V_22_22 = mercury__map__det_elem_2_f_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_20)), transform_hlds__term_constr_main__VarToVarIdMap_5);
    }
#line 613 "term_constr_main.m"
    transform_hlds__term_constr_main__V_22_22 = ((MR_Integer) transform_hlds__term_constr_main__conv0_V_22_22);
#line 613 "term_constr_main.m"
    {
#line 613 "term_constr_main.m"
      return transform_hlds__term_constr_main__HeadVar__3_21 = mercury__string__int_to_string_1_f_0(transform_hlds__term_constr_main__V_22_22);
    }
#line 613 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__3_21;
#line 613 "term_constr_main.m"
  }
#line 613 "term_constr_main.m"
}

#line 611 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__611__1_2_p_0(
#line 611 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_19,
#line 611 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_30)
#line 611 "term_constr_main.m"
{
#line 611 "term_constr_main.m"
  {
#line 611 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 611 "term_constr_main.m"
    {
#line 611 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, transform_hlds__term_constr_main__HeadVar__1_19, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_30)));
    }
#line 611 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 611 "term_constr_main.m"
  }
#line 611 "term_constr_main.m"
}

#line 406 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__406__1_2_p_0(
#line 406 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_45,
#line 406 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_56)
#line 406 "term_constr_main.m"
{
#line 406 "term_constr_main.m"
  {
#line 406 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 406 "term_constr_main.m"
    {
#line 406 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__HeadVar__1_45, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_56)));
    }
#line 406 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 406 "term_constr_main.m"
  }
#line 406 "term_constr_main.m"
}

#line 388 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__388__1_2_p_0(
#line 388 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_39,
#line 388 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_52)
#line 388 "term_constr_main.m"
{
#line 388 "term_constr_main.m"
  {
#line 388 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 388 "term_constr_main.m"
    {
#line 388 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__HeadVar__1_39, ((MR_Box) (transform_hlds__term_constr_main__HeadVar__2_52)));
    }
#line 388 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 388 "term_constr_main.m"
  }
#line 388 "term_constr_main.m"
}

#line 235 "term_constr_main.m"
void MR_CALL 
transform_hlds__term_constr_main____Compare____termination2_info_0_0(
#line 235 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__HeadVar__1_1,
#line 235 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2,
#line 235 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__3_3)
#line 235 "term_constr_main.m"
{
#line 235 "term_constr_main.m"
  {
#line 235 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 235 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CastX_30 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__2_2;
#line 235 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CastY_31 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__3_3;

#line 235 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__CastX_30 == transform_hlds__term_constr_main__CastY_31);
#line 235 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 1847 "transform_hlds.term_constr_main.c"
      *transform_hlds__term_constr_main__HeadVar__1_1 = (MR_Integer) 0;
#line 235 "term_constr_main.m"
    else
#line 235 "term_constr_main.m"
      {
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 2)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 3)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 4)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 5)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 6)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 7)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 8)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 0)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 1)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 2)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 3)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 4)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 5)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 6)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 7)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__3_3, (MR_Integer) 8)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_22_22;

#line 235 "term_constr_main.m"
        {
#line 235 "term_constr_main.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[2], &transform_hlds__term_constr_main__V_22_22, ((MR_Box) (transform_hlds__term_constr_main__V_4_4)), ((MR_Box) (transform_hlds__term_constr_main__V_13_13)));
        }
#line 1897 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_22_22 == (MR_Integer) 0);
#line 235 "term_constr_main.m"
        transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 235 "term_constr_main.m"
        if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
          *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_22_22;
#line 235 "term_constr_main.m"
        else
#line 235 "term_constr_main.m"
          {
#line 235 "term_constr_main.m"
            MR_Word transform_hlds__term_constr_main__V_23_23;

#line 235 "term_constr_main.m"
            {
#line 235 "term_constr_main.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[4], &transform_hlds__term_constr_main__V_23_23, ((MR_Box) (transform_hlds__term_constr_main__V_5_5)), ((MR_Box) (transform_hlds__term_constr_main__V_14_14)));
            }
#line 1917 "transform_hlds.term_constr_main.c"
            transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_23_23 == (MR_Integer) 0);
#line 235 "term_constr_main.m"
            transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 235 "term_constr_main.m"
            if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
              *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_23_23;
#line 235 "term_constr_main.m"
            else
#line 235 "term_constr_main.m"
              {
#line 235 "term_constr_main.m"
                MR_Word transform_hlds__term_constr_main__V_24_24;

#line 235 "term_constr_main.m"
                {
#line 235 "term_constr_main.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6], &transform_hlds__term_constr_main__V_24_24, ((MR_Box) (transform_hlds__term_constr_main__V_6_6)), ((MR_Box) (transform_hlds__term_constr_main__V_15_15)));
                }
#line 1937 "transform_hlds.term_constr_main.c"
                transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_24_24 == (MR_Integer) 0);
#line 235 "term_constr_main.m"
                transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 235 "term_constr_main.m"
                if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
                  *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_24_24;
#line 235 "term_constr_main.m"
                else
#line 235 "term_constr_main.m"
                  {
#line 235 "term_constr_main.m"
                    MR_Word transform_hlds__term_constr_main__V_25_25;

#line 235 "term_constr_main.m"
                    {
#line 235 "term_constr_main.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6], &transform_hlds__term_constr_main__V_25_25, ((MR_Box) (transform_hlds__term_constr_main__V_7_7)), ((MR_Box) (transform_hlds__term_constr_main__V_16_16)));
                    }
#line 1957 "transform_hlds.term_constr_main.c"
                    transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_25_25 == (MR_Integer) 0);
#line 235 "term_constr_main.m"
                    transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 235 "term_constr_main.m"
                    if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
                      *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_25_25;
#line 235 "term_constr_main.m"
                    else
#line 235 "term_constr_main.m"
                      {
#line 235 "term_constr_main.m"
                        MR_Word transform_hlds__term_constr_main__V_26_26;

#line 235 "term_constr_main.m"
                        {
#line 235 "term_constr_main.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7], &transform_hlds__term_constr_main__V_26_26, ((MR_Box) (transform_hlds__term_constr_main__V_8_8)), ((MR_Box) (transform_hlds__term_constr_main__V_17_17)));
                        }
#line 1977 "transform_hlds.term_constr_main.c"
                        transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_26_26 == (MR_Integer) 0);
#line 235 "term_constr_main.m"
                        transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 235 "term_constr_main.m"
                        if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
                          *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_26_26;
#line 235 "term_constr_main.m"
                        else
#line 235 "term_constr_main.m"
                          {
#line 235 "term_constr_main.m"
                            MR_Word transform_hlds__term_constr_main__V_27_27;

#line 235 "term_constr_main.m"
                            {
#line 235 "term_constr_main.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7], &transform_hlds__term_constr_main__V_27_27, ((MR_Box) (transform_hlds__term_constr_main__V_9_9)), ((MR_Box) (transform_hlds__term_constr_main__V_18_18)));
                            }
#line 1997 "transform_hlds.term_constr_main.c"
                            transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_27_27 == (MR_Integer) 0);
#line 235 "term_constr_main.m"
                            transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 235 "term_constr_main.m"
                            if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
                              *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_27_27;
#line 235 "term_constr_main.m"
                            else
#line 235 "term_constr_main.m"
                              {
#line 235 "term_constr_main.m"
                                MR_Word transform_hlds__term_constr_main__V_28_28;

#line 235 "term_constr_main.m"
                                {
#line 235 "term_constr_main.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[8], &transform_hlds__term_constr_main__V_28_28, ((MR_Box) (transform_hlds__term_constr_main__V_10_10)), ((MR_Box) (transform_hlds__term_constr_main__V_19_19)));
                                }
#line 2017 "transform_hlds.term_constr_main.c"
                                transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_28_28 == (MR_Integer) 0);
#line 235 "term_constr_main.m"
                                transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 235 "term_constr_main.m"
                                if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
                                  *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_28_28;
#line 235 "term_constr_main.m"
                                else
#line 235 "term_constr_main.m"
                                  {
#line 235 "term_constr_main.m"
                                    MR_Word transform_hlds__term_constr_main__V_29_29;

#line 235 "term_constr_main.m"
                                    {
#line 235 "term_constr_main.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[9], &transform_hlds__term_constr_main__V_29_29, ((MR_Box) (transform_hlds__term_constr_main__V_11_11)), ((MR_Box) (transform_hlds__term_constr_main__V_20_20)));
                                    }
#line 2037 "transform_hlds.term_constr_main.c"
                                    transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_29_29 == (MR_Integer) 0);
#line 235 "term_constr_main.m"
                                    transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 235 "term_constr_main.m"
                                    if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
                                      *transform_hlds__term_constr_main__HeadVar__1_1 = transform_hlds__term_constr_main__V_29_29;
#line 235 "term_constr_main.m"
                                    else
#line 235 "term_constr_main.m"
                                      {
#line 235 "term_constr_main.m"
                                        {
#line 235 "term_constr_main.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[10], transform_hlds__term_constr_main__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_main__V_12_12)), ((MR_Box) (transform_hlds__term_constr_main__V_21_21)));
#line 235 "term_constr_main.m"
                                          return;
                                        }
#line 235 "term_constr_main.m"
                                      }
#line 235 "term_constr_main.m"
                                  }
#line 235 "term_constr_main.m"
                              }
#line 235 "term_constr_main.m"
                          }
#line 235 "term_constr_main.m"
                      }
#line 235 "term_constr_main.m"
                  }
#line 235 "term_constr_main.m"
              }
#line 235 "term_constr_main.m"
          }
#line 235 "term_constr_main.m"
      }
#line 235 "term_constr_main.m"
  }
#line 235 "term_constr_main.m"
}

#line 235 "term_constr_main.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main____Unify____termination2_info_0_0(
#line 235 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__1_1,
#line 235 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__HeadVar__2_2)
#line 235 "term_constr_main.m"
{
#line 235 "term_constr_main.m"
  {
#line 235 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 235 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CastX_21 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__1_1;
#line 235 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CastY_22 = (MR_Integer) transform_hlds__term_constr_main__HeadVar__2_2;

#line 235 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__CastX_21 == transform_hlds__term_constr_main__CastY_22);
#line 235 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
      transform_hlds__term_constr_main__succeeded = MR_TRUE;
#line 235 "term_constr_main.m"
    else
#line 235 "term_constr_main.m"
      {
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_24_24;
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_25_25;
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_26_26;
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_27_27;
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_28_28;
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_29_29;
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_30_30;
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeInfo_31_31;
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 0)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 1)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 2)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 3)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 4)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 5)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 6)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 7)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, (MR_Integer) 8)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 2)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 3)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 4)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 5)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 6)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 7)));
#line 235 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__2_2, (MR_Integer) 8)));

#line 2160 "transform_hlds.term_constr_main.c"
        {
#line 2162 "transform_hlds.term_constr_main.c"
          transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[2], ((MR_Box) (transform_hlds__term_constr_main__V_3_3)), ((MR_Box) (transform_hlds__term_constr_main__V_12_12)));
        }
#line 235 "term_constr_main.m"
        if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
          {
#line 2169 "transform_hlds.term_constr_main.c"
            transform_hlds__term_constr_main__TypeInfo_24_24 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[4];
#line 2171 "transform_hlds.term_constr_main.c"
            {
#line 2173 "transform_hlds.term_constr_main.c"
              transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_24_24, ((MR_Box) (transform_hlds__term_constr_main__V_4_4)), ((MR_Box) (transform_hlds__term_constr_main__V_13_13)));
            }
#line 235 "term_constr_main.m"
            if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
              {
#line 2180 "transform_hlds.term_constr_main.c"
                transform_hlds__term_constr_main__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6];
#line 2182 "transform_hlds.term_constr_main.c"
                {
#line 2184 "transform_hlds.term_constr_main.c"
                  transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_25_25, ((MR_Box) (transform_hlds__term_constr_main__V_5_5)), ((MR_Box) (transform_hlds__term_constr_main__V_14_14)));
                }
#line 235 "term_constr_main.m"
                if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
                  {
#line 2191 "transform_hlds.term_constr_main.c"
                    transform_hlds__term_constr_main__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[6];
#line 2193 "transform_hlds.term_constr_main.c"
                    {
#line 2195 "transform_hlds.term_constr_main.c"
                      transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_26_26, ((MR_Box) (transform_hlds__term_constr_main__V_6_6)), ((MR_Box) (transform_hlds__term_constr_main__V_15_15)));
                    }
#line 235 "term_constr_main.m"
                    if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
                      {
#line 2202 "transform_hlds.term_constr_main.c"
                        transform_hlds__term_constr_main__TypeInfo_27_27 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7];
#line 2204 "transform_hlds.term_constr_main.c"
                        {
#line 2206 "transform_hlds.term_constr_main.c"
                          transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_27_27, ((MR_Box) (transform_hlds__term_constr_main__V_7_7)), ((MR_Box) (transform_hlds__term_constr_main__V_16_16)));
                        }
#line 235 "term_constr_main.m"
                        if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
                          {
#line 2213 "transform_hlds.term_constr_main.c"
                            transform_hlds__term_constr_main__TypeInfo_28_28 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[7];
#line 2215 "transform_hlds.term_constr_main.c"
                            {
#line 2217 "transform_hlds.term_constr_main.c"
                              transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_28_28, ((MR_Box) (transform_hlds__term_constr_main__V_8_8)), ((MR_Box) (transform_hlds__term_constr_main__V_17_17)));
                            }
#line 235 "term_constr_main.m"
                            if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
                              {
#line 2224 "transform_hlds.term_constr_main.c"
                                transform_hlds__term_constr_main__TypeInfo_29_29 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[8];
#line 2226 "transform_hlds.term_constr_main.c"
                                {
#line 2228 "transform_hlds.term_constr_main.c"
                                  transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_29_29, ((MR_Box) (transform_hlds__term_constr_main__V_9_9)), ((MR_Box) (transform_hlds__term_constr_main__V_18_18)));
                                }
#line 235 "term_constr_main.m"
                                if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
                                  {
#line 2235 "transform_hlds.term_constr_main.c"
                                    transform_hlds__term_constr_main__TypeInfo_30_30 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[9];
#line 2237 "transform_hlds.term_constr_main.c"
                                    {
#line 2239 "transform_hlds.term_constr_main.c"
                                      transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_30_30, ((MR_Box) (transform_hlds__term_constr_main__V_10_10)), ((MR_Box) (transform_hlds__term_constr_main__V_19_19)));
                                    }
#line 235 "term_constr_main.m"
                                    if (transform_hlds__term_constr_main__succeeded)
#line 235 "term_constr_main.m"
                                      {
#line 2246 "transform_hlds.term_constr_main.c"
                                        transform_hlds__term_constr_main__TypeInfo_31_31 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[10];
#line 2248 "transform_hlds.term_constr_main.c"
                                        {
#line 2250 "transform_hlds.term_constr_main.c"
                                          return transform_hlds__term_constr_main__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main__TypeInfo_31_31, ((MR_Box) (transform_hlds__term_constr_main__V_11_11)), ((MR_Box) (transform_hlds__term_constr_main__V_20_20)));
                                        }
#line 235 "term_constr_main.m"
                                      }
#line 235 "term_constr_main.m"
                                  }
#line 235 "term_constr_main.m"
                              }
#line 235 "term_constr_main.m"
                          }
#line 235 "term_constr_main.m"
                      }
#line 235 "term_constr_main.m"
                  }
#line 235 "term_constr_main.m"
              }
#line 235 "term_constr_main.m"
          }
#line 235 "term_constr_main.m"
      }
#line 235 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 235 "term_constr_main.m"
  }
#line 235 "term_constr_main.m"
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
#line 2319 "transform_hlds.term_constr_main.c"
  {
#line 2321 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__HeadVar__2_1 == transform_hlds__term_constr_main__HeadVar__2_2);

#line 2324 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 2326 "transform_hlds.term_constr_main.c"
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
#line 2372 "transform_hlds.term_constr_main.c"
  {
#line 2374 "transform_hlds.term_constr_main.c"
    MR_bool transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__HeadVar__2_1 == transform_hlds__term_constr_main__HeadVar__2_2);

#line 2377 "transform_hlds.term_constr_main.c"
    return transform_hlds__term_constr_main__succeeded;
#line 2379 "transform_hlds.term_constr_main.c"
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

#line 660 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(
#line 660 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 660 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 660 "term_constr_main.m"
{
#line 662 "term_constr_main.m"
  {
#line 662 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 662 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 662 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 663 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_5_5;

#line 663 "term_constr_main.m"
    {
#line 663 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 664 "term_constr_main.m"
    {
#line 664 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo_6, &transform_hlds__term_constr_main__TermInfo_7);
    }
#line 666 "term_constr_main.m"
    {
#line 666 "term_constr_main.m"
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

#line 666 "term_constr_main.m"
      transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "term_constr_main.m"
    }
#line 667 "term_constr_main.m"
    if (!(transform_hlds__term_constr_main__succeeded))
#line 668 "term_constr_main.m"
      {
#line 668 "term_constr_main.m"
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

#line 668 "term_constr_main.m"
        transform_hlds__term_constr_main__succeeded = (transform_hlds__term_constr_main__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "term_constr_main.m"
      }
#line 662 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 662 "term_constr_main.m"
  }
#line 660 "term_constr_main.m"
}

#line 653 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_term_info_2_p_0(
#line 653 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 653 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 653 "term_constr_main.m"
{
#line 655 "term_constr_main.m"
  {
#line 655 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 655 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 655 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 655 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9;
#line 656 "term_constr_main.m"
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
#line 658 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8;

#line 656 "term_constr_main.m"
    {
#line 656 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 657 "term_constr_main.m"
    {
#line 657 "term_constr_main.m"
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
#line 658 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_main__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 658 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 658 "term_constr_main.m"
      transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_9_9, (MR_Integer) 0)));
#line 655 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 655 "term_constr_main.m"
  }
#line 653 "term_constr_main.m"
}

#line 644 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_arg_size_info_2_p_0(
#line 644 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_3,
#line 644 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_4)
#line 644 "term_constr_main.m"
{
#line 646 "term_constr_main.m"
  {
#line 646 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 646 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_6;
#line 646 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_7;
#line 646 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_9_9;
#line 647 "term_constr_main.m"
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
#line 649 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_8_8;

#line 647 "term_constr_main.m"
    {
#line 647 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__ModuleInfo_3, transform_hlds__term_constr_main__PPId_4, &transform_hlds__term_constr_main__V_5_5, &transform_hlds__term_constr_main__ProcInfo_6);
    }
#line 648 "term_constr_main.m"
    {
#line 648 "term_constr_main.m"
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
#line 649 "term_constr_main.m"
    transform_hlds__term_constr_main__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_main__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 649 "term_constr_main.m"
    if (transform_hlds__term_constr_main__succeeded)
#line 649 "term_constr_main.m"
      transform_hlds__term_constr_main__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_9_9, (MR_Integer) 0)));
#line 646 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 646 "term_constr_main.m"
  }
#line 644 "term_constr_main.m"
}

#line 618 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__output_maybe_termination2_info_3_p_0(
#line 618 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeConstrTermInfo_4)
#line 618 "term_constr_main.m"
{
#line 623 "term_constr_main.m"
  {
#line 623 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 623 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__MaybeConstrTermInfo_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "term_constr_main.m"
      {
#line 624 "term_constr_main.m"
        {
#line 624 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
#line 624 "term_constr_main.m"
          return;
        }
#line 623 "term_constr_main.m"
      }
#line 623 "term_constr_main.m"
    else
#line 623 "term_constr_main.m"
      {
#line 623 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeConstrTermInfo_4, (MR_Integer) 0)));

#line 623 "term_constr_main.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_main__V_18_18)) == (MR_mktag((MR_Integer) 1))))
#line 629 "term_constr_main.m"
          {
#line 630 "term_constr_main.m"
            {
#line 630 "term_constr_main.m"
              mercury__io__write_string_3_p_0((MR_String) "can_loop");
#line 630 "term_constr_main.m"
              return;
            }
#line 629 "term_constr_main.m"
          }
#line 623 "term_constr_main.m"
        else
#line 626 "term_constr_main.m"
          {
#line 627 "term_constr_main.m"
            {
#line 627 "term_constr_main.m"
              mercury__io__write_string_3_p_0((MR_String) "cannot_loop");
#line 627 "term_constr_main.m"
              return;
            }
#line 626 "term_constr_main.m"
          }
#line 623 "term_constr_main.m"
      }
#line 623 "term_constr_main.m"
  }
#line 618 "term_constr_main.m"
}

#line 613 "term_constr_main.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_3(
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 613 "term_constr_main.m"
{
#line 613 "term_constr_main.m"
  {
#line 613 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__wrapper_arg_2;
#line 613 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 613 "term_constr_main.m"
    MR_String transform_hlds__term_constr_main__conv0_HeadVar__3_21;

#line 613 "term_constr_main.m"
    {
#line 613 "term_constr_main.m"
      transform_hlds__term_constr_main__conv0_HeadVar__3_21 = transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__613__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 613 "term_constr_main.m"
    transform_hlds__term_constr_main__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_main__conv0_HeadVar__3_21));
#line 613 "term_constr_main.m"
    return transform_hlds__term_constr_main__wrapper_arg_2;
#line 613 "term_constr_main.m"
  }
#line 613 "term_constr_main.m"
}

#line 611 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_2(
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 611 "term_constr_main.m"
{
#line 611 "term_constr_main.m"
  {
#line 611 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 611 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 611 "term_constr_main.m"
    {
#line 611 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__611__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 611 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 611 "term_constr_main.m"
  }
#line 611 "term_constr_main.m"
}

#line 611 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_1(
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 611 "term_constr_main.m"
{
#line 611 "term_constr_main.m"
  {
#line 611 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 611 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 611 "term_constr_main.m"
    {
#line 611 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 611 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 611 "term_constr_main.m"
  }
#line 611 "term_constr_main.m"
}

#line 600 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0(
#line 600 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__VarToVarIdMap_5,
#line 600 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__MaybeArgSizeConstrs_6)
#line 600 "term_constr_main.m"
{
#line 605 "term_constr_main.m"
  {
#line 605 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;

#line 605 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__MaybeArgSizeConstrs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "term_constr_main.m"
      {
#line 606 "term_constr_main.m"
        {
#line 606 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
#line 606 "term_constr_main.m"
          return;
        }
#line 605 "term_constr_main.m"
      }
#line 605 "term_constr_main.m"
    else
#line 608 "term_constr_main.m"
      {
#line 608 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeCtorInfo_29_29;
#line 608 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Polyhedron_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeArgSizeConstrs_6, (MR_Integer) 0)));
#line 608 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints0_9;
#line 608 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints1_10;
#line 608 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints_11;
#line 608 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__OutputVar_12;

#line 609 "term_constr_main.m"
        {
#line 609 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "constraints(");
        }
#line 610 "term_constr_main.m"
        {
#line 610 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints0_9 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_main__Polyhedron_8);
        }
#line 2966 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__TypeCtorInfo_29_29 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 611 "term_constr_main.m"
        {
#line 611 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints1_10 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_29_29, (MR_Word) &transform_hlds__term_constr_main_scalar_common_4[2], transform_hlds__term_constr_main__Constraints0_9);
        }
#line 612 "term_constr_main.m"
        {
#line 612 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints_11 = mercury__list__sort_1_f_0(transform_hlds__term_constr_main__TypeCtorInfo_29_29, transform_hlds__term_constr_main__Constraints1_10);
        }
#line 613 "term_constr_main.m"
        {
#line 613 "term_constr_main.m"
          transform_hlds__term_constr_main__OutputVar_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 613 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_12, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_6[0]));
#line 613 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_12, 1) = ((MR_Box) (transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0_3));
#line 613 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 613 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_12, 3) = ((MR_Box) (transform_hlds__term_constr_main__VarToVarIdMap_5));
#line 613 "term_constr_main.m"
        }
#line 614 "term_constr_main.m"
        {
#line 614 "term_constr_main.m"
          libs__lp_rational__output_constraints_4_p_0(transform_hlds__term_constr_main__OutputVar_12, transform_hlds__term_constr_main__Constraints_11);
        }
#line 615 "term_constr_main.m"
        {
#line 615 "term_constr_main.m"
          mercury__io__write_char_3_p_0((MR_Char) 41);
#line 615 "term_constr_main.m"
          return;
        }
#line 608 "term_constr_main.m"
      }
#line 605 "term_constr_main.m"
  }
#line 600 "term_constr_main.m"
}

#line 493 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0_1(
#line 493 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 493 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 493 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 493 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 493 "term_constr_main.m"
{
#line 493 "term_constr_main.m"
  {
#line 493 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 493 "term_constr_main.m"
    {
#line 493 "term_constr_main.m"
      transform_hlds__term_constr_main__output_pred_termination2_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
#line 493 "term_constr_main.m"
      return;
    }
#line 493 "term_constr_main.m"
  }
#line 493 "term_constr_main.m"
}

#line 459 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0(
#line 459 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__ModuleInfo_4)
#line 459 "term_constr_main.m"
{
#line 462 "term_constr_main.m"
  {
#line 462 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 462 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_6;
#line 462 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__MakeOptInt_7;

#line 464 "term_constr_main.m"
    {
#line 464 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__ModuleInfo_4, &transform_hlds__term_constr_main__Globals_6);
    }
#line 465 "term_constr_main.m"
    {
#line 465 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_6, (MR_Integer) 87, &transform_hlds__term_constr_main__MakeOptInt_7);
    }
#line 471 "term_constr_main.m"
#line 471 "term_constr_main.m"
    switch (transform_hlds__term_constr_main__MakeOptInt_7) {
#line 471 "term_constr_main.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 471 "term_constr_main.m"
      case (MR_Integer) 0:
#line 472 "term_constr_main.m"
        {
#line 472 "term_constr_main.m"
        }
#line 471 "term_constr_main.m"
        break;
#line 471 "term_constr_main.m"
      case (MR_Integer) 1:
#line 468 "term_constr_main.m"
        {
#line 468 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__PredIds_8;
#line 468 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__Globals_18;
#line 468 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__ModuleName_19;
#line 468 "term_constr_main.m"
          MR_String transform_hlds__term_constr_main__OptFileName_20;
#line 468 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__Verbose_21;
#line 468 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__OptFileRes_22;

#line 469 "term_constr_main.m"
          {
#line 469 "term_constr_main.m"
            hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__term_constr_main__ModuleInfo_4, &transform_hlds__term_constr_main__PredIds_8);
          }
#line 479 "term_constr_main.m"
          {
#line 479 "term_constr_main.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__ModuleInfo_4, &transform_hlds__term_constr_main__Globals_18);
          }
#line 480 "term_constr_main.m"
          {
#line 480 "term_constr_main.m"
            hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__term_constr_main__ModuleInfo_4, &transform_hlds__term_constr_main__ModuleName_19);
          }
#line 481 "term_constr_main.m"
          {
#line 481 "term_constr_main.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__term_constr_main__Globals_18, transform_hlds__term_constr_main__ModuleName_19, (MR_String) ".opt.tmp", (MR_Integer) 1, &transform_hlds__term_constr_main__OptFileName_20);
          }
#line 483 "term_constr_main.m"
          {
#line 483 "term_constr_main.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_18, (MR_Integer) 45, &transform_hlds__term_constr_main__Verbose_21);
          }
#line 484 "term_constr_main.m"
          {
#line 484 "term_constr_main.m"
            libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_21, (MR_String) "% Appending termination2_info pragmas to \140");
          }
#line 486 "term_constr_main.m"
          {
#line 486 "term_constr_main.m"
            libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_21, transform_hlds__term_constr_main__OptFileName_20);
          }
#line 487 "term_constr_main.m"
          {
#line 487 "term_constr_main.m"
            libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_21, (MR_String) "\'...");
          }
#line 488 "term_constr_main.m"
          {
#line 488 "term_constr_main.m"
            libs__file_util__maybe_flush_output_3_p_0(transform_hlds__term_constr_main__Verbose_21);
          }
#line 489 "term_constr_main.m"
          {
#line 489 "term_constr_main.m"
            mercury__io__open_append_4_p_0(transform_hlds__term_constr_main__OptFileName_20, &transform_hlds__term_constr_main__OptFileRes_22);
          }
#line 497 "term_constr_main.m"
          if (((MR_tag((MR_Word) transform_hlds__term_constr_main__OptFileRes_22)) == (MR_mktag((MR_Integer) 1))))
#line 498 "term_constr_main.m"
            {
#line 498 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__IOError_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__OptFileRes_22, (MR_Integer) 0)));
#line 498 "term_constr_main.m"
              MR_String transform_hlds__term_constr_main__IOErrorMessage_27;
#line 498 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__V_41_41;
#line 498 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__V_44_44;
#line 498 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__V_45_45;
#line 498 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__V_47_47;

#line 499 "term_constr_main.m"
              {
#line 499 "term_constr_main.m"
                libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_21, (MR_String) " failed!\n");
              }
#line 500 "term_constr_main.m"
              {
#line 500 "term_constr_main.m"
                mercury__io__error_message_2_p_0(transform_hlds__term_constr_main__IOError_26, &transform_hlds__term_constr_main__IOErrorMessage_27);
              }
#line 502 "term_constr_main.m"
              {
#line 502 "term_constr_main.m"
                transform_hlds__term_constr_main__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "term_constr_main.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_47_47, 0) = ((MR_Box) (transform_hlds__term_constr_main__IOErrorMessage_27));
#line 502 "term_constr_main.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "term_constr_main.m"
              }
#line 502 "term_constr_main.m"
              {
#line 502 "term_constr_main.m"
                transform_hlds__term_constr_main__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "term_constr_main.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_45_45, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 502 "term_constr_main.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_45_45, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_47_47));
#line 502 "term_constr_main.m"
              }
#line 502 "term_constr_main.m"
              {
#line 502 "term_constr_main.m"
                transform_hlds__term_constr_main__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "term_constr_main.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_44_44, 0) = ((MR_Box) (transform_hlds__term_constr_main__OptFileName_20));
#line 502 "term_constr_main.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_44_44, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_45_45));
#line 502 "term_constr_main.m"
              }
#line 501 "term_constr_main.m"
              {
#line 501 "term_constr_main.m"
                transform_hlds__term_constr_main__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "term_constr_main.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_41_41, 0) = ((MR_Box) ((MR_String) "Error opening file \140"));
#line 501 "term_constr_main.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_41_41, 1) = ((MR_Box) (transform_hlds__term_constr_main__V_44_44));
#line 501 "term_constr_main.m"
              }
#line 501 "term_constr_main.m"
              {
#line 501 "term_constr_main.m"
                mercury__io__write_strings_3_p_0(transform_hlds__term_constr_main__V_41_41);
              }
#line 503 "term_constr_main.m"
              {
#line 503 "term_constr_main.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 503 "term_constr_main.m"
                return;
              }
#line 498 "term_constr_main.m"
            }
#line 497 "term_constr_main.m"
          else
#line 491 "term_constr_main.m"
            {
#line 491 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__OptFile_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OptFileRes_22, (MR_Integer) 0)));
#line 491 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__OldStream_24;
#line 491 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__V_52_52;
#line 493 "term_constr_main.m"
              MR_Box transform_hlds__term_constr_main__conv0_STATE_VARIABLE_IO_45_53;
#line 494 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__V_25_25;

#line 492 "term_constr_main.m"
              {
#line 492 "term_constr_main.m"
                mercury__io__set_output_stream_4_p_0(transform_hlds__term_constr_main__OptFile_23, &transform_hlds__term_constr_main__OldStream_24);
              }
#line 493 "term_constr_main.m"
              {
#line 493 "term_constr_main.m"
                transform_hlds__term_constr_main__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 493 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_52_52, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_7[1]));
#line 493 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_52_52, 1) = ((MR_Box) (transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0_1));
#line 493 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 493 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_52_52, 3) = ((MR_Box) (transform_hlds__term_constr_main__ModuleInfo_4));
#line 493 "term_constr_main.m"
              }
#line 493 "term_constr_main.m"
              {
#line 493 "term_constr_main.m"
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_main__V_52_52, transform_hlds__term_constr_main__PredIds_8, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_IO_45_53);
              }
#line 494 "term_constr_main.m"
              {
#line 494 "term_constr_main.m"
                mercury__io__set_output_stream_4_p_0(transform_hlds__term_constr_main__OldStream_24, &transform_hlds__term_constr_main__V_25_25);
              }
#line 495 "term_constr_main.m"
              {
#line 495 "term_constr_main.m"
                mercury__io__close_output_3_p_0(transform_hlds__term_constr_main__OptFile_23);
              }
#line 496 "term_constr_main.m"
              {
#line 496 "term_constr_main.m"
                libs__file_util__maybe_write_string_4_p_0(transform_hlds__term_constr_main__Verbose_21, (MR_String) " done.\n");
#line 496 "term_constr_main.m"
                return;
              }
#line 491 "term_constr_main.m"
            }
#line 468 "term_constr_main.m"
        }
#line 471 "term_constr_main.m"
        break;
#line 471 "term_constr_main.m"
    }
#line 462 "term_constr_main.m"
  }
#line 459 "term_constr_main.m"
}

#line 444 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(
#line 444 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__TerminationInfo_5,
#line 444 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__PPId_6,
#line 444 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13,
#line 444 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14)
#line 444 "term_constr_main.m"
{
#line 447 "term_constr_main.m"
  {
#line 447 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 447 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__PredInfo_8;
#line 447 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo0_9;
#line 447 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo0_10;
#line 447 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TermInfo_11;
#line 447 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ProcInfo_12;
#line 447 "term_constr_main.m"
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

#line 448 "term_constr_main.m"
    {
#line 448 "term_constr_main.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__term_constr_main__PPId_6, &transform_hlds__term_constr_main__PredInfo_8, &transform_hlds__term_constr_main__ProcInfo0_9);
    }
#line 449 "term_constr_main.m"
    {
#line 449 "term_constr_main.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_main__ProcInfo0_9, &transform_hlds__term_constr_main__TermInfo0_10);
    }
#line 450 "term_constr_main.m"
    {
#line 450 "term_constr_main.m"
      transform_hlds__term_constr_main__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 450 "term_constr_main.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_15_15, 0) = ((MR_Box) (transform_hlds__term_constr_main__TerminationInfo_5));
#line 450 "term_constr_main.m"
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
#line 451 "term_constr_main.m"
    {
#line 451 "term_constr_main.m"
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_main__TermInfo_11, transform_hlds__term_constr_main__ProcInfo0_9, &transform_hlds__term_constr_main__ProcInfo_12);
    }
#line 452 "term_constr_main.m"
    {
#line 452 "term_constr_main.m"
      hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(transform_hlds__term_constr_main__PPId_6, transform_hlds__term_constr_main__PredInfo_8, transform_hlds__term_constr_main__ProcInfo_12, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_13, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_14);
#line 452 "term_constr_main.m"
      return;
    }
#line 447 "term_constr_main.m"
  }
#line 444 "term_constr_main.m"
}

#line 441 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_7(
#line 441 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 441 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 441 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 441 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 441 "term_constr_main.m"
{
#line 441 "term_constr_main.m"
  {
#line 441 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 441 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14;

#line 441 "term_constr_main.m"
    {
#line 441 "term_constr_main.m"
      transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14);
    }
#line 441 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_14));
#line 441 "term_constr_main.m"
  }
#line 441 "term_constr_main.m"
}

#line 441 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_6(
#line 441 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 441 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 441 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 441 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3)
#line 441 "term_constr_main.m"
{
#line 441 "term_constr_main.m"
  {
#line 441 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 441 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14;

#line 441 "term_constr_main.m"
    {
#line 441 "term_constr_main.m"
      transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14);
    }
#line 441 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_14));
#line 441 "term_constr_main.m"
  }
#line 441 "term_constr_main.m"
}

#line 406 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_5(
#line 406 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 406 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 406 "term_constr_main.m"
{
#line 406 "term_constr_main.m"
  {
#line 406 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 406 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 406 "term_constr_main.m"
    {
#line 406 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__406__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 406 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 406 "term_constr_main.m"
  }
#line 406 "term_constr_main.m"
}

#line 406 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_4(
#line 406 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 406 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 406 "term_constr_main.m"
{
#line 406 "term_constr_main.m"
  {
#line 406 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 406 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 406 "term_constr_main.m"
    {
#line 406 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__has_term_info_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 406 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 406 "term_constr_main.m"
  }
#line 406 "term_constr_main.m"
}

#line 388 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_3(
#line 388 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 388 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 388 "term_constr_main.m"
{
#line 388 "term_constr_main.m"
  {
#line 388 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 388 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 388 "term_constr_main.m"
    {
#line 388 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__analyse_scc__388__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 388 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 388 "term_constr_main.m"
  }
#line 388 "term_constr_main.m"
}

#line 388 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_2(
#line 388 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 388 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 388 "term_constr_main.m"
{
#line 388 "term_constr_main.m"
  {
#line 388 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 388 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 388 "term_constr_main.m"
    {
#line 388 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__has_arg_size_info_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 388 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 388 "term_constr_main.m"
  }
#line 388 "term_constr_main.m"
}

#line 376 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0_1(
#line 376 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 376 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 376 "term_constr_main.m"
{
#line 376 "term_constr_main.m"
  {
#line 376 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 376 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 376 "term_constr_main.m"
    {
#line 376 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 376 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 376 "term_constr_main.m"
  }
#line 376 "term_constr_main.m"
}

#line 366 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__analyse_scc_9_p_0(
#line 366 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__DepOrder_10,
#line 366 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__BuildOpts_11,
#line 366 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__FixpointOpts_12,
#line 366 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__Pass2Opts_13,
#line 366 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__SCC_14,
#line 366 "term_constr_main.m"
  MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31,
#line 366 "term_constr_main.m"
  MR_Word * transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32)
#line 366 "term_constr_main.m"
{
#line 372 "term_constr_main.m"
  {
#line 372 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__NeedsAR_17;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__BuildErrors_18;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__NeedsArgSize_19;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FixpointErrors_20;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Pass1Errors_21;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__MaybeEarlyPass2Result_22;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_25;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ArgSizeOnly_26;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_35_35;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_38_38;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_39_39;
#line 372 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41;

#line 376 "term_constr_main.m"
    {
#line 376 "term_constr_main.m"
      transform_hlds__term_constr_main__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 376 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[1]));
#line 376 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_1));
#line 376 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 376 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_35_35, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31));
#line 376 "term_constr_main.m"
    }
#line 376 "term_constr_main.m"
    {
#line 376 "term_constr_main.m"
      transform_hlds__term_constr_main__NeedsAR_17 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_50_50, transform_hlds__term_constr_main__V_35_35, transform_hlds__term_constr_main__SCC_14);
    }
#line 381 "term_constr_main.m"
    {
#line 381 "term_constr_main.m"
      transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0(transform_hlds__term_constr_main__DepOrder_10, transform_hlds__term_constr_main__NeedsAR_17, transform_hlds__term_constr_main__BuildOpts_11, &transform_hlds__term_constr_main__BuildErrors_18, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36);
    }
#line 388 "term_constr_main.m"
    {
#line 388 "term_constr_main.m"
      transform_hlds__term_constr_main__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 388 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[1]));
#line 388 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_2));
#line 388 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 388 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_39_39, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36));
#line 388 "term_constr_main.m"
    }
#line 388 "term_constr_main.m"
    {
#line 388 "term_constr_main.m"
      transform_hlds__term_constr_main__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 388 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[2]));
#line 388 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_3));
#line 388 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 388 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_38_38, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_39_39));
#line 388 "term_constr_main.m"
    }
#line 388 "term_constr_main.m"
    {
#line 388 "term_constr_main.m"
      transform_hlds__term_constr_main__NeedsArgSize_19 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_50_50, transform_hlds__term_constr_main__V_38_38, transform_hlds__term_constr_main__NeedsAR_17);
    }
#line 389 "term_constr_main.m"
    {
#line 389 "term_constr_main.m"
      transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(transform_hlds__term_constr_main__FixpointOpts_12, transform_hlds__term_constr_main__NeedsArgSize_19, (MR_Integer) 1, &transform_hlds__term_constr_main__FixpointErrors_20, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_36_36, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41);
    }
#line 394 "term_constr_main.m"
    {
#line 394 "term_constr_main.m"
      transform_hlds__term_constr_main__Pass1Errors_21 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_2[0], transform_hlds__term_constr_main__BuildErrors_18, transform_hlds__term_constr_main__FixpointErrors_20);
    }
#line 398 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__Pass1Errors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "term_constr_main.m"
      transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "term_constr_main.m"
    else
#line 399 "term_constr_main.m"
      {
#line 399 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__V_42_42;

#line 400 "term_constr_main.m"
        {
#line 400 "term_constr_main.m"
          transform_hlds__term_constr_main__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "term_constr_main.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__V_42_42, 0) = ((MR_Box) (transform_hlds__term_constr_main__Pass1Errors_21));
#line 400 "term_constr_main.m"
        }
#line 400 "term_constr_main.m"
        {
#line 400 "term_constr_main.m"
          transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "term_constr_main.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeEarlyPass2Result_22, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_42_42));
#line 400 "term_constr_main.m"
        }
#line 399 "term_constr_main.m"
      }
#line 402 "term_constr_main.m"
    {
#line 402 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__term_constr_main__Globals_25);
    }
#line 403 "term_constr_main.m"
    {
#line 403 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_25, (MR_Integer) 429, &transform_hlds__term_constr_main__ArgSizeOnly_26);
    }
#line 428 "term_constr_main.m"
#line 428 "term_constr_main.m"
    switch (transform_hlds__term_constr_main__ArgSizeOnly_26) {
#line 428 "term_constr_main.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 428 "term_constr_main.m"
      case (MR_Integer) 0:
#line 405 "term_constr_main.m"
        {
#line 405 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__TypeCtorInfo_15_69;
#line 405 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__TypeCtorInfo_16_70;
#line 405 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__NeedsTerm_27;
#line 405 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__V_44_44;
#line 405 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__V_45_45;

#line 406 "term_constr_main.m"
          {
#line 406 "term_constr_main.m"
            transform_hlds__term_constr_main__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 406 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[1]));
#line 406 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_4));
#line 406 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 406 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_45_45, 3) = ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41));
#line 406 "term_constr_main.m"
          }
#line 406 "term_constr_main.m"
          {
#line 406 "term_constr_main.m"
            transform_hlds__term_constr_main__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 406 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_5[2]));
#line 406 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_5));
#line 406 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 406 "term_constr_main.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_44_44, 3) = ((MR_Box) (transform_hlds__term_constr_main__V_45_45));
#line 406 "term_constr_main.m"
          }
#line 406 "term_constr_main.m"
          {
#line 406 "term_constr_main.m"
            transform_hlds__term_constr_main__NeedsTerm_27 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_50_50, transform_hlds__term_constr_main__V_44_44, transform_hlds__term_constr_main__NeedsAR_17);
          }
#line 3837 "transform_hlds.term_constr_main.c"
          transform_hlds__term_constr_main__TypeCtorInfo_15_69 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3839 "transform_hlds.term_constr_main.c"
          transform_hlds__term_constr_main__TypeCtorInfo_16_70 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 3841 "transform_hlds.term_constr_main.c"
          if ((transform_hlds__term_constr_main__MaybeEarlyPass2Result_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3843 "transform_hlds.term_constr_main.c"
            {
#line 3845 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__Pass2Result_28;
#line 3847 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47;
#line 3849 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__V_64_64;
#line 441 "term_constr_main.m"
              MR_Box transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_47_47;

#line 415 "term_constr_main.m"
              {
#line 415 "term_constr_main.m"
                transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0(transform_hlds__term_constr_main__Pass2Opts_13, transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41, &transform_hlds__term_constr_main__Pass2Result_28);
              }
#line 441 "term_constr_main.m"
              {
#line 441 "term_constr_main.m"
                transform_hlds__term_constr_main__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 441 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_7[0]));
#line 441 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_6));
#line 441 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 441 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_64_64, 3) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Result_28));
#line 441 "term_constr_main.m"
              }
#line 441 "term_constr_main.m"
              {
#line 441 "term_constr_main.m"
                mercury__list__foldl_4_p_0(transform_hlds__term_constr_main__TypeCtorInfo_15_69, transform_hlds__term_constr_main__TypeCtorInfo_16_70, transform_hlds__term_constr_main__V_64_64, transform_hlds__term_constr_main__NeedsTerm_27, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41)), &transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_47_47);
              }
#line 441 "term_constr_main.m"
              transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47 = ((MR_Word) transform_hlds__term_constr_main__conv1_STATE_VARIABLE_ModuleInfo_47_47);
#line 425 "term_constr_main.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_main__Pass2Result_28)) == (MR_mktag((MR_Integer) 1))))
#line 423 "term_constr_main.m"
                {
#line 423 "term_constr_main.m"
                  MR_Word transform_hlds__term_constr_main__Errors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__Pass2Result_28, (MR_Integer) 0)));

#line 424 "term_constr_main.m"
                  {
#line 424 "term_constr_main.m"
                    transform_hlds__term_constr_errors__report_termination2_errors_6_p_0(transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__Errors_29, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32);
#line 424 "term_constr_main.m"
                    return;
                  }
#line 423 "term_constr_main.m"
                }
#line 425 "term_constr_main.m"
              else
#line 426 "term_constr_main.m"
                *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32 = transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_47;
#line 3900 "transform_hlds.term_constr_main.c"
            }
#line 3902 "transform_hlds.term_constr_main.c"
          else
#line 3904 "transform_hlds.term_constr_main.c"
            {
#line 3906 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__Pass2Result_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeEarlyPass2Result_22, (MR_Integer) 0)));
#line 3908 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__Errors_72;
#line 3910 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74;
#line 3912 "transform_hlds.term_constr_main.c"
              MR_Word transform_hlds__term_constr_main__V_75_75;
#line 441 "term_constr_main.m"
              MR_Box transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_47_74;

#line 441 "term_constr_main.m"
              {
#line 441 "term_constr_main.m"
                transform_hlds__term_constr_main__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 441 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_7[0]));
#line 441 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 1) = ((MR_Box) (transform_hlds__term_constr_main__analyse_scc_9_p_0_7));
#line 441 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 441 "term_constr_main.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_75_75, 3) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Result_71));
#line 441 "term_constr_main.m"
              }
#line 441 "term_constr_main.m"
              {
#line 441 "term_constr_main.m"
                mercury__list__foldl_4_p_0(transform_hlds__term_constr_main__TypeCtorInfo_15_69, transform_hlds__term_constr_main__TypeCtorInfo_16_70, transform_hlds__term_constr_main__V_75_75, transform_hlds__term_constr_main__NeedsTerm_27, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41)), &transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_47_74);
              }
#line 441 "term_constr_main.m"
              transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74 = ((MR_Word) transform_hlds__term_constr_main__conv3_STATE_VARIABLE_ModuleInfo_47_74);
#line 423 "term_constr_main.m"
              transform_hlds__term_constr_main__Errors_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__Pass2Result_71, (MR_Integer) 0)));
#line 424 "term_constr_main.m"
              {
#line 424 "term_constr_main.m"
                transform_hlds__term_constr_errors__report_termination2_errors_6_p_0(transform_hlds__term_constr_main__NeedsTerm_27, transform_hlds__term_constr_main__Errors_72, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_47_74, transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32);
#line 424 "term_constr_main.m"
                return;
              }
#line 3947 "transform_hlds.term_constr_main.c"
            }
#line 405 "term_constr_main.m"
        }
#line 428 "term_constr_main.m"
        break;
#line 428 "term_constr_main.m"
      case (MR_Integer) 1:
#line 429 "term_constr_main.m"
        *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_32 = transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_41_41;
#line 428 "term_constr_main.m"
        break;
#line 428 "term_constr_main.m"
    }
#line 372 "term_constr_main.m"
  }
#line 366 "term_constr_main.m"
}

#line 613 "term_constr_main.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_3(
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 613 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 613 "term_constr_main.m"
{
#line 613 "term_constr_main.m"
  {
#line 613 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__wrapper_arg_2;
#line 613 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 613 "term_constr_main.m"
    MR_String transform_hlds__term_constr_main__conv1_HeadVar__3_21;

#line 613 "term_constr_main.m"
    {
#line 613 "term_constr_main.m"
      transform_hlds__term_constr_main__conv1_HeadVar__3_21 = transform_hlds__term_constr_main__IntroducedFrom__func__output_maybe_constr_arg_size_info__613__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 613 "term_constr_main.m"
    transform_hlds__term_constr_main__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_main__conv1_HeadVar__3_21));
#line 613 "term_constr_main.m"
    return transform_hlds__term_constr_main__wrapper_arg_2;
#line 613 "term_constr_main.m"
  }
#line 613 "term_constr_main.m"
}

#line 611 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_2(
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 611 "term_constr_main.m"
{
#line 611 "term_constr_main.m"
  {
#line 611 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 611 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 611 "term_constr_main.m"
    {
#line 611 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__output_maybe_constr_arg_size_info__611__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 611 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 611 "term_constr_main.m"
  }
#line 611 "term_constr_main.m"
}

#line 611 "term_constr_main.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_1(
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 611 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1)
#line 611 "term_constr_main.m"
{
#line 611 "term_constr_main.m"
  {
#line 611 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 611 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;

#line 611 "term_constr_main.m"
    {
#line 611 "term_constr_main.m"
      return transform_hlds__term_constr_main__succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1));
    }
#line 611 "term_constr_main.m"
    return transform_hlds__term_constr_main__succeeded;
#line 611 "term_constr_main.m"
  }
#line 611 "term_constr_main.m"
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
#line 572 "term_constr_main.m"
  {
#line 572 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 572 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TypeInfo_55_55;
#line 572 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__TypeCtorInfo_56_56;
#line 572 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__NumHeadVars_22;
#line 572 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVarIds_23;
#line 572 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__VarToVarIdMap_24;
#line 572 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__V_38_38;
#line 572 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_40_40;

#line 573 "term_constr_main.m"
    {
#line 573 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination2_info(");
    }
#line 578 "term_constr_main.m"
#line 578 "term_constr_main.m"
    switch (transform_hlds__term_constr_main__PredOrFunc_11) {
#line 578 "term_constr_main.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 578 "term_constr_main.m"
      case (MR_Integer) 1:
#line 579 "term_constr_main.m"
        {
#line 579 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__FuncModeList_20;
#line 579 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__RetMode_21;
#line 579 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__V_30_30;
#line 580 "term_constr_main.m"
          MR_Box transform_hlds__term_constr_main__conv0_RetMode_21;

#line 580 "term_constr_main.m"
          {
#line 580 "term_constr_main.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__term_constr_main__ModeList_13, &transform_hlds__term_constr_main__FuncModeList_20, &transform_hlds__term_constr_main__conv0_RetMode_21);
          }
#line 580 "term_constr_main.m"
          transform_hlds__term_constr_main__RetMode_21 = ((MR_Word) transform_hlds__term_constr_main__conv0_RetMode_21);
#line 581 "term_constr_main.m"
          {
#line 581 "term_constr_main.m"
            transform_hlds__term_constr_main__V_30_30 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
          }
#line 581 "term_constr_main.m"
          {
#line 581 "term_constr_main.m"
            parse_tree__mercury_to_mercury__mercury_output_func_mode_subdecl_9_p_0((MR_Integer) 0, transform_hlds__term_constr_main__V_30_30, transform_hlds__term_constr_main__SymName_12, transform_hlds__term_constr_main__FuncModeList_20, transform_hlds__term_constr_main__RetMode_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_constr_main__Context_14);
          }
#line 579 "term_constr_main.m"
        }
#line 578 "term_constr_main.m"
        break;
#line 578 "term_constr_main.m"
      case (MR_Integer) 0:
#line 575 "term_constr_main.m"
        {
#line 575 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__V_34_34;

#line 576 "term_constr_main.m"
          {
#line 576 "term_constr_main.m"
            transform_hlds__term_constr_main__V_34_34 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
          }
#line 576 "term_constr_main.m"
          {
#line 576 "term_constr_main.m"
            parse_tree__mercury_to_mercury__mercury_output_pred_mode_subdecl_8_p_0((MR_Integer) 0, transform_hlds__term_constr_main__V_34_34, transform_hlds__term_constr_main__SymName_12, transform_hlds__term_constr_main__ModeList_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_constr_main__Context_14);
          }
#line 575 "term_constr_main.m"
        }
#line 578 "term_constr_main.m"
        break;
#line 578 "term_constr_main.m"
    }
#line 4161 "transform_hlds.term_constr_main.c"
    transform_hlds__term_constr_main__TypeInfo_55_55 = (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[1];
#line 585 "term_constr_main.m"
    {
#line 585 "term_constr_main.m"
      mercury__list__length_2_p_0(transform_hlds__term_constr_main__TypeInfo_55_55, transform_hlds__term_constr_main__HeadVars_18, &transform_hlds__term_constr_main__NumHeadVars_22);
    }
#line 586 "term_constr_main.m"
    transform_hlds__term_constr_main__V_38_38 = (transform_hlds__term_constr_main__NumHeadVars_22 - (MR_Integer) 1);
#line 586 "term_constr_main.m"
    {
#line 586 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVarIds_23 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, transform_hlds__term_constr_main__V_38_38);
    }
#line 4175 "transform_hlds.term_constr_main.c"
    transform_hlds__term_constr_main__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 588 "term_constr_main.m"
    {
#line 588 "term_constr_main.m"
      transform_hlds__term_constr_main__V_40_40 = mercury__map__init_0_f_0(transform_hlds__term_constr_main__TypeInfo_55_55, transform_hlds__term_constr_main__TypeCtorInfo_56_56);
    }
#line 587 "term_constr_main.m"
    {
#line 587 "term_constr_main.m"
      mercury__map__det_insert_from_corresponding_lists_4_p_0(transform_hlds__term_constr_main__TypeInfo_55_55, transform_hlds__term_constr_main__TypeCtorInfo_56_56, transform_hlds__term_constr_main__HeadVars_18, transform_hlds__term_constr_main__HeadVarIds_23, transform_hlds__term_constr_main__V_40_40, &transform_hlds__term_constr_main__VarToVarIdMap_24);
    }
#line 590 "term_constr_main.m"
    {
#line 590 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 605 "term_constr_main.m"
    if ((transform_hlds__term_constr_main__MaybeSuccess_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "term_constr_main.m"
      {
#line 606 "term_constr_main.m"
        {
#line 606 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "not_set");
        }
#line 605 "term_constr_main.m"
      }
#line 605 "term_constr_main.m"
    else
#line 608 "term_constr_main.m"
      {
#line 608 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__TypeCtorInfo_29_81;
#line 608 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Polyhedron_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__MaybeSuccess_15, (MR_Integer) 0)));
#line 608 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints0_63;
#line 608 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints1_64;
#line 608 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__Constraints_65;
#line 608 "term_constr_main.m"
        MR_Word transform_hlds__term_constr_main__OutputVar_66;

#line 609 "term_constr_main.m"
        {
#line 609 "term_constr_main.m"
          mercury__io__write_string_3_p_0((MR_String) "constraints(");
        }
#line 610 "term_constr_main.m"
        {
#line 610 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints0_63 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_main__Polyhedron_62);
        }
#line 4230 "transform_hlds.term_constr_main.c"
        transform_hlds__term_constr_main__TypeCtorInfo_29_81 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 611 "term_constr_main.m"
        {
#line 611 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints1_64 = mercury__list__filter_2_f_0(transform_hlds__term_constr_main__TypeCtorInfo_29_81, (MR_Word) &transform_hlds__term_constr_main_scalar_common_4[1], transform_hlds__term_constr_main__Constraints0_63);
        }
#line 612 "term_constr_main.m"
        {
#line 612 "term_constr_main.m"
          transform_hlds__term_constr_main__Constraints_65 = mercury__list__sort_1_f_0(transform_hlds__term_constr_main__TypeCtorInfo_29_81, transform_hlds__term_constr_main__Constraints1_64);
        }
#line 613 "term_constr_main.m"
        {
#line 613 "term_constr_main.m"
          transform_hlds__term_constr_main__OutputVar_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 613 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_66, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_6[0]));
#line 613 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_66, 1) = ((MR_Box) (transform_hlds__term_constr_main__output_pragma_termination2_info_10_p_0_3));
#line 613 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 613 "term_constr_main.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__OutputVar_66, 3) = ((MR_Box) (transform_hlds__term_constr_main__VarToVarIdMap_24));
#line 613 "term_constr_main.m"
        }
#line 614 "term_constr_main.m"
        {
#line 614 "term_constr_main.m"
          libs__lp_rational__output_constraints_4_p_0(transform_hlds__term_constr_main__OutputVar_66, transform_hlds__term_constr_main__Constraints_65);
        }
#line 615 "term_constr_main.m"
        {
#line 615 "term_constr_main.m"
          mercury__io__write_char_3_p_0((MR_Char) 41);
        }
#line 608 "term_constr_main.m"
      }
#line 593 "term_constr_main.m"
    {
#line 593 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 594 "term_constr_main.m"
    {
#line 594 "term_constr_main.m"
      transform_hlds__term_constr_main__output_maybe_constr_arg_size_info_4_p_0(transform_hlds__term_constr_main__VarToVarIdMap_24, transform_hlds__term_constr_main__MaybeFailure_16);
    }
#line 596 "term_constr_main.m"
    {
#line 596 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 597 "term_constr_main.m"
    {
#line 597 "term_constr_main.m"
      transform_hlds__term_constr_main__output_maybe_termination2_info_3_p_0(transform_hlds__term_constr_main__MaybeTermination_17);
    }
#line 598 "term_constr_main.m"
    {
#line 598 "term_constr_main.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 598 "term_constr_main.m"
      return;
    }
#line 572 "term_constr_main.m"
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
#line 506 "term_constr_main.m"
  {
#line 506 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 506 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_8;
#line 506 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__RunningTerm2_9;

#line 511 "term_constr_main.m"
    {
#line 511 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__ModuleInfo_5, &transform_hlds__term_constr_main__Globals_8);
    }
#line 512 "term_constr_main.m"
    {
#line 512 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_8, (MR_Integer) 424, &transform_hlds__term_constr_main__RunningTerm2_9);
    }
#line 538 "term_constr_main.m"
#line 538 "term_constr_main.m"
    switch (transform_hlds__term_constr_main__RunningTerm2_9) {
#line 538 "term_constr_main.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 538 "term_constr_main.m"
      case (MR_Integer) 0:
#line 539 "term_constr_main.m"
        {
#line 539 "term_constr_main.m"
        }
#line 538 "term_constr_main.m"
        break;
#line 538 "term_constr_main.m"
      case (MR_Integer) 1:
#line 514 "term_constr_main.m"
        {
#line 514 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__PredInfo_10;
#line 514 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__ImportStatus_11;
#line 514 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__TypeSpecInfo_12;
#line 514 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__TypeSpecForcePreds_14;
#line 518 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__V_13_13;
#line 518 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__V_15_15;
#line 518 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__V_16_16;
#line 524 "term_constr_main.m"
          MR_Word transform_hlds__term_constr_main__TypeCtorInfo_28_28;

#line 515 "term_constr_main.m"
          {
#line 515 "term_constr_main.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_constr_main__ModuleInfo_5, transform_hlds__term_constr_main__PredId_6, &transform_hlds__term_constr_main__PredInfo_10);
          }
#line 516 "term_constr_main.m"
          {
#line 516 "term_constr_main.m"
            hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__term_constr_main__PredInfo_10, &transform_hlds__term_constr_main__ImportStatus_11);
          }
#line 517 "term_constr_main.m"
          {
#line 517 "term_constr_main.m"
            hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__term_constr_main__ModuleInfo_5, &transform_hlds__term_constr_main__TypeSpecInfo_12);
          }
#line 518 "term_constr_main.m"
          transform_hlds__term_constr_main__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TypeSpecInfo_12, (MR_Integer) 0)));
#line 518 "term_constr_main.m"
          transform_hlds__term_constr_main__TypeSpecForcePreds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TypeSpecInfo_12, (MR_Integer) 1)));
#line 518 "term_constr_main.m"
          transform_hlds__term_constr_main__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TypeSpecInfo_12, (MR_Integer) 2)));
#line 518 "term_constr_main.m"
          transform_hlds__term_constr_main__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__TypeSpecInfo_12, (MR_Integer) 3)));
#line 521 "term_constr_main.m"
          if ((transform_hlds__term_constr_main__ImportStatus_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 520 "term_constr_main.m"
            transform_hlds__term_constr_main__succeeded = MR_TRUE;
#line 521 "term_constr_main.m"
          else
#line 521 "term_constr_main.m"
          if ((transform_hlds__term_constr_main__ImportStatus_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 521 "term_constr_main.m"
            transform_hlds__term_constr_main__succeeded = MR_TRUE;
#line 521 "term_constr_main.m"
          else
#line 521 "term_constr_main.m"
            transform_hlds__term_constr_main__succeeded = MR_FALSE;
#line 522 "term_constr_main.m"
          if (transform_hlds__term_constr_main__succeeded)
#line 522 "term_constr_main.m"
            {
#line 523 "term_constr_main.m"
              {
#line 523 "term_constr_main.m"
                transform_hlds__term_constr_main__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__term_constr_main__PredInfo_10);
              }
#line 523 "term_constr_main.m"
              transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 522 "term_constr_main.m"
              if (transform_hlds__term_constr_main__succeeded)
#line 522 "term_constr_main.m"
                {
#line 4414 "transform_hlds.term_constr_main.c"
                  transform_hlds__term_constr_main__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 524 "term_constr_main.m"
                  {
#line 524 "term_constr_main.m"
                    transform_hlds__term_constr_main__succeeded = mercury__set__member_2_p_0(transform_hlds__term_constr_main__TypeCtorInfo_28_28, ((MR_Box) (transform_hlds__term_constr_main__PredId_6)), transform_hlds__term_constr_main__TypeSpecForcePreds_14);
                  }
#line 524 "term_constr_main.m"
                  transform_hlds__term_constr_main__succeeded = !(transform_hlds__term_constr_main__succeeded);
#line 522 "term_constr_main.m"
                }
#line 522 "term_constr_main.m"
            }
#line 535 "term_constr_main.m"
          if (transform_hlds__term_constr_main__succeeded)
#line 526 "term_constr_main.m"
            {
#line 526 "term_constr_main.m"
              MR_String transform_hlds__term_constr_main__PredName_17;
#line 526 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__ProcTable_18;
#line 526 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__Context_19;
#line 526 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__PredOrFunc_20;
#line 526 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__ModuleName_21;
#line 526 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__ProcIds_22;
#line 526 "term_constr_main.m"
              MR_Word transform_hlds__term_constr_main__SymName_23;

#line 526 "term_constr_main.m"
              {
#line 526 "term_constr_main.m"
                transform_hlds__term_constr_main__PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__term_constr_main__PredInfo_10);
              }
#line 527 "term_constr_main.m"
              {
#line 527 "term_constr_main.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_constr_main__PredInfo_10, &transform_hlds__term_constr_main__ProcTable_18);
              }
#line 528 "term_constr_main.m"
              {
#line 528 "term_constr_main.m"
                hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_constr_main__PredInfo_10, &transform_hlds__term_constr_main__Context_19);
              }
#line 529 "term_constr_main.m"
              {
#line 529 "term_constr_main.m"
                transform_hlds__term_constr_main__PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__term_constr_main__PredInfo_10);
              }
#line 530 "term_constr_main.m"
              {
#line 530 "term_constr_main.m"
                transform_hlds__term_constr_main__ModuleName_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__term_constr_main__PredInfo_10);
              }
#line 531 "term_constr_main.m"
              {
#line 531 "term_constr_main.m"
                transform_hlds__term_constr_main__ProcIds_22 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__term_constr_main__PredInfo_10);
              }
#line 532 "term_constr_main.m"
              {
#line 532 "term_constr_main.m"
                transform_hlds__term_constr_main__SymName_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "term_constr_main.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__SymName_23, 0) = ((MR_Box) (transform_hlds__term_constr_main__ModuleName_21));
#line 532 "term_constr_main.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_main__SymName_23, 1) = ((MR_Box) (transform_hlds__term_constr_main__PredName_17));
#line 532 "term_constr_main.m"
              }
#line 533 "term_constr_main.m"
              {
#line 533 "term_constr_main.m"
                transform_hlds__term_constr_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_111_112_116_95_105_110_116_95_112_114_111_99_115_95_95_91_49_93_95_48_8_p_0(transform_hlds__term_constr_main__ProcIds_22, transform_hlds__term_constr_main__ProcTable_18, transform_hlds__term_constr_main__PredOrFunc_20, transform_hlds__term_constr_main__SymName_23, transform_hlds__term_constr_main__Context_19);
#line 533 "term_constr_main.m"
                return;
              }
#line 526 "term_constr_main.m"
            }
#line 535 "term_constr_main.m"
          else
#line 535 "term_constr_main.m"
            {
#line 535 "term_constr_main.m"
            }
#line 514 "term_constr_main.m"
        }
#line 538 "term_constr_main.m"
        break;
#line 538 "term_constr_main.m"
    }
#line 506 "term_constr_main.m"
  }
#line 189 "term_constr_main.m"
}

#line 320 "term_constr_main.m"
static void MR_CALL 
transform_hlds__term_constr_main__pass_4_p_0_1(
#line 320 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__closure_arg,
#line 320 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_1,
#line 320 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_2,
#line 320 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_3,
#line 320 "term_constr_main.m"
  MR_Box transform_hlds__term_constr_main__wrapper_arg_4,
#line 320 "term_constr_main.m"
  MR_Box * transform_hlds__term_constr_main__wrapper_arg_5)
#line 320 "term_constr_main.m"
{
#line 320 "term_constr_main.m"
  {
#line 320 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__closure = transform_hlds__term_constr_main__closure_arg;
#line 320 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_32;

#line 320 "term_constr_main.m"
    {
#line 320 "term_constr_main.m"
      transform_hlds__term_constr_main__analyse_scc_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main__wrapper_arg_2), &transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_32);
    }
#line 320 "term_constr_main.m"
    *transform_hlds__term_constr_main__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_main__conv0_STATE_VARIABLE_ModuleInfo_32));
#line 320 "term_constr_main.m"
  }
#line 320 "term_constr_main.m"
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
#line 283 "term_constr_main.m"
  {
#line 283 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Globals_7;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Norm_8;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FunctorInfo_9;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Fail_10;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__ArgSizeOnly_11;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__BuildOptions_12;
#line 283 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__MaxSize_13;
#line 283 "term_constr_main.m"
    MR_Integer transform_hlds__term_constr_main__CutOff_14;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Widening_15;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__FixpointOptions_16;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__Pass2Options_17;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__DepInfo_18;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__SCCs_19;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30;
#line 283 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_31_31;
#line 320 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_21;
#line 320 "term_constr_main.m"
    MR_Box transform_hlds__term_constr_main__conv1_STATE_VARIABLE_IO_33_33;

#line 288 "term_constr_main.m"
    {
#line 288 "term_constr_main.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__term_constr_main__Globals_7);
    }
#line 289 "term_constr_main.m"
    {
#line 289 "term_constr_main.m"
      libs__globals__get_termination2_norm_2_p_0(transform_hlds__term_constr_main__Globals_7, &transform_hlds__term_constr_main__Norm_8);
    }
#line 290 "term_constr_main.m"
    {
#line 290 "term_constr_main.m"
      transform_hlds__term_constr_main__FunctorInfo_9 = transform_hlds__term_norm__set_functor_info_2_f_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__term_constr_main__Norm_8);
    }
#line 291 "term_constr_main.m"
    {
#line 291 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 430, &transform_hlds__term_constr_main__Fail_10);
    }
#line 292 "term_constr_main.m"
    {
#line 292 "term_constr_main.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 429, &transform_hlds__term_constr_main__ArgSizeOnly_11);
    }
#line 293 "term_constr_main.m"
    {
#line 293 "term_constr_main.m"
      transform_hlds__term_constr_main__BuildOptions_12 = transform_hlds__term_constr_build__term_build_options_init_3_f_0(transform_hlds__term_constr_main__FunctorInfo_9, transform_hlds__term_constr_main__Fail_10, transform_hlds__term_constr_main__ArgSizeOnly_11);
    }
#line 300 "term_constr_main.m"
    {
#line 300 "term_constr_main.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 431, &transform_hlds__term_constr_main__MaxSize_13);
    }
#line 301 "term_constr_main.m"
    {
#line 301 "term_constr_main.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__term_constr_main__Globals_7, (MR_Integer) 428, &transform_hlds__term_constr_main__CutOff_14);
    }
#line 304 "term_constr_main.m"
    transform_hlds__term_constr_main__Widening_15 = (MR_Word) transform_hlds__term_constr_main__CutOff_14;
#line 305 "term_constr_main.m"
    {
#line 305 "term_constr_main.m"
      transform_hlds__term_constr_main__FixpointOptions_16 = transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_f_0(transform_hlds__term_constr_main__Widening_15, transform_hlds__term_constr_main__MaxSize_13);
    }
#line 309 "term_constr_main.m"
    {
#line 309 "term_constr_main.m"
      transform_hlds__term_constr_main__Pass2Options_17 = transform_hlds__term_constr_pass2__pass2_options_init_1_f_0(transform_hlds__term_constr_main__MaxSize_13);
    }
#line 314 "term_constr_main.m"
    {
#line 314 "term_constr_main.m"
      transform_hlds__term_constr_initial__preprocess_module_4_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28);
    }
#line 317 "term_constr_main.m"
    {
#line 317 "term_constr_main.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 318 "term_constr_main.m"
    {
#line 318 "term_constr_main.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__term_constr_main__DepInfo_18);
    }
#line 319 "term_constr_main.m"
    {
#line 319 "term_constr_main.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_constr_main__DepInfo_18, &transform_hlds__term_constr_main__SCCs_19);
    }
#line 320 "term_constr_main.m"
    {
#line 320 "term_constr_main.m"
      transform_hlds__term_constr_main__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 320 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[0]));
#line 320 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 1) = ((MR_Box) (transform_hlds__term_constr_main__pass_4_p_0_1));
#line 320 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 320 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 3) = ((MR_Box) (transform_hlds__term_constr_main__SCCs_19));
#line 320 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 4) = ((MR_Box) (transform_hlds__term_constr_main__BuildOptions_12));
#line 320 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 5) = ((MR_Box) (transform_hlds__term_constr_main__FixpointOptions_16));
#line 320 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__V_31_31, 6) = ((MR_Box) (transform_hlds__term_constr_main__Pass2Options_17));
#line 320 "term_constr_main.m"
    }
#line 320 "term_constr_main.m"
    {
#line 320 "term_constr_main.m"
      mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_main__V_31_31, transform_hlds__term_constr_main__SCCs_19, ((MR_Box) (transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_30_30)), &transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_main__conv1_STATE_VARIABLE_IO_33_33);
    }
#line 320 "term_constr_main.m"
    *transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__term_constr_main__conv2_STATE_VARIABLE_ModuleInfo_21);
#line 324 "term_constr_main.m"
    {
#line 324 "term_constr_main.m"
      transform_hlds__term_constr_main__maybe_make_optimization_interface_3_p_0(*transform_hlds__term_constr_main__STATE_VARIABLE_ModuleInfo_21);
#line 324 "term_constr_main.m"
      return;
    }
#line 283 "term_constr_main.m"
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
#line 276 "term_constr_main.m"
  {
#line 276 "term_constr_main.m"
    MR_bool transform_hlds__term_constr_main__succeeded;
#line 276 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__HeadVar__1_1;
#line 276 "term_constr_main.m"
    MR_Word transform_hlds__term_constr_main__V_2_2;

#line 276 "term_constr_main.m"
    {
#line 276 "term_constr_main.m"
      transform_hlds__term_constr_main__V_2_2 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_main_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_main_scalar_common_1[1]);
    }
#line 276 "term_constr_main.m"
    {
#line 276 "term_constr_main.m"
      transform_hlds__term_constr_main__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 276 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 0) = ((MR_Box) (transform_hlds__term_constr_main__V_2_2));
#line 276 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "term_constr_main.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main__HeadVar__1_1, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "term_constr_main.m"
    }
#line 276 "term_constr_main.m"
    return transform_hlds__term_constr_main__HeadVar__1_1;
#line 276 "term_constr_main.m"
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
