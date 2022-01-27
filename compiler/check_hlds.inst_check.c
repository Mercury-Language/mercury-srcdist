/*
** Automatically generated from `inst_check.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



#line 791 "inst_check.m"
struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s {
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11;
#line 797 "inst_check.m"
  MR_bool check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded;
#line 837 "inst_check.m"
  jmp_buf check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__commit_0;
#line 837 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_118;
#line 837 "inst_check.m"
  MR_Box check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__conv1_Type_118;
#line 791 "inst_check.m"
};

#line 402 "inst_check.m"
struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s {
#line 405 "inst_check.m"
  MR_bool check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded;
#line 411 "inst_check.m"
  MR_Integer check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsArity_17;
#line 417 "inst_check.m"
  MR_Word check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructors_22;
#line 417 "inst_check.m"
  MR_String check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsName_31;
#line 436 "inst_check.m"
  jmp_buf check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__commit_0;
#line 436 "inst_check.m"
  MR_Word check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorSymName_41;
#line 436 "inst_check.m"
  MR_Integer check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorArity_43;
#line 436 "inst_check.m"
  MR_Word check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95;
#line 436 "inst_check.m"
  MR_String check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__V_100_100;
#line 436 "inst_check.m"
  MR_Box check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__conv0_Constructor_95;
#line 402 "inst_check.m"
};


#line 186 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

#line 189 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

#line 192 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0;

#line 195 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0[2];

#line 198 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0;

#line 201 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1;

#line 204 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_2;

#line 207 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_3;

#line 210 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_4;

#line 213 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_0[4];

#line 216 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_1[1];

#line 219 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_for_type_kind_0[2];

#line 222 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_for_type_kind_0[5];

#line 225 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_for_type_kind_0[5];

#line 228 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0[2];

#line 231 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0;

#line 234 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0[1];

#line 237 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0[1];

#line 240 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0[1];

#line 243 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0[1];

#line 246 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

#line 249 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 252 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0[3];

#line 255 "check_hlds.inst_check.c"
static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0[3];

#line 258 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0;

#line 261 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0[1];

#line 264 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0[1];

#line 267 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0[1];

#line 270 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0[1];

#line 273 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0[2];

#line 276 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0;

#line 279 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0[1];

#line 282 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0[1];

#line 285 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0[1];

#line 288 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0[1];

#line 291 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1];

#line 294 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0;

#line 297 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1];

#line 300 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1;

#line 303 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1];

#line 306 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2;

#line 309 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[1];

#line 312 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[1];

#line 315 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[1];

#line 318 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0[3];

#line 321 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0[3];

#line 324 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0[3];

#line 327 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0;

#line 330 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1;

#line 333 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_value_ordered_typeable_functors_0[2];

#line 336 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0[2];

#line 339 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0[2];

#line 342 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0_10001(
#line 345 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 347 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 350 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0_10001(
#line 353 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 355 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 357 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 360 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001(
#line 363 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 365 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 368 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001(
#line 371 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 373 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 375 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 378 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001(
#line 381 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 383 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 386 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001(
#line 389 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 391 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 393 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 396 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001(
#line 399 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 401 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 404 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001(
#line 407 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 409 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 411 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 414 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001(
#line 417 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 419 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 422 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001(
#line 425 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 427 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 429 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 432 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
#line 435 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 437 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 440 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
#line 443 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 445 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 447 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 450 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0_10001(
#line 453 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 455 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 458 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0_10001(
#line 461 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 463 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 465 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 358 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__358__1_2_p_0(
#line 358 "inst_check.m"
  MR_Word check_hlds__inst_check__IFTC0_17,
#line 358 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_60);

#line 125 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__125__1_4_p_0(
#line 125 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeCtorAndDefn_12,
#line 125 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_20,
#line 125 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_21,
#line 125 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__4_22);

#line 550 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
#line 550 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 550 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 550 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 550 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0(
#line 550 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_1,
#line 550 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 554 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
#line 554 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 554 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 554 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 554 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
#line 554 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 554 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 108 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(
#line 108 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 108 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 108 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 108 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(
#line 108 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 108 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 884 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
#line 884 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 884 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 884 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 884 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
#line 884 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 884 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 111 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0(
#line 111 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 111 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 111 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 111 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0(
#line 111 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 111 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 105 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0(
#line 105 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 105 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 105 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 105 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0(
#line 105 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 105 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 395 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0(
#line 395 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 395 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 395 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 395 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0(
#line 395 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 395 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 1162 "inst_check.m"
static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
#line 1162 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3);

#line 1150 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(
#line 1150 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 1150 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 1150 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

#line 1127 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
#line 1127 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 1127 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 1127 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

#line 1106 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_mismatch_pieces_2_p_0(
#line 1106 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 1106 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__2_2);

#line 1090 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_mismatch_6_p_0(
#line 1090 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_7,
#line 1090 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInst_8,
#line 1090 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16,
#line 1090 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17,
#line 1090 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18,
#line 1090 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19);

#line 1079 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0_1(
#line 1079 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 1079 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1079 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 1071 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0(
#line 1071 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_9,
#line 1071 "inst_check.m"
  MR_String check_hlds__inst_check__FunctorName_10,
#line 1071 "inst_check.m"
  MR_Integer check_hlds__inst_check__ActualArity_11,
#line 1071 "inst_check.m"
  MR_Word check_hlds__inst_check__ExpectedAritiesSet_12,
#line 1071 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22,
#line 1071 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23,
#line 1071 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24,
#line 1071 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25);

#line 1048 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(
#line 1048 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 1048 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 1048 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 1048 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 1048 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 1048 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 1048 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

#line 999 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(
#line 999 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 999 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 999 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 999 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 999 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 999 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 999 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

#line 977 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(
#line 977 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 977 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 977 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3,
#line 977 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4,
#line 977 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5);

#line 960 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(
#line 960 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 960 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 960 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3);

#line 927 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0(
#line 927 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 927 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 927 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 927 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 927 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 927 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 927 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

#line 891 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
#line 891 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_4,
#line 891 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_5,
#line 891 "inst_check.m"
  MR_Word * check_hlds__inst_check__MismatchFromType_6);

#line 865 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_6(
#line 865 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 865 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1);

#line 814 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_1(
#line 814 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 814 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 814 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 837 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_2(
#line 837 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 837 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_4(
#line 837 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 837 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_3(
#line 837 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 837 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_5(
#line 837 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 791 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0(
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_8,
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_9,
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_10,
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypes_11,
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypeSets_12,
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_43,
#line 791 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_44);

#line 706 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(
#line 706 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_7,
#line 706 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_8,
#line 706 "inst_check.m"
  MR_Word check_hlds__inst_check__ForTypeKind_9,
#line 706 "inst_check.m"
  MR_Word check_hlds__inst_check__MismatchConsIdStrs_10,
#line 706 "inst_check.m"
  MR_Word * check_hlds__inst_check__IFTC_11,
#line 706 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_35);

#line 683 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(
#line 683 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_6,
#line 683 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_7,
#line 683 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeCtor_8,
#line 683 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_19,
#line 683 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_20);

#line 649 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
#line 649 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 649 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 649 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

#line 559 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(
#line 559 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 559 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 559 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3,
#line 559 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4,
#line 559 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5,
#line 559 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6);

#line 436 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_1(
#line 436 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 436 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_3(
#line 436 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 436 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_2(
#line 436 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 436 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_4(
#line 436 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 402 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0(
#line 402 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 402 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 402 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3,
#line 402 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_4);

#line 367 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(
#line 367 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3,
#line 367 "inst_check.m"
  MR_Word * check_hlds__inst_check__TypeCtor_4);

#line 324 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_2(
#line 324 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 324 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 324 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 358 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1(
#line 358 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg);

#line 225 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0(
#line 225 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeTable_8,
#line 225 "inst_check.m"
  MR_Word check_hlds__inst_check__FunctorsToTypesMap_9,
#line 225 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_10,
#line 225 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn0_11,
#line 225 "inst_check.m"
  MR_Word * check_hlds__inst_check__InstDefn_12,
#line 225 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_54,
#line 225 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_55);

#line 207 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_6_p_0(
#line 207 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 207 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 207 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 207 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__4_4,
#line 207 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_5,
#line 207 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_6);

#line 197 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(
#line 197 "inst_check.m"
  MR_Word check_hlds__inst_check__Ctor_3,
#line 197 "inst_check.m"
  MR_Word * check_hlds__inst_check__FunctorNameAndArity_4);

#line 135 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
#line 135 "inst_check.m"
  MR_Word check_hlds__inst_check__Section_3,
#line 135 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefn_4);

#line 125 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2(
#line 125 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 125 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 125 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 125 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_3);

#line 187 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1(
#line 187 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 187 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 187 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 114 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(
#line 114 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 114 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2,
#line 114 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_3);


static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[48][2];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_3[14][1];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[5][5];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_7[1][6];


#line 378 "inst_check.m"
/* sealed */ struct check_hlds__inst_check__vector_common_type_6_0_s {
#line 378 "inst_check.m"
  const MR_Word check_hlds__inst_check__vector_common_type_6_0__vct_6_f_0;
#line 378 "inst_check.m"
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_6_0_s check_hlds__inst_check_vector_common_6[4];

#line 1173 "inst_check.m"
/* sealed */ struct check_hlds__inst_check__vector_common_type_8_0_s {
#line 1173 "inst_check.m"
  const MR_String check_hlds__inst_check__vector_common_type_8_0__vct_8_f_0;
#line 1173 "inst_check.m"
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_8_0_s check_hlds__inst_check_vector_common_8[4];



static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[48][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but that type constructor is not visible here."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not visible outside this module."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[6])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of that type."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[6])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not visible from outside this module."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are visible from outside this module."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "equally close matches."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[6])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for which the top level mismatches are the following."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[6])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[8])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[9])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[10])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[11])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is specified to be for"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is exported, but the type it is for,"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is declared to be for type"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but its top level"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: inst"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not match any of the types in scope."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is exported, but the one type it matches"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is exported, but none of the types it matches"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The closest match is"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There are"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 47 */
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
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[2])),
    ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[3])),
    ((MR_Box) (check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[4])),
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

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[5][5] = {
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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_inst_for_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_inst_for_type_ctor_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
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
  /* row 0 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[30] },
  /* row 1 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[29] },
  /* row 2 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[31] },
  /* row 3 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[28] },
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



#line 1500 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
  }
};

#line 1508 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0,
    (MR_PseudoTypeInfo) &check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
  }
};

#line 1517 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0
  }
};

#line 1525 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
};

#line 1531 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0 = {
  (MR_String) "ftk_user",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0,
  NULL,
  NULL,
  NULL
};

#line 1546 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1 = {
  (MR_String) "ftk_int",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1561 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_2 = {
  (MR_String) "ftk_float",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1576 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_3 = {
  (MR_String) "ftk_char",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1591 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_4 = {
  (MR_String) "ftk_string",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1606 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_0[4] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_2,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_3,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_4
};

#line 1614 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_1[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0
};

#line 1619 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_for_type_kind_0[2] = {
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_1
  }
};

#line 1633 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_for_type_kind_0[5] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_3,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_2,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_4,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0
};

#line 1642 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_for_type_kind_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1651 "check_hlds.inst_check.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_for_type_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____for_type_kind_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____for_type_kind_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "for_type_kind",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_for_type_kind_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_for_type_kind_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_for_type_kind_0
};

#line 1668 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1674 "check_hlds.inst_check.c"
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

#line 1689 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0
};

#line 1694 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0
  }
};

#line 1703 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0
};

#line 1708 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0[1] = {
  (MR_Integer) 0
};

#line 1713 "check_hlds.inst_check.c"
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

#line 1730 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0,
    (MR_TypeInfo) &check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
  }
};

#line 1739 "check_hlds.inst_check.c"
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

#line 1756 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1764 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 1771 "check_hlds.inst_check.c"
static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0[3] = {
  (MR_String) "mft_num_mismatches",
  (MR_String) "mft_type",
  (MR_String) "mft_pieces"
};

#line 1778 "check_hlds.inst_check.c"
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

#line 1793 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0
};

#line 1798 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0
  }
};

#line 1807 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0
};

#line 1812 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0[1] = {
  (MR_Integer) 0
};

#line 1817 "check_hlds.inst_check.c"
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

#line 1834 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
};

#line 1840 "check_hlds.inst_check.c"
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

#line 1855 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0
};

#line 1860 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0
  }
};

#line 1869 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0
};

#line 1874 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0[1] = {
  (MR_Integer) 0
};

#line 1879 "check_hlds.inst_check.c"
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

#line 1896 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
};

#line 1901 "check_hlds.inst_check.c"
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

#line 1916 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0
};

#line 1921 "check_hlds.inst_check.c"
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

#line 1936 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1941 "check_hlds.inst_check.c"
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

#line 1956 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0
};

#line 1961 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1
};

#line 1966 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2
};

#line 1971 "check_hlds.inst_check.c"
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

#line 1990 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0[3] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0
};

#line 1997 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2004 "check_hlds.inst_check.c"
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

#line 2021 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0 = {
  (MR_String) "some_untypeable_functors",
  (MR_Integer) 0
};

#line 2027 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1 = {
  (MR_String) "all_typeable_functors",
  (MR_Integer) 1
};

#line 2033 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_value_ordered_typeable_functors_0[2] = {
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0,
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1
};

#line 2039 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0[2] = {
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0
};

#line 2045 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2051 "check_hlds.inst_check.c"
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

#line 2068 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0_10001(
#line 2071 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2073 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2075 "check_hlds.inst_check.c"
{
#line 2077 "check_hlds.inst_check.c"
  {
#line 2079 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2082 "check_hlds.inst_check.c"
    {
#line 2084 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____for_type_kind_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2087 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2089 "check_hlds.inst_check.c"
  }
#line 2091 "check_hlds.inst_check.c"
}

#line 2094 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0_10001(
#line 2097 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2099 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2101 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2103 "check_hlds.inst_check.c"
{
#line 2105 "check_hlds.inst_check.c"
  {
#line 2107 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2110 "check_hlds.inst_check.c"
    {
#line 2112 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____for_type_kind_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2115 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2117 "check_hlds.inst_check.c"
  }
#line 2119 "check_hlds.inst_check.c"
}

#line 2122 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001(
#line 2125 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2127 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2129 "check_hlds.inst_check.c"
{
#line 2131 "check_hlds.inst_check.c"
  {
#line 2133 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2136 "check_hlds.inst_check.c"
    {
#line 2138 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____functor_name_and_arity_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2141 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2143 "check_hlds.inst_check.c"
  }
#line 2145 "check_hlds.inst_check.c"
}

#line 2148 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001(
#line 2151 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2153 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2155 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2157 "check_hlds.inst_check.c"
{
#line 2159 "check_hlds.inst_check.c"
  {
#line 2161 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2164 "check_hlds.inst_check.c"
    {
#line 2166 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____functor_name_and_arity_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2169 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2171 "check_hlds.inst_check.c"
  }
#line 2173 "check_hlds.inst_check.c"
}

#line 2176 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001(
#line 2179 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2181 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2183 "check_hlds.inst_check.c"
{
#line 2185 "check_hlds.inst_check.c"
  {
#line 2187 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2190 "check_hlds.inst_check.c"
    {
#line 2192 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____functors_to_types_map_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2195 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2197 "check_hlds.inst_check.c"
  }
#line 2199 "check_hlds.inst_check.c"
}

#line 2202 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001(
#line 2205 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2207 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2209 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2211 "check_hlds.inst_check.c"
{
#line 2213 "check_hlds.inst_check.c"
  {
#line 2215 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2218 "check_hlds.inst_check.c"
    {
#line 2220 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____functors_to_types_map_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2223 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2225 "check_hlds.inst_check.c"
  }
#line 2227 "check_hlds.inst_check.c"
}

#line 2230 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001(
#line 2233 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2235 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2237 "check_hlds.inst_check.c"
{
#line 2239 "check_hlds.inst_check.c"
  {
#line 2241 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2244 "check_hlds.inst_check.c"
    {
#line 2246 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____mismatch_from_type_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2249 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2251 "check_hlds.inst_check.c"
  }
#line 2253 "check_hlds.inst_check.c"
}

#line 2256 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001(
#line 2259 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2261 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2263 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2265 "check_hlds.inst_check.c"
{
#line 2267 "check_hlds.inst_check.c"
  {
#line 2269 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2272 "check_hlds.inst_check.c"
    {
#line 2274 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____mismatch_from_type_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2277 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2279 "check_hlds.inst_check.c"
  }
#line 2281 "check_hlds.inst_check.c"
}

#line 2284 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001(
#line 2287 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2289 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2291 "check_hlds.inst_check.c"
{
#line 2293 "check_hlds.inst_check.c"
  {
#line 2295 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2298 "check_hlds.inst_check.c"
    {
#line 2300 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2303 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2305 "check_hlds.inst_check.c"
  }
#line 2307 "check_hlds.inst_check.c"
}

#line 2310 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001(
#line 2313 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2315 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2317 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2319 "check_hlds.inst_check.c"
{
#line 2321 "check_hlds.inst_check.c"
  {
#line 2323 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2326 "check_hlds.inst_check.c"
    {
#line 2328 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2331 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2333 "check_hlds.inst_check.c"
  }
#line 2335 "check_hlds.inst_check.c"
}

#line 2338 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
#line 2341 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2343 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2345 "check_hlds.inst_check.c"
{
#line 2347 "check_hlds.inst_check.c"
  {
#line 2349 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2352 "check_hlds.inst_check.c"
    {
#line 2354 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2357 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2359 "check_hlds.inst_check.c"
  }
#line 2361 "check_hlds.inst_check.c"
}

#line 2364 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
#line 2367 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2369 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2371 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2373 "check_hlds.inst_check.c"
{
#line 2375 "check_hlds.inst_check.c"
  {
#line 2377 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2380 "check_hlds.inst_check.c"
    {
#line 2382 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2385 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2387 "check_hlds.inst_check.c"
  }
#line 2389 "check_hlds.inst_check.c"
}

#line 2392 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0_10001(
#line 2395 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2397 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2399 "check_hlds.inst_check.c"
{
#line 2401 "check_hlds.inst_check.c"
  {
#line 2403 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2406 "check_hlds.inst_check.c"
    {
#line 2408 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____typeable_functors_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2411 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2413 "check_hlds.inst_check.c"
  }
#line 2415 "check_hlds.inst_check.c"
}

#line 2418 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0_10001(
#line 2421 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2423 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2425 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2427 "check_hlds.inst_check.c"
{
#line 2429 "check_hlds.inst_check.c"
  {
#line 2431 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2434 "check_hlds.inst_check.c"
    {
#line 2436 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____typeable_functors_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2439 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2441 "check_hlds.inst_check.c"
  }
#line 2443 "check_hlds.inst_check.c"
}

#line 358 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__358__1_2_p_0(
#line 358 "inst_check.m"
  MR_Word check_hlds__inst_check__IFTC0_17,
#line 358 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_60)
#line 358 "inst_check.m"
{
#line 358 "inst_check.m"
  {
#line 358 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 358 "inst_check.m"
    {
#line 358 "inst_check.m"
      return check_hlds__inst_check__succeeded = hlds__hlds_data____Unify____inst_for_type_ctor_0_0(check_hlds__inst_check__IFTC0_17, check_hlds__inst_check__HeadVar__2_60);
    }
#line 358 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 358 "inst_check.m"
  }
#line 358 "inst_check.m"
}

#line 125 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__125__1_4_p_0(
#line 125 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeCtorAndDefn_12,
#line 125 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_20,
#line 125 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_21,
#line 125 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__4_22)
#line 125 "inst_check.m"
{
#line 125 "inst_check.m"
  {
#line 125 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 125 "inst_check.m"
    {
#line 125 "inst_check.m"
      mercury__multi_map__reverse_set_4_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, ((MR_Box) (check_hlds__inst_check__TypeCtorAndDefn_12)), ((MR_Box) (check_hlds__inst_check__HeadVar__2_20)), check_hlds__inst_check__HeadVar__3_21, check_hlds__inst_check__HeadVar__4_22);
#line 125 "inst_check.m"
      return;
    }
#line 125 "inst_check.m"
  }
#line 125 "inst_check.m"
}

#line 550 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
#line 550 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 550 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 550 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 550 "inst_check.m"
{
#line 550 "inst_check.m"
  {
#line 550 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 550 "inst_check.m"
    MR_Integer check_hlds__inst_check__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 550 "inst_check.m"
    MR_Integer check_hlds__inst_check__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 550 "inst_check.m"
    {
#line 550 "inst_check.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Cast_HeadVar1_4, check_hlds__inst_check__Cast_HeadVar2_5);
#line 550 "inst_check.m"
      return;
    }
#line 550 "inst_check.m"
  }
#line 550 "inst_check.m"
}

#line 550 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0(
#line 550 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_1,
#line 550 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 550 "inst_check.m"
{
#line 2543 "check_hlds.inst_check.c"
  {
#line 2545 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded = (check_hlds__inst_check__HeadVar__2_1 == check_hlds__inst_check__HeadVar__2_2);

#line 2548 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2550 "check_hlds.inst_check.c"
  }
#line 550 "inst_check.m"
}

#line 554 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
#line 554 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 554 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 554 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 554 "inst_check.m"
{
#line 554 "inst_check.m"
  {
#line 554 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 554 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_22 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 554 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_23 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 554 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_22 == check_hlds__inst_check__CastY_23);
#line 554 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 2579 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 554 "inst_check.m"
    else
#line 554 "inst_check.m"
#line 554 "inst_check.m"
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) {
#line 554 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 554 "inst_check.m"
        case (MR_Integer) 0:
#line 554 "inst_check.m"
          {
#line 554 "inst_check.m"
            MR_Word check_hlds__inst_check__V_29_29 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__2_2), (MR_Integer) 0);

#line 554 "inst_check.m"
#line 554 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 554 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 554 "inst_check.m"
              case (MR_Integer) 0:
#line 554 "inst_check.m"
                {
#line 554 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_5_5 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__3_3), (MR_Integer) 0);

#line 554 "inst_check.m"
                  {
#line 554 "inst_check.m"
                    check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_29_29, check_hlds__inst_check__V_5_5);
#line 554 "inst_check.m"
                    return;
                  }
#line 554 "inst_check.m"
                }
#line 554 "inst_check.m"
                break;
#line 554 "inst_check.m"
              case (MR_Integer) 1:
#line 2620 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 554 "inst_check.m"
                break;
#line 554 "inst_check.m"
              case (MR_Integer) 2:
#line 2626 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 554 "inst_check.m"
                break;
#line 554 "inst_check.m"
            }
#line 554 "inst_check.m"
          }
#line 554 "inst_check.m"
          break;
#line 554 "inst_check.m"
        case (MR_Integer) 1:
#line 554 "inst_check.m"
          {
#line 554 "inst_check.m"
            MR_Word check_hlds__inst_check__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 554 "inst_check.m"
#line 554 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 554 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 554 "inst_check.m"
              case (MR_Integer) 0:
#line 2650 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 554 "inst_check.m"
                break;
#line 554 "inst_check.m"
              case (MR_Integer) 1:
#line 554 "inst_check.m"
                {
#line 554 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 554 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_30_30 = (MR_Integer) check_hlds__inst_check__V_27_27;
#line 554 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_31_31 = (MR_Integer) check_hlds__inst_check__V_13_13;

#line 554 "inst_check.m"
                  {
#line 554 "inst_check.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_30_30, check_hlds__inst_check__V_31_31);
#line 554 "inst_check.m"
                    return;
                  }
#line 554 "inst_check.m"
                }
#line 554 "inst_check.m"
                break;
#line 554 "inst_check.m"
              case (MR_Integer) 2:
#line 2678 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 554 "inst_check.m"
                break;
#line 554 "inst_check.m"
            }
#line 554 "inst_check.m"
          }
#line 554 "inst_check.m"
          break;
#line 554 "inst_check.m"
        case (MR_Integer) 2:
#line 554 "inst_check.m"
          {
#line 554 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 554 "inst_check.m"
#line 554 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 554 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 554 "inst_check.m"
              case (MR_Integer) 0:
#line 2702 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 554 "inst_check.m"
                break;
#line 554 "inst_check.m"
              case (MR_Integer) 1:
#line 2708 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 554 "inst_check.m"
                break;
#line 554 "inst_check.m"
              case (MR_Integer) 2:
#line 554 "inst_check.m"
                {
#line 554 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));

#line 554 "inst_check.m"
                  {
#line 554 "inst_check.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_28_28, check_hlds__inst_check__V_21_21);
#line 554 "inst_check.m"
                    return;
                  }
#line 554 "inst_check.m"
                }
#line 554 "inst_check.m"
                break;
#line 554 "inst_check.m"
            }
#line 554 "inst_check.m"
          }
#line 554 "inst_check.m"
          break;
#line 554 "inst_check.m"
      }
#line 554 "inst_check.m"
  }
#line 554 "inst_check.m"
}

#line 554 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
#line 554 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 554 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 554 "inst_check.m"
{
#line 554 "inst_check.m"
  {
#line 554 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 554 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 554 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 554 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 554 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 554 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 554 "inst_check.m"
    else
#line 554 "inst_check.m"
#line 554 "inst_check.m"
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 554 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 554 "inst_check.m"
        case (MR_Integer) 0:
#line 554 "inst_check.m"
          {
#line 554 "inst_check.m"
            MR_Word check_hlds__inst_check__V_3_3 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__1_1), (MR_Integer) 0);
#line 554 "inst_check.m"
            MR_Word check_hlds__inst_check__V_4_4;

#line 554 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 554 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 554 "inst_check.m"
              {
#line 554 "inst_check.m"
                check_hlds__inst_check__V_4_4 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__2_2), (MR_Integer) 0);
#line 2791 "check_hlds.inst_check.c"
                {
#line 2793 "check_hlds.inst_check.c"
                  return check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_4_4);
                }
#line 554 "inst_check.m"
              }
#line 554 "inst_check.m"
          }
#line 554 "inst_check.m"
          break;
#line 554 "inst_check.m"
        case (MR_Integer) 1:
#line 554 "inst_check.m"
          {
#line 554 "inst_check.m"
            MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 554 "inst_check.m"
            MR_Word check_hlds__inst_check__V_6_6;

#line 554 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 554 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 554 "inst_check.m"
              {
#line 554 "inst_check.m"
                check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 2819 "check_hlds.inst_check.c"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_5_5 == check_hlds__inst_check__V_6_6);
#line 554 "inst_check.m"
              }
#line 554 "inst_check.m"
          }
#line 554 "inst_check.m"
          break;
#line 554 "inst_check.m"
        case (MR_Integer) 2:
#line 554 "inst_check.m"
          {
#line 554 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 554 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_8_8;

#line 554 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 554 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 554 "inst_check.m"
              {
#line 554 "inst_check.m"
                check_hlds__inst_check__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 2844 "check_hlds.inst_check.c"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_7_7 == check_hlds__inst_check__V_8_8);
#line 554 "inst_check.m"
              }
#line 554 "inst_check.m"
          }
#line 554 "inst_check.m"
          break;
#line 554 "inst_check.m"
      }
#line 554 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 554 "inst_check.m"
  }
#line 554 "inst_check.m"
}

#line 108 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(
#line 108 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 108 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 108 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 108 "inst_check.m"
{
#line 108 "inst_check.m"
  {
#line 108 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 108 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 108 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 108 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 108 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 2885 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 108 "inst_check.m"
    else
#line 108 "inst_check.m"
      {
#line 108 "inst_check.m"
        MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 108 "inst_check.m"
        MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 108 "inst_check.m"
        MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 108 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8;

#line 108 "inst_check.m"
        {
#line 108 "inst_check.m"
          parse_tree__prog_data____Compare____type_ctor_0_0(&check_hlds__inst_check__V_8_8, check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_6_6);
        }
#line 2907 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_8_8 == (MR_Integer) 0);
#line 108 "inst_check.m"
        check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 108 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 108 "inst_check.m"
          *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_8_8;
#line 108 "inst_check.m"
        else
#line 108 "inst_check.m"
          {
#line 108 "inst_check.m"
            hlds__hlds_data____Compare____hlds_type_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_5_5, check_hlds__inst_check__V_7_7);
#line 108 "inst_check.m"
            return;
          }
#line 108 "inst_check.m"
      }
#line 108 "inst_check.m"
  }
#line 108 "inst_check.m"
}

#line 108 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(
#line 108 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 108 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 108 "inst_check.m"
{
#line 108 "inst_check.m"
  {
#line 108 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 108 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_7 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 108 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_8 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 108 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_7 == check_hlds__inst_check__CastY_8);
#line 108 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 108 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 108 "inst_check.m"
    else
#line 108 "inst_check.m"
      {
#line 108 "inst_check.m"
        MR_Word check_hlds__inst_check__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "inst_check.m"
        MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 108 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "inst_check.m"
        MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));

#line 2968 "check_hlds.inst_check.c"
        {
#line 2970 "check_hlds.inst_check.c"
          check_hlds__inst_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_5_5);
        }
#line 108 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 2975 "check_hlds.inst_check.c"
          {
#line 2977 "check_hlds.inst_check.c"
            return check_hlds__inst_check__succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_6_6);
          }
#line 108 "inst_check.m"
      }
#line 108 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 108 "inst_check.m"
  }
#line 108 "inst_check.m"
}

#line 884 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
#line 884 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 884 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 884 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 884 "inst_check.m"
{
#line 884 "inst_check.m"
  {
#line 884 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 884 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_12 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 884 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_13 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 884 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_12 == check_hlds__inst_check__CastY_13);
#line 884 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 3013 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 884 "inst_check.m"
    else
#line 884 "inst_check.m"
      {
#line 884 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 884 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 884 "inst_check.m"
        MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 2)));
#line 884 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 884 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 884 "inst_check.m"
        MR_Word check_hlds__inst_check__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 2)));
#line 884 "inst_check.m"
        MR_Word check_hlds__inst_check__V_10_10;

#line 884 "inst_check.m"
        {
#line 884 "inst_check.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_check__V_10_10, check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_7_7);
        }
#line 3039 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_10_10 == (MR_Integer) 0);
#line 884 "inst_check.m"
        check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 884 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 884 "inst_check.m"
          *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_10_10;
#line 884 "inst_check.m"
        else
#line 884 "inst_check.m"
          {
#line 884 "inst_check.m"
            MR_Word check_hlds__inst_check__V_11_11;

#line 884 "inst_check.m"
            {
#line 884 "inst_check.m"
              check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&check_hlds__inst_check__V_11_11, check_hlds__inst_check__V_5_5, check_hlds__inst_check__V_8_8);
            }
#line 3059 "check_hlds.inst_check.c"
            check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_11_11 == (MR_Integer) 0);
#line 884 "inst_check.m"
            check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 884 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 884 "inst_check.m"
              *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_11_11;
#line 884 "inst_check.m"
            else
#line 884 "inst_check.m"
              {
#line 884 "inst_check.m"
                {
#line 884 "inst_check.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_1[1], check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__V_6_6)), ((MR_Box) (check_hlds__inst_check__V_9_9)));
#line 884 "inst_check.m"
                  return;
                }
#line 884 "inst_check.m"
              }
#line 884 "inst_check.m"
          }
#line 884 "inst_check.m"
      }
#line 884 "inst_check.m"
  }
#line 884 "inst_check.m"
}

#line 884 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
#line 884 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 884 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 884 "inst_check.m"
{
#line 884 "inst_check.m"
  {
#line 884 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 884 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 884 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 884 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 884 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 884 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 884 "inst_check.m"
    else
#line 884 "inst_check.m"
      {
#line 884 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeInfo_11_11;
#line 884 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 884 "inst_check.m"
        MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 884 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 2)));
#line 884 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 884 "inst_check.m"
        MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 884 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 2)));

#line 3132 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_3_3 == check_hlds__inst_check__V_6_6);
#line 884 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 884 "inst_check.m"
          {
#line 3138 "check_hlds.inst_check.c"
            {
#line 3140 "check_hlds.inst_check.c"
              check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_7_7);
            }
#line 884 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 884 "inst_check.m"
              {
#line 3147 "check_hlds.inst_check.c"
                check_hlds__inst_check__TypeInfo_11_11 = (MR_Word) &check_hlds__inst_check_scalar_common_1[1];
#line 3149 "check_hlds.inst_check.c"
                {
#line 3151 "check_hlds.inst_check.c"
                  return check_hlds__inst_check__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_check__TypeInfo_11_11, ((MR_Box) (check_hlds__inst_check__V_5_5)), ((MR_Box) (check_hlds__inst_check__V_8_8)));
                }
#line 884 "inst_check.m"
              }
#line 884 "inst_check.m"
          }
#line 884 "inst_check.m"
      }
#line 884 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 884 "inst_check.m"
  }
#line 884 "inst_check.m"
}

#line 111 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0(
#line 111 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 111 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 111 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 111 "inst_check.m"
{
#line 111 "inst_check.m"
  {
#line 111 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 111 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar1_4 = check_hlds__inst_check__HeadVar__2_2;
#line 111 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar2_5 = check_hlds__inst_check__HeadVar__3_3;

#line 111 "inst_check.m"
    {
#line 111 "inst_check.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_2[0], check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_check__Cast_HeadVar2_5)));
#line 111 "inst_check.m"
      return;
    }
#line 111 "inst_check.m"
  }
#line 111 "inst_check.m"
}

#line 111 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0(
#line 111 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 111 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 111 "inst_check.m"
{
#line 111 "inst_check.m"
  {
#line 111 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 111 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar1_3 = check_hlds__inst_check__HeadVar__1_1;
#line 111 "inst_check.m"
    MR_Word check_hlds__inst_check__Cast_HeadVar2_4 = check_hlds__inst_check__HeadVar__2_2;

#line 111 "inst_check.m"
    {
#line 111 "inst_check.m"
      return check_hlds__inst_check__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_check_scalar_common_2[0], ((MR_Box) (check_hlds__inst_check__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_check__Cast_HeadVar2_4)));
    }
#line 111 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 111 "inst_check.m"
  }
#line 111 "inst_check.m"
}

#line 105 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0(
#line 105 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 105 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 105 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 105 "inst_check.m"
{
#line 105 "inst_check.m"
  {
#line 105 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 105 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 105 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 105 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 105 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 3253 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 105 "inst_check.m"
    else
#line 105 "inst_check.m"
      {
#line 105 "inst_check.m"
        MR_String check_hlds__inst_check__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 105 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 105 "inst_check.m"
        MR_String check_hlds__inst_check__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 105 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 105 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8;

#line 105 "inst_check.m"
        {
#line 105 "inst_check.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_check__V_8_8, check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_6_6);
        }
#line 3275 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_8_8 == (MR_Integer) 0);
#line 105 "inst_check.m"
        check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 105 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 105 "inst_check.m"
          *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_8_8;
#line 105 "inst_check.m"
        else
#line 105 "inst_check.m"
          {
#line 105 "inst_check.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_5_5, check_hlds__inst_check__V_7_7);
#line 105 "inst_check.m"
            return;
          }
#line 105 "inst_check.m"
      }
#line 105 "inst_check.m"
  }
#line 105 "inst_check.m"
}

#line 105 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0(
#line 105 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 105 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 105 "inst_check.m"
{
#line 105 "inst_check.m"
  {
#line 105 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 105 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_7 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 105 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_8 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 105 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_7 == check_hlds__inst_check__CastY_8);
#line 105 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 105 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 105 "inst_check.m"
    else
#line 105 "inst_check.m"
      {
#line 105 "inst_check.m"
        MR_String check_hlds__inst_check__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 105 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 105 "inst_check.m"
        MR_String check_hlds__inst_check__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 105 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));

#line 3336 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_5_5) == 0);
#line 105 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 3340 "check_hlds.inst_check.c"
          check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_4_4 == check_hlds__inst_check__V_6_6);
#line 105 "inst_check.m"
      }
#line 105 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 105 "inst_check.m"
  }
#line 105 "inst_check.m"
}

#line 395 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0(
#line 395 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 395 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 395 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 395 "inst_check.m"
{
#line 395 "inst_check.m"
  {
#line 395 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 395 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_25 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 395 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_26 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 395 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_25 == check_hlds__inst_check__CastY_26);
#line 395 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 3375 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 395 "inst_check.m"
    else
#line 395 "inst_check.m"
#line 395 "inst_check.m"
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) {
#line 395 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
        case (MR_Integer) 0:
#line 395 "inst_check.m"
#line 395 "inst_check.m"
          switch (MR_unmkbody(check_hlds__inst_check__HeadVar__2_2)) {
#line 395 "inst_check.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
            case (MR_Integer) 0:
#line 395 "inst_check.m"
#line 395 "inst_check.m"
              switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 395 "inst_check.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
                case (MR_Integer) 0:
#line 395 "inst_check.m"
#line 395 "inst_check.m"
                  switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
#line 395 "inst_check.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
                    case (MR_Integer) 0:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                    case (MR_Integer) 1:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                    case (MR_Integer) 2:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                    case (MR_Integer) 3:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                  }
#line 395 "inst_check.m"
                  break;
#line 395 "inst_check.m"
                case (MR_Integer) 1:
#line 3435 "check_hlds.inst_check.c"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 395 "inst_check.m"
                  break;
#line 395 "inst_check.m"
              }
#line 395 "inst_check.m"
              break;
#line 395 "inst_check.m"
            case (MR_Integer) 1:
#line 395 "inst_check.m"
#line 395 "inst_check.m"
              switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 395 "inst_check.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
                case (MR_Integer) 0:
#line 395 "inst_check.m"
#line 395 "inst_check.m"
                  switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
#line 395 "inst_check.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
                    case (MR_Integer) 0:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                    case (MR_Integer) 1:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                    case (MR_Integer) 2:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                    case (MR_Integer) 3:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                  }
#line 395 "inst_check.m"
                  break;
#line 395 "inst_check.m"
                case (MR_Integer) 1:
#line 3487 "check_hlds.inst_check.c"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 395 "inst_check.m"
                  break;
#line 395 "inst_check.m"
              }
#line 395 "inst_check.m"
              break;
#line 395 "inst_check.m"
            case (MR_Integer) 2:
#line 395 "inst_check.m"
#line 395 "inst_check.m"
              switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 395 "inst_check.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
                case (MR_Integer) 0:
#line 395 "inst_check.m"
#line 395 "inst_check.m"
                  switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
#line 395 "inst_check.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
                    case (MR_Integer) 0:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                    case (MR_Integer) 1:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                    case (MR_Integer) 2:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                    case (MR_Integer) 3:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                  }
#line 395 "inst_check.m"
                  break;
#line 395 "inst_check.m"
                case (MR_Integer) 1:
#line 3539 "check_hlds.inst_check.c"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 395 "inst_check.m"
                  break;
#line 395 "inst_check.m"
              }
#line 395 "inst_check.m"
              break;
#line 395 "inst_check.m"
            case (MR_Integer) 3:
#line 395 "inst_check.m"
#line 395 "inst_check.m"
              switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 395 "inst_check.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
                case (MR_Integer) 0:
#line 395 "inst_check.m"
#line 395 "inst_check.m"
                  switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
#line 395 "inst_check.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
                    case (MR_Integer) 0:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                    case (MR_Integer) 1:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                    case (MR_Integer) 2:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                    case (MR_Integer) 3:
#line 395 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 395 "inst_check.m"
                      break;
#line 395 "inst_check.m"
                  }
#line 395 "inst_check.m"
                  break;
#line 395 "inst_check.m"
                case (MR_Integer) 1:
#line 3591 "check_hlds.inst_check.c"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 395 "inst_check.m"
                  break;
#line 395 "inst_check.m"
              }
#line 395 "inst_check.m"
              break;
#line 395 "inst_check.m"
          }
#line 395 "inst_check.m"
          break;
#line 395 "inst_check.m"
        case (MR_Integer) 1:
#line 395 "inst_check.m"
          {
#line 395 "inst_check.m"
            MR_Word check_hlds__inst_check__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "inst_check.m"
            MR_Word check_hlds__inst_check__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 395 "inst_check.m"
#line 395 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 395 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
              case (MR_Integer) 0:
#line 395 "inst_check.m"
#line 395 "inst_check.m"
                switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
#line 395 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
                  case (MR_Integer) 0:
#line 3626 "check_hlds.inst_check.c"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 395 "inst_check.m"
                    break;
#line 395 "inst_check.m"
                  case (MR_Integer) 1:
#line 3632 "check_hlds.inst_check.c"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 395 "inst_check.m"
                    break;
#line 395 "inst_check.m"
                  case (MR_Integer) 2:
#line 3638 "check_hlds.inst_check.c"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 395 "inst_check.m"
                    break;
#line 395 "inst_check.m"
                  case (MR_Integer) 3:
#line 3644 "check_hlds.inst_check.c"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 395 "inst_check.m"
                    break;
#line 395 "inst_check.m"
                }
#line 395 "inst_check.m"
                break;
#line 395 "inst_check.m"
              case (MR_Integer) 1:
#line 395 "inst_check.m"
                {
#line 395 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 395 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 395 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_8_8;

#line 395 "inst_check.m"
                  {
#line 395 "inst_check.m"
                    parse_tree__prog_data____Compare____type_ctor_0_0(&check_hlds__inst_check__V_8_8, check_hlds__inst_check__V_30_30, check_hlds__inst_check__V_6_6);
                  }
#line 3668 "check_hlds.inst_check.c"
                  check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_8_8 == (MR_Integer) 0);
#line 395 "inst_check.m"
                  check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 395 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 395 "inst_check.m"
                    *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_8_8;
#line 395 "inst_check.m"
                  else
#line 395 "inst_check.m"
                    {
#line 395 "inst_check.m"
                      hlds__hlds_data____Compare____hlds_type_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_29_29, check_hlds__inst_check__V_7_7);
#line 395 "inst_check.m"
                      return;
                    }
#line 395 "inst_check.m"
                }
#line 395 "inst_check.m"
                break;
#line 395 "inst_check.m"
            }
#line 395 "inst_check.m"
          }
#line 395 "inst_check.m"
          break;
#line 395 "inst_check.m"
      }
#line 395 "inst_check.m"
  }
#line 395 "inst_check.m"
}

#line 395 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0(
#line 395 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 395 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 395 "inst_check.m"
{
#line 395 "inst_check.m"
  {
#line 395 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 395 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_15 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 395 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_16 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 395 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_15 == check_hlds__inst_check__CastY_16);
#line 395 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 395 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 395 "inst_check.m"
    else
#line 395 "inst_check.m"
#line 395 "inst_check.m"
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 395 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
        case (MR_Integer) 0:
#line 395 "inst_check.m"
#line 395 "inst_check.m"
          switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
#line 395 "inst_check.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 395 "inst_check.m"
            case (MR_Integer) 0:
#line 395 "inst_check.m"
              {
#line 395 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastX_7 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 395 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastY_8 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 395 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_8 == check_hlds__inst_check__CastX_7);
#line 395 "inst_check.m"
              }
#line 395 "inst_check.m"
              break;
#line 395 "inst_check.m"
            case (MR_Integer) 1:
#line 395 "inst_check.m"
              {
#line 395 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 395 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 395 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_10 == check_hlds__inst_check__CastX_9);
#line 395 "inst_check.m"
              }
#line 395 "inst_check.m"
              break;
#line 395 "inst_check.m"
            case (MR_Integer) 2:
#line 395 "inst_check.m"
              {
#line 395 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastX_11 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 395 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastY_12 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 395 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_12 == check_hlds__inst_check__CastX_11);
#line 395 "inst_check.m"
              }
#line 395 "inst_check.m"
              break;
#line 395 "inst_check.m"
            case (MR_Integer) 3:
#line 395 "inst_check.m"
              {
#line 395 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastX_13 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 395 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastY_14 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 395 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_14 == check_hlds__inst_check__CastX_13);
#line 395 "inst_check.m"
              }
#line 395 "inst_check.m"
              break;
#line 395 "inst_check.m"
          }
#line 395 "inst_check.m"
          break;
#line 395 "inst_check.m"
        case (MR_Integer) 1:
#line 395 "inst_check.m"
          {
#line 395 "inst_check.m"
            MR_Word check_hlds__inst_check__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 395 "inst_check.m"
            MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 395 "inst_check.m"
            MR_Word check_hlds__inst_check__V_5_5;
#line 395 "inst_check.m"
            MR_Word check_hlds__inst_check__V_6_6;

#line 395 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 395 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 395 "inst_check.m"
              {
#line 395 "inst_check.m"
                check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 395 "inst_check.m"
                check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 3827 "check_hlds.inst_check.c"
                {
#line 3829 "check_hlds.inst_check.c"
                  check_hlds__inst_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_5_5);
                }
#line 395 "inst_check.m"
                if (check_hlds__inst_check__succeeded)
#line 3834 "check_hlds.inst_check.c"
                  {
#line 3836 "check_hlds.inst_check.c"
                    return check_hlds__inst_check__succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_6_6);
                  }
#line 395 "inst_check.m"
              }
#line 395 "inst_check.m"
          }
#line 395 "inst_check.m"
          break;
#line 395 "inst_check.m"
      }
#line 395 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 395 "inst_check.m"
  }
#line 395 "inst_check.m"
}

#line 1162 "inst_check.m"
static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
#line 1162 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3)
#line 1162 "inst_check.m"
{
#line 1166 "inst_check.m"
  {
#line 1166 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 1166 "inst_check.m"
    MR_String check_hlds__inst_check__Str_4;

#line 1166 "inst_check.m"
#line 1166 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3)) {
#line 1166 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1166 "inst_check.m"
      case (MR_Integer) 0:
#line 1166 "inst_check.m"
        {
#line 1166 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtor_5;
#line 1166 "inst_check.m"
          MR_Word check_hlds__inst_check__V_13_13 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3), (MR_Integer) 0);
#line 1166 "inst_check.m"
          MR_Word check_hlds__inst_check__V_6_6;

#line 1166 "inst_check.m"
          check_hlds__inst_check__TypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_13_13, (MR_Integer) 0)));
#line 1166 "inst_check.m"
          check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_13_13, (MR_Integer) 1)));
#line 1167 "inst_check.m"
          {
#line 1167 "inst_check.m"
            return check_hlds__inst_check__Str_4 = parse_tree__prog_out__type_ctor_to_string_1_f_0(check_hlds__inst_check__TypeCtor_5);
          }
#line 1166 "inst_check.m"
        }
#line 1166 "inst_check.m"
        break;
#line 1166 "inst_check.m"
      case (MR_Integer) 1:
#line 1169 "inst_check.m"
        {
#line 1169 "inst_check.m"
          MR_Word check_hlds__inst_check__BuiltinType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

#line 1173 "inst_check.m"
          check_hlds__inst_check__Str_4 = ((&check_hlds__inst_check_vector_common_8[0 + check_hlds__inst_check__BuiltinType_7]))->check_hlds__inst_check__vector_common_type_8_0__vct_8_f_0;
#line 1169 "inst_check.m"
        }
#line 1166 "inst_check.m"
        break;
#line 1166 "inst_check.m"
      case (MR_Integer) 2:
#line 1184 "inst_check.m"
        {
#line 1184 "inst_check.m"
          MR_Integer check_hlds__inst_check__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));
#line 1184 "inst_check.m"
          MR_String check_hlds__inst_check__V_14_14;

#line 1185 "inst_check.m"
          {
#line 1185 "inst_check.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_3[13], check_hlds__inst_check__Arity_8, &check_hlds__inst_check__V_14_14);
          }
#line 1185 "inst_check.m"
          {
#line 1185 "inst_check.m"
            return check_hlds__inst_check__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", check_hlds__inst_check__V_14_14);
          }
#line 1184 "inst_check.m"
        }
#line 1166 "inst_check.m"
        break;
#line 1166 "inst_check.m"
    }
#line 1166 "inst_check.m"
    return check_hlds__inst_check__Str_4;
#line 1166 "inst_check.m"
  }
#line 1162 "inst_check.m"
}

#line 1150 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(
#line 1150 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 1150 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 1150 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
#line 1150 "inst_check.m"
{
#line 1153 "inst_check.m"
  {
#line 1153 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 1153 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1153 "inst_check.m"
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1153 "inst_check.m"
    else
#line 1154 "inst_check.m"
      {
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorInfo_36_36;
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatch_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatches_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__TailPieces_9;
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_11;
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__BoundInstPieces_12;
#line 1154 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_13_13 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__V_15_15;
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__V_18_18;
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__V_19_19;
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__V_20_20;
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__V_23_23;
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__V_24_24;
#line 1154 "inst_check.m"
        MR_String check_hlds__inst_check__V_25_25;
#line 1154 "inst_check.m"
        MR_Word check_hlds__inst_check__V_35_35;
#line 1156 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_10_10;

#line 1155 "inst_check.m"
        {
#line 1155 "inst_check.m"
          check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(check_hlds__inst_check__Mismatches_6, check_hlds__inst_check__V_13_13, &check_hlds__inst_check__TailPieces_9);
        }
#line 1156 "inst_check.m"
        check_hlds__inst_check__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 0)));
#line 1156 "inst_check.m"
        check_hlds__inst_check__TypeDefnOrBuiltin_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 1)));
#line 1156 "inst_check.m"
        check_hlds__inst_check__BoundInstPieces_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 2)));
#line 4010 "check_hlds.inst_check.c"
        check_hlds__inst_check__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1157 "inst_check.m"
        {
#line 1157 "inst_check.m"
          check_hlds__inst_check__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1157 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 1) = ((MR_Box) (check_hlds__inst_check__HeadVar__2_2));
#line 1157 "inst_check.m"
        }
#line 1158 "inst_check.m"
        {
#line 1158 "inst_check.m"
          check_hlds__inst_check__V_25_25 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__TypeDefnOrBuiltin_11);
        }
#line 1158 "inst_check.m"
        {
#line 1158 "inst_check.m"
          check_hlds__inst_check__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "inst_check.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_24_24, 0) = ((MR_Box) (check_hlds__inst_check__V_25_25));
#line 1158 "inst_check.m"
        }
#line 1158 "inst_check.m"
        {
#line 1158 "inst_check.m"
          check_hlds__inst_check__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_23_23, 0) = ((MR_Box) (check_hlds__inst_check__V_24_24));
#line 1158 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[27])));
#line 1158 "inst_check.m"
        }
#line 1157 "inst_check.m"
        {
#line 1157 "inst_check.m"
          check_hlds__inst_check__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[47])));
#line 1157 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_20_20, 1) = ((MR_Box) (check_hlds__inst_check__V_23_23));
#line 1157 "inst_check.m"
        }
#line 1157 "inst_check.m"
        {
#line 1157 "inst_check.m"
          check_hlds__inst_check__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 0) = ((MR_Box) (check_hlds__inst_check__V_19_19));
#line 1157 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 1) = ((MR_Box) (check_hlds__inst_check__V_20_20));
#line 1157 "inst_check.m"
        }
#line 1157 "inst_check.m"
        {
#line 1157 "inst_check.m"
          check_hlds__inst_check__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[46])));
#line 1157 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_15_15, 1) = ((MR_Box) (check_hlds__inst_check__V_18_18));
#line 1157 "inst_check.m"
        }
#line 1160 "inst_check.m"
        {
#line 1160 "inst_check.m"
          check_hlds__inst_check__V_35_35 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_36_36, check_hlds__inst_check__BoundInstPieces_12, check_hlds__inst_check__TailPieces_9);
        }
#line 1160 "inst_check.m"
        {
#line 1160 "inst_check.m"
          *check_hlds__inst_check__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_36_36, check_hlds__inst_check__V_15_15, check_hlds__inst_check__V_35_35);
        }
#line 1154 "inst_check.m"
      }
#line 1153 "inst_check.m"
  }
#line 1150 "inst_check.m"
}

#line 1127 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
#line 1127 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 1127 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 1127 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
#line 1127 "inst_check.m"
{
#line 1130 "inst_check.m"
  {
#line 1130 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 1130 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "inst_check.m"
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1130 "inst_check.m"
    else
#line 1131 "inst_check.m"
      {
#line 1131 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatch_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 1131 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatches_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 1131 "inst_check.m"
        MR_Integer check_hlds__inst_check__NumMismatches_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 0)));
#line 1132 "inst_check.m"
        MR_Word check_hlds__inst_check__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 1)));
#line 1132 "inst_check.m"
        MR_Word check_hlds__inst_check__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 2)));

#line 1133 "inst_check.m"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__HeadVar__1_1 == check_hlds__inst_check__NumMismatches_9);
#line 1136 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 1134 "inst_check.m"
          {
#line 1134 "inst_check.m"
            MR_Word check_hlds__inst_check__TakenTail_12;

#line 1134 "inst_check.m"
            {
#line 1134 "inst_check.m"
              check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Mismatches_7, &check_hlds__inst_check__TakenTail_12);
            }
#line 1135 "inst_check.m"
            {
#line 1135 "inst_check.m"
              MR_Word base;
#line 1135 "inst_check.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "inst_check.m"
              *check_hlds__inst_check__HeadVar__3_3 = base;
#line 1135 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Mismatch_6));
#line 1135 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__TakenTail_12));
#line 1135 "inst_check.m"
            }
#line 1134 "inst_check.m"
          }
#line 1136 "inst_check.m"
        else
#line 1137 "inst_check.m"
          *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1131 "inst_check.m"
      }
#line 1130 "inst_check.m"
  }
#line 1127 "inst_check.m"
}

#line 1106 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_mismatch_pieces_2_p_0(
#line 1106 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 1106 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__2_2)
#line 1106 "inst_check.m"
{
#line 1109 "inst_check.m"
  {
#line 1109 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 1109 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1109 "inst_check.m"
      *check_hlds__inst_check__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1109 "inst_check.m"
    else
#line 1110 "inst_check.m"
      {
#line 1110 "inst_check.m"
        MR_Word check_hlds__inst_check__FirstMismatch_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 1110 "inst_check.m"
        MR_Word check_hlds__inst_check__LaterMismatches_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 1110 "inst_check.m"
        MR_Integer check_hlds__inst_check__FirstNumMismatches_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 0)));
#line 1110 "inst_check.m"
        MR_Word check_hlds__inst_check__TakenLaterMismatches_9;
#line 1111 "inst_check.m"
        MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 1)));
#line 1111 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 2)));

#line 1112 "inst_check.m"
        {
#line 1112 "inst_check.m"
          check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(check_hlds__inst_check__FirstNumMismatches_6, check_hlds__inst_check__LaterMismatches_4, &check_hlds__inst_check__TakenLaterMismatches_9);
        }
#line 1117 "inst_check.m"
        if ((check_hlds__inst_check__TakenLaterMismatches_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1143 "inst_check.m"
          {
#line 1143 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 1)));
#line 1143 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInstPieces_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 2)));
#line 1143 "inst_check.m"
            MR_Word check_hlds__inst_check__V_34_34;
#line 1143 "inst_check.m"
            MR_Word check_hlds__inst_check__V_37_37;
#line 1143 "inst_check.m"
            MR_Word check_hlds__inst_check__V_38_38;
#line 1143 "inst_check.m"
            MR_String check_hlds__inst_check__V_39_39;
#line 1144 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 0)));

#line 1146 "inst_check.m"
            {
#line 1146 "inst_check.m"
              check_hlds__inst_check__V_39_39 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__TypeDefnOrBuiltin_32);
            }
#line 1146 "inst_check.m"
            {
#line 1146 "inst_check.m"
              check_hlds__inst_check__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "inst_check.m"
              MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_38_38, 0) = ((MR_Box) (check_hlds__inst_check__V_39_39));
#line 1146 "inst_check.m"
            }
#line 1146 "inst_check.m"
            {
#line 1146 "inst_check.m"
              check_hlds__inst_check__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_37_37, 0) = ((MR_Box) (check_hlds__inst_check__V_38_38));
#line 1146 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[27])));
#line 1146 "inst_check.m"
            }
#line 1145 "inst_check.m"
            {
#line 1145 "inst_check.m"
              check_hlds__inst_check__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[44])));
#line 1145 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_34_34, 1) = ((MR_Box) (check_hlds__inst_check__V_37_37));
#line 1145 "inst_check.m"
            }
#line 1148 "inst_check.m"
            {
#line 1148 "inst_check.m"
              *check_hlds__inst_check__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__V_34_34, check_hlds__inst_check__BoundInstPieces_33);
            }
#line 1143 "inst_check.m"
          }
#line 1117 "inst_check.m"
        else
#line 1118 "inst_check.m"
          {
#line 1118 "inst_check.m"
            MR_Word check_hlds__inst_check__RelevantMismatches_12;
#line 1118 "inst_check.m"
            MR_Integer check_hlds__inst_check__NumRelevantMismatches_13;
#line 1118 "inst_check.m"
            MR_Word check_hlds__inst_check__HeadPieces_14;
#line 1118 "inst_check.m"
            MR_Word check_hlds__inst_check__TailPieces_15;
#line 1118 "inst_check.m"
            MR_Word check_hlds__inst_check__V_18_18;
#line 1118 "inst_check.m"
            MR_Word check_hlds__inst_check__V_19_19;

#line 1119 "inst_check.m"
            {
#line 1119 "inst_check.m"
              check_hlds__inst_check__RelevantMismatches_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__RelevantMismatches_12, 0) = ((MR_Box) (check_hlds__inst_check__FirstMismatch_3));
#line 1119 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__RelevantMismatches_12, 1) = ((MR_Box) (check_hlds__inst_check__TakenLaterMismatches_9));
#line 1119 "inst_check.m"
            }
#line 1120 "inst_check.m"
            {
#line 1120 "inst_check.m"
              mercury__list__length_2_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0, check_hlds__inst_check__RelevantMismatches_12, &check_hlds__inst_check__NumRelevantMismatches_13);
            }
#line 1121 "inst_check.m"
            {
#line 1121 "inst_check.m"
              check_hlds__inst_check__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "inst_check.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1121 "inst_check.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 1) = ((MR_Box) (check_hlds__inst_check__NumRelevantMismatches_13));
#line 1121 "inst_check.m"
            }
#line 1121 "inst_check.m"
            {
#line 1121 "inst_check.m"
              check_hlds__inst_check__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 0) = ((MR_Box) (check_hlds__inst_check__V_19_19));
#line 1121 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[24])));
#line 1121 "inst_check.m"
            }
#line 1121 "inst_check.m"
            {
#line 1121 "inst_check.m"
              check_hlds__inst_check__HeadPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[45])));
#line 1121 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadPieces_14, 1) = ((MR_Box) (check_hlds__inst_check__V_18_18));
#line 1121 "inst_check.m"
            }
#line 1123 "inst_check.m"
            {
#line 1123 "inst_check.m"
              check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(check_hlds__inst_check__RelevantMismatches_12, (MR_Integer) 1, &check_hlds__inst_check__TailPieces_15);
            }
#line 1124 "inst_check.m"
            {
#line 1124 "inst_check.m"
              *check_hlds__inst_check__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__HeadPieces_14, check_hlds__inst_check__TailPieces_15);
            }
#line 1118 "inst_check.m"
          }
#line 1110 "inst_check.m"
      }
#line 1109 "inst_check.m"
  }
#line 1106 "inst_check.m"
}

#line 1090 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_mismatch_6_p_0(
#line 1090 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_7,
#line 1090 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInst_8,
#line 1090 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16,
#line 1090 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17,
#line 1090 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18,
#line 1090 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19)
#line 1090 "inst_check.m"
{
#line 1093 "inst_check.m"
  {
#line 1093 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 1093 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_46_46;
#line 1093 "inst_check.m"
    MR_Word check_hlds__inst_check__ConsId_11;
#line 1093 "inst_check.m"
    MR_Word check_hlds__inst_check__SubInsts_12;
#line 1093 "inst_check.m"
    MR_String check_hlds__inst_check__InFunctorStr_13;
#line 1093 "inst_check.m"
    MR_String check_hlds__inst_check__ActualStr_14;
#line 1093 "inst_check.m"
    MR_Word check_hlds__inst_check__Pieces_15;
#line 1093 "inst_check.m"
    MR_String check_hlds__inst_check__V_29_29;
#line 1093 "inst_check.m"
    MR_Integer check_hlds__inst_check__V_33_33;
#line 1093 "inst_check.m"
    MR_Word check_hlds__inst_check__V_35_35;
#line 1093 "inst_check.m"
    MR_Word check_hlds__inst_check__V_36_36;
#line 1093 "inst_check.m"
    MR_Word check_hlds__inst_check__V_38_38;
#line 1093 "inst_check.m"
    MR_Word check_hlds__inst_check__V_39_39;
#line 1093 "inst_check.m"
    MR_Word check_hlds__inst_check__V_44_44;
#line 1093 "inst_check.m"
    MR_String check_hlds__inst_check__V_48_48;
#line 1093 "inst_check.m"
    MR_Word check_hlds__inst_check__V_54_54;
#line 1093 "inst_check.m"
    MR_String check_hlds__inst_check__V_55_55;
#line 1093 "inst_check.m"
    MR_String check_hlds__inst_check__V_58_58;
#line 1093 "inst_check.m"
    MR_String check_hlds__inst_check__V_65_65;
#line 1093 "inst_check.m"
    MR_String check_hlds__inst_check__V_67_67;
#line 1093 "inst_check.m"
    MR_String check_hlds__inst_check__V_68_68;
#line 1093 "inst_check.m"
    MR_String check_hlds__inst_check__V_75_75;

#line 1094 "inst_check.m"
    *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17 = (check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16 + (MR_Integer) 1);
#line 1095 "inst_check.m"
    check_hlds__inst_check__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_8, (MR_Integer) 0)));
#line 1095 "inst_check.m"
    check_hlds__inst_check__SubInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_8, (MR_Integer) 1)));
#line 4418 "check_hlds.inst_check.c"
    check_hlds__inst_check__V_54_54 = (MR_Word) &check_hlds__inst_check_scalar_common_3[13];
#line 1096 "inst_check.m"
    {
#line 1096 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_54_54, check_hlds__inst_check__CurNum_7, &check_hlds__inst_check__V_48_48);
    }
#line 1096 "inst_check.m"
    {
#line 1096 "inst_check.m"
      check_hlds__inst_check__V_55_55 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_48_48, (MR_String) ":");
    }
#line 1096 "inst_check.m"
    {
#line 1096 "inst_check.m"
      check_hlds__inst_check__InFunctorStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", check_hlds__inst_check__V_55_55);
    }
#line 1098 "inst_check.m"
    {
#line 1098 "inst_check.m"
      check_hlds__inst_check__V_29_29 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 1, check_hlds__inst_check__ConsId_11);
    }
#line 1099 "inst_check.m"
    {
#line 1099 "inst_check.m"
      check_hlds__inst_check__V_33_33 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_check__SubInsts_12);
    }
#line 1099 "inst_check.m"
    {
#line 1099 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_54_54, check_hlds__inst_check__V_33_33, &check_hlds__inst_check__V_58_58);
    }
#line 1097 "inst_check.m"
    {
#line 1097 "inst_check.m"
      check_hlds__inst_check__V_65_65 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_58_58, (MR_String) ".");
    }
#line 1097 "inst_check.m"
    {
#line 1097 "inst_check.m"
      check_hlds__inst_check__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "/", check_hlds__inst_check__V_65_65);
    }
#line 1098 "inst_check.m"
    {
#line 1098 "inst_check.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_54_54, check_hlds__inst_check__V_29_29, &check_hlds__inst_check__V_68_68);
    }
#line 1097 "inst_check.m"
    {
#line 1097 "inst_check.m"
      check_hlds__inst_check__V_75_75 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_68_68, check_hlds__inst_check__V_67_67);
    }
#line 1097 "inst_check.m"
    {
#line 1097 "inst_check.m"
      check_hlds__inst_check__ActualStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "function symbol is ", check_hlds__inst_check__V_75_75);
    }
#line 1101 "inst_check.m"
    {
#line 1101 "inst_check.m"
      check_hlds__inst_check__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1101 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_35_35, 1) = ((MR_Box) (check_hlds__inst_check__InFunctorStr_13));
#line 1101 "inst_check.m"
    }
#line 1101 "inst_check.m"
    {
#line 1101 "inst_check.m"
      check_hlds__inst_check__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1101 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_39_39, 1) = ((MR_Box) (check_hlds__inst_check__ActualStr_14));
#line 1101 "inst_check.m"
    }
#line 1101 "inst_check.m"
    {
#line 1101 "inst_check.m"
      check_hlds__inst_check__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_38_38, 0) = ((MR_Box) (check_hlds__inst_check__V_39_39));
#line 1101 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[6])));
#line 1101 "inst_check.m"
    }
#line 1101 "inst_check.m"
    {
#line 1101 "inst_check.m"
      check_hlds__inst_check__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1101 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_36_36, 1) = ((MR_Box) (check_hlds__inst_check__V_38_38));
#line 1101 "inst_check.m"
    }
#line 1101 "inst_check.m"
    {
#line 1101 "inst_check.m"
      check_hlds__inst_check__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_15, 0) = ((MR_Box) (check_hlds__inst_check__V_35_35));
#line 1101 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_15, 1) = ((MR_Box) (check_hlds__inst_check__V_36_36));
#line 1101 "inst_check.m"
    }
#line 4525 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1102 "inst_check.m"
    {
#line 1102 "inst_check.m"
      check_hlds__inst_check__V_44_44 = mercury__cord__from_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_46_46, check_hlds__inst_check__Pieces_15);
    }
#line 1102 "inst_check.m"
    {
#line 1102 "inst_check.m"
      *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19 = mercury__cord__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_46_46, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18, check_hlds__inst_check__V_44_44);
    }
#line 1093 "inst_check.m"
  }
#line 1090 "inst_check.m"
}

#line 1079 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0_1(
#line 1079 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 1079 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1079 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 1079 "inst_check.m"
{
#line 1079 "inst_check.m"
  {
#line 1079 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 1079 "inst_check.m"
    MR_String check_hlds__inst_check__conv0_HeadVar__2_2;

#line 1079 "inst_check.m"
    {
#line 1079 "inst_check.m"
      mercury__string__int_to_string_2_p_0(((MR_Integer) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_HeadVar__2_2);
    }
#line 1079 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__2_2));
#line 1079 "inst_check.m"
  }
#line 1079 "inst_check.m"
}

#line 1071 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0(
#line 1071 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_9,
#line 1071 "inst_check.m"
  MR_String check_hlds__inst_check__FunctorName_10,
#line 1071 "inst_check.m"
  MR_Integer check_hlds__inst_check__ActualArity_11,
#line 1071 "inst_check.m"
  MR_Word check_hlds__inst_check__ExpectedAritiesSet_12,
#line 1071 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22,
#line 1071 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23,
#line 1071 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24,
#line 1071 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25)
#line 1071 "inst_check.m"
{
#line 1076 "inst_check.m"
  {
#line 1076 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_60_60;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_62_62;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__InFunctorStr_15;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__ExpectedArities_16;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__ExpectedArityStrs_17;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__ExpectedArityOrStr_18;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__ActualStr_19;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__ExpectedStr_20;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__Pieces_21;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__V_44_44;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__V_45_45;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__V_47_47;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__V_48_48;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__V_49_49;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__V_51_51;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__V_52_52;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__V_57_57;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__V_64_64;
#line 1076 "inst_check.m"
    MR_Word check_hlds__inst_check__V_70_70;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__V_71_71;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__V_74_74;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__V_81_81;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__V_83_83;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__V_84_84;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__V_91_91;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__V_94_94;
#line 1076 "inst_check.m"
    MR_String check_hlds__inst_check__V_101_101;

#line 1077 "inst_check.m"
    *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23 = (check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22 + (MR_Integer) 1);
#line 4654 "check_hlds.inst_check.c"
    check_hlds__inst_check__V_70_70 = (MR_Word) &check_hlds__inst_check_scalar_common_3[13];
#line 1078 "inst_check.m"
    {
#line 1078 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__CurNum_9, &check_hlds__inst_check__V_64_64);
    }
#line 1078 "inst_check.m"
    {
#line 1078 "inst_check.m"
      check_hlds__inst_check__V_71_71 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_64_64, (MR_String) ":");
    }
#line 1078 "inst_check.m"
    {
#line 1078 "inst_check.m"
      check_hlds__inst_check__InFunctorStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", check_hlds__inst_check__V_71_71);
    }
#line 4671 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1082 "inst_check.m"
    {
#line 1082 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__ActualArity_11, &check_hlds__inst_check__V_74_74);
    }
#line 1081 "inst_check.m"
    {
#line 1081 "inst_check.m"
      check_hlds__inst_check__V_81_81 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_74_74, (MR_String) ",");
    }
#line 1081 "inst_check.m"
    {
#line 1081 "inst_check.m"
      check_hlds__inst_check__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) " has arity ", check_hlds__inst_check__V_81_81);
    }
#line 1082 "inst_check.m"
    {
#line 1082 "inst_check.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__FunctorName_10, &check_hlds__inst_check__V_84_84);
    }
#line 1081 "inst_check.m"
    {
#line 1081 "inst_check.m"
      check_hlds__inst_check__V_91_91 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_84_84, check_hlds__inst_check__V_83_83);
    }
#line 1081 "inst_check.m"
    {
#line 1081 "inst_check.m"
      check_hlds__inst_check__ActualStr_19 = mercury__string__f_43_43_2_f_0((MR_String) "function symbol ", check_hlds__inst_check__V_91_91);
    }
#line 1085 "inst_check.m"
    {
#line 1085 "inst_check.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_60_60, check_hlds__inst_check__ExpectedAritiesSet_12, &check_hlds__inst_check__ExpectedArities_16);
    }
#line 1079 "inst_check.m"
    {
#line 1079 "inst_check.m"
      mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[4], check_hlds__inst_check__ExpectedArities_16, &check_hlds__inst_check__ExpectedArityStrs_17);
    }
#line 1080 "inst_check.m"
    {
#line 1080 "inst_check.m"
      check_hlds__inst_check__ExpectedArityOrStr_18 = mercury__string__join_list_2_f_0((MR_String) "or", check_hlds__inst_check__ExpectedArityStrs_17);
    }
#line 1084 "inst_check.m"
    {
#line 1084 "inst_check.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__ExpectedArityOrStr_18, &check_hlds__inst_check__V_94_94);
    }
#line 1083 "inst_check.m"
    {
#line 1083 "inst_check.m"
      check_hlds__inst_check__V_101_101 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_94_94, (MR_String) ".");
    }
#line 1083 "inst_check.m"
    {
#line 1083 "inst_check.m"
      check_hlds__inst_check__ExpectedStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "expected arity was ", check_hlds__inst_check__V_101_101);
    }
#line 1086 "inst_check.m"
    {
#line 1086 "inst_check.m"
      check_hlds__inst_check__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1086 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_44_44, 1) = ((MR_Box) (check_hlds__inst_check__InFunctorStr_15));
#line 1086 "inst_check.m"
    }
#line 1086 "inst_check.m"
    {
#line 1086 "inst_check.m"
      check_hlds__inst_check__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1086 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_48_48, 1) = ((MR_Box) (check_hlds__inst_check__ActualStr_19));
#line 1086 "inst_check.m"
    }
#line 1087 "inst_check.m"
    {
#line 1087 "inst_check.m"
      check_hlds__inst_check__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 1) = ((MR_Box) (check_hlds__inst_check__ExpectedStr_20));
#line 1087 "inst_check.m"
    }
#line 1087 "inst_check.m"
    {
#line 1087 "inst_check.m"
      check_hlds__inst_check__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 0) = ((MR_Box) (check_hlds__inst_check__V_52_52));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[6])));
#line 1087 "inst_check.m"
    }
#line 1086 "inst_check.m"
    {
#line 1086 "inst_check.m"
      check_hlds__inst_check__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1086 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_49_49, 1) = ((MR_Box) (check_hlds__inst_check__V_51_51));
#line 1086 "inst_check.m"
    }
#line 1086 "inst_check.m"
    {
#line 1086 "inst_check.m"
      check_hlds__inst_check__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_47_47, 0) = ((MR_Box) (check_hlds__inst_check__V_48_48));
#line 1086 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_47_47, 1) = ((MR_Box) (check_hlds__inst_check__V_49_49));
#line 1086 "inst_check.m"
    }
#line 1086 "inst_check.m"
    {
#line 1086 "inst_check.m"
      check_hlds__inst_check__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1086 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_45_45, 1) = ((MR_Box) (check_hlds__inst_check__V_47_47));
#line 1086 "inst_check.m"
    }
#line 1086 "inst_check.m"
    {
#line 1086 "inst_check.m"
      check_hlds__inst_check__Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_21, 0) = ((MR_Box) (check_hlds__inst_check__V_44_44));
#line 1086 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_21, 1) = ((MR_Box) (check_hlds__inst_check__V_45_45));
#line 1086 "inst_check.m"
    }
#line 4813 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1088 "inst_check.m"
    {
#line 1088 "inst_check.m"
      check_hlds__inst_check__V_57_57 = mercury__cord__from_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_62_62, check_hlds__inst_check__Pieces_21);
    }
#line 1088 "inst_check.m"
    {
#line 1088 "inst_check.m"
      *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25 = mercury__cord__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_62_62, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24, check_hlds__inst_check__V_57_57);
    }
#line 1076 "inst_check.m"
  }
#line 1071 "inst_check.m"
}

#line 1048 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(
#line 1048 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 1048 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 1048 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 1048 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 1048 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 1048 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 1048 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
#line 1048 "inst_check.m"
{
#line 1052 "inst_check.m"
  while (MR_TRUE)
#line 1052 "inst_check.m"
    {
#line 1052 "inst_check.m"
      /* tailcall optimized into a loop */
#line 1052 "inst_check.m"
      {
#line 1052 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 1052 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1052 "inst_check.m"
          {
#line 1053 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1053 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1052 "inst_check.m"
          }
#line 1052 "inst_check.m"
        else
#line 1055 "inst_check.m"
          {
#line 1055 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 1055 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 1055 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
#line 1055 "inst_check.m"
            MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29;
#line 1055 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30;
#line 1055 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_33_33;
#line 1056 "inst_check.m"
            MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));
#line 1063 "inst_check.m"
            MR_Integer check_hlds__inst_check__ActualArity_24;

#line 1057 "inst_check.m"
            check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1057 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 1057 "inst_check.m"
              {
#line 1057 "inst_check.m"
                check_hlds__inst_check__ActualArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 1058 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__ActualArity_24 == check_hlds__inst_check__HeadVar__1_1);
#line 1060 "inst_check.m"
                if (check_hlds__inst_check__succeeded)
#line 1059 "inst_check.m"
                  {
#line 1059 "inst_check.m"
                    check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1059 "inst_check.m"
                    check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1059 "inst_check.m"
                  }
#line 1060 "inst_check.m"
                else
#line 1061 "inst_check.m"
                  {
#line 1061 "inst_check.m"
                    check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30);
                  }
#line 1057 "inst_check.m"
              }
#line 1057 "inst_check.m"
            else
#line 1064 "inst_check.m"
              {
#line 1064 "inst_check.m"
                check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30);
              }
#line 1066 "inst_check.m"
            check_hlds__inst_check__V_33_33 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 1066 "inst_check.m"
            /* direct tailcall eliminated */
#line 1066 "inst_check.m"
            {
#line 1066 "inst_check.m"
              MR_Integer check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__V_33_33;
#line 1066 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__3__tmp_copy_3 = check_hlds__inst_check__BoundInsts_19;
#line 1066 "inst_check.m"
              MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29;
#line 1066 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30;

#line 1066 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6;
#line 1066 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4;
#line 1066 "inst_check.m"
              check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__HeadVar__3__tmp_copy_3;
#line 1066 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 1066 "inst_check.m"
            }
#line 1066 "inst_check.m"
            continue;
#line 1055 "inst_check.m"
          }
#line 1052 "inst_check.m"
      }
#line 1052 "inst_check.m"
      break;
#line 1052 "inst_check.m"
    }
#line 1048 "inst_check.m"
}

#line 999 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(
#line 999 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 999 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 999 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 999 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 999 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 999 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 999 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
#line 999 "inst_check.m"
{
#line 1003 "inst_check.m"
  while (MR_TRUE)
#line 1003 "inst_check.m"
    {
#line 1003 "inst_check.m"
      /* tailcall optimized into a loop */
#line 1003 "inst_check.m"
      {
#line 1003 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 1003 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1003 "inst_check.m"
          {
#line 1004 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1004 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1003 "inst_check.m"
          }
#line 1003 "inst_check.m"
        else
#line 1006 "inst_check.m"
          {
#line 1006 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 1006 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 1006 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
#line 1006 "inst_check.m"
            MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43;
#line 1006 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44;
#line 1006 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_45_45;
#line 1007 "inst_check.m"
            MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));

#line 1015 "inst_check.m"
#line 1015 "inst_check.m"
            switch (check_hlds__inst_check__HeadVar__1_1) {
#line 1015 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1015 "inst_check.m"
              case (MR_Integer) 3:
#line 1026 "inst_check.m"
                {
#line 1024 "inst_check.m"
                  MR_Char check_hlds__inst_check__V_26_26;

#line 1024 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 1024 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 1024 "inst_check.m"
                    {
#line 1024 "inst_check.m"
                      check_hlds__inst_check__V_26_26 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 1025 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1025 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1024 "inst_check.m"
                    }
#line 1024 "inst_check.m"
                  else
#line 1032 "inst_check.m"
                    {
#line 1027 "inst_check.m"
                      MR_Word check_hlds__inst_check__SymName_27;
#line 1027 "inst_check.m"
                      MR_Integer check_hlds__inst_check__ConsArity_28;
#line 1027 "inst_check.m"
                      MR_Integer check_hlds__inst_check__V_37_37;
#line 1027 "inst_check.m"
                      MR_String check_hlds__inst_check__V_38_38;
#line 1027 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_29_29;

#line 1027 "inst_check.m"
                      check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1027 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 1027 "inst_check.m"
                        {
#line 1027 "inst_check.m"
                          check_hlds__inst_check__SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 1027 "inst_check.m"
                          check_hlds__inst_check__ConsArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 2)));
#line 1027 "inst_check.m"
                          check_hlds__inst_check__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 3)));
#line 1028 "inst_check.m"
                          {
#line 1028 "inst_check.m"
                            check_hlds__inst_check__V_38_38 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_27);
                          }
#line 1028 "inst_check.m"
                          {
#line 1028 "inst_check.m"
                            check_hlds__inst_check__V_37_37 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__V_38_38);
                          }
#line 1028 "inst_check.m"
                          check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_37_37 == (MR_Integer) 1);
#line 1027 "inst_check.m"
                          if (check_hlds__inst_check__succeeded)
#line 1029 "inst_check.m"
                            check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_28 == (MR_Integer) 0);
#line 1027 "inst_check.m"
                        }
#line 1032 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 1031 "inst_check.m"
                        {
#line 1031 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1031 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1031 "inst_check.m"
                        }
#line 1032 "inst_check.m"
                      else
#line 1033 "inst_check.m"
                        {
#line 1033 "inst_check.m"
                          check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                        }
#line 1032 "inst_check.m"
                    }
#line 1026 "inst_check.m"
                }
#line 1015 "inst_check.m"
                break;
#line 1015 "inst_check.m"
              case (MR_Integer) 1:
#line 1019 "inst_check.m"
                {
#line 1017 "inst_check.m"
                  MR_Float check_hlds__inst_check__V_25_25;

#line 1017 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1017 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 1017 "inst_check.m"
                    {
#line 1017 "inst_check.m"
                      check_hlds__inst_check__V_25_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 1018 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1018 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1017 "inst_check.m"
                    }
#line 1017 "inst_check.m"
                  else
#line 1020 "inst_check.m"
                    {
#line 1020 "inst_check.m"
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                    }
#line 1019 "inst_check.m"
                }
#line 1015 "inst_check.m"
                break;
#line 1015 "inst_check.m"
              case (MR_Integer) 0:
#line 1012 "inst_check.m"
                {
#line 1010 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_24_24;

#line 1010 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1010 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 1010 "inst_check.m"
                    {
#line 1010 "inst_check.m"
                      check_hlds__inst_check__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 1011 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1011 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1010 "inst_check.m"
                    }
#line 1010 "inst_check.m"
                  else
#line 1013 "inst_check.m"
                    {
#line 1013 "inst_check.m"
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                    }
#line 1012 "inst_check.m"
                }
#line 1015 "inst_check.m"
                break;
#line 1015 "inst_check.m"
              case (MR_Integer) 2:
#line 1039 "inst_check.m"
                {
#line 1037 "inst_check.m"
                  MR_String check_hlds__inst_check__V_30_30;

#line 1037 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1037 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 1037 "inst_check.m"
                    {
#line 1037 "inst_check.m"
                      check_hlds__inst_check__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 1038 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1038 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1037 "inst_check.m"
                    }
#line 1037 "inst_check.m"
                  else
#line 1040 "inst_check.m"
                    {
#line 1040 "inst_check.m"
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                    }
#line 1039 "inst_check.m"
                }
#line 1015 "inst_check.m"
                break;
#line 1015 "inst_check.m"
            }
#line 1043 "inst_check.m"
            check_hlds__inst_check__V_45_45 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 1043 "inst_check.m"
            /* direct tailcall eliminated */
#line 1043 "inst_check.m"
            {
#line 1043 "inst_check.m"
              MR_Integer check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__V_45_45;
#line 1043 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__3__tmp_copy_3 = check_hlds__inst_check__BoundInsts_19;
#line 1043 "inst_check.m"
              MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43;
#line 1043 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44;

#line 1043 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6;
#line 1043 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4;
#line 1043 "inst_check.m"
              check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__HeadVar__3__tmp_copy_3;
#line 1043 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 1043 "inst_check.m"
            }
#line 1043 "inst_check.m"
            continue;
#line 1006 "inst_check.m"
          }
#line 1003 "inst_check.m"
      }
#line 1003 "inst_check.m"
      break;
#line 1003 "inst_check.m"
    }
#line 999 "inst_check.m"
}

#line 977 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(
#line 977 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 977 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 977 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3,
#line 977 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4,
#line 977 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5)
#line 977 "inst_check.m"
{
#line 980 "inst_check.m"
  while (MR_TRUE)
#line 980 "inst_check.m"
    {
#line 980 "inst_check.m"
      /* tailcall optimized into a loop */
#line 980 "inst_check.m"
      {
#line 980 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 980 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4;
#line 980 "inst_check.m"
        else
#line 983 "inst_check.m"
          {
#line 983 "inst_check.m"
            MR_Word check_hlds__inst_check__Ctor_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 983 "inst_check.m"
            MR_Word check_hlds__inst_check__Ctors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 983 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 2)));
#line 983 "inst_check.m"
            MR_Integer check_hlds__inst_check__ConsArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 4)));
#line 983 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24;
#line 984 "inst_check.m"
            MR_Word check_hlds__inst_check___ExistTVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 0)));
#line 984 "inst_check.m"
            MR_Word check_hlds__inst_check___Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 1)));
#line 984 "inst_check.m"
            MR_Word check_hlds__inst_check___ConsArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 3)));
#line 984 "inst_check.m"
            MR_Word check_hlds__inst_check___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 5)));
#line 987 "inst_check.m"
            MR_String check_hlds__inst_check__V_27_27;

#line 987 "inst_check.m"
            {
#line 987 "inst_check.m"
              check_hlds__inst_check__V_27_27 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__ConsName_18);
            }
#line 987 "inst_check.m"
            check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__V_27_27) == 0);
#line 987 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 987 "inst_check.m"
              {
#line 988 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_20 == check_hlds__inst_check__HeadVar__3_3);
#line 988 "inst_check.m"
                check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 987 "inst_check.m"
              }
#line 991 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 990 "inst_check.m"
              {
#line 990 "inst_check.m"
                {
#line 990 "inst_check.m"
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__inst_check__ConsArity_20)), check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4, &check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24);
                }
#line 990 "inst_check.m"
              }
#line 991 "inst_check.m"
            else
#line 991 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4;
#line 994 "inst_check.m"
            /* direct tailcall eliminated */
#line 994 "inst_check.m"
            {
#line 994 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__1__tmp_copy_1 = check_hlds__inst_check__Ctors_12;
#line 994 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24;

#line 994 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0__tmp_copy_4;
#line 994 "inst_check.m"
              check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__HeadVar__1__tmp_copy_1;
#line 994 "inst_check.m"
            }
#line 994 "inst_check.m"
            continue;
#line 983 "inst_check.m"
          }
#line 980 "inst_check.m"
      }
#line 980 "inst_check.m"
      break;
#line 980 "inst_check.m"
    }
#line 977 "inst_check.m"
}

#line 960 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(
#line 960 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 960 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 960 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3)
#line 960 "inst_check.m"
{
#line 5380 "check_hlds.inst_check.c"
  while (MR_TRUE)
#line 5382 "check_hlds.inst_check.c"
    {
#line 5384 "check_hlds.inst_check.c"
      /* tailcall optimized into a loop */
#line 5386 "check_hlds.inst_check.c"
      {
#line 5388 "check_hlds.inst_check.c"
        MR_bool check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 5390 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__Ctor_6;
#line 5392 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__Ctors_7;
#line 5394 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__ConsName_12;
#line 5396 "check_hlds.inst_check.c"
        MR_Integer check_hlds__inst_check__ConsArity_14;
#line 966 "inst_check.m"
        MR_Word check_hlds__inst_check___ExistTVars_10;
#line 966 "inst_check.m"
        MR_Word check_hlds__inst_check___Constraints_11;
#line 966 "inst_check.m"
        MR_Word check_hlds__inst_check___ConsArgs_13;
#line 966 "inst_check.m"
        MR_Word check_hlds__inst_check___Context_15;
#line 969 "inst_check.m"
        MR_String check_hlds__inst_check__V_16_16;

#line 5409 "check_hlds.inst_check.c"
        if (check_hlds__inst_check__succeeded)
#line 5411 "check_hlds.inst_check.c"
          {
#line 5413 "check_hlds.inst_check.c"
            check_hlds__inst_check__Ctor_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 5415 "check_hlds.inst_check.c"
            check_hlds__inst_check__Ctors_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 966 "inst_check.m"
            check_hlds__inst_check___ExistTVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 0)));
#line 966 "inst_check.m"
            check_hlds__inst_check___Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 1)));
#line 966 "inst_check.m"
            check_hlds__inst_check__ConsName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 2)));
#line 966 "inst_check.m"
            check_hlds__inst_check___ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 3)));
#line 966 "inst_check.m"
            check_hlds__inst_check__ConsArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 4)));
#line 966 "inst_check.m"
            check_hlds__inst_check___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 5)));
#line 969 "inst_check.m"
            {
#line 969 "inst_check.m"
              check_hlds__inst_check__V_16_16 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__ConsName_12);
            }
#line 969 "inst_check.m"
            check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__V_16_16) == 0);
#line 969 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 970 "inst_check.m"
              check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_14 == check_hlds__inst_check__HeadVar__3_3);
#line 973 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 972 "inst_check.m"
              check_hlds__inst_check__succeeded = MR_TRUE;
#line 973 "inst_check.m"
            else
#line 974 "inst_check.m"
              {
#line 974 "inst_check.m"
                /* direct tailcall eliminated */
#line 974 "inst_check.m"
                {
#line 974 "inst_check.m"
                  MR_Word check_hlds__inst_check__HeadVar__1__tmp_copy_1 = check_hlds__inst_check__Ctors_7;

#line 974 "inst_check.m"
                  check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__HeadVar__1__tmp_copy_1;
#line 974 "inst_check.m"
                }
#line 974 "inst_check.m"
                continue;
#line 974 "inst_check.m"
              }
#line 5463 "check_hlds.inst_check.c"
          }
#line 5465 "check_hlds.inst_check.c"
        return check_hlds__inst_check__succeeded;
#line 5467 "check_hlds.inst_check.c"
      }
#line 5469 "check_hlds.inst_check.c"
      break;
#line 5471 "check_hlds.inst_check.c"
    }
#line 960 "inst_check.m"
}

#line 927 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0(
#line 927 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 927 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 927 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 927 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 927 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 927 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 927 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
#line 927 "inst_check.m"
{
#line 931 "inst_check.m"
  while (MR_TRUE)
#line 931 "inst_check.m"
    {
#line 931 "inst_check.m"
      /* tailcall optimized into a loop */
#line 931 "inst_check.m"
      {
#line 931 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 931 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "inst_check.m"
          {
#line 932 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 932 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 931 "inst_check.m"
          }
#line 931 "inst_check.m"
        else
#line 934 "inst_check.m"
          {
#line 934 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 934 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 934 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
#line 934 "inst_check.m"
            MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34;
#line 934 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35;
#line 934 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_40_40;
#line 935 "inst_check.m"
            MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));
#line 954 "inst_check.m"
            MR_Word check_hlds__inst_check__SymName_24;
#line 954 "inst_check.m"
            MR_Integer check_hlds__inst_check__Arity_25;
#line 937 "inst_check.m"
            MR_Word check_hlds__inst_check__V_26_26;

#line 937 "inst_check.m"
            check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 937 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 937 "inst_check.m"
              {
#line 937 "inst_check.m"
                check_hlds__inst_check__SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 937 "inst_check.m"
                check_hlds__inst_check__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 2)));
#line 937 "inst_check.m"
                check_hlds__inst_check__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 3)));
#line 939 "inst_check.m"
                {
#line 939 "inst_check.m"
                  MR_String check_hlds__inst_check__FunctorName_27;

#line 939 "inst_check.m"
                  {
#line 939 "inst_check.m"
                    check_hlds__inst_check__FunctorName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_24);
                  }
#line 941 "inst_check.m"
                  {
#line 941 "inst_check.m"
                    check_hlds__inst_check__succeeded = check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25);
                  }
#line 944 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 943 "inst_check.m"
                    {
#line 943 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 943 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 943 "inst_check.m"
                    }
#line 944 "inst_check.m"
                  else
#line 946 "inst_check.m"
                    {
#line 946 "inst_check.m"
                      MR_Word check_hlds__inst_check__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 946 "inst_check.m"
                      MR_Word check_hlds__inst_check__ExpectedArities_28;
#line 946 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_33_33;

#line 946 "inst_check.m"
                      {
#line 946 "inst_check.m"
                        check_hlds__inst_check__V_33_33 = mercury__set__init_0_f_0(check_hlds__inst_check__TypeCtorInfo_44_44);
                      }
#line 945 "inst_check.m"
                      {
#line 945 "inst_check.m"
                        check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25, check_hlds__inst_check__V_33_33, &check_hlds__inst_check__ExpectedArities_28);
                      }
#line 947 "inst_check.m"
                      {
#line 947 "inst_check.m"
                        check_hlds__inst_check__succeeded = mercury__set__is_empty_1_p_0(check_hlds__inst_check__TypeCtorInfo_44_44, check_hlds__inst_check__ExpectedArities_28);
                      }
#line 949 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 948 "inst_check.m"
                        {
#line 948 "inst_check.m"
                          check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
                        }
#line 949 "inst_check.m"
                      else
#line 950 "inst_check.m"
                        {
#line 950 "inst_check.m"
                          check_hlds__inst_check__record_arity_mismatch_8_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25, check_hlds__inst_check__ExpectedArities_28, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
                        }
#line 946 "inst_check.m"
                    }
#line 939 "inst_check.m"
                }
#line 937 "inst_check.m"
              }
#line 937 "inst_check.m"
            else
#line 955 "inst_check.m"
              {
#line 955 "inst_check.m"
                check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
              }
#line 957 "inst_check.m"
            check_hlds__inst_check__V_40_40 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 957 "inst_check.m"
            /* direct tailcall eliminated */
#line 957 "inst_check.m"
            {
#line 957 "inst_check.m"
              MR_Integer check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__V_40_40;
#line 957 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__3__tmp_copy_3 = check_hlds__inst_check__BoundInsts_19;
#line 957 "inst_check.m"
              MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34;
#line 957 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35;

#line 957 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6;
#line 957 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4;
#line 957 "inst_check.m"
              check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__HeadVar__3__tmp_copy_3;
#line 957 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 957 "inst_check.m"
            }
#line 957 "inst_check.m"
            continue;
#line 934 "inst_check.m"
          }
#line 931 "inst_check.m"
      }
#line 931 "inst_check.m"
      break;
#line 931 "inst_check.m"
    }
#line 927 "inst_check.m"
}

#line 891 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
#line 891 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_4,
#line 891 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_5,
#line 891 "inst_check.m"
  MR_Word * check_hlds__inst_check__MismatchFromType_6)
#line 891 "inst_check.m"
{
#line 895 "inst_check.m"
  {
#line 895 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 895 "inst_check.m"
    MR_Integer check_hlds__inst_check__NumMismatches_25;
#line 895 "inst_check.m"
    MR_Word check_hlds__inst_check__MismatchPiecesCord_26;
#line 895 "inst_check.m"
    MR_Word check_hlds__inst_check__MismatchPieces_29;

#line 912 "inst_check.m"
#line 912 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_5)) {
#line 912 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 912 "inst_check.m"
      case (MR_Integer) 0:
#line 897 "inst_check.m"
        {
#line 897 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtorAndDefn_7 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_5), (MR_Integer) 0);
#line 897 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_7, (MR_Integer) 1)));
#line 897 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeDefnBody_10;
#line 897 "inst_check.m"
          MR_Word check_hlds__inst_check__Constructors_11;
#line 897 "inst_check.m"
          MR_Word check_hlds__inst_check__V_41_41;
#line 898 "inst_check.m"
          MR_Word check_hlds__inst_check___TypeCtor_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_7, (MR_Integer) 0)));

#line 899 "inst_check.m"
          {
#line 899 "inst_check.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDefn_9, &check_hlds__inst_check__TypeDefnBody_10);
          }
#line 902 "inst_check.m"
#line 902 "inst_check.m"
          switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnBody_10)) {
#line 902 "inst_check.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 902 "inst_check.m"
            case (MR_Integer) 0:
#line 907 "inst_check.m"
              {
#line 908 "inst_check.m"
                {
#line 908 "inst_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
#line 908 "inst_check.m"
                  return;
                }
#line 907 "inst_check.m"
              }
#line 902 "inst_check.m"
              break;
#line 902 "inst_check.m"
            case (MR_Integer) 1:
#line 901 "inst_check.m"
              {
#line 901 "inst_check.m"
                MR_Word check_hlds__inst_check__V_12_12;
#line 901 "inst_check.m"
                MR_Word check_hlds__inst_check__V_13_13;
#line 901 "inst_check.m"
                MR_Word check_hlds__inst_check__V_14_14;
#line 901 "inst_check.m"
                MR_Word check_hlds__inst_check__V_15_15;
#line 901 "inst_check.m"
                MR_Word check_hlds__inst_check__V_16_16;
#line 901 "inst_check.m"
                MR_Word check_hlds__inst_check__V_17_17;
#line 901 "inst_check.m"
                MR_Word check_hlds__inst_check__V_18_18;
#line 901 "inst_check.m"
                MR_Word check_hlds__inst_check__V_19_19;

#line 901 "inst_check.m"
                check_hlds__inst_check__Constructors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 0)));
#line 901 "inst_check.m"
                check_hlds__inst_check__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 1)));
#line 901 "inst_check.m"
                check_hlds__inst_check__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 2)));
#line 901 "inst_check.m"
                check_hlds__inst_check__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 3)));
#line 901 "inst_check.m"
                check_hlds__inst_check__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 4)));
#line 901 "inst_check.m"
                check_hlds__inst_check__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 5)));
#line 901 "inst_check.m"
                check_hlds__inst_check__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 901 "inst_check.m"
                check_hlds__inst_check__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 901 "inst_check.m"
                check_hlds__inst_check__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 7)));
#line 901 "inst_check.m"
              }
#line 902 "inst_check.m"
              break;
#line 902 "inst_check.m"
            case (MR_Integer) 2:
#line 907 "inst_check.m"
              {
#line 908 "inst_check.m"
                {
#line 908 "inst_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
#line 908 "inst_check.m"
                  return;
                }
#line 907 "inst_check.m"
              }
#line 902 "inst_check.m"
              break;
#line 902 "inst_check.m"
            case (MR_Integer) 3:
#line 907 "inst_check.m"
              {
#line 908 "inst_check.m"
                {
#line 908 "inst_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
#line 908 "inst_check.m"
                  return;
                }
#line 907 "inst_check.m"
              }
#line 902 "inst_check.m"
              break;
#line 902 "inst_check.m"
          }
#line 911 "inst_check.m"
          {
#line 911 "inst_check.m"
            check_hlds__inst_check__V_41_41 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          }
#line 910 "inst_check.m"
          {
#line 910 "inst_check.m"
            check_hlds__inst_check__find_mismatches_from_user_7_p_0(check_hlds__inst_check__Constructors_11, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_25, check_hlds__inst_check__V_41_41, &check_hlds__inst_check__MismatchPiecesCord_26);
          }
#line 897 "inst_check.m"
        }
#line 912 "inst_check.m"
        break;
#line 912 "inst_check.m"
      case (MR_Integer) 1:
#line 913 "inst_check.m"
        {
#line 913 "inst_check.m"
          MR_Word check_hlds__inst_check__BuiltinType_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_5, (MR_Integer) 0)));
#line 913 "inst_check.m"
          MR_Word check_hlds__inst_check__V_35_35;

#line 915 "inst_check.m"
          {
#line 915 "inst_check.m"
            check_hlds__inst_check__V_35_35 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          }
#line 914 "inst_check.m"
          {
#line 914 "inst_check.m"
            check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(check_hlds__inst_check__BuiltinType_27, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_25, check_hlds__inst_check__V_35_35, &check_hlds__inst_check__MismatchPiecesCord_26);
          }
#line 913 "inst_check.m"
        }
#line 912 "inst_check.m"
        break;
#line 912 "inst_check.m"
      case (MR_Integer) 2:
#line 917 "inst_check.m"
        {
#line 917 "inst_check.m"
          MR_Integer check_hlds__inst_check__TupleArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_5, (MR_Integer) 0)));
#line 917 "inst_check.m"
          MR_Word check_hlds__inst_check__V_32_32;

#line 919 "inst_check.m"
          {
#line 919 "inst_check.m"
            check_hlds__inst_check__V_32_32 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          }
#line 918 "inst_check.m"
          {
#line 918 "inst_check.m"
            check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(check_hlds__inst_check__TupleArity_28, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_25, check_hlds__inst_check__V_32_32, &check_hlds__inst_check__MismatchPiecesCord_26);
          }
#line 917 "inst_check.m"
        }
#line 912 "inst_check.m"
        break;
#line 912 "inst_check.m"
    }
#line 921 "inst_check.m"
    {
#line 921 "inst_check.m"
      check_hlds__inst_check__MismatchPieces_29 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__MismatchPiecesCord_26);
    }
#line 922 "inst_check.m"
    {
#line 922 "inst_check.m"
      MR_Word base;
#line 922 "inst_check.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 922 "inst_check.m"
      *check_hlds__inst_check__MismatchFromType_6 = base;
#line 922 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__NumMismatches_25));
#line 922 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__TypeDefnOrBuiltin_5));
#line 922 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_check__MismatchPieces_29));
#line 922 "inst_check.m"
    }
#line 895 "inst_check.m"
  }
#line 891 "inst_check.m"
}

#line 865 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_6(
#line 865 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 865 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1)
#line 865 "inst_check.m"
{
#line 865 "inst_check.m"
  {
#line 865 "inst_check.m"
    MR_Box check_hlds__inst_check__wrapper_arg_2;
#line 865 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 865 "inst_check.m"
    MR_String check_hlds__inst_check__conv2_Str_4;

#line 865 "inst_check.m"
    {
#line 865 "inst_check.m"
      check_hlds__inst_check__conv2_Str_4 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1));
    }
#line 865 "inst_check.m"
    check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv2_Str_4));
#line 865 "inst_check.m"
    return check_hlds__inst_check__wrapper_arg_2;
#line 865 "inst_check.m"
  }
#line 865 "inst_check.m"
}

#line 814 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_1(
#line 814 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 814 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 814 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 814 "inst_check.m"
{
#line 814 "inst_check.m"
  {
#line 814 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 814 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_MismatchFromType_6;

#line 814 "inst_check.m"
    {
#line 814 "inst_check.m"
      check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_MismatchFromType_6);
    }
#line 814 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_MismatchFromType_6));
#line 814 "inst_check.m"
  }
#line 814 "inst_check.m"
}

#line 837 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_2(
#line 837 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 837 "inst_check.m"
{
#line 837 "inst_check.m"
  {
#line 837 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 837 "inst_check.m"
    MR_builtin_longjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__commit_0, 1);
#line 837 "inst_check.m"
  }
#line 837 "inst_check.m"
}

#line 837 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_4(
#line 837 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 837 "inst_check.m"
{
#line 837 "inst_check.m"
  {
#line 837 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 837 "inst_check.m"
    (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_118 = ((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__conv1_Type_118);
#line 837 "inst_check.m"
    {
#line 837 "inst_check.m"
      check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_3(check_hlds__inst_check__env_ptr);
#line 837 "inst_check.m"
      return;
    }
#line 837 "inst_check.m"
  }
#line 837 "inst_check.m"
}

#line 837 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_3(
#line 837 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 837 "inst_check.m"
{
#line 837 "inst_check.m"
  {
#line 837 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 842 "inst_check.m"
#line 842 "inst_check.m"
    switch (MR_tag((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_118)) {
#line 842 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 842 "inst_check.m"
      case (MR_Integer) 0:
#line 839 "inst_check.m"
        {
#line 839 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtorAndDefn_31 = (MR_Word) MR_body(((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_118), (MR_Integer) 0);
#line 839 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeDefn_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_31, (MR_Integer) 1)));
#line 840 "inst_check.m"
          MR_Word check_hlds__inst_check__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_31, (MR_Integer) 0)));

#line 841 "inst_check.m"
          {
#line 841 "inst_check.m"
            (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0((MR_Integer) 0, check_hlds__inst_check__TypeDefn_33);
          }
#line 839 "inst_check.m"
        }
#line 842 "inst_check.m"
        break;
#line 842 "inst_check.m"
      case (MR_Integer) 1:
#line 843 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 842 "inst_check.m"
        break;
#line 842 "inst_check.m"
      case (MR_Integer) 2:
#line 845 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 842 "inst_check.m"
        break;
#line 842 "inst_check.m"
    }
#line 842 "inst_check.m"
    if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded)
#line 842 "inst_check.m"
      {
#line 842 "inst_check.m"
        check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_2(check_hlds__inst_check__env_ptr);
#line 842 "inst_check.m"
        return;
      }
#line 837 "inst_check.m"
  }
#line 837 "inst_check.m"
}

#line 837 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_5(
#line 837 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 837 "inst_check.m"
{
#line 837 "inst_check.m"
  {
#line 837 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 837 "inst_check.m"
    if (MR_builtin_setjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__commit_0) == 0)
#line 837 "inst_check.m"
      {
#line 837 "inst_check.m"
        {
#line 837 "inst_check.m"
          {
#line 837 "inst_check.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, &(check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__conv1_Type_118, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11, check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_4, check_hlds__inst_check__env_ptr);
          }
#line 837 "inst_check.m"
        }
#line 837 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_FALSE;
#line 837 "inst_check.m"
      }
#line 837 "inst_check.m"
    else
#line 837 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 837 "inst_check.m"
  }
#line 837 "inst_check.m"
}

#line 791 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0(
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_8,
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_9,
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_10,
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypes_11,
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypeSets_12,
#line 791 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_43,
#line 791 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_44)
#line 791 "inst_check.m"
{
#line 791 "inst_check.m"
  {
#line 791 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s check_hlds__inst_check__env;

#line 791 "inst_check.m"
    (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11 = check_hlds__inst_check__PossibleTypes_11;
#line 797 "inst_check.m"
    {
#line 797 "inst_check.m"
      MR_Word check_hlds__inst_check__InstStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));
#line 797 "inst_check.m"
      MR_Word check_hlds__inst_check__DefinedInThisModule_15;
#line 798 "inst_check.m"
      MR_Word check_hlds__inst_check__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
#line 798 "inst_check.m"
      MR_Word check_hlds__inst_check__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
#line 798 "inst_check.m"
      MR_Word check_hlds__inst_check__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
#line 798 "inst_check.m"
      MR_Word check_hlds__inst_check__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
#line 798 "inst_check.m"
      MR_Word check_hlds__inst_check__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));

#line 799 "inst_check.m"
      {
#line 799 "inst_check.m"
        check_hlds__inst_check__DefinedInThisModule_15 = hlds__status__inst_status_defined_in_this_module_1_f_0(check_hlds__inst_check__InstStatus_14);
      }
#line 802 "inst_check.m"
#line 802 "inst_check.m"
      switch (check_hlds__inst_check__DefinedInThisModule_15) {
#line 802 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 802 "inst_check.m"
        case (MR_Integer) 0:
#line 801 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_43;
#line 802 "inst_check.m"
          break;
#line 802 "inst_check.m"
        case (MR_Integer) 1:
#line 803 "inst_check.m"
          if (((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 805 "inst_check.m"
            {
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__TypeCtorInfo_149_149;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__TypeCtorInfo_152_152;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__InstName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 0)));
#line 805 "inst_check.m"
              MR_Integer check_hlds__inst_check__InstArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 1)));
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__NoMatchPieces_19;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__AllPossibleTypesSet_20;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__AllPossibleTypes_21;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__MismatchesFromPossibleTypes_22;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__MismatchPieces_24;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__Pieces_25;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__Spec_26;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__V_101_101;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__V_102_102;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__V_103_103;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__V_108_108;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__V_111_111;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__V_112_112;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__V_113_113;
#line 805 "inst_check.m"
              MR_Word check_hlds__inst_check__V_114_114;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));

#line 809 "inst_check.m"
              {
#line 809 "inst_check.m"
                check_hlds__inst_check__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 809 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_103_103, 0) = ((MR_Box) (check_hlds__inst_check__InstName_17));
#line 809 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_103_103, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_18));
#line 809 "inst_check.m"
              }
#line 809 "inst_check.m"
              {
#line 809 "inst_check.m"
                check_hlds__inst_check__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 809 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_102_102, 1) = ((MR_Box) (check_hlds__inst_check__V_103_103));
#line 809 "inst_check.m"
              }
#line 809 "inst_check.m"
              {
#line 809 "inst_check.m"
                check_hlds__inst_check__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_101_101, 0) = ((MR_Box) (check_hlds__inst_check__V_102_102));
#line 809 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[40])));
#line 809 "inst_check.m"
              }
#line 808 "inst_check.m"
              {
#line 808 "inst_check.m"
                check_hlds__inst_check__NoMatchPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__NoMatchPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[38])));
#line 808 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__NoMatchPieces_19, 1) = ((MR_Box) (check_hlds__inst_check__V_101_101));
#line 808 "inst_check.m"
              }
#line 6269 "check_hlds.inst_check.c"
              check_hlds__inst_check__TypeCtorInfo_149_149 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
#line 812 "inst_check.m"
              {
#line 812 "inst_check.m"
                check_hlds__inst_check__AllPossibleTypesSet_20 = mercury__set__union_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_149_149, check_hlds__inst_check__PossibleTypeSets_12);
              }
#line 813 "inst_check.m"
              {
#line 813 "inst_check.m"
                mercury__set__to_sorted_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_149_149, check_hlds__inst_check__AllPossibleTypesSet_20, &check_hlds__inst_check__AllPossibleTypes_21);
              }
#line 814 "inst_check.m"
              {
#line 814 "inst_check.m"
                check_hlds__inst_check__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 814 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_7[0]));
#line 814 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 1) = ((MR_Box) (check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_1));
#line 814 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 814 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 3) = ((MR_Box) (check_hlds__inst_check__BoundInsts_10));
#line 814 "inst_check.m"
              }
#line 6295 "check_hlds.inst_check.c"
              check_hlds__inst_check__TypeCtorInfo_152_152 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0;
#line 814 "inst_check.m"
              {
#line 814 "inst_check.m"
                mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_149_149, check_hlds__inst_check__TypeCtorInfo_152_152, check_hlds__inst_check__V_108_108, check_hlds__inst_check__AllPossibleTypes_21, &check_hlds__inst_check__MismatchesFromPossibleTypes_22);
              }
#line 816 "inst_check.m"
              {
#line 816 "inst_check.m"
                mercury__list__sort_2_p_0(check_hlds__inst_check__TypeCtorInfo_152_152, check_hlds__inst_check__MismatchesFromPossibleTypes_22, &check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23);
              }
#line 818 "inst_check.m"
              {
#line 818 "inst_check.m"
                check_hlds__inst_check__create_mismatch_pieces_2_p_0(check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23, &check_hlds__inst_check__MismatchPieces_24);
              }
#line 821 "inst_check.m"
              {
#line 821 "inst_check.m"
                check_hlds__inst_check__Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__NoMatchPieces_19, check_hlds__inst_check__MismatchPieces_24);
              }
#line 823 "inst_check.m"
              {
#line 823 "inst_check.m"
                check_hlds__inst_check__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 823 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_114_114, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_25));
#line 823 "inst_check.m"
              }
#line 823 "inst_check.m"
              {
#line 823 "inst_check.m"
                check_hlds__inst_check__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_113_113, 0) = ((MR_Box) (check_hlds__inst_check__V_114_114));
#line 823 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "inst_check.m"
              }
#line 823 "inst_check.m"
              {
#line 823 "inst_check.m"
                check_hlds__inst_check__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 823 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_112_112, 0) = ((MR_Box) (check_hlds__inst_check__Context_16));
#line 823 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_112_112, 1) = ((MR_Box) (check_hlds__inst_check__V_113_113));
#line 823 "inst_check.m"
              }
#line 823 "inst_check.m"
              {
#line 823 "inst_check.m"
                check_hlds__inst_check__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_111_111, 0) = ((MR_Box) (check_hlds__inst_check__V_112_112));
#line 823 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "inst_check.m"
              }
#line 822 "inst_check.m"
              {
#line 822 "inst_check.m"
                check_hlds__inst_check__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 822 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 822 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 822 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 2) = ((MR_Box) (check_hlds__inst_check__V_111_111));
#line 822 "inst_check.m"
              }
#line 824 "inst_check.m"
              {
#line 824 "inst_check.m"
                MR_Word base;
#line 824 "inst_check.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "inst_check.m"
                *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = base;
#line 824 "inst_check.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_26));
#line 824 "inst_check.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_43));
#line 824 "inst_check.m"
              }
#line 805 "inst_check.m"
            }
#line 803 "inst_check.m"
          else
#line 826 "inst_check.m"
            {
#line 826 "inst_check.m"
              MR_Word check_hlds__inst_check__InstIsExported_29;

#line 827 "inst_check.m"
              {
#line 827 "inst_check.m"
                check_hlds__inst_check__InstIsExported_29 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(check_hlds__inst_check__InstStatus_14);
              }
#line 834 "inst_check.m"
#line 834 "inst_check.m"
              switch (check_hlds__inst_check__InstIsExported_29) {
#line 834 "inst_check.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 834 "inst_check.m"
                case (MR_Integer) 0:
#line 833 "inst_check.m"
                  (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 834 "inst_check.m"
                  break;
#line 834 "inst_check.m"
                case (MR_Integer) 1:
#line 837 "inst_check.m"
                  {
#line 837 "inst_check.m"
                    {
#line 837 "inst_check.m"
                      check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_5(&check_hlds__inst_check__env);
                    }
#line 837 "inst_check.m"
                  }
#line 834 "inst_check.m"
                  break;
#line 834 "inst_check.m"
              }
#line 851 "inst_check.m"
              if ((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded)
#line 851 "inst_check.m"
                *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_43;
#line 851 "inst_check.m"
              else
#line 852 "inst_check.m"
                {
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_92_92;
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_93_93;
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_94_94;
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_95_95;
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__Context_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__InstName_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 0)));
#line 852 "inst_check.m"
                  MR_Integer check_hlds__inst_check__InstArity_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 1)));
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__Pieces_122;
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__Spec_123;
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11, (MR_Integer) 1)));
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11, (MR_Integer) 0)));
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
#line 852 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));

#line 863 "inst_check.m"
                  if ((check_hlds__inst_check__V_159_159 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "inst_check.m"
                    {
#line 855 "inst_check.m"
                      MR_String check_hlds__inst_check__OnePossibleTypeStr_37;
#line 855 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_72_72;
#line 855 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_73_73;
#line 855 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_74_74;
#line 855 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_75_75;
#line 855 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_78_78;
#line 855 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_81_81;
#line 855 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_82_82;

#line 856 "inst_check.m"
                      {
#line 856 "inst_check.m"
                        check_hlds__inst_check__OnePossibleTypeStr_37 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__V_160_160);
                      }
#line 859 "inst_check.m"
                      {
#line 859 "inst_check.m"
                        check_hlds__inst_check__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 859 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_74_74, 0) = ((MR_Box) (check_hlds__inst_check__InstName_120));
#line 859 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_74_74, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_121));
#line 859 "inst_check.m"
                      }
#line 859 "inst_check.m"
                      {
#line 859 "inst_check.m"
                        check_hlds__inst_check__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 859 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_73_73, 1) = ((MR_Box) (check_hlds__inst_check__V_74_74));
#line 859 "inst_check.m"
                      }
#line 861 "inst_check.m"
                      {
#line 861 "inst_check.m"
                        check_hlds__inst_check__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 861 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_82_82, 1) = ((MR_Box) (check_hlds__inst_check__OnePossibleTypeStr_37));
#line 861 "inst_check.m"
                      }
#line 861 "inst_check.m"
                      {
#line 861 "inst_check.m"
                        check_hlds__inst_check__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_81_81, 0) = ((MR_Box) (check_hlds__inst_check__V_82_82));
#line 861 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[19])));
#line 861 "inst_check.m"
                      }
#line 861 "inst_check.m"
                      {
#line 861 "inst_check.m"
                        check_hlds__inst_check__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[42])));
#line 861 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_78_78, 1) = ((MR_Box) (check_hlds__inst_check__V_81_81));
#line 861 "inst_check.m"
                      }
#line 860 "inst_check.m"
                      {
#line 860 "inst_check.m"
                        check_hlds__inst_check__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[41])));
#line 860 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_75_75, 1) = ((MR_Box) (check_hlds__inst_check__V_78_78));
#line 860 "inst_check.m"
                      }
#line 859 "inst_check.m"
                      {
#line 859 "inst_check.m"
                        check_hlds__inst_check__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_72_72, 0) = ((MR_Box) (check_hlds__inst_check__V_73_73));
#line 859 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_72_72, 1) = ((MR_Box) (check_hlds__inst_check__V_75_75));
#line 859 "inst_check.m"
                      }
#line 858 "inst_check.m"
                      {
#line 858 "inst_check.m"
                        check_hlds__inst_check__Pieces_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[38])));
#line 858 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 1) = ((MR_Box) (check_hlds__inst_check__V_72_72));
#line 858 "inst_check.m"
                      }
#line 855 "inst_check.m"
                    }
#line 863 "inst_check.m"
                  else
#line 864 "inst_check.m"
                    {
#line 864 "inst_check.m"
                      MR_Word check_hlds__inst_check__PossibleTypeStrs_41;
#line 864 "inst_check.m"
                      MR_String check_hlds__inst_check__PossibleTypesStr_42;
#line 864 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_51_51;
#line 864 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_52_52;
#line 864 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_53_53;
#line 864 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_54_54;
#line 864 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_57_57;
#line 864 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_60_60;
#line 864 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_61_61;

#line 865 "inst_check.m"
                      {
#line 865 "inst_check.m"
                        check_hlds__inst_check__PossibleTypeStrs_41 = mercury__list__map_2_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[3], (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11);
                      }
#line 868 "inst_check.m"
                      {
#line 868 "inst_check.m"
                        check_hlds__inst_check__PossibleTypesStr_42 = mercury__string__join_list_2_f_0((MR_String) ", ", check_hlds__inst_check__PossibleTypeStrs_41);
                      }
#line 870 "inst_check.m"
                      {
#line 870 "inst_check.m"
                        check_hlds__inst_check__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 870 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_53_53, 0) = ((MR_Box) (check_hlds__inst_check__InstName_120));
#line 870 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_53_53, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_121));
#line 870 "inst_check.m"
                      }
#line 870 "inst_check.m"
                      {
#line 870 "inst_check.m"
                        check_hlds__inst_check__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 870 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 1) = ((MR_Box) (check_hlds__inst_check__V_53_53));
#line 870 "inst_check.m"
                      }
#line 872 "inst_check.m"
                      {
#line 872 "inst_check.m"
                        check_hlds__inst_check__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 872 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_61_61, 1) = ((MR_Box) (check_hlds__inst_check__PossibleTypesStr_42));
#line 872 "inst_check.m"
                      }
#line 872 "inst_check.m"
                      {
#line 872 "inst_check.m"
                        check_hlds__inst_check__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_60_60, 0) = ((MR_Box) (check_hlds__inst_check__V_61_61));
#line 872 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[22])));
#line 872 "inst_check.m"
                      }
#line 872 "inst_check.m"
                      {
#line 872 "inst_check.m"
                        check_hlds__inst_check__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[42])));
#line 872 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_57_57, 1) = ((MR_Box) (check_hlds__inst_check__V_60_60));
#line 872 "inst_check.m"
                      }
#line 871 "inst_check.m"
                      {
#line 871 "inst_check.m"
                        check_hlds__inst_check__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[43])));
#line 871 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_54_54, 1) = ((MR_Box) (check_hlds__inst_check__V_57_57));
#line 871 "inst_check.m"
                      }
#line 870 "inst_check.m"
                      {
#line 870 "inst_check.m"
                        check_hlds__inst_check__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 0) = ((MR_Box) (check_hlds__inst_check__V_52_52));
#line 870 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 1) = ((MR_Box) (check_hlds__inst_check__V_54_54));
#line 870 "inst_check.m"
                      }
#line 869 "inst_check.m"
                      {
#line 869 "inst_check.m"
                        check_hlds__inst_check__Pieces_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[38])));
#line 869 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 1) = ((MR_Box) (check_hlds__inst_check__V_51_51));
#line 869 "inst_check.m"
                      }
#line 864 "inst_check.m"
                    }
#line 876 "inst_check.m"
                  {
#line 876 "inst_check.m"
                    check_hlds__inst_check__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 876 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_95_95, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_122));
#line 876 "inst_check.m"
                  }
#line 876 "inst_check.m"
                  {
#line 876 "inst_check.m"
                    check_hlds__inst_check__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_94_94, 0) = ((MR_Box) (check_hlds__inst_check__V_95_95));
#line 876 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 876 "inst_check.m"
                  }
#line 876 "inst_check.m"
                  {
#line 876 "inst_check.m"
                    check_hlds__inst_check__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 876 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_93_93, 0) = ((MR_Box) (check_hlds__inst_check__Context_119));
#line 876 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_93_93, 1) = ((MR_Box) (check_hlds__inst_check__V_94_94));
#line 876 "inst_check.m"
                  }
#line 876 "inst_check.m"
                  {
#line 876 "inst_check.m"
                    check_hlds__inst_check__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_92_92, 0) = ((MR_Box) (check_hlds__inst_check__V_93_93));
#line 876 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 876 "inst_check.m"
                  }
#line 875 "inst_check.m"
                  {
#line 875 "inst_check.m"
                    check_hlds__inst_check__Spec_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 875 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 875 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 875 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_123, 2) = ((MR_Box) (check_hlds__inst_check__V_92_92));
#line 875 "inst_check.m"
                  }
#line 877 "inst_check.m"
                  {
#line 877 "inst_check.m"
                    MR_Word base;
#line 877 "inst_check.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 877 "inst_check.m"
                    *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = base;
#line 877 "inst_check.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_123));
#line 877 "inst_check.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_43));
#line 877 "inst_check.m"
                  }
#line 852 "inst_check.m"
                }
#line 826 "inst_check.m"
            }
#line 802 "inst_check.m"
          break;
#line 802 "inst_check.m"
      }
#line 797 "inst_check.m"
    }
#line 791 "inst_check.m"
  }
#line 791 "inst_check.m"
}

#line 706 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(
#line 706 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_7,
#line 706 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_8,
#line 706 "inst_check.m"
  MR_Word check_hlds__inst_check__ForTypeKind_9,
#line 706 "inst_check.m"
  MR_Word check_hlds__inst_check__MismatchConsIdStrs_10,
#line 706 "inst_check.m"
  MR_Word * check_hlds__inst_check__IFTC_11,
#line 706 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_35)
#line 706 "inst_check.m"
{
#line 711 "inst_check.m"
  {
#line 711 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 711 "inst_check.m"
    MR_Word check_hlds__inst_check__InstSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_7, (MR_Integer) 0)));
#line 711 "inst_check.m"
    MR_Integer check_hlds__inst_check__InstArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_7, (MR_Integer) 1)));
#line 711 "inst_check.m"
    MR_Word check_hlds__inst_check__ShortInstSymName_15;
#line 711 "inst_check.m"
    MR_Word check_hlds__inst_check__Context_16;
#line 711 "inst_check.m"
    MR_Word check_hlds__inst_check__InstStatus_17;
#line 711 "inst_check.m"
    MR_Word check_hlds__inst_check__InstDefinedInThisModule_18;
#line 711 "inst_check.m"
    MR_Word check_hlds__inst_check__ForTypeCtor_19;
#line 711 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorName_20;
#line 711 "inst_check.m"
    MR_Integer check_hlds__inst_check__TypeCtorArity_21;
#line 711 "inst_check.m"
    MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "inst_check.m"
    MR_String check_hlds__inst_check__V_37_37;
#line 711 "inst_check.m"
    MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_67_67;
#line 715 "inst_check.m"
    MR_Word check_hlds__inst_check__V_112_112;
#line 715 "inst_check.m"
    MR_Word check_hlds__inst_check__V_113_113;
#line 715 "inst_check.m"
    MR_Word check_hlds__inst_check__V_114_114;
#line 715 "inst_check.m"
    MR_Word check_hlds__inst_check__V_115_115;

#line 714 "inst_check.m"
    {
#line 714 "inst_check.m"
      check_hlds__inst_check__V_37_37 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__InstSymName_13);
    }
#line 714 "inst_check.m"
    {
#line 714 "inst_check.m"
      check_hlds__inst_check__ShortInstSymName_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 714 "inst_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__ShortInstSymName_15, 0) = ((MR_Box) (check_hlds__inst_check__V_37_37));
#line 714 "inst_check.m"
    }
#line 715 "inst_check.m"
    check_hlds__inst_check__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 0)));
#line 715 "inst_check.m"
    check_hlds__inst_check__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 1)));
#line 715 "inst_check.m"
    check_hlds__inst_check__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 2)));
#line 715 "inst_check.m"
    check_hlds__inst_check__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 3)));
#line 715 "inst_check.m"
    check_hlds__inst_check__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 4)));
#line 715 "inst_check.m"
    check_hlds__inst_check__InstStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 5)));
#line 717 "inst_check.m"
    {
#line 717 "inst_check.m"
      check_hlds__inst_check__InstDefinedInThisModule_18 = hlds__status__inst_status_defined_in_this_module_1_f_0(check_hlds__inst_check__InstStatus_17);
    }
#line 733 "inst_check.m"
#line 733 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__ForTypeKind_9)) {
#line 733 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 733 "inst_check.m"
      case (MR_Integer) 0:
#line 733 "inst_check.m"
#line 733 "inst_check.m"
        switch (MR_unmkbody(check_hlds__inst_check__ForTypeKind_9)) {
#line 733 "inst_check.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 733 "inst_check.m"
          case (MR_Integer) 0:
#line 731 "inst_check.m"
            {
#line 721 "inst_check.m"
              {
#line 721 "inst_check.m"
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__int_type_ctor_0_f_0();
              }
#line 732 "inst_check.m"
              check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
#line 732 "inst_check.m"
              check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
#line 731 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
#line 731 "inst_check.m"
            }
#line 733 "inst_check.m"
            break;
#line 733 "inst_check.m"
          case (MR_Integer) 1:
#line 731 "inst_check.m"
            {
#line 724 "inst_check.m"
              {
#line 724 "inst_check.m"
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
              }
#line 732 "inst_check.m"
              check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
#line 732 "inst_check.m"
              check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
#line 731 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
#line 731 "inst_check.m"
            }
#line 733 "inst_check.m"
            break;
#line 733 "inst_check.m"
          case (MR_Integer) 2:
#line 731 "inst_check.m"
            {
#line 727 "inst_check.m"
              {
#line 727 "inst_check.m"
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__char_type_ctor_0_f_0();
              }
#line 732 "inst_check.m"
              check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
#line 732 "inst_check.m"
              check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
#line 731 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
#line 731 "inst_check.m"
            }
#line 733 "inst_check.m"
            break;
#line 733 "inst_check.m"
          case (MR_Integer) 3:
#line 731 "inst_check.m"
            {
#line 730 "inst_check.m"
              {
#line 730 "inst_check.m"
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__string_type_ctor_0_f_0();
              }
#line 732 "inst_check.m"
              check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
#line 732 "inst_check.m"
              check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
#line 731 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
#line 731 "inst_check.m"
            }
#line 733 "inst_check.m"
            break;
#line 733 "inst_check.m"
        }
#line 733 "inst_check.m"
        break;
#line 733 "inst_check.m"
      case (MR_Integer) 1:
#line 734 "inst_check.m"
        {
#line 734 "inst_check.m"
          MR_Word check_hlds__inst_check__ForTypeDefn_22;
#line 734 "inst_check.m"
          MR_Word check_hlds__inst_check__InstIsExported_23;
#line 740 "inst_check.m"
          MR_Word check_hlds__inst_check__V_38_38;

#line 734 "inst_check.m"
          check_hlds__inst_check__ForTypeCtor_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeKind_9, (MR_Integer) 0)));
#line 734 "inst_check.m"
          check_hlds__inst_check__ForTypeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeKind_9, (MR_Integer) 1)));
#line 735 "inst_check.m"
          check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
#line 735 "inst_check.m"
          check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
#line 736 "inst_check.m"
          {
#line 736 "inst_check.m"
            check_hlds__inst_check__InstIsExported_23 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(check_hlds__inst_check__InstStatus_17);
          }
#line 739 "inst_check.m"
          check_hlds__inst_check__succeeded = (check_hlds__inst_check__InstIsExported_23 == (MR_Integer) 1);
#line 739 "inst_check.m"
          if (check_hlds__inst_check__succeeded)
#line 739 "inst_check.m"
            {
#line 740 "inst_check.m"
              check_hlds__inst_check__V_38_38 = (MR_Integer) 0;
#line 740 "inst_check.m"
              {
#line 740 "inst_check.m"
                check_hlds__inst_check__succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0(check_hlds__inst_check__V_38_38, check_hlds__inst_check__ForTypeDefn_22);
              }
#line 740 "inst_check.m"
              check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 739 "inst_check.m"
            }
#line 750 "inst_check.m"
          if (check_hlds__inst_check__succeeded)
#line 746 "inst_check.m"
            {
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__VisPieces_24;
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__VisSpec_25;
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__V_41_41;
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__V_42_42;
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__V_43_43;
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__V_44_44;
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__V_47_47;
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__V_48_48;
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__V_49_49;
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__V_61_61;
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__V_62_62;
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__V_63_63;
#line 746 "inst_check.m"
              MR_Word check_hlds__inst_check__V_64_64;

#line 743 "inst_check.m"
              {
#line 743 "inst_check.m"
                check_hlds__inst_check__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 743 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_43_43, 0) = ((MR_Box) (check_hlds__inst_check__ShortInstSymName_15));
#line 743 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_43_43, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_14));
#line 743 "inst_check.m"
              }
#line 743 "inst_check.m"
              {
#line 743 "inst_check.m"
                check_hlds__inst_check__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 743 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_42_42, 1) = ((MR_Box) (check_hlds__inst_check__V_43_43));
#line 743 "inst_check.m"
              }
#line 745 "inst_check.m"
              {
#line 745 "inst_check.m"
                check_hlds__inst_check__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 745 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_49_49, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtorName_20));
#line 745 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_49_49, 1) = ((MR_Box) (check_hlds__inst_check__TypeCtorArity_21));
#line 745 "inst_check.m"
              }
#line 745 "inst_check.m"
              {
#line 745 "inst_check.m"
                check_hlds__inst_check__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 745 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_48_48, 1) = ((MR_Box) (check_hlds__inst_check__V_49_49));
#line 745 "inst_check.m"
              }
#line 745 "inst_check.m"
              {
#line 745 "inst_check.m"
                check_hlds__inst_check__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_47_47, 0) = ((MR_Box) (check_hlds__inst_check__V_48_48));
#line 745 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[13])));
#line 745 "inst_check.m"
              }
#line 744 "inst_check.m"
              {
#line 744 "inst_check.m"
                check_hlds__inst_check__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[34])));
#line 744 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_44_44, 1) = ((MR_Box) (check_hlds__inst_check__V_47_47));
#line 744 "inst_check.m"
              }
#line 743 "inst_check.m"
              {
#line 743 "inst_check.m"
                check_hlds__inst_check__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_41_41, 0) = ((MR_Box) (check_hlds__inst_check__V_42_42));
#line 743 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_41_41, 1) = ((MR_Box) (check_hlds__inst_check__V_44_44));
#line 743 "inst_check.m"
              }
#line 742 "inst_check.m"
              {
#line 742 "inst_check.m"
                check_hlds__inst_check__VisPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__VisPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[32])));
#line 742 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__VisPieces_24, 1) = ((MR_Box) (check_hlds__inst_check__V_41_41));
#line 742 "inst_check.m"
              }
#line 748 "inst_check.m"
              {
#line 748 "inst_check.m"
                check_hlds__inst_check__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 748 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_64_64, 0) = ((MR_Box) (check_hlds__inst_check__VisPieces_24));
#line 748 "inst_check.m"
              }
#line 748 "inst_check.m"
              {
#line 748 "inst_check.m"
                check_hlds__inst_check__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_63_63, 0) = ((MR_Box) (check_hlds__inst_check__V_64_64));
#line 748 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "inst_check.m"
              }
#line 748 "inst_check.m"
              {
#line 748 "inst_check.m"
                check_hlds__inst_check__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 748 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_62_62, 0) = ((MR_Box) (check_hlds__inst_check__Context_16));
#line 748 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_62_62, 1) = ((MR_Box) (check_hlds__inst_check__V_63_63));
#line 748 "inst_check.m"
              }
#line 748 "inst_check.m"
              {
#line 748 "inst_check.m"
                check_hlds__inst_check__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_61_61, 0) = ((MR_Box) (check_hlds__inst_check__V_62_62));
#line 748 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "inst_check.m"
              }
#line 747 "inst_check.m"
              {
#line 747 "inst_check.m"
                check_hlds__inst_check__VisSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 747 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__VisSpec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__VisSpec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 747 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__VisSpec_25, 2) = ((MR_Box) (check_hlds__inst_check__V_61_61));
#line 747 "inst_check.m"
              }
#line 749 "inst_check.m"
              {
#line 749 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_Specs_67_67, 0) = ((MR_Box) (check_hlds__inst_check__VisSpec_25));
#line 749 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_Specs_67_67, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_36_36));
#line 749 "inst_check.m"
              }
#line 746 "inst_check.m"
            }
#line 750 "inst_check.m"
          else
#line 750 "inst_check.m"
            check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
#line 734 "inst_check.m"
        }
#line 733 "inst_check.m"
        break;
#line 733 "inst_check.m"
    }
#line 7164 "check_hlds.inst_check.c"
    if ((check_hlds__inst_check__MismatchConsIdStrs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "inst_check.m"
      if ((check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "inst_check.m"
        {
#line 777 "inst_check.m"
          {
#line 777 "inst_check.m"
            MR_Word base;
#line 777 "inst_check.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 777 "inst_check.m"
            *check_hlds__inst_check__IFTC_11 = base;
#line 777 "inst_check.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__ForTypeCtor_19));
#line 777 "inst_check.m"
          }
#line 776 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = check_hlds__inst_check__STATE_VARIABLE_Specs_67_67;
#line 776 "inst_check.m"
        }
#line 778 "inst_check.m"
      else
#line 779 "inst_check.m"
        {
#line 780 "inst_check.m"
          *check_hlds__inst_check__IFTC_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 784 "inst_check.m"
#line 784 "inst_check.m"
          switch (check_hlds__inst_check__InstDefinedInThisModule_18) {
#line 784 "inst_check.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 784 "inst_check.m"
            case (MR_Integer) 0:
#line 783 "inst_check.m"
              *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 784 "inst_check.m"
              break;
#line 784 "inst_check.m"
            case (MR_Integer) 1:
#line 785 "inst_check.m"
              *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = check_hlds__inst_check__STATE_VARIABLE_Specs_67_67;
#line 784 "inst_check.m"
              break;
#line 784 "inst_check.m"
          }
#line 779 "inst_check.m"
        }
#line 7213 "check_hlds.inst_check.c"
    else
#line 7215 "check_hlds.inst_check.c"
      {
#line 7217 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__TypeCtorInfo_122_122 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7219 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__TypeCtorInfo_123_123;
#line 7221 "check_hlds.inst_check.c"
        MR_String check_hlds__inst_check__FuncSymbolPhrase_28;
#line 7223 "check_hlds.inst_check.c"
        MR_String check_hlds__inst_check__IsAreNotPhrase_29;
#line 7225 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__MismatchConsIdPieces_30;
#line 7227 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__MismatchPieces_31;
#line 7229 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__MismatchSpec_32;
#line 7231 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_72_72;
#line 7233 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_75_75;
#line 7235 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_76_76;
#line 7237 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_77_77;
#line 7239 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_78_78;
#line 7241 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_81_81;
#line 7243 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_82_82;
#line 7245 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_83_83;
#line 7247 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_84_84;
#line 7249 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_87_87;
#line 7251 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_90_90;
#line 7253 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_91_91;
#line 7255 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_93_93;
#line 7257 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_94_94;
#line 7259 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_95_95;
#line 7261 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_104_104;
#line 7263 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_105_105;
#line 7265 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_106_106;
#line 7267 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_107_107;
#line 7269 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_110_124;
#line 759 "inst_check.m"
        MR_Box check_hlds__inst_check__conv0_FuncSymbolPhrase_28;
#line 761 "inst_check.m"
        MR_Box check_hlds__inst_check__conv1_IsAreNotPhrase_29;

#line 759 "inst_check.m"
        {
#line 759 "inst_check.m"
          check_hlds__inst_check__conv0_FuncSymbolPhrase_28 = parse_tree__error_util__choose_number_3_f_0(check_hlds__inst_check__TypeCtorInfo_122_122, check_hlds__inst_check__TypeCtorInfo_122_122, check_hlds__inst_check__MismatchConsIdStrs_10, ((MR_Box) ((MR_String) "function symbol")), ((MR_Box) ((MR_String) "function symbols")));
        }
#line 759 "inst_check.m"
        check_hlds__inst_check__FuncSymbolPhrase_28 = ((MR_String) check_hlds__inst_check__conv0_FuncSymbolPhrase_28);
#line 761 "inst_check.m"
        {
#line 761 "inst_check.m"
          check_hlds__inst_check__conv1_IsAreNotPhrase_29 = parse_tree__error_util__choose_number_3_f_0(check_hlds__inst_check__TypeCtorInfo_122_122, check_hlds__inst_check__TypeCtorInfo_122_122, check_hlds__inst_check__MismatchConsIdStrs_10, ((MR_Box) ((MR_String) "is not a function symbol")), ((MR_Box) ((MR_String) "are not function symbols")));
        }
#line 761 "inst_check.m"
        check_hlds__inst_check__IsAreNotPhrase_29 = ((MR_String) check_hlds__inst_check__conv1_IsAreNotPhrase_29);
#line 763 "inst_check.m"
        {
#line 763 "inst_check.m"
          check_hlds__inst_check__MismatchConsIdPieces_30 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(check_hlds__inst_check__MismatchConsIdStrs_10);
        }
#line 7295 "check_hlds.inst_check.c"
        check_hlds__inst_check__TypeCtorInfo_123_123 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 765 "inst_check.m"
        {
#line 765 "inst_check.m"
          check_hlds__inst_check__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 765 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_77_77, 0) = ((MR_Box) (check_hlds__inst_check__ShortInstSymName_15));
#line 765 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_77_77, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_14));
#line 765 "inst_check.m"
        }
#line 765 "inst_check.m"
        {
#line 765 "inst_check.m"
          check_hlds__inst_check__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 765 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_76_76, 1) = ((MR_Box) (check_hlds__inst_check__V_77_77));
#line 765 "inst_check.m"
        }
#line 767 "inst_check.m"
        {
#line 767 "inst_check.m"
          check_hlds__inst_check__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 767 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_83_83, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtorName_20));
#line 767 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_83_83, 1) = ((MR_Box) (check_hlds__inst_check__TypeCtorArity_21));
#line 767 "inst_check.m"
        }
#line 767 "inst_check.m"
        {
#line 767 "inst_check.m"
          check_hlds__inst_check__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 767 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_82_82, 1) = ((MR_Box) (check_hlds__inst_check__V_83_83));
#line 767 "inst_check.m"
        }
#line 768 "inst_check.m"
        {
#line 768 "inst_check.m"
          check_hlds__inst_check__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_91_91, 1) = ((MR_Box) (check_hlds__inst_check__FuncSymbolPhrase_28));
#line 768 "inst_check.m"
        }
#line 768 "inst_check.m"
        {
#line 768 "inst_check.m"
          check_hlds__inst_check__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_90_90, 0) = ((MR_Box) (check_hlds__inst_check__V_91_91));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "inst_check.m"
        }
#line 768 "inst_check.m"
        {
#line 768 "inst_check.m"
          check_hlds__inst_check__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_87_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[37])));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_87_87, 1) = ((MR_Box) (check_hlds__inst_check__V_90_90));
#line 768 "inst_check.m"
        }
#line 767 "inst_check.m"
        {
#line 767 "inst_check.m"
          check_hlds__inst_check__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_84_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[36])));
#line 767 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_84_84, 1) = ((MR_Box) (check_hlds__inst_check__V_87_87));
#line 767 "inst_check.m"
        }
#line 767 "inst_check.m"
        {
#line 767 "inst_check.m"
          check_hlds__inst_check__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_81_81, 0) = ((MR_Box) (check_hlds__inst_check__V_82_82));
#line 767 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_81_81, 1) = ((MR_Box) (check_hlds__inst_check__V_84_84));
#line 767 "inst_check.m"
        }
#line 766 "inst_check.m"
        {
#line 766 "inst_check.m"
          check_hlds__inst_check__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[35])));
#line 766 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_78_78, 1) = ((MR_Box) (check_hlds__inst_check__V_81_81));
#line 766 "inst_check.m"
        }
#line 765 "inst_check.m"
        {
#line 765 "inst_check.m"
          check_hlds__inst_check__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_75_75, 0) = ((MR_Box) (check_hlds__inst_check__V_76_76));
#line 765 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_75_75, 1) = ((MR_Box) (check_hlds__inst_check__V_78_78));
#line 765 "inst_check.m"
        }
#line 764 "inst_check.m"
        {
#line 764 "inst_check.m"
          check_hlds__inst_check__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_72_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[32])));
#line 764 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_72_72, 1) = ((MR_Box) (check_hlds__inst_check__V_75_75));
#line 764 "inst_check.m"
        }
#line 770 "inst_check.m"
        {
#line 770 "inst_check.m"
          check_hlds__inst_check__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 770 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_95_95, 1) = ((MR_Box) (check_hlds__inst_check__IsAreNotPhrase_29));
#line 770 "inst_check.m"
        }
#line 770 "inst_check.m"
        {
#line 770 "inst_check.m"
          check_hlds__inst_check__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_94_94, 0) = ((MR_Box) (check_hlds__inst_check__V_95_95));
#line 770 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[15])));
#line 770 "inst_check.m"
        }
#line 769 "inst_check.m"
        {
#line 769 "inst_check.m"
          check_hlds__inst_check__V_93_93 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_123_123, check_hlds__inst_check__MismatchConsIdPieces_30, check_hlds__inst_check__V_94_94);
        }
#line 768 "inst_check.m"
        {
#line 768 "inst_check.m"
          check_hlds__inst_check__MismatchPieces_31 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_123_123, check_hlds__inst_check__V_72_72, check_hlds__inst_check__V_93_93);
        }
#line 772 "inst_check.m"
        {
#line 772 "inst_check.m"
          check_hlds__inst_check__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 772 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_107_107, 0) = ((MR_Box) (check_hlds__inst_check__MismatchPieces_31));
#line 772 "inst_check.m"
        }
#line 772 "inst_check.m"
        {
#line 772 "inst_check.m"
          check_hlds__inst_check__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_106_106, 0) = ((MR_Box) (check_hlds__inst_check__V_107_107));
#line 772 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "inst_check.m"
        }
#line 772 "inst_check.m"
        {
#line 772 "inst_check.m"
          check_hlds__inst_check__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 772 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_105_105, 0) = ((MR_Box) (check_hlds__inst_check__Context_16));
#line 772 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_105_105, 1) = ((MR_Box) (check_hlds__inst_check__V_106_106));
#line 772 "inst_check.m"
        }
#line 772 "inst_check.m"
        {
#line 772 "inst_check.m"
          check_hlds__inst_check__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_104_104, 0) = ((MR_Box) (check_hlds__inst_check__V_105_105));
#line 772 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "inst_check.m"
        }
#line 771 "inst_check.m"
        {
#line 771 "inst_check.m"
          check_hlds__inst_check__MismatchSpec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 771 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__MismatchSpec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__MismatchSpec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 771 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__MismatchSpec_32, 2) = ((MR_Box) (check_hlds__inst_check__V_104_104));
#line 771 "inst_check.m"
        }
#line 773 "inst_check.m"
        {
#line 773 "inst_check.m"
          check_hlds__inst_check__STATE_VARIABLE_Specs_110_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_Specs_110_124, 0) = ((MR_Box) (check_hlds__inst_check__MismatchSpec_32));
#line 773 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_Specs_110_124, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_67_67));
#line 773 "inst_check.m"
        }
#line 780 "inst_check.m"
        *check_hlds__inst_check__IFTC_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 784 "inst_check.m"
#line 784 "inst_check.m"
        switch (check_hlds__inst_check__InstDefinedInThisModule_18) {
#line 784 "inst_check.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 784 "inst_check.m"
          case (MR_Integer) 0:
#line 783 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 784 "inst_check.m"
            break;
#line 784 "inst_check.m"
          case (MR_Integer) 1:
#line 785 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = check_hlds__inst_check__STATE_VARIABLE_Specs_110_124;
#line 784 "inst_check.m"
            break;
#line 784 "inst_check.m"
        }
#line 7528 "check_hlds.inst_check.c"
      }
#line 711 "inst_check.m"
  }
#line 706 "inst_check.m"
}

#line 683 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(
#line 683 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_6,
#line 683 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_7,
#line 683 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeCtor_8,
#line 683 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_19,
#line 683 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_20)
#line 683 "inst_check.m"
{
#line 686 "inst_check.m"
  {
#line 686 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 686 "inst_check.m"
    MR_Word check_hlds__inst_check__InstStatus_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 5)));
#line 686 "inst_check.m"
    MR_Word check_hlds__inst_check__InstDefinedInThisModule_11;
#line 687 "inst_check.m"
    MR_Word check_hlds__inst_check__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 0)));
#line 687 "inst_check.m"
    MR_Word check_hlds__inst_check__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 1)));
#line 687 "inst_check.m"
    MR_Word check_hlds__inst_check__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 2)));
#line 687 "inst_check.m"
    MR_Word check_hlds__inst_check__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 3)));
#line 687 "inst_check.m"
    MR_Word check_hlds__inst_check__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 4)));

#line 688 "inst_check.m"
    {
#line 688 "inst_check.m"
      check_hlds__inst_check__InstDefinedInThisModule_11 = hlds__status__inst_status_defined_in_this_module_1_f_0(check_hlds__inst_check__InstStatus_10);
    }
#line 691 "inst_check.m"
#line 691 "inst_check.m"
    switch (check_hlds__inst_check__InstDefinedInThisModule_11) {
#line 691 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 691 "inst_check.m"
      case (MR_Integer) 0:
#line 690 "inst_check.m"
        *check_hlds__inst_check__STATE_VARIABLE_Specs_20 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_19;
#line 691 "inst_check.m"
        break;
#line 691 "inst_check.m"
      case (MR_Integer) 1:
#line 692 "inst_check.m"
        {
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 4)));
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__InstName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_6, (MR_Integer) 0)));
#line 692 "inst_check.m"
          MR_Integer check_hlds__inst_check__InstArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_6, (MR_Integer) 1)));
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtorName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_8, (MR_Integer) 0)));
#line 692 "inst_check.m"
          MR_Integer check_hlds__inst_check__TypeCtorArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_8, (MR_Integer) 1)));
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__Pieces_17;
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__Spec_18;
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__V_23_23;
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__V_24_24;
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__V_25_25;
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__V_26_26;
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__V_29_29;
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__V_30_30;
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__V_31_31;
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__V_43_43;
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__V_44_44;
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__V_45_45;
#line 692 "inst_check.m"
          MR_Word check_hlds__inst_check__V_46_46;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 0)));
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 1)));
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 2)));
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 3)));
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 5)));

#line 697 "inst_check.m"
          {
#line 697 "inst_check.m"
            check_hlds__inst_check__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 697 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_25_25, 0) = ((MR_Box) (check_hlds__inst_check__InstName_13));
#line 697 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_25_25, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_14));
#line 697 "inst_check.m"
          }
#line 697 "inst_check.m"
          {
#line 697 "inst_check.m"
            check_hlds__inst_check__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "inst_check.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 697 "inst_check.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_24_24, 1) = ((MR_Box) (check_hlds__inst_check__V_25_25));
#line 697 "inst_check.m"
          }
#line 699 "inst_check.m"
          {
#line 699 "inst_check.m"
            check_hlds__inst_check__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 699 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_31_31, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtorName_15));
#line 699 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_31_31, 1) = ((MR_Box) (check_hlds__inst_check__TypeCtorArity_16));
#line 699 "inst_check.m"
          }
#line 699 "inst_check.m"
          {
#line 699 "inst_check.m"
            check_hlds__inst_check__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "inst_check.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 699 "inst_check.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_30_30, 1) = ((MR_Box) (check_hlds__inst_check__V_31_31));
#line 699 "inst_check.m"
          }
#line 699 "inst_check.m"
          {
#line 699 "inst_check.m"
            check_hlds__inst_check__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_29_29, 0) = ((MR_Box) (check_hlds__inst_check__V_30_30));
#line 699 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[10])));
#line 699 "inst_check.m"
          }
#line 698 "inst_check.m"
          {
#line 698 "inst_check.m"
            check_hlds__inst_check__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[33])));
#line 698 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_26_26, 1) = ((MR_Box) (check_hlds__inst_check__V_29_29));
#line 698 "inst_check.m"
          }
#line 697 "inst_check.m"
          {
#line 697 "inst_check.m"
            check_hlds__inst_check__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_23_23, 0) = ((MR_Box) (check_hlds__inst_check__V_24_24));
#line 697 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_23_23, 1) = ((MR_Box) (check_hlds__inst_check__V_26_26));
#line 697 "inst_check.m"
          }
#line 696 "inst_check.m"
          {
#line 696 "inst_check.m"
            check_hlds__inst_check__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[32])));
#line 696 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_17, 1) = ((MR_Box) (check_hlds__inst_check__V_23_23));
#line 696 "inst_check.m"
          }
#line 702 "inst_check.m"
          {
#line 702 "inst_check.m"
            check_hlds__inst_check__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 702 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_46_46, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_17));
#line 702 "inst_check.m"
          }
#line 702 "inst_check.m"
          {
#line 702 "inst_check.m"
            check_hlds__inst_check__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_45_45, 0) = ((MR_Box) (check_hlds__inst_check__V_46_46));
#line 702 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "inst_check.m"
          }
#line 702 "inst_check.m"
          {
#line 702 "inst_check.m"
            check_hlds__inst_check__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 702 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_44_44, 0) = ((MR_Box) (check_hlds__inst_check__Context_12));
#line 702 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_44_44, 1) = ((MR_Box) (check_hlds__inst_check__V_45_45));
#line 702 "inst_check.m"
          }
#line 702 "inst_check.m"
          {
#line 702 "inst_check.m"
            check_hlds__inst_check__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_43_43, 0) = ((MR_Box) (check_hlds__inst_check__V_44_44));
#line 702 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "inst_check.m"
          }
#line 701 "inst_check.m"
          {
#line 701 "inst_check.m"
            check_hlds__inst_check__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 701 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 701 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_18, 2) = ((MR_Box) (check_hlds__inst_check__V_43_43));
#line 701 "inst_check.m"
          }
#line 703 "inst_check.m"
          {
#line 703 "inst_check.m"
            MR_Word base;
#line 703 "inst_check.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_Specs_20 = base;
#line 703 "inst_check.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_18));
#line 703 "inst_check.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_19));
#line 703 "inst_check.m"
          }
#line 692 "inst_check.m"
        }
#line 691 "inst_check.m"
        break;
#line 691 "inst_check.m"
    }
#line 686 "inst_check.m"
  }
#line 683 "inst_check.m"
}

#line 649 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
#line 649 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 649 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 649 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
#line 649 "inst_check.m"
{
#line 652 "inst_check.m"
  {
#line 652 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 652 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 652 "inst_check.m"
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "inst_check.m"
    else
#line 654 "inst_check.m"
      {
#line 654 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorAndDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 654 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorAndDefns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 654 "inst_check.m"
        MR_Word check_hlds__inst_check__MatchingUserTypes0_9;
#line 654 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtor_10;
#line 654 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorSymName_12;
#line 654 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorModuleName_15;
#line 657 "inst_check.m"
        MR_Word check_hlds__inst_check___TypeDefn_11;
#line 658 "inst_check.m"
        MR_Integer check_hlds__inst_check___TypeCtorArity_13;

#line 655 "inst_check.m"
        {
#line 655 "inst_check.m"
          check_hlds__inst_check__find_matching_user_types_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__TypeCtorAndDefns_7, &check_hlds__inst_check__MatchingUserTypes0_9);
        }
#line 657 "inst_check.m"
        check_hlds__inst_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_6, (MR_Integer) 0)));
#line 657 "inst_check.m"
        check_hlds__inst_check___TypeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_6, (MR_Integer) 1)));
#line 658 "inst_check.m"
        check_hlds__inst_check__TypeCtorSymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_10, (MR_Integer) 0)));
#line 658 "inst_check.m"
        check_hlds__inst_check___TypeCtorArity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_10, (MR_Integer) 1)));
#line 662 "inst_check.m"
        if (((MR_tag((MR_Word) check_hlds__inst_check__TypeCtorSymName_12)) == (MR_mktag((MR_Integer) 1))))
#line 663 "inst_check.m"
          {
#line 663 "inst_check.m"
            MR_String check_hlds__inst_check__V_16_16;

#line 663 "inst_check.m"
            check_hlds__inst_check__TypeCtorModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_12, (MR_Integer) 0)));
#line 663 "inst_check.m"
            check_hlds__inst_check__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_12, (MR_Integer) 1)));
#line 663 "inst_check.m"
          }
#line 662 "inst_check.m"
        else
#line 660 "inst_check.m"
          {
#line 661 "inst_check.m"
            {
#line 661 "inst_check.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.find_matching_user_types\'/3", (MR_String) "TypeCtorSymName is unqualified");
#line 661 "inst_check.m"
              return;
            }
#line 660 "inst_check.m"
          }
#line 668 "inst_check.m"
        if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 669 "inst_check.m"
          {
#line 669 "inst_check.m"
            MR_Word check_hlds__inst_check__FunctorModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 669 "inst_check.m"
            MR_String check_hlds__inst_check__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));

#line 671 "inst_check.m"
            {
#line 671 "inst_check.m"
              check_hlds__inst_check__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(check_hlds__inst_check__FunctorModuleName_18, check_hlds__inst_check__TypeCtorModuleName_15);
            }
#line 676 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 674 "inst_check.m"
              {
#line 674 "inst_check.m"
                MR_Word check_hlds__inst_check__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__inst_check__TypeCtorAndDefn_6);

#line 674 "inst_check.m"
                {
#line 674 "inst_check.m"
                  MR_Word base;
#line 674 "inst_check.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "inst_check.m"
                  *check_hlds__inst_check__HeadVar__3_3 = base;
#line 674 "inst_check.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__V_23_23));
#line 674 "inst_check.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__MatchingUserTypes0_9));
#line 674 "inst_check.m"
                }
#line 674 "inst_check.m"
              }
#line 676 "inst_check.m"
            else
#line 677 "inst_check.m"
              *check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__MatchingUserTypes0_9;
#line 669 "inst_check.m"
          }
#line 668 "inst_check.m"
        else
#line 666 "inst_check.m"
          {
#line 666 "inst_check.m"
            MR_Word check_hlds__inst_check__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__inst_check__TypeCtorAndDefn_6);

#line 667 "inst_check.m"
            {
#line 667 "inst_check.m"
              MR_Word base;
#line 667 "inst_check.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "inst_check.m"
              *check_hlds__inst_check__HeadVar__3_3 = base;
#line 667 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__V_24_24));
#line 667 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__MatchingUserTypes0_9));
#line 667 "inst_check.m"
            }
#line 666 "inst_check.m"
          }
#line 654 "inst_check.m"
      }
#line 652 "inst_check.m"
  }
#line 649 "inst_check.m"
}

#line 559 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(
#line 559 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 559 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 559 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3,
#line 559 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4,
#line 559 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5,
#line 559 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6)
#line 559 "inst_check.m"
{
#line 564 "inst_check.m"
  while (MR_TRUE)
#line 564 "inst_check.m"
    {
#line 564 "inst_check.m"
      /* tailcall optimized into a loop */
#line 564 "inst_check.m"
      {
#line 564 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 564 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "inst_check.m"
          {
#line 565 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5;
#line 565 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3;
#line 564 "inst_check.m"
          }
#line 564 "inst_check.m"
        else
#line 567 "inst_check.m"
          {
#line 567 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 567 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 567 "inst_check.m"
            MR_Word check_hlds__inst_check__MaybePossibleTypes_19;
#line 567 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26;
#line 567 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27;
#line 567 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_15, (MR_Integer) 0)));
#line 589 "inst_check.m"
            MR_Word check_hlds__inst_check__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_15, (MR_Integer) 1)));

#line 617 "inst_check.m"
#line 617 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__ConsId_34)) {
#line 617 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 617 "inst_check.m"
              case (MR_Integer) 0:
#line 646 "inst_check.m"
                check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "inst_check.m"
                break;
#line 617 "inst_check.m"
              case (MR_Integer) 1:
#line 646 "inst_check.m"
                check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "inst_check.m"
                break;
#line 617 "inst_check.m"
              case (MR_Integer) 2:
#line 646 "inst_check.m"
                check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "inst_check.m"
                break;
#line 617 "inst_check.m"
              case (MR_Integer) 3:
#line 617 "inst_check.m"
#line 617 "inst_check.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 0)))) {
#line 617 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 617 "inst_check.m"
                  case (MR_Integer) 0:
#line 617 "inst_check.m"
                  case (MR_Integer) 1:
#line 617 "inst_check.m"
                  case (MR_Integer) 4:
#line 617 "inst_check.m"
                  case (MR_Integer) 9:
#line 617 "inst_check.m"
                  case (MR_Integer) 10:
#line 617 "inst_check.m"
                  case (MR_Integer) 11:
#line 617 "inst_check.m"
                  case (MR_Integer) 12:
#line 617 "inst_check.m"
                  case (MR_Integer) 13:
#line 617 "inst_check.m"
                  case (MR_Integer) 14:
#line 646 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "inst_check.m"
                    break;
#line 617 "inst_check.m"
                  case (MR_Integer) 2:
#line 591 "inst_check.m"
                    {
#line 591 "inst_check.m"
                      MR_Word check_hlds__inst_check__SymName_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 1)));
#line 591 "inst_check.m"
                      MR_Integer check_hlds__inst_check__Arity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 2)));
#line 591 "inst_check.m"
                      MR_String check_hlds__inst_check__Name_39;
#line 591 "inst_check.m"
                      MR_Word check_hlds__inst_check__FunctorNameAndArity_40;
#line 591 "inst_check.m"
                      MR_Word check_hlds__inst_check__UserTypes_42;
#line 591 "inst_check.m"
                      MR_Word check_hlds__inst_check__UserCharTypes_43;
#line 591 "inst_check.m"
                      MR_Word check_hlds__inst_check__Types_44;
#line 591 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 3)));
#line 599 "inst_check.m"
                      MR_Word check_hlds__inst_check__TypeCtorDefns_41;
#line 604 "inst_check.m"
                      MR_Integer check_hlds__inst_check__V_86_86;
#line 611 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_89_89;

#line 592 "inst_check.m"
                      {
#line 592 "inst_check.m"
                        check_hlds__inst_check__Name_39 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_36);
                      }
#line 593 "inst_check.m"
                      {
#line 593 "inst_check.m"
                        check_hlds__inst_check__FunctorNameAndArity_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__FunctorNameAndArity_40, 0) = ((MR_Box) (check_hlds__inst_check__Name_39));
#line 593 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__FunctorNameAndArity_40, 1) = ((MR_Box) (check_hlds__inst_check__Arity_37));
#line 593 "inst_check.m"
                      }
#line 595 "inst_check.m"
                      {
#line 595 "inst_check.m"
                        check_hlds__inst_check__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0, check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__FunctorNameAndArity_40)), &check_hlds__inst_check__TypeCtorDefns_41);
                      }
#line 599 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 598 "inst_check.m"
                        {
#line 598 "inst_check.m"
                          check_hlds__inst_check__find_matching_user_types_3_p_0(check_hlds__inst_check__SymName_36, check_hlds__inst_check__TypeCtorDefns_41, &check_hlds__inst_check__UserTypes_42);
                        }
#line 599 "inst_check.m"
                      else
#line 600 "inst_check.m"
                        check_hlds__inst_check__UserTypes_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "inst_check.m"
                      {
#line 604 "inst_check.m"
                        check_hlds__inst_check__V_86_86 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__Name_39);
                      }
#line 604 "inst_check.m"
                      check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_86_86 == (MR_Integer) 1);
#line 606 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 605 "inst_check.m"
                        {
#line 605 "inst_check.m"
                          {
#line 605 "inst_check.m"
                            check_hlds__inst_check__UserCharTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__UserCharTypes_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[0])));
#line 605 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__UserCharTypes_43, 1) = ((MR_Box) (check_hlds__inst_check__UserTypes_42));
#line 605 "inst_check.m"
                          }
#line 605 "inst_check.m"
                        }
#line 606 "inst_check.m"
                      else
#line 607 "inst_check.m"
                        check_hlds__inst_check__UserCharTypes_43 = check_hlds__inst_check__UserTypes_42;
#line 611 "inst_check.m"
                      {
#line 611 "inst_check.m"
                        check_hlds__inst_check__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 611 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_89_89, 0) = ((MR_Box) (check_hlds__inst_check__SymName_36));
#line 611 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_89_89, 1) = ((MR_Box) (check_hlds__inst_check__Arity_37));
#line 611 "inst_check.m"
                      }
#line 611 "inst_check.m"
                      {
#line 611 "inst_check.m"
                        check_hlds__inst_check__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__inst_check__V_89_89);
                      }
#line 613 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 612 "inst_check.m"
                        {
#line 612 "inst_check.m"
                          MR_Word check_hlds__inst_check__V_90_90;

#line 612 "inst_check.m"
                          {
#line 612 "inst_check.m"
                            check_hlds__inst_check__V_90_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 612 "inst_check.m"
                            MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_90_90, 0) = ((MR_Box) (check_hlds__inst_check__Arity_37));
#line 612 "inst_check.m"
                          }
#line 612 "inst_check.m"
                          {
#line 612 "inst_check.m"
                            check_hlds__inst_check__Types_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Types_44, 0) = ((MR_Box) (check_hlds__inst_check__V_90_90));
#line 612 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Types_44, 1) = ((MR_Box) (check_hlds__inst_check__UserCharTypes_43));
#line 612 "inst_check.m"
                          }
#line 612 "inst_check.m"
                        }
#line 613 "inst_check.m"
                      else
#line 614 "inst_check.m"
                        check_hlds__inst_check__Types_44 = check_hlds__inst_check__UserCharTypes_43;
#line 616 "inst_check.m"
                      {
#line 616 "inst_check.m"
                        check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 616 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, 0) = ((MR_Box) (check_hlds__inst_check__Types_44));
#line 616 "inst_check.m"
                      }
#line 591 "inst_check.m"
                    }
#line 617 "inst_check.m"
                    break;
#line 617 "inst_check.m"
                  case (MR_Integer) 3:
#line 618 "inst_check.m"
                    {
#line 618 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_83_83;
#line 618 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_84_84;
#line 618 "inst_check.m"
                      MR_Integer check_hlds__inst_check__Arity_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 1)));

#line 619 "inst_check.m"
                      {
#line 619 "inst_check.m"
                        check_hlds__inst_check__V_84_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 619 "inst_check.m"
                        MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_84_84, 0) = ((MR_Box) (check_hlds__inst_check__Arity_91));
#line 619 "inst_check.m"
                      }
#line 619 "inst_check.m"
                      {
#line 619 "inst_check.m"
                        check_hlds__inst_check__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_83_83, 0) = ((MR_Box) (check_hlds__inst_check__V_84_84));
#line 619 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "inst_check.m"
                      }
#line 619 "inst_check.m"
                      {
#line 619 "inst_check.m"
                        check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 619 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, 0) = ((MR_Box) (check_hlds__inst_check__V_83_83));
#line 619 "inst_check.m"
                      }
#line 618 "inst_check.m"
                    }
#line 617 "inst_check.m"
                    break;
#line 617 "inst_check.m"
                  case (MR_Integer) 5:
#line 622 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[5]);
#line 617 "inst_check.m"
                    break;
#line 617 "inst_check.m"
                  case (MR_Integer) 6:
#line 625 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[3]);
#line 617 "inst_check.m"
                    break;
#line 617 "inst_check.m"
                  case (MR_Integer) 7:
#line 628 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[1]);
#line 617 "inst_check.m"
                    break;
#line 617 "inst_check.m"
                  case (MR_Integer) 8:
#line 631 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[7]);
#line 617 "inst_check.m"
                    break;
#line 617 "inst_check.m"
                }
#line 617 "inst_check.m"
                break;
#line 617 "inst_check.m"
            }
#line 573 "inst_check.m"
            if ((check_hlds__inst_check__MaybePossibleTypes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "inst_check.m"
              {
#line 572 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27 = (MR_Integer) 0;
#line 571 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5;
#line 571 "inst_check.m"
              }
#line 573 "inst_check.m"
            else
#line 574 "inst_check.m"
              {
#line 574 "inst_check.m"
                MR_Word check_hlds__inst_check__PossibleTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, (MR_Integer) 0)));
#line 574 "inst_check.m"
                MR_Word check_hlds__inst_check__PossibleTypeSet_21;

#line 575 "inst_check.m"
                {
#line 575 "inst_check.m"
                  check_hlds__inst_check__PossibleTypeSet_21 = mercury__set__list_to_set_1_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, check_hlds__inst_check__PossibleTypes_20);
                }
#line 576 "inst_check.m"
                {
#line 576 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26, 0) = ((MR_Box) (check_hlds__inst_check__PossibleTypeSet_21));
#line 576 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5));
#line 576 "inst_check.m"
                }
#line 574 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3;
#line 574 "inst_check.m"
              }
#line 578 "inst_check.m"
            /* direct tailcall eliminated */
#line 578 "inst_check.m"
            {
#line 578 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__BoundInsts_16;
#line 578 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0__tmp_copy_3 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27;
#line 578 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0__tmp_copy_5 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26;

#line 578 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0__tmp_copy_5;
#line 578 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0__tmp_copy_3;
#line 578 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 578 "inst_check.m"
            }
#line 578 "inst_check.m"
            continue;
#line 567 "inst_check.m"
          }
#line 564 "inst_check.m"
      }
#line 564 "inst_check.m"
      break;
#line 564 "inst_check.m"
    }
#line 559 "inst_check.m"
}

#line 436 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_1(
#line 436 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 436 "inst_check.m"
{
#line 436 "inst_check.m"
  {
#line 436 "inst_check.m"
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 436 "inst_check.m"
    MR_builtin_longjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__commit_0, 1);
#line 436 "inst_check.m"
  }
#line 436 "inst_check.m"
}

#line 436 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_3(
#line 436 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 436 "inst_check.m"
{
#line 436 "inst_check.m"
  {
#line 436 "inst_check.m"
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 436 "inst_check.m"
    (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95 = ((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__conv0_Constructor_95);
#line 436 "inst_check.m"
    {
#line 436 "inst_check.m"
      check_hlds__inst_check__check_for_type_bound_insts_4_p_0_2(check_hlds__inst_check__env_ptr);
#line 436 "inst_check.m"
      return;
    }
#line 436 "inst_check.m"
  }
#line 436 "inst_check.m"
}

#line 436 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_2(
#line 436 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 436 "inst_check.m"
{
#line 436 "inst_check.m"
  {
#line 436 "inst_check.m"
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 436 "inst_check.m"
    {
#line 437 "inst_check.m"
      MR_Word check_hlds__inst_check__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95, (MR_Integer) 0)));
#line 437 "inst_check.m"
      MR_Word check_hlds__inst_check__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95, (MR_Integer) 1)));
#line 437 "inst_check.m"
      MR_Word check_hlds__inst_check__V_42_42;
#line 437 "inst_check.m"
      MR_Word check_hlds__inst_check__V_44_44;

#line 437 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorSymName_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95, (MR_Integer) 2)));
#line 437 "inst_check.m"
      check_hlds__inst_check__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95, (MR_Integer) 3)));
#line 437 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorArity_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95, (MR_Integer) 4)));
#line 437 "inst_check.m"
      check_hlds__inst_check__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95, (MR_Integer) 5)));
#line 438 "inst_check.m"
      {
#line 438 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__V_100_100 = mdbcomp__sym_name__unqualify_name_1_f_0((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorSymName_41);
      }
#line 438 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (strcmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsName_31, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__V_100_100) == 0);
#line 436 "inst_check.m"
      if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 436 "inst_check.m"
        {
#line 439 "inst_check.m"
          (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorArity_43 == (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsArity_17);
#line 439 "inst_check.m"
          if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 439 "inst_check.m"
            {
#line 439 "inst_check.m"
              check_hlds__inst_check__check_for_type_bound_insts_4_p_0_1(check_hlds__inst_check__env_ptr);
#line 439 "inst_check.m"
              return;
            }
#line 436 "inst_check.m"
        }
#line 436 "inst_check.m"
    }
#line 436 "inst_check.m"
  }
#line 436 "inst_check.m"
}

#line 436 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_4(
#line 436 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 436 "inst_check.m"
{
#line 436 "inst_check.m"
  {
#line 436 "inst_check.m"
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 436 "inst_check.m"
    if (MR_builtin_setjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__commit_0) == 0)
#line 436 "inst_check.m"
      {
#line 436 "inst_check.m"
        {
#line 436 "inst_check.m"
          {
#line 436 "inst_check.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__conv0_Constructor_95, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructors_22, check_hlds__inst_check__check_for_type_bound_insts_4_p_0_3, check_hlds__inst_check__env_ptr);
          }
#line 436 "inst_check.m"
        }
#line 436 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = MR_FALSE;
#line 436 "inst_check.m"
      }
#line 436 "inst_check.m"
    else
#line 436 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = MR_TRUE;
#line 436 "inst_check.m"
  }
#line 436 "inst_check.m"
}

#line 402 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0(
#line 402 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 402 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 402 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3,
#line 402 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_4)
#line 402 "inst_check.m"
{
#line 402 "inst_check.m"
  {
#line 402 "inst_check.m"
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s check_hlds__inst_check__env;

#line 405 "inst_check.m"
    while (MR_TRUE)
#line 405 "inst_check.m"
      {
#line 405 "inst_check.m"
        /* tailcall optimized into a loop */
#line 405 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_4 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 405 "inst_check.m"
        else
#line 407 "inst_check.m"
          {
#line 407 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 407 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 407 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_10, (MR_Integer) 0)));
#line 407 "inst_check.m"
            MR_String check_hlds__inst_check__ConsIdStr_15;
#line 407 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93;
#line 408 "inst_check.m"
            MR_Word check_hlds__inst_check__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_10, (MR_Integer) 1)));

#line 409 "inst_check.m"
            {
#line 409 "inst_check.m"
              check_hlds__inst_check__ConsIdStr_15 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(check_hlds__inst_check__ConsId_13);
            }
#line 480 "inst_check.m"
#line 480 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__ConsId_13)) {
#line 480 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 480 "inst_check.m"
              case (MR_Integer) 0:
#line 543 "inst_check.m"
                {
#line 543 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 543 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 543 "inst_check.m"
                }
#line 480 "inst_check.m"
                break;
#line 480 "inst_check.m"
              case (MR_Integer) 1:
#line 543 "inst_check.m"
                {
#line 543 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 543 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 543 "inst_check.m"
                }
#line 480 "inst_check.m"
                break;
#line 480 "inst_check.m"
              case (MR_Integer) 2:
#line 543 "inst_check.m"
                {
#line 543 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 543 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 543 "inst_check.m"
                }
#line 480 "inst_check.m"
                break;
#line 480 "inst_check.m"
              case (MR_Integer) 3:
#line 480 "inst_check.m"
#line 480 "inst_check.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_13, (MR_Integer) 0)))) {
#line 480 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 480 "inst_check.m"
                  case (MR_Integer) 0:
#line 480 "inst_check.m"
                  case (MR_Integer) 1:
#line 480 "inst_check.m"
                  case (MR_Integer) 3:
#line 480 "inst_check.m"
                  case (MR_Integer) 4:
#line 480 "inst_check.m"
                  case (MR_Integer) 9:
#line 480 "inst_check.m"
                  case (MR_Integer) 10:
#line 480 "inst_check.m"
                  case (MR_Integer) 11:
#line 480 "inst_check.m"
                  case (MR_Integer) 12:
#line 480 "inst_check.m"
                  case (MR_Integer) 13:
#line 480 "inst_check.m"
                  case (MR_Integer) 14:
#line 543 "inst_check.m"
                    {
#line 543 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "inst_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 543 "inst_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 543 "inst_check.m"
                    }
#line 480 "inst_check.m"
                    break;
#line 480 "inst_check.m"
                  case (MR_Integer) 2:
#line 411 "inst_check.m"
                    {
#line 411 "inst_check.m"
                      MR_Word check_hlds__inst_check__ConsSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_13, (MR_Integer) 1)));
#line 411 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_18_18;

#line 411 "inst_check.m"
                      (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_13, (MR_Integer) 2)));
#line 411 "inst_check.m"
                      check_hlds__inst_check__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_13, (MR_Integer) 3)));
#line 463 "inst_check.m"
#line 463 "inst_check.m"
                      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 463 "inst_check.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 463 "inst_check.m"
                        case (MR_Integer) 0:
#line 463 "inst_check.m"
#line 463 "inst_check.m"
                          switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
#line 463 "inst_check.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 463 "inst_check.m"
                            case (MR_Integer) 0:
#line 463 "inst_check.m"
                            case (MR_Integer) 1:
#line 463 "inst_check.m"
                            case (MR_Integer) 3:
#line 478 "inst_check.m"
                              {
#line 478 "inst_check.m"
                                check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "inst_check.m"
                                MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 478 "inst_check.m"
                                MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 478 "inst_check.m"
                              }
#line 463 "inst_check.m"
                              break;
#line 463 "inst_check.m"
                            case (MR_Integer) 2:
#line 470 "inst_check.m"
                              {
#line 466 "inst_check.m"
                                MR_Integer check_hlds__inst_check__V_90_90;
#line 466 "inst_check.m"
                                MR_String check_hlds__inst_check__ConsName_96;

#line 466 "inst_check.m"
                                (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__ConsSymName_16)) == (MR_mktag((MR_Integer) 0)));
#line 466 "inst_check.m"
                                if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 466 "inst_check.m"
                                  {
#line 466 "inst_check.m"
                                    check_hlds__inst_check__ConsName_96 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ConsSymName_16, (MR_Integer) 0)));
#line 467 "inst_check.m"
                                    {
#line 467 "inst_check.m"
                                      check_hlds__inst_check__V_90_90 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__ConsName_96);
                                    }
#line 467 "inst_check.m"
                                    (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__V_90_90 == (MR_Integer) 1);
#line 466 "inst_check.m"
                                  }
#line 470 "inst_check.m"
                                if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 470 "inst_check.m"
                                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 470 "inst_check.m"
                                else
#line 471 "inst_check.m"
                                  {
#line 471 "inst_check.m"
                                    check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "inst_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 471 "inst_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 471 "inst_check.m"
                                  }
#line 470 "inst_check.m"
                              }
#line 463 "inst_check.m"
                              break;
#line 463 "inst_check.m"
                          }
#line 463 "inst_check.m"
                          break;
#line 463 "inst_check.m"
                        case (MR_Integer) 1:
#line 413 "inst_check.m"
                          {
#line 413 "inst_check.m"
                            MR_Word check_hlds__inst_check__TypeCtor_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "inst_check.m"
                            MR_Word check_hlds__inst_check__TypeDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 413 "inst_check.m"
                            MR_Word check_hlds__inst_check__TypeDefnBody_21;

#line 414 "inst_check.m"
                            {
#line 414 "inst_check.m"
                              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDefn_20, &check_hlds__inst_check__TypeDefnBody_21);
                            }
#line 455 "inst_check.m"
#line 455 "inst_check.m"
                            switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnBody_21)) {
#line 455 "inst_check.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 455 "inst_check.m"
                              case (MR_Integer) 0:
#line 461 "inst_check.m"
                                {
#line 461 "inst_check.m"
                                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "inst_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 461 "inst_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 461 "inst_check.m"
                                }
#line 455 "inst_check.m"
                                break;
#line 455 "inst_check.m"
                              case (MR_Integer) 1:
#line 417 "inst_check.m"
                                {
#line 417 "inst_check.m"
                                  MR_Word check_hlds__inst_check__ModuleMismatch_32;
#line 417 "inst_check.m"
                                  MR_Word check_hlds__inst_check__ConsIdMismatch_45;
#line 416 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_23_23;
#line 416 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_24_24;
#line 416 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_25_25;
#line 416 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_26_26;
#line 416 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_27_27;
#line 416 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_28_28;
#line 416 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_29_29;
#line 416 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_30_30;

#line 416 "inst_check.m"
                                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructors_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 0)));
#line 416 "inst_check.m"
                                  check_hlds__inst_check__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 1)));
#line 416 "inst_check.m"
                                  check_hlds__inst_check__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 2)));
#line 416 "inst_check.m"
                                  check_hlds__inst_check__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 3)));
#line 416 "inst_check.m"
                                  check_hlds__inst_check__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 4)));
#line 416 "inst_check.m"
                                  check_hlds__inst_check__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 5)));
#line 416 "inst_check.m"
                                  check_hlds__inst_check__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 416 "inst_check.m"
                                  check_hlds__inst_check__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 416 "inst_check.m"
                                  check_hlds__inst_check__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 7)));
#line 421 "inst_check.m"
                                  if (((MR_tag((MR_Word) check_hlds__inst_check__ConsSymName_16)) == (MR_mktag((MR_Integer) 1))))
#line 422 "inst_check.m"
                                    {
#line 422 "inst_check.m"
                                      MR_Word check_hlds__inst_check__ConsModulename_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ConsSymName_16, (MR_Integer) 0)));
#line 422 "inst_check.m"
                                      MR_Word check_hlds__inst_check__TypeCtorSymName_34;
#line 423 "inst_check.m"
                                      MR_Integer check_hlds__inst_check__V_35_35;
#line 425 "inst_check.m"
                                      MR_Word check_hlds__inst_check__TypeCtormoduleName_36;
#line 425 "inst_check.m"
                                      MR_String check_hlds__inst_check__V_37_37;

#line 422 "inst_check.m"
                                      (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsName_31 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ConsSymName_16, (MR_Integer) 1)));
#line 423 "inst_check.m"
                                      check_hlds__inst_check__TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_19, (MR_Integer) 0)));
#line 423 "inst_check.m"
                                      check_hlds__inst_check__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_19, (MR_Integer) 1)));
#line 425 "inst_check.m"
                                      (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__TypeCtorSymName_34)) == (MR_mktag((MR_Integer) 1)));
#line 425 "inst_check.m"
                                      if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 425 "inst_check.m"
                                        {
#line 425 "inst_check.m"
                                          check_hlds__inst_check__TypeCtormoduleName_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_34, (MR_Integer) 0)));
#line 425 "inst_check.m"
                                          check_hlds__inst_check__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_34, (MR_Integer) 1)));
#line 426 "inst_check.m"
                                          {
#line 426 "inst_check.m"
                                            (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(check_hlds__inst_check__ConsModulename_33, check_hlds__inst_check__TypeCtormoduleName_36);
                                          }
#line 425 "inst_check.m"
                                        }
#line 430 "inst_check.m"
                                      if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 429 "inst_check.m"
                                        check_hlds__inst_check__ModuleMismatch_32 = (MR_Integer) 0;
#line 430 "inst_check.m"
                                      else
#line 431 "inst_check.m"
                                        check_hlds__inst_check__ModuleMismatch_32 = (MR_Integer) 1;
#line 422 "inst_check.m"
                                    }
#line 421 "inst_check.m"
                                  else
#line 419 "inst_check.m"
                                    {
#line 419 "inst_check.m"
                                      (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsName_31 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ConsSymName_16, (MR_Integer) 0)));
#line 420 "inst_check.m"
                                      check_hlds__inst_check__ModuleMismatch_32 = (MR_Integer) 0;
#line 419 "inst_check.m"
                                    }
#line 436 "inst_check.m"
                                  {
#line 436 "inst_check.m"
                                    check_hlds__inst_check__check_for_type_bound_insts_4_p_0_4(&check_hlds__inst_check__env);
                                  }
#line 443 "inst_check.m"
                                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 442 "inst_check.m"
                                    check_hlds__inst_check__ConsIdMismatch_45 = (MR_Integer) 0;
#line 443 "inst_check.m"
                                  else
#line 444 "inst_check.m"
                                    check_hlds__inst_check__ConsIdMismatch_45 = (MR_Integer) 1;
#line 447 "inst_check.m"
                                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__ModuleMismatch_32 == (MR_Integer) 0);
#line 447 "inst_check.m"
                                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 448 "inst_check.m"
                                    (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__ConsIdMismatch_45 == (MR_Integer) 0);
#line 451 "inst_check.m"
                                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 451 "inst_check.m"
                                    check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 451 "inst_check.m"
                                  else
#line 452 "inst_check.m"
                                    {
#line 452 "inst_check.m"
                                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "inst_check.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 452 "inst_check.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 452 "inst_check.m"
                                    }
#line 417 "inst_check.m"
                                }
#line 455 "inst_check.m"
                                break;
#line 455 "inst_check.m"
                              case (MR_Integer) 2:
#line 461 "inst_check.m"
                                {
#line 461 "inst_check.m"
                                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "inst_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 461 "inst_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 461 "inst_check.m"
                                }
#line 455 "inst_check.m"
                                break;
#line 455 "inst_check.m"
                              case (MR_Integer) 3:
#line 461 "inst_check.m"
                                {
#line 461 "inst_check.m"
                                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "inst_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 461 "inst_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 461 "inst_check.m"
                                }
#line 455 "inst_check.m"
                                break;
#line 455 "inst_check.m"
                            }
#line 413 "inst_check.m"
                          }
#line 463 "inst_check.m"
                          break;
#line 463 "inst_check.m"
                      }
#line 411 "inst_check.m"
                    }
#line 480 "inst_check.m"
                    break;
#line 480 "inst_check.m"
                  case (MR_Integer) 5:
#line 484 "inst_check.m"
#line 484 "inst_check.m"
                    switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 484 "inst_check.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 484 "inst_check.m"
                      case (MR_Integer) 0:
#line 484 "inst_check.m"
#line 484 "inst_check.m"
                        switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
#line 484 "inst_check.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 484 "inst_check.m"
                          case (MR_Integer) 0:
#line 483 "inst_check.m"
                            check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 484 "inst_check.m"
                            break;
#line 484 "inst_check.m"
                          case (MR_Integer) 1:
#line 484 "inst_check.m"
                          case (MR_Integer) 2:
#line 484 "inst_check.m"
                          case (MR_Integer) 3:
#line 490 "inst_check.m"
                            {
#line 490 "inst_check.m"
                              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 490 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 490 "inst_check.m"
                            }
#line 484 "inst_check.m"
                            break;
#line 484 "inst_check.m"
                        }
#line 484 "inst_check.m"
                        break;
#line 484 "inst_check.m"
                      case (MR_Integer) 1:
#line 490 "inst_check.m"
                        {
#line 490 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 490 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 490 "inst_check.m"
                        }
#line 484 "inst_check.m"
                        break;
#line 484 "inst_check.m"
                    }
#line 480 "inst_check.m"
                    break;
#line 480 "inst_check.m"
                  case (MR_Integer) 6:
#line 496 "inst_check.m"
#line 496 "inst_check.m"
                    switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 496 "inst_check.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 496 "inst_check.m"
                      case (MR_Integer) 0:
#line 496 "inst_check.m"
#line 496 "inst_check.m"
                        switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
#line 496 "inst_check.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 496 "inst_check.m"
                          case (MR_Integer) 0:
#line 496 "inst_check.m"
                          case (MR_Integer) 2:
#line 496 "inst_check.m"
                          case (MR_Integer) 3:
#line 502 "inst_check.m"
                            {
#line 502 "inst_check.m"
                              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 502 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 502 "inst_check.m"
                            }
#line 496 "inst_check.m"
                            break;
#line 496 "inst_check.m"
                          case (MR_Integer) 1:
#line 495 "inst_check.m"
                            check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 496 "inst_check.m"
                            break;
#line 496 "inst_check.m"
                        }
#line 496 "inst_check.m"
                        break;
#line 496 "inst_check.m"
                      case (MR_Integer) 1:
#line 502 "inst_check.m"
                        {
#line 502 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 502 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 502 "inst_check.m"
                        }
#line 496 "inst_check.m"
                        break;
#line 496 "inst_check.m"
                    }
#line 480 "inst_check.m"
                    break;
#line 480 "inst_check.m"
                  case (MR_Integer) 7:
#line 508 "inst_check.m"
#line 508 "inst_check.m"
                    switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 508 "inst_check.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 508 "inst_check.m"
                      case (MR_Integer) 0:
#line 508 "inst_check.m"
#line 508 "inst_check.m"
                        switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
#line 508 "inst_check.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 508 "inst_check.m"
                          case (MR_Integer) 0:
#line 508 "inst_check.m"
                          case (MR_Integer) 1:
#line 508 "inst_check.m"
                          case (MR_Integer) 3:
#line 514 "inst_check.m"
                            {
#line 514 "inst_check.m"
                              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 514 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 514 "inst_check.m"
                            }
#line 508 "inst_check.m"
                            break;
#line 508 "inst_check.m"
                          case (MR_Integer) 2:
#line 507 "inst_check.m"
                            check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 508 "inst_check.m"
                            break;
#line 508 "inst_check.m"
                        }
#line 508 "inst_check.m"
                        break;
#line 508 "inst_check.m"
                      case (MR_Integer) 1:
#line 514 "inst_check.m"
                        {
#line 514 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 514 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 514 "inst_check.m"
                        }
#line 508 "inst_check.m"
                        break;
#line 508 "inst_check.m"
                    }
#line 480 "inst_check.m"
                    break;
#line 480 "inst_check.m"
                  case (MR_Integer) 8:
#line 520 "inst_check.m"
#line 520 "inst_check.m"
                    switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 520 "inst_check.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 520 "inst_check.m"
                      case (MR_Integer) 0:
#line 520 "inst_check.m"
#line 520 "inst_check.m"
                        switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
#line 520 "inst_check.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 520 "inst_check.m"
                          case (MR_Integer) 0:
#line 520 "inst_check.m"
                          case (MR_Integer) 1:
#line 520 "inst_check.m"
                          case (MR_Integer) 2:
#line 526 "inst_check.m"
                            {
#line 526 "inst_check.m"
                              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 526 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 526 "inst_check.m"
                            }
#line 520 "inst_check.m"
                            break;
#line 520 "inst_check.m"
                          case (MR_Integer) 3:
#line 519 "inst_check.m"
                            check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 520 "inst_check.m"
                            break;
#line 520 "inst_check.m"
                        }
#line 520 "inst_check.m"
                        break;
#line 520 "inst_check.m"
                      case (MR_Integer) 1:
#line 526 "inst_check.m"
                        {
#line 526 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 526 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 526 "inst_check.m"
                        }
#line 520 "inst_check.m"
                        break;
#line 520 "inst_check.m"
                    }
#line 480 "inst_check.m"
                    break;
#line 480 "inst_check.m"
                }
#line 480 "inst_check.m"
                break;
#line 480 "inst_check.m"
            }
#line 545 "inst_check.m"
            /* direct tailcall eliminated */
#line 545 "inst_check.m"
            {
#line 545 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__BoundInsts_11;
#line 545 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0__tmp_copy_3 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93;

#line 545 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0__tmp_copy_3;
#line 545 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 545 "inst_check.m"
            }
#line 545 "inst_check.m"
            continue;
#line 407 "inst_check.m"
          }
#line 405 "inst_check.m"
        break;
#line 405 "inst_check.m"
      }
#line 402 "inst_check.m"
  }
#line 402 "inst_check.m"
}

#line 367 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(
#line 367 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3,
#line 367 "inst_check.m"
  MR_Word * check_hlds__inst_check__TypeCtor_4)
#line 367 "inst_check.m"
{
#line 372 "inst_check.m"
  {
#line 372 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 372 "inst_check.m"
#line 372 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3)) {
#line 372 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 372 "inst_check.m"
      case (MR_Integer) 0:
#line 372 "inst_check.m"
        {
#line 372 "inst_check.m"
          MR_Word check_hlds__inst_check__V_22_22 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3), (MR_Integer) 0);
#line 372 "inst_check.m"
          MR_Word check_hlds__inst_check__V_5_5;

#line 372 "inst_check.m"
          *check_hlds__inst_check__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_22_22, (MR_Integer) 0)));
#line 372 "inst_check.m"
          check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_22_22, (MR_Integer) 1)));
#line 372 "inst_check.m"
        }
#line 372 "inst_check.m"
        break;
#line 372 "inst_check.m"
      case (MR_Integer) 1:
#line 374 "inst_check.m"
        {
#line 374 "inst_check.m"
          MR_Word check_hlds__inst_check__BuiltinType_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

#line 378 "inst_check.m"
          *check_hlds__inst_check__TypeCtor_4 = ((&check_hlds__inst_check_vector_common_6[0 + check_hlds__inst_check__BuiltinType_6]))->check_hlds__inst_check__vector_common_type_6_0__vct_6_f_0;
#line 374 "inst_check.m"
        }
#line 372 "inst_check.m"
        break;
#line 372 "inst_check.m"
      case (MR_Integer) 2:
#line 389 "inst_check.m"
        {
#line 389 "inst_check.m"
          MR_Integer check_hlds__inst_check__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

#line 390 "inst_check.m"
          {
#line 390 "inst_check.m"
            MR_Word base;
#line 390 "inst_check.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "inst_check.m"
            *check_hlds__inst_check__TypeCtor_4 = base;
#line 390 "inst_check.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_3[12]));
#line 390 "inst_check.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__Arity_7));
#line 390 "inst_check.m"
          }
#line 389 "inst_check.m"
        }
#line 372 "inst_check.m"
        break;
#line 372 "inst_check.m"
    }
#line 372 "inst_check.m"
  }
#line 367 "inst_check.m"
}

#line 324 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_2(
#line 324 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 324 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 324 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 324 "inst_check.m"
{
#line 324 "inst_check.m"
  {
#line 324 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 324 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_TypeCtor_4;

#line 324 "inst_check.m"
    {
#line 324 "inst_check.m"
      check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_TypeCtor_4);
    }
#line 324 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_TypeCtor_4));
#line 324 "inst_check.m"
  }
#line 324 "inst_check.m"
}

#line 358 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1(
#line 358 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg)
#line 358 "inst_check.m"
{
#line 358 "inst_check.m"
  {
#line 358 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 358 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;

#line 358 "inst_check.m"
    {
#line 358 "inst_check.m"
      return check_hlds__inst_check__succeeded = check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__358__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 4))));
    }
#line 358 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 358 "inst_check.m"
  }
#line 358 "inst_check.m"
}

#line 225 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0(
#line 225 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeTable_8,
#line 225 "inst_check.m"
  MR_Word check_hlds__inst_check__FunctorsToTypesMap_9,
#line 225 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_10,
#line 225 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn0_11,
#line 225 "inst_check.m"
  MR_Word * check_hlds__inst_check__InstDefn_12,
#line 225 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_54,
#line 225 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_55)
#line 225 "inst_check.m"
{
#line 231 "inst_check.m"
  {
#line 231 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 231 "inst_check.m"
    MR_Word check_hlds__inst_check__InstVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_11, (MR_Integer) 0)));
#line 231 "inst_check.m"
    MR_Word check_hlds__inst_check__InstParams_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_11, (MR_Integer) 1)));
#line 231 "inst_check.m"
    MR_Word check_hlds__inst_check__InstBody_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_11, (MR_Integer) 2)));
#line 231 "inst_check.m"
    MR_Word check_hlds__inst_check__IFTC0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_11, (MR_Integer) 3)));
#line 231 "inst_check.m"
    MR_Word check_hlds__inst_check__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_11, (MR_Integer) 4)));
#line 231 "inst_check.m"
    MR_Word check_hlds__inst_check__Status_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_11, (MR_Integer) 5)));

#line 362 "inst_check.m"
    if ((check_hlds__inst_check__InstBody_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 363 "inst_check.m"
      {
#line 364 "inst_check.m"
        *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
#line 363 "inst_check.m"
        *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
#line 363 "inst_check.m"
      }
#line 362 "inst_check.m"
    else
#line 235 "inst_check.m"
      {
#line 235 "inst_check.m"
        MR_Word check_hlds__inst_check__Inst_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__InstBody_16, (MR_Integer) 0)));

#line 347 "inst_check.m"
#line 347 "inst_check.m"
        switch (MR_tag((MR_Word) check_hlds__inst_check__Inst_20)) {
#line 347 "inst_check.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 347 "inst_check.m"
          case (MR_Integer) 0:
#line 357 "inst_check.m"
            {
#line 357 "inst_check.m"
              MR_Word check_hlds__inst_check__V_56_56;

#line 358 "inst_check.m"
              {
#line 358 "inst_check.m"
                check_hlds__inst_check__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 358 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1]));
#line 358 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1));
#line 358 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 358 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 3) = ((MR_Box) (check_hlds__inst_check__IFTC0_17));
#line 358 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "inst_check.m"
              }
#line 358 "inst_check.m"
              {
#line 358 "inst_check.m"
                mercury__require__expect_4_p_0(check_hlds__inst_check__V_56_56, (MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "not bound, IFTC0 != iftc_not_applicable");
              }
#line 360 "inst_check.m"
              *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
#line 357 "inst_check.m"
              *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
#line 357 "inst_check.m"
            }
#line 347 "inst_check.m"
            break;
#line 347 "inst_check.m"
          case (MR_Integer) 1:
#line 347 "inst_check.m"
          case (MR_Integer) 2:
#line 357 "inst_check.m"
            {
#line 357 "inst_check.m"
              MR_Word check_hlds__inst_check__V_56_56;

#line 358 "inst_check.m"
              {
#line 358 "inst_check.m"
                check_hlds__inst_check__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 358 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1]));
#line 358 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1));
#line 358 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 358 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 3) = ((MR_Box) (check_hlds__inst_check__IFTC0_17));
#line 358 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "inst_check.m"
              }
#line 358 "inst_check.m"
              {
#line 358 "inst_check.m"
                mercury__require__expect_4_p_0(check_hlds__inst_check__V_56_56, (MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "not bound, IFTC0 != iftc_not_applicable");
              }
#line 360 "inst_check.m"
              *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
#line 357 "inst_check.m"
              *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
#line 357 "inst_check.m"
            }
#line 347 "inst_check.m"
            break;
#line 347 "inst_check.m"
          case (MR_Integer) 3:
#line 347 "inst_check.m"
#line 347 "inst_check.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_20, (MR_Integer) 0)))) {
#line 347 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 347 "inst_check.m"
              case (MR_Integer) 0:
#line 237 "inst_check.m"
                {
#line 237 "inst_check.m"
                  MR_Word check_hlds__inst_check__BoundInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_20, (MR_Integer) 3)));
#line 237 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_20, (MR_Integer) 1)));
#line 237 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_20, (MR_Integer) 2)));

#line 310 "inst_check.m"
#line 310 "inst_check.m"
                  switch (MR_tag((MR_Word) check_hlds__inst_check__IFTC0_17)) {
#line 310 "inst_check.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 310 "inst_check.m"
                    case (MR_Integer) 0:
#line 310 "inst_check.m"
#line 310 "inst_check.m"
                      switch (MR_unmkbody(check_hlds__inst_check__IFTC0_17)) {
#line 310 "inst_check.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 310 "inst_check.m"
                        case (MR_Integer) 0:
#line 341 "inst_check.m"
                          {
#line 344 "inst_check.m"
                            {
#line 344 "inst_check.m"
                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "bound, IFTC0 = iftc_not_applicable");
#line 344 "inst_check.m"
                              return;
                            }
#line 341 "inst_check.m"
                          }
#line 310 "inst_check.m"
                          break;
#line 310 "inst_check.m"
                        case (MR_Integer) 1:
#line 311 "inst_check.m"
                          {
#line 311 "inst_check.m"
                            MR_Word check_hlds__inst_check__TypeableFunctors_37;
#line 311 "inst_check.m"
                            MR_Word check_hlds__inst_check__PossibleTypeSets_38;

#line 312 "inst_check.m"
                            {
#line 312 "inst_check.m"
                              check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(check_hlds__inst_check__FunctorsToTypesMap_9, check_hlds__inst_check__BoundInsts_23, (MR_Integer) 1, &check_hlds__inst_check__TypeableFunctors_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__PossibleTypeSets_38);
                            }
#line 318 "inst_check.m"
#line 318 "inst_check.m"
                            switch (check_hlds__inst_check__TypeableFunctors_37) {
#line 318 "inst_check.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 318 "inst_check.m"
                              case (MR_Integer) 1:
#line 319 "inst_check.m"
                                {
#line 319 "inst_check.m"
                                  MR_Word check_hlds__inst_check__TypeCtorInfo_111_111 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
#line 319 "inst_check.m"
                                  MR_Word check_hlds__inst_check__PossibleTypesSet_39;
#line 319 "inst_check.m"
                                  MR_Word check_hlds__inst_check__PossibleTypes_40;
#line 319 "inst_check.m"
                                  MR_Word check_hlds__inst_check__PossibleTypeCtors_41;
#line 319 "inst_check.m"
                                  MR_Word check_hlds__inst_check__IFTC_106;

#line 320 "inst_check.m"
                                  {
#line 320 "inst_check.m"
                                    check_hlds__inst_check__PossibleTypesSet_39 = mercury__set__intersect_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_111_111, check_hlds__inst_check__PossibleTypeSets_38);
                                  }
#line 321 "inst_check.m"
                                  {
#line 321 "inst_check.m"
                                    check_hlds__inst_check__PossibleTypes_40 = mercury__set__to_sorted_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_111_111, check_hlds__inst_check__PossibleTypesSet_39);
                                  }
#line 322 "inst_check.m"
                                  {
#line 322 "inst_check.m"
                                    check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__BoundInsts_23, check_hlds__inst_check__PossibleTypes_40, check_hlds__inst_check__PossibleTypeSets_38, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54, check_hlds__inst_check__STATE_VARIABLE_Specs_55);
                                  }
#line 324 "inst_check.m"
                                  {
#line 324 "inst_check.m"
                                    mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_111_111, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[2], check_hlds__inst_check__PossibleTypes_40, &check_hlds__inst_check__PossibleTypeCtors_41);
                                  }
#line 326 "inst_check.m"
                                  {
#line 326 "inst_check.m"
                                    check_hlds__inst_check__IFTC_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "inst_check.m"
                                    MR_hl_field(MR_mktag(2), check_hlds__inst_check__IFTC_106, 0) = ((MR_Box) (check_hlds__inst_check__PossibleTypeCtors_41));
#line 326 "inst_check.m"
                                  }
#line 327 "inst_check.m"
                                  {
#line 327 "inst_check.m"
                                    MR_Word base;
#line 327 "inst_check.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 327 "inst_check.m"
                                    *check_hlds__inst_check__InstDefn_12 = base;
#line 327 "inst_check.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__InstVarSet_14));
#line 327 "inst_check.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__InstParams_15));
#line 327 "inst_check.m"
                                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_check__InstBody_16));
#line 327 "inst_check.m"
                                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__inst_check__IFTC_106));
#line 327 "inst_check.m"
                                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__inst_check__Context_18));
#line 327 "inst_check.m"
                                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__inst_check__Status_19));
#line 327 "inst_check.m"
                                  }
#line 319 "inst_check.m"
                                }
#line 318 "inst_check.m"
                                break;
#line 318 "inst_check.m"
                              case (MR_Integer) 0:
#line 316 "inst_check.m"
                                {
#line 317 "inst_check.m"
                                  *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
#line 316 "inst_check.m"
                                  *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
#line 316 "inst_check.m"
                                }
#line 318 "inst_check.m"
                                break;
#line 318 "inst_check.m"
                            }
#line 311 "inst_check.m"
                          }
#line 310 "inst_check.m"
                          break;
#line 310 "inst_check.m"
                        case (MR_Integer) 2:
#line 336 "inst_check.m"
                          {
#line 338 "inst_check.m"
                            {
#line 338 "inst_check.m"
                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "bound, IFTC0 = iftc_applicable_error");
#line 338 "inst_check.m"
                              return;
                            }
#line 336 "inst_check.m"
                          }
#line 310 "inst_check.m"
                          break;
#line 310 "inst_check.m"
                      }
#line 310 "inst_check.m"
                      break;
#line 310 "inst_check.m"
                    case (MR_Integer) 1:
#line 239 "inst_check.m"
                      {
#line 239 "inst_check.m"
                        MR_Word check_hlds__inst_check__ForTypeCtor0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__IFTC0_17, (MR_Integer) 0)));
#line 239 "inst_check.m"
                        MR_Word check_hlds__inst_check__ForTypeCtorName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor0_24, (MR_Integer) 0)));
#line 239 "inst_check.m"
                        MR_Integer check_hlds__inst_check__ForTypeCtorArity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor0_24, (MR_Integer) 1)));
#line 239 "inst_check.m"
                        MR_Word check_hlds__inst_check__IFTC_32;

#line 244 "inst_check.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_check__ForTypeCtorName_25)) == (MR_mktag((MR_Integer) 1))))
#line 244 "inst_check.m"
                          {
#line 244 "inst_check.m"
                            MR_String check_hlds__inst_check__V_116_116 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 1)));
#line 244 "inst_check.m"
                            MR_Word check_hlds__inst_check__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));
#line 244 "inst_check.m"
                            MR_String check_hlds__inst_check__V_125_125;

#line 244 "inst_check.m"
                            check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__V_116_116, (MR_String) "int") == 0);
#line 244 "inst_check.m"
                            if (check_hlds__inst_check__succeeded)
#line 244 "inst_check.m"
                              {
#line 244 "inst_check.m"
                                check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__V_117_117)) == (MR_mktag((MR_Integer) 0)));
#line 244 "inst_check.m"
                                if (check_hlds__inst_check__succeeded)
#line 244 "inst_check.m"
                                  {
#line 244 "inst_check.m"
                                    check_hlds__inst_check__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_117_117, (MR_Integer) 0)));
#line 244 "inst_check.m"
                                    if ((strcmp(check_hlds__inst_check__V_125_125, (MR_String) "") == 0))
#line 244 "inst_check.m"
                                      check_hlds__inst_check__succeeded = MR_TRUE;
#line 244 "inst_check.m"
                                    else
#line 244 "inst_check.m"
                                    if ((strcmp(check_hlds__inst_check__V_125_125, (MR_String) "int") == 0))
#line 245 "inst_check.m"
                                      check_hlds__inst_check__succeeded = MR_TRUE;
#line 244 "inst_check.m"
                                    else
#line 244 "inst_check.m"
                                      check_hlds__inst_check__succeeded = MR_FALSE;
#line 244 "inst_check.m"
                                  }
#line 244 "inst_check.m"
                              }
#line 244 "inst_check.m"
                          }
#line 244 "inst_check.m"
                        else
#line 243 "inst_check.m"
                          {
#line 243 "inst_check.m"
                            MR_String check_hlds__inst_check__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));

#line 243 "inst_check.m"
                            check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__V_80_80, (MR_String) "int") == 0);
#line 243 "inst_check.m"
                          }
#line 246 "inst_check.m"
                        if (check_hlds__inst_check__succeeded)
#line 247 "inst_check.m"
                          check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
#line 9712 "check_hlds.inst_check.c"
                        if (check_hlds__inst_check__succeeded)
#line 9714 "check_hlds.inst_check.c"
                          {
#line 9716 "check_hlds.inst_check.c"
                            MR_Word check_hlds__inst_check__ForTypeKind_33;
#line 9718 "check_hlds.inst_check.c"
                            MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_34;
#line 9720 "check_hlds.inst_check.c"
                            MR_Word check_hlds__inst_check__MismatchConsIdStrs_35;
#line 9722 "check_hlds.inst_check.c"
                            MR_Word check_hlds__inst_check__MatchSpecs_36;
#line 249 "inst_check.m"
                            MR_Word check_hlds__inst_check__ForTypeCtor_27;

#line 249 "inst_check.m"
                            {
#line 249 "inst_check.m"
                              check_hlds__inst_check__ForTypeCtor_27 = parse_tree__builtin_lib_types__int_type_ctor_0_f_0();
                            }
#line 250 "inst_check.m"
                            check_hlds__inst_check__ForTypeKind_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "inst_check.m"
                            {
#line 301 "inst_check.m"
                              check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_33, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_34);
                            }
#line 303 "inst_check.m"
                            {
#line 303 "inst_check.m"
                              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_34, &check_hlds__inst_check__MismatchConsIdStrs_35);
                            }
#line 304 "inst_check.m"
                            {
#line 304 "inst_check.m"
                              check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_33, check_hlds__inst_check__MismatchConsIdStrs_35, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_36);
                            }
#line 306 "inst_check.m"
                            {
#line 306 "inst_check.m"
                              *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_36, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                            }
#line 9754 "check_hlds.inst_check.c"
                          }
#line 9756 "check_hlds.inst_check.c"
                        else
#line 9758 "check_hlds.inst_check.c"
                          {
#line 253 "inst_check.m"
                            if (((MR_tag((MR_Word) check_hlds__inst_check__ForTypeCtorName_25)) == (MR_mktag((MR_Integer) 1))))
#line 253 "inst_check.m"
                              {
#line 253 "inst_check.m"
                                MR_String check_hlds__inst_check__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 1)));
#line 253 "inst_check.m"
                                MR_Word check_hlds__inst_check__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));
#line 253 "inst_check.m"
                                MR_String check_hlds__inst_check__V_126_126;

#line 253 "inst_check.m"
                                check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__V_118_118, (MR_String) "float") == 0);
#line 253 "inst_check.m"
                                if (check_hlds__inst_check__succeeded)
#line 253 "inst_check.m"
                                  {
#line 253 "inst_check.m"
                                    check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__V_119_119)) == (MR_mktag((MR_Integer) 0)));
#line 253 "inst_check.m"
                                    if (check_hlds__inst_check__succeeded)
#line 253 "inst_check.m"
                                      {
#line 253 "inst_check.m"
                                        check_hlds__inst_check__V_126_126 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_119_119, (MR_Integer) 0)));
#line 253 "inst_check.m"
                                        if ((strcmp(check_hlds__inst_check__V_126_126, (MR_String) "") == 0))
#line 253 "inst_check.m"
                                          check_hlds__inst_check__succeeded = MR_TRUE;
#line 253 "inst_check.m"
                                        else
#line 253 "inst_check.m"
                                        if ((strcmp(check_hlds__inst_check__V_126_126, (MR_String) "float") == 0))
#line 254 "inst_check.m"
                                          check_hlds__inst_check__succeeded = MR_TRUE;
#line 253 "inst_check.m"
                                        else
#line 253 "inst_check.m"
                                          check_hlds__inst_check__succeeded = MR_FALSE;
#line 253 "inst_check.m"
                                      }
#line 253 "inst_check.m"
                                  }
#line 253 "inst_check.m"
                              }
#line 253 "inst_check.m"
                            else
#line 252 "inst_check.m"
                              {
#line 252 "inst_check.m"
                                MR_String check_hlds__inst_check__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));

#line 252 "inst_check.m"
                                check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__V_88_88, (MR_String) "float") == 0);
#line 252 "inst_check.m"
                              }
#line 255 "inst_check.m"
                            if (check_hlds__inst_check__succeeded)
#line 256 "inst_check.m"
                              check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
#line 9820 "check_hlds.inst_check.c"
                            if (check_hlds__inst_check__succeeded)
#line 9822 "check_hlds.inst_check.c"
                              {
#line 9824 "check_hlds.inst_check.c"
                                MR_Word check_hlds__inst_check__ForTypeKind_128;
#line 9826 "check_hlds.inst_check.c"
                                MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_129;
#line 9828 "check_hlds.inst_check.c"
                                MR_Word check_hlds__inst_check__MismatchConsIdStrs_130;
#line 9830 "check_hlds.inst_check.c"
                                MR_Word check_hlds__inst_check__MatchSpecs_131;
#line 258 "inst_check.m"
                                MR_Word check_hlds__inst_check__ForTypeCtor_142;

#line 258 "inst_check.m"
                                {
#line 258 "inst_check.m"
                                  check_hlds__inst_check__ForTypeCtor_142 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
                                }
#line 259 "inst_check.m"
                                check_hlds__inst_check__ForTypeKind_128 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 301 "inst_check.m"
                                {
#line 301 "inst_check.m"
                                  check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_128, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_129);
                                }
#line 303 "inst_check.m"
                                {
#line 303 "inst_check.m"
                                  mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_129, &check_hlds__inst_check__MismatchConsIdStrs_130);
                                }
#line 304 "inst_check.m"
                                {
#line 304 "inst_check.m"
                                  check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_128, check_hlds__inst_check__MismatchConsIdStrs_130, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_131);
                                }
#line 306 "inst_check.m"
                                {
#line 306 "inst_check.m"
                                  *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_131, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                                }
#line 9862 "check_hlds.inst_check.c"
                              }
#line 9864 "check_hlds.inst_check.c"
                            else
#line 9866 "check_hlds.inst_check.c"
                              {
#line 264 "inst_check.m"
                                MR_String check_hlds__inst_check__CName_29;

#line 268 "inst_check.m"
                                check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
#line 264 "inst_check.m"
                                if (check_hlds__inst_check__succeeded)
#line 264 "inst_check.m"
                                  {
#line 262 "inst_check.m"
                                    if (((MR_tag((MR_Word) check_hlds__inst_check__ForTypeCtorName_25)) == (MR_mktag((MR_Integer) 1))))
#line 262 "inst_check.m"
                                      {
#line 262 "inst_check.m"
                                        MR_String check_hlds__inst_check__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 1)));
#line 262 "inst_check.m"
                                        MR_Word check_hlds__inst_check__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));
#line 262 "inst_check.m"
                                        MR_String check_hlds__inst_check__V_124_124;

#line 262 "inst_check.m"
                                        check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__V_121_121)) == (MR_mktag((MR_Integer) 0)));
#line 262 "inst_check.m"
                                        if (check_hlds__inst_check__succeeded)
#line 262 "inst_check.m"
                                          {
#line 262 "inst_check.m"
                                            check_hlds__inst_check__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_121_121, (MR_Integer) 0)));
#line 262 "inst_check.m"
                                            if ((strcmp(check_hlds__inst_check__V_124_124, (MR_String) "") == 0))
#line 262 "inst_check.m"
                                              {
#line 262 "inst_check.m"
                                                check_hlds__inst_check__CName_29 = check_hlds__inst_check__V_120_120;
#line 262 "inst_check.m"
                                                check_hlds__inst_check__succeeded = MR_TRUE;
#line 262 "inst_check.m"
                                              }
#line 262 "inst_check.m"
                                            else
#line 262 "inst_check.m"
                                            if ((strcmp(check_hlds__inst_check__V_124_124, (MR_String) "char") == 0))
#line 263 "inst_check.m"
                                              {
#line 263 "inst_check.m"
                                                check_hlds__inst_check__CName_29 = check_hlds__inst_check__V_120_120;
#line 263 "inst_check.m"
                                                check_hlds__inst_check__succeeded = MR_TRUE;
#line 263 "inst_check.m"
                                              }
#line 262 "inst_check.m"
                                            else
#line 262 "inst_check.m"
                                              check_hlds__inst_check__succeeded = MR_FALSE;
#line 262 "inst_check.m"
                                          }
#line 262 "inst_check.m"
                                      }
#line 262 "inst_check.m"
                                    else
#line 261 "inst_check.m"
                                      {
#line 261 "inst_check.m"
                                        check_hlds__inst_check__CName_29 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));
#line 261 "inst_check.m"
                                        check_hlds__inst_check__succeeded = MR_TRUE;
#line 261 "inst_check.m"
                                      }
#line 264 "inst_check.m"
                                    if (check_hlds__inst_check__succeeded)
#line 266 "inst_check.m"
                                      {
#line 266 "inst_check.m"
                                        if ((strcmp(check_hlds__inst_check__CName_29, (MR_String) "char") == 0))
#line 265 "inst_check.m"
                                          check_hlds__inst_check__succeeded = MR_TRUE;
#line 266 "inst_check.m"
                                        else
#line 266 "inst_check.m"
                                        if ((strcmp(check_hlds__inst_check__CName_29, (MR_String) "character") == 0))
#line 266 "inst_check.m"
                                          check_hlds__inst_check__succeeded = MR_TRUE;
#line 266 "inst_check.m"
                                        else
#line 266 "inst_check.m"
                                          check_hlds__inst_check__succeeded = MR_FALSE;
#line 266 "inst_check.m"
                                      }
#line 264 "inst_check.m"
                                  }
#line 9958 "check_hlds.inst_check.c"
                                if (check_hlds__inst_check__succeeded)
#line 9960 "check_hlds.inst_check.c"
                                  {
#line 9962 "check_hlds.inst_check.c"
                                    MR_Word check_hlds__inst_check__ForTypeKind_151;
#line 9964 "check_hlds.inst_check.c"
                                    MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_152;
#line 9966 "check_hlds.inst_check.c"
                                    MR_Word check_hlds__inst_check__MismatchConsIdStrs_153;
#line 9968 "check_hlds.inst_check.c"
                                    MR_Word check_hlds__inst_check__MatchSpecs_154;
#line 270 "inst_check.m"
                                    MR_Word check_hlds__inst_check__ForTypeCtor_172;

#line 270 "inst_check.m"
                                    {
#line 270 "inst_check.m"
                                      check_hlds__inst_check__ForTypeCtor_172 = parse_tree__builtin_lib_types__char_type_ctor_0_f_0();
                                    }
#line 271 "inst_check.m"
                                    check_hlds__inst_check__ForTypeKind_151 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 301 "inst_check.m"
                                    {
#line 301 "inst_check.m"
                                      check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_151, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_152);
                                    }
#line 303 "inst_check.m"
                                    {
#line 303 "inst_check.m"
                                      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_152, &check_hlds__inst_check__MismatchConsIdStrs_153);
                                    }
#line 304 "inst_check.m"
                                    {
#line 304 "inst_check.m"
                                      check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_151, check_hlds__inst_check__MismatchConsIdStrs_153, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_154);
                                    }
#line 306 "inst_check.m"
                                    {
#line 306 "inst_check.m"
                                      *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_154, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                                    }
#line 10000 "check_hlds.inst_check.c"
                                  }
#line 10002 "check_hlds.inst_check.c"
                                else
#line 10004 "check_hlds.inst_check.c"
                                  {
#line 274 "inst_check.m"
                                    if (((MR_tag((MR_Word) check_hlds__inst_check__ForTypeCtorName_25)) == (MR_mktag((MR_Integer) 1))))
#line 274 "inst_check.m"
                                      {
#line 274 "inst_check.m"
                                        MR_String check_hlds__inst_check__V_122_122 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 1)));
#line 274 "inst_check.m"
                                        MR_Word check_hlds__inst_check__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));
#line 274 "inst_check.m"
                                        MR_String check_hlds__inst_check__V_127_127;

#line 274 "inst_check.m"
                                        check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__V_122_122, (MR_String) "string") == 0);
#line 274 "inst_check.m"
                                        if (check_hlds__inst_check__succeeded)
#line 274 "inst_check.m"
                                          {
#line 274 "inst_check.m"
                                            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__V_123_123)) == (MR_mktag((MR_Integer) 0)));
#line 274 "inst_check.m"
                                            if (check_hlds__inst_check__succeeded)
#line 274 "inst_check.m"
                                              {
#line 274 "inst_check.m"
                                                check_hlds__inst_check__V_127_127 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_123_123, (MR_Integer) 0)));
#line 274 "inst_check.m"
                                                if ((strcmp(check_hlds__inst_check__V_127_127, (MR_String) "") == 0))
#line 274 "inst_check.m"
                                                  check_hlds__inst_check__succeeded = MR_TRUE;
#line 274 "inst_check.m"
                                                else
#line 274 "inst_check.m"
                                                if ((strcmp(check_hlds__inst_check__V_127_127, (MR_String) "string") == 0))
#line 275 "inst_check.m"
                                                  check_hlds__inst_check__succeeded = MR_TRUE;
#line 274 "inst_check.m"
                                                else
#line 274 "inst_check.m"
                                                  check_hlds__inst_check__succeeded = MR_FALSE;
#line 274 "inst_check.m"
                                              }
#line 274 "inst_check.m"
                                          }
#line 274 "inst_check.m"
                                      }
#line 274 "inst_check.m"
                                    else
#line 273 "inst_check.m"
                                      {
#line 273 "inst_check.m"
                                        MR_String check_hlds__inst_check__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));

#line 273 "inst_check.m"
                                        check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__V_101_101, (MR_String) "string") == 0);
#line 273 "inst_check.m"
                                      }
#line 277 "inst_check.m"
                                    if (check_hlds__inst_check__succeeded)
#line 278 "inst_check.m"
                                      check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
#line 10066 "check_hlds.inst_check.c"
                                    if (check_hlds__inst_check__succeeded)
#line 10068 "check_hlds.inst_check.c"
                                      {
#line 10070 "check_hlds.inst_check.c"
                                        MR_Word check_hlds__inst_check__ForTypeKind_174;
#line 10072 "check_hlds.inst_check.c"
                                        MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_175;
#line 10074 "check_hlds.inst_check.c"
                                        MR_Word check_hlds__inst_check__MismatchConsIdStrs_176;
#line 10076 "check_hlds.inst_check.c"
                                        MR_Word check_hlds__inst_check__MatchSpecs_177;
#line 280 "inst_check.m"
                                        MR_Word check_hlds__inst_check__ForTypeCtor_195;

#line 280 "inst_check.m"
                                        {
#line 280 "inst_check.m"
                                          check_hlds__inst_check__ForTypeCtor_195 = parse_tree__builtin_lib_types__string_type_ctor_0_f_0();
                                        }
#line 281 "inst_check.m"
                                        check_hlds__inst_check__ForTypeKind_174 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 301 "inst_check.m"
                                        {
#line 301 "inst_check.m"
                                          check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_174, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_175);
                                        }
#line 303 "inst_check.m"
                                        {
#line 303 "inst_check.m"
                                          mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_175, &check_hlds__inst_check__MismatchConsIdStrs_176);
                                        }
#line 304 "inst_check.m"
                                        {
#line 304 "inst_check.m"
                                          check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_174, check_hlds__inst_check__MismatchConsIdStrs_176, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_177);
                                        }
#line 306 "inst_check.m"
                                        {
#line 306 "inst_check.m"
                                          *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_177, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                                        }
#line 10108 "check_hlds.inst_check.c"
                                      }
#line 10110 "check_hlds.inst_check.c"
                                    else
#line 10112 "check_hlds.inst_check.c"
                                      {
#line 10114 "check_hlds.inst_check.c"
                                        MR_Word check_hlds__inst_check__ForTypeDefn_30;

#line 285 "inst_check.m"
                                        {
#line 285 "inst_check.m"
                                          check_hlds__inst_check__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__inst_check__TypeTable_8, check_hlds__inst_check__ForTypeCtor0_24, &check_hlds__inst_check__ForTypeDefn_30);
                                        }
#line 10122 "check_hlds.inst_check.c"
                                        if (check_hlds__inst_check__succeeded)
#line 10124 "check_hlds.inst_check.c"
                                          {
#line 10126 "check_hlds.inst_check.c"
                                            MR_Word check_hlds__inst_check__ForTypeKind_197;
#line 10128 "check_hlds.inst_check.c"
                                            MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_198;
#line 10130 "check_hlds.inst_check.c"
                                            MR_Word check_hlds__inst_check__MismatchConsIdStrs_199;
#line 10132 "check_hlds.inst_check.c"
                                            MR_Word check_hlds__inst_check__MatchSpecs_200;

#line 288 "inst_check.m"
                                            {
#line 288 "inst_check.m"
                                              check_hlds__inst_check__ForTypeKind_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "inst_check.m"
                                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeKind_197, 0) = ((MR_Box) (check_hlds__inst_check__ForTypeCtor0_24));
#line 288 "inst_check.m"
                                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeKind_197, 1) = ((MR_Box) (check_hlds__inst_check__ForTypeDefn_30));
#line 288 "inst_check.m"
                                            }
#line 301 "inst_check.m"
                                            {
#line 301 "inst_check.m"
                                              check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_197, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_198);
                                            }
#line 303 "inst_check.m"
                                            {
#line 303 "inst_check.m"
                                              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_198, &check_hlds__inst_check__MismatchConsIdStrs_199);
                                            }
#line 304 "inst_check.m"
                                            {
#line 304 "inst_check.m"
                                              check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_197, check_hlds__inst_check__MismatchConsIdStrs_199, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_200);
                                            }
#line 306 "inst_check.m"
                                            {
#line 306 "inst_check.m"
                                              *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_200, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                                            }
#line 10165 "check_hlds.inst_check.c"
                                          }
#line 10167 "check_hlds.inst_check.c"
                                        else
#line 10169 "check_hlds.inst_check.c"
                                          {
#line 296 "inst_check.m"
                                            {
#line 296 "inst_check.m"
                                              check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeCtor0_24, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54, check_hlds__inst_check__STATE_VARIABLE_Specs_55);
                                            }
#line 298 "inst_check.m"
                                            check_hlds__inst_check__IFTC_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10178 "check_hlds.inst_check.c"
                                          }
#line 10180 "check_hlds.inst_check.c"
                                      }
#line 10182 "check_hlds.inst_check.c"
                                  }
#line 10184 "check_hlds.inst_check.c"
                              }
#line 10186 "check_hlds.inst_check.c"
                          }
#line 308 "inst_check.m"
                        {
#line 308 "inst_check.m"
                          MR_Word base;
#line 308 "inst_check.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 308 "inst_check.m"
                          *check_hlds__inst_check__InstDefn_12 = base;
#line 308 "inst_check.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__InstVarSet_14));
#line 308 "inst_check.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__InstParams_15));
#line 308 "inst_check.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_check__InstBody_16));
#line 308 "inst_check.m"
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__inst_check__IFTC_32));
#line 308 "inst_check.m"
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__inst_check__Context_18));
#line 308 "inst_check.m"
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__inst_check__Status_19));
#line 308 "inst_check.m"
                        }
#line 239 "inst_check.m"
                      }
#line 310 "inst_check.m"
                      break;
#line 310 "inst_check.m"
                    case (MR_Integer) 2:
#line 331 "inst_check.m"
                      {
#line 333 "inst_check.m"
                        {
#line 333 "inst_check.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "bound, IFTC0 = iftc_applicable_known");
#line 333 "inst_check.m"
                          return;
                        }
#line 331 "inst_check.m"
                      }
#line 310 "inst_check.m"
                      break;
#line 310 "inst_check.m"
                  }
#line 237 "inst_check.m"
                }
#line 347 "inst_check.m"
                break;
#line 347 "inst_check.m"
              case (MR_Integer) 1:
#line 347 "inst_check.m"
              case (MR_Integer) 2:
#line 347 "inst_check.m"
              case (MR_Integer) 3:
#line 347 "inst_check.m"
              case (MR_Integer) 4:
#line 347 "inst_check.m"
              case (MR_Integer) 5:
#line 357 "inst_check.m"
                {
#line 357 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_56_56;

#line 358 "inst_check.m"
                  {
#line 358 "inst_check.m"
                    check_hlds__inst_check__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 358 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1]));
#line 358 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1));
#line 358 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 358 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 3) = ((MR_Box) (check_hlds__inst_check__IFTC0_17));
#line 358 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "inst_check.m"
                  }
#line 358 "inst_check.m"
                  {
#line 358 "inst_check.m"
                    mercury__require__expect_4_p_0(check_hlds__inst_check__V_56_56, (MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "not bound, IFTC0 != iftc_not_applicable");
                  }
#line 360 "inst_check.m"
                  *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
#line 357 "inst_check.m"
                  *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
#line 357 "inst_check.m"
                }
#line 347 "inst_check.m"
                break;
#line 347 "inst_check.m"
            }
#line 347 "inst_check.m"
            break;
#line 347 "inst_check.m"
        }
#line 235 "inst_check.m"
      }
#line 231 "inst_check.m"
  }
#line 225 "inst_check.m"
}

#line 207 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_6_p_0(
#line 207 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 207 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 207 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 207 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__4_4,
#line 207 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_5,
#line 207 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_6)
#line 207 "inst_check.m"
{
#line 213 "inst_check.m"
  {
#line 213 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 213 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 213 "inst_check.m"
      {
#line 214 "inst_check.m"
        *check_hlds__inst_check__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 214 "inst_check.m"
        *check_hlds__inst_check__STATE_VARIABLE_Specs_6 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_5;
#line 213 "inst_check.m"
      }
#line 213 "inst_check.m"
    else
#line 217 "inst_check.m"
      {
#line 217 "inst_check.m"
        MR_Word check_hlds__inst_check__InstIdDefnPair0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 217 "inst_check.m"
        MR_Word check_hlds__inst_check__InstIdDefnPairs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 217 "inst_check.m"
        MR_Word check_hlds__inst_check__InstIdDefnPair_16;
#line 217 "inst_check.m"
        MR_Word check_hlds__inst_check__InstIdDefnPairs_17;
#line 217 "inst_check.m"
        MR_Word check_hlds__inst_check__InstId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair0_14, (MR_Integer) 0)));
#line 217 "inst_check.m"
        MR_Word check_hlds__inst_check__InstDefn0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair0_14, (MR_Integer) 1)));
#line 217 "inst_check.m"
        MR_Word check_hlds__inst_check__InstDefn_21;
#line 217 "inst_check.m"
        MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_24_24;

#line 219 "inst_check.m"
        {
#line 219 "inst_check.m"
          check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__InstId_19, check_hlds__inst_check__InstDefn0_20, &check_hlds__inst_check__InstDefn_21, check_hlds__inst_check__STATE_VARIABLE_Specs_0_5, &check_hlds__inst_check__STATE_VARIABLE_Specs_24_24);
        }
#line 221 "inst_check.m"
        {
#line 221 "inst_check.m"
          check_hlds__inst_check__InstIdDefnPair_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair_16, 0) = ((MR_Box) (check_hlds__inst_check__InstId_19));
#line 221 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair_16, 1) = ((MR_Box) (check_hlds__inst_check__InstDefn_21));
#line 221 "inst_check.m"
        }
#line 222 "inst_check.m"
        {
#line 222 "inst_check.m"
          check_hlds__inst_check__check_inst_defns_have_matching_types_6_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__InstIdDefnPairs0_15, &check_hlds__inst_check__InstIdDefnPairs_17, check_hlds__inst_check__STATE_VARIABLE_Specs_24_24, check_hlds__inst_check__STATE_VARIABLE_Specs_6);
        }
#line 217 "inst_check.m"
        {
#line 217 "inst_check.m"
          MR_Word base;
#line 217 "inst_check.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "inst_check.m"
          *check_hlds__inst_check__HeadVar__4_4 = base;
#line 217 "inst_check.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__InstIdDefnPair_16));
#line 217 "inst_check.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__InstIdDefnPairs_17));
#line 217 "inst_check.m"
        }
#line 217 "inst_check.m"
      }
#line 213 "inst_check.m"
  }
#line 207 "inst_check.m"
}

#line 197 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(
#line 197 "inst_check.m"
  MR_Word check_hlds__inst_check__Ctor_3,
#line 197 "inst_check.m"
  MR_Word * check_hlds__inst_check__FunctorNameAndArity_4)
#line 197 "inst_check.m"
{
#line 200 "inst_check.m"
  {
#line 200 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 200 "inst_check.m"
    MR_Word check_hlds__inst_check__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 2)));
#line 200 "inst_check.m"
    MR_Integer check_hlds__inst_check__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 4)));
#line 200 "inst_check.m"
    MR_String check_hlds__inst_check__V_11_11;
#line 201 "inst_check.m"
    MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 0)));
#line 201 "inst_check.m"
    MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 1)));
#line 201 "inst_check.m"
    MR_Word check_hlds__inst_check___ArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 3)));
#line 201 "inst_check.m"
    MR_Word check_hlds__inst_check__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 5)));

#line 203 "inst_check.m"
    {
#line 203 "inst_check.m"
      check_hlds__inst_check__V_11_11 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_7);
    }
#line 203 "inst_check.m"
    {
#line 203 "inst_check.m"
      MR_Word base;
#line 203 "inst_check.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 203 "inst_check.m"
      *check_hlds__inst_check__FunctorNameAndArity_4 = base;
#line 203 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__V_11_11));
#line 203 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__Arity_9));
#line 203 "inst_check.m"
    }
#line 200 "inst_check.m"
  }
#line 197 "inst_check.m"
}

#line 135 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
#line 135 "inst_check.m"
  MR_Word check_hlds__inst_check__Section_3,
#line 135 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefn_4)
#line 135 "inst_check.m"
{
#line 138 "inst_check.m"
  {
#line 138 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 138 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeStatus_5;
#line 138 "inst_check.m"
    MR_Word check_hlds__inst_check__Status_10;

#line 139 "inst_check.m"
    {
#line 139 "inst_check.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__inst_check__TypeDefn_4, &check_hlds__inst_check__TypeStatus_5);
    }
#line 149 "inst_check.m"
    check_hlds__inst_check__Status_10 = (MR_Word) check_hlds__inst_check__TypeStatus_5;
#line 155 "inst_check.m"
#line 155 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__Status_10)) {
#line 155 "inst_check.m"
      default:
#line 155 "inst_check.m"
        check_hlds__inst_check__succeeded = MR_FALSE;
#line 155 "inst_check.m"
        break;
#line 155 "inst_check.m"
      case (MR_Integer) 0:
#line 155 "inst_check.m"
#line 155 "inst_check.m"
        switch (MR_unmkbody(check_hlds__inst_check__Status_10)) {
#line 155 "inst_check.m"
          default:
#line 155 "inst_check.m"
            check_hlds__inst_check__succeeded = MR_FALSE;
#line 155 "inst_check.m"
            break;
#line 155 "inst_check.m"
          case (MR_Integer) 3:
#line 154 "inst_check.m"
            check_hlds__inst_check__succeeded = MR_TRUE;
#line 155 "inst_check.m"
            break;
#line 155 "inst_check.m"
          case (MR_Integer) 4:
#line 155 "inst_check.m"
          case (MR_Integer) 5:
#line 155 "inst_check.m"
          case (MR_Integer) 6:
#line 155 "inst_check.m"
          case (MR_Integer) 7:
#line 155 "inst_check.m"
          case (MR_Integer) 8:
#line 10499 "check_hlds.inst_check.c"
            check_hlds__inst_check__succeeded = (check_hlds__inst_check__Section_3 == (MR_Integer) 1);
#line 155 "inst_check.m"
            break;
#line 155 "inst_check.m"
        }
#line 155 "inst_check.m"
        break;
#line 155 "inst_check.m"
      case (MR_Integer) 2:
#line 154 "inst_check.m"
        check_hlds__inst_check__succeeded = MR_TRUE;
#line 155 "inst_check.m"
        break;
#line 155 "inst_check.m"
    }
#line 138 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 138 "inst_check.m"
  }
#line 135 "inst_check.m"
}

#line 125 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2(
#line 125 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 125 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 125 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 125 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_3)
#line 125 "inst_check.m"
{
#line 125 "inst_check.m"
  {
#line 125 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 125 "inst_check.m"
    MR_Word check_hlds__inst_check__conv1_HeadVar__4_22;

#line 125 "inst_check.m"
    {
#line 125 "inst_check.m"
      check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__125__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2), &check_hlds__inst_check__conv1_HeadVar__4_22);
    }
#line 125 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_check__conv1_HeadVar__4_22));
#line 125 "inst_check.m"
  }
#line 125 "inst_check.m"
}

#line 187 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1(
#line 187 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 187 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 187 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 187 "inst_check.m"
{
#line 187 "inst_check.m"
  {
#line 187 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 187 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_FunctorNameAndArity_4;

#line 187 "inst_check.m"
    {
#line 187 "inst_check.m"
      check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_FunctorNameAndArity_4);
    }
#line 187 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_FunctorNameAndArity_4));
#line 187 "inst_check.m"
  }
#line 187 "inst_check.m"
}

#line 114 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(
#line 114 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 114 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2,
#line 114 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_3)
#line 114 "inst_check.m"
{
#line 118 "inst_check.m"
  while (MR_TRUE)
#line 118 "inst_check.m"
    {
#line 118 "inst_check.m"
      /* tailcall optimized into a loop */
#line 118 "inst_check.m"
      {
#line 118 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 118 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 118 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_3 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2;
#line 118 "inst_check.m"
        else
#line 120 "inst_check.m"
          {
#line 120 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeCtorDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 120 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeCtorDefns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorDefn_7, (MR_Integer) 0)));
#line 120 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorDefn_7, (MR_Integer) 1)));
#line 120 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18;
#line 122 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeStatus_29;
#line 122 "inst_check.m"
            MR_Word check_hlds__inst_check__Status_34;

#line 139 "inst_check.m"
            {
#line 139 "inst_check.m"
              hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__inst_check__TypeDefn_11, &check_hlds__inst_check__TypeStatus_29);
            }
#line 149 "inst_check.m"
            check_hlds__inst_check__Status_34 = (MR_Word) check_hlds__inst_check__TypeStatus_29;
#line 155 "inst_check.m"
#line 155 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__Status_34)) {
#line 155 "inst_check.m"
              default:
#line 155 "inst_check.m"
                check_hlds__inst_check__succeeded = MR_FALSE;
#line 155 "inst_check.m"
                break;
#line 155 "inst_check.m"
              case (MR_Integer) 0:
#line 155 "inst_check.m"
#line 155 "inst_check.m"
                switch (MR_unmkbody(check_hlds__inst_check__Status_34)) {
#line 155 "inst_check.m"
                  default:
#line 155 "inst_check.m"
                    check_hlds__inst_check__succeeded = MR_FALSE;
#line 155 "inst_check.m"
                    break;
#line 155 "inst_check.m"
                  case (MR_Integer) 3:
#line 154 "inst_check.m"
                    check_hlds__inst_check__succeeded = MR_TRUE;
#line 155 "inst_check.m"
                    break;
#line 155 "inst_check.m"
                  case (MR_Integer) 4:
#line 155 "inst_check.m"
                  case (MR_Integer) 5:
#line 155 "inst_check.m"
                  case (MR_Integer) 6:
#line 155 "inst_check.m"
                  case (MR_Integer) 7:
#line 155 "inst_check.m"
                  case (MR_Integer) 8:
#line 174 "inst_check.m"
                    check_hlds__inst_check__succeeded = MR_TRUE;
#line 155 "inst_check.m"
                    break;
#line 155 "inst_check.m"
                }
#line 155 "inst_check.m"
                break;
#line 155 "inst_check.m"
              case (MR_Integer) 2:
#line 154 "inst_check.m"
                check_hlds__inst_check__succeeded = MR_TRUE;
#line 155 "inst_check.m"
                break;
#line 155 "inst_check.m"
            }
#line 127 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 123 "inst_check.m"
              {
#line 123 "inst_check.m"
                MR_Word check_hlds__inst_check__TypeCtorAndDefn_12;
#line 123 "inst_check.m"
                MR_Word check_hlds__inst_check__Functors_13;
#line 123 "inst_check.m"
                MR_Word check_hlds__inst_check__V_17_17;
#line 123 "inst_check.m"
                MR_Word check_hlds__inst_check__TypeDefnBody_39;
#line 125 "inst_check.m"
                MR_Box check_hlds__inst_check__conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18;

#line 123 "inst_check.m"
                {
#line 123 "inst_check.m"
                  check_hlds__inst_check__TypeCtorAndDefn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_12, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtor_10));
#line 123 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_12, 1) = ((MR_Box) (check_hlds__inst_check__TypeDefn_11));
#line 123 "inst_check.m"
                }
#line 184 "inst_check.m"
                {
#line 184 "inst_check.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDefn_11, &check_hlds__inst_check__TypeDefnBody_39);
                }
#line 188 "inst_check.m"
#line 188 "inst_check.m"
                switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnBody_39)) {
#line 188 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 188 "inst_check.m"
                  case (MR_Integer) 0:
#line 194 "inst_check.m"
                    check_hlds__inst_check__Functors_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 188 "inst_check.m"
                    break;
#line 188 "inst_check.m"
                  case (MR_Integer) 1:
#line 186 "inst_check.m"
                    {
#line 186 "inst_check.m"
                      MR_Word check_hlds__inst_check__Constructors_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 0)));
#line 186 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 1)));
#line 186 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 2)));
#line 186 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 3)));
#line 186 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 4)));
#line 186 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 5)));
#line 186 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 186 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 186 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 7)));

#line 187 "inst_check.m"
                      {
#line 187 "inst_check.m"
                        mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[1], check_hlds__inst_check__Constructors_40, &check_hlds__inst_check__Functors_13);
                      }
#line 186 "inst_check.m"
                    }
#line 188 "inst_check.m"
                    break;
#line 188 "inst_check.m"
                  case (MR_Integer) 2:
#line 194 "inst_check.m"
                    check_hlds__inst_check__Functors_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 188 "inst_check.m"
                    break;
#line 188 "inst_check.m"
                  case (MR_Integer) 3:
#line 194 "inst_check.m"
                    check_hlds__inst_check__Functors_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 188 "inst_check.m"
                    break;
#line 188 "inst_check.m"
                }
#line 125 "inst_check.m"
                {
#line 125 "inst_check.m"
                  check_hlds__inst_check__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 125 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_17_17, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_5[0]));
#line 125 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_17_17, 1) = ((MR_Box) (check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2));
#line 125 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 125 "inst_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_17_17, 3) = ((MR_Box) (check_hlds__inst_check__TypeCtorAndDefn_12));
#line 125 "inst_check.m"
                }
#line 125 "inst_check.m"
                {
#line 125 "inst_check.m"
                  mercury__list__foldl_4_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[0], check_hlds__inst_check__V_17_17, check_hlds__inst_check__Functors_13, ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2)), &check_hlds__inst_check__conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18);
                }
#line 125 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18 = ((MR_Word) check_hlds__inst_check__conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18);
#line 123 "inst_check.m"
              }
#line 127 "inst_check.m"
            else
#line 127 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2;
#line 130 "inst_check.m"
            /* direct tailcall eliminated */
#line 130 "inst_check.m"
            {
#line 130 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__1__tmp_copy_1 = check_hlds__inst_check__TypeCtorDefns_8;
#line 130 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0__tmp_copy_2 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18;

#line 130 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0__tmp_copy_2;
#line 130 "inst_check.m"
              check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__HeadVar__1__tmp_copy_1;
#line 130 "inst_check.m"
            }
#line 130 "inst_check.m"
            continue;
#line 120 "inst_check.m"
          }
#line 118 "inst_check.m"
      }
#line 118 "inst_check.m"
      break;
#line 118 "inst_check.m"
    }
#line 114 "inst_check.m"
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
#line 89 "inst_check.m"
  {
#line 89 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 89 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_23_23;
#line 89 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_24_24;
#line 89 "inst_check.m"
    MR_Word check_hlds__inst_check__InstTable0_7;
#line 89 "inst_check.m"
    MR_Word check_hlds__inst_check__UserInstTable0_8;
#line 89 "inst_check.m"
    MR_Word check_hlds__inst_check__InstIdDefnPairs0_9;
#line 89 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeTable_10;
#line 89 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorsDefns_11;
#line 89 "inst_check.m"
    MR_Word check_hlds__inst_check__FunctorsToTypeDefns_12;
#line 89 "inst_check.m"
    MR_Word check_hlds__inst_check__InstIdDefnPairs_13;
#line 89 "inst_check.m"
    MR_Word check_hlds__inst_check__UserInstTable_14;
#line 89 "inst_check.m"
    MR_Word check_hlds__inst_check__InstTable_15;
#line 89 "inst_check.m"
    MR_Word check_hlds__inst_check__V_20_20;

#line 90 "inst_check.m"
    {
#line 90 "inst_check.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__inst_check__InstTable0_7);
    }
#line 91 "inst_check.m"
    {
#line 91 "inst_check.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(check_hlds__inst_check__InstTable0_7, &check_hlds__inst_check__UserInstTable0_8);
    }
#line 10882 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0;
#line 10884 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;
#line 92 "inst_check.m"
    {
#line 92 "inst_check.m"
      mercury__map__to_sorted_assoc_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_23_23, check_hlds__inst_check__TypeCtorInfo_24_24, check_hlds__inst_check__UserInstTable0_8, &check_hlds__inst_check__InstIdDefnPairs0_9);
    }
#line 93 "inst_check.m"
    {
#line 93 "inst_check.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__inst_check__TypeTable_10);
    }
#line 94 "inst_check.m"
    {
#line 94 "inst_check.m"
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(check_hlds__inst_check__TypeTable_10, &check_hlds__inst_check__TypeCtorsDefns_11);
    }
#line 96 "inst_check.m"
    {
#line 96 "inst_check.m"
      check_hlds__inst_check__V_20_20 = mercury__multi_map__init_0_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0);
    }
#line 95 "inst_check.m"
    {
#line 95 "inst_check.m"
      check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(check_hlds__inst_check__TypeCtorsDefns_11, check_hlds__inst_check__V_20_20, &check_hlds__inst_check__FunctorsToTypeDefns_12);
    }
#line 97 "inst_check.m"
    {
#line 97 "inst_check.m"
      check_hlds__inst_check__check_inst_defns_have_matching_types_6_p_0(check_hlds__inst_check__TypeTable_10, check_hlds__inst_check__FunctorsToTypeDefns_12, check_hlds__inst_check__InstIdDefnPairs0_9, &check_hlds__inst_check__InstIdDefnPairs_13, check_hlds__inst_check__STATE_VARIABLE_Specs_0_18, check_hlds__inst_check__STATE_VARIABLE_Specs_19);
    }
#line 99 "inst_check.m"
    {
#line 99 "inst_check.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_23_23, check_hlds__inst_check__TypeCtorInfo_24_24, check_hlds__inst_check__InstIdDefnPairs_13, &check_hlds__inst_check__UserInstTable_14);
    }
#line 100 "inst_check.m"
    {
#line 100 "inst_check.m"
      hlds__hlds_data__inst_table_set_user_insts_3_p_0(check_hlds__inst_check__UserInstTable_14, check_hlds__inst_check__InstTable0_7, &check_hlds__inst_check__InstTable_15);
    }
#line 101 "inst_check.m"
    {
#line 101 "inst_check.m"
      hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_check__InstTable_15, check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_17);
#line 101 "inst_check.m"
      return;
    }
#line 89 "inst_check.m"
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

	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_for_type_kind_0);
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
