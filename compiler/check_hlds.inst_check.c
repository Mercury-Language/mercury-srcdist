/*
** Automatically generated from `inst_check.m'
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 441 "inst_check.m"
struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s {
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11;
#line 447 "inst_check.m"
  MR_bool check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded;
#line 487 "inst_check.m"
  jmp_buf check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__commit_0;
#line 487 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__Type_118;
#line 487 "inst_check.m"
  MR_Box check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__conv1_Type_118;
#line 441 "inst_check.m"
};


#line 158 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

#line 161 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

#line 164 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0;

#line 167 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0[2];

#line 170 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0;

#line 173 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0[1];

#line 176 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0[1];

#line 179 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0[1];

#line 182 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0[1];

#line 185 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

#line 188 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 191 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0[3];

#line 194 "check_hlds.inst_check.c"
static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0[3];

#line 197 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0;

#line 200 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0[1];

#line 203 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0[1];

#line 206 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0[1];

#line 209 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0[1];

#line 212 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0[2];

#line 215 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0;

#line 218 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0[1];

#line 221 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0[1];

#line 224 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0[1];

#line 227 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0[1];

#line 230 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1];

#line 233 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0;

#line 236 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1];

#line 239 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1;

#line 242 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1];

#line 245 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2;

#line 248 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[1];

#line 251 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[1];

#line 254 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[1];

#line 257 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0[3];

#line 260 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0[3];

#line 263 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0[3];

#line 266 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0;

#line 269 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1;

#line 272 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_value_ordered_typeable_functors_0[2];

#line 275 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0[2];

#line 278 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0[2];

#line 281 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001(
#line 284 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 286 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 289 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001(
#line 292 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 294 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 296 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 299 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001(
#line 302 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 304 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 307 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001(
#line 310 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 312 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 314 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 317 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001(
#line 320 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 322 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 325 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001(
#line 328 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 330 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 332 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 335 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001(
#line 338 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 340 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 343 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001(
#line 346 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 348 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 350 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 353 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
#line 356 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 358 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 361 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
#line 364 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 366 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 368 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 371 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0_10001(
#line 374 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 376 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 379 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0_10001(
#line 382 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 384 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 386 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 135 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__135__1_4_p_0(
#line 135 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeCtorAndDefn_12,
#line 135 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_20,
#line 135 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_21,
#line 135 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__4_22);

#line 307 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
#line 307 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 307 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 307 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 307 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0(
#line 307 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_1,
#line 307 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 311 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
#line 311 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 311 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 311 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 311 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
#line 311 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 311 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 118 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(
#line 118 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 118 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 118 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 118 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(
#line 118 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 118 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 534 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
#line 534 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 534 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 534 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 534 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
#line 534 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 534 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 121 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0(
#line 121 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 121 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 121 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 121 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0(
#line 121 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 121 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 115 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0(
#line 115 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 115 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 115 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 115 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0(
#line 115 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 115 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 813 "inst_check.m"
static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
#line 813 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3);

#line 801 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(
#line 801 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 801 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 801 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

#line 778 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
#line 778 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 778 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 778 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

#line 756 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_mismatch_pieces_2_p_0(
#line 756 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 756 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__2_2);

#line 740 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_mismatch_6_p_0(
#line 740 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_7,
#line 740 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInst_8,
#line 740 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16,
#line 740 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17,
#line 740 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18,
#line 740 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19);

#line 729 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0_1(
#line 729 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 729 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 729 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 721 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0(
#line 721 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_9,
#line 721 "inst_check.m"
  MR_String check_hlds__inst_check__FunctorName_10,
#line 721 "inst_check.m"
  MR_Integer check_hlds__inst_check__ActualArity_11,
#line 721 "inst_check.m"
  MR_Word check_hlds__inst_check__ExpectedAritiesSet_12,
#line 721 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22,
#line 721 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23,
#line 721 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24,
#line 721 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25);

#line 698 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(
#line 698 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 698 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 698 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 698 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 698 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 698 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 698 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

#line 649 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(
#line 649 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 649 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 649 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 649 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 649 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 649 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 649 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

#line 627 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(
#line 627 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 627 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 627 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3,
#line 627 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4,
#line 627 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5);

#line 610 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(
#line 610 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 610 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 610 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3);

#line 577 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0(
#line 577 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 577 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 577 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 577 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 577 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 577 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 577 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

#line 541 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
#line 541 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_4,
#line 541 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_5,
#line 541 "inst_check.m"
  MR_Word * check_hlds__inst_check__MismatchFromType_6);

#line 515 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_6(
#line 515 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 515 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1);

#line 464 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_1(
#line 464 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 464 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 464 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 487 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_2(
#line 487 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 487 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_4(
#line 487 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 487 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_3(
#line 487 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 487 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_5(
#line 487 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 441 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0(
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_8,
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_9,
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_10,
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypes_11,
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypeSets_12,
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_43,
#line 441 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_44);

#line 407 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
#line 407 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 407 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 407 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

#line 316 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(
#line 316 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 316 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 316 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3,
#line 316 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4,
#line 316 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5,
#line 316 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6);

#line 279 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(
#line 279 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3,
#line 279 "inst_check.m"
  MR_Word * check_hlds__inst_check__TypeCtor_4);

#line 256 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0_1(
#line 256 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 256 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 256 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 216 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0(
#line 216 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 216 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 216 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3,
#line 216 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_4,
#line 216 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_5);

#line 206 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(
#line 206 "inst_check.m"
  MR_Word check_hlds__inst_check__Ctor_3,
#line 206 "inst_check.m"
  MR_Word * check_hlds__inst_check__FunctorNameAndArity_4);

#line 145 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
#line 145 "inst_check.m"
  MR_Word check_hlds__inst_check__Section_3,
#line 145 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefn_4);

#line 135 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2(
#line 135 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 135 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 135 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 135 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_3);

#line 196 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1(
#line 196 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 196 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 196 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 124 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(
#line 124 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 124 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2,
#line 124 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_3);


static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[34][2];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_3[14][1];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[4][5];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_7[1][6];


#line 290 "inst_check.m"
/* sealed */ struct check_hlds__inst_check__vector_common_type_6_0_s {
#line 290 "inst_check.m"
  const MR_Word check_hlds__inst_check__vector_common_type_6_0__vct_6_f_0;
#line 290 "inst_check.m"
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_6_0_s check_hlds__inst_check_vector_common_6[4];

#line 824 "inst_check.m"
/* sealed */ struct check_hlds__inst_check__vector_common_type_8_0_s {
#line 824 "inst_check.m"
  const MR_String check_hlds__inst_check__vector_common_type_8_0__vct_8_f_0;
#line 824 "inst_check.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
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

#line 135 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__135__1_4_p_0(
#line 135 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeCtorAndDefn_12,
#line 135 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_20,
#line 135 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_21,
#line 135 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__4_22)
#line 135 "inst_check.m"
{
#line 135 "inst_check.m"
  {
#line 135 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 135 "inst_check.m"
    {
#line 135 "inst_check.m"
      mercury__multi_map__reverse_set_4_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, ((MR_Box) (check_hlds__inst_check__TypeCtorAndDefn_12)), ((MR_Box) (check_hlds__inst_check__HeadVar__2_20)), check_hlds__inst_check__HeadVar__3_21, check_hlds__inst_check__HeadVar__4_22);
#line 135 "inst_check.m"
      return;
    }
#line 135 "inst_check.m"
  }
#line 135 "inst_check.m"
}

#line 307 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
#line 307 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 307 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 307 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 307 "inst_check.m"
{
#line 307 "inst_check.m"
  {
#line 307 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 307 "inst_check.m"
    MR_Integer check_hlds__inst_check__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 307 "inst_check.m"
    MR_Integer check_hlds__inst_check__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 307 "inst_check.m"
    {
#line 307 "inst_check.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Cast_HeadVar1_4, check_hlds__inst_check__Cast_HeadVar2_5);
#line 307 "inst_check.m"
      return;
    }
#line 307 "inst_check.m"
  }
#line 307 "inst_check.m"
}

#line 307 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0(
#line 307 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_1,
#line 307 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 307 "inst_check.m"
{
#line 2047 "check_hlds.inst_check.c"
  {
#line 2049 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded = (check_hlds__inst_check__HeadVar__2_1 == check_hlds__inst_check__HeadVar__2_2);

#line 2052 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2054 "check_hlds.inst_check.c"
  }
#line 307 "inst_check.m"
}

#line 311 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
#line 311 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 311 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 311 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 311 "inst_check.m"
{
#line 311 "inst_check.m"
  {
#line 311 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 311 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_22 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 311 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_23 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 311 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_22 == check_hlds__inst_check__CastY_23);
#line 311 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 2083 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 311 "inst_check.m"
    else
#line 311 "inst_check.m"
#line 311 "inst_check.m"
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) {
#line 311 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 311 "inst_check.m"
        case (MR_Integer) 0:
#line 311 "inst_check.m"
          {
#line 311 "inst_check.m"
            MR_Word check_hlds__inst_check__V_29_29 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__2_2), (MR_Integer) 0);

#line 311 "inst_check.m"
#line 311 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 311 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 311 "inst_check.m"
              case (MR_Integer) 0:
#line 311 "inst_check.m"
                {
#line 311 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_5_5 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__3_3), (MR_Integer) 0);

#line 311 "inst_check.m"
                  {
#line 311 "inst_check.m"
                    check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_29_29, check_hlds__inst_check__V_5_5);
#line 311 "inst_check.m"
                    return;
                  }
#line 311 "inst_check.m"
                }
#line 311 "inst_check.m"
                break;
#line 311 "inst_check.m"
              case (MR_Integer) 1:
#line 2124 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 311 "inst_check.m"
                break;
#line 311 "inst_check.m"
              case (MR_Integer) 2:
#line 2130 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 311 "inst_check.m"
                break;
#line 311 "inst_check.m"
            }
#line 311 "inst_check.m"
          }
#line 311 "inst_check.m"
          break;
#line 311 "inst_check.m"
        case (MR_Integer) 1:
#line 311 "inst_check.m"
          {
#line 311 "inst_check.m"
            MR_Word check_hlds__inst_check__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 311 "inst_check.m"
#line 311 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 311 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 311 "inst_check.m"
              case (MR_Integer) 0:
#line 2154 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 311 "inst_check.m"
                break;
#line 311 "inst_check.m"
              case (MR_Integer) 1:
#line 311 "inst_check.m"
                {
#line 311 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 311 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_30_30 = (MR_Integer) check_hlds__inst_check__V_27_27;
#line 311 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_31_31 = (MR_Integer) check_hlds__inst_check__V_13_13;

#line 311 "inst_check.m"
                  {
#line 311 "inst_check.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_30_30, check_hlds__inst_check__V_31_31);
#line 311 "inst_check.m"
                    return;
                  }
#line 311 "inst_check.m"
                }
#line 311 "inst_check.m"
                break;
#line 311 "inst_check.m"
              case (MR_Integer) 2:
#line 2182 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 311 "inst_check.m"
                break;
#line 311 "inst_check.m"
            }
#line 311 "inst_check.m"
          }
#line 311 "inst_check.m"
          break;
#line 311 "inst_check.m"
        case (MR_Integer) 2:
#line 311 "inst_check.m"
          {
#line 311 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 311 "inst_check.m"
#line 311 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 311 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 311 "inst_check.m"
              case (MR_Integer) 0:
#line 2206 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 311 "inst_check.m"
                break;
#line 311 "inst_check.m"
              case (MR_Integer) 1:
#line 2212 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 311 "inst_check.m"
                break;
#line 311 "inst_check.m"
              case (MR_Integer) 2:
#line 311 "inst_check.m"
                {
#line 311 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));

#line 311 "inst_check.m"
                  {
#line 311 "inst_check.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_28_28, check_hlds__inst_check__V_21_21);
#line 311 "inst_check.m"
                    return;
                  }
#line 311 "inst_check.m"
                }
#line 311 "inst_check.m"
                break;
#line 311 "inst_check.m"
            }
#line 311 "inst_check.m"
          }
#line 311 "inst_check.m"
          break;
#line 311 "inst_check.m"
      }
#line 311 "inst_check.m"
  }
#line 311 "inst_check.m"
}

#line 311 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
#line 311 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 311 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 311 "inst_check.m"
{
#line 311 "inst_check.m"
  {
#line 311 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 311 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 311 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 311 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 311 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 311 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 311 "inst_check.m"
    else
#line 311 "inst_check.m"
#line 311 "inst_check.m"
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 311 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 311 "inst_check.m"
        case (MR_Integer) 0:
#line 311 "inst_check.m"
          {
#line 311 "inst_check.m"
            MR_Word check_hlds__inst_check__V_3_3 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__1_1), (MR_Integer) 0);
#line 311 "inst_check.m"
            MR_Word check_hlds__inst_check__V_4_4;

#line 311 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 311 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 311 "inst_check.m"
              {
#line 311 "inst_check.m"
                check_hlds__inst_check__V_4_4 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__2_2), (MR_Integer) 0);
#line 2295 "check_hlds.inst_check.c"
                {
#line 2297 "check_hlds.inst_check.c"
                  return check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_4_4);
                }
#line 311 "inst_check.m"
              }
#line 311 "inst_check.m"
          }
#line 311 "inst_check.m"
          break;
#line 311 "inst_check.m"
        case (MR_Integer) 1:
#line 311 "inst_check.m"
          {
#line 311 "inst_check.m"
            MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 311 "inst_check.m"
            MR_Word check_hlds__inst_check__V_6_6;

#line 311 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 311 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 311 "inst_check.m"
              {
#line 311 "inst_check.m"
                check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 2323 "check_hlds.inst_check.c"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_5_5 == check_hlds__inst_check__V_6_6);
#line 311 "inst_check.m"
              }
#line 311 "inst_check.m"
          }
#line 311 "inst_check.m"
          break;
#line 311 "inst_check.m"
        case (MR_Integer) 2:
#line 311 "inst_check.m"
          {
#line 311 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 311 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_8_8;

#line 311 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 311 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 311 "inst_check.m"
              {
#line 311 "inst_check.m"
                check_hlds__inst_check__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 2348 "check_hlds.inst_check.c"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_7_7 == check_hlds__inst_check__V_8_8);
#line 311 "inst_check.m"
              }
#line 311 "inst_check.m"
          }
#line 311 "inst_check.m"
          break;
#line 311 "inst_check.m"
      }
#line 311 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 311 "inst_check.m"
  }
#line 311 "inst_check.m"
}

#line 118 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(
#line 118 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 118 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 118 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 118 "inst_check.m"
{
#line 118 "inst_check.m"
  {
#line 118 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 118 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 118 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 118 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 118 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 2389 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 118 "inst_check.m"
    else
#line 118 "inst_check.m"
      {
#line 118 "inst_check.m"
        MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 118 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 118 "inst_check.m"
        MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 118 "inst_check.m"
        MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 118 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8;

#line 118 "inst_check.m"
        {
#line 118 "inst_check.m"
          parse_tree__prog_data____Compare____type_ctor_0_0(&check_hlds__inst_check__V_8_8, check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_6_6);
        }
#line 2411 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_8_8 == (MR_Integer) 0);
#line 118 "inst_check.m"
        check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 118 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 118 "inst_check.m"
          *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_8_8;
#line 118 "inst_check.m"
        else
#line 118 "inst_check.m"
          {
#line 118 "inst_check.m"
            hlds__hlds_data____Compare____hlds_type_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_5_5, check_hlds__inst_check__V_7_7);
#line 118 "inst_check.m"
            return;
          }
#line 118 "inst_check.m"
      }
#line 118 "inst_check.m"
  }
#line 118 "inst_check.m"
}

#line 118 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(
#line 118 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 118 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 118 "inst_check.m"
{
#line 118 "inst_check.m"
  {
#line 118 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 118 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_7 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 118 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_8 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 118 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_7 == check_hlds__inst_check__CastY_8);
#line 118 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 118 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 118 "inst_check.m"
    else
#line 118 "inst_check.m"
      {
#line 118 "inst_check.m"
        MR_Word check_hlds__inst_check__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 118 "inst_check.m"
        MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 118 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 118 "inst_check.m"
        MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));

#line 2472 "check_hlds.inst_check.c"
        {
#line 2474 "check_hlds.inst_check.c"
          check_hlds__inst_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_5_5);
        }
#line 118 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 2479 "check_hlds.inst_check.c"
          {
#line 2481 "check_hlds.inst_check.c"
            return check_hlds__inst_check__succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_6_6);
          }
#line 118 "inst_check.m"
      }
#line 118 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 118 "inst_check.m"
  }
#line 118 "inst_check.m"
}

#line 534 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
#line 534 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 534 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 534 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 534 "inst_check.m"
{
#line 534 "inst_check.m"
  {
#line 534 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 534 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_12 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 534 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_13 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 534 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_12 == check_hlds__inst_check__CastY_13);
#line 534 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 2517 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 534 "inst_check.m"
    else
#line 534 "inst_check.m"
      {
#line 534 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 534 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 534 "inst_check.m"
        MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 2)));
#line 534 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 534 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 534 "inst_check.m"
        MR_Word check_hlds__inst_check__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 2)));
#line 534 "inst_check.m"
        MR_Word check_hlds__inst_check__V_10_10;

#line 534 "inst_check.m"
        {
#line 534 "inst_check.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_check__V_10_10, check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_7_7);
        }
#line 2543 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_10_10 == (MR_Integer) 0);
#line 534 "inst_check.m"
        check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 534 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 534 "inst_check.m"
          *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_10_10;
#line 534 "inst_check.m"
        else
#line 534 "inst_check.m"
          {
#line 534 "inst_check.m"
            MR_Word check_hlds__inst_check__V_11_11;

#line 534 "inst_check.m"
            {
#line 534 "inst_check.m"
              check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&check_hlds__inst_check__V_11_11, check_hlds__inst_check__V_5_5, check_hlds__inst_check__V_8_8);
            }
#line 2563 "check_hlds.inst_check.c"
            check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_11_11 == (MR_Integer) 0);
#line 534 "inst_check.m"
            check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 534 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 534 "inst_check.m"
              *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_11_11;
#line 534 "inst_check.m"
            else
#line 534 "inst_check.m"
              {
#line 534 "inst_check.m"
                {
#line 534 "inst_check.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_1[1], check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__V_6_6)), ((MR_Box) (check_hlds__inst_check__V_9_9)));
#line 534 "inst_check.m"
                  return;
                }
#line 534 "inst_check.m"
              }
#line 534 "inst_check.m"
          }
#line 534 "inst_check.m"
      }
#line 534 "inst_check.m"
  }
#line 534 "inst_check.m"
}

#line 534 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
#line 534 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 534 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 534 "inst_check.m"
{
#line 534 "inst_check.m"
  {
#line 534 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 534 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 534 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 534 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 534 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 534 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 534 "inst_check.m"
    else
#line 534 "inst_check.m"
      {
#line 534 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeInfo_11_11;
#line 534 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 534 "inst_check.m"
        MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 534 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 2)));
#line 534 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 534 "inst_check.m"
        MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 534 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 2)));

#line 2636 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_3_3 == check_hlds__inst_check__V_6_6);
#line 534 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 534 "inst_check.m"
          {
#line 2642 "check_hlds.inst_check.c"
            {
#line 2644 "check_hlds.inst_check.c"
              check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_7_7);
            }
#line 534 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 534 "inst_check.m"
              {
#line 2651 "check_hlds.inst_check.c"
                check_hlds__inst_check__TypeInfo_11_11 = (MR_Word) &check_hlds__inst_check_scalar_common_1[1];
#line 2653 "check_hlds.inst_check.c"
                {
#line 2655 "check_hlds.inst_check.c"
                  return check_hlds__inst_check__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_check__TypeInfo_11_11, ((MR_Box) (check_hlds__inst_check__V_5_5)), ((MR_Box) (check_hlds__inst_check__V_8_8)));
                }
#line 534 "inst_check.m"
              }
#line 534 "inst_check.m"
          }
#line 534 "inst_check.m"
      }
#line 534 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 534 "inst_check.m"
  }
#line 534 "inst_check.m"
}

#line 121 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0(
#line 121 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 121 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 121 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 121 "inst_check.m"
{
#line 121 "inst_check.m"
  {
#line 121 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 121 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar1_4 = check_hlds__inst_check__HeadVar__2_2;
#line 121 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar2_5 = check_hlds__inst_check__HeadVar__3_3;

#line 121 "inst_check.m"
    {
#line 121 "inst_check.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_2[0], check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_check__Cast_HeadVar2_5)));
#line 121 "inst_check.m"
      return;
    }
#line 121 "inst_check.m"
  }
#line 121 "inst_check.m"
}

#line 121 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0(
#line 121 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 121 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 121 "inst_check.m"
{
#line 121 "inst_check.m"
  {
#line 121 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 121 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar1_3 = check_hlds__inst_check__HeadVar__1_1;
#line 121 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar2_4 = check_hlds__inst_check__HeadVar__2_2;

#line 121 "inst_check.m"
    {
#line 121 "inst_check.m"
      return check_hlds__inst_check__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_check_scalar_common_2[0], ((MR_Box) (check_hlds__inst_check__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_check__Cast_HeadVar2_4)));
    }
#line 121 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 121 "inst_check.m"
  }
#line 121 "inst_check.m"
}

#line 115 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0(
#line 115 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 115 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 115 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 115 "inst_check.m"
{
#line 115 "inst_check.m"
  {
#line 115 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 115 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 115 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 115 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 115 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 2757 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 115 "inst_check.m"
    else
#line 115 "inst_check.m"
      {
#line 115 "inst_check.m"
        MR_String check_hlds__inst_check__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 115 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 115 "inst_check.m"
        MR_String check_hlds__inst_check__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 115 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 115 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8;

#line 115 "inst_check.m"
        {
#line 115 "inst_check.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_check__V_8_8, check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_6_6);
        }
#line 2779 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_8_8 == (MR_Integer) 0);
#line 115 "inst_check.m"
        check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 115 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 115 "inst_check.m"
          *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_8_8;
#line 115 "inst_check.m"
        else
#line 115 "inst_check.m"
          {
#line 115 "inst_check.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_5_5, check_hlds__inst_check__V_7_7);
#line 115 "inst_check.m"
            return;
          }
#line 115 "inst_check.m"
      }
#line 115 "inst_check.m"
  }
#line 115 "inst_check.m"
}

#line 115 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0(
#line 115 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 115 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 115 "inst_check.m"
{
#line 115 "inst_check.m"
  {
#line 115 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 115 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_7 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 115 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_8 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 115 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_7 == check_hlds__inst_check__CastY_8);
#line 115 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 115 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 115 "inst_check.m"
    else
#line 115 "inst_check.m"
      {
#line 115 "inst_check.m"
        MR_String check_hlds__inst_check__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 115 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 115 "inst_check.m"
        MR_String check_hlds__inst_check__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 115 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));

#line 2840 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_5_5) == 0);
#line 115 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 2844 "check_hlds.inst_check.c"
          check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_4_4 == check_hlds__inst_check__V_6_6);
#line 115 "inst_check.m"
      }
#line 115 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 115 "inst_check.m"
  }
#line 115 "inst_check.m"
}

#line 813 "inst_check.m"
static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
#line 813 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3)
#line 813 "inst_check.m"
{
#line 817 "inst_check.m"
  {
#line 817 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 817 "inst_check.m"
    MR_String check_hlds__inst_check__Str_4;

#line 817 "inst_check.m"
#line 817 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3)) {
#line 817 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 817 "inst_check.m"
      case (MR_Integer) 0:
#line 817 "inst_check.m"
        {
#line 817 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtor_5;
#line 817 "inst_check.m"
          MR_Word check_hlds__inst_check__V_13_13 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3), (MR_Integer) 0);
#line 817 "inst_check.m"
          MR_Word check_hlds__inst_check__V_6_6;

#line 817 "inst_check.m"
          check_hlds__inst_check__TypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_13_13, (MR_Integer) 0)));
#line 817 "inst_check.m"
          check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_13_13, (MR_Integer) 1)));
#line 818 "inst_check.m"
          {
#line 818 "inst_check.m"
            return check_hlds__inst_check__Str_4 = parse_tree__prog_out__type_ctor_to_string_1_f_0(check_hlds__inst_check__TypeCtor_5);
          }
#line 817 "inst_check.m"
        }
#line 817 "inst_check.m"
        break;
#line 817 "inst_check.m"
      case (MR_Integer) 1:
#line 820 "inst_check.m"
        {
#line 820 "inst_check.m"
          MR_Word check_hlds__inst_check__BuiltinType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

#line 824 "inst_check.m"
          check_hlds__inst_check__Str_4 = ((&check_hlds__inst_check_vector_common_8[0 + check_hlds__inst_check__BuiltinType_7]))->check_hlds__inst_check__vector_common_type_8_0__vct_8_f_0;
#line 820 "inst_check.m"
        }
#line 817 "inst_check.m"
        break;
#line 817 "inst_check.m"
      case (MR_Integer) 2:
#line 835 "inst_check.m"
        {
#line 835 "inst_check.m"
          MR_Integer check_hlds__inst_check__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));
#line 835 "inst_check.m"
          MR_String check_hlds__inst_check__V_14_14;

#line 836 "inst_check.m"
          {
#line 836 "inst_check.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_3[13], check_hlds__inst_check__Arity_8, &check_hlds__inst_check__V_14_14);
          }
#line 836 "inst_check.m"
          {
#line 836 "inst_check.m"
            return check_hlds__inst_check__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", check_hlds__inst_check__V_14_14);
          }
#line 835 "inst_check.m"
        }
#line 817 "inst_check.m"
        break;
#line 817 "inst_check.m"
    }
#line 817 "inst_check.m"
    return check_hlds__inst_check__Str_4;
#line 817 "inst_check.m"
  }
#line 813 "inst_check.m"
}

#line 801 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(
#line 801 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 801 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 801 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
#line 801 "inst_check.m"
{
#line 804 "inst_check.m"
  {
#line 804 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 804 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "inst_check.m"
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 804 "inst_check.m"
    else
#line 805 "inst_check.m"
      {
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorInfo_36_36;
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatch_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatches_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__TailPieces_9;
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_11;
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__BoundInstPieces_12;
#line 805 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_13_13 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__V_15_15;
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__V_18_18;
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__V_19_19;
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__V_20_20;
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__V_23_23;
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__V_24_24;
#line 805 "inst_check.m"
        MR_String check_hlds__inst_check__V_25_25;
#line 805 "inst_check.m"
        MR_Word check_hlds__inst_check__V_35_35;
#line 807 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_10_10;

#line 806 "inst_check.m"
        {
#line 806 "inst_check.m"
          check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(check_hlds__inst_check__Mismatches_6, check_hlds__inst_check__V_13_13, &check_hlds__inst_check__TailPieces_9);
        }
#line 807 "inst_check.m"
        check_hlds__inst_check__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 0)));
#line 807 "inst_check.m"
        check_hlds__inst_check__TypeDefnOrBuiltin_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 1)));
#line 807 "inst_check.m"
        check_hlds__inst_check__BoundInstPieces_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 2)));
#line 3011 "check_hlds.inst_check.c"
        check_hlds__inst_check__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 808 "inst_check.m"
        {
#line 808 "inst_check.m"
          check_hlds__inst_check__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 808 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 1) = ((MR_Box) (check_hlds__inst_check__HeadVar__2_2));
#line 808 "inst_check.m"
        }
#line 809 "inst_check.m"
        {
#line 809 "inst_check.m"
          check_hlds__inst_check__V_25_25 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__TypeDefnOrBuiltin_11);
        }
#line 809 "inst_check.m"
        {
#line 809 "inst_check.m"
          check_hlds__inst_check__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 809 "inst_check.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_24_24, 0) = ((MR_Box) (check_hlds__inst_check__V_25_25));
#line 809 "inst_check.m"
        }
#line 809 "inst_check.m"
        {
#line 809 "inst_check.m"
          check_hlds__inst_check__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_23_23, 0) = ((MR_Box) (check_hlds__inst_check__V_24_24));
#line 809 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[19])));
#line 809 "inst_check.m"
        }
#line 808 "inst_check.m"
        {
#line 808 "inst_check.m"
          check_hlds__inst_check__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[33])));
#line 808 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_20_20, 1) = ((MR_Box) (check_hlds__inst_check__V_23_23));
#line 808 "inst_check.m"
        }
#line 808 "inst_check.m"
        {
#line 808 "inst_check.m"
          check_hlds__inst_check__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 0) = ((MR_Box) (check_hlds__inst_check__V_19_19));
#line 808 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 1) = ((MR_Box) (check_hlds__inst_check__V_20_20));
#line 808 "inst_check.m"
        }
#line 808 "inst_check.m"
        {
#line 808 "inst_check.m"
          check_hlds__inst_check__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[32])));
#line 808 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_15_15, 1) = ((MR_Box) (check_hlds__inst_check__V_18_18));
#line 808 "inst_check.m"
        }
#line 811 "inst_check.m"
        {
#line 811 "inst_check.m"
          check_hlds__inst_check__V_35_35 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_36_36, check_hlds__inst_check__BoundInstPieces_12, check_hlds__inst_check__TailPieces_9);
        }
#line 811 "inst_check.m"
        {
#line 811 "inst_check.m"
          *check_hlds__inst_check__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_36_36, check_hlds__inst_check__V_15_15, check_hlds__inst_check__V_35_35);
        }
#line 805 "inst_check.m"
      }
#line 804 "inst_check.m"
  }
#line 801 "inst_check.m"
}

#line 778 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
#line 778 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 778 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 778 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
#line 778 "inst_check.m"
{
#line 781 "inst_check.m"
  {
#line 781 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 781 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 781 "inst_check.m"
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 781 "inst_check.m"
    else
#line 782 "inst_check.m"
      {
#line 782 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatch_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 782 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatches_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 782 "inst_check.m"
        MR_Integer check_hlds__inst_check__NumMismatches_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 0)));
#line 783 "inst_check.m"
        MR_Word check_hlds__inst_check__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 1)));
#line 783 "inst_check.m"
        MR_Word check_hlds__inst_check__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 2)));

#line 784 "inst_check.m"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__HeadVar__1_1 == check_hlds__inst_check__NumMismatches_9);
#line 787 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 785 "inst_check.m"
          {
#line 785 "inst_check.m"
            MR_Word check_hlds__inst_check__TakenTail_12;

#line 785 "inst_check.m"
            {
#line 785 "inst_check.m"
              check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Mismatches_7, &check_hlds__inst_check__TakenTail_12);
            }
#line 786 "inst_check.m"
            {
#line 786 "inst_check.m"
              MR_Word base;
#line 786 "inst_check.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "inst_check.m"
              *check_hlds__inst_check__HeadVar__3_3 = base;
#line 786 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Mismatch_6));
#line 786 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__TakenTail_12));
#line 786 "inst_check.m"
            }
#line 785 "inst_check.m"
          }
#line 787 "inst_check.m"
        else
#line 788 "inst_check.m"
          *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 782 "inst_check.m"
      }
#line 781 "inst_check.m"
  }
#line 778 "inst_check.m"
}

#line 756 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_mismatch_pieces_2_p_0(
#line 756 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 756 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__2_2)
#line 756 "inst_check.m"
{
#line 759 "inst_check.m"
  {
#line 759 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 759 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "inst_check.m"
      *check_hlds__inst_check__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 759 "inst_check.m"
    else
#line 760 "inst_check.m"
      {
#line 760 "inst_check.m"
        MR_Word check_hlds__inst_check__FirstMismatch_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 760 "inst_check.m"
        MR_Word check_hlds__inst_check__LaterMismatches_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 760 "inst_check.m"
        MR_Integer check_hlds__inst_check__FirstNumMismatches_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 0)));
#line 760 "inst_check.m"
        MR_Word check_hlds__inst_check__TakenLaterMismatches_9;
#line 761 "inst_check.m"
        MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 1)));
#line 761 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 2)));

#line 762 "inst_check.m"
        {
#line 762 "inst_check.m"
          check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(check_hlds__inst_check__FirstNumMismatches_6, check_hlds__inst_check__LaterMismatches_4, &check_hlds__inst_check__TakenLaterMismatches_9);
        }
#line 767 "inst_check.m"
        if ((check_hlds__inst_check__TakenLaterMismatches_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 794 "inst_check.m"
          {
#line 794 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 1)));
#line 794 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInstPieces_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 2)));
#line 794 "inst_check.m"
            MR_Word check_hlds__inst_check__V_34_34;
#line 794 "inst_check.m"
            MR_Word check_hlds__inst_check__V_37_37;
#line 794 "inst_check.m"
            MR_Word check_hlds__inst_check__V_38_38;
#line 794 "inst_check.m"
            MR_String check_hlds__inst_check__V_39_39;
#line 795 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 0)));

#line 797 "inst_check.m"
            {
#line 797 "inst_check.m"
              check_hlds__inst_check__V_39_39 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__TypeDefnOrBuiltin_32);
            }
#line 797 "inst_check.m"
            {
#line 797 "inst_check.m"
              check_hlds__inst_check__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "inst_check.m"
              MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_38_38, 0) = ((MR_Box) (check_hlds__inst_check__V_39_39));
#line 797 "inst_check.m"
            }
#line 797 "inst_check.m"
            {
#line 797 "inst_check.m"
              check_hlds__inst_check__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_37_37, 0) = ((MR_Box) (check_hlds__inst_check__V_38_38));
#line 797 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[19])));
#line 797 "inst_check.m"
            }
#line 796 "inst_check.m"
            {
#line 796 "inst_check.m"
              check_hlds__inst_check__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[30])));
#line 796 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_34_34, 1) = ((MR_Box) (check_hlds__inst_check__V_37_37));
#line 796 "inst_check.m"
            }
#line 799 "inst_check.m"
            {
#line 799 "inst_check.m"
              *check_hlds__inst_check__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__V_34_34, check_hlds__inst_check__BoundInstPieces_33);
            }
#line 794 "inst_check.m"
          }
#line 767 "inst_check.m"
        else
#line 768 "inst_check.m"
          {
#line 768 "inst_check.m"
            MR_Word check_hlds__inst_check__RelevantMismatches_12;
#line 768 "inst_check.m"
            MR_Integer check_hlds__inst_check__NumRelevantMismatches_13;
#line 768 "inst_check.m"
            MR_Word check_hlds__inst_check__HeadPieces_14;
#line 768 "inst_check.m"
            MR_Word check_hlds__inst_check__TailPieces_15;
#line 768 "inst_check.m"
            MR_Word check_hlds__inst_check__V_18_18;
#line 768 "inst_check.m"
            MR_Word check_hlds__inst_check__V_19_19;

#line 769 "inst_check.m"
            {
#line 769 "inst_check.m"
              check_hlds__inst_check__RelevantMismatches_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__RelevantMismatches_12, 0) = ((MR_Box) (check_hlds__inst_check__FirstMismatch_3));
#line 769 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__RelevantMismatches_12, 1) = ((MR_Box) (check_hlds__inst_check__TakenLaterMismatches_9));
#line 769 "inst_check.m"
            }
#line 770 "inst_check.m"
            {
#line 770 "inst_check.m"
              mercury__list__length_2_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0, check_hlds__inst_check__RelevantMismatches_12, &check_hlds__inst_check__NumRelevantMismatches_13);
            }
#line 771 "inst_check.m"
            {
#line 771 "inst_check.m"
              check_hlds__inst_check__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "inst_check.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 771 "inst_check.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 1) = ((MR_Box) (check_hlds__inst_check__NumRelevantMismatches_13));
#line 771 "inst_check.m"
            }
#line 771 "inst_check.m"
            {
#line 771 "inst_check.m"
              check_hlds__inst_check__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 0) = ((MR_Box) (check_hlds__inst_check__V_19_19));
#line 771 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[15])));
#line 771 "inst_check.m"
            }
#line 771 "inst_check.m"
            {
#line 771 "inst_check.m"
              check_hlds__inst_check__HeadPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[31])));
#line 771 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadPieces_14, 1) = ((MR_Box) (check_hlds__inst_check__V_18_18));
#line 771 "inst_check.m"
            }
#line 773 "inst_check.m"
            {
#line 773 "inst_check.m"
              check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(check_hlds__inst_check__RelevantMismatches_12, (MR_Integer) 1, &check_hlds__inst_check__TailPieces_15);
            }
#line 775 "inst_check.m"
            {
#line 775 "inst_check.m"
              *check_hlds__inst_check__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__HeadPieces_14, check_hlds__inst_check__TailPieces_15);
            }
#line 768 "inst_check.m"
          }
#line 760 "inst_check.m"
      }
#line 759 "inst_check.m"
  }
#line 756 "inst_check.m"
}

#line 740 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_mismatch_6_p_0(
#line 740 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_7,
#line 740 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInst_8,
#line 740 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16,
#line 740 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17,
#line 740 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18,
#line 740 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19)
#line 740 "inst_check.m"
{
#line 743 "inst_check.m"
  {
#line 743 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 743 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_46_46;
#line 743 "inst_check.m"
    MR_Word check_hlds__inst_check__ConsId_11;
#line 743 "inst_check.m"
    MR_Word check_hlds__inst_check__SubInsts_12;
#line 743 "inst_check.m"
    MR_String check_hlds__inst_check__InFunctorStr_13;
#line 743 "inst_check.m"
    MR_String check_hlds__inst_check__ActualStr_14;
#line 743 "inst_check.m"
    MR_Word check_hlds__inst_check__Pieces_15;
#line 743 "inst_check.m"
    MR_String check_hlds__inst_check__V_29_29;
#line 743 "inst_check.m"
    MR_Integer check_hlds__inst_check__V_33_33;
#line 743 "inst_check.m"
    MR_Word check_hlds__inst_check__V_35_35;
#line 743 "inst_check.m"
    MR_Word check_hlds__inst_check__V_36_36;
#line 743 "inst_check.m"
    MR_Word check_hlds__inst_check__V_38_38;
#line 743 "inst_check.m"
    MR_Word check_hlds__inst_check__V_39_39;
#line 743 "inst_check.m"
    MR_Word check_hlds__inst_check__V_44_44;
#line 743 "inst_check.m"
    MR_String check_hlds__inst_check__V_48_48;
#line 743 "inst_check.m"
    MR_Word check_hlds__inst_check__V_54_54;
#line 743 "inst_check.m"
    MR_String check_hlds__inst_check__V_55_55;
#line 743 "inst_check.m"
    MR_String check_hlds__inst_check__V_58_58;
#line 743 "inst_check.m"
    MR_String check_hlds__inst_check__V_65_65;
#line 743 "inst_check.m"
    MR_String check_hlds__inst_check__V_67_67;
#line 743 "inst_check.m"
    MR_String check_hlds__inst_check__V_68_68;
#line 743 "inst_check.m"
    MR_String check_hlds__inst_check__V_75_75;

#line 744 "inst_check.m"
    *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17 = (check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16 + (MR_Integer) 1);
#line 745 "inst_check.m"
    check_hlds__inst_check__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_8, (MR_Integer) 0)));
#line 745 "inst_check.m"
    check_hlds__inst_check__SubInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_8, (MR_Integer) 1)));
#line 3419 "check_hlds.inst_check.c"
    check_hlds__inst_check__V_54_54 = (MR_Word) &check_hlds__inst_check_scalar_common_3[13];
#line 746 "inst_check.m"
    {
#line 746 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_54_54, check_hlds__inst_check__CurNum_7, &check_hlds__inst_check__V_48_48);
    }
#line 746 "inst_check.m"
    {
#line 746 "inst_check.m"
      check_hlds__inst_check__V_55_55 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_48_48, (MR_String) ":");
    }
#line 746 "inst_check.m"
    {
#line 746 "inst_check.m"
      check_hlds__inst_check__InFunctorStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", check_hlds__inst_check__V_55_55);
    }
#line 748 "inst_check.m"
    {
#line 748 "inst_check.m"
      check_hlds__inst_check__V_29_29 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 1, check_hlds__inst_check__ConsId_11);
    }
#line 749 "inst_check.m"
    {
#line 749 "inst_check.m"
      check_hlds__inst_check__V_33_33 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_check__SubInsts_12);
    }
#line 749 "inst_check.m"
    {
#line 749 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_54_54, check_hlds__inst_check__V_33_33, &check_hlds__inst_check__V_58_58);
    }
#line 747 "inst_check.m"
    {
#line 747 "inst_check.m"
      check_hlds__inst_check__V_65_65 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_58_58, (MR_String) ".");
    }
#line 747 "inst_check.m"
    {
#line 747 "inst_check.m"
      check_hlds__inst_check__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "/", check_hlds__inst_check__V_65_65);
    }
#line 748 "inst_check.m"
    {
#line 748 "inst_check.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_54_54, check_hlds__inst_check__V_29_29, &check_hlds__inst_check__V_68_68);
    }
#line 747 "inst_check.m"
    {
#line 747 "inst_check.m"
      check_hlds__inst_check__V_75_75 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_68_68, check_hlds__inst_check__V_67_67);
    }
#line 747 "inst_check.m"
    {
#line 747 "inst_check.m"
      check_hlds__inst_check__ActualStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "function symbol is ", check_hlds__inst_check__V_75_75);
    }
#line 751 "inst_check.m"
    {
#line 751 "inst_check.m"
      check_hlds__inst_check__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 751 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_35_35, 1) = ((MR_Box) (check_hlds__inst_check__InFunctorStr_13));
#line 751 "inst_check.m"
    }
#line 751 "inst_check.m"
    {
#line 751 "inst_check.m"
      check_hlds__inst_check__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 751 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_39_39, 1) = ((MR_Box) (check_hlds__inst_check__ActualStr_14));
#line 751 "inst_check.m"
    }
#line 751 "inst_check.m"
    {
#line 751 "inst_check.m"
      check_hlds__inst_check__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_38_38, 0) = ((MR_Box) (check_hlds__inst_check__V_39_39));
#line 751 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[13])));
#line 751 "inst_check.m"
    }
#line 751 "inst_check.m"
    {
#line 751 "inst_check.m"
      check_hlds__inst_check__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 751 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_36_36, 1) = ((MR_Box) (check_hlds__inst_check__V_38_38));
#line 751 "inst_check.m"
    }
#line 751 "inst_check.m"
    {
#line 751 "inst_check.m"
      check_hlds__inst_check__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_15, 0) = ((MR_Box) (check_hlds__inst_check__V_35_35));
#line 751 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_15, 1) = ((MR_Box) (check_hlds__inst_check__V_36_36));
#line 751 "inst_check.m"
    }
#line 3526 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 752 "inst_check.m"
    {
#line 752 "inst_check.m"
      check_hlds__inst_check__V_44_44 = mercury__cord__from_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_46_46, check_hlds__inst_check__Pieces_15);
    }
#line 752 "inst_check.m"
    {
#line 752 "inst_check.m"
      *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19 = mercury__cord__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_46_46, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18, check_hlds__inst_check__V_44_44);
    }
#line 743 "inst_check.m"
  }
#line 740 "inst_check.m"
}

#line 729 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0_1(
#line 729 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 729 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 729 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 729 "inst_check.m"
{
#line 729 "inst_check.m"
  {
#line 729 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 729 "inst_check.m"
    MR_String check_hlds__inst_check__conv0_HeadVar__2_2;

#line 729 "inst_check.m"
    {
#line 729 "inst_check.m"
      mercury__string__int_to_string_2_p_0(((MR_Integer) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_HeadVar__2_2);
    }
#line 729 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__2_2));
#line 729 "inst_check.m"
  }
#line 729 "inst_check.m"
}

#line 721 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0(
#line 721 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_9,
#line 721 "inst_check.m"
  MR_String check_hlds__inst_check__FunctorName_10,
#line 721 "inst_check.m"
  MR_Integer check_hlds__inst_check__ActualArity_11,
#line 721 "inst_check.m"
  MR_Word check_hlds__inst_check__ExpectedAritiesSet_12,
#line 721 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22,
#line 721 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23,
#line 721 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24,
#line 721 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25)
#line 721 "inst_check.m"
{
#line 726 "inst_check.m"
  {
#line 726 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_60_60;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_62_62;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__InFunctorStr_15;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__ExpectedArities_16;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__ExpectedArityStrs_17;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__ExpectedArityOrStr_18;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__ActualStr_19;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__ExpectedStr_20;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__Pieces_21;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__V_44_44;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__V_45_45;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__V_47_47;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__V_48_48;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__V_49_49;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__V_51_51;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__V_52_52;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__V_57_57;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__V_64_64;
#line 726 "inst_check.m"
    MR_Word check_hlds__inst_check__V_70_70;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__V_71_71;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__V_74_74;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__V_81_81;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__V_83_83;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__V_84_84;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__V_91_91;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__V_94_94;
#line 726 "inst_check.m"
    MR_String check_hlds__inst_check__V_101_101;

#line 727 "inst_check.m"
    *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23 = (check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22 + (MR_Integer) 1);
#line 3655 "check_hlds.inst_check.c"
    check_hlds__inst_check__V_70_70 = (MR_Word) &check_hlds__inst_check_scalar_common_3[13];
#line 728 "inst_check.m"
    {
#line 728 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__CurNum_9, &check_hlds__inst_check__V_64_64);
    }
#line 728 "inst_check.m"
    {
#line 728 "inst_check.m"
      check_hlds__inst_check__V_71_71 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_64_64, (MR_String) ":");
    }
#line 728 "inst_check.m"
    {
#line 728 "inst_check.m"
      check_hlds__inst_check__InFunctorStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", check_hlds__inst_check__V_71_71);
    }
#line 3672 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 732 "inst_check.m"
    {
#line 732 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__ActualArity_11, &check_hlds__inst_check__V_74_74);
    }
#line 731 "inst_check.m"
    {
#line 731 "inst_check.m"
      check_hlds__inst_check__V_81_81 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_74_74, (MR_String) ",");
    }
#line 731 "inst_check.m"
    {
#line 731 "inst_check.m"
      check_hlds__inst_check__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) " has arity ", check_hlds__inst_check__V_81_81);
    }
#line 732 "inst_check.m"
    {
#line 732 "inst_check.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__FunctorName_10, &check_hlds__inst_check__V_84_84);
    }
#line 731 "inst_check.m"
    {
#line 731 "inst_check.m"
      check_hlds__inst_check__V_91_91 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_84_84, check_hlds__inst_check__V_83_83);
    }
#line 731 "inst_check.m"
    {
#line 731 "inst_check.m"
      check_hlds__inst_check__ActualStr_19 = mercury__string__f_43_43_2_f_0((MR_String) "function symbol ", check_hlds__inst_check__V_91_91);
    }
#line 735 "inst_check.m"
    {
#line 735 "inst_check.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_60_60, check_hlds__inst_check__ExpectedAritiesSet_12, &check_hlds__inst_check__ExpectedArities_16);
    }
#line 729 "inst_check.m"
    {
#line 729 "inst_check.m"
      mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[4], check_hlds__inst_check__ExpectedArities_16, &check_hlds__inst_check__ExpectedArityStrs_17);
    }
#line 730 "inst_check.m"
    {
#line 730 "inst_check.m"
      check_hlds__inst_check__ExpectedArityOrStr_18 = mercury__string__join_list_2_f_0((MR_String) "or", check_hlds__inst_check__ExpectedArityStrs_17);
    }
#line 734 "inst_check.m"
    {
#line 734 "inst_check.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__ExpectedArityOrStr_18, &check_hlds__inst_check__V_94_94);
    }
#line 733 "inst_check.m"
    {
#line 733 "inst_check.m"
      check_hlds__inst_check__V_101_101 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_94_94, (MR_String) ".");
    }
#line 733 "inst_check.m"
    {
#line 733 "inst_check.m"
      check_hlds__inst_check__ExpectedStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "expected arity was ", check_hlds__inst_check__V_101_101);
    }
#line 736 "inst_check.m"
    {
#line 736 "inst_check.m"
      check_hlds__inst_check__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 736 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_44_44, 1) = ((MR_Box) (check_hlds__inst_check__InFunctorStr_15));
#line 736 "inst_check.m"
    }
#line 736 "inst_check.m"
    {
#line 736 "inst_check.m"
      check_hlds__inst_check__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 736 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_48_48, 1) = ((MR_Box) (check_hlds__inst_check__ActualStr_19));
#line 736 "inst_check.m"
    }
#line 737 "inst_check.m"
    {
#line 737 "inst_check.m"
      check_hlds__inst_check__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 737 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 1) = ((MR_Box) (check_hlds__inst_check__ExpectedStr_20));
#line 737 "inst_check.m"
    }
#line 737 "inst_check.m"
    {
#line 737 "inst_check.m"
      check_hlds__inst_check__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 0) = ((MR_Box) (check_hlds__inst_check__V_52_52));
#line 737 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[13])));
#line 737 "inst_check.m"
    }
#line 736 "inst_check.m"
    {
#line 736 "inst_check.m"
      check_hlds__inst_check__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 736 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_49_49, 1) = ((MR_Box) (check_hlds__inst_check__V_51_51));
#line 736 "inst_check.m"
    }
#line 736 "inst_check.m"
    {
#line 736 "inst_check.m"
      check_hlds__inst_check__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_47_47, 0) = ((MR_Box) (check_hlds__inst_check__V_48_48));
#line 736 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_47_47, 1) = ((MR_Box) (check_hlds__inst_check__V_49_49));
#line 736 "inst_check.m"
    }
#line 736 "inst_check.m"
    {
#line 736 "inst_check.m"
      check_hlds__inst_check__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 736 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_45_45, 1) = ((MR_Box) (check_hlds__inst_check__V_47_47));
#line 736 "inst_check.m"
    }
#line 736 "inst_check.m"
    {
#line 736 "inst_check.m"
      check_hlds__inst_check__Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_21, 0) = ((MR_Box) (check_hlds__inst_check__V_44_44));
#line 736 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_21, 1) = ((MR_Box) (check_hlds__inst_check__V_45_45));
#line 736 "inst_check.m"
    }
#line 3814 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 738 "inst_check.m"
    {
#line 738 "inst_check.m"
      check_hlds__inst_check__V_57_57 = mercury__cord__from_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_62_62, check_hlds__inst_check__Pieces_21);
    }
#line 738 "inst_check.m"
    {
#line 738 "inst_check.m"
      *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25 = mercury__cord__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_62_62, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24, check_hlds__inst_check__V_57_57);
    }
#line 726 "inst_check.m"
  }
#line 721 "inst_check.m"
}

#line 698 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(
#line 698 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 698 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 698 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 698 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 698 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 698 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 698 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
#line 698 "inst_check.m"
{
#line 702 "inst_check.m"
  while (MR_TRUE)
#line 702 "inst_check.m"
    {
#line 702 "inst_check.m"
      /* tailcall optimized into a loop */
#line 702 "inst_check.m"
      {
#line 702 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 702 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "inst_check.m"
          {
#line 703 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 703 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 702 "inst_check.m"
          }
#line 702 "inst_check.m"
        else
#line 705 "inst_check.m"
          {
#line 705 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 705 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 705 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
#line 705 "inst_check.m"
            MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29;
#line 705 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30;
#line 705 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_33_33;
#line 706 "inst_check.m"
            MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));
#line 713 "inst_check.m"
            MR_Integer check_hlds__inst_check__ActualArity_24;

#line 707 "inst_check.m"
            check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 707 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 707 "inst_check.m"
              {
#line 707 "inst_check.m"
                check_hlds__inst_check__ActualArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 708 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__ActualArity_24 == check_hlds__inst_check__HeadVar__1_1);
#line 710 "inst_check.m"
                if (check_hlds__inst_check__succeeded)
#line 709 "inst_check.m"
                  {
#line 709 "inst_check.m"
                    check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 709 "inst_check.m"
                    check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 709 "inst_check.m"
                  }
#line 710 "inst_check.m"
                else
#line 711 "inst_check.m"
                  {
#line 711 "inst_check.m"
                    check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30);
                  }
#line 707 "inst_check.m"
              }
#line 707 "inst_check.m"
            else
#line 714 "inst_check.m"
              {
#line 714 "inst_check.m"
                check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30);
              }
#line 716 "inst_check.m"
            check_hlds__inst_check__V_33_33 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 716 "inst_check.m"
            /* direct tailcall eliminated */
#line 716 "inst_check.m"
            {
#line 716 "inst_check.m"
              MR_Integer check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__V_33_33;
#line 716 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__3__tmp_copy_3 = check_hlds__inst_check__BoundInsts_19;
#line 716 "inst_check.m"
              MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29;
#line 716 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30;

#line 716 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6;
#line 716 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4;
#line 716 "inst_check.m"
              check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__HeadVar__3__tmp_copy_3;
#line 716 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 716 "inst_check.m"
            }
#line 716 "inst_check.m"
            continue;
#line 705 "inst_check.m"
          }
#line 702 "inst_check.m"
      }
#line 702 "inst_check.m"
      break;
#line 702 "inst_check.m"
    }
#line 698 "inst_check.m"
}

#line 649 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(
#line 649 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 649 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 649 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 649 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 649 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 649 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 649 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
#line 649 "inst_check.m"
{
#line 653 "inst_check.m"
  while (MR_TRUE)
#line 653 "inst_check.m"
    {
#line 653 "inst_check.m"
      /* tailcall optimized into a loop */
#line 653 "inst_check.m"
      {
#line 653 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 653 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "inst_check.m"
          {
#line 654 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 654 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 653 "inst_check.m"
          }
#line 653 "inst_check.m"
        else
#line 656 "inst_check.m"
          {
#line 656 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 656 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 656 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
#line 656 "inst_check.m"
            MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43;
#line 656 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44;
#line 656 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_45_45;
#line 657 "inst_check.m"
            MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));

#line 665 "inst_check.m"
#line 665 "inst_check.m"
            switch (check_hlds__inst_check__HeadVar__1_1) {
#line 665 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 665 "inst_check.m"
              case (MR_Integer) 3:
#line 676 "inst_check.m"
                {
#line 674 "inst_check.m"
                  MR_Char check_hlds__inst_check__V_26_26;

#line 674 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 674 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 674 "inst_check.m"
                    {
#line 674 "inst_check.m"
                      check_hlds__inst_check__V_26_26 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 675 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 675 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 674 "inst_check.m"
                    }
#line 674 "inst_check.m"
                  else
#line 682 "inst_check.m"
                    {
#line 677 "inst_check.m"
                      MR_Word check_hlds__inst_check__SymName_27;
#line 677 "inst_check.m"
                      MR_Integer check_hlds__inst_check__ConsArity_28;
#line 677 "inst_check.m"
                      MR_Integer check_hlds__inst_check__V_37_37;
#line 677 "inst_check.m"
                      MR_String check_hlds__inst_check__V_38_38;
#line 677 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_29_29;

#line 677 "inst_check.m"
                      check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 677 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 677 "inst_check.m"
                        {
#line 677 "inst_check.m"
                          check_hlds__inst_check__SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 677 "inst_check.m"
                          check_hlds__inst_check__ConsArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 2)));
#line 677 "inst_check.m"
                          check_hlds__inst_check__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 3)));
#line 678 "inst_check.m"
                          {
#line 678 "inst_check.m"
                            check_hlds__inst_check__V_38_38 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_27);
                          }
#line 678 "inst_check.m"
                          {
#line 678 "inst_check.m"
                            check_hlds__inst_check__V_37_37 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__V_38_38);
                          }
#line 678 "inst_check.m"
                          check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_37_37 == (MR_Integer) 1);
#line 677 "inst_check.m"
                          if (check_hlds__inst_check__succeeded)
#line 679 "inst_check.m"
                            check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_28 == (MR_Integer) 0);
#line 677 "inst_check.m"
                        }
#line 682 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 681 "inst_check.m"
                        {
#line 681 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 681 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 681 "inst_check.m"
                        }
#line 682 "inst_check.m"
                      else
#line 683 "inst_check.m"
                        {
#line 683 "inst_check.m"
                          check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                        }
#line 682 "inst_check.m"
                    }
#line 676 "inst_check.m"
                }
#line 665 "inst_check.m"
                break;
#line 665 "inst_check.m"
              case (MR_Integer) 1:
#line 669 "inst_check.m"
                {
#line 667 "inst_check.m"
                  MR_Float check_hlds__inst_check__V_25_25;

#line 667 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 667 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 667 "inst_check.m"
                    {
#line 667 "inst_check.m"
                      check_hlds__inst_check__V_25_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 668 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 668 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 667 "inst_check.m"
                    }
#line 667 "inst_check.m"
                  else
#line 670 "inst_check.m"
                    {
#line 670 "inst_check.m"
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                    }
#line 669 "inst_check.m"
                }
#line 665 "inst_check.m"
                break;
#line 665 "inst_check.m"
              case (MR_Integer) 0:
#line 662 "inst_check.m"
                {
#line 660 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_24_24;

#line 660 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 660 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 660 "inst_check.m"
                    {
#line 660 "inst_check.m"
                      check_hlds__inst_check__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 661 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 661 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 660 "inst_check.m"
                    }
#line 660 "inst_check.m"
                  else
#line 663 "inst_check.m"
                    {
#line 663 "inst_check.m"
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                    }
#line 662 "inst_check.m"
                }
#line 665 "inst_check.m"
                break;
#line 665 "inst_check.m"
              case (MR_Integer) 2:
#line 689 "inst_check.m"
                {
#line 687 "inst_check.m"
                  MR_String check_hlds__inst_check__V_30_30;

#line 687 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 687 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 687 "inst_check.m"
                    {
#line 687 "inst_check.m"
                      check_hlds__inst_check__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 688 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 688 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 687 "inst_check.m"
                    }
#line 687 "inst_check.m"
                  else
#line 690 "inst_check.m"
                    {
#line 690 "inst_check.m"
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                    }
#line 689 "inst_check.m"
                }
#line 665 "inst_check.m"
                break;
#line 665 "inst_check.m"
            }
#line 693 "inst_check.m"
            check_hlds__inst_check__V_45_45 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 693 "inst_check.m"
            /* direct tailcall eliminated */
#line 693 "inst_check.m"
            {
#line 693 "inst_check.m"
              MR_Integer check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__V_45_45;
#line 693 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__3__tmp_copy_3 = check_hlds__inst_check__BoundInsts_19;
#line 693 "inst_check.m"
              MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43;
#line 693 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44;

#line 693 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6;
#line 693 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4;
#line 693 "inst_check.m"
              check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__HeadVar__3__tmp_copy_3;
#line 693 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 693 "inst_check.m"
            }
#line 693 "inst_check.m"
            continue;
#line 656 "inst_check.m"
          }
#line 653 "inst_check.m"
      }
#line 653 "inst_check.m"
      break;
#line 653 "inst_check.m"
    }
#line 649 "inst_check.m"
}

#line 627 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(
#line 627 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 627 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 627 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3,
#line 627 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4,
#line 627 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5)
#line 627 "inst_check.m"
{
#line 630 "inst_check.m"
  while (MR_TRUE)
#line 630 "inst_check.m"
    {
#line 630 "inst_check.m"
      /* tailcall optimized into a loop */
#line 630 "inst_check.m"
      {
#line 630 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 630 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4;
#line 630 "inst_check.m"
        else
#line 633 "inst_check.m"
          {
#line 633 "inst_check.m"
            MR_Word check_hlds__inst_check__Ctor_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 633 "inst_check.m"
            MR_Word check_hlds__inst_check__Ctors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 633 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 2)));
#line 633 "inst_check.m"
            MR_Integer check_hlds__inst_check__ConsArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 4)));
#line 633 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24;
#line 634 "inst_check.m"
            MR_Word check_hlds__inst_check___ExistTVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 0)));
#line 634 "inst_check.m"
            MR_Word check_hlds__inst_check___Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 1)));
#line 634 "inst_check.m"
            MR_Word check_hlds__inst_check___ConsArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 3)));
#line 634 "inst_check.m"
            MR_Word check_hlds__inst_check___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 5)));
#line 637 "inst_check.m"
            MR_String check_hlds__inst_check__V_27_27;

#line 637 "inst_check.m"
            {
#line 637 "inst_check.m"
              check_hlds__inst_check__V_27_27 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__ConsName_18);
            }
#line 637 "inst_check.m"
            check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__V_27_27) == 0);
#line 637 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 637 "inst_check.m"
              {
#line 638 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_20 == check_hlds__inst_check__HeadVar__3_3);
#line 638 "inst_check.m"
                check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 637 "inst_check.m"
              }
#line 641 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 640 "inst_check.m"
              {
#line 640 "inst_check.m"
                {
#line 640 "inst_check.m"
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__inst_check__ConsArity_20)), check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4, &check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24);
                }
#line 640 "inst_check.m"
              }
#line 641 "inst_check.m"
            else
#line 641 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4;
#line 644 "inst_check.m"
            /* direct tailcall eliminated */
#line 644 "inst_check.m"
            {
#line 644 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__1__tmp_copy_1 = check_hlds__inst_check__Ctors_12;
#line 644 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24;

#line 644 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0__tmp_copy_4;
#line 644 "inst_check.m"
              check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__HeadVar__1__tmp_copy_1;
#line 644 "inst_check.m"
            }
#line 644 "inst_check.m"
            continue;
#line 633 "inst_check.m"
          }
#line 630 "inst_check.m"
      }
#line 630 "inst_check.m"
      break;
#line 630 "inst_check.m"
    }
#line 627 "inst_check.m"
}

#line 610 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(
#line 610 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 610 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 610 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3)
#line 610 "inst_check.m"
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
#line 616 "inst_check.m"
        MR_Word check_hlds__inst_check___ExistTVars_10;
#line 616 "inst_check.m"
        MR_Word check_hlds__inst_check___Constraints_11;
#line 616 "inst_check.m"
        MR_Word check_hlds__inst_check___ConsArgs_13;
#line 616 "inst_check.m"
        MR_Word check_hlds__inst_check___Context_15;
#line 619 "inst_check.m"
        MR_String check_hlds__inst_check__V_16_16;

#line 4410 "check_hlds.inst_check.c"
        if (check_hlds__inst_check__succeeded)
#line 4412 "check_hlds.inst_check.c"
          {
#line 4414 "check_hlds.inst_check.c"
            check_hlds__inst_check__Ctor_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 4416 "check_hlds.inst_check.c"
            check_hlds__inst_check__Ctors_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 616 "inst_check.m"
            check_hlds__inst_check___ExistTVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 0)));
#line 616 "inst_check.m"
            check_hlds__inst_check___Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 1)));
#line 616 "inst_check.m"
            check_hlds__inst_check__ConsName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 2)));
#line 616 "inst_check.m"
            check_hlds__inst_check___ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 3)));
#line 616 "inst_check.m"
            check_hlds__inst_check__ConsArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 4)));
#line 616 "inst_check.m"
            check_hlds__inst_check___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 5)));
#line 619 "inst_check.m"
            {
#line 619 "inst_check.m"
              check_hlds__inst_check__V_16_16 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__ConsName_12);
            }
#line 619 "inst_check.m"
            check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__V_16_16) == 0);
#line 619 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 620 "inst_check.m"
              check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_14 == check_hlds__inst_check__HeadVar__3_3);
#line 623 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 622 "inst_check.m"
              check_hlds__inst_check__succeeded = MR_TRUE;
#line 623 "inst_check.m"
            else
#line 624 "inst_check.m"
              {
#line 624 "inst_check.m"
                /* direct tailcall eliminated */
#line 624 "inst_check.m"
                {
#line 624 "inst_check.m"
                  MR_Word check_hlds__inst_check__HeadVar__1__tmp_copy_1 = check_hlds__inst_check__Ctors_7;

#line 624 "inst_check.m"
                  check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__HeadVar__1__tmp_copy_1;
#line 624 "inst_check.m"
                }
#line 624 "inst_check.m"
                continue;
#line 624 "inst_check.m"
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
#line 610 "inst_check.m"
}

#line 577 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0(
#line 577 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 577 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 577 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 577 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 577 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 577 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 577 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
#line 577 "inst_check.m"
{
#line 581 "inst_check.m"
  while (MR_TRUE)
#line 581 "inst_check.m"
    {
#line 581 "inst_check.m"
      /* tailcall optimized into a loop */
#line 581 "inst_check.m"
      {
#line 581 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 581 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "inst_check.m"
          {
#line 582 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 582 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 581 "inst_check.m"
          }
#line 581 "inst_check.m"
        else
#line 584 "inst_check.m"
          {
#line 584 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 584 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 584 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
#line 584 "inst_check.m"
            MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34;
#line 584 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35;
#line 584 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_40_40;
#line 585 "inst_check.m"
            MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));
#line 604 "inst_check.m"
            MR_Word check_hlds__inst_check__SymName_24;
#line 604 "inst_check.m"
            MR_Integer check_hlds__inst_check__Arity_25;
#line 587 "inst_check.m"
            MR_Word check_hlds__inst_check__V_26_26;

#line 587 "inst_check.m"
            check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 587 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 587 "inst_check.m"
              {
#line 587 "inst_check.m"
                check_hlds__inst_check__SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 587 "inst_check.m"
                check_hlds__inst_check__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 2)));
#line 587 "inst_check.m"
                check_hlds__inst_check__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 3)));
#line 589 "inst_check.m"
                {
#line 589 "inst_check.m"
                  MR_String check_hlds__inst_check__FunctorName_27;

#line 589 "inst_check.m"
                  {
#line 589 "inst_check.m"
                    check_hlds__inst_check__FunctorName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_24);
                  }
#line 591 "inst_check.m"
                  {
#line 591 "inst_check.m"
                    check_hlds__inst_check__succeeded = check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25);
                  }
#line 594 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 593 "inst_check.m"
                    {
#line 593 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 593 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 593 "inst_check.m"
                    }
#line 594 "inst_check.m"
                  else
#line 596 "inst_check.m"
                    {
#line 596 "inst_check.m"
                      MR_Word check_hlds__inst_check__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 596 "inst_check.m"
                      MR_Word check_hlds__inst_check__ExpectedArities_28;
#line 596 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_33_33;

#line 596 "inst_check.m"
                      {
#line 596 "inst_check.m"
                        check_hlds__inst_check__V_33_33 = mercury__set__init_0_f_0(check_hlds__inst_check__TypeCtorInfo_44_44);
                      }
#line 595 "inst_check.m"
                      {
#line 595 "inst_check.m"
                        check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25, check_hlds__inst_check__V_33_33, &check_hlds__inst_check__ExpectedArities_28);
                      }
#line 597 "inst_check.m"
                      {
#line 597 "inst_check.m"
                        check_hlds__inst_check__succeeded = mercury__set__is_empty_1_p_0(check_hlds__inst_check__TypeCtorInfo_44_44, check_hlds__inst_check__ExpectedArities_28);
                      }
#line 599 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 598 "inst_check.m"
                        {
#line 598 "inst_check.m"
                          check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
                        }
#line 599 "inst_check.m"
                      else
#line 600 "inst_check.m"
                        {
#line 600 "inst_check.m"
                          check_hlds__inst_check__record_arity_mismatch_8_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25, check_hlds__inst_check__ExpectedArities_28, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
                        }
#line 596 "inst_check.m"
                    }
#line 589 "inst_check.m"
                }
#line 587 "inst_check.m"
              }
#line 587 "inst_check.m"
            else
#line 605 "inst_check.m"
              {
#line 605 "inst_check.m"
                check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
              }
#line 607 "inst_check.m"
            check_hlds__inst_check__V_40_40 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 607 "inst_check.m"
            /* direct tailcall eliminated */
#line 607 "inst_check.m"
            {
#line 607 "inst_check.m"
              MR_Integer check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__V_40_40;
#line 607 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__3__tmp_copy_3 = check_hlds__inst_check__BoundInsts_19;
#line 607 "inst_check.m"
              MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34;
#line 607 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35;

#line 607 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6;
#line 607 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4;
#line 607 "inst_check.m"
              check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__HeadVar__3__tmp_copy_3;
#line 607 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 607 "inst_check.m"
            }
#line 607 "inst_check.m"
            continue;
#line 584 "inst_check.m"
          }
#line 581 "inst_check.m"
      }
#line 581 "inst_check.m"
      break;
#line 581 "inst_check.m"
    }
#line 577 "inst_check.m"
}

#line 541 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
#line 541 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_4,
#line 541 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_5,
#line 541 "inst_check.m"
  MR_Word * check_hlds__inst_check__MismatchFromType_6)
#line 541 "inst_check.m"
{
#line 545 "inst_check.m"
  {
#line 545 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 545 "inst_check.m"
    MR_Integer check_hlds__inst_check__NumMismatches_25;
#line 545 "inst_check.m"
    MR_Word check_hlds__inst_check__MismatchPiecesCord_26;
#line 545 "inst_check.m"
    MR_Word check_hlds__inst_check__MismatchPieces_29;

#line 562 "inst_check.m"
#line 562 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_5)) {
#line 562 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 562 "inst_check.m"
      case (MR_Integer) 0:
#line 547 "inst_check.m"
        {
#line 547 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtorAndDefn_7 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_5), (MR_Integer) 0);
#line 547 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_7, (MR_Integer) 1)));
#line 547 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeDefnBody_10;
#line 547 "inst_check.m"
          MR_Word check_hlds__inst_check__Constructors_11;
#line 547 "inst_check.m"
          MR_Word check_hlds__inst_check__V_41_41;
#line 548 "inst_check.m"
          MR_Word check_hlds__inst_check___TypeCtor_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_7, (MR_Integer) 0)));

#line 549 "inst_check.m"
          {
#line 549 "inst_check.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDefn_9, &check_hlds__inst_check__TypeDefnBody_10);
          }
#line 552 "inst_check.m"
#line 552 "inst_check.m"
          switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnBody_10)) {
#line 552 "inst_check.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 552 "inst_check.m"
            case (MR_Integer) 0:
#line 557 "inst_check.m"
              {
#line 558 "inst_check.m"
                {
#line 558 "inst_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
#line 558 "inst_check.m"
                  return;
                }
#line 557 "inst_check.m"
              }
#line 552 "inst_check.m"
              break;
#line 552 "inst_check.m"
            case (MR_Integer) 1:
#line 551 "inst_check.m"
              {
#line 551 "inst_check.m"
                MR_Word check_hlds__inst_check__V_12_12;
#line 551 "inst_check.m"
                MR_Word check_hlds__inst_check__V_13_13;
#line 551 "inst_check.m"
                MR_Word check_hlds__inst_check__V_14_14;
#line 551 "inst_check.m"
                MR_Word check_hlds__inst_check__V_15_15;
#line 551 "inst_check.m"
                MR_Word check_hlds__inst_check__V_16_16;
#line 551 "inst_check.m"
                MR_Word check_hlds__inst_check__V_17_17;
#line 551 "inst_check.m"
                MR_Word check_hlds__inst_check__V_18_18;
#line 551 "inst_check.m"
                MR_Word check_hlds__inst_check__V_19_19;

#line 551 "inst_check.m"
                check_hlds__inst_check__Constructors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 0)));
#line 551 "inst_check.m"
                check_hlds__inst_check__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 1)));
#line 551 "inst_check.m"
                check_hlds__inst_check__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 2)));
#line 551 "inst_check.m"
                check_hlds__inst_check__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 3)));
#line 551 "inst_check.m"
                check_hlds__inst_check__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 4)));
#line 551 "inst_check.m"
                check_hlds__inst_check__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 5)));
#line 551 "inst_check.m"
                check_hlds__inst_check__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 551 "inst_check.m"
                check_hlds__inst_check__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 551 "inst_check.m"
                check_hlds__inst_check__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 7)));
#line 551 "inst_check.m"
              }
#line 552 "inst_check.m"
              break;
#line 552 "inst_check.m"
            case (MR_Integer) 2:
#line 557 "inst_check.m"
              {
#line 558 "inst_check.m"
                {
#line 558 "inst_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
#line 558 "inst_check.m"
                  return;
                }
#line 557 "inst_check.m"
              }
#line 552 "inst_check.m"
              break;
#line 552 "inst_check.m"
            case (MR_Integer) 3:
#line 557 "inst_check.m"
              {
#line 558 "inst_check.m"
                {
#line 558 "inst_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
#line 558 "inst_check.m"
                  return;
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
            check_hlds__inst_check__V_41_41 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          }
#line 560 "inst_check.m"
          {
#line 560 "inst_check.m"
            check_hlds__inst_check__find_mismatches_from_user_7_p_0(check_hlds__inst_check__Constructors_11, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_25, check_hlds__inst_check__V_41_41, &check_hlds__inst_check__MismatchPiecesCord_26);
          }
#line 547 "inst_check.m"
        }
#line 562 "inst_check.m"
        break;
#line 562 "inst_check.m"
      case (MR_Integer) 1:
#line 563 "inst_check.m"
        {
#line 563 "inst_check.m"
          MR_Word check_hlds__inst_check__BuiltinType_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_5, (MR_Integer) 0)));
#line 563 "inst_check.m"
          MR_Word check_hlds__inst_check__V_35_35;

#line 565 "inst_check.m"
          {
#line 565 "inst_check.m"
            check_hlds__inst_check__V_35_35 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          }
#line 564 "inst_check.m"
          {
#line 564 "inst_check.m"
            check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(check_hlds__inst_check__BuiltinType_27, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_25, check_hlds__inst_check__V_35_35, &check_hlds__inst_check__MismatchPiecesCord_26);
          }
#line 563 "inst_check.m"
        }
#line 562 "inst_check.m"
        break;
#line 562 "inst_check.m"
      case (MR_Integer) 2:
#line 567 "inst_check.m"
        {
#line 567 "inst_check.m"
          MR_Integer check_hlds__inst_check__TupleArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_5, (MR_Integer) 0)));
#line 567 "inst_check.m"
          MR_Word check_hlds__inst_check__V_32_32;

#line 569 "inst_check.m"
          {
#line 569 "inst_check.m"
            check_hlds__inst_check__V_32_32 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          }
#line 568 "inst_check.m"
          {
#line 568 "inst_check.m"
            check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(check_hlds__inst_check__TupleArity_28, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_25, check_hlds__inst_check__V_32_32, &check_hlds__inst_check__MismatchPiecesCord_26);
          }
#line 567 "inst_check.m"
        }
#line 562 "inst_check.m"
        break;
#line 562 "inst_check.m"
    }
#line 571 "inst_check.m"
    {
#line 571 "inst_check.m"
      check_hlds__inst_check__MismatchPieces_29 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__MismatchPiecesCord_26);
    }
#line 572 "inst_check.m"
    {
#line 572 "inst_check.m"
      MR_Word base;
#line 572 "inst_check.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 572 "inst_check.m"
      *check_hlds__inst_check__MismatchFromType_6 = base;
#line 572 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__NumMismatches_25));
#line 572 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__TypeDefnOrBuiltin_5));
#line 572 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_check__MismatchPieces_29));
#line 572 "inst_check.m"
    }
#line 545 "inst_check.m"
  }
#line 541 "inst_check.m"
}

#line 515 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_6(
#line 515 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 515 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1)
#line 515 "inst_check.m"
{
#line 515 "inst_check.m"
  {
#line 515 "inst_check.m"
    MR_Box check_hlds__inst_check__wrapper_arg_2;
#line 515 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 515 "inst_check.m"
    MR_String check_hlds__inst_check__conv2_Str_4;

#line 515 "inst_check.m"
    {
#line 515 "inst_check.m"
      check_hlds__inst_check__conv2_Str_4 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1));
    }
#line 515 "inst_check.m"
    check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv2_Str_4));
#line 515 "inst_check.m"
    return check_hlds__inst_check__wrapper_arg_2;
#line 515 "inst_check.m"
  }
#line 515 "inst_check.m"
}

#line 464 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_1(
#line 464 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 464 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 464 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 464 "inst_check.m"
{
#line 464 "inst_check.m"
  {
#line 464 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 464 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_MismatchFromType_6;

#line 464 "inst_check.m"
    {
#line 464 "inst_check.m"
      check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_MismatchFromType_6);
    }
#line 464 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_MismatchFromType_6));
#line 464 "inst_check.m"
  }
#line 464 "inst_check.m"
}

#line 487 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_2(
#line 487 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 487 "inst_check.m"
{
#line 487 "inst_check.m"
  {
#line 487 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 487 "inst_check.m"
    MR_builtin_longjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__commit_0, 1);
#line 487 "inst_check.m"
  }
#line 487 "inst_check.m"
}

#line 487 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_4(
#line 487 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 487 "inst_check.m"
{
#line 487 "inst_check.m"
  {
#line 487 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 487 "inst_check.m"
    (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__Type_118 = ((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__conv1_Type_118);
#line 487 "inst_check.m"
    {
#line 487 "inst_check.m"
      check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_3(check_hlds__inst_check__env_ptr);
#line 487 "inst_check.m"
      return;
    }
#line 487 "inst_check.m"
  }
#line 487 "inst_check.m"
}

#line 487 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_3(
#line 487 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 487 "inst_check.m"
{
#line 487 "inst_check.m"
  {
#line 487 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 492 "inst_check.m"
#line 492 "inst_check.m"
    switch (MR_tag((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__Type_118)) {
#line 492 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 492 "inst_check.m"
      case (MR_Integer) 0:
#line 489 "inst_check.m"
        {
#line 489 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtorAndDefn_31 = (MR_Word) MR_body(((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__Type_118), (MR_Integer) 0);
#line 489 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeDefn_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_31, (MR_Integer) 1)));
#line 490 "inst_check.m"
          MR_Word check_hlds__inst_check__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_31, (MR_Integer) 0)));

#line 491 "inst_check.m"
          {
#line 491 "inst_check.m"
            (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0((MR_Integer) 0, check_hlds__inst_check__TypeDefn_33);
          }
#line 489 "inst_check.m"
        }
#line 492 "inst_check.m"
        break;
#line 492 "inst_check.m"
      case (MR_Integer) 1:
#line 493 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 492 "inst_check.m"
        break;
#line 492 "inst_check.m"
      case (MR_Integer) 2:
#line 495 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 492 "inst_check.m"
        break;
#line 492 "inst_check.m"
    }
#line 492 "inst_check.m"
    if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded)
#line 492 "inst_check.m"
      {
#line 492 "inst_check.m"
        check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_2(check_hlds__inst_check__env_ptr);
#line 492 "inst_check.m"
        return;
      }
#line 487 "inst_check.m"
  }
#line 487 "inst_check.m"
}

#line 487 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_5(
#line 487 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 487 "inst_check.m"
{
#line 487 "inst_check.m"
  {
#line 487 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 487 "inst_check.m"
    if (MR_builtin_setjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__commit_0) == 0)
#line 487 "inst_check.m"
      {
#line 487 "inst_check.m"
        {
#line 487 "inst_check.m"
          {
#line 487 "inst_check.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, &(check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__conv1_Type_118, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11, check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_4, check_hlds__inst_check__env_ptr);
          }
#line 487 "inst_check.m"
        }
#line 487 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded = MR_FALSE;
#line 487 "inst_check.m"
      }
#line 487 "inst_check.m"
    else
#line 487 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 487 "inst_check.m"
  }
#line 487 "inst_check.m"
}

#line 441 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0(
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_8,
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_9,
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_10,
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypes_11,
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypeSets_12,
#line 441 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_43,
#line 441 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_44)
#line 441 "inst_check.m"
{
#line 441 "inst_check.m"
  {
#line 441 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0_s check_hlds__inst_check__env;

#line 441 "inst_check.m"
    (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11 = check_hlds__inst_check__PossibleTypes_11;
#line 447 "inst_check.m"
    {
#line 447 "inst_check.m"
      MR_Word check_hlds__inst_check__InstImportStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));
#line 447 "inst_check.m"
      MR_Word check_hlds__inst_check__DefinedInThisModule_15;
#line 448 "inst_check.m"
      MR_Word check_hlds__inst_check__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
#line 448 "inst_check.m"
      MR_Word check_hlds__inst_check__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
#line 448 "inst_check.m"
      MR_Word check_hlds__inst_check__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
#line 448 "inst_check.m"
      MR_Word check_hlds__inst_check__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
#line 448 "inst_check.m"
      MR_Word check_hlds__inst_check__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));

#line 449 "inst_check.m"
      {
#line 449 "inst_check.m"
        check_hlds__inst_check__DefinedInThisModule_15 = parse_tree__status__status_defined_in_this_module_1_f_0(check_hlds__inst_check__InstImportStatus_14);
      }
#line 452 "inst_check.m"
#line 452 "inst_check.m"
      switch (check_hlds__inst_check__DefinedInThisModule_15) {
#line 452 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 452 "inst_check.m"
        case (MR_Integer) 0:
#line 451 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_43;
#line 452 "inst_check.m"
          break;
#line 452 "inst_check.m"
        case (MR_Integer) 1:
#line 453 "inst_check.m"
          if (((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "inst_check.m"
            {
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__TypeCtorInfo_149_149;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__TypeCtorInfo_152_152;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__InstName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 0)));
#line 455 "inst_check.m"
              MR_Integer check_hlds__inst_check__InstArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 1)));
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__NoMatchPieces_19;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__AllPossibleTypesSet_20;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__AllPossibleTypes_21;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__MismatchesFromPossibleTypes_22;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__MismatchPieces_24;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__Pieces_25;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__Spec_26;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__V_101_101;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__V_102_102;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__V_103_103;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__V_108_108;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__V_111_111;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__V_112_112;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__V_113_113;
#line 455 "inst_check.m"
              MR_Word check_hlds__inst_check__V_114_114;
#line 456 "inst_check.m"
              MR_Word check_hlds__inst_check__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
#line 456 "inst_check.m"
              MR_Word check_hlds__inst_check__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
#line 456 "inst_check.m"
              MR_Word check_hlds__inst_check__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
#line 456 "inst_check.m"
              MR_Word check_hlds__inst_check__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
#line 456 "inst_check.m"
              MR_Word check_hlds__inst_check__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));

#line 459 "inst_check.m"
              {
#line 459 "inst_check.m"
                check_hlds__inst_check__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 459 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_103_103, 0) = ((MR_Box) (check_hlds__inst_check__InstName_17));
#line 459 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_103_103, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_18));
#line 459 "inst_check.m"
              }
#line 459 "inst_check.m"
              {
#line 459 "inst_check.m"
                check_hlds__inst_check__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 459 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_102_102, 1) = ((MR_Box) (check_hlds__inst_check__V_103_103));
#line 459 "inst_check.m"
              }
#line 459 "inst_check.m"
              {
#line 459 "inst_check.m"
                check_hlds__inst_check__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_101_101, 0) = ((MR_Box) (check_hlds__inst_check__V_102_102));
#line 459 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[26])));
#line 459 "inst_check.m"
              }
#line 458 "inst_check.m"
              {
#line 458 "inst_check.m"
                check_hlds__inst_check__NoMatchPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__NoMatchPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[24])));
#line 458 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__NoMatchPieces_19, 1) = ((MR_Box) (check_hlds__inst_check__V_101_101));
#line 458 "inst_check.m"
              }
#line 5270 "check_hlds.inst_check.c"
              check_hlds__inst_check__TypeCtorInfo_149_149 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
#line 462 "inst_check.m"
              {
#line 462 "inst_check.m"
                check_hlds__inst_check__AllPossibleTypesSet_20 = mercury__set__union_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_149_149, check_hlds__inst_check__PossibleTypeSets_12);
              }
#line 463 "inst_check.m"
              {
#line 463 "inst_check.m"
                mercury__set__to_sorted_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_149_149, check_hlds__inst_check__AllPossibleTypesSet_20, &check_hlds__inst_check__AllPossibleTypes_21);
              }
#line 464 "inst_check.m"
              {
#line 464 "inst_check.m"
                check_hlds__inst_check__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 464 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_7[0]));
#line 464 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 1) = ((MR_Box) (check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_1));
#line 464 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 464 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 3) = ((MR_Box) (check_hlds__inst_check__BoundInsts_10));
#line 464 "inst_check.m"
              }
#line 5296 "check_hlds.inst_check.c"
              check_hlds__inst_check__TypeCtorInfo_152_152 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0;
#line 464 "inst_check.m"
              {
#line 464 "inst_check.m"
                mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_149_149, check_hlds__inst_check__TypeCtorInfo_152_152, check_hlds__inst_check__V_108_108, check_hlds__inst_check__AllPossibleTypes_21, &check_hlds__inst_check__MismatchesFromPossibleTypes_22);
              }
#line 466 "inst_check.m"
              {
#line 466 "inst_check.m"
                mercury__list__sort_2_p_0(check_hlds__inst_check__TypeCtorInfo_152_152, check_hlds__inst_check__MismatchesFromPossibleTypes_22, &check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23);
              }
#line 468 "inst_check.m"
              {
#line 468 "inst_check.m"
                check_hlds__inst_check__create_mismatch_pieces_2_p_0(check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23, &check_hlds__inst_check__MismatchPieces_24);
              }
#line 471 "inst_check.m"
              {
#line 471 "inst_check.m"
                check_hlds__inst_check__Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__NoMatchPieces_19, check_hlds__inst_check__MismatchPieces_24);
              }
#line 473 "inst_check.m"
              {
#line 473 "inst_check.m"
                check_hlds__inst_check__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 473 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_114_114, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_25));
#line 473 "inst_check.m"
              }
#line 473 "inst_check.m"
              {
#line 473 "inst_check.m"
                check_hlds__inst_check__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_113_113, 0) = ((MR_Box) (check_hlds__inst_check__V_114_114));
#line 473 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "inst_check.m"
              }
#line 473 "inst_check.m"
              {
#line 473 "inst_check.m"
                check_hlds__inst_check__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 473 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_112_112, 0) = ((MR_Box) (check_hlds__inst_check__Context_16));
#line 473 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_112_112, 1) = ((MR_Box) (check_hlds__inst_check__V_113_113));
#line 473 "inst_check.m"
              }
#line 473 "inst_check.m"
              {
#line 473 "inst_check.m"
                check_hlds__inst_check__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_111_111, 0) = ((MR_Box) (check_hlds__inst_check__V_112_112));
#line 473 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "inst_check.m"
              }
#line 472 "inst_check.m"
              {
#line 472 "inst_check.m"
                check_hlds__inst_check__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 472 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 472 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 472 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 2) = ((MR_Box) (check_hlds__inst_check__V_111_111));
#line 472 "inst_check.m"
              }
#line 474 "inst_check.m"
              {
#line 474 "inst_check.m"
                MR_Word base;
#line 474 "inst_check.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "inst_check.m"
                *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = base;
#line 474 "inst_check.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_26));
#line 474 "inst_check.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_43));
#line 474 "inst_check.m"
              }
#line 455 "inst_check.m"
            }
#line 453 "inst_check.m"
          else
#line 476 "inst_check.m"
            {
#line 476 "inst_check.m"
              MR_Word check_hlds__inst_check__InstIsExported_29;

#line 477 "inst_check.m"
              {
#line 477 "inst_check.m"
                check_hlds__inst_check__InstIsExported_29 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0(check_hlds__inst_check__InstImportStatus_14);
              }
#line 484 "inst_check.m"
#line 484 "inst_check.m"
              switch (check_hlds__inst_check__InstIsExported_29) {
#line 484 "inst_check.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 484 "inst_check.m"
                case (MR_Integer) 0:
#line 483 "inst_check.m"
                  (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 484 "inst_check.m"
                  break;
#line 484 "inst_check.m"
                case (MR_Integer) 1:
#line 487 "inst_check.m"
                  {
#line 487 "inst_check.m"
                    {
#line 487 "inst_check.m"
                      check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_5(&check_hlds__inst_check__env);
                    }
#line 487 "inst_check.m"
                  }
#line 484 "inst_check.m"
                  break;
#line 484 "inst_check.m"
              }
#line 501 "inst_check.m"
              if ((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__succeeded)
#line 501 "inst_check.m"
                *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_43;
#line 501 "inst_check.m"
              else
#line 502 "inst_check.m"
                {
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_92_92;
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_93_93;
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_94_94;
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_95_95;
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__Context_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__InstName_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 0)));
#line 502 "inst_check.m"
                  MR_Integer check_hlds__inst_check__InstArity_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 1)));
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__Pieces_122;
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__Spec_123;
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11, (MR_Integer) 1)));
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11, (MR_Integer) 0)));
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
#line 502 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));

#line 513 "inst_check.m"
                  if ((check_hlds__inst_check__V_159_159 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "inst_check.m"
                    {
#line 505 "inst_check.m"
                      MR_String check_hlds__inst_check__OnePossibleTypeStr_37;
#line 505 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_72_72;
#line 505 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_73_73;
#line 505 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_74_74;
#line 505 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_75_75;
#line 505 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_78_78;
#line 505 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_81_81;
#line 505 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_82_82;

#line 506 "inst_check.m"
                      {
#line 506 "inst_check.m"
                        check_hlds__inst_check__OnePossibleTypeStr_37 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__V_160_160);
                      }
#line 509 "inst_check.m"
                      {
#line 509 "inst_check.m"
                        check_hlds__inst_check__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 509 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_74_74, 0) = ((MR_Box) (check_hlds__inst_check__InstName_120));
#line 509 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_74_74, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_121));
#line 509 "inst_check.m"
                      }
#line 509 "inst_check.m"
                      {
#line 509 "inst_check.m"
                        check_hlds__inst_check__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 509 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_73_73, 1) = ((MR_Box) (check_hlds__inst_check__V_74_74));
#line 509 "inst_check.m"
                      }
#line 511 "inst_check.m"
                      {
#line 511 "inst_check.m"
                        check_hlds__inst_check__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 511 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_82_82, 1) = ((MR_Box) (check_hlds__inst_check__OnePossibleTypeStr_37));
#line 511 "inst_check.m"
                      }
#line 511 "inst_check.m"
                      {
#line 511 "inst_check.m"
                        check_hlds__inst_check__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_81_81, 0) = ((MR_Box) (check_hlds__inst_check__V_82_82));
#line 511 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[9])));
#line 511 "inst_check.m"
                      }
#line 511 "inst_check.m"
                      {
#line 511 "inst_check.m"
                        check_hlds__inst_check__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[28])));
#line 511 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_78_78, 1) = ((MR_Box) (check_hlds__inst_check__V_81_81));
#line 511 "inst_check.m"
                      }
#line 510 "inst_check.m"
                      {
#line 510 "inst_check.m"
                        check_hlds__inst_check__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[27])));
#line 510 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_75_75, 1) = ((MR_Box) (check_hlds__inst_check__V_78_78));
#line 510 "inst_check.m"
                      }
#line 509 "inst_check.m"
                      {
#line 509 "inst_check.m"
                        check_hlds__inst_check__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_72_72, 0) = ((MR_Box) (check_hlds__inst_check__V_73_73));
#line 509 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_72_72, 1) = ((MR_Box) (check_hlds__inst_check__V_75_75));
#line 509 "inst_check.m"
                      }
#line 508 "inst_check.m"
                      {
#line 508 "inst_check.m"
                        check_hlds__inst_check__Pieces_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[24])));
#line 508 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 1) = ((MR_Box) (check_hlds__inst_check__V_72_72));
#line 508 "inst_check.m"
                      }
#line 505 "inst_check.m"
                    }
#line 513 "inst_check.m"
                  else
#line 514 "inst_check.m"
                    {
#line 514 "inst_check.m"
                      MR_Word check_hlds__inst_check__PossibleTypeStrs_41;
#line 514 "inst_check.m"
                      MR_String check_hlds__inst_check__PossibleTypesStr_42;
#line 514 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_51_51;
#line 514 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_52_52;
#line 514 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_53_53;
#line 514 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_54_54;
#line 514 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_57_57;
#line 514 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_60_60;
#line 514 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_61_61;

#line 515 "inst_check.m"
                      {
#line 515 "inst_check.m"
                        check_hlds__inst_check__PossibleTypeStrs_41 = mercury__list__map_2_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[3], (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0_env_0__PossibleTypes_11);
                      }
#line 518 "inst_check.m"
                      {
#line 518 "inst_check.m"
                        check_hlds__inst_check__PossibleTypesStr_42 = mercury__string__join_list_2_f_0((MR_String) ", ", check_hlds__inst_check__PossibleTypeStrs_41);
                      }
#line 520 "inst_check.m"
                      {
#line 520 "inst_check.m"
                        check_hlds__inst_check__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 520 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_53_53, 0) = ((MR_Box) (check_hlds__inst_check__InstName_120));
#line 520 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_53_53, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_121));
#line 520 "inst_check.m"
                      }
#line 520 "inst_check.m"
                      {
#line 520 "inst_check.m"
                        check_hlds__inst_check__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 520 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 1) = ((MR_Box) (check_hlds__inst_check__V_53_53));
#line 520 "inst_check.m"
                      }
#line 522 "inst_check.m"
                      {
#line 522 "inst_check.m"
                        check_hlds__inst_check__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 522 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_61_61, 1) = ((MR_Box) (check_hlds__inst_check__PossibleTypesStr_42));
#line 522 "inst_check.m"
                      }
#line 522 "inst_check.m"
                      {
#line 522 "inst_check.m"
                        check_hlds__inst_check__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_60_60, 0) = ((MR_Box) (check_hlds__inst_check__V_61_61));
#line 522 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[12])));
#line 522 "inst_check.m"
                      }
#line 522 "inst_check.m"
                      {
#line 522 "inst_check.m"
                        check_hlds__inst_check__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[28])));
#line 522 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_57_57, 1) = ((MR_Box) (check_hlds__inst_check__V_60_60));
#line 522 "inst_check.m"
                      }
#line 521 "inst_check.m"
                      {
#line 521 "inst_check.m"
                        check_hlds__inst_check__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[29])));
#line 521 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_54_54, 1) = ((MR_Box) (check_hlds__inst_check__V_57_57));
#line 521 "inst_check.m"
                      }
#line 520 "inst_check.m"
                      {
#line 520 "inst_check.m"
                        check_hlds__inst_check__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 0) = ((MR_Box) (check_hlds__inst_check__V_52_52));
#line 520 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 1) = ((MR_Box) (check_hlds__inst_check__V_54_54));
#line 520 "inst_check.m"
                      }
#line 519 "inst_check.m"
                      {
#line 519 "inst_check.m"
                        check_hlds__inst_check__Pieces_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[24])));
#line 519 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 1) = ((MR_Box) (check_hlds__inst_check__V_51_51));
#line 519 "inst_check.m"
                      }
#line 514 "inst_check.m"
                    }
#line 526 "inst_check.m"
                  {
#line 526 "inst_check.m"
                    check_hlds__inst_check__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 526 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_95_95, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_122));
#line 526 "inst_check.m"
                  }
#line 526 "inst_check.m"
                  {
#line 526 "inst_check.m"
                    check_hlds__inst_check__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_94_94, 0) = ((MR_Box) (check_hlds__inst_check__V_95_95));
#line 526 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "inst_check.m"
                  }
#line 526 "inst_check.m"
                  {
#line 526 "inst_check.m"
                    check_hlds__inst_check__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 526 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_93_93, 0) = ((MR_Box) (check_hlds__inst_check__Context_119));
#line 526 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_93_93, 1) = ((MR_Box) (check_hlds__inst_check__V_94_94));
#line 526 "inst_check.m"
                  }
#line 526 "inst_check.m"
                  {
#line 526 "inst_check.m"
                    check_hlds__inst_check__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_92_92, 0) = ((MR_Box) (check_hlds__inst_check__V_93_93));
#line 526 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "inst_check.m"
                  }
#line 525 "inst_check.m"
                  {
#line 525 "inst_check.m"
                    check_hlds__inst_check__Spec_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 525 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 525 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 525 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_123, 2) = ((MR_Box) (check_hlds__inst_check__V_92_92));
#line 525 "inst_check.m"
                  }
#line 527 "inst_check.m"
                  {
#line 527 "inst_check.m"
                    MR_Word base;
#line 527 "inst_check.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "inst_check.m"
                    *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = base;
#line 527 "inst_check.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_123));
#line 527 "inst_check.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_43));
#line 527 "inst_check.m"
                  }
#line 502 "inst_check.m"
                }
#line 476 "inst_check.m"
            }
#line 452 "inst_check.m"
          break;
#line 452 "inst_check.m"
      }
#line 447 "inst_check.m"
    }
#line 441 "inst_check.m"
  }
#line 441 "inst_check.m"
}

#line 407 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
#line 407 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 407 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 407 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
#line 407 "inst_check.m"
{
#line 410 "inst_check.m"
  {
#line 410 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 410 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 410 "inst_check.m"
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 410 "inst_check.m"
    else
#line 412 "inst_check.m"
      {
#line 412 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorAndDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 412 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorAndDefns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 412 "inst_check.m"
        MR_Word check_hlds__inst_check__MatchingUserTypes0_9;
#line 412 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtor_10;
#line 412 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorSymName_12;
#line 412 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorModuleName_15;
#line 415 "inst_check.m"
        MR_Word check_hlds__inst_check___TypeDefn_11;
#line 416 "inst_check.m"
        MR_Integer check_hlds__inst_check___TypeCtorArity_13;

#line 413 "inst_check.m"
        {
#line 413 "inst_check.m"
          check_hlds__inst_check__find_matching_user_types_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__TypeCtorAndDefns_7, &check_hlds__inst_check__MatchingUserTypes0_9);
        }
#line 415 "inst_check.m"
        check_hlds__inst_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_6, (MR_Integer) 0)));
#line 415 "inst_check.m"
        check_hlds__inst_check___TypeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_6, (MR_Integer) 1)));
#line 416 "inst_check.m"
        check_hlds__inst_check__TypeCtorSymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_10, (MR_Integer) 0)));
#line 416 "inst_check.m"
        check_hlds__inst_check___TypeCtorArity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_10, (MR_Integer) 1)));
#line 420 "inst_check.m"
        if (((MR_tag((MR_Word) check_hlds__inst_check__TypeCtorSymName_12)) == (MR_mktag((MR_Integer) 1))))
#line 421 "inst_check.m"
          {
#line 421 "inst_check.m"
            MR_String check_hlds__inst_check__V_16_16;

#line 421 "inst_check.m"
            check_hlds__inst_check__TypeCtorModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_12, (MR_Integer) 0)));
#line 421 "inst_check.m"
            check_hlds__inst_check__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_12, (MR_Integer) 1)));
#line 421 "inst_check.m"
          }
#line 420 "inst_check.m"
        else
#line 418 "inst_check.m"
          {
#line 419 "inst_check.m"
            {
#line 419 "inst_check.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.find_matching_user_types\'/3", (MR_String) "TypeCtorSymName is unqualified");
#line 419 "inst_check.m"
              return;
            }
#line 418 "inst_check.m"
          }
#line 426 "inst_check.m"
        if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 427 "inst_check.m"
          {
#line 427 "inst_check.m"
            MR_Word check_hlds__inst_check__FunctorModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 427 "inst_check.m"
            MR_String check_hlds__inst_check__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));

#line 429 "inst_check.m"
            {
#line 429 "inst_check.m"
              check_hlds__inst_check__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(check_hlds__inst_check__FunctorModuleName_18, check_hlds__inst_check__TypeCtorModuleName_15);
            }
#line 434 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 432 "inst_check.m"
              {
#line 432 "inst_check.m"
                MR_Word check_hlds__inst_check__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__inst_check__TypeCtorAndDefn_6);

#line 432 "inst_check.m"
                {
#line 432 "inst_check.m"
                  MR_Word base;
#line 432 "inst_check.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "inst_check.m"
                  *check_hlds__inst_check__HeadVar__3_3 = base;
#line 432 "inst_check.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__V_23_23));
#line 432 "inst_check.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__MatchingUserTypes0_9));
#line 432 "inst_check.m"
                }
#line 432 "inst_check.m"
              }
#line 434 "inst_check.m"
            else
#line 435 "inst_check.m"
              *check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__MatchingUserTypes0_9;
#line 427 "inst_check.m"
          }
#line 426 "inst_check.m"
        else
#line 424 "inst_check.m"
          {
#line 424 "inst_check.m"
            MR_Word check_hlds__inst_check__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__inst_check__TypeCtorAndDefn_6);

#line 425 "inst_check.m"
            {
#line 425 "inst_check.m"
              MR_Word base;
#line 425 "inst_check.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "inst_check.m"
              *check_hlds__inst_check__HeadVar__3_3 = base;
#line 425 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__V_24_24));
#line 425 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__MatchingUserTypes0_9));
#line 425 "inst_check.m"
            }
#line 424 "inst_check.m"
          }
#line 412 "inst_check.m"
      }
#line 410 "inst_check.m"
  }
#line 407 "inst_check.m"
}

#line 316 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(
#line 316 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 316 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 316 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3,
#line 316 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4,
#line 316 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5,
#line 316 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6)
#line 316 "inst_check.m"
{
#line 321 "inst_check.m"
  while (MR_TRUE)
#line 321 "inst_check.m"
    {
#line 321 "inst_check.m"
      /* tailcall optimized into a loop */
#line 321 "inst_check.m"
      {
#line 321 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 321 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 321 "inst_check.m"
          {
#line 322 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5;
#line 322 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3;
#line 321 "inst_check.m"
          }
#line 321 "inst_check.m"
        else
#line 324 "inst_check.m"
          {
#line 324 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 324 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 324 "inst_check.m"
            MR_Word check_hlds__inst_check__MaybePossibleTypes_19;
#line 324 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26;
#line 324 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27;
#line 324 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_15, (MR_Integer) 0)));
#line 347 "inst_check.m"
            MR_Word check_hlds__inst_check__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_15, (MR_Integer) 1)));

#line 375 "inst_check.m"
#line 375 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__ConsId_34)) {
#line 375 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 375 "inst_check.m"
              case (MR_Integer) 0:
#line 404 "inst_check.m"
                check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 375 "inst_check.m"
                break;
#line 375 "inst_check.m"
              case (MR_Integer) 1:
#line 404 "inst_check.m"
                check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 375 "inst_check.m"
                break;
#line 375 "inst_check.m"
              case (MR_Integer) 2:
#line 404 "inst_check.m"
                check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 375 "inst_check.m"
                break;
#line 375 "inst_check.m"
              case (MR_Integer) 3:
#line 375 "inst_check.m"
#line 375 "inst_check.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 0)))) {
#line 375 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 375 "inst_check.m"
                  case (MR_Integer) 0:
#line 375 "inst_check.m"
                  case (MR_Integer) 1:
#line 375 "inst_check.m"
                  case (MR_Integer) 4:
#line 375 "inst_check.m"
                  case (MR_Integer) 9:
#line 375 "inst_check.m"
                  case (MR_Integer) 10:
#line 375 "inst_check.m"
                  case (MR_Integer) 11:
#line 375 "inst_check.m"
                  case (MR_Integer) 12:
#line 375 "inst_check.m"
                  case (MR_Integer) 13:
#line 375 "inst_check.m"
                  case (MR_Integer) 14:
#line 404 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 375 "inst_check.m"
                    break;
#line 375 "inst_check.m"
                  case (MR_Integer) 2:
#line 349 "inst_check.m"
                    {
#line 349 "inst_check.m"
                      MR_Word check_hlds__inst_check__SymName_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 1)));
#line 349 "inst_check.m"
                      MR_Integer check_hlds__inst_check__Arity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 2)));
#line 349 "inst_check.m"
                      MR_String check_hlds__inst_check__Name_39;
#line 349 "inst_check.m"
                      MR_Word check_hlds__inst_check__FunctorNameAndArity_40;
#line 349 "inst_check.m"
                      MR_Word check_hlds__inst_check__UserTypes_42;
#line 349 "inst_check.m"
                      MR_Word check_hlds__inst_check__UserCharTypes_43;
#line 349 "inst_check.m"
                      MR_Word check_hlds__inst_check__Types_44;
#line 349 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 3)));
#line 357 "inst_check.m"
                      MR_Word check_hlds__inst_check__TypeCtorDefns_41;
#line 362 "inst_check.m"
                      MR_Integer check_hlds__inst_check__V_86_86;
#line 369 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_89_89;

#line 350 "inst_check.m"
                      {
#line 350 "inst_check.m"
                        check_hlds__inst_check__Name_39 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_36);
                      }
#line 351 "inst_check.m"
                      {
#line 351 "inst_check.m"
                        check_hlds__inst_check__FunctorNameAndArity_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 351 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__FunctorNameAndArity_40, 0) = ((MR_Box) (check_hlds__inst_check__Name_39));
#line 351 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__FunctorNameAndArity_40, 1) = ((MR_Box) (check_hlds__inst_check__Arity_37));
#line 351 "inst_check.m"
                      }
#line 353 "inst_check.m"
                      {
#line 353 "inst_check.m"
                        check_hlds__inst_check__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0, check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__FunctorNameAndArity_40)), &check_hlds__inst_check__TypeCtorDefns_41);
                      }
#line 357 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 356 "inst_check.m"
                        {
#line 356 "inst_check.m"
                          check_hlds__inst_check__find_matching_user_types_3_p_0(check_hlds__inst_check__SymName_36, check_hlds__inst_check__TypeCtorDefns_41, &check_hlds__inst_check__UserTypes_42);
                        }
#line 357 "inst_check.m"
                      else
#line 358 "inst_check.m"
                        check_hlds__inst_check__UserTypes_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 362 "inst_check.m"
                      {
#line 362 "inst_check.m"
                        check_hlds__inst_check__V_86_86 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__Name_39);
                      }
#line 362 "inst_check.m"
                      check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_86_86 == (MR_Integer) 1);
#line 364 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 363 "inst_check.m"
                        {
#line 363 "inst_check.m"
                          {
#line 363 "inst_check.m"
                            check_hlds__inst_check__UserCharTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__UserCharTypes_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[0])));
#line 363 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__UserCharTypes_43, 1) = ((MR_Box) (check_hlds__inst_check__UserTypes_42));
#line 363 "inst_check.m"
                          }
#line 363 "inst_check.m"
                        }
#line 364 "inst_check.m"
                      else
#line 365 "inst_check.m"
                        check_hlds__inst_check__UserCharTypes_43 = check_hlds__inst_check__UserTypes_42;
#line 369 "inst_check.m"
                      {
#line 369 "inst_check.m"
                        check_hlds__inst_check__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 369 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_89_89, 0) = ((MR_Box) (check_hlds__inst_check__SymName_36));
#line 369 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_89_89, 1) = ((MR_Box) (check_hlds__inst_check__Arity_37));
#line 369 "inst_check.m"
                      }
#line 369 "inst_check.m"
                      {
#line 369 "inst_check.m"
                        check_hlds__inst_check__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__inst_check__V_89_89);
                      }
#line 371 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 370 "inst_check.m"
                        {
#line 370 "inst_check.m"
                          MR_Word check_hlds__inst_check__V_90_90;

#line 370 "inst_check.m"
                          {
#line 370 "inst_check.m"
                            check_hlds__inst_check__V_90_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 370 "inst_check.m"
                            MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_90_90, 0) = ((MR_Box) (check_hlds__inst_check__Arity_37));
#line 370 "inst_check.m"
                          }
#line 370 "inst_check.m"
                          {
#line 370 "inst_check.m"
                            check_hlds__inst_check__Types_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Types_44, 0) = ((MR_Box) (check_hlds__inst_check__V_90_90));
#line 370 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Types_44, 1) = ((MR_Box) (check_hlds__inst_check__UserCharTypes_43));
#line 370 "inst_check.m"
                          }
#line 370 "inst_check.m"
                        }
#line 371 "inst_check.m"
                      else
#line 372 "inst_check.m"
                        check_hlds__inst_check__Types_44 = check_hlds__inst_check__UserCharTypes_43;
#line 374 "inst_check.m"
                      {
#line 374 "inst_check.m"
                        check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 374 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, 0) = ((MR_Box) (check_hlds__inst_check__Types_44));
#line 374 "inst_check.m"
                      }
#line 349 "inst_check.m"
                    }
#line 375 "inst_check.m"
                    break;
#line 375 "inst_check.m"
                  case (MR_Integer) 3:
#line 376 "inst_check.m"
                    {
#line 376 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_83_83;
#line 376 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_84_84;
#line 376 "inst_check.m"
                      MR_Integer check_hlds__inst_check__Arity_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 1)));

#line 377 "inst_check.m"
                      {
#line 377 "inst_check.m"
                        check_hlds__inst_check__V_84_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 377 "inst_check.m"
                        MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_84_84, 0) = ((MR_Box) (check_hlds__inst_check__Arity_91));
#line 377 "inst_check.m"
                      }
#line 377 "inst_check.m"
                      {
#line 377 "inst_check.m"
                        check_hlds__inst_check__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_83_83, 0) = ((MR_Box) (check_hlds__inst_check__V_84_84));
#line 377 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 377 "inst_check.m"
                      }
#line 377 "inst_check.m"
                      {
#line 377 "inst_check.m"
                        check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 377 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, 0) = ((MR_Box) (check_hlds__inst_check__V_83_83));
#line 377 "inst_check.m"
                      }
#line 376 "inst_check.m"
                    }
#line 375 "inst_check.m"
                    break;
#line 375 "inst_check.m"
                  case (MR_Integer) 5:
#line 380 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[5]);
#line 375 "inst_check.m"
                    break;
#line 375 "inst_check.m"
                  case (MR_Integer) 6:
#line 383 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[3]);
#line 375 "inst_check.m"
                    break;
#line 375 "inst_check.m"
                  case (MR_Integer) 7:
#line 386 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[1]);
#line 375 "inst_check.m"
                    break;
#line 375 "inst_check.m"
                  case (MR_Integer) 8:
#line 389 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[7]);
#line 375 "inst_check.m"
                    break;
#line 375 "inst_check.m"
                }
#line 375 "inst_check.m"
                break;
#line 375 "inst_check.m"
            }
#line 330 "inst_check.m"
            if ((check_hlds__inst_check__MaybePossibleTypes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "inst_check.m"
              {
#line 329 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27 = (MR_Integer) 0;
#line 328 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5;
#line 328 "inst_check.m"
              }
#line 330 "inst_check.m"
            else
#line 331 "inst_check.m"
              {
#line 331 "inst_check.m"
                MR_Word check_hlds__inst_check__PossibleTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, (MR_Integer) 0)));
#line 331 "inst_check.m"
                MR_Word check_hlds__inst_check__PossibleTypeSet_21;

#line 332 "inst_check.m"
                {
#line 332 "inst_check.m"
                  check_hlds__inst_check__PossibleTypeSet_21 = mercury__set__list_to_set_1_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, check_hlds__inst_check__PossibleTypes_20);
                }
#line 333 "inst_check.m"
                {
#line 333 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26, 0) = ((MR_Box) (check_hlds__inst_check__PossibleTypeSet_21));
#line 333 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5));
#line 333 "inst_check.m"
                }
#line 331 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3;
#line 331 "inst_check.m"
              }
#line 335 "inst_check.m"
            /* direct tailcall eliminated */
#line 335 "inst_check.m"
            {
#line 335 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__BoundInsts_16;
#line 335 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0__tmp_copy_3 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27;
#line 335 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0__tmp_copy_5 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26;

#line 335 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0__tmp_copy_5;
#line 335 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0__tmp_copy_3;
#line 335 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 335 "inst_check.m"
            }
#line 335 "inst_check.m"
            continue;
#line 324 "inst_check.m"
          }
#line 321 "inst_check.m"
      }
#line 321 "inst_check.m"
      break;
#line 321 "inst_check.m"
    }
#line 316 "inst_check.m"
}

#line 279 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(
#line 279 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3,
#line 279 "inst_check.m"
  MR_Word * check_hlds__inst_check__TypeCtor_4)
#line 279 "inst_check.m"
{
#line 284 "inst_check.m"
  {
#line 284 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 284 "inst_check.m"
#line 284 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3)) {
#line 284 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 284 "inst_check.m"
      case (MR_Integer) 0:
#line 284 "inst_check.m"
        {
#line 284 "inst_check.m"
          MR_Word check_hlds__inst_check__V_22_22 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3), (MR_Integer) 0);
#line 284 "inst_check.m"
          MR_Word check_hlds__inst_check__V_5_5;

#line 284 "inst_check.m"
          *check_hlds__inst_check__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_22_22, (MR_Integer) 0)));
#line 284 "inst_check.m"
          check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_22_22, (MR_Integer) 1)));
#line 284 "inst_check.m"
        }
#line 284 "inst_check.m"
        break;
#line 284 "inst_check.m"
      case (MR_Integer) 1:
#line 286 "inst_check.m"
        {
#line 286 "inst_check.m"
          MR_Word check_hlds__inst_check__BuiltinType_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

#line 290 "inst_check.m"
          *check_hlds__inst_check__TypeCtor_4 = ((&check_hlds__inst_check_vector_common_6[0 + check_hlds__inst_check__BuiltinType_6]))->check_hlds__inst_check__vector_common_type_6_0__vct_6_f_0;
#line 286 "inst_check.m"
        }
#line 284 "inst_check.m"
        break;
#line 284 "inst_check.m"
      case (MR_Integer) 2:
#line 301 "inst_check.m"
        {
#line 301 "inst_check.m"
          MR_Integer check_hlds__inst_check__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

#line 302 "inst_check.m"
          {
#line 302 "inst_check.m"
            MR_Word base;
#line 302 "inst_check.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "inst_check.m"
            *check_hlds__inst_check__TypeCtor_4 = base;
#line 302 "inst_check.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_3[12]));
#line 302 "inst_check.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__Arity_7));
#line 302 "inst_check.m"
          }
#line 301 "inst_check.m"
        }
#line 284 "inst_check.m"
        break;
#line 284 "inst_check.m"
    }
#line 284 "inst_check.m"
  }
#line 279 "inst_check.m"
}

#line 256 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0_1(
#line 256 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 256 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 256 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 256 "inst_check.m"
{
#line 256 "inst_check.m"
  {
#line 256 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 256 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_TypeCtor_4;

#line 256 "inst_check.m"
    {
#line 256 "inst_check.m"
      check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_TypeCtor_4);
    }
#line 256 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_TypeCtor_4));
#line 256 "inst_check.m"
  }
#line 256 "inst_check.m"
}

#line 216 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0(
#line 216 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 216 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 216 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3,
#line 216 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_4,
#line 216 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_5)
#line 216 "inst_check.m"
{
#line 221 "inst_check.m"
  {
#line 221 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 221 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "inst_check.m"
      {
#line 221 "inst_check.m"
        *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 221 "inst_check.m"
        *check_hlds__inst_check__STATE_VARIABLE_Specs_5 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_4;
#line 221 "inst_check.m"
      }
#line 221 "inst_check.m"
    else
#line 224 "inst_check.m"
      {
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__InstIdDefnPair0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__InstIdDefnPairs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__InstIdDefnPair_13;
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__InstIdDefnPairs_14;
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__InstId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair0_11, (MR_Integer) 0)));
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__InstDefn0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair0_11, (MR_Integer) 1)));
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__InstDefn_18;
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_21_21;
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__InstVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_17, (MR_Integer) 0)));
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__InstParams_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_17, (MR_Integer) 1)));
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__InstBody_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_17, (MR_Integer) 2)));
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__Context_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_17, (MR_Integer) 4)));
#line 224 "inst_check.m"
        MR_Word check_hlds__inst_check__Status_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_17, (MR_Integer) 5)));
#line 238 "inst_check.m"
        MR_Word check_hlds__inst_check___MMTC_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_17, (MR_Integer) 3)));

#line 274 "inst_check.m"
        if ((check_hlds__inst_check__InstBody_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "inst_check.m"
          {
#line 276 "inst_check.m"
            check_hlds__inst_check__InstDefn_18 = check_hlds__inst_check__InstDefn0_17;
#line 275 "inst_check.m"
            check_hlds__inst_check__STATE_VARIABLE_Specs_21_21 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_4;
#line 275 "inst_check.m"
          }
#line 274 "inst_check.m"
        else
#line 241 "inst_check.m"
          {
#line 241 "inst_check.m"
            MR_Word check_hlds__inst_check__Inst0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__InstBody_32, (MR_Integer) 0)));

#line 261 "inst_check.m"
#line 261 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__Inst0_36)) {
#line 261 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 261 "inst_check.m"
              case (MR_Integer) 0:
#line 271 "inst_check.m"
                {
#line 272 "inst_check.m"
                  check_hlds__inst_check__InstDefn_18 = check_hlds__inst_check__InstDefn0_17;
#line 271 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_Specs_21_21 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_4;
#line 271 "inst_check.m"
                }
#line 261 "inst_check.m"
                break;
#line 261 "inst_check.m"
              case (MR_Integer) 1:
#line 261 "inst_check.m"
              case (MR_Integer) 2:
#line 271 "inst_check.m"
                {
#line 272 "inst_check.m"
                  check_hlds__inst_check__InstDefn_18 = check_hlds__inst_check__InstDefn0_17;
#line 271 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_Specs_21_21 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_4;
#line 271 "inst_check.m"
                }
#line 261 "inst_check.m"
                break;
#line 261 "inst_check.m"
              case (MR_Integer) 3:
#line 261 "inst_check.m"
#line 261 "inst_check.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst0_36, (MR_Integer) 0)))) {
#line 261 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 261 "inst_check.m"
                  case (MR_Integer) 0:
#line 243 "inst_check.m"
                    {
#line 243 "inst_check.m"
                      MR_Word check_hlds__inst_check__BoundInsts0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst0_36, (MR_Integer) 3)));
#line 243 "inst_check.m"
                      MR_Word check_hlds__inst_check__TypeableFunctors_40;
#line 243 "inst_check.m"
                      MR_Word check_hlds__inst_check__PossibleTypeSets_41;
#line 243 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst0_36, (MR_Integer) 1)));
#line 243 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst0_36, (MR_Integer) 2)));

#line 244 "inst_check.m"
                      {
#line 244 "inst_check.m"
                        check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__BoundInsts0_39, (MR_Integer) 1, &check_hlds__inst_check__TypeableFunctors_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__PossibleTypeSets_41);
                      }
#line 250 "inst_check.m"
#line 250 "inst_check.m"
                      switch (check_hlds__inst_check__TypeableFunctors_40) {
#line 250 "inst_check.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 250 "inst_check.m"
                        case (MR_Integer) 1:
#line 251 "inst_check.m"
                          {
#line 251 "inst_check.m"
                            MR_Word check_hlds__inst_check__TypeCtorInfo_45_61 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
#line 251 "inst_check.m"
                            MR_Word check_hlds__inst_check__PossibleTypesSet_42;
#line 251 "inst_check.m"
                            MR_Word check_hlds__inst_check__PossibleTypes_43;
#line 251 "inst_check.m"
                            MR_Word check_hlds__inst_check__PossibleTypeCtors_44;
#line 251 "inst_check.m"
                            MR_Word check_hlds__inst_check__V_60_60;

#line 252 "inst_check.m"
                            {
#line 252 "inst_check.m"
                              check_hlds__inst_check__PossibleTypesSet_42 = mercury__set__intersect_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_45_61, check_hlds__inst_check__PossibleTypeSets_41);
                            }
#line 253 "inst_check.m"
                            {
#line 253 "inst_check.m"
                              check_hlds__inst_check__PossibleTypes_43 = mercury__set__to_sorted_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_45_61, check_hlds__inst_check__PossibleTypesSet_42);
                            }
#line 254 "inst_check.m"
                            {
#line 254 "inst_check.m"
                              check_hlds__inst_check__maybe_issue_inst_check_warning_7_p_0(check_hlds__inst_check__InstId_16, check_hlds__inst_check__InstDefn0_17, check_hlds__inst_check__BoundInsts0_39, check_hlds__inst_check__PossibleTypes_43, check_hlds__inst_check__PossibleTypeSets_41, check_hlds__inst_check__STATE_VARIABLE_Specs_0_4, &check_hlds__inst_check__STATE_VARIABLE_Specs_21_21);
                            }
#line 256 "inst_check.m"
                            {
#line 256 "inst_check.m"
                              mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_45_61, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[2], check_hlds__inst_check__PossibleTypes_43, &check_hlds__inst_check__PossibleTypeCtors_44);
                            }
#line 259 "inst_check.m"
                            {
#line 259 "inst_check.m"
                              check_hlds__inst_check__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 259 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_60_60, 0) = ((MR_Box) (check_hlds__inst_check__PossibleTypeCtors_44));
#line 259 "inst_check.m"
                            }
#line 258 "inst_check.m"
                            {
#line 258 "inst_check.m"
                              check_hlds__inst_check__InstDefn_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 258 "inst_check.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_18, 0) = ((MR_Box) (check_hlds__inst_check__InstVarSet_30));
#line 258 "inst_check.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_18, 1) = ((MR_Box) (check_hlds__inst_check__InstParams_31));
#line 258 "inst_check.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_18, 2) = ((MR_Box) (check_hlds__inst_check__InstBody_32));
#line 258 "inst_check.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_18, 3) = ((MR_Box) (check_hlds__inst_check__V_60_60));
#line 258 "inst_check.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_18, 4) = ((MR_Box) (check_hlds__inst_check__Context_34));
#line 258 "inst_check.m"
                              MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_18, 5) = ((MR_Box) (check_hlds__inst_check__Status_35));
#line 258 "inst_check.m"
                            }
#line 251 "inst_check.m"
                          }
#line 250 "inst_check.m"
                          break;
#line 250 "inst_check.m"
                        case (MR_Integer) 0:
#line 248 "inst_check.m"
                          {
#line 249 "inst_check.m"
                            check_hlds__inst_check__InstDefn_18 = check_hlds__inst_check__InstDefn0_17;
#line 248 "inst_check.m"
                            check_hlds__inst_check__STATE_VARIABLE_Specs_21_21 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_4;
#line 248 "inst_check.m"
                          }
#line 250 "inst_check.m"
                          break;
#line 250 "inst_check.m"
                      }
#line 243 "inst_check.m"
                    }
#line 261 "inst_check.m"
                    break;
#line 261 "inst_check.m"
                  case (MR_Integer) 1:
#line 261 "inst_check.m"
                  case (MR_Integer) 2:
#line 261 "inst_check.m"
                  case (MR_Integer) 3:
#line 261 "inst_check.m"
                  case (MR_Integer) 4:
#line 261 "inst_check.m"
                  case (MR_Integer) 5:
#line 271 "inst_check.m"
                    {
#line 272 "inst_check.m"
                      check_hlds__inst_check__InstDefn_18 = check_hlds__inst_check__InstDefn0_17;
#line 271 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_Specs_21_21 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_4;
#line 271 "inst_check.m"
                    }
#line 261 "inst_check.m"
                    break;
#line 261 "inst_check.m"
                }
#line 261 "inst_check.m"
                break;
#line 261 "inst_check.m"
            }
#line 241 "inst_check.m"
          }
#line 228 "inst_check.m"
        {
#line 228 "inst_check.m"
          check_hlds__inst_check__InstIdDefnPair_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair_13, 0) = ((MR_Box) (check_hlds__inst_check__InstId_16));
#line 228 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair_13, 1) = ((MR_Box) (check_hlds__inst_check__InstDefn_18));
#line 228 "inst_check.m"
        }
#line 229 "inst_check.m"
        {
#line 229 "inst_check.m"
          check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__InstIdDefnPairs0_12, &check_hlds__inst_check__InstIdDefnPairs_14, check_hlds__inst_check__STATE_VARIABLE_Specs_21_21, check_hlds__inst_check__STATE_VARIABLE_Specs_5);
        }
#line 224 "inst_check.m"
        {
#line 224 "inst_check.m"
          MR_Word base;
#line 224 "inst_check.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "inst_check.m"
          *check_hlds__inst_check__HeadVar__3_3 = base;
#line 224 "inst_check.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__InstIdDefnPair_13));
#line 224 "inst_check.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__InstIdDefnPairs_14));
#line 224 "inst_check.m"
        }
#line 224 "inst_check.m"
      }
#line 221 "inst_check.m"
  }
#line 216 "inst_check.m"
}

#line 206 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(
#line 206 "inst_check.m"
  MR_Word check_hlds__inst_check__Ctor_3,
#line 206 "inst_check.m"
  MR_Word * check_hlds__inst_check__FunctorNameAndArity_4)
#line 206 "inst_check.m"
{
#line 209 "inst_check.m"
  {
#line 209 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 209 "inst_check.m"
    MR_Word check_hlds__inst_check__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 2)));
#line 209 "inst_check.m"
    MR_Integer check_hlds__inst_check__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 4)));
#line 209 "inst_check.m"
    MR_String check_hlds__inst_check__V_11_11;
#line 210 "inst_check.m"
    MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 0)));
#line 210 "inst_check.m"
    MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 1)));
#line 210 "inst_check.m"
    MR_Word check_hlds__inst_check___ArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 3)));
#line 210 "inst_check.m"
    MR_Word check_hlds__inst_check__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 5)));

#line 212 "inst_check.m"
    {
#line 212 "inst_check.m"
      check_hlds__inst_check__V_11_11 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_7);
    }
#line 212 "inst_check.m"
    {
#line 212 "inst_check.m"
      MR_Word base;
#line 212 "inst_check.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 212 "inst_check.m"
      *check_hlds__inst_check__FunctorNameAndArity_4 = base;
#line 212 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__V_11_11));
#line 212 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__Arity_9));
#line 212 "inst_check.m"
    }
#line 209 "inst_check.m"
  }
#line 206 "inst_check.m"
}

#line 145 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
#line 145 "inst_check.m"
  MR_Word check_hlds__inst_check__Section_3,
#line 145 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefn_4)
#line 145 "inst_check.m"
{
#line 148 "inst_check.m"
  {
#line 148 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 148 "inst_check.m"
    MR_Word check_hlds__inst_check__ImportStatus_5;

#line 149 "inst_check.m"
    {
#line 149 "inst_check.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__inst_check__TypeDefn_4, &check_hlds__inst_check__ImportStatus_5);
    }
#line 162 "inst_check.m"
#line 162 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__ImportStatus_5)) {
#line 162 "inst_check.m"
      default:
#line 162 "inst_check.m"
        check_hlds__inst_check__succeeded = MR_FALSE;
#line 162 "inst_check.m"
        break;
#line 162 "inst_check.m"
      case (MR_Integer) 0:
#line 162 "inst_check.m"
#line 162 "inst_check.m"
        switch (MR_unmkbody(check_hlds__inst_check__ImportStatus_5)) {
#line 162 "inst_check.m"
          default:
#line 162 "inst_check.m"
            check_hlds__inst_check__succeeded = MR_FALSE;
#line 162 "inst_check.m"
            break;
#line 162 "inst_check.m"
          case (MR_Integer) 3:
#line 163 "inst_check.m"
            check_hlds__inst_check__succeeded = MR_TRUE;
#line 162 "inst_check.m"
            break;
#line 162 "inst_check.m"
          case (MR_Integer) 4:
#line 162 "inst_check.m"
          case (MR_Integer) 5:
#line 162 "inst_check.m"
          case (MR_Integer) 6:
#line 162 "inst_check.m"
          case (MR_Integer) 7:
#line 162 "inst_check.m"
          case (MR_Integer) 8:
#line 6821 "check_hlds.inst_check.c"
            check_hlds__inst_check__succeeded = (check_hlds__inst_check__Section_3 == (MR_Integer) 1);
#line 162 "inst_check.m"
            break;
#line 162 "inst_check.m"
        }
#line 162 "inst_check.m"
        break;
#line 162 "inst_check.m"
      case (MR_Integer) 2:
#line 163 "inst_check.m"
        check_hlds__inst_check__succeeded = MR_TRUE;
#line 162 "inst_check.m"
        break;
#line 162 "inst_check.m"
    }
#line 148 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 148 "inst_check.m"
  }
#line 145 "inst_check.m"
}

#line 135 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2(
#line 135 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 135 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 135 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 135 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_3)
#line 135 "inst_check.m"
{
#line 135 "inst_check.m"
  {
#line 135 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 135 "inst_check.m"
    MR_Word check_hlds__inst_check__conv1_HeadVar__4_22;

#line 135 "inst_check.m"
    {
#line 135 "inst_check.m"
      check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__135__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2), &check_hlds__inst_check__conv1_HeadVar__4_22);
    }
#line 135 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_check__conv1_HeadVar__4_22));
#line 135 "inst_check.m"
  }
#line 135 "inst_check.m"
}

#line 196 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1(
#line 196 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 196 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 196 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 196 "inst_check.m"
{
#line 196 "inst_check.m"
  {
#line 196 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 196 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_FunctorNameAndArity_4;

#line 196 "inst_check.m"
    {
#line 196 "inst_check.m"
      check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_FunctorNameAndArity_4);
    }
#line 196 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_FunctorNameAndArity_4));
#line 196 "inst_check.m"
  }
#line 196 "inst_check.m"
}

#line 124 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(
#line 124 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 124 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2,
#line 124 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_3)
#line 124 "inst_check.m"
{
#line 128 "inst_check.m"
  while (MR_TRUE)
#line 128 "inst_check.m"
    {
#line 128 "inst_check.m"
      /* tailcall optimized into a loop */
#line 128 "inst_check.m"
      {
#line 128 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 128 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_3 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2;
#line 128 "inst_check.m"
        else
#line 130 "inst_check.m"
          {
#line 130 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeCtorDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeCtorDefns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorDefn_7, (MR_Integer) 0)));
#line 130 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorDefn_7, (MR_Integer) 1)));
#line 130 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18;
#line 132 "inst_check.m"
            MR_Word check_hlds__inst_check__ImportStatus_29;

#line 149 "inst_check.m"
            {
#line 149 "inst_check.m"
              hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__inst_check__TypeDefn_11, &check_hlds__inst_check__ImportStatus_29);
            }
#line 162 "inst_check.m"
#line 162 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__ImportStatus_29)) {
#line 162 "inst_check.m"
              default:
#line 162 "inst_check.m"
                check_hlds__inst_check__succeeded = MR_FALSE;
#line 162 "inst_check.m"
                break;
#line 162 "inst_check.m"
              case (MR_Integer) 0:
#line 162 "inst_check.m"
#line 162 "inst_check.m"
                switch (MR_unmkbody(check_hlds__inst_check__ImportStatus_29)) {
#line 162 "inst_check.m"
                  default:
#line 162 "inst_check.m"
                    check_hlds__inst_check__succeeded = MR_FALSE;
#line 162 "inst_check.m"
                    break;
#line 162 "inst_check.m"
                  case (MR_Integer) 3:
#line 163 "inst_check.m"
                    check_hlds__inst_check__succeeded = MR_TRUE;
#line 162 "inst_check.m"
                    break;
#line 162 "inst_check.m"
                  case (MR_Integer) 4:
#line 162 "inst_check.m"
                  case (MR_Integer) 5:
#line 162 "inst_check.m"
                  case (MR_Integer) 6:
#line 162 "inst_check.m"
                  case (MR_Integer) 7:
#line 162 "inst_check.m"
                  case (MR_Integer) 8:
#line 183 "inst_check.m"
                    check_hlds__inst_check__succeeded = MR_TRUE;
#line 162 "inst_check.m"
                    break;
#line 162 "inst_check.m"
                }
#line 162 "inst_check.m"
                break;
#line 162 "inst_check.m"
              case (MR_Integer) 2:
#line 163 "inst_check.m"
                check_hlds__inst_check__succeeded = MR_TRUE;
#line 162 "inst_check.m"
                break;
#line 162 "inst_check.m"
            }
#line 137 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 133 "inst_check.m"
              {
#line 133 "inst_check.m"
                MR_Word check_hlds__inst_check__TypeCtorAndDefn_12;
#line 133 "inst_check.m"
                MR_Word check_hlds__inst_check__Functors_13;
#line 133 "inst_check.m"
                MR_Word check_hlds__inst_check__V_17_17;
#line 133 "inst_check.m"
                MR_Word check_hlds__inst_check__TypeDefnBody_38;
#line 135 "inst_check.m"
                MR_Box check_hlds__inst_check__conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18;

#line 133 "inst_check.m"
                {
#line 133 "inst_check.m"
                  check_hlds__inst_check__TypeCtorAndDefn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 133 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_12, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtor_10));
#line 133 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_12, 1) = ((MR_Box) (check_hlds__inst_check__TypeDefn_11));
#line 133 "inst_check.m"
                }
#line 193 "inst_check.m"
                {
#line 193 "inst_check.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDefn_11, &check_hlds__inst_check__TypeDefnBody_38);
                }
#line 197 "inst_check.m"
#line 197 "inst_check.m"
                switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnBody_38)) {
#line 197 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 197 "inst_check.m"
                  case (MR_Integer) 0:
#line 203 "inst_check.m"
                    check_hlds__inst_check__Functors_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "inst_check.m"
                    break;
#line 197 "inst_check.m"
                  case (MR_Integer) 1:
#line 195 "inst_check.m"
                    {
#line 195 "inst_check.m"
                      MR_Word check_hlds__inst_check__Constructors_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_38, (MR_Integer) 0)));
#line 195 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_38, (MR_Integer) 1)));
#line 195 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_38, (MR_Integer) 2)));
#line 195 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_38, (MR_Integer) 3)));
#line 195 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_38, (MR_Integer) 4)));
#line 195 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_38, (MR_Integer) 5)));
#line 195 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_38, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 195 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_38, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 195 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_38, (MR_Integer) 7)));

#line 196 "inst_check.m"
                      {
#line 196 "inst_check.m"
                        mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[1], check_hlds__inst_check__Constructors_39, &check_hlds__inst_check__Functors_13);
                      }
#line 195 "inst_check.m"
                    }
#line 197 "inst_check.m"
                    break;
#line 197 "inst_check.m"
                  case (MR_Integer) 2:
#line 203 "inst_check.m"
                    check_hlds__inst_check__Functors_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "inst_check.m"
                    break;
#line 197 "inst_check.m"
                  case (MR_Integer) 3:
#line 203 "inst_check.m"
                    check_hlds__inst_check__Functors_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "inst_check.m"
                    break;
#line 197 "inst_check.m"
                }
#line 135 "inst_check.m"
                {
#line 135 "inst_check.m"
                  check_hlds__inst_check__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 135 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_17_17, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_5[0]));
#line 135 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_17_17, 1) = ((MR_Box) (check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2));
#line 135 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 135 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_17_17, 3) = ((MR_Box) (check_hlds__inst_check__TypeCtorAndDefn_12));
#line 135 "inst_check.m"
                }
#line 135 "inst_check.m"
                {
#line 135 "inst_check.m"
                  mercury__list__foldl_4_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[0], check_hlds__inst_check__V_17_17, check_hlds__inst_check__Functors_13, ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2)), &check_hlds__inst_check__conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18);
                }
#line 135 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18 = ((MR_Word) check_hlds__inst_check__conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18);
#line 133 "inst_check.m"
              }
#line 137 "inst_check.m"
            else
#line 137 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2;
#line 140 "inst_check.m"
            /* direct tailcall eliminated */
#line 140 "inst_check.m"
            {
#line 140 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__1__tmp_copy_1 = check_hlds__inst_check__TypeCtorDefns_8;
#line 140 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0__tmp_copy_2 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18;

#line 140 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0__tmp_copy_2;
#line 140 "inst_check.m"
              check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__HeadVar__1__tmp_copy_1;
#line 140 "inst_check.m"
            }
#line 140 "inst_check.m"
            continue;
#line 130 "inst_check.m"
          }
#line 128 "inst_check.m"
      }
#line 128 "inst_check.m"
      break;
#line 128 "inst_check.m"
    }
#line 124 "inst_check.m"
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
#line 99 "inst_check.m"
  {
#line 99 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 99 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_23_23;
#line 99 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_24_24;
#line 99 "inst_check.m"
    MR_Word check_hlds__inst_check__InstTable0_7;
#line 99 "inst_check.m"
    MR_Word check_hlds__inst_check__UserInstTable0_8;
#line 99 "inst_check.m"
    MR_Word check_hlds__inst_check__InstIdDefnPairs0_9;
#line 99 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeTable_10;
#line 99 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorsDefns_11;
#line 99 "inst_check.m"
    MR_Word check_hlds__inst_check__FunctorsToTypeDefns_12;
#line 99 "inst_check.m"
    MR_Word check_hlds__inst_check__InstIdDefnPairs_13;
#line 99 "inst_check.m"
    MR_Word check_hlds__inst_check__UserInstTable_14;
#line 99 "inst_check.m"
    MR_Word check_hlds__inst_check__InstTable_15;
#line 99 "inst_check.m"
    MR_Word check_hlds__inst_check__V_20_20;

#line 100 "inst_check.m"
    {
#line 100 "inst_check.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__inst_check__InstTable0_7);
    }
#line 101 "inst_check.m"
    {
#line 101 "inst_check.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(check_hlds__inst_check__InstTable0_7, &check_hlds__inst_check__UserInstTable0_8);
    }
#line 7200 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0;
#line 7202 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;
#line 102 "inst_check.m"
    {
#line 102 "inst_check.m"
      mercury__map__to_sorted_assoc_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_23_23, check_hlds__inst_check__TypeCtorInfo_24_24, check_hlds__inst_check__UserInstTable0_8, &check_hlds__inst_check__InstIdDefnPairs0_9);
    }
#line 103 "inst_check.m"
    {
#line 103 "inst_check.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__inst_check__TypeTable_10);
    }
#line 104 "inst_check.m"
    {
#line 104 "inst_check.m"
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(check_hlds__inst_check__TypeTable_10, &check_hlds__inst_check__TypeCtorsDefns_11);
    }
#line 106 "inst_check.m"
    {
#line 106 "inst_check.m"
      check_hlds__inst_check__V_20_20 = mercury__multi_map__init_0_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0);
    }
#line 105 "inst_check.m"
    {
#line 105 "inst_check.m"
      check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(check_hlds__inst_check__TypeCtorsDefns_11, check_hlds__inst_check__V_20_20, &check_hlds__inst_check__FunctorsToTypeDefns_12);
    }
#line 107 "inst_check.m"
    {
#line 107 "inst_check.m"
      check_hlds__inst_check__check_inst_defns_have_matching_types_5_p_0(check_hlds__inst_check__FunctorsToTypeDefns_12, check_hlds__inst_check__InstIdDefnPairs0_9, &check_hlds__inst_check__InstIdDefnPairs_13, check_hlds__inst_check__STATE_VARIABLE_Specs_0_18, check_hlds__inst_check__STATE_VARIABLE_Specs_19);
    }
#line 109 "inst_check.m"
    {
#line 109 "inst_check.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_23_23, check_hlds__inst_check__TypeCtorInfo_24_24, check_hlds__inst_check__InstIdDefnPairs_13, &check_hlds__inst_check__UserInstTable_14);
    }
#line 110 "inst_check.m"
    {
#line 110 "inst_check.m"
      hlds__hlds_data__inst_table_set_user_insts_3_p_0(check_hlds__inst_check__UserInstTable_14, check_hlds__inst_check__InstTable0_7, &check_hlds__inst_check__InstTable_15);
    }
#line 111 "inst_check.m"
    {
#line 111 "inst_check.m"
      hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_check__InstTable_15, check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_17);
#line 111 "inst_check.m"
      return;
    }
#line 99 "inst_check.m"
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
