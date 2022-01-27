/*
** Automatically generated from `inst_check.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module check_hlds.inst_check. */
/* :- implementation. */

/*
INIT mercury__check_hlds__inst_check__init
ENDINIT
*/

#include "check_hlds.inst_check.mih"


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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 431 "inst_check.m"
struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s {
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11;
#line 437 "inst_check.m"
  MR_bool check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded;
#line 477 "inst_check.m"
  jmp_buf check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__commit_0;
#line 477 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__Type_118;
#line 477 "inst_check.m"
  MR_Box check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__conv1_Type_118;
#line 431 "inst_check.m"
};


#line 160 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

#line 163 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

#line 166 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0;

#line 169 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0[2];

#line 172 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0;

#line 175 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0[1];

#line 178 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0[1];

#line 181 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0[1];

#line 184 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0[1];

#line 187 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

#line 190 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 193 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0[3];

#line 196 "check_hlds.inst_check.c"
static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0[3];

#line 199 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0;

#line 202 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0[1];

#line 205 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0[1];

#line 208 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0[1];

#line 211 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0[1];

#line 214 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0[2];

#line 217 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0;

#line 220 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0[1];

#line 223 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0[1];

#line 226 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0[1];

#line 229 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0[1];

#line 232 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1];

#line 235 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0;

#line 238 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1];

#line 241 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1;

#line 244 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1];

#line 247 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2;

#line 250 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[1];

#line 253 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[1];

#line 256 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[1];

#line 259 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0[3];

#line 262 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0[3];

#line 265 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0[3];

#line 268 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0;

#line 271 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1;

#line 274 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_value_ordered_typeable_functors_0[2];

#line 277 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0[2];

#line 280 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0[2];

#line 283 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001(
#line 286 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 288 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 291 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001(
#line 294 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 296 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 298 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 301 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001(
#line 304 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 306 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 309 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001(
#line 312 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 314 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 316 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 319 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001(
#line 322 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 324 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 327 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001(
#line 330 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 332 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 334 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 337 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001(
#line 340 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 342 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 345 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001(
#line 348 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 350 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 352 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 355 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
#line 358 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 360 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 363 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
#line 366 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 368 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 370 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 373 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0_10001(
#line 376 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 378 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 381 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0_10001(
#line 384 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 386 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 388 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 124 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__124__1_4_p_0(
#line 124 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeCtorAndDefn_12,
#line 124 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_20,
#line 124 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_21,
#line 124 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__4_22);

#line 297 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
#line 297 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 297 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 297 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 297 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0(
#line 297 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_1,
#line 297 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 301 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
#line 301 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 301 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 301 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 301 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
#line 301 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 301 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 107 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(
#line 107 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 107 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 107 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 107 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(
#line 107 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 107 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 524 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
#line 524 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 524 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 524 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 524 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
#line 524 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 524 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 110 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0(
#line 110 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 110 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 110 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 110 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0(
#line 110 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 110 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 104 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0(
#line 104 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 104 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 104 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 104 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0(
#line 104 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 104 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 803 "inst_check.m"
static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
#line 803 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3);

#line 791 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 791 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 791 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

#line 768 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
#line 768 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 768 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 768 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

#line 746 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_mismatch_pieces_2_p_0(
#line 746 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 746 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__2_2);

#line 730 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_mismatch_6_p_0(
#line 730 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_7,
#line 730 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInst_8,
#line 730 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16,
#line 730 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17,
#line 730 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18,
#line 730 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19);

#line 719 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0_1(
#line 719 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 719 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 719 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 711 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0(
#line 711 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_9,
#line 711 "inst_check.m"
  MR_String check_hlds__inst_check__FunctorName_10,
#line 711 "inst_check.m"
  MR_Integer check_hlds__inst_check__ActualArity_11,
#line 711 "inst_check.m"
  MR_Word check_hlds__inst_check__ExpectedAritiesSet_12,
#line 711 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22,
#line 711 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23,
#line 711 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24,
#line 711 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25);

#line 688 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(
#line 688 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 688 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 688 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 688 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 688 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 688 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 688 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

#line 639 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(
#line 639 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 639 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 639 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 639 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 639 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 639 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 639 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

#line 617 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(
#line 617 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 617 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 617 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3,
#line 617 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4,
#line 617 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5);

#line 600 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(
#line 600 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 600 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 600 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3);

#line 567 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0(
#line 567 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 567 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 567 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 567 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 567 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 567 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 567 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

#line 531 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
#line 531 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_4,
#line 531 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_5,
#line 531 "inst_check.m"
  MR_Word * check_hlds__inst_check__MismatchFromType_6);

#line 505 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_6(
#line 505 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 505 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1);

#line 454 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_1(
#line 454 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 454 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 454 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 477 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_2(
#line 477 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 477 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_4(
#line 477 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 477 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_3(
#line 477 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 477 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_5(
#line 477 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 431 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0(
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_8,
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_9,
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_10,
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypes_11,
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypeSets_12,
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_43,
#line 431 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_44);

#line 397 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
#line 397 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 397 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 397 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

#line 306 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(
#line 306 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 306 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 306 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3,
#line 306 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4,
#line 306 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5,
#line 306 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6);

#line 269 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(
#line 269 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3,
#line 269 "inst_check.m"
  MR_Word * check_hlds__inst_check__TypeCtor_4);

#line 246 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0_1(
#line 246 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 246 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 246 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 206 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0(
#line 206 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 206 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 206 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3,
#line 206 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_4,
#line 206 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_5);

#line 196 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(
#line 196 "inst_check.m"
  MR_Word check_hlds__inst_check__Ctor_3,
#line 196 "inst_check.m"
  MR_Word * check_hlds__inst_check__FunctorNameAndArity_4);

#line 134 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
#line 134 "inst_check.m"
  MR_Word check_hlds__inst_check__Section_3,
#line 134 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefn_4);

#line 124 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2(
#line 124 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 124 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 124 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 124 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_3);

#line 186 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1(
#line 186 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 186 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 186 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 113 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(
#line 113 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 113 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2,
#line 113 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_3);


static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[34][2];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_3[14][1];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[4][5];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_7[1][6];


#line 280 "inst_check.m"
/* sealed */ struct check_hlds__inst_check__vector_common_type_6_0_s {
#line 280 "inst_check.m"
  const MR_Word check_hlds__inst_check__vector_common_type_6_0__vct_6_f_0;
#line 280 "inst_check.m"
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_6_0_s check_hlds__inst_check_vector_common_6[4];

#line 814 "inst_check.m"
/* sealed */ struct check_hlds__inst_check__vector_common_type_8_0_s {
#line 814 "inst_check.m"
  const MR_String check_hlds__inst_check__vector_common_type_8_0__vct_8_f_0;
#line 814 "inst_check.m"
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_8_0_s check_hlds__inst_check_vector_common_8[4];



static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[34][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not visible from outside this module."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are visible from outside this module."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "equally close matches."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for which the top level mismatches are the following."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[13])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[8])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[9])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[10])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[11])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: inst "))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not match any of the types in scope."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is exported, but the one type it matches"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is exported, but none of the types it matches"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The closest match is"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There are"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "match is"))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0)),
    ((MR_Box) (&check_hlds__inst_check_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[0])),
    ((MR_Box) (check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1])),
    ((MR_Box) (check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[2])),
    ((MR_Box) (check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[3])),
    ((MR_Box) (check_hlds__inst_check__record_arity_mismatch_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_3[14][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[2])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[3])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "char"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "float"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "string"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 13 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0)),
    ((MR_Box) (&check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0))
  },
};


static /* final */ const struct check_hlds__inst_check__vector_common_type_6_0_s check_hlds__inst_check_vector_common_6[4] = {
  /* row 0 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[22] },
  /* row 1 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[21] },
  /* row 2 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[23] },
  /* row 3 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[20] },
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_8_0_s check_hlds__inst_check_vector_common_8[4] = {
  /* row 0 */   {     (MR_String) "int" },
  /* row 1 */   {     (MR_String) "float" },
  /* row 2 */   {     (MR_String) "string" },
  /* row 3 */   {     (MR_String) "char" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1227 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
  }
};

#line 1235 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0,
    (MR_PseudoTypeInfo) &check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
  }
};

#line 1244 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0
  }
};

#line 1252 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1258 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0 = {
  (MR_String) "functor_name_and_arity",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0,
  NULL,
  NULL,
  NULL
};

#line 1273 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0
};

#line 1278 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0
  }
};

#line 1287 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0
};

#line 1292 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0[1] = {
  (MR_Integer) 0
};

#line 1297 "check_hlds.inst_check.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "functor_name_and_arity",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0
};

#line 1314 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0,
    (MR_TypeInfo) &check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
  }
};

#line 1323 "check_hlds.inst_check.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functors_to_types_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "functors_to_types_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1340 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1348 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 1355 "check_hlds.inst_check.c"
static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0[3] = {
  (MR_String) "mft_num_mismatches",
  (MR_String) "mft_type",
  (MR_String) "mft_pieces"
};

#line 1362 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0 = {
  (MR_String) "mismatch_from_type",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0,
  check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0,
  NULL,
  NULL
};

#line 1377 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0
};

#line 1382 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0
  }
};

#line 1391 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0
};

#line 1396 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0[1] = {
  (MR_Integer) 0
};

#line 1401 "check_hlds.inst_check.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "mismatch_from_type",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0
};

#line 1418 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
};

#line 1424 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0 = {
  (MR_String) "type_ctor_and_defn",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0,
  NULL,
  NULL,
  NULL
};

#line 1439 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0
};

#line 1444 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0
  }
};

#line 1453 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0
};

#line 1458 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0[1] = {
  (MR_Integer) 0
};

#line 1463 "check_hlds.inst_check.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "type_ctor_and_defn",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0
};

#line 1480 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
};

#line 1485 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0 = {
  (MR_String) "type_user",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0,
  NULL,
  NULL,
  NULL
};

#line 1500 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0
};

#line 1505 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1 = {
  (MR_String) "type_builtin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1,
  NULL,
  NULL,
  NULL
};

#line 1520 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1525 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2 = {
  (MR_String) "type_tuple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2,
  NULL,
  NULL,
  NULL
};

#line 1540 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0
};

#line 1545 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1
};

#line 1550 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2
};

#line 1555 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2
  }
};

#line 1574 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0[3] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0
};

#line 1581 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1588 "check_hlds.inst_check.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "type_defn_or_builtin",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0
};

#line 1605 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0 = {
  (MR_String) "some_untypeable_functors",
  (MR_Integer) 0
};

#line 1611 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1 = {
  (MR_String) "all_typeable_functors",
  (MR_Integer) 1
};

#line 1617 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_value_ordered_typeable_functors_0[2] = {
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0,
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1
};

#line 1623 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0[2] = {
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0
};

#line 1629 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1635 "check_hlds.inst_check.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_typeable_functors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_check____Unify____typeable_functors_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____typeable_functors_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "typeable_functors",
  {     check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__enum_value_ordered_typeable_functors_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0
};

#line 1652 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001(
#line 1655 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1657 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 1659 "check_hlds.inst_check.c"
{
#line 1661 "check_hlds.inst_check.c"
  {
#line 1663 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 1666 "check_hlds.inst_check.c"
    {
#line 1668 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____functor_name_and_arity_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 1671 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 1673 "check_hlds.inst_check.c"
  }
#line 1675 "check_hlds.inst_check.c"
}

#line 1678 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001(
#line 1681 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 1683 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 1685 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 1687 "check_hlds.inst_check.c"
{
#line 1689 "check_hlds.inst_check.c"
  {
#line 1691 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 1694 "check_hlds.inst_check.c"
    {
#line 1696 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____functor_name_and_arity_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 1699 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 1701 "check_hlds.inst_check.c"
  }
#line 1703 "check_hlds.inst_check.c"
}

#line 1706 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001(
#line 1709 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1711 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 1713 "check_hlds.inst_check.c"
{
#line 1715 "check_hlds.inst_check.c"
  {
#line 1717 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 1720 "check_hlds.inst_check.c"
    {
#line 1722 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____functors_to_types_map_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 1725 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 1727 "check_hlds.inst_check.c"
  }
#line 1729 "check_hlds.inst_check.c"
}

#line 1732 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001(
#line 1735 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 1737 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 1739 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 1741 "check_hlds.inst_check.c"
{
#line 1743 "check_hlds.inst_check.c"
  {
#line 1745 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 1748 "check_hlds.inst_check.c"
    {
#line 1750 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____functors_to_types_map_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 1753 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 1755 "check_hlds.inst_check.c"
  }
#line 1757 "check_hlds.inst_check.c"
}

#line 1760 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001(
#line 1763 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1765 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 1767 "check_hlds.inst_check.c"
{
#line 1769 "check_hlds.inst_check.c"
  {
#line 1771 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 1774 "check_hlds.inst_check.c"
    {
#line 1776 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____mismatch_from_type_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 1779 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 1781 "check_hlds.inst_check.c"
  }
#line 1783 "check_hlds.inst_check.c"
}

#line 1786 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001(
#line 1789 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 1791 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 1793 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 1795 "check_hlds.inst_check.c"
{
#line 1797 "check_hlds.inst_check.c"
  {
#line 1799 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 1802 "check_hlds.inst_check.c"
    {
#line 1804 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____mismatch_from_type_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 1807 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 1809 "check_hlds.inst_check.c"
  }
#line 1811 "check_hlds.inst_check.c"
}

#line 1814 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001(
#line 1817 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1819 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 1821 "check_hlds.inst_check.c"
{
#line 1823 "check_hlds.inst_check.c"
  {
#line 1825 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 1828 "check_hlds.inst_check.c"
    {
#line 1830 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 1833 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 1835 "check_hlds.inst_check.c"
  }
#line 1837 "check_hlds.inst_check.c"
}

#line 1840 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001(
#line 1843 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 1845 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 1847 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 1849 "check_hlds.inst_check.c"
{
#line 1851 "check_hlds.inst_check.c"
  {
#line 1853 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 1856 "check_hlds.inst_check.c"
    {
#line 1858 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 1861 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 1863 "check_hlds.inst_check.c"
  }
#line 1865 "check_hlds.inst_check.c"
}

#line 1868 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
#line 1871 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1873 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 1875 "check_hlds.inst_check.c"
{
#line 1877 "check_hlds.inst_check.c"
  {
#line 1879 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 1882 "check_hlds.inst_check.c"
    {
#line 1884 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 1887 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 1889 "check_hlds.inst_check.c"
  }
#line 1891 "check_hlds.inst_check.c"
}

#line 1894 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
#line 1897 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 1899 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 1901 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 1903 "check_hlds.inst_check.c"
{
#line 1905 "check_hlds.inst_check.c"
  {
#line 1907 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 1910 "check_hlds.inst_check.c"
    {
#line 1912 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 1915 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 1917 "check_hlds.inst_check.c"
  }
#line 1919 "check_hlds.inst_check.c"
}

#line 1922 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0_10001(
#line 1925 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1927 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 1929 "check_hlds.inst_check.c"
{
#line 1931 "check_hlds.inst_check.c"
  {
#line 1933 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 1936 "check_hlds.inst_check.c"
    {
#line 1938 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____typeable_functors_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 1941 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 1943 "check_hlds.inst_check.c"
  }
#line 1945 "check_hlds.inst_check.c"
}

#line 1948 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0_10001(
#line 1951 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 1953 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 1955 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 1957 "check_hlds.inst_check.c"
{
#line 1959 "check_hlds.inst_check.c"
  {
#line 1961 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 1964 "check_hlds.inst_check.c"
    {
#line 1966 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____typeable_functors_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 1969 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 1971 "check_hlds.inst_check.c"
  }
#line 1973 "check_hlds.inst_check.c"
}

#line 124 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__124__1_4_p_0(
#line 124 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeCtorAndDefn_12,
#line 124 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_20,
#line 124 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_21,
#line 124 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__4_22)
#line 124 "inst_check.m"
{
#line 124 "inst_check.m"
  {
#line 124 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 124 "inst_check.m"
    {
#line 124 "inst_check.m"
      mercury__multi_map__reverse_set_4_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, ((MR_Box) (check_hlds__inst_check__TypeCtorAndDefn_12)), ((MR_Box) (check_hlds__inst_check__HeadVar__2_20)), check_hlds__inst_check__HeadVar__3_21, check_hlds__inst_check__HeadVar__4_22);
#line 124 "inst_check.m"
      return;
    }
#line 124 "inst_check.m"
  }
#line 124 "inst_check.m"
}

#line 297 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
#line 297 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 297 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 297 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 297 "inst_check.m"
{
#line 297 "inst_check.m"
  {
#line 297 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 297 "inst_check.m"
    MR_Integer check_hlds__inst_check__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 297 "inst_check.m"
    MR_Integer check_hlds__inst_check__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 297 "inst_check.m"
    {
#line 297 "inst_check.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Cast_HeadVar1_4, check_hlds__inst_check__Cast_HeadVar2_5);
#line 297 "inst_check.m"
      return;
    }
#line 297 "inst_check.m"
  }
#line 297 "inst_check.m"
}

#line 297 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0(
#line 297 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_1,
#line 297 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 297 "inst_check.m"
{
#line 2047 "check_hlds.inst_check.c"
  {
#line 2049 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded = (check_hlds__inst_check__HeadVar__2_1 == check_hlds__inst_check__HeadVar__2_2);

#line 2052 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2054 "check_hlds.inst_check.c"
  }
#line 297 "inst_check.m"
}

#line 301 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
#line 301 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 301 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 301 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 301 "inst_check.m"
{
#line 301 "inst_check.m"
  {
#line 301 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 301 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_22 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 301 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_23 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 301 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_22 == check_hlds__inst_check__CastY_23);
#line 301 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 2083 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 301 "inst_check.m"
    else
#line 301 "inst_check.m"
#line 301 "inst_check.m"
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) {
#line 301 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 301 "inst_check.m"
        case (MR_Integer) 0:
#line 301 "inst_check.m"
          {
#line 301 "inst_check.m"
            MR_Word check_hlds__inst_check__V_29_29 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__2_2), (MR_Integer) 0);

#line 301 "inst_check.m"
#line 301 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 301 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 301 "inst_check.m"
              case (MR_Integer) 0:
#line 301 "inst_check.m"
                {
#line 301 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_5_5 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__3_3), (MR_Integer) 0);

#line 301 "inst_check.m"
                  {
#line 301 "inst_check.m"
                    check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_29_29, check_hlds__inst_check__V_5_5);
#line 301 "inst_check.m"
                    return;
                  }
#line 301 "inst_check.m"
                }
#line 301 "inst_check.m"
                break;
#line 301 "inst_check.m"
              case (MR_Integer) 1:
#line 2124 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 301 "inst_check.m"
                break;
#line 301 "inst_check.m"
              case (MR_Integer) 2:
#line 2130 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 301 "inst_check.m"
                break;
#line 301 "inst_check.m"
            }
#line 301 "inst_check.m"
          }
#line 301 "inst_check.m"
          break;
#line 301 "inst_check.m"
        case (MR_Integer) 1:
#line 301 "inst_check.m"
          {
#line 301 "inst_check.m"
            MR_Word check_hlds__inst_check__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 301 "inst_check.m"
#line 301 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 301 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 301 "inst_check.m"
              case (MR_Integer) 0:
#line 2154 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 301 "inst_check.m"
                break;
#line 301 "inst_check.m"
              case (MR_Integer) 1:
#line 301 "inst_check.m"
                {
#line 301 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 301 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_30_30 = (MR_Integer) check_hlds__inst_check__V_27_27;
#line 301 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_31_31 = (MR_Integer) check_hlds__inst_check__V_13_13;

#line 301 "inst_check.m"
                  {
#line 301 "inst_check.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_30_30, check_hlds__inst_check__V_31_31);
#line 301 "inst_check.m"
                    return;
                  }
#line 301 "inst_check.m"
                }
#line 301 "inst_check.m"
                break;
#line 301 "inst_check.m"
              case (MR_Integer) 2:
#line 2182 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 301 "inst_check.m"
                break;
#line 301 "inst_check.m"
            }
#line 301 "inst_check.m"
          }
#line 301 "inst_check.m"
          break;
#line 301 "inst_check.m"
        case (MR_Integer) 2:
#line 301 "inst_check.m"
          {
#line 301 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 301 "inst_check.m"
#line 301 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 301 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 301 "inst_check.m"
              case (MR_Integer) 0:
#line 2206 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 301 "inst_check.m"
                break;
#line 301 "inst_check.m"
              case (MR_Integer) 1:
#line 2212 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 301 "inst_check.m"
                break;
#line 301 "inst_check.m"
              case (MR_Integer) 2:
#line 301 "inst_check.m"
                {
#line 301 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));

#line 301 "inst_check.m"
                  {
#line 301 "inst_check.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_28_28, check_hlds__inst_check__V_21_21);
#line 301 "inst_check.m"
                    return;
                  }
#line 301 "inst_check.m"
                }
#line 301 "inst_check.m"
                break;
#line 301 "inst_check.m"
            }
#line 301 "inst_check.m"
          }
#line 301 "inst_check.m"
          break;
#line 301 "inst_check.m"
      }
#line 301 "inst_check.m"
  }
#line 301 "inst_check.m"
}

#line 301 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
#line 301 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 301 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 301 "inst_check.m"
{
#line 301 "inst_check.m"
  {
#line 301 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 301 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 301 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 301 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 301 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 301 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 301 "inst_check.m"
    else
#line 301 "inst_check.m"
#line 301 "inst_check.m"
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 301 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 301 "inst_check.m"
        case (MR_Integer) 0:
#line 301 "inst_check.m"
          {
#line 301 "inst_check.m"
            MR_Word check_hlds__inst_check__V_3_3 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__1_1), (MR_Integer) 0);
#line 301 "inst_check.m"
            MR_Word check_hlds__inst_check__V_4_4;

#line 301 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 301 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 301 "inst_check.m"
              {
#line 301 "inst_check.m"
                check_hlds__inst_check__V_4_4 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__2_2), (MR_Integer) 0);
#line 2295 "check_hlds.inst_check.c"
                {
#line 2297 "check_hlds.inst_check.c"
                  return check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_4_4);
                }
#line 301 "inst_check.m"
              }
#line 301 "inst_check.m"
          }
#line 301 "inst_check.m"
          break;
#line 301 "inst_check.m"
        case (MR_Integer) 1:
#line 301 "inst_check.m"
          {
#line 301 "inst_check.m"
            MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 301 "inst_check.m"
            MR_Word check_hlds__inst_check__V_6_6;

#line 301 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 301 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 301 "inst_check.m"
              {
#line 301 "inst_check.m"
                check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 2323 "check_hlds.inst_check.c"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_5_5 == check_hlds__inst_check__V_6_6);
#line 301 "inst_check.m"
              }
#line 301 "inst_check.m"
          }
#line 301 "inst_check.m"
          break;
#line 301 "inst_check.m"
        case (MR_Integer) 2:
#line 301 "inst_check.m"
          {
#line 301 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 301 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_8_8;

#line 301 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 301 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 301 "inst_check.m"
              {
#line 301 "inst_check.m"
                check_hlds__inst_check__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 2348 "check_hlds.inst_check.c"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_7_7 == check_hlds__inst_check__V_8_8);
#line 301 "inst_check.m"
              }
#line 301 "inst_check.m"
          }
#line 301 "inst_check.m"
          break;
#line 301 "inst_check.m"
      }
#line 301 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 301 "inst_check.m"
  }
#line 301 "inst_check.m"
}

#line 107 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(
#line 107 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 107 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 107 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 107 "inst_check.m"
{
#line 107 "inst_check.m"
  {
#line 107 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 107 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 107 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 107 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 107 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 2389 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 107 "inst_check.m"
    else
#line 107 "inst_check.m"
      {
#line 107 "inst_check.m"
        MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "inst_check.m"
        MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "inst_check.m"
        MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 107 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8;

#line 107 "inst_check.m"
        {
#line 107 "inst_check.m"
          parse_tree__prog_data____Compare____type_ctor_0_0(&check_hlds__inst_check__V_8_8, check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_6_6);
        }
#line 2411 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_8_8 == (MR_Integer) 0);
#line 107 "inst_check.m"
        check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 107 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 107 "inst_check.m"
          *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_8_8;
#line 107 "inst_check.m"
        else
#line 107 "inst_check.m"
          {
#line 107 "inst_check.m"
            hlds__hlds_data____Compare____hlds_type_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_5_5, check_hlds__inst_check__V_7_7);
#line 107 "inst_check.m"
            return;
          }
#line 107 "inst_check.m"
      }
#line 107 "inst_check.m"
  }
#line 107 "inst_check.m"
}

#line 107 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(
#line 107 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 107 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 107 "inst_check.m"
{
#line 107 "inst_check.m"
  {
#line 107 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 107 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_7 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 107 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_8 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 107 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_7 == check_hlds__inst_check__CastY_8);
#line 107 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 107 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 107 "inst_check.m"
    else
#line 107 "inst_check.m"
      {
#line 107 "inst_check.m"
        MR_Word check_hlds__inst_check__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "inst_check.m"
        MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 107 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "inst_check.m"
        MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));

#line 2472 "check_hlds.inst_check.c"
        {
#line 2474 "check_hlds.inst_check.c"
          check_hlds__inst_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_5_5);
        }
#line 107 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 2479 "check_hlds.inst_check.c"
          {
#line 2481 "check_hlds.inst_check.c"
            return check_hlds__inst_check__succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_6_6);
          }
#line 107 "inst_check.m"
      }
#line 107 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 107 "inst_check.m"
  }
#line 107 "inst_check.m"
}

#line 524 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
#line 524 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 524 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 524 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 524 "inst_check.m"
{
#line 524 "inst_check.m"
  {
#line 524 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 524 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_12 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 524 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_13 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 524 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_12 == check_hlds__inst_check__CastY_13);
#line 524 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 2517 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 524 "inst_check.m"
    else
#line 524 "inst_check.m"
      {
#line 524 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 524 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 524 "inst_check.m"
        MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 2)));
#line 524 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 524 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 524 "inst_check.m"
        MR_Word check_hlds__inst_check__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 2)));
#line 524 "inst_check.m"
        MR_Word check_hlds__inst_check__V_10_10;

#line 524 "inst_check.m"
        {
#line 524 "inst_check.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_check__V_10_10, check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_7_7);
        }
#line 2543 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_10_10 == (MR_Integer) 0);
#line 524 "inst_check.m"
        check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 524 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 524 "inst_check.m"
          *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_10_10;
#line 524 "inst_check.m"
        else
#line 524 "inst_check.m"
          {
#line 524 "inst_check.m"
            MR_Word check_hlds__inst_check__V_11_11;

#line 524 "inst_check.m"
            {
#line 524 "inst_check.m"
              check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&check_hlds__inst_check__V_11_11, check_hlds__inst_check__V_5_5, check_hlds__inst_check__V_8_8);
            }
#line 2563 "check_hlds.inst_check.c"
            check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_11_11 == (MR_Integer) 0);
#line 524 "inst_check.m"
            check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 524 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 524 "inst_check.m"
              *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_11_11;
#line 524 "inst_check.m"
            else
#line 524 "inst_check.m"
              {
#line 524 "inst_check.m"
                {
#line 524 "inst_check.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_1[1], check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__V_6_6)), ((MR_Box) (check_hlds__inst_check__V_9_9)));
#line 524 "inst_check.m"
                  return;
                }
#line 524 "inst_check.m"
              }
#line 524 "inst_check.m"
          }
#line 524 "inst_check.m"
      }
#line 524 "inst_check.m"
  }
#line 524 "inst_check.m"
}

#line 524 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
#line 524 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 524 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 524 "inst_check.m"
{
#line 524 "inst_check.m"
  {
#line 524 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 524 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 524 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 524 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 524 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 524 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 524 "inst_check.m"
    else
#line 524 "inst_check.m"
      {
#line 524 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeInfo_11_11;
#line 524 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 524 "inst_check.m"
        MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 524 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 2)));
#line 524 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 524 "inst_check.m"
        MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 524 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 2)));

#line 2636 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_3_3 == check_hlds__inst_check__V_6_6);
#line 524 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 524 "inst_check.m"
          {
#line 2642 "check_hlds.inst_check.c"
            {
#line 2644 "check_hlds.inst_check.c"
              check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_7_7);
            }
#line 524 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 524 "inst_check.m"
              {
#line 2651 "check_hlds.inst_check.c"
                check_hlds__inst_check__TypeInfo_11_11 = (MR_Word) &check_hlds__inst_check_scalar_common_1[1];
#line 2653 "check_hlds.inst_check.c"
                {
#line 2655 "check_hlds.inst_check.c"
                  return check_hlds__inst_check__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_check__TypeInfo_11_11, ((MR_Box) (check_hlds__inst_check__V_5_5)), ((MR_Box) (check_hlds__inst_check__V_8_8)));
                }
#line 524 "inst_check.m"
              }
#line 524 "inst_check.m"
          }
#line 524 "inst_check.m"
      }
#line 524 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 524 "inst_check.m"
  }
#line 524 "inst_check.m"
}

#line 110 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0(
#line 110 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 110 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 110 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 110 "inst_check.m"
{
#line 110 "inst_check.m"
  {
#line 110 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 110 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar1_4 = check_hlds__inst_check__HeadVar__2_2;
#line 110 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar2_5 = check_hlds__inst_check__HeadVar__3_3;

#line 110 "inst_check.m"
    {
#line 110 "inst_check.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_2[0], check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_check__Cast_HeadVar2_5)));
#line 110 "inst_check.m"
      return;
    }
#line 110 "inst_check.m"
  }
#line 110 "inst_check.m"
}

#line 110 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0(
#line 110 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 110 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 110 "inst_check.m"
{
#line 110 "inst_check.m"
  {
#line 110 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 110 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar1_3 = check_hlds__inst_check__HeadVar__1_1;
#line 110 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar2_4 = check_hlds__inst_check__HeadVar__2_2;

#line 110 "inst_check.m"
    {
#line 110 "inst_check.m"
      return check_hlds__inst_check__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_check_scalar_common_2[0], ((MR_Box) (check_hlds__inst_check__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_check__Cast_HeadVar2_4)));
    }
#line 110 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 110 "inst_check.m"
  }
#line 110 "inst_check.m"
}

#line 104 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0(
#line 104 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 104 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 104 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 104 "inst_check.m"
{
#line 104 "inst_check.m"
  {
#line 104 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 104 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 104 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 104 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 104 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 2757 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 104 "inst_check.m"
    else
#line 104 "inst_check.m"
      {
#line 104 "inst_check.m"
        MR_String check_hlds__inst_check__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 104 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 104 "inst_check.m"
        MR_String check_hlds__inst_check__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 104 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 104 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8;

#line 104 "inst_check.m"
        {
#line 104 "inst_check.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_check__V_8_8, check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_6_6);
        }
#line 2779 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_8_8 == (MR_Integer) 0);
#line 104 "inst_check.m"
        check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 104 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 104 "inst_check.m"
          *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_8_8;
#line 104 "inst_check.m"
        else
#line 104 "inst_check.m"
          {
#line 104 "inst_check.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_5_5, check_hlds__inst_check__V_7_7);
#line 104 "inst_check.m"
            return;
          }
#line 104 "inst_check.m"
      }
#line 104 "inst_check.m"
  }
#line 104 "inst_check.m"
}

#line 104 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0(
#line 104 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 104 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 104 "inst_check.m"
{
#line 104 "inst_check.m"
  {
#line 104 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 104 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_7 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 104 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_8 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 104 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_7 == check_hlds__inst_check__CastY_8);
#line 104 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 104 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 104 "inst_check.m"
    else
#line 104 "inst_check.m"
      {
#line 104 "inst_check.m"
        MR_String check_hlds__inst_check__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 104 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 104 "inst_check.m"
        MR_String check_hlds__inst_check__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 104 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));

#line 2840 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_5_5) == 0);
#line 104 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 2844 "check_hlds.inst_check.c"
          check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_4_4 == check_hlds__inst_check__V_6_6);
#line 104 "inst_check.m"
      }
#line 104 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 104 "inst_check.m"
  }
#line 104 "inst_check.m"
}

#line 803 "inst_check.m"
static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
#line 803 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3)
#line 803 "inst_check.m"
{
#line 807 "inst_check.m"
  {
#line 807 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 807 "inst_check.m"
    MR_String check_hlds__inst_check__Str_4;

#line 807 "inst_check.m"
#line 807 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3)) {
#line 807 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 807 "inst_check.m"
      case (MR_Integer) 0:
#line 807 "inst_check.m"
        {
#line 807 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtor_5;
#line 807 "inst_check.m"
          MR_Word check_hlds__inst_check__V_13_13 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3), (MR_Integer) 0);
#line 807 "inst_check.m"
          MR_Word check_hlds__inst_check__V_6_6;

#line 807 "inst_check.m"
          check_hlds__inst_check__TypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_13_13, (MR_Integer) 0)));
#line 807 "inst_check.m"
          check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_13_13, (MR_Integer) 1)));
#line 808 "inst_check.m"
          {
#line 808 "inst_check.m"
            return check_hlds__inst_check__Str_4 = parse_tree__prog_out__type_ctor_to_string_1_f_0(check_hlds__inst_check__TypeCtor_5);
          }
#line 807 "inst_check.m"
        }
#line 807 "inst_check.m"
        break;
#line 807 "inst_check.m"
      case (MR_Integer) 1:
#line 810 "inst_check.m"
        {
#line 810 "inst_check.m"
          MR_Word check_hlds__inst_check__BuiltinType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

#line 814 "inst_check.m"
          check_hlds__inst_check__Str_4 = ((&check_hlds__inst_check_vector_common_8[0 + check_hlds__inst_check__BuiltinType_7]))->check_hlds__inst_check__vector_common_type_8_0__vct_8_f_0;
#line 810 "inst_check.m"
        }
#line 807 "inst_check.m"
        break;
#line 807 "inst_check.m"
      case (MR_Integer) 2:
#line 825 "inst_check.m"
        {
#line 825 "inst_check.m"
          MR_Integer check_hlds__inst_check__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));
#line 825 "inst_check.m"
          MR_String check_hlds__inst_check__V_14_14;

#line 826 "inst_check.m"
          {
#line 826 "inst_check.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_3[13], check_hlds__inst_check__Arity_8, &check_hlds__inst_check__V_14_14);
          }
#line 826 "inst_check.m"
          {
#line 826 "inst_check.m"
            return check_hlds__inst_check__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", check_hlds__inst_check__V_14_14);
          }
#line 825 "inst_check.m"
        }
#line 807 "inst_check.m"
        break;
#line 807 "inst_check.m"
    }
#line 807 "inst_check.m"
    return check_hlds__inst_check__Str_4;
#line 807 "inst_check.m"
  }
#line 803 "inst_check.m"
}

#line 791 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 791 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 791 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
#line 791 "inst_check.m"
{
#line 794 "inst_check.m"
  {
#line 794 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 794 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 794 "inst_check.m"
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "inst_check.m"
    else
#line 795 "inst_check.m"
      {
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorInfo_36_36;
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatch_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatches_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__TailPieces_9;
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_11;
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__BoundInstPieces_12;
#line 795 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_13_13 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__V_15_15;
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__V_18_18;
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__V_19_19;
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__V_20_20;
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__V_23_23;
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__V_24_24;
#line 795 "inst_check.m"
        MR_String check_hlds__inst_check__V_25_25;
#line 795 "inst_check.m"
        MR_Word check_hlds__inst_check__V_35_35;
#line 797 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_10_10;

#line 796 "inst_check.m"
        {
#line 796 "inst_check.m"
          check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(check_hlds__inst_check__Mismatches_6, check_hlds__inst_check__V_13_13, &check_hlds__inst_check__TailPieces_9);
        }
#line 797 "inst_check.m"
        check_hlds__inst_check__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 0)));
#line 797 "inst_check.m"
        check_hlds__inst_check__TypeDefnOrBuiltin_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 1)));
#line 797 "inst_check.m"
        check_hlds__inst_check__BoundInstPieces_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 2)));
#line 3011 "check_hlds.inst_check.c"
        check_hlds__inst_check__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 798 "inst_check.m"
        {
#line 798 "inst_check.m"
          check_hlds__inst_check__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 798 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 1) = ((MR_Box) (check_hlds__inst_check__HeadVar__2_2));
#line 798 "inst_check.m"
        }
#line 799 "inst_check.m"
        {
#line 799 "inst_check.m"
          check_hlds__inst_check__V_25_25 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__TypeDefnOrBuiltin_11);
        }
#line 799 "inst_check.m"
        {
#line 799 "inst_check.m"
          check_hlds__inst_check__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 799 "inst_check.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_24_24, 0) = ((MR_Box) (check_hlds__inst_check__V_25_25));
#line 799 "inst_check.m"
        }
#line 799 "inst_check.m"
        {
#line 799 "inst_check.m"
          check_hlds__inst_check__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_23_23, 0) = ((MR_Box) (check_hlds__inst_check__V_24_24));
#line 799 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[19])));
#line 799 "inst_check.m"
        }
#line 798 "inst_check.m"
        {
#line 798 "inst_check.m"
          check_hlds__inst_check__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[33])));
#line 798 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_20_20, 1) = ((MR_Box) (check_hlds__inst_check__V_23_23));
#line 798 "inst_check.m"
        }
#line 798 "inst_check.m"
        {
#line 798 "inst_check.m"
          check_hlds__inst_check__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 0) = ((MR_Box) (check_hlds__inst_check__V_19_19));
#line 798 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 1) = ((MR_Box) (check_hlds__inst_check__V_20_20));
#line 798 "inst_check.m"
        }
#line 798 "inst_check.m"
        {
#line 798 "inst_check.m"
          check_hlds__inst_check__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[32])));
#line 798 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_15_15, 1) = ((MR_Box) (check_hlds__inst_check__V_18_18));
#line 798 "inst_check.m"
        }
#line 801 "inst_check.m"
        {
#line 801 "inst_check.m"
          check_hlds__inst_check__V_35_35 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_36_36, check_hlds__inst_check__BoundInstPieces_12, check_hlds__inst_check__TailPieces_9);
        }
#line 801 "inst_check.m"
        {
#line 801 "inst_check.m"
          *check_hlds__inst_check__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_36_36, check_hlds__inst_check__V_15_15, check_hlds__inst_check__V_35_35);
        }
#line 795 "inst_check.m"
      }
#line 794 "inst_check.m"
  }
#line 791 "inst_check.m"
}

#line 768 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
#line 768 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 768 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 768 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
#line 768 "inst_check.m"
{
#line 771 "inst_check.m"
  {
#line 771 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 771 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "inst_check.m"
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 771 "inst_check.m"
    else
#line 772 "inst_check.m"
      {
#line 772 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatch_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 772 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatches_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 772 "inst_check.m"
        MR_Integer check_hlds__inst_check__NumMismatches_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 0)));
#line 773 "inst_check.m"
        MR_Word check_hlds__inst_check__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 1)));
#line 773 "inst_check.m"
        MR_Word check_hlds__inst_check__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 2)));

#line 774 "inst_check.m"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__HeadVar__1_1 == check_hlds__inst_check__NumMismatches_9);
#line 777 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 775 "inst_check.m"
          {
#line 775 "inst_check.m"
            MR_Word check_hlds__inst_check__TakenTail_12;

#line 775 "inst_check.m"
            {
#line 775 "inst_check.m"
              check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Mismatches_7, &check_hlds__inst_check__TakenTail_12);
            }
#line 776 "inst_check.m"
            {
#line 776 "inst_check.m"
              MR_Word base;
#line 776 "inst_check.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "inst_check.m"
              *check_hlds__inst_check__HeadVar__3_3 = base;
#line 776 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Mismatch_6));
#line 776 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__TakenTail_12));
#line 776 "inst_check.m"
            }
#line 775 "inst_check.m"
          }
#line 777 "inst_check.m"
        else
#line 778 "inst_check.m"
          *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 772 "inst_check.m"
      }
#line 771 "inst_check.m"
  }
#line 768 "inst_check.m"
}

#line 746 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_mismatch_pieces_2_p_0(
#line 746 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 746 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__2_2)
#line 746 "inst_check.m"
{
#line 749 "inst_check.m"
  {
#line 749 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 749 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 749 "inst_check.m"
      *check_hlds__inst_check__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 749 "inst_check.m"
    else
#line 750 "inst_check.m"
      {
#line 750 "inst_check.m"
        MR_Word check_hlds__inst_check__FirstMismatch_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 750 "inst_check.m"
        MR_Word check_hlds__inst_check__LaterMismatches_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 750 "inst_check.m"
        MR_Integer check_hlds__inst_check__FirstNumMismatches_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 0)));
#line 750 "inst_check.m"
        MR_Word check_hlds__inst_check__TakenLaterMismatches_9;
#line 751 "inst_check.m"
        MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 1)));
#line 751 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 2)));

#line 752 "inst_check.m"
        {
#line 752 "inst_check.m"
          check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(check_hlds__inst_check__FirstNumMismatches_6, check_hlds__inst_check__LaterMismatches_4, &check_hlds__inst_check__TakenLaterMismatches_9);
        }
#line 757 "inst_check.m"
        if ((check_hlds__inst_check__TakenLaterMismatches_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 784 "inst_check.m"
          {
#line 784 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 1)));
#line 784 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInstPieces_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 2)));
#line 784 "inst_check.m"
            MR_Word check_hlds__inst_check__V_34_34;
#line 784 "inst_check.m"
            MR_Word check_hlds__inst_check__V_37_37;
#line 784 "inst_check.m"
            MR_Word check_hlds__inst_check__V_38_38;
#line 784 "inst_check.m"
            MR_String check_hlds__inst_check__V_39_39;
#line 785 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 0)));

#line 787 "inst_check.m"
            {
#line 787 "inst_check.m"
              check_hlds__inst_check__V_39_39 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__TypeDefnOrBuiltin_32);
            }
#line 787 "inst_check.m"
            {
#line 787 "inst_check.m"
              check_hlds__inst_check__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 787 "inst_check.m"
              MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_38_38, 0) = ((MR_Box) (check_hlds__inst_check__V_39_39));
#line 787 "inst_check.m"
            }
#line 787 "inst_check.m"
            {
#line 787 "inst_check.m"
              check_hlds__inst_check__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_37_37, 0) = ((MR_Box) (check_hlds__inst_check__V_38_38));
#line 787 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[19])));
#line 787 "inst_check.m"
            }
#line 786 "inst_check.m"
            {
#line 786 "inst_check.m"
              check_hlds__inst_check__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[30])));
#line 786 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_34_34, 1) = ((MR_Box) (check_hlds__inst_check__V_37_37));
#line 786 "inst_check.m"
            }
#line 789 "inst_check.m"
            {
#line 789 "inst_check.m"
              *check_hlds__inst_check__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__V_34_34, check_hlds__inst_check__BoundInstPieces_33);
            }
#line 784 "inst_check.m"
          }
#line 757 "inst_check.m"
        else
#line 758 "inst_check.m"
          {
#line 758 "inst_check.m"
            MR_Word check_hlds__inst_check__RelevantMismatches_12;
#line 758 "inst_check.m"
            MR_Integer check_hlds__inst_check__NumRelevantMismatches_13;
#line 758 "inst_check.m"
            MR_Word check_hlds__inst_check__HeadPieces_14;
#line 758 "inst_check.m"
            MR_Word check_hlds__inst_check__TailPieces_15;
#line 758 "inst_check.m"
            MR_Word check_hlds__inst_check__V_18_18;
#line 758 "inst_check.m"
            MR_Word check_hlds__inst_check__V_19_19;

#line 759 "inst_check.m"
            {
#line 759 "inst_check.m"
              check_hlds__inst_check__RelevantMismatches_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__RelevantMismatches_12, 0) = ((MR_Box) (check_hlds__inst_check__FirstMismatch_3));
#line 759 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__RelevantMismatches_12, 1) = ((MR_Box) (check_hlds__inst_check__TakenLaterMismatches_9));
#line 759 "inst_check.m"
            }
#line 760 "inst_check.m"
            {
#line 760 "inst_check.m"
              mercury__list__length_2_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0, check_hlds__inst_check__RelevantMismatches_12, &check_hlds__inst_check__NumRelevantMismatches_13);
            }
#line 761 "inst_check.m"
            {
#line 761 "inst_check.m"
              check_hlds__inst_check__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "inst_check.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 761 "inst_check.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 1) = ((MR_Box) (check_hlds__inst_check__NumRelevantMismatches_13));
#line 761 "inst_check.m"
            }
#line 761 "inst_check.m"
            {
#line 761 "inst_check.m"
              check_hlds__inst_check__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 0) = ((MR_Box) (check_hlds__inst_check__V_19_19));
#line 761 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[15])));
#line 761 "inst_check.m"
            }
#line 761 "inst_check.m"
            {
#line 761 "inst_check.m"
              check_hlds__inst_check__HeadPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[31])));
#line 761 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadPieces_14, 1) = ((MR_Box) (check_hlds__inst_check__V_18_18));
#line 761 "inst_check.m"
            }
#line 763 "inst_check.m"
            {
#line 763 "inst_check.m"
              check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(check_hlds__inst_check__RelevantMismatches_12, (MR_Integer) 1, &check_hlds__inst_check__TailPieces_15);
            }
#line 765 "inst_check.m"
            {
#line 765 "inst_check.m"
              *check_hlds__inst_check__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__HeadPieces_14, check_hlds__inst_check__TailPieces_15);
            }
#line 758 "inst_check.m"
          }
#line 750 "inst_check.m"
      }
#line 749 "inst_check.m"
  }
#line 746 "inst_check.m"
}

#line 730 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_mismatch_6_p_0(
#line 730 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_7,
#line 730 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInst_8,
#line 730 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16,
#line 730 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17,
#line 730 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18,
#line 730 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19)
#line 730 "inst_check.m"
{
#line 733 "inst_check.m"
  {
#line 733 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 733 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_46_46;
#line 733 "inst_check.m"
    MR_Word check_hlds__inst_check__ConsId_11;
#line 733 "inst_check.m"
    MR_Word check_hlds__inst_check__SubInsts_12;
#line 733 "inst_check.m"
    MR_String check_hlds__inst_check__InFunctorStr_13;
#line 733 "inst_check.m"
    MR_String check_hlds__inst_check__ActualStr_14;
#line 733 "inst_check.m"
    MR_Word check_hlds__inst_check__Pieces_15;
#line 733 "inst_check.m"
    MR_String check_hlds__inst_check__V_29_29;
#line 733 "inst_check.m"
    MR_Integer check_hlds__inst_check__V_33_33;
#line 733 "inst_check.m"
    MR_Word check_hlds__inst_check__V_35_35;
#line 733 "inst_check.m"
    MR_Word check_hlds__inst_check__V_36_36;
#line 733 "inst_check.m"
    MR_Word check_hlds__inst_check__V_38_38;
#line 733 "inst_check.m"
    MR_Word check_hlds__inst_check__V_39_39;
#line 733 "inst_check.m"
    MR_Word check_hlds__inst_check__V_44_44;
#line 733 "inst_check.m"
    MR_String check_hlds__inst_check__V_48_48;
#line 733 "inst_check.m"
    MR_Word check_hlds__inst_check__V_54_54;
#line 733 "inst_check.m"
    MR_String check_hlds__inst_check__V_55_55;
#line 733 "inst_check.m"
    MR_String check_hlds__inst_check__V_58_58;
#line 733 "inst_check.m"
    MR_String check_hlds__inst_check__V_65_65;
#line 733 "inst_check.m"
    MR_String check_hlds__inst_check__V_67_67;
#line 733 "inst_check.m"
    MR_String check_hlds__inst_check__V_68_68;
#line 733 "inst_check.m"
    MR_String check_hlds__inst_check__V_75_75;

#line 734 "inst_check.m"
    *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17 = (check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16 + (MR_Integer) 1);
#line 735 "inst_check.m"
    check_hlds__inst_check__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_8, (MR_Integer) 0)));
#line 735 "inst_check.m"
    check_hlds__inst_check__SubInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_8, (MR_Integer) 1)));
#line 3419 "check_hlds.inst_check.c"
    check_hlds__inst_check__V_54_54 = (MR_Word) &check_hlds__inst_check_scalar_common_3[13];
#line 736 "inst_check.m"
    {
#line 736 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_54_54, check_hlds__inst_check__CurNum_7, &check_hlds__inst_check__V_48_48);
    }
#line 736 "inst_check.m"
    {
#line 736 "inst_check.m"
      check_hlds__inst_check__V_55_55 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_48_48, (MR_String) ":");
    }
#line 736 "inst_check.m"
    {
#line 736 "inst_check.m"
      check_hlds__inst_check__InFunctorStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", check_hlds__inst_check__V_55_55);
    }
#line 738 "inst_check.m"
    {
#line 738 "inst_check.m"
      check_hlds__inst_check__V_29_29 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 1, check_hlds__inst_check__ConsId_11);
    }
#line 739 "inst_check.m"
    {
#line 739 "inst_check.m"
      check_hlds__inst_check__V_33_33 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_check__SubInsts_12);
    }
#line 739 "inst_check.m"
    {
#line 739 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_54_54, check_hlds__inst_check__V_33_33, &check_hlds__inst_check__V_58_58);
    }
#line 737 "inst_check.m"
    {
#line 737 "inst_check.m"
      check_hlds__inst_check__V_65_65 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_58_58, (MR_String) ".");
    }
#line 737 "inst_check.m"
    {
#line 737 "inst_check.m"
      check_hlds__inst_check__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "/", check_hlds__inst_check__V_65_65);
    }
#line 738 "inst_check.m"
    {
#line 738 "inst_check.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_54_54, check_hlds__inst_check__V_29_29, &check_hlds__inst_check__V_68_68);
    }
#line 737 "inst_check.m"
    {
#line 737 "inst_check.m"
      check_hlds__inst_check__V_75_75 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_68_68, check_hlds__inst_check__V_67_67);
    }
#line 737 "inst_check.m"
    {
#line 737 "inst_check.m"
      check_hlds__inst_check__ActualStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "function symbol is ", check_hlds__inst_check__V_75_75);
    }
#line 741 "inst_check.m"
    {
#line 741 "inst_check.m"
      check_hlds__inst_check__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 741 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_35_35, 1) = ((MR_Box) (check_hlds__inst_check__InFunctorStr_13));
#line 741 "inst_check.m"
    }
#line 741 "inst_check.m"
    {
#line 741 "inst_check.m"
      check_hlds__inst_check__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 741 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_39_39, 1) = ((MR_Box) (check_hlds__inst_check__ActualStr_14));
#line 741 "inst_check.m"
    }
#line 741 "inst_check.m"
    {
#line 741 "inst_check.m"
      check_hlds__inst_check__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_38_38, 0) = ((MR_Box) (check_hlds__inst_check__V_39_39));
#line 741 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[13])));
#line 741 "inst_check.m"
    }
#line 741 "inst_check.m"
    {
#line 741 "inst_check.m"
      check_hlds__inst_check__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 741 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_36_36, 1) = ((MR_Box) (check_hlds__inst_check__V_38_38));
#line 741 "inst_check.m"
    }
#line 741 "inst_check.m"
    {
#line 741 "inst_check.m"
      check_hlds__inst_check__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_15, 0) = ((MR_Box) (check_hlds__inst_check__V_35_35));
#line 741 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_15, 1) = ((MR_Box) (check_hlds__inst_check__V_36_36));
#line 741 "inst_check.m"
    }
#line 3526 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 742 "inst_check.m"
    {
#line 742 "inst_check.m"
      check_hlds__inst_check__V_44_44 = mercury__cord__from_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_46_46, check_hlds__inst_check__Pieces_15);
    }
#line 742 "inst_check.m"
    {
#line 742 "inst_check.m"
      *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19 = mercury__cord__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_46_46, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18, check_hlds__inst_check__V_44_44);
    }
#line 733 "inst_check.m"
  }
#line 730 "inst_check.m"
}

#line 719 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0_1(
#line 719 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 719 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 719 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 719 "inst_check.m"
{
#line 719 "inst_check.m"
  {
#line 719 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 719 "inst_check.m"
    MR_String check_hlds__inst_check__conv0_HeadVar__2_2;

#line 719 "inst_check.m"
    {
#line 719 "inst_check.m"
      mercury__string__int_to_string_2_p_0(((MR_Integer) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_HeadVar__2_2);
    }
#line 719 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__2_2));
#line 719 "inst_check.m"
  }
#line 719 "inst_check.m"
}

#line 711 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0(
#line 711 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_9,
#line 711 "inst_check.m"
  MR_String check_hlds__inst_check__FunctorName_10,
#line 711 "inst_check.m"
  MR_Integer check_hlds__inst_check__ActualArity_11,
#line 711 "inst_check.m"
  MR_Word check_hlds__inst_check__ExpectedAritiesSet_12,
#line 711 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22,
#line 711 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23,
#line 711 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24,
#line 711 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25)
#line 711 "inst_check.m"
{
#line 716 "inst_check.m"
  {
#line 716 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_60_60;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_62_62;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__InFunctorStr_15;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__ExpectedArities_16;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__ExpectedArityStrs_17;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__ExpectedArityOrStr_18;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__ActualStr_19;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__ExpectedStr_20;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__Pieces_21;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_44_44;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_45_45;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_47_47;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_48_48;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_49_49;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_51_51;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_52_52;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_57_57;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__V_64_64;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_70_70;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__V_71_71;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__V_74_74;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__V_81_81;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__V_83_83;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__V_84_84;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__V_91_91;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__V_94_94;
#line 716 "inst_check.m"
    MR_String check_hlds__inst_check__V_101_101;

#line 717 "inst_check.m"
    *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23 = (check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22 + (MR_Integer) 1);
#line 3655 "check_hlds.inst_check.c"
    check_hlds__inst_check__V_70_70 = (MR_Word) &check_hlds__inst_check_scalar_common_3[13];
#line 718 "inst_check.m"
    {
#line 718 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__CurNum_9, &check_hlds__inst_check__V_64_64);
    }
#line 718 "inst_check.m"
    {
#line 718 "inst_check.m"
      check_hlds__inst_check__V_71_71 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_64_64, (MR_String) ":");
    }
#line 718 "inst_check.m"
    {
#line 718 "inst_check.m"
      check_hlds__inst_check__InFunctorStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", check_hlds__inst_check__V_71_71);
    }
#line 3672 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 722 "inst_check.m"
    {
#line 722 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__ActualArity_11, &check_hlds__inst_check__V_74_74);
    }
#line 721 "inst_check.m"
    {
#line 721 "inst_check.m"
      check_hlds__inst_check__V_81_81 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_74_74, (MR_String) ",");
    }
#line 721 "inst_check.m"
    {
#line 721 "inst_check.m"
      check_hlds__inst_check__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) " has arity ", check_hlds__inst_check__V_81_81);
    }
#line 722 "inst_check.m"
    {
#line 722 "inst_check.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__FunctorName_10, &check_hlds__inst_check__V_84_84);
    }
#line 721 "inst_check.m"
    {
#line 721 "inst_check.m"
      check_hlds__inst_check__V_91_91 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_84_84, check_hlds__inst_check__V_83_83);
    }
#line 721 "inst_check.m"
    {
#line 721 "inst_check.m"
      check_hlds__inst_check__ActualStr_19 = mercury__string__f_43_43_2_f_0((MR_String) "function symbol ", check_hlds__inst_check__V_91_91);
    }
#line 725 "inst_check.m"
    {
#line 725 "inst_check.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_60_60, check_hlds__inst_check__ExpectedAritiesSet_12, &check_hlds__inst_check__ExpectedArities_16);
    }
#line 719 "inst_check.m"
    {
#line 719 "inst_check.m"
      mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[4], check_hlds__inst_check__ExpectedArities_16, &check_hlds__inst_check__ExpectedArityStrs_17);
    }
#line 720 "inst_check.m"
    {
#line 720 "inst_check.m"
      check_hlds__inst_check__ExpectedArityOrStr_18 = mercury__string__join_list_2_f_0((MR_String) "or", check_hlds__inst_check__ExpectedArityStrs_17);
    }
#line 724 "inst_check.m"
    {
#line 724 "inst_check.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__ExpectedArityOrStr_18, &check_hlds__inst_check__V_94_94);
    }
#line 723 "inst_check.m"
    {
#line 723 "inst_check.m"
      check_hlds__inst_check__V_101_101 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_94_94, (MR_String) ".");
    }
#line 723 "inst_check.m"
    {
#line 723 "inst_check.m"
      check_hlds__inst_check__ExpectedStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "expected arity was ", check_hlds__inst_check__V_101_101);
    }
#line 726 "inst_check.m"
    {
#line 726 "inst_check.m"
      check_hlds__inst_check__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 726 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_44_44, 1) = ((MR_Box) (check_hlds__inst_check__InFunctorStr_15));
#line 726 "inst_check.m"
    }
#line 726 "inst_check.m"
    {
#line 726 "inst_check.m"
      check_hlds__inst_check__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 726 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_48_48, 1) = ((MR_Box) (check_hlds__inst_check__ActualStr_19));
#line 726 "inst_check.m"
    }
#line 727 "inst_check.m"
    {
#line 727 "inst_check.m"
      check_hlds__inst_check__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 727 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 1) = ((MR_Box) (check_hlds__inst_check__ExpectedStr_20));
#line 727 "inst_check.m"
    }
#line 727 "inst_check.m"
    {
#line 727 "inst_check.m"
      check_hlds__inst_check__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 0) = ((MR_Box) (check_hlds__inst_check__V_52_52));
#line 727 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[13])));
#line 727 "inst_check.m"
    }
#line 726 "inst_check.m"
    {
#line 726 "inst_check.m"
      check_hlds__inst_check__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 726 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_49_49, 1) = ((MR_Box) (check_hlds__inst_check__V_51_51));
#line 726 "inst_check.m"
    }
#line 726 "inst_check.m"
    {
#line 726 "inst_check.m"
      check_hlds__inst_check__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_47_47, 0) = ((MR_Box) (check_hlds__inst_check__V_48_48));
#line 726 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_47_47, 1) = ((MR_Box) (check_hlds__inst_check__V_49_49));
#line 726 "inst_check.m"
    }
#line 726 "inst_check.m"
    {
#line 726 "inst_check.m"
      check_hlds__inst_check__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 726 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_45_45, 1) = ((MR_Box) (check_hlds__inst_check__V_47_47));
#line 726 "inst_check.m"
    }
#line 726 "inst_check.m"
    {
#line 726 "inst_check.m"
      check_hlds__inst_check__Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_21, 0) = ((MR_Box) (check_hlds__inst_check__V_44_44));
#line 726 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_21, 1) = ((MR_Box) (check_hlds__inst_check__V_45_45));
#line 726 "inst_check.m"
    }
#line 3814 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 728 "inst_check.m"
    {
#line 728 "inst_check.m"
      check_hlds__inst_check__V_57_57 = mercury__cord__from_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_62_62, check_hlds__inst_check__Pieces_21);
    }
#line 728 "inst_check.m"
    {
#line 728 "inst_check.m"
      *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25 = mercury__cord__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_62_62, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24, check_hlds__inst_check__V_57_57);
    }
#line 716 "inst_check.m"
  }
#line 711 "inst_check.m"
}

#line 688 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(
#line 688 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 688 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 688 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 688 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 688 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 688 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 688 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
#line 688 "inst_check.m"
{
#line 692 "inst_check.m"
  while (MR_TRUE)
#line 692 "inst_check.m"
    {
#line 692 "inst_check.m"
      /* tailcall optimized into a loop */
#line 692 "inst_check.m"
      {
#line 692 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 692 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 692 "inst_check.m"
          {
#line 693 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 693 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 692 "inst_check.m"
          }
#line 692 "inst_check.m"
        else
#line 695 "inst_check.m"
          {
#line 695 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 695 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 695 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
#line 695 "inst_check.m"
            MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29;
#line 695 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30;
#line 695 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_33_33;
#line 696 "inst_check.m"
            MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));
#line 703 "inst_check.m"
            MR_Integer check_hlds__inst_check__ActualArity_24;

#line 697 "inst_check.m"
            check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 697 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 697 "inst_check.m"
              {
#line 697 "inst_check.m"
                check_hlds__inst_check__ActualArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 698 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__ActualArity_24 == check_hlds__inst_check__HeadVar__1_1);
#line 700 "inst_check.m"
                if (check_hlds__inst_check__succeeded)
#line 699 "inst_check.m"
                  {
#line 699 "inst_check.m"
                    check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 699 "inst_check.m"
                    check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 699 "inst_check.m"
                  }
#line 700 "inst_check.m"
                else
#line 701 "inst_check.m"
                  {
#line 701 "inst_check.m"
                    check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30);
                  }
#line 697 "inst_check.m"
              }
#line 697 "inst_check.m"
            else
#line 704 "inst_check.m"
              {
#line 704 "inst_check.m"
                check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30);
              }
#line 706 "inst_check.m"
            check_hlds__inst_check__V_33_33 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 706 "inst_check.m"
            /* direct tailcall eliminated */
#line 706 "inst_check.m"
            {
#line 706 "inst_check.m"
              MR_Integer check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__V_33_33;
#line 706 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__3__tmp_copy_3 = check_hlds__inst_check__BoundInsts_19;
#line 706 "inst_check.m"
              MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29;
#line 706 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30;

#line 706 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6;
#line 706 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4;
#line 706 "inst_check.m"
              check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__HeadVar__3__tmp_copy_3;
#line 706 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 706 "inst_check.m"
            }
#line 706 "inst_check.m"
            continue;
#line 695 "inst_check.m"
          }
#line 692 "inst_check.m"
      }
#line 692 "inst_check.m"
      break;
#line 692 "inst_check.m"
    }
#line 688 "inst_check.m"
}

#line 639 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(
#line 639 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 639 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 639 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 639 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 639 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 639 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 639 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
#line 639 "inst_check.m"
{
#line 643 "inst_check.m"
  while (MR_TRUE)
#line 643 "inst_check.m"
    {
#line 643 "inst_check.m"
      /* tailcall optimized into a loop */
#line 643 "inst_check.m"
      {
#line 643 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 643 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "inst_check.m"
          {
#line 644 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 644 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 643 "inst_check.m"
          }
#line 643 "inst_check.m"
        else
#line 646 "inst_check.m"
          {
#line 646 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 646 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 646 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
#line 646 "inst_check.m"
            MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43;
#line 646 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44;
#line 646 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_45_45;
#line 647 "inst_check.m"
            MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));

#line 655 "inst_check.m"
#line 655 "inst_check.m"
            switch (check_hlds__inst_check__HeadVar__1_1) {
#line 655 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 655 "inst_check.m"
              case (MR_Integer) 3:
#line 666 "inst_check.m"
                {
#line 664 "inst_check.m"
                  MR_Char check_hlds__inst_check__V_26_26;

#line 664 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 664 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 664 "inst_check.m"
                    {
#line 664 "inst_check.m"
                      check_hlds__inst_check__V_26_26 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 665 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 665 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 664 "inst_check.m"
                    }
#line 664 "inst_check.m"
                  else
#line 672 "inst_check.m"
                    {
#line 667 "inst_check.m"
                      MR_Word check_hlds__inst_check__SymName_27;
#line 667 "inst_check.m"
                      MR_Integer check_hlds__inst_check__ConsArity_28;
#line 667 "inst_check.m"
                      MR_Integer check_hlds__inst_check__V_37_37;
#line 667 "inst_check.m"
                      MR_String check_hlds__inst_check__V_38_38;
#line 667 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_29_29;

#line 667 "inst_check.m"
                      check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 667 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 667 "inst_check.m"
                        {
#line 667 "inst_check.m"
                          check_hlds__inst_check__SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 667 "inst_check.m"
                          check_hlds__inst_check__ConsArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 2)));
#line 667 "inst_check.m"
                          check_hlds__inst_check__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 3)));
#line 668 "inst_check.m"
                          {
#line 668 "inst_check.m"
                            check_hlds__inst_check__V_38_38 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_27);
                          }
#line 668 "inst_check.m"
                          {
#line 668 "inst_check.m"
                            check_hlds__inst_check__V_37_37 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__V_38_38);
                          }
#line 668 "inst_check.m"
                          check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_37_37 == (MR_Integer) 1);
#line 667 "inst_check.m"
                          if (check_hlds__inst_check__succeeded)
#line 669 "inst_check.m"
                            check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_28 == (MR_Integer) 0);
#line 667 "inst_check.m"
                        }
#line 672 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 671 "inst_check.m"
                        {
#line 671 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 671 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 671 "inst_check.m"
                        }
#line 672 "inst_check.m"
                      else
#line 673 "inst_check.m"
                        {
#line 673 "inst_check.m"
                          check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                        }
#line 672 "inst_check.m"
                    }
#line 666 "inst_check.m"
                }
#line 655 "inst_check.m"
                break;
#line 655 "inst_check.m"
              case (MR_Integer) 1:
#line 659 "inst_check.m"
                {
#line 657 "inst_check.m"
                  MR_Float check_hlds__inst_check__V_25_25;

#line 657 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 657 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 657 "inst_check.m"
                    {
#line 657 "inst_check.m"
                      check_hlds__inst_check__V_25_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 658 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 658 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 657 "inst_check.m"
                    }
#line 657 "inst_check.m"
                  else
#line 660 "inst_check.m"
                    {
#line 660 "inst_check.m"
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                    }
#line 659 "inst_check.m"
                }
#line 655 "inst_check.m"
                break;
#line 655 "inst_check.m"
              case (MR_Integer) 0:
#line 652 "inst_check.m"
                {
#line 650 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_24_24;

#line 650 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 650 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 650 "inst_check.m"
                    {
#line 650 "inst_check.m"
                      check_hlds__inst_check__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 651 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 651 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 650 "inst_check.m"
                    }
#line 650 "inst_check.m"
                  else
#line 653 "inst_check.m"
                    {
#line 653 "inst_check.m"
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                    }
#line 652 "inst_check.m"
                }
#line 655 "inst_check.m"
                break;
#line 655 "inst_check.m"
              case (MR_Integer) 2:
#line 679 "inst_check.m"
                {
#line 677 "inst_check.m"
                  MR_String check_hlds__inst_check__V_30_30;

#line 677 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 677 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 677 "inst_check.m"
                    {
#line 677 "inst_check.m"
                      check_hlds__inst_check__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 678 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 678 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 677 "inst_check.m"
                    }
#line 677 "inst_check.m"
                  else
#line 680 "inst_check.m"
                    {
#line 680 "inst_check.m"
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                    }
#line 679 "inst_check.m"
                }
#line 655 "inst_check.m"
                break;
#line 655 "inst_check.m"
            }
#line 683 "inst_check.m"
            check_hlds__inst_check__V_45_45 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 683 "inst_check.m"
            /* direct tailcall eliminated */
#line 683 "inst_check.m"
            {
#line 683 "inst_check.m"
              MR_Integer check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__V_45_45;
#line 683 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__3__tmp_copy_3 = check_hlds__inst_check__BoundInsts_19;
#line 683 "inst_check.m"
              MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43;
#line 683 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44;

#line 683 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6;
#line 683 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4;
#line 683 "inst_check.m"
              check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__HeadVar__3__tmp_copy_3;
#line 683 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 683 "inst_check.m"
            }
#line 683 "inst_check.m"
            continue;
#line 646 "inst_check.m"
          }
#line 643 "inst_check.m"
      }
#line 643 "inst_check.m"
      break;
#line 643 "inst_check.m"
    }
#line 639 "inst_check.m"
}

#line 617 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(
#line 617 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 617 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 617 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3,
#line 617 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4,
#line 617 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5)
#line 617 "inst_check.m"
{
#line 620 "inst_check.m"
  while (MR_TRUE)
#line 620 "inst_check.m"
    {
#line 620 "inst_check.m"
      /* tailcall optimized into a loop */
#line 620 "inst_check.m"
      {
#line 620 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 620 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4;
#line 620 "inst_check.m"
        else
#line 623 "inst_check.m"
          {
#line 623 "inst_check.m"
            MR_Word check_hlds__inst_check__Ctor_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 623 "inst_check.m"
            MR_Word check_hlds__inst_check__Ctors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 623 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 2)));
#line 623 "inst_check.m"
            MR_Integer check_hlds__inst_check__ConsArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 4)));
#line 623 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24;
#line 624 "inst_check.m"
            MR_Word check_hlds__inst_check___ExistTVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 0)));
#line 624 "inst_check.m"
            MR_Word check_hlds__inst_check___Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 1)));
#line 624 "inst_check.m"
            MR_Word check_hlds__inst_check___ConsArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 3)));
#line 624 "inst_check.m"
            MR_Word check_hlds__inst_check___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 5)));
#line 627 "inst_check.m"
            MR_String check_hlds__inst_check__V_27_27;

#line 627 "inst_check.m"
            {
#line 627 "inst_check.m"
              check_hlds__inst_check__V_27_27 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__ConsName_18);
            }
#line 627 "inst_check.m"
            check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__V_27_27) == 0);
#line 627 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 627 "inst_check.m"
              {
#line 628 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_20 == check_hlds__inst_check__HeadVar__3_3);
#line 628 "inst_check.m"
                check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 627 "inst_check.m"
              }
#line 631 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 630 "inst_check.m"
              {
#line 630 "inst_check.m"
                {
#line 630 "inst_check.m"
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__inst_check__ConsArity_20)), check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4, &check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24);
                }
#line 630 "inst_check.m"
              }
#line 631 "inst_check.m"
            else
#line 631 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4;
#line 634 "inst_check.m"
            /* direct tailcall eliminated */
#line 634 "inst_check.m"
            {
#line 634 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__1__tmp_copy_1 = check_hlds__inst_check__Ctors_12;
#line 634 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24;

#line 634 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0__tmp_copy_4;
#line 634 "inst_check.m"
              check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__HeadVar__1__tmp_copy_1;
#line 634 "inst_check.m"
            }
#line 634 "inst_check.m"
            continue;
#line 623 "inst_check.m"
          }
#line 620 "inst_check.m"
      }
#line 620 "inst_check.m"
      break;
#line 620 "inst_check.m"
    }
#line 617 "inst_check.m"
}

#line 600 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(
#line 600 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 600 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 600 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3)
#line 600 "inst_check.m"
{
#line 4381 "check_hlds.inst_check.c"
  while (MR_TRUE)
#line 4383 "check_hlds.inst_check.c"
    {
#line 4385 "check_hlds.inst_check.c"
      /* tailcall optimized into a loop */
#line 4387 "check_hlds.inst_check.c"
      {
#line 4389 "check_hlds.inst_check.c"
        MR_bool check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 4391 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__Ctor_6;
#line 4393 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__Ctors_7;
#line 4395 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__ConsName_12;
#line 4397 "check_hlds.inst_check.c"
        MR_Integer check_hlds__inst_check__ConsArity_14;
#line 606 "inst_check.m"
        MR_Word check_hlds__inst_check___ExistTVars_10;
#line 606 "inst_check.m"
        MR_Word check_hlds__inst_check___Constraints_11;
#line 606 "inst_check.m"
        MR_Word check_hlds__inst_check___ConsArgs_13;
#line 606 "inst_check.m"
        MR_Word check_hlds__inst_check___Context_15;
#line 609 "inst_check.m"
        MR_String check_hlds__inst_check__V_16_16;

#line 4410 "check_hlds.inst_check.c"
        if (check_hlds__inst_check__succeeded)
#line 4412 "check_hlds.inst_check.c"
          {
#line 4414 "check_hlds.inst_check.c"
            check_hlds__inst_check__Ctor_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 4416 "check_hlds.inst_check.c"
            check_hlds__inst_check__Ctors_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 606 "inst_check.m"
            check_hlds__inst_check___ExistTVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 0)));
#line 606 "inst_check.m"
            check_hlds__inst_check___Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 1)));
#line 606 "inst_check.m"
            check_hlds__inst_check__ConsName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 2)));
#line 606 "inst_check.m"
            check_hlds__inst_check___ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 3)));
#line 606 "inst_check.m"
            check_hlds__inst_check__ConsArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 4)));
#line 606 "inst_check.m"
            check_hlds__inst_check___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 5)));
#line 609 "inst_check.m"
            {
#line 609 "inst_check.m"
              check_hlds__inst_check__V_16_16 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__ConsName_12);
            }
#line 609 "inst_check.m"
            check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__V_16_16) == 0);
#line 609 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 610 "inst_check.m"
              check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_14 == check_hlds__inst_check__HeadVar__3_3);
#line 613 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 612 "inst_check.m"
              check_hlds__inst_check__succeeded = MR_TRUE;
#line 613 "inst_check.m"
            else
#line 614 "inst_check.m"
              {
#line 614 "inst_check.m"
                /* direct tailcall eliminated */
#line 614 "inst_check.m"
                {
#line 614 "inst_check.m"
                  MR_Word check_hlds__inst_check__HeadVar__1__tmp_copy_1 = check_hlds__inst_check__Ctors_7;

#line 614 "inst_check.m"
                  check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__HeadVar__1__tmp_copy_1;
#line 614 "inst_check.m"
                }
#line 614 "inst_check.m"
                continue;
#line 614 "inst_check.m"
              }
#line 4464 "check_hlds.inst_check.c"
          }
#line 4466 "check_hlds.inst_check.c"
        return check_hlds__inst_check__succeeded;
#line 4468 "check_hlds.inst_check.c"
      }
#line 4470 "check_hlds.inst_check.c"
      break;
#line 4472 "check_hlds.inst_check.c"
    }
#line 600 "inst_check.m"
}

#line 567 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0(
#line 567 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 567 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 567 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 567 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 567 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 567 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 567 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
#line 567 "inst_check.m"
{
#line 571 "inst_check.m"
  while (MR_TRUE)
#line 571 "inst_check.m"
    {
#line 571 "inst_check.m"
      /* tailcall optimized into a loop */
#line 571 "inst_check.m"
      {
#line 571 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 571 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "inst_check.m"
          {
#line 572 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 572 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 571 "inst_check.m"
          }
#line 571 "inst_check.m"
        else
#line 574 "inst_check.m"
          {
#line 574 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 574 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 574 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
#line 574 "inst_check.m"
            MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34;
#line 574 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35;
#line 574 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_40_40;
#line 575 "inst_check.m"
            MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));
#line 594 "inst_check.m"
            MR_Word check_hlds__inst_check__SymName_24;
#line 594 "inst_check.m"
            MR_Integer check_hlds__inst_check__Arity_25;
#line 577 "inst_check.m"
            MR_Word check_hlds__inst_check__V_26_26;

#line 577 "inst_check.m"
            check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 577 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 577 "inst_check.m"
              {
#line 577 "inst_check.m"
                check_hlds__inst_check__SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 577 "inst_check.m"
                check_hlds__inst_check__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 2)));
#line 577 "inst_check.m"
                check_hlds__inst_check__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 3)));
#line 579 "inst_check.m"
                {
#line 579 "inst_check.m"
                  MR_String check_hlds__inst_check__FunctorName_27;

#line 579 "inst_check.m"
                  {
#line 579 "inst_check.m"
                    check_hlds__inst_check__FunctorName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_24);
                  }
#line 581 "inst_check.m"
                  {
#line 581 "inst_check.m"
                    check_hlds__inst_check__succeeded = check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25);
                  }
#line 584 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 583 "inst_check.m"
                    {
#line 583 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 583 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 583 "inst_check.m"
                    }
#line 584 "inst_check.m"
                  else
#line 586 "inst_check.m"
                    {
#line 586 "inst_check.m"
                      MR_Word check_hlds__inst_check__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 586 "inst_check.m"
                      MR_Word check_hlds__inst_check__ExpectedArities_28;
#line 586 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_33_33;

#line 586 "inst_check.m"
                      {
#line 586 "inst_check.m"
                        check_hlds__inst_check__V_33_33 = mercury__set__init_0_f_0(check_hlds__inst_check__TypeCtorInfo_44_44);
                      }
#line 585 "inst_check.m"
                      {
#line 585 "inst_check.m"
                        check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25, check_hlds__inst_check__V_33_33, &check_hlds__inst_check__ExpectedArities_28);
                      }
#line 587 "inst_check.m"
                      {
#line 587 "inst_check.m"
                        check_hlds__inst_check__succeeded = mercury__set__is_empty_1_p_0(check_hlds__inst_check__TypeCtorInfo_44_44, check_hlds__inst_check__ExpectedArities_28);
                      }
#line 589 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 588 "inst_check.m"
                        {
#line 588 "inst_check.m"
                          check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
                        }
#line 589 "inst_check.m"
                      else
#line 590 "inst_check.m"
                        {
#line 590 "inst_check.m"
                          check_hlds__inst_check__record_arity_mismatch_8_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25, check_hlds__inst_check__ExpectedArities_28, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
                        }
#line 586 "inst_check.m"
                    }
#line 579 "inst_check.m"
                }
#line 577 "inst_check.m"
              }
#line 577 "inst_check.m"
            else
#line 595 "inst_check.m"
              {
#line 595 "inst_check.m"
                check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
              }
#line 597 "inst_check.m"
            check_hlds__inst_check__V_40_40 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 597 "inst_check.m"
            /* direct tailcall eliminated */
#line 597 "inst_check.m"
            {
#line 597 "inst_check.m"
              MR_Integer check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__V_40_40;
#line 597 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__3__tmp_copy_3 = check_hlds__inst_check__BoundInsts_19;
#line 597 "inst_check.m"
              MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34;
#line 597 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35;

#line 597 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6;
#line 597 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4;
#line 597 "inst_check.m"
              check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__HeadVar__3__tmp_copy_3;
#line 597 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 597 "inst_check.m"
            }
#line 597 "inst_check.m"
            continue;
#line 574 "inst_check.m"
          }
#line 571 "inst_check.m"
      }
#line 571 "inst_check.m"
      break;
#line 571 "inst_check.m"
    }
#line 567 "inst_check.m"
}

#line 531 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
#line 531 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_4,
#line 531 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_5,
#line 531 "inst_check.m"
  MR_Word * check_hlds__inst_check__MismatchFromType_6)
#line 531 "inst_check.m"
{
#line 535 "inst_check.m"
  {
#line 535 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 535 "inst_check.m"
    MR_Integer check_hlds__inst_check__NumMismatches_25;
#line 535 "inst_check.m"
    MR_Word check_hlds__inst_check__MismatchPiecesCord_26;
#line 535 "inst_check.m"
    MR_Word check_hlds__inst_check__MismatchPieces_29;

#line 552 "inst_check.m"
#line 552 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_5)) {
#line 552 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 552 "inst_check.m"
      case (MR_Integer) 0:
#line 537 "inst_check.m"
        {
#line 537 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtorAndDefn_7 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_5), (MR_Integer) 0);
#line 537 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_7, (MR_Integer) 1)));
#line 537 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeDefnBody_10;
#line 537 "inst_check.m"
          MR_Word check_hlds__inst_check__Constructors_11;
#line 537 "inst_check.m"
          MR_Word check_hlds__inst_check__V_41_41;
#line 538 "inst_check.m"
          MR_Word check_hlds__inst_check___TypeCtor_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_7, (MR_Integer) 0)));

#line 539 "inst_check.m"
          {
#line 539 "inst_check.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDefn_9, &check_hlds__inst_check__TypeDefnBody_10);
          }
#line 542 "inst_check.m"
#line 542 "inst_check.m"
          switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnBody_10)) {
#line 542 "inst_check.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 542 "inst_check.m"
            case (MR_Integer) 0:
#line 547 "inst_check.m"
              {
#line 548 "inst_check.m"
                {
#line 548 "inst_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
#line 548 "inst_check.m"
                  return;
                }
#line 547 "inst_check.m"
              }
#line 542 "inst_check.m"
              break;
#line 542 "inst_check.m"
            case (MR_Integer) 1:
#line 541 "inst_check.m"
              {
#line 541 "inst_check.m"
                MR_Word check_hlds__inst_check__V_12_12;
#line 541 "inst_check.m"
                MR_Word check_hlds__inst_check__V_13_13;
#line 541 "inst_check.m"
                MR_Word check_hlds__inst_check__V_14_14;
#line 541 "inst_check.m"
                MR_Word check_hlds__inst_check__V_15_15;
#line 541 "inst_check.m"
                MR_Word check_hlds__inst_check__V_16_16;
#line 541 "inst_check.m"
                MR_Word check_hlds__inst_check__V_17_17;
#line 541 "inst_check.m"
                MR_Word check_hlds__inst_check__V_18_18;
#line 541 "inst_check.m"
                MR_Word check_hlds__inst_check__V_19_19;

#line 541 "inst_check.m"
                check_hlds__inst_check__Constructors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 0)));
#line 541 "inst_check.m"
                check_hlds__inst_check__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 1)));
#line 541 "inst_check.m"
                check_hlds__inst_check__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 2)));
#line 541 "inst_check.m"
                check_hlds__inst_check__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 3)));
#line 541 "inst_check.m"
                check_hlds__inst_check__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 4)));
#line 541 "inst_check.m"
                check_hlds__inst_check__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 5)));
#line 541 "inst_check.m"
                check_hlds__inst_check__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 541 "inst_check.m"
                check_hlds__inst_check__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 541 "inst_check.m"
                check_hlds__inst_check__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 7)));
#line 541 "inst_check.m"
              }
#line 542 "inst_check.m"
              break;
#line 542 "inst_check.m"
            case (MR_Integer) 2:
#line 547 "inst_check.m"
              {
#line 548 "inst_check.m"
                {
#line 548 "inst_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
#line 548 "inst_check.m"
                  return;
                }
#line 547 "inst_check.m"
              }
#line 542 "inst_check.m"
              break;
#line 542 "inst_check.m"
            case (MR_Integer) 3:
#line 547 "inst_check.m"
              {
#line 548 "inst_check.m"
                {
#line 548 "inst_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
#line 548 "inst_check.m"
                  return;
                }
#line 547 "inst_check.m"
              }
#line 542 "inst_check.m"
              break;
#line 542 "inst_check.m"
          }
#line 551 "inst_check.m"
          {
#line 551 "inst_check.m"
            check_hlds__inst_check__V_41_41 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          }
#line 550 "inst_check.m"
          {
#line 550 "inst_check.m"
            check_hlds__inst_check__find_mismatches_from_user_7_p_0(check_hlds__inst_check__Constructors_11, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_25, check_hlds__inst_check__V_41_41, &check_hlds__inst_check__MismatchPiecesCord_26);
          }
#line 537 "inst_check.m"
        }
#line 552 "inst_check.m"
        break;
#line 552 "inst_check.m"
      case (MR_Integer) 1:
#line 553 "inst_check.m"
        {
#line 553 "inst_check.m"
          MR_Word check_hlds__inst_check__BuiltinType_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_5, (MR_Integer) 0)));
#line 553 "inst_check.m"
          MR_Word check_hlds__inst_check__V_35_35;

#line 555 "inst_check.m"
          {
#line 555 "inst_check.m"
            check_hlds__inst_check__V_35_35 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          }
#line 554 "inst_check.m"
          {
#line 554 "inst_check.m"
            check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(check_hlds__inst_check__BuiltinType_27, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_25, check_hlds__inst_check__V_35_35, &check_hlds__inst_check__MismatchPiecesCord_26);
          }
#line 553 "inst_check.m"
        }
#line 552 "inst_check.m"
        break;
#line 552 "inst_check.m"
      case (MR_Integer) 2:
#line 557 "inst_check.m"
        {
#line 557 "inst_check.m"
          MR_Integer check_hlds__inst_check__TupleArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_5, (MR_Integer) 0)));
#line 557 "inst_check.m"
          MR_Word check_hlds__inst_check__V_32_32;

#line 559 "inst_check.m"
          {
#line 559 "inst_check.m"
            check_hlds__inst_check__V_32_32 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          }
#line 558 "inst_check.m"
          {
#line 558 "inst_check.m"
            check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(check_hlds__inst_check__TupleArity_28, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_25, check_hlds__inst_check__V_32_32, &check_hlds__inst_check__MismatchPiecesCord_26);
          }
#line 557 "inst_check.m"
        }
#line 552 "inst_check.m"
        break;
#line 552 "inst_check.m"
    }
#line 561 "inst_check.m"
    {
#line 561 "inst_check.m"
      check_hlds__inst_check__MismatchPieces_29 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__MismatchPiecesCord_26);
    }
#line 562 "inst_check.m"
    {
#line 562 "inst_check.m"
      MR_Word base;
#line 562 "inst_check.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 562 "inst_check.m"
      *check_hlds__inst_check__MismatchFromType_6 = base;
#line 562 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__NumMismatches_25));
#line 562 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__TypeDefnOrBuiltin_5));
#line 562 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_check__MismatchPieces_29));
#line 562 "inst_check.m"
    }
#line 535 "inst_check.m"
  }
#line 531 "inst_check.m"
}

#line 505 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_6(
#line 505 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 505 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1)
#line 505 "inst_check.m"
{
#line 505 "inst_check.m"
  {
#line 505 "inst_check.m"
    MR_Box check_hlds__inst_check__wrapper_arg_2;
#line 505 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 505 "inst_check.m"
    MR_String check_hlds__inst_check__conv2_Str_4;

#line 505 "inst_check.m"
    {
#line 505 "inst_check.m"
      check_hlds__inst_check__conv2_Str_4 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1));
    }
#line 505 "inst_check.m"
    check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv2_Str_4));
#line 505 "inst_check.m"
    return check_hlds__inst_check__wrapper_arg_2;
#line 505 "inst_check.m"
  }
#line 505 "inst_check.m"
}

#line 454 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_1(
#line 454 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 454 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 454 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 454 "inst_check.m"
{
#line 454 "inst_check.m"
  {
#line 454 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 454 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_MismatchFromType_6;

#line 454 "inst_check.m"
    {
#line 454 "inst_check.m"
      check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_MismatchFromType_6);
    }
#line 454 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_MismatchFromType_6));
#line 454 "inst_check.m"
  }
#line 454 "inst_check.m"
}

#line 477 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_2(
#line 477 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 477 "inst_check.m"
{
#line 477 "inst_check.m"
  {
#line 477 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 477 "inst_check.m"
    MR_builtin_longjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__commit_0, 1);
#line 477 "inst_check.m"
  }
#line 477 "inst_check.m"
}

#line 477 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_4(
#line 477 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 477 "inst_check.m"
{
#line 477 "inst_check.m"
  {
#line 477 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 477 "inst_check.m"
    (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__Type_118 = ((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__conv1_Type_118);
#line 477 "inst_check.m"
    {
#line 477 "inst_check.m"
      check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_3(check_hlds__inst_check__env_ptr);
#line 477 "inst_check.m"
      return;
    }
#line 477 "inst_check.m"
  }
#line 477 "inst_check.m"
}

#line 477 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_3(
#line 477 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 477 "inst_check.m"
{
#line 477 "inst_check.m"
  {
#line 477 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 482 "inst_check.m"
#line 482 "inst_check.m"
    switch (MR_tag((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__Type_118)) {
#line 482 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 482 "inst_check.m"
      case (MR_Integer) 0:
#line 479 "inst_check.m"
        {
#line 479 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtorAndDefn_31 = (MR_Word) MR_body(((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__Type_118), (MR_Integer) 0);
#line 479 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeDefn_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_31, (MR_Integer) 1)));
#line 480 "inst_check.m"
          MR_Word check_hlds__inst_check__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_31, (MR_Integer) 0)));

#line 481 "inst_check.m"
          {
#line 481 "inst_check.m"
            (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0((MR_Integer) 0, check_hlds__inst_check__TypeDefn_33);
          }
#line 479 "inst_check.m"
        }
#line 482 "inst_check.m"
        break;
#line 482 "inst_check.m"
      case (MR_Integer) 1:
#line 483 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 482 "inst_check.m"
        break;
#line 482 "inst_check.m"
      case (MR_Integer) 2:
#line 485 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 482 "inst_check.m"
        break;
#line 482 "inst_check.m"
    }
#line 482 "inst_check.m"
    if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded)
#line 482 "inst_check.m"
      {
#line 482 "inst_check.m"
        check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_2(check_hlds__inst_check__env_ptr);
#line 482 "inst_check.m"
        return;
      }
#line 477 "inst_check.m"
  }
#line 477 "inst_check.m"
}

#line 477 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_5(
#line 477 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 477 "inst_check.m"
{
#line 477 "inst_check.m"
  {
#line 477 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 477 "inst_check.m"
    if (MR_builtin_setjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__commit_0) == 0)
#line 477 "inst_check.m"
      {
#line 477 "inst_check.m"
        {
#line 477 "inst_check.m"
          {
#line 477 "inst_check.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, &(check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__conv1_Type_118, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11, check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_4, check_hlds__inst_check__env_ptr);
          }
#line 477 "inst_check.m"
        }
#line 477 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded = MR_FALSE;
#line 477 "inst_check.m"
      }
#line 477 "inst_check.m"
    else
#line 477 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 477 "inst_check.m"
  }
#line 477 "inst_check.m"
}

#line 431 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0(
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_8,
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_9,
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_10,
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypes_11,
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypeSets_12,
#line 431 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_43,
#line 431 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_44)
#line 431 "inst_check.m"
{
#line 431 "inst_check.m"
  {
#line 431 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s check_hlds__inst_check__env;

#line 431 "inst_check.m"
    (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11 = check_hlds__inst_check__PossibleTypes_11;
#line 437 "inst_check.m"
    {
#line 437 "inst_check.m"
      MR_Word check_hlds__inst_check__InstImportStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));
#line 437 "inst_check.m"
      MR_Word check_hlds__inst_check__DefinedInThisModule_15;
#line 438 "inst_check.m"
      MR_Word check_hlds__inst_check__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
#line 438 "inst_check.m"
      MR_Word check_hlds__inst_check__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
#line 438 "inst_check.m"
      MR_Word check_hlds__inst_check__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
#line 438 "inst_check.m"
      MR_Word check_hlds__inst_check__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
#line 438 "inst_check.m"
      MR_Word check_hlds__inst_check__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));

#line 439 "inst_check.m"
      {
#line 439 "inst_check.m"
        check_hlds__inst_check__DefinedInThisModule_15 = hlds__status__inst_status_defined_in_this_module_1_f_0(check_hlds__inst_check__InstImportStatus_14);
      }
#line 442 "inst_check.m"
#line 442 "inst_check.m"
      switch (check_hlds__inst_check__DefinedInThisModule_15) {
#line 442 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 442 "inst_check.m"
        case (MR_Integer) 0:
#line 441 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_43;
#line 442 "inst_check.m"
          break;
#line 442 "inst_check.m"
        case (MR_Integer) 1:
#line 443 "inst_check.m"
          if (((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "inst_check.m"
            {
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__TypeCtorInfo_149_149;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__TypeCtorInfo_152_152;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__InstName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 0)));
#line 445 "inst_check.m"
              MR_Integer check_hlds__inst_check__InstArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 1)));
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__NoMatchPieces_19;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__AllPossibleTypesSet_20;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__AllPossibleTypes_21;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__MismatchesFromPossibleTypes_22;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__MismatchPieces_24;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__Pieces_25;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__Spec_26;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__V_101_101;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__V_102_102;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__V_103_103;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__V_108_108;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__V_111_111;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__V_112_112;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__V_113_113;
#line 445 "inst_check.m"
              MR_Word check_hlds__inst_check__V_114_114;
#line 446 "inst_check.m"
              MR_Word check_hlds__inst_check__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
#line 446 "inst_check.m"
              MR_Word check_hlds__inst_check__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
#line 446 "inst_check.m"
              MR_Word check_hlds__inst_check__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
#line 446 "inst_check.m"
              MR_Word check_hlds__inst_check__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
#line 446 "inst_check.m"
              MR_Word check_hlds__inst_check__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));

#line 449 "inst_check.m"
              {
#line 449 "inst_check.m"
                check_hlds__inst_check__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 449 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_103_103, 0) = ((MR_Box) (check_hlds__inst_check__InstName_17));
#line 449 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_103_103, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_18));
#line 449 "inst_check.m"
              }
#line 449 "inst_check.m"
              {
#line 449 "inst_check.m"
                check_hlds__inst_check__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 449 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_102_102, 1) = ((MR_Box) (check_hlds__inst_check__V_103_103));
#line 449 "inst_check.m"
              }
#line 449 "inst_check.m"
              {
#line 449 "inst_check.m"
                check_hlds__inst_check__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_101_101, 0) = ((MR_Box) (check_hlds__inst_check__V_102_102));
#line 449 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[26])));
#line 449 "inst_check.m"
              }
#line 448 "inst_check.m"
              {
#line 448 "inst_check.m"
                check_hlds__inst_check__NoMatchPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__NoMatchPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[24])));
#line 448 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__NoMatchPieces_19, 1) = ((MR_Box) (check_hlds__inst_check__V_101_101));
#line 448 "inst_check.m"
              }
#line 5270 "check_hlds.inst_check.c"
              check_hlds__inst_check__TypeCtorInfo_149_149 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
#line 452 "inst_check.m"
              {
#line 452 "inst_check.m"
                check_hlds__inst_check__AllPossibleTypesSet_20 = mercury__set__union_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_149_149, check_hlds__inst_check__PossibleTypeSets_12);
              }
#line 453 "inst_check.m"
              {
#line 453 "inst_check.m"
                mercury__set__to_sorted_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_149_149, check_hlds__inst_check__AllPossibleTypesSet_20, &check_hlds__inst_check__AllPossibleTypes_21);
              }
#line 454 "inst_check.m"
              {
#line 454 "inst_check.m"
                check_hlds__inst_check__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 454 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_7[0]));
#line 454 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 1) = ((MR_Box) (check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_1));
#line 454 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 454 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 3) = ((MR_Box) (check_hlds__inst_check__BoundInsts_10));
#line 454 "inst_check.m"
              }
#line 5296 "check_hlds.inst_check.c"
              check_hlds__inst_check__TypeCtorInfo_152_152 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0;
#line 454 "inst_check.m"
              {
#line 454 "inst_check.m"
                mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_149_149, check_hlds__inst_check__TypeCtorInfo_152_152, check_hlds__inst_check__V_108_108, check_hlds__inst_check__AllPossibleTypes_21, &check_hlds__inst_check__MismatchesFromPossibleTypes_22);
              }
#line 456 "inst_check.m"
              {
#line 456 "inst_check.m"
                mercury__list__sort_2_p_0(check_hlds__inst_check__TypeCtorInfo_152_152, check_hlds__inst_check__MismatchesFromPossibleTypes_22, &check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23);
              }
#line 458 "inst_check.m"
              {
#line 458 "inst_check.m"
                check_hlds__inst_check__create_mismatch_pieces_2_p_0(check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23, &check_hlds__inst_check__MismatchPieces_24);
              }
#line 461 "inst_check.m"
              {
#line 461 "inst_check.m"
                check_hlds__inst_check__Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__NoMatchPieces_19, check_hlds__inst_check__MismatchPieces_24);
              }
#line 463 "inst_check.m"
              {
#line 463 "inst_check.m"
                check_hlds__inst_check__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 463 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_114_114, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_25));
#line 463 "inst_check.m"
              }
#line 463 "inst_check.m"
              {
#line 463 "inst_check.m"
                check_hlds__inst_check__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_113_113, 0) = ((MR_Box) (check_hlds__inst_check__V_114_114));
#line 463 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "inst_check.m"
              }
#line 463 "inst_check.m"
              {
#line 463 "inst_check.m"
                check_hlds__inst_check__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 463 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_112_112, 0) = ((MR_Box) (check_hlds__inst_check__Context_16));
#line 463 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_112_112, 1) = ((MR_Box) (check_hlds__inst_check__V_113_113));
#line 463 "inst_check.m"
              }
#line 463 "inst_check.m"
              {
#line 463 "inst_check.m"
                check_hlds__inst_check__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_111_111, 0) = ((MR_Box) (check_hlds__inst_check__V_112_112));
#line 463 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "inst_check.m"
              }
#line 462 "inst_check.m"
              {
#line 462 "inst_check.m"
                check_hlds__inst_check__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 462 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 462 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 462 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 2) = ((MR_Box) (check_hlds__inst_check__V_111_111));
#line 462 "inst_check.m"
              }
#line 464 "inst_check.m"
              {
#line 464 "inst_check.m"
                MR_Word base;
#line 464 "inst_check.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "inst_check.m"
                *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = base;
#line 464 "inst_check.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_26));
#line 464 "inst_check.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_43));
#line 464 "inst_check.m"
              }
#line 445 "inst_check.m"
            }
#line 443 "inst_check.m"
          else
#line 466 "inst_check.m"
            {
#line 466 "inst_check.m"
              MR_Word check_hlds__inst_check__InstIsExported_29;

#line 467 "inst_check.m"
              {
#line 467 "inst_check.m"
                check_hlds__inst_check__InstIsExported_29 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(check_hlds__inst_check__InstImportStatus_14);
              }
#line 474 "inst_check.m"
#line 474 "inst_check.m"
              switch (check_hlds__inst_check__InstIsExported_29) {
#line 474 "inst_check.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 474 "inst_check.m"
                case (MR_Integer) 0:
#line 473 "inst_check.m"
                  (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 474 "inst_check.m"
                  break;
#line 474 "inst_check.m"
                case (MR_Integer) 1:
#line 477 "inst_check.m"
                  {
#line 477 "inst_check.m"
                    {
#line 477 "inst_check.m"
                      check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_5(&check_hlds__inst_check__env);
                    }
#line 477 "inst_check.m"
                  }
#line 474 "inst_check.m"
                  break;
#line 474 "inst_check.m"
              }
#line 491 "inst_check.m"
              if ((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded)
#line 491 "inst_check.m"
                *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_43;
#line 491 "inst_check.m"
              else
#line 492 "inst_check.m"
                {
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_92_92;
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_93_93;
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_94_94;
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_95_95;
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__Context_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__InstName_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 0)));
#line 492 "inst_check.m"
                  MR_Integer check_hlds__inst_check__InstArity_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 1)));
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__Pieces_122;
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__Spec_123;
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11, (MR_Integer) 1)));
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11, (MR_Integer) 0)));
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
#line 492 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));

#line 503 "inst_check.m"
                  if ((check_hlds__inst_check__V_159_159 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "inst_check.m"
                    {
#line 495 "inst_check.m"
                      MR_String check_hlds__inst_check__OnePossibleTypeStr_37;
#line 495 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_72_72;
#line 495 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_73_73;
#line 495 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_74_74;
#line 495 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_75_75;
#line 495 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_78_78;
#line 495 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_81_81;
#line 495 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_82_82;

#line 496 "inst_check.m"
                      {
#line 496 "inst_check.m"
                        check_hlds__inst_check__OnePossibleTypeStr_37 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__V_160_160);
                      }
#line 499 "inst_check.m"
                      {
#line 499 "inst_check.m"
                        check_hlds__inst_check__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 499 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_74_74, 0) = ((MR_Box) (check_hlds__inst_check__InstName_120));
#line 499 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_74_74, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_121));
#line 499 "inst_check.m"
                      }
#line 499 "inst_check.m"
                      {
#line 499 "inst_check.m"
                        check_hlds__inst_check__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 499 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_73_73, 1) = ((MR_Box) (check_hlds__inst_check__V_74_74));
#line 499 "inst_check.m"
                      }
#line 501 "inst_check.m"
                      {
#line 501 "inst_check.m"
                        check_hlds__inst_check__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 501 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_82_82, 1) = ((MR_Box) (check_hlds__inst_check__OnePossibleTypeStr_37));
#line 501 "inst_check.m"
                      }
#line 501 "inst_check.m"
                      {
#line 501 "inst_check.m"
                        check_hlds__inst_check__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_81_81, 0) = ((MR_Box) (check_hlds__inst_check__V_82_82));
#line 501 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[9])));
#line 501 "inst_check.m"
                      }
#line 501 "inst_check.m"
                      {
#line 501 "inst_check.m"
                        check_hlds__inst_check__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[28])));
#line 501 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_78_78, 1) = ((MR_Box) (check_hlds__inst_check__V_81_81));
#line 501 "inst_check.m"
                      }
#line 500 "inst_check.m"
                      {
#line 500 "inst_check.m"
                        check_hlds__inst_check__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[27])));
#line 500 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_75_75, 1) = ((MR_Box) (check_hlds__inst_check__V_78_78));
#line 500 "inst_check.m"
                      }
#line 499 "inst_check.m"
                      {
#line 499 "inst_check.m"
                        check_hlds__inst_check__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_72_72, 0) = ((MR_Box) (check_hlds__inst_check__V_73_73));
#line 499 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_72_72, 1) = ((MR_Box) (check_hlds__inst_check__V_75_75));
#line 499 "inst_check.m"
                      }
#line 498 "inst_check.m"
                      {
#line 498 "inst_check.m"
                        check_hlds__inst_check__Pieces_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[24])));
#line 498 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 1) = ((MR_Box) (check_hlds__inst_check__V_72_72));
#line 498 "inst_check.m"
                      }
#line 495 "inst_check.m"
                    }
#line 503 "inst_check.m"
                  else
#line 504 "inst_check.m"
                    {
#line 504 "inst_check.m"
                      MR_Word check_hlds__inst_check__PossibleTypeStrs_41;
#line 504 "inst_check.m"
                      MR_String check_hlds__inst_check__PossibleTypesStr_42;
#line 504 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_51_51;
#line 504 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_52_52;
#line 504 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_53_53;
#line 504 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_54_54;
#line 504 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_57_57;
#line 504 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_60_60;
#line 504 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_61_61;

#line 505 "inst_check.m"
                      {
#line 505 "inst_check.m"
                        check_hlds__inst_check__PossibleTypeStrs_41 = mercury__list__map_2_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[3], (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11);
                      }
#line 508 "inst_check.m"
                      {
#line 508 "inst_check.m"
                        check_hlds__inst_check__PossibleTypesStr_42 = mercury__string__join_list_2_f_0((MR_String) ", ", check_hlds__inst_check__PossibleTypeStrs_41);
                      }
#line 510 "inst_check.m"
                      {
#line 510 "inst_check.m"
                        check_hlds__inst_check__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 510 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_53_53, 0) = ((MR_Box) (check_hlds__inst_check__InstName_120));
#line 510 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_53_53, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_121));
#line 510 "inst_check.m"
                      }
#line 510 "inst_check.m"
                      {
#line 510 "inst_check.m"
                        check_hlds__inst_check__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 510 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 1) = ((MR_Box) (check_hlds__inst_check__V_53_53));
#line 510 "inst_check.m"
                      }
#line 512 "inst_check.m"
                      {
#line 512 "inst_check.m"
                        check_hlds__inst_check__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 512 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_61_61, 1) = ((MR_Box) (check_hlds__inst_check__PossibleTypesStr_42));
#line 512 "inst_check.m"
                      }
#line 512 "inst_check.m"
                      {
#line 512 "inst_check.m"
                        check_hlds__inst_check__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_60_60, 0) = ((MR_Box) (check_hlds__inst_check__V_61_61));
#line 512 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[12])));
#line 512 "inst_check.m"
                      }
#line 512 "inst_check.m"
                      {
#line 512 "inst_check.m"
                        check_hlds__inst_check__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[28])));
#line 512 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_57_57, 1) = ((MR_Box) (check_hlds__inst_check__V_60_60));
#line 512 "inst_check.m"
                      }
#line 511 "inst_check.m"
                      {
#line 511 "inst_check.m"
                        check_hlds__inst_check__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[29])));
#line 511 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_54_54, 1) = ((MR_Box) (check_hlds__inst_check__V_57_57));
#line 511 "inst_check.m"
                      }
#line 510 "inst_check.m"
                      {
#line 510 "inst_check.m"
                        check_hlds__inst_check__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 0) = ((MR_Box) (check_hlds__inst_check__V_52_52));
#line 510 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 1) = ((MR_Box) (check_hlds__inst_check__V_54_54));
#line 510 "inst_check.m"
                      }
#line 509 "inst_check.m"
                      {
#line 509 "inst_check.m"
                        check_hlds__inst_check__Pieces_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[24])));
#line 509 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 1) = ((MR_Box) (check_hlds__inst_check__V_51_51));
#line 509 "inst_check.m"
                      }
#line 504 "inst_check.m"
                    }
#line 516 "inst_check.m"
                  {
#line 516 "inst_check.m"
                    check_hlds__inst_check__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 516 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_95_95, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_122));
#line 516 "inst_check.m"
                  }
#line 516 "inst_check.m"
                  {
#line 516 "inst_check.m"
                    check_hlds__inst_check__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_94_94, 0) = ((MR_Box) (check_hlds__inst_check__V_95_95));
#line 516 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 516 "inst_check.m"
                  }
#line 516 "inst_check.m"
                  {
#line 516 "inst_check.m"
                    check_hlds__inst_check__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 516 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_93_93, 0) = ((MR_Box) (check_hlds__inst_check__Context_119));
#line 516 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_93_93, 1) = ((MR_Box) (check_hlds__inst_check__V_94_94));
#line 516 "inst_check.m"
                  }
#line 516 "inst_check.m"
                  {
#line 516 "inst_check.m"
                    check_hlds__inst_check__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_92_92, 0) = ((MR_Box) (check_hlds__inst_check__V_93_93));
#line 516 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 516 "inst_check.m"
                  }
#line 515 "inst_check.m"
                  {
#line 515 "inst_check.m"
                    check_hlds__inst_check__Spec_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 515 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 515 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 515 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_123, 2) = ((MR_Box) (check_hlds__inst_check__V_92_92));
#line 515 "inst_check.m"
                  }
#line 517 "inst_check.m"
                  {
#line 517 "inst_check.m"
                    MR_Word base;
#line 517 "inst_check.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "inst_check.m"
                    *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = base;
#line 517 "inst_check.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_123));
#line 517 "inst_check.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_43));
#line 517 "inst_check.m"
                  }
#line 492 "inst_check.m"
                }
#line 466 "inst_check.m"
            }
#line 442 "inst_check.m"
          break;
#line 442 "inst_check.m"
      }
#line 437 "inst_check.m"
    }
#line 431 "inst_check.m"
  }
#line 431 "inst_check.m"
}

#line 397 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
#line 397 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 397 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 397 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
#line 397 "inst_check.m"
{
#line 400 "inst_check.m"
  {
#line 400 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 400 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 400 "inst_check.m"
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 400 "inst_check.m"
    else
#line 402 "inst_check.m"
      {
#line 402 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorAndDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 402 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorAndDefns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 402 "inst_check.m"
        MR_Word check_hlds__inst_check__MatchingUserTypes0_9;
#line 402 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtor_10;
#line 402 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorSymName_12;
#line 402 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorModuleName_15;
#line 405 "inst_check.m"
        MR_Word check_hlds__inst_check___TypeDefn_11;
#line 406 "inst_check.m"
        MR_Integer check_hlds__inst_check___TypeCtorArity_13;

#line 403 "inst_check.m"
        {
#line 403 "inst_check.m"
          check_hlds__inst_check__find_matching_user_types_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__TypeCtorAndDefns_7, &check_hlds__inst_check__MatchingUserTypes0_9);
        }
#line 405 "inst_check.m"
        check_hlds__inst_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_6, (MR_Integer) 0)));
#line 405 "inst_check.m"
        check_hlds__inst_check___TypeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_6, (MR_Integer) 1)));
#line 406 "inst_check.m"
        check_hlds__inst_check__TypeCtorSymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_10, (MR_Integer) 0)));
#line 406 "inst_check.m"
        check_hlds__inst_check___TypeCtorArity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_10, (MR_Integer) 1)));
#line 410 "inst_check.m"
        if (((MR_tag((MR_Word) check_hlds__inst_check__TypeCtorSymName_12)) == (MR_mktag((MR_Integer) 1))))
#line 411 "inst_check.m"
          {
#line 411 "inst_check.m"
            MR_String check_hlds__inst_check__V_16_16;

#line 411 "inst_check.m"
            check_hlds__inst_check__TypeCtorModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_12, (MR_Integer) 0)));
#line 411 "inst_check.m"
            check_hlds__inst_check__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_12, (MR_Integer) 1)));
#line 411 "inst_check.m"
          }
#line 410 "inst_check.m"
        else
#line 408 "inst_check.m"
          {
#line 409 "inst_check.m"
            {
#line 409 "inst_check.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.find_matching_user_types\'/3", (MR_String) "TypeCtorSymName is unqualified");
#line 409 "inst_check.m"
              return;
            }
#line 408 "inst_check.m"
          }
#line 416 "inst_check.m"
        if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 417 "inst_check.m"
          {
#line 417 "inst_check.m"
            MR_Word check_hlds__inst_check__FunctorModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 417 "inst_check.m"
            MR_String check_hlds__inst_check__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));

#line 419 "inst_check.m"
            {
#line 419 "inst_check.m"
              check_hlds__inst_check__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(check_hlds__inst_check__FunctorModuleName_18, check_hlds__inst_check__TypeCtorModuleName_15);
            }
#line 424 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 422 "inst_check.m"
              {
#line 422 "inst_check.m"
                MR_Word check_hlds__inst_check__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__inst_check__TypeCtorAndDefn_6);

#line 422 "inst_check.m"
                {
#line 422 "inst_check.m"
                  MR_Word base;
#line 422 "inst_check.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "inst_check.m"
                  *check_hlds__inst_check__HeadVar__3_3 = base;
#line 422 "inst_check.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__V_23_23));
#line 422 "inst_check.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__MatchingUserTypes0_9));
#line 422 "inst_check.m"
                }
#line 422 "inst_check.m"
              }
#line 424 "inst_check.m"
            else
#line 425 "inst_check.m"
              *check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__MatchingUserTypes0_9;
#line 417 "inst_check.m"
          }
#line 416 "inst_check.m"
        else
#line 414 "inst_check.m"
          {
#line 414 "inst_check.m"
            MR_Word check_hlds__inst_check__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__inst_check__TypeCtorAndDefn_6);

#line 415 "inst_check.m"
            {
#line 415 "inst_check.m"
              MR_Word base;
#line 415 "inst_check.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "inst_check.m"
              *check_hlds__inst_check__HeadVar__3_3 = base;
#line 415 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__V_24_24));
#line 415 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__MatchingUserTypes0_9));
#line 415 "inst_check.m"
            }
#line 414 "inst_check.m"
          }
#line 402 "inst_check.m"
      }
#line 400 "inst_check.m"
  }
#line 397 "inst_check.m"
}

#line 306 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(
#line 306 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 306 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 306 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3,
#line 306 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4,
#line 306 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5,
#line 306 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6)
#line 306 "inst_check.m"
{
#line 311 "inst_check.m"
  while (MR_TRUE)
#line 311 "inst_check.m"
    {
#line 311 "inst_check.m"
      /* tailcall optimized into a loop */
#line 311 "inst_check.m"
      {
#line 311 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 311 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 311 "inst_check.m"
          {
#line 312 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5;
#line 312 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3;
#line 311 "inst_check.m"
          }
#line 311 "inst_check.m"
        else
#line 314 "inst_check.m"
          {
#line 314 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 314 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 314 "inst_check.m"
            MR_Word check_hlds__inst_check__MaybePossibleTypes_19;
#line 314 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26;
#line 314 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27;
#line 314 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_15, (MR_Integer) 0)));
#line 337 "inst_check.m"
            MR_Word check_hlds__inst_check__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_15, (MR_Integer) 1)));

#line 365 "inst_check.m"
#line 365 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__ConsId_34)) {
#line 365 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 365 "inst_check.m"
              case (MR_Integer) 0:
#line 394 "inst_check.m"
                check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 365 "inst_check.m"
                break;
#line 365 "inst_check.m"
              case (MR_Integer) 1:
#line 394 "inst_check.m"
                check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 365 "inst_check.m"
                break;
#line 365 "inst_check.m"
              case (MR_Integer) 2:
#line 394 "inst_check.m"
                check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 365 "inst_check.m"
                break;
#line 365 "inst_check.m"
              case (MR_Integer) 3:
#line 365 "inst_check.m"
#line 365 "inst_check.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 0)))) {
#line 365 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 365 "inst_check.m"
                  case (MR_Integer) 0:
#line 365 "inst_check.m"
                  case (MR_Integer) 1:
#line 365 "inst_check.m"
                  case (MR_Integer) 4:
#line 365 "inst_check.m"
                  case (MR_Integer) 9:
#line 365 "inst_check.m"
                  case (MR_Integer) 10:
#line 365 "inst_check.m"
                  case (MR_Integer) 11:
#line 365 "inst_check.m"
                  case (MR_Integer) 12:
#line 365 "inst_check.m"
                  case (MR_Integer) 13:
#line 365 "inst_check.m"
                  case (MR_Integer) 14:
#line 394 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 365 "inst_check.m"
                    break;
#line 365 "inst_check.m"
                  case (MR_Integer) 2:
#line 339 "inst_check.m"
                    {
#line 339 "inst_check.m"
                      MR_Word check_hlds__inst_check__SymName_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 1)));
#line 339 "inst_check.m"
                      MR_Integer check_hlds__inst_check__Arity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 2)));
#line 339 "inst_check.m"
                      MR_String check_hlds__inst_check__Name_39;
#line 339 "inst_check.m"
                      MR_Word check_hlds__inst_check__FunctorNameAndArity_40;
#line 339 "inst_check.m"
                      MR_Word check_hlds__inst_check__UserTypes_42;
#line 339 "inst_check.m"
                      MR_Word check_hlds__inst_check__UserCharTypes_43;
#line 339 "inst_check.m"
                      MR_Word check_hlds__inst_check__Types_44;
#line 339 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 3)));
#line 347 "inst_check.m"
                      MR_Word check_hlds__inst_check__TypeCtorDefns_41;
#line 352 "inst_check.m"
                      MR_Integer check_hlds__inst_check__V_86_86;
#line 359 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_89_89;

#line 340 "inst_check.m"
                      {
#line 340 "inst_check.m"
                        check_hlds__inst_check__Name_39 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_36);
                      }
#line 341 "inst_check.m"
                      {
#line 341 "inst_check.m"
                        check_hlds__inst_check__FunctorNameAndArity_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 341 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__FunctorNameAndArity_40, 0) = ((MR_Box) (check_hlds__inst_check__Name_39));
#line 341 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__FunctorNameAndArity_40, 1) = ((MR_Box) (check_hlds__inst_check__Arity_37));
#line 341 "inst_check.m"
                      }
#line 343 "inst_check.m"
                      {
#line 343 "inst_check.m"
                        check_hlds__inst_check__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0, check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__FunctorNameAndArity_40)), &check_hlds__inst_check__TypeCtorDefns_41);
                      }
#line 347 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 346 "inst_check.m"
                        {
#line 346 "inst_check.m"
                          check_hlds__inst_check__find_matching_user_types_3_p_0(check_hlds__inst_check__SymName_36, check_hlds__inst_check__TypeCtorDefns_41, &check_hlds__inst_check__UserTypes_42);
                        }
#line 347 "inst_check.m"
                      else
#line 348 "inst_check.m"
                        check_hlds__inst_check__UserTypes_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "inst_check.m"
                      {
#line 352 "inst_check.m"
                        check_hlds__inst_check__V_86_86 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__Name_39);
                      }
#line 352 "inst_check.m"
                      check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_86_86 == (MR_Integer) 1);
#line 354 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 353 "inst_check.m"
                        {
#line 353 "inst_check.m"
                          {
#line 353 "inst_check.m"
                            check_hlds__inst_check__UserCharTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__UserCharTypes_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[0])));
#line 353 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__UserCharTypes_43, 1) = ((MR_Box) (check_hlds__inst_check__UserTypes_42));
#line 353 "inst_check.m"
                          }
#line 353 "inst_check.m"
                        }
#line 354 "inst_check.m"
                      else
#line 355 "inst_check.m"
                        check_hlds__inst_check__UserCharTypes_43 = check_hlds__inst_check__UserTypes_42;
#line 359 "inst_check.m"
                      {
#line 359 "inst_check.m"
                        check_hlds__inst_check__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 359 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_89_89, 0) = ((MR_Box) (check_hlds__inst_check__SymName_36));
#line 359 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_89_89, 1) = ((MR_Box) (check_hlds__inst_check__Arity_37));
#line 359 "inst_check.m"
                      }
#line 359 "inst_check.m"
                      {
#line 359 "inst_check.m"
                        check_hlds__inst_check__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__inst_check__V_89_89);
                      }
#line 361 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 360 "inst_check.m"
                        {
#line 360 "inst_check.m"
                          MR_Word check_hlds__inst_check__V_90_90;

#line 360 "inst_check.m"
                          {
#line 360 "inst_check.m"
                            check_hlds__inst_check__V_90_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 360 "inst_check.m"
                            MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_90_90, 0) = ((MR_Box) (check_hlds__inst_check__Arity_37));
#line 360 "inst_check.m"
                          }
#line 360 "inst_check.m"
                          {
#line 360 "inst_check.m"
                            check_hlds__inst_check__Types_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Types_44, 0) = ((MR_Box) (check_hlds__inst_check__V_90_90));
#line 360 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Types_44, 1) = ((MR_Box) (check_hlds__inst_check__UserCharTypes_43));
#line 360 "inst_check.m"
                          }
#line 360 "inst_check.m"
                        }
#line 361 "inst_check.m"
                      else
#line 362 "inst_check.m"
                        check_hlds__inst_check__Types_44 = check_hlds__inst_check__UserCharTypes_43;
#line 364 "inst_check.m"
                      {
#line 364 "inst_check.m"
                        check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 364 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, 0) = ((MR_Box) (check_hlds__inst_check__Types_44));
#line 364 "inst_check.m"
                      }
#line 339 "inst_check.m"
                    }
#line 365 "inst_check.m"
                    break;
#line 365 "inst_check.m"
                  case (MR_Integer) 3:
#line 366 "inst_check.m"
                    {
#line 366 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_83_83;
#line 366 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_84_84;
#line 366 "inst_check.m"
                      MR_Integer check_hlds__inst_check__Arity_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 1)));

#line 367 "inst_check.m"
                      {
#line 367 "inst_check.m"
                        check_hlds__inst_check__V_84_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 367 "inst_check.m"
                        MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_84_84, 0) = ((MR_Box) (check_hlds__inst_check__Arity_91));
#line 367 "inst_check.m"
                      }
#line 367 "inst_check.m"
                      {
#line 367 "inst_check.m"
                        check_hlds__inst_check__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_83_83, 0) = ((MR_Box) (check_hlds__inst_check__V_84_84));
#line 367 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "inst_check.m"
                      }
#line 367 "inst_check.m"
                      {
#line 367 "inst_check.m"
                        check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 367 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, 0) = ((MR_Box) (check_hlds__inst_check__V_83_83));
#line 367 "inst_check.m"
                      }
#line 366 "inst_check.m"
                    }
#line 365 "inst_check.m"
                    break;
#line 365 "inst_check.m"
                  case (MR_Integer) 5:
#line 370 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[5]);
#line 365 "inst_check.m"
                    break;
#line 365 "inst_check.m"
                  case (MR_Integer) 6:
#line 373 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[3]);
#line 365 "inst_check.m"
                    break;
#line 365 "inst_check.m"
                  case (MR_Integer) 7:
#line 376 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[1]);
#line 365 "inst_check.m"
                    break;
#line 365 "inst_check.m"
                  case (MR_Integer) 8:
#line 379 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[7]);
#line 365 "inst_check.m"
                    break;
#line 365 "inst_check.m"
                }
#line 365 "inst_check.m"
                break;
#line 365 "inst_check.m"
            }
#line 320 "inst_check.m"
            if ((check_hlds__inst_check__MaybePossibleTypes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "inst_check.m"
              {
#line 319 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27 = (MR_Integer) 0;
#line 318 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5;
#line 318 "inst_check.m"
              }
#line 320 "inst_check.m"
            else
#line 321 "inst_check.m"
              {
#line 321 "inst_check.m"
                MR_Word check_hlds__inst_check__PossibleTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, (MR_Integer) 0)));
#line 321 "inst_check.m"
                MR_Word check_hlds__inst_check__PossibleTypeSet_21;

#line 322 "inst_check.m"
                {
#line 322 "inst_check.m"
                  check_hlds__inst_check__PossibleTypeSet_21 = mercury__set__list_to_set_1_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, check_hlds__inst_check__PossibleTypes_20);
                }
#line 323 "inst_check.m"
                {
#line 323 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26, 0) = ((MR_Box) (check_hlds__inst_check__PossibleTypeSet_21));
#line 323 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5));
#line 323 "inst_check.m"
                }
#line 321 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3;
#line 321 "inst_check.m"
              }
#line 325 "inst_check.m"
            /* direct tailcall eliminated */
#line 325 "inst_check.m"
            {
#line 325 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__BoundInsts_16;
#line 325 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0__tmp_copy_3 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27;
#line 325 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0__tmp_copy_5 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26;

#line 325 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0__tmp_copy_5;
#line 325 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0__tmp_copy_3;
#line 325 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 325 "inst_check.m"
            }
#line 325 "inst_check.m"
            continue;
#line 314 "inst_check.m"
          }
#line 311 "inst_check.m"
      }
#line 311 "inst_check.m"
      break;
#line 311 "inst_check.m"
    }
#line 306 "inst_check.m"
}

#line 269 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(
#line 269 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3,
#line 269 "inst_check.m"
  MR_Word * check_hlds__inst_check__TypeCtor_4)
#line 269 "inst_check.m"
{
#line 274 "inst_check.m"
  {
#line 274 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 274 "inst_check.m"
#line 274 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3)) {
#line 274 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 274 "inst_check.m"
      case (MR_Integer) 0:
#line 274 "inst_check.m"
        {
#line 274 "inst_check.m"
          MR_Word check_hlds__inst_check__V_22_22 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3), (MR_Integer) 0);
#line 274 "inst_check.m"
          MR_Word check_hlds__inst_check__V_5_5;

#line 274 "inst_check.m"
          *check_hlds__inst_check__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_22_22, (MR_Integer) 0)));
#line 274 "inst_check.m"
          check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_22_22, (MR_Integer) 1)));
#line 274 "inst_check.m"
        }
#line 274 "inst_check.m"
        break;
#line 274 "inst_check.m"
      case (MR_Integer) 1:
#line 276 "inst_check.m"
        {
#line 276 "inst_check.m"
          MR_Word check_hlds__inst_check__BuiltinType_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

#line 280 "inst_check.m"
          *check_hlds__inst_check__TypeCtor_4 = ((&check_hlds__inst_check_vector_common_6[0 + check_hlds__inst_check__BuiltinType_6]))->check_hlds__inst_check__vector_common_type_6_0__vct_6_f_0;
#line 276 "inst_check.m"
        }
#line 274 "inst_check.m"
        break;
#line 274 "inst_check.m"
      case (MR_Integer) 2:
#line 291 "inst_check.m"
        {
#line 291 "inst_check.m"
          MR_Integer check_hlds__inst_check__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

#line 292 "inst_check.m"
          {
#line 292 "inst_check.m"
            MR_Word base;
#line 292 "inst_check.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 292 "inst_check.m"
            *check_hlds__inst_check__TypeCtor_4 = base;
#line 292 "inst_check.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_3[12]));
#line 292 "inst_check.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__Arity_7));
#line 292 "inst_check.m"
          }
#line 291 "inst_check.m"
        }
#line 274 "inst_check.m"
        break;
#line 274 "inst_check.m"
    }
#line 274 "inst_check.m"
  }
#line 269 "inst_check.m"
}

#line 246 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0_1(
#line 246 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 246 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 246 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 246 "inst_check.m"
{
#line 246 "inst_check.m"
  {
#line 246 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 246 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_TypeCtor_4;

#line 246 "inst_check.m"
    {
#line 246 "inst_check.m"
      check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_TypeCtor_4);
    }
#line 246 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_TypeCtor_4));
#line 246 "inst_check.m"
  }
#line 246 "inst_check.m"
}

#line 206 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0(
#line 206 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 206 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 206 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3,
#line 206 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_4,
#line 206 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_5)
#line 206 "inst_check.m"
{
#line 211 "inst_check.m"
  {
#line 211 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 211 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "inst_check.m"
      {
#line 211 "inst_check.m"
        *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 211 "inst_check.m"
        *check_hlds__inst_check__STATE_VARIABLE_Specs_5 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_4;
#line 211 "inst_check.m"
      }
#line 211 "inst_check.m"
    else
#line 214 "inst_check.m"
      {
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__InstIdDefnPair0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__InstIdDefnPairs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__InstIdDefnPair_13;
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__InstIdDefnPairs_14;
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__InstId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair0_11, (MR_Integer) 0)));
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__InstDefn0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair0_11, (MR_Integer) 1)));
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__InstDefn_18;
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_21_21;
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__InstVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_17, (MR_Integer) 0)));
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__InstParams_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_17, (MR_Integer) 1)));
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__InstBody_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_17, (MR_Integer) 2)));
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__Context_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_17, (MR_Integer) 4)));
#line 214 "inst_check.m"
        MR_Word check_hlds__inst_check__Status_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_17, (MR_Integer) 5)));
#line 228 "inst_check.m"
        MR_Word check_hlds__inst_check___MMTC_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_17, (MR_Integer) 3)));

#line 264 "inst_check.m"
        if ((check_hlds__inst_check__InstBody_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "inst_check.m"
          {
#line 266 "inst_check.m"
            check_hlds__inst_check__InstDefn_18 = check_hlds__inst_check__InstDefn0_17;
#line 265 "inst_check.m"
            check_hlds__inst_check__STATE_VARIABLE_Specs_21_21 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_4;
#line 265 "inst_check.m"
          }
#line 264 "inst_check.m"
        else
#line 231 "inst_check.m"
          {
#line 231 "inst_check.m"
            MR_Word check_hlds__inst_check__Inst0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__InstBody_32, (MR_Integer) 0)));

#line 251 "inst_check.m"
#line 251 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__Inst0_36)) {
#line 251 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 251 "inst_check.m"
              case (MR_Integer) 0:
#line 261 "inst_check.m"
                {
#line 262 "inst_check.m"
                  check_hlds__inst_check__InstDefn_18 = check_hlds__inst_check__InstDefn0_17;
#line 261 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_Specs_21_21 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_4;
#line 261 "inst_check.m"
                }
#line 251 "inst_check.m"
                break;
#line 251 "inst_check.m"
              case (MR_Integer) 1:
#line 251 "inst_check.m"
              case (MR_Integer) 2:
#line 261 "inst_check.m"
                {
#line 262 "inst_check.m"
                  check_hlds__inst_check__InstDefn_18 = check_hlds__inst_check__InstDefn0_17;
#line 261 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_Specs_21_21 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_4;
#line 261 "inst_check.m"
                }
#line 251 "inst_check.m"
                break;
#line 251 "inst_check.m"
              case (MR_Integer) 3:
#line 251 "inst_check.m"
#line 251 "inst_check.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst0_36, (MR_Integer) 0)))) {
#line 251 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 251 "inst_check.m"
                  case (MR_Integer) 0:
#line 233 "inst_check.m"
                    {
#line 233 "inst_check.m"
                      MR_Word check_hlds__inst_check__BoundInsts0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst0_36, (MR_Integer) 3)));
#line 233 "inst_check.m"
                      MR_Word check_hlds__inst_check__TypeableFunctors_40;
#line 233 "inst_check.m"
                      MR_Word check_hlds__inst_check__PossibleTypeSets_41;
#line 233 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst0_36, (MR_Integer) 1)));
#line 233 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst0_36, (MR_Integer) 2)));

#line 234 "inst_check.m"
                      {
#line 234 "inst_check.m"
                        check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__BoundInsts0_39, (MR_Integer) 1, &check_hlds__inst_check__TypeableFunctors_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__PossibleTypeSets_41);
                      }
#line 240 "inst_check.m"
#line 240 "inst_check.m"
                      switch (check_hlds__inst_check__TypeableFunctors_40) {
#line 240 "inst_check.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 240 "inst_check.m"
                        case (MR_Integer) 1:
#line 241 "inst_check.m"
                          {
#line 241 "inst_check.m"
                            MR_Word check_hlds__inst_check__TypeCtorInfo_45_61 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
#line 241 "inst_check.m"
                            MR_Word check_hlds__inst_check__PossibleTypesSet_42;
#line 241 "inst_check.m"
                            MR_Word check_hlds__inst_check__PossibleTypes_43;
#line 241 "inst_check.m"
                            MR_Word check_hlds__inst_check__PossibleTypeCtors_44;
#line 241 "inst_check.m"
                            MR_Word check_hlds__inst_check__V_60_60;

#line 242 "inst_check.m"
                            {
#line 242 "inst_check.m"
                              check_hlds__inst_check__PossibleTypesSet_42 = mercury__set__intersect_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_45_61, check_hlds__inst_check__PossibleTypeSets_41);
                            }
#line 243 "inst_check.m"
                            {
#line 243 "inst_check.m"
                              check_hlds__inst_check__PossibleTypes_43 = mercury__set__to_sorted_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_45_61, check_hlds__inst_check__PossibleTypesSet_42);
                            }
#line 244 "inst_check.m"
                            {
#line 244 "inst_check.m"
                              check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0(check_hlds__inst_check__InstId_16, check_hlds__inst_check__InstDefn0_17, check_hlds__inst_check__BoundInsts0_39, check_hlds__inst_check__PossibleTypes_43, check_hlds__inst_check__PossibleTypeSets_41, check_hlds__inst_check__STATE_VARIABLE_Specs_0_4, &check_hlds__inst_check__STATE_VARIABLE_Specs_21_21);
                            }
#line 246 "inst_check.m"
                            {
#line 246 "inst_check.m"
                              mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_45_61, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[2], check_hlds__inst_check__PossibleTypes_43, &check_hlds__inst_check__PossibleTypeCtors_44);
                            }
#line 249 "inst_check.m"
                            {
#line 249 "inst_check.m"
                              check_hlds__inst_check__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 249 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_60_60, 0) = ((MR_Box) (check_hlds__inst_check__PossibleTypeCtors_44));
#line 249 "inst_check.m"
                            }
#line 248 "inst_check.m"
                            {
#line 248 "inst_check.m"
                              check_hlds__inst_check__InstDefn_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 248 "inst_check.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_18, 0) = ((MR_Box) (check_hlds__inst_check__InstVarSet_30));
#line 248 "inst_check.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_18, 1) = ((MR_Box) (check_hlds__inst_check__InstParams_31));
#line 248 "inst_check.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_18, 2) = ((MR_Box) (check_hlds__inst_check__InstBody_32));
#line 248 "inst_check.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_18, 3) = ((MR_Box) (check_hlds__inst_check__V_60_60));
#line 248 "inst_check.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_18, 4) = ((MR_Box) (check_hlds__inst_check__Context_34));
#line 248 "inst_check.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_18, 5) = ((MR_Box) (check_hlds__inst_check__Status_35));
#line 248 "inst_check.m"
                            }
#line 241 "inst_check.m"
                          }
#line 240 "inst_check.m"
                          break;
#line 240 "inst_check.m"
                        case (MR_Integer) 0:
#line 238 "inst_check.m"
                          {
#line 239 "inst_check.m"
                            check_hlds__inst_check__InstDefn_18 = check_hlds__inst_check__InstDefn0_17;
#line 238 "inst_check.m"
                            check_hlds__inst_check__STATE_VARIABLE_Specs_21_21 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_4;
#line 238 "inst_check.m"
                          }
#line 240 "inst_check.m"
                          break;
#line 240 "inst_check.m"
                      }
#line 233 "inst_check.m"
                    }
#line 251 "inst_check.m"
                    break;
#line 251 "inst_check.m"
                  case (MR_Integer) 1:
#line 251 "inst_check.m"
                  case (MR_Integer) 2:
#line 251 "inst_check.m"
                  case (MR_Integer) 3:
#line 251 "inst_check.m"
                  case (MR_Integer) 4:
#line 251 "inst_check.m"
                  case (MR_Integer) 5:
#line 261 "inst_check.m"
                    {
#line 262 "inst_check.m"
                      check_hlds__inst_check__InstDefn_18 = check_hlds__inst_check__InstDefn0_17;
#line 261 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_Specs_21_21 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_4;
#line 261 "inst_check.m"
                    }
#line 251 "inst_check.m"
                    break;
#line 251 "inst_check.m"
                }
#line 251 "inst_check.m"
                break;
#line 251 "inst_check.m"
            }
#line 231 "inst_check.m"
          }
#line 218 "inst_check.m"
        {
#line 218 "inst_check.m"
          check_hlds__inst_check__InstIdDefnPair_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 218 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair_13, 0) = ((MR_Box) (check_hlds__inst_check__InstId_16));
#line 218 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair_13, 1) = ((MR_Box) (check_hlds__inst_check__InstDefn_18));
#line 218 "inst_check.m"
        }
#line 219 "inst_check.m"
        {
#line 219 "inst_check.m"
          check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__InstIdDefnPairs0_12, &check_hlds__inst_check__InstIdDefnPairs_14, check_hlds__inst_check__STATE_VARIABLE_Specs_21_21, check_hlds__inst_check__STATE_VARIABLE_Specs_5);
        }
#line 214 "inst_check.m"
        {
#line 214 "inst_check.m"
          MR_Word base;
#line 214 "inst_check.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "inst_check.m"
          *check_hlds__inst_check__HeadVar__3_3 = base;
#line 214 "inst_check.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__InstIdDefnPair_13));
#line 214 "inst_check.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__InstIdDefnPairs_14));
#line 214 "inst_check.m"
        }
#line 214 "inst_check.m"
      }
#line 211 "inst_check.m"
  }
#line 206 "inst_check.m"
}

#line 196 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(
#line 196 "inst_check.m"
  MR_Word check_hlds__inst_check__Ctor_3,
#line 196 "inst_check.m"
  MR_Word * check_hlds__inst_check__FunctorNameAndArity_4)
#line 196 "inst_check.m"
{
#line 199 "inst_check.m"
  {
#line 199 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 199 "inst_check.m"
    MR_Word check_hlds__inst_check__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 2)));
#line 199 "inst_check.m"
    MR_Integer check_hlds__inst_check__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 4)));
#line 199 "inst_check.m"
    MR_String check_hlds__inst_check__V_11_11;
#line 200 "inst_check.m"
    MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 0)));
#line 200 "inst_check.m"
    MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 1)));
#line 200 "inst_check.m"
    MR_Word check_hlds__inst_check___ArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 3)));
#line 200 "inst_check.m"
    MR_Word check_hlds__inst_check__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 5)));

#line 202 "inst_check.m"
    {
#line 202 "inst_check.m"
      check_hlds__inst_check__V_11_11 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_7);
    }
#line 202 "inst_check.m"
    {
#line 202 "inst_check.m"
      MR_Word base;
#line 202 "inst_check.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 202 "inst_check.m"
      *check_hlds__inst_check__FunctorNameAndArity_4 = base;
#line 202 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__V_11_11));
#line 202 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__Arity_9));
#line 202 "inst_check.m"
    }
#line 199 "inst_check.m"
  }
#line 196 "inst_check.m"
}

#line 134 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
#line 134 "inst_check.m"
  MR_Word check_hlds__inst_check__Section_3,
#line 134 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefn_4)
#line 134 "inst_check.m"
{
#line 137 "inst_check.m"
  {
#line 137 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 137 "inst_check.m"
    MR_Word check_hlds__inst_check__ImportStatus_5;
#line 137 "inst_check.m"
    MR_Word check_hlds__inst_check__Status_10;

#line 138 "inst_check.m"
    {
#line 138 "inst_check.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__inst_check__TypeDefn_4, &check_hlds__inst_check__ImportStatus_5);
    }
#line 148 "inst_check.m"
    check_hlds__inst_check__Status_10 = (MR_Word) check_hlds__inst_check__ImportStatus_5;
#line 154 "inst_check.m"
#line 154 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__Status_10)) {
#line 154 "inst_check.m"
      default:
#line 154 "inst_check.m"
        check_hlds__inst_check__succeeded = MR_FALSE;
#line 154 "inst_check.m"
        break;
#line 154 "inst_check.m"
      case (MR_Integer) 0:
#line 154 "inst_check.m"
#line 154 "inst_check.m"
        switch (MR_unmkbody(check_hlds__inst_check__Status_10)) {
#line 154 "inst_check.m"
          default:
#line 154 "inst_check.m"
            check_hlds__inst_check__succeeded = MR_FALSE;
#line 154 "inst_check.m"
            break;
#line 154 "inst_check.m"
          case (MR_Integer) 3:
#line 153 "inst_check.m"
            check_hlds__inst_check__succeeded = MR_TRUE;
#line 154 "inst_check.m"
            break;
#line 154 "inst_check.m"
          case (MR_Integer) 4:
#line 154 "inst_check.m"
          case (MR_Integer) 5:
#line 154 "inst_check.m"
          case (MR_Integer) 6:
#line 154 "inst_check.m"
          case (MR_Integer) 7:
#line 154 "inst_check.m"
          case (MR_Integer) 8:
#line 6825 "check_hlds.inst_check.c"
            check_hlds__inst_check__succeeded = (check_hlds__inst_check__Section_3 == (MR_Integer) 1);
#line 154 "inst_check.m"
            break;
#line 154 "inst_check.m"
        }
#line 154 "inst_check.m"
        break;
#line 154 "inst_check.m"
      case (MR_Integer) 2:
#line 153 "inst_check.m"
        check_hlds__inst_check__succeeded = MR_TRUE;
#line 154 "inst_check.m"
        break;
#line 154 "inst_check.m"
    }
#line 137 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 137 "inst_check.m"
  }
#line 134 "inst_check.m"
}

#line 124 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2(
#line 124 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 124 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 124 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 124 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_3)
#line 124 "inst_check.m"
{
#line 124 "inst_check.m"
  {
#line 124 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 124 "inst_check.m"
    MR_Word check_hlds__inst_check__conv1_HeadVar__4_22;

#line 124 "inst_check.m"
    {
#line 124 "inst_check.m"
      check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__124__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2), &check_hlds__inst_check__conv1_HeadVar__4_22);
    }
#line 124 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_check__conv1_HeadVar__4_22));
#line 124 "inst_check.m"
  }
#line 124 "inst_check.m"
}

#line 186 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1(
#line 186 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 186 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 186 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 186 "inst_check.m"
{
#line 186 "inst_check.m"
  {
#line 186 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 186 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_FunctorNameAndArity_4;

#line 186 "inst_check.m"
    {
#line 186 "inst_check.m"
      check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_FunctorNameAndArity_4);
    }
#line 186 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_FunctorNameAndArity_4));
#line 186 "inst_check.m"
  }
#line 186 "inst_check.m"
}

#line 113 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(
#line 113 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 113 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2,
#line 113 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_3)
#line 113 "inst_check.m"
{
#line 117 "inst_check.m"
  while (MR_TRUE)
#line 117 "inst_check.m"
    {
#line 117 "inst_check.m"
      /* tailcall optimized into a loop */
#line 117 "inst_check.m"
      {
#line 117 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 117 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 117 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_3 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2;
#line 117 "inst_check.m"
        else
#line 119 "inst_check.m"
          {
#line 119 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeCtorDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeCtorDefns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 119 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorDefn_7, (MR_Integer) 0)));
#line 119 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorDefn_7, (MR_Integer) 1)));
#line 119 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18;
#line 121 "inst_check.m"
            MR_Word check_hlds__inst_check__ImportStatus_29;
#line 121 "inst_check.m"
            MR_Word check_hlds__inst_check__Status_34;

#line 138 "inst_check.m"
            {
#line 138 "inst_check.m"
              hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__inst_check__TypeDefn_11, &check_hlds__inst_check__ImportStatus_29);
            }
#line 148 "inst_check.m"
            check_hlds__inst_check__Status_34 = (MR_Word) check_hlds__inst_check__ImportStatus_29;
#line 154 "inst_check.m"
#line 154 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__Status_34)) {
#line 154 "inst_check.m"
              default:
#line 154 "inst_check.m"
                check_hlds__inst_check__succeeded = MR_FALSE;
#line 154 "inst_check.m"
                break;
#line 154 "inst_check.m"
              case (MR_Integer) 0:
#line 154 "inst_check.m"
#line 154 "inst_check.m"
                switch (MR_unmkbody(check_hlds__inst_check__Status_34)) {
#line 154 "inst_check.m"
                  default:
#line 154 "inst_check.m"
                    check_hlds__inst_check__succeeded = MR_FALSE;
#line 154 "inst_check.m"
                    break;
#line 154 "inst_check.m"
                  case (MR_Integer) 3:
#line 153 "inst_check.m"
                    check_hlds__inst_check__succeeded = MR_TRUE;
#line 154 "inst_check.m"
                    break;
#line 154 "inst_check.m"
                  case (MR_Integer) 4:
#line 154 "inst_check.m"
                  case (MR_Integer) 5:
#line 154 "inst_check.m"
                  case (MR_Integer) 6:
#line 154 "inst_check.m"
                  case (MR_Integer) 7:
#line 154 "inst_check.m"
                  case (MR_Integer) 8:
#line 173 "inst_check.m"
                    check_hlds__inst_check__succeeded = MR_TRUE;
#line 154 "inst_check.m"
                    break;
#line 154 "inst_check.m"
                }
#line 154 "inst_check.m"
                break;
#line 154 "inst_check.m"
              case (MR_Integer) 2:
#line 153 "inst_check.m"
                check_hlds__inst_check__succeeded = MR_TRUE;
#line 154 "inst_check.m"
                break;
#line 154 "inst_check.m"
            }
#line 126 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 122 "inst_check.m"
              {
#line 122 "inst_check.m"
                MR_Word check_hlds__inst_check__TypeCtorAndDefn_12;
#line 122 "inst_check.m"
                MR_Word check_hlds__inst_check__Functors_13;
#line 122 "inst_check.m"
                MR_Word check_hlds__inst_check__V_17_17;
#line 122 "inst_check.m"
                MR_Word check_hlds__inst_check__TypeDefnBody_39;
#line 124 "inst_check.m"
                MR_Box check_hlds__inst_check__conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18;

#line 122 "inst_check.m"
                {
#line 122 "inst_check.m"
                  check_hlds__inst_check__TypeCtorAndDefn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 122 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_12, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtor_10));
#line 122 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_12, 1) = ((MR_Box) (check_hlds__inst_check__TypeDefn_11));
#line 122 "inst_check.m"
                }
#line 183 "inst_check.m"
                {
#line 183 "inst_check.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDefn_11, &check_hlds__inst_check__TypeDefnBody_39);
                }
#line 187 "inst_check.m"
#line 187 "inst_check.m"
                switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnBody_39)) {
#line 187 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 187 "inst_check.m"
                  case (MR_Integer) 0:
#line 193 "inst_check.m"
                    check_hlds__inst_check__Functors_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 187 "inst_check.m"
                    break;
#line 187 "inst_check.m"
                  case (MR_Integer) 1:
#line 185 "inst_check.m"
                    {
#line 185 "inst_check.m"
                      MR_Word check_hlds__inst_check__Constructors_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 0)));
#line 185 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 1)));
#line 185 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 2)));
#line 185 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 3)));
#line 185 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 4)));
#line 185 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 5)));
#line 185 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 185 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 185 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 7)));

#line 186 "inst_check.m"
                      {
#line 186 "inst_check.m"
                        mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[1], check_hlds__inst_check__Constructors_40, &check_hlds__inst_check__Functors_13);
                      }
#line 185 "inst_check.m"
                    }
#line 187 "inst_check.m"
                    break;
#line 187 "inst_check.m"
                  case (MR_Integer) 2:
#line 193 "inst_check.m"
                    check_hlds__inst_check__Functors_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 187 "inst_check.m"
                    break;
#line 187 "inst_check.m"
                  case (MR_Integer) 3:
#line 193 "inst_check.m"
                    check_hlds__inst_check__Functors_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 187 "inst_check.m"
                    break;
#line 187 "inst_check.m"
                }
#line 124 "inst_check.m"
                {
#line 124 "inst_check.m"
                  check_hlds__inst_check__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 124 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_17_17, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_5[0]));
#line 124 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_17_17, 1) = ((MR_Box) (check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2));
#line 124 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 124 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_17_17, 3) = ((MR_Box) (check_hlds__inst_check__TypeCtorAndDefn_12));
#line 124 "inst_check.m"
                }
#line 124 "inst_check.m"
                {
#line 124 "inst_check.m"
                  mercury__list__foldl_4_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[0], check_hlds__inst_check__V_17_17, check_hlds__inst_check__Functors_13, ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2)), &check_hlds__inst_check__conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18);
                }
#line 124 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18 = ((MR_Word) check_hlds__inst_check__conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18);
#line 122 "inst_check.m"
              }
#line 126 "inst_check.m"
            else
#line 126 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2;
#line 129 "inst_check.m"
            /* direct tailcall eliminated */
#line 129 "inst_check.m"
            {
#line 129 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__1__tmp_copy_1 = check_hlds__inst_check__TypeCtorDefns_8;
#line 129 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0__tmp_copy_2 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18;

#line 129 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0__tmp_copy_2;
#line 129 "inst_check.m"
              check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__HeadVar__1__tmp_copy_1;
#line 129 "inst_check.m"
            }
#line 129 "inst_check.m"
            continue;
#line 119 "inst_check.m"
          }
#line 117 "inst_check.m"
      }
#line 117 "inst_check.m"
      break;
#line 117 "inst_check.m"
    }
#line 113 "inst_check.m"
}

#line 56 "inst_check.m"
void MR_CALL 
check_hlds__inst_check__check_insts_have_matching_types_4_p_0(
#line 56 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16,
#line 56 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_17,
#line 56 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_18,
#line 56 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_19)
#line 56 "inst_check.m"
{
#line 88 "inst_check.m"
  {
#line 88 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 88 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_23_23;
#line 88 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_24_24;
#line 88 "inst_check.m"
    MR_Word check_hlds__inst_check__InstTable0_7;
#line 88 "inst_check.m"
    MR_Word check_hlds__inst_check__UserInstTable0_8;
#line 88 "inst_check.m"
    MR_Word check_hlds__inst_check__InstIdDefnPairs0_9;
#line 88 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeTable_10;
#line 88 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorsDefns_11;
#line 88 "inst_check.m"
    MR_Word check_hlds__inst_check__FunctorsToTypeDefns_12;
#line 88 "inst_check.m"
    MR_Word check_hlds__inst_check__InstIdDefnPairs_13;
#line 88 "inst_check.m"
    MR_Word check_hlds__inst_check__UserInstTable_14;
#line 88 "inst_check.m"
    MR_Word check_hlds__inst_check__InstTable_15;
#line 88 "inst_check.m"
    MR_Word check_hlds__inst_check__V_20_20;

#line 89 "inst_check.m"
    {
#line 89 "inst_check.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__inst_check__InstTable0_7);
    }
#line 90 "inst_check.m"
    {
#line 90 "inst_check.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(check_hlds__inst_check__InstTable0_7, &check_hlds__inst_check__UserInstTable0_8);
    }
#line 7208 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0;
#line 7210 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;
#line 91 "inst_check.m"
    {
#line 91 "inst_check.m"
      mercury__map__to_sorted_assoc_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_23_23, check_hlds__inst_check__TypeCtorInfo_24_24, check_hlds__inst_check__UserInstTable0_8, &check_hlds__inst_check__InstIdDefnPairs0_9);
    }
#line 92 "inst_check.m"
    {
#line 92 "inst_check.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__inst_check__TypeTable_10);
    }
#line 93 "inst_check.m"
    {
#line 93 "inst_check.m"
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(check_hlds__inst_check__TypeTable_10, &check_hlds__inst_check__TypeCtorsDefns_11);
    }
#line 95 "inst_check.m"
    {
#line 95 "inst_check.m"
      check_hlds__inst_check__V_20_20 = mercury__multi_map__init_0_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0);
    }
#line 94 "inst_check.m"
    {
#line 94 "inst_check.m"
      check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(check_hlds__inst_check__TypeCtorsDefns_11, check_hlds__inst_check__V_20_20, &check_hlds__inst_check__FunctorsToTypeDefns_12);
    }
#line 96 "inst_check.m"
    {
#line 96 "inst_check.m"
      check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0(check_hlds__inst_check__FunctorsToTypeDefns_12, check_hlds__inst_check__InstIdDefnPairs0_9, &check_hlds__inst_check__InstIdDefnPairs_13, check_hlds__inst_check__STATE_VARIABLE_Specs_0_18, check_hlds__inst_check__STATE_VARIABLE_Specs_19);
    }
#line 98 "inst_check.m"
    {
#line 98 "inst_check.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_23_23, check_hlds__inst_check__TypeCtorInfo_24_24, check_hlds__inst_check__InstIdDefnPairs_13, &check_hlds__inst_check__UserInstTable_14);
    }
#line 99 "inst_check.m"
    {
#line 99 "inst_check.m"
      hlds__hlds_data__inst_table_set_user_insts_3_p_0(check_hlds__inst_check__UserInstTable_14, check_hlds__inst_check__InstTable0_7, &check_hlds__inst_check__InstTable_15);
    }
#line 100 "inst_check.m"
    {
#line 100 "inst_check.m"
      hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_check__InstTable_15, check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_17);
#line 100 "inst_check.m"
      return;
    }
#line 88 "inst_check.m"
  }
#line 56 "inst_check.m"
}

void mercury__check_hlds__inst_check__init(void)
{
}

void mercury__check_hlds__inst_check__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functors_to_types_map_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_typeable_functors_0);
}

void mercury__check_hlds__inst_check__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.inst_check. */
