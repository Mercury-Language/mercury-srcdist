/*
** Automatically generated from `inst_check.m'
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
#include "transform_hlds.mih"
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
#include "libs.op_mode.mih"
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
#include "parse_tree.maybe_error.mih"
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



#line 792 "inst_check.m"
struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s {
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11;
#line 798 "inst_check.m"
  MR_bool check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded;
#line 838 "inst_check.m"
  jmp_buf check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__commit_0;
#line 838 "inst_check.m"
  MR_Word check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_118;
#line 838 "inst_check.m"
  MR_Box check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__conv1_Type_118;
#line 792 "inst_check.m"
};

#line 403 "inst_check.m"
struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s {
#line 406 "inst_check.m"
  MR_bool check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded;
#line 412 "inst_check.m"
  MR_Integer check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsArity_17;
#line 418 "inst_check.m"
  MR_Word check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructors_22;
#line 418 "inst_check.m"
  MR_String check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsName_31;
#line 437 "inst_check.m"
  jmp_buf check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__commit_0;
#line 437 "inst_check.m"
  MR_Word check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorSymName_41;
#line 437 "inst_check.m"
  MR_Integer check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorArity_43;
#line 437 "inst_check.m"
  MR_Word check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95;
#line 437 "inst_check.m"
  MR_String check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__V_100_100;
#line 437 "inst_check.m"
  MR_Box check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__conv0_Constructor_95;
#line 403 "inst_check.m"
};


#line 189 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

#line 192 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

#line 195 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0;

#line 198 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0[2];

#line 201 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0;

#line 204 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1;

#line 207 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_2;

#line 210 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_3;

#line 213 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_4;

#line 216 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_0[4];

#line 219 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_1[1];

#line 222 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_for_type_kind_0[2];

#line 225 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_for_type_kind_0[5];

#line 228 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_for_type_kind_0[5];

#line 231 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0[2];

#line 234 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0;

#line 237 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0[1];

#line 240 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0[1];

#line 243 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0[1];

#line 246 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0[1];

#line 249 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

#line 252 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 255 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0[3];

#line 258 "check_hlds.inst_check.c"
static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0[3];

#line 261 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0;

#line 264 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0[1];

#line 267 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0[1];

#line 270 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0[1];

#line 273 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0[1];

#line 276 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0[2];

#line 279 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0;

#line 282 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0[1];

#line 285 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0[1];

#line 288 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0[1];

#line 291 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0[1];

#line 294 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1];

#line 297 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0;

#line 300 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1];

#line 303 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1;

#line 306 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1];

#line 309 "check_hlds.inst_check.c"
static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2;

#line 312 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[1];

#line 315 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[1];

#line 318 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[1];

#line 321 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0[3];

#line 324 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0[3];

#line 327 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0[3];

#line 330 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0;

#line 333 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1;

#line 336 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_value_ordered_typeable_functors_0[2];

#line 339 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0[2];

#line 342 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0[2];

#line 345 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0_10001(
#line 348 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 350 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 353 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0_10001(
#line 356 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 358 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 360 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 363 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001(
#line 366 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 368 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 371 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001(
#line 374 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 376 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 378 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 381 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001(
#line 384 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 386 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 389 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001(
#line 392 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 394 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 396 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 399 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001(
#line 402 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 404 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 407 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001(
#line 410 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 412 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 414 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 417 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001(
#line 420 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 422 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 425 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001(
#line 428 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 430 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 432 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 435 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
#line 438 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 440 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 443 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
#line 446 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 448 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 450 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 453 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0_10001(
#line 456 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 458 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2);

#line 461 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0_10001(
#line 464 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 466 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 468 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3);

#line 359 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__359__1_2_p_0(
#line 359 "inst_check.m"
  MR_Word check_hlds__inst_check__IFTC0_17,
#line 359 "inst_check.m"
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

#line 551 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
#line 551 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 551 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 551 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 551 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0(
#line 551 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_1,
#line 551 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 555 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
#line 555 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 555 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 555 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 555 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
#line 555 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 555 "inst_check.m"
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

#line 885 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
#line 885 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 885 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 885 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 885 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
#line 885 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 885 "inst_check.m"
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

#line 396 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0(
#line 396 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 396 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 396 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3);

#line 396 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0(
#line 396 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 396 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2);

#line 1163 "inst_check.m"
static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
#line 1163 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3);

#line 1151 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(
#line 1151 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 1151 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 1151 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

#line 1128 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
#line 1128 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 1128 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 1128 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

#line 1107 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_mismatch_pieces_2_p_0(
#line 1107 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 1107 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__2_2);

#line 1091 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_mismatch_6_p_0(
#line 1091 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_7,
#line 1091 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInst_8,
#line 1091 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16,
#line 1091 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17,
#line 1091 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18,
#line 1091 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19);

#line 1080 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0_1(
#line 1080 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 1080 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1080 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 1072 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0(
#line 1072 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_9,
#line 1072 "inst_check.m"
  MR_String check_hlds__inst_check__FunctorName_10,
#line 1072 "inst_check.m"
  MR_Integer check_hlds__inst_check__ActualArity_11,
#line 1072 "inst_check.m"
  MR_Word check_hlds__inst_check__ExpectedAritiesSet_12,
#line 1072 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22,
#line 1072 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23,
#line 1072 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24,
#line 1072 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25);

#line 1049 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(
#line 1049 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 1049 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 1049 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 1049 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 1049 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 1049 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 1049 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

#line 1000 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(
#line 1000 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 1000 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 1000 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 1000 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 1000 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 1000 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 1000 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

#line 978 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(
#line 978 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 978 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 978 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3,
#line 978 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4,
#line 978 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5);

#line 961 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(
#line 961 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 961 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 961 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3);

#line 928 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0(
#line 928 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 928 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 928 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 928 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 928 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 928 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 928 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

#line 892 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
#line 892 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_4,
#line 892 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_5,
#line 892 "inst_check.m"
  MR_Word * check_hlds__inst_check__MismatchFromType_6);

#line 866 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_6(
#line 866 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 866 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1);

#line 815 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_1(
#line 815 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 815 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 815 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 838 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_2(
#line 838 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 838 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_4(
#line 838 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 838 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_3(
#line 838 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 838 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_5(
#line 838 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 792 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0(
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_8,
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_9,
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_10,
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypes_11,
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypeSets_12,
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_43,
#line 792 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_44);

#line 707 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(
#line 707 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_7,
#line 707 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_8,
#line 707 "inst_check.m"
  MR_Word check_hlds__inst_check__ForTypeKind_9,
#line 707 "inst_check.m"
  MR_Word check_hlds__inst_check__MismatchConsIdStrs_10,
#line 707 "inst_check.m"
  MR_Word * check_hlds__inst_check__IFTC_11,
#line 707 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_35);

#line 684 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(
#line 684 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_6,
#line 684 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_7,
#line 684 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeCtor_8,
#line 684 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_19,
#line 684 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_20);

#line 650 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
#line 650 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 650 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 650 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

#line 560 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(
#line 560 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 560 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 560 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3,
#line 560 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4,
#line 560 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5,
#line 560 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6);

#line 437 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_1(
#line 437 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 437 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_3(
#line 437 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 437 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_2(
#line 437 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 437 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_4(
#line 437 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg);

#line 403 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0(
#line 403 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 403 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 403 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3,
#line 403 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_4);

#line 368 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(
#line 368 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3,
#line 368 "inst_check.m"
  MR_Word * check_hlds__inst_check__TypeCtor_4);

#line 325 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_2(
#line 325 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 325 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 325 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

#line 359 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1(
#line 359 "inst_check.m"
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


#line 379 "inst_check.m"
/* sealed */ struct check_hlds__inst_check__vector_common_type_6_0_s {
#line 379 "inst_check.m"
  const MR_Word check_hlds__inst_check__vector_common_type_6_0__vct_6_f_0;
#line 379 "inst_check.m"
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_6_0_s check_hlds__inst_check_vector_common_6[4];

#line 1174 "inst_check.m"
/* sealed */ struct check_hlds__inst_check__vector_common_type_8_0_s {
#line 1174 "inst_check.m"
  const MR_String check_hlds__inst_check__vector_common_type_8_0__vct_8_f_0;
#line 1174 "inst_check.m"
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



#line 1503 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
  }
};

#line 1511 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0,
    (MR_PseudoTypeInfo) &check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
  }
};

#line 1520 "check_hlds.inst_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0
  }
};

#line 1528 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
};

#line 1534 "check_hlds.inst_check.c"
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

#line 1549 "check_hlds.inst_check.c"
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

#line 1564 "check_hlds.inst_check.c"
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

#line 1579 "check_hlds.inst_check.c"
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

#line 1594 "check_hlds.inst_check.c"
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

#line 1609 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_0[4] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_2,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_3,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_4
};

#line 1617 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_1[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0
};

#line 1622 "check_hlds.inst_check.c"
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

#line 1636 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_for_type_kind_0[5] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_3,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_2,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_4,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0
};

#line 1645 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_for_type_kind_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1654 "check_hlds.inst_check.c"
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

#line 1671 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1677 "check_hlds.inst_check.c"
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

#line 1692 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0
};

#line 1697 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0
  }
};

#line 1706 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0
};

#line 1711 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0[1] = {
  (MR_Integer) 0
};

#line 1716 "check_hlds.inst_check.c"
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

#line 1733 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0,
    (MR_TypeInfo) &check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
  }
};

#line 1742 "check_hlds.inst_check.c"
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

#line 1759 "check_hlds.inst_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1767 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 1774 "check_hlds.inst_check.c"
static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0[3] = {
  (MR_String) "mft_num_mismatches",
  (MR_String) "mft_type",
  (MR_String) "mft_pieces"
};

#line 1781 "check_hlds.inst_check.c"
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

#line 1796 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0
};

#line 1801 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0
  }
};

#line 1810 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0
};

#line 1815 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0[1] = {
  (MR_Integer) 0
};

#line 1820 "check_hlds.inst_check.c"
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

#line 1837 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
};

#line 1843 "check_hlds.inst_check.c"
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

#line 1858 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0
};

#line 1863 "check_hlds.inst_check.c"
static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0
  }
};

#line 1872 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0
};

#line 1877 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0[1] = {
  (MR_Integer) 0
};

#line 1882 "check_hlds.inst_check.c"
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

#line 1899 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
};

#line 1904 "check_hlds.inst_check.c"
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

#line 1919 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0
};

#line 1924 "check_hlds.inst_check.c"
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

#line 1939 "check_hlds.inst_check.c"
static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1944 "check_hlds.inst_check.c"
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

#line 1959 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0
};

#line 1964 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1
};

#line 1969 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2
};

#line 1974 "check_hlds.inst_check.c"
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

#line 1993 "check_hlds.inst_check.c"
static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0[3] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0
};

#line 2000 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2007 "check_hlds.inst_check.c"
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

#line 2024 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0 = {
  (MR_String) "some_untypeable_functors",
  (MR_Integer) 0
};

#line 2030 "check_hlds.inst_check.c"
static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1 = {
  (MR_String) "all_typeable_functors",
  (MR_Integer) 1
};

#line 2036 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_value_ordered_typeable_functors_0[2] = {
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0,
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1
};

#line 2042 "check_hlds.inst_check.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0[2] = {
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0
};

#line 2048 "check_hlds.inst_check.c"
static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2054 "check_hlds.inst_check.c"
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

#line 2071 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0_10001(
#line 2074 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2076 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2078 "check_hlds.inst_check.c"
{
#line 2080 "check_hlds.inst_check.c"
  {
#line 2082 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2085 "check_hlds.inst_check.c"
    {
#line 2087 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____for_type_kind_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2090 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2092 "check_hlds.inst_check.c"
  }
#line 2094 "check_hlds.inst_check.c"
}

#line 2097 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0_10001(
#line 2100 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2102 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2104 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2106 "check_hlds.inst_check.c"
{
#line 2108 "check_hlds.inst_check.c"
  {
#line 2110 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2113 "check_hlds.inst_check.c"
    {
#line 2115 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____for_type_kind_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2118 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2120 "check_hlds.inst_check.c"
  }
#line 2122 "check_hlds.inst_check.c"
}

#line 2125 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001(
#line 2128 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2130 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2132 "check_hlds.inst_check.c"
{
#line 2134 "check_hlds.inst_check.c"
  {
#line 2136 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2139 "check_hlds.inst_check.c"
    {
#line 2141 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____functor_name_and_arity_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2144 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2146 "check_hlds.inst_check.c"
  }
#line 2148 "check_hlds.inst_check.c"
}

#line 2151 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001(
#line 2154 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2156 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2158 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2160 "check_hlds.inst_check.c"
{
#line 2162 "check_hlds.inst_check.c"
  {
#line 2164 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2167 "check_hlds.inst_check.c"
    {
#line 2169 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____functor_name_and_arity_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2172 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2174 "check_hlds.inst_check.c"
  }
#line 2176 "check_hlds.inst_check.c"
}

#line 2179 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001(
#line 2182 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2184 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2186 "check_hlds.inst_check.c"
{
#line 2188 "check_hlds.inst_check.c"
  {
#line 2190 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2193 "check_hlds.inst_check.c"
    {
#line 2195 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____functors_to_types_map_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2198 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2200 "check_hlds.inst_check.c"
  }
#line 2202 "check_hlds.inst_check.c"
}

#line 2205 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001(
#line 2208 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2210 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2212 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2214 "check_hlds.inst_check.c"
{
#line 2216 "check_hlds.inst_check.c"
  {
#line 2218 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2221 "check_hlds.inst_check.c"
    {
#line 2223 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____functors_to_types_map_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2226 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2228 "check_hlds.inst_check.c"
  }
#line 2230 "check_hlds.inst_check.c"
}

#line 2233 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001(
#line 2236 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2238 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2240 "check_hlds.inst_check.c"
{
#line 2242 "check_hlds.inst_check.c"
  {
#line 2244 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2247 "check_hlds.inst_check.c"
    {
#line 2249 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____mismatch_from_type_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2252 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2254 "check_hlds.inst_check.c"
  }
#line 2256 "check_hlds.inst_check.c"
}

#line 2259 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001(
#line 2262 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2264 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2266 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2268 "check_hlds.inst_check.c"
{
#line 2270 "check_hlds.inst_check.c"
  {
#line 2272 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2275 "check_hlds.inst_check.c"
    {
#line 2277 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____mismatch_from_type_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2280 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2282 "check_hlds.inst_check.c"
  }
#line 2284 "check_hlds.inst_check.c"
}

#line 2287 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001(
#line 2290 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2292 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2294 "check_hlds.inst_check.c"
{
#line 2296 "check_hlds.inst_check.c"
  {
#line 2298 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2301 "check_hlds.inst_check.c"
    {
#line 2303 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2306 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2308 "check_hlds.inst_check.c"
  }
#line 2310 "check_hlds.inst_check.c"
}

#line 2313 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001(
#line 2316 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2318 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2320 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2322 "check_hlds.inst_check.c"
{
#line 2324 "check_hlds.inst_check.c"
  {
#line 2326 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2329 "check_hlds.inst_check.c"
    {
#line 2331 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2334 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2336 "check_hlds.inst_check.c"
  }
#line 2338 "check_hlds.inst_check.c"
}

#line 2341 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
#line 2344 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2346 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2348 "check_hlds.inst_check.c"
{
#line 2350 "check_hlds.inst_check.c"
  {
#line 2352 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2355 "check_hlds.inst_check.c"
    {
#line 2357 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2360 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2362 "check_hlds.inst_check.c"
  }
#line 2364 "check_hlds.inst_check.c"
}

#line 2367 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
#line 2370 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2372 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2374 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2376 "check_hlds.inst_check.c"
{
#line 2378 "check_hlds.inst_check.c"
  {
#line 2380 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2383 "check_hlds.inst_check.c"
    {
#line 2385 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2388 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2390 "check_hlds.inst_check.c"
  }
#line 2392 "check_hlds.inst_check.c"
}

#line 2395 "check_hlds.inst_check.c"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0_10001(
#line 2398 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 2400 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2)
#line 2402 "check_hlds.inst_check.c"
{
#line 2404 "check_hlds.inst_check.c"
  {
#line 2406 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded;

#line 2409 "check_hlds.inst_check.c"
    {
#line 2411 "check_hlds.inst_check.c"
      check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____typeable_functors_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    }
#line 2414 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2416 "check_hlds.inst_check.c"
  }
#line 2418 "check_hlds.inst_check.c"
}

#line 2421 "check_hlds.inst_check.c"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0_10001(
#line 2424 "check_hlds.inst_check.c"
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
#line 2426 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_2,
#line 2428 "check_hlds.inst_check.c"
  MR_Box check_hlds__inst_check__wrapper_arg_3)
#line 2430 "check_hlds.inst_check.c"
{
#line 2432 "check_hlds.inst_check.c"
  {
#line 2434 "check_hlds.inst_check.c"
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

#line 2437 "check_hlds.inst_check.c"
    {
#line 2439 "check_hlds.inst_check.c"
      check_hlds__inst_check____Compare____typeable_functors_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    }
#line 2442 "check_hlds.inst_check.c"
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
#line 2444 "check_hlds.inst_check.c"
  }
#line 2446 "check_hlds.inst_check.c"
}

#line 359 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__359__1_2_p_0(
#line 359 "inst_check.m"
  MR_Word check_hlds__inst_check__IFTC0_17,
#line 359 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_60)
#line 359 "inst_check.m"
{
#line 359 "inst_check.m"
  {
#line 359 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 359 "inst_check.m"
    {
#line 359 "inst_check.m"
      check_hlds__inst_check__succeeded = hlds__hlds_data____Unify____inst_for_type_ctor_0_0(check_hlds__inst_check__IFTC0_17, check_hlds__inst_check__HeadVar__2_60);
    }
#line 359 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 359 "inst_check.m"
  }
#line 359 "inst_check.m"
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
    }
#line 125 "inst_check.m"
  }
#line 125 "inst_check.m"
}

#line 551 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
#line 551 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 551 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 551 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 551 "inst_check.m"
{
#line 551 "inst_check.m"
  {
#line 551 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 551 "inst_check.m"
    MR_Integer check_hlds__inst_check__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 551 "inst_check.m"
    MR_Integer check_hlds__inst_check__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 551 "inst_check.m"
    {
#line 551 "inst_check.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Cast_HeadVar1_4, check_hlds__inst_check__Cast_HeadVar2_5);
    }
#line 551 "inst_check.m"
  }
#line 551 "inst_check.m"
}

#line 551 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0(
#line 551 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_1,
#line 551 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 551 "inst_check.m"
{
#line 2542 "check_hlds.inst_check.c"
  {
#line 2544 "check_hlds.inst_check.c"
    MR_bool check_hlds__inst_check__succeeded = (check_hlds__inst_check__HeadVar__2_1 == check_hlds__inst_check__HeadVar__2_2);

#line 2547 "check_hlds.inst_check.c"
    return check_hlds__inst_check__succeeded;
#line 2549 "check_hlds.inst_check.c"
  }
#line 551 "inst_check.m"
}

#line 555 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
#line 555 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 555 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 555 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 555 "inst_check.m"
{
#line 555 "inst_check.m"
  {
#line 555 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 555 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_22 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 555 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_23 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 555 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_22 == check_hlds__inst_check__CastY_23);
#line 555 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 2578 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 555 "inst_check.m"
    else
#line 555 "inst_check.m"
#line 555 "inst_check.m"
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) {
#line 555 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 555 "inst_check.m"
        case (MR_Integer) 0:
#line 555 "inst_check.m"
          {
#line 555 "inst_check.m"
            MR_Word check_hlds__inst_check__V_29_29 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__2_2), (MR_Integer) 0);

#line 555 "inst_check.m"
#line 555 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 555 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 555 "inst_check.m"
              case (MR_Integer) 0:
#line 555 "inst_check.m"
                {
#line 555 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_5_5 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__3_3), (MR_Integer) 0);

#line 555 "inst_check.m"
                  {
#line 555 "inst_check.m"
                    check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_29_29, check_hlds__inst_check__V_5_5);
                  }
#line 555 "inst_check.m"
                }
#line 555 "inst_check.m"
                break;
#line 555 "inst_check.m"
              case (MR_Integer) 1:
#line 2617 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 555 "inst_check.m"
                break;
#line 555 "inst_check.m"
              case (MR_Integer) 2:
#line 2623 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 555 "inst_check.m"
                break;
#line 555 "inst_check.m"
            }
#line 555 "inst_check.m"
          }
#line 555 "inst_check.m"
          break;
#line 555 "inst_check.m"
        case (MR_Integer) 1:
#line 555 "inst_check.m"
          {
#line 555 "inst_check.m"
            MR_Word check_hlds__inst_check__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 555 "inst_check.m"
#line 555 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 555 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 555 "inst_check.m"
              case (MR_Integer) 0:
#line 2647 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 555 "inst_check.m"
                break;
#line 555 "inst_check.m"
              case (MR_Integer) 1:
#line 555 "inst_check.m"
                {
#line 555 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 555 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_30_30 = (MR_Integer) check_hlds__inst_check__V_27_27;
#line 555 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_31_31 = (MR_Integer) check_hlds__inst_check__V_13_13;

#line 555 "inst_check.m"
                  {
#line 555 "inst_check.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_30_30, check_hlds__inst_check__V_31_31);
                  }
#line 555 "inst_check.m"
                }
#line 555 "inst_check.m"
                break;
#line 555 "inst_check.m"
              case (MR_Integer) 2:
#line 2673 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 555 "inst_check.m"
                break;
#line 555 "inst_check.m"
            }
#line 555 "inst_check.m"
          }
#line 555 "inst_check.m"
          break;
#line 555 "inst_check.m"
        case (MR_Integer) 2:
#line 555 "inst_check.m"
          {
#line 555 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 555 "inst_check.m"
#line 555 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 555 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 555 "inst_check.m"
              case (MR_Integer) 0:
#line 2697 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 555 "inst_check.m"
                break;
#line 555 "inst_check.m"
              case (MR_Integer) 1:
#line 2703 "check_hlds.inst_check.c"
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 555 "inst_check.m"
                break;
#line 555 "inst_check.m"
              case (MR_Integer) 2:
#line 555 "inst_check.m"
                {
#line 555 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));

#line 555 "inst_check.m"
                  {
#line 555 "inst_check.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_28_28, check_hlds__inst_check__V_21_21);
                  }
#line 555 "inst_check.m"
                }
#line 555 "inst_check.m"
                break;
#line 555 "inst_check.m"
            }
#line 555 "inst_check.m"
          }
#line 555 "inst_check.m"
          break;
#line 555 "inst_check.m"
      }
#line 555 "inst_check.m"
  }
#line 555 "inst_check.m"
}

#line 555 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
#line 555 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 555 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 555 "inst_check.m"
{
#line 555 "inst_check.m"
  {
#line 555 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 555 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 555 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 555 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 555 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 555 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 555 "inst_check.m"
    else
#line 555 "inst_check.m"
#line 555 "inst_check.m"
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 555 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 555 "inst_check.m"
        case (MR_Integer) 0:
#line 555 "inst_check.m"
          {
#line 555 "inst_check.m"
            MR_Word check_hlds__inst_check__V_3_3 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__1_1), (MR_Integer) 0);
#line 555 "inst_check.m"
            MR_Word check_hlds__inst_check__V_4_4;

#line 555 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 555 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 555 "inst_check.m"
              {
#line 555 "inst_check.m"
                check_hlds__inst_check__V_4_4 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__2_2), (MR_Integer) 0);
#line 2784 "check_hlds.inst_check.c"
                {
#line 2786 "check_hlds.inst_check.c"
                  check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_4_4);
                }
#line 555 "inst_check.m"
              }
#line 555 "inst_check.m"
          }
#line 555 "inst_check.m"
          break;
#line 555 "inst_check.m"
        case (MR_Integer) 1:
#line 555 "inst_check.m"
          {
#line 555 "inst_check.m"
            MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 555 "inst_check.m"
            MR_Word check_hlds__inst_check__V_6_6;

#line 555 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 555 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 555 "inst_check.m"
              {
#line 555 "inst_check.m"
                check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 2812 "check_hlds.inst_check.c"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_5_5 == check_hlds__inst_check__V_6_6);
#line 555 "inst_check.m"
              }
#line 555 "inst_check.m"
          }
#line 555 "inst_check.m"
          break;
#line 555 "inst_check.m"
        case (MR_Integer) 2:
#line 555 "inst_check.m"
          {
#line 555 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 555 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_8_8;

#line 555 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 555 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 555 "inst_check.m"
              {
#line 555 "inst_check.m"
                check_hlds__inst_check__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 2837 "check_hlds.inst_check.c"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_7_7 == check_hlds__inst_check__V_8_8);
#line 555 "inst_check.m"
              }
#line 555 "inst_check.m"
          }
#line 555 "inst_check.m"
          break;
#line 555 "inst_check.m"
      }
#line 555 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 555 "inst_check.m"
  }
#line 555 "inst_check.m"
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
#line 2878 "check_hlds.inst_check.c"
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
#line 2900 "check_hlds.inst_check.c"
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

#line 2959 "check_hlds.inst_check.c"
        {
#line 2961 "check_hlds.inst_check.c"
          check_hlds__inst_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_5_5);
        }
#line 108 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 2966 "check_hlds.inst_check.c"
          {
#line 2968 "check_hlds.inst_check.c"
            check_hlds__inst_check__succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_6_6);
          }
#line 108 "inst_check.m"
      }
#line 108 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 108 "inst_check.m"
  }
#line 108 "inst_check.m"
}

#line 885 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
#line 885 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 885 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 885 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 885 "inst_check.m"
{
#line 885 "inst_check.m"
  {
#line 885 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 885 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_12 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 885 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_13 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 885 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_12 == check_hlds__inst_check__CastY_13);
#line 885 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 3004 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 885 "inst_check.m"
    else
#line 885 "inst_check.m"
      {
#line 885 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 885 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 885 "inst_check.m"
        MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 2)));
#line 885 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 885 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 885 "inst_check.m"
        MR_Word check_hlds__inst_check__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 2)));
#line 885 "inst_check.m"
        MR_Word check_hlds__inst_check__V_10_10;

#line 885 "inst_check.m"
        {
#line 885 "inst_check.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_check__V_10_10, check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_7_7);
        }
#line 3030 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_10_10 == (MR_Integer) 0);
#line 885 "inst_check.m"
        check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 885 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 885 "inst_check.m"
          *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_10_10;
#line 885 "inst_check.m"
        else
#line 885 "inst_check.m"
          {
#line 885 "inst_check.m"
            MR_Word check_hlds__inst_check__V_11_11;

#line 885 "inst_check.m"
            {
#line 885 "inst_check.m"
              check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&check_hlds__inst_check__V_11_11, check_hlds__inst_check__V_5_5, check_hlds__inst_check__V_8_8);
            }
#line 3050 "check_hlds.inst_check.c"
            check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_11_11 == (MR_Integer) 0);
#line 885 "inst_check.m"
            check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 885 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 885 "inst_check.m"
              *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_11_11;
#line 885 "inst_check.m"
            else
#line 885 "inst_check.m"
              {
#line 885 "inst_check.m"
                {
#line 885 "inst_check.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_1[1], check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__V_6_6)), ((MR_Box) (check_hlds__inst_check__V_9_9)));
                }
#line 885 "inst_check.m"
              }
#line 885 "inst_check.m"
          }
#line 885 "inst_check.m"
      }
#line 885 "inst_check.m"
  }
#line 885 "inst_check.m"
}

#line 885 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
#line 885 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 885 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 885 "inst_check.m"
{
#line 885 "inst_check.m"
  {
#line 885 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 885 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 885 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 885 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
#line 885 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 885 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 885 "inst_check.m"
    else
#line 885 "inst_check.m"
      {
#line 885 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeInfo_11_11;
#line 885 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 885 "inst_check.m"
        MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 885 "inst_check.m"
        MR_Word check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 2)));
#line 885 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 885 "inst_check.m"
        MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 885 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 2)));

#line 3121 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_3_3 == check_hlds__inst_check__V_6_6);
#line 885 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 885 "inst_check.m"
          {
#line 3127 "check_hlds.inst_check.c"
            {
#line 3129 "check_hlds.inst_check.c"
              check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_7_7);
            }
#line 885 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 885 "inst_check.m"
              {
#line 3136 "check_hlds.inst_check.c"
                check_hlds__inst_check__TypeInfo_11_11 = (MR_Word) &check_hlds__inst_check_scalar_common_1[1];
#line 3138 "check_hlds.inst_check.c"
                {
#line 3140 "check_hlds.inst_check.c"
                  check_hlds__inst_check__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_check__TypeInfo_11_11, ((MR_Box) (check_hlds__inst_check__V_5_5)), ((MR_Box) (check_hlds__inst_check__V_8_8)));
                }
#line 885 "inst_check.m"
              }
#line 885 "inst_check.m"
          }
#line 885 "inst_check.m"
      }
#line 885 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 885 "inst_check.m"
  }
#line 885 "inst_check.m"
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
      check_hlds__inst_check__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_check_scalar_common_2[0], ((MR_Box) (check_hlds__inst_check__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_check__Cast_HeadVar2_4)));
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
#line 3240 "check_hlds.inst_check.c"
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
#line 3262 "check_hlds.inst_check.c"
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

#line 3321 "check_hlds.inst_check.c"
        check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_5_5) == 0);
#line 105 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 3325 "check_hlds.inst_check.c"
          check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_4_4 == check_hlds__inst_check__V_6_6);
#line 105 "inst_check.m"
      }
#line 105 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 105 "inst_check.m"
  }
#line 105 "inst_check.m"
}

#line 396 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0(
#line 396 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
#line 396 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 396 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3)
#line 396 "inst_check.m"
{
#line 396 "inst_check.m"
  {
#line 396 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 396 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_25 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
#line 396 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_26 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

#line 396 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_25 == check_hlds__inst_check__CastY_26);
#line 396 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 3360 "check_hlds.inst_check.c"
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 396 "inst_check.m"
    else
#line 396 "inst_check.m"
#line 396 "inst_check.m"
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) {
#line 396 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
        case (MR_Integer) 0:
#line 396 "inst_check.m"
#line 396 "inst_check.m"
          switch (MR_unmkbody(check_hlds__inst_check__HeadVar__2_2)) {
#line 396 "inst_check.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
            case (MR_Integer) 0:
#line 396 "inst_check.m"
#line 396 "inst_check.m"
              switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 396 "inst_check.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
                case (MR_Integer) 0:
#line 396 "inst_check.m"
#line 396 "inst_check.m"
                  switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
#line 396 "inst_check.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
                    case (MR_Integer) 0:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                    case (MR_Integer) 1:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                    case (MR_Integer) 2:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                    case (MR_Integer) 3:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                  }
#line 396 "inst_check.m"
                  break;
#line 396 "inst_check.m"
                case (MR_Integer) 1:
#line 3420 "check_hlds.inst_check.c"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 396 "inst_check.m"
                  break;
#line 396 "inst_check.m"
              }
#line 396 "inst_check.m"
              break;
#line 396 "inst_check.m"
            case (MR_Integer) 1:
#line 396 "inst_check.m"
#line 396 "inst_check.m"
              switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 396 "inst_check.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
                case (MR_Integer) 0:
#line 396 "inst_check.m"
#line 396 "inst_check.m"
                  switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
#line 396 "inst_check.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
                    case (MR_Integer) 0:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                    case (MR_Integer) 1:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                    case (MR_Integer) 2:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                    case (MR_Integer) 3:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                  }
#line 396 "inst_check.m"
                  break;
#line 396 "inst_check.m"
                case (MR_Integer) 1:
#line 3472 "check_hlds.inst_check.c"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 396 "inst_check.m"
                  break;
#line 396 "inst_check.m"
              }
#line 396 "inst_check.m"
              break;
#line 396 "inst_check.m"
            case (MR_Integer) 2:
#line 396 "inst_check.m"
#line 396 "inst_check.m"
              switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 396 "inst_check.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
                case (MR_Integer) 0:
#line 396 "inst_check.m"
#line 396 "inst_check.m"
                  switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
#line 396 "inst_check.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
                    case (MR_Integer) 0:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                    case (MR_Integer) 1:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                    case (MR_Integer) 2:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                    case (MR_Integer) 3:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                  }
#line 396 "inst_check.m"
                  break;
#line 396 "inst_check.m"
                case (MR_Integer) 1:
#line 3524 "check_hlds.inst_check.c"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 396 "inst_check.m"
                  break;
#line 396 "inst_check.m"
              }
#line 396 "inst_check.m"
              break;
#line 396 "inst_check.m"
            case (MR_Integer) 3:
#line 396 "inst_check.m"
#line 396 "inst_check.m"
              switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 396 "inst_check.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
                case (MR_Integer) 0:
#line 396 "inst_check.m"
#line 396 "inst_check.m"
                  switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
#line 396 "inst_check.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
                    case (MR_Integer) 0:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                    case (MR_Integer) 1:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                    case (MR_Integer) 2:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                    case (MR_Integer) 3:
#line 396 "inst_check.m"
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
#line 396 "inst_check.m"
                      break;
#line 396 "inst_check.m"
                  }
#line 396 "inst_check.m"
                  break;
#line 396 "inst_check.m"
                case (MR_Integer) 1:
#line 3576 "check_hlds.inst_check.c"
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
#line 396 "inst_check.m"
                  break;
#line 396 "inst_check.m"
              }
#line 396 "inst_check.m"
              break;
#line 396 "inst_check.m"
          }
#line 396 "inst_check.m"
          break;
#line 396 "inst_check.m"
        case (MR_Integer) 1:
#line 396 "inst_check.m"
          {
#line 396 "inst_check.m"
            MR_Word check_hlds__inst_check__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 396 "inst_check.m"
            MR_Word check_hlds__inst_check__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

#line 396 "inst_check.m"
#line 396 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
#line 396 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
              case (MR_Integer) 0:
#line 396 "inst_check.m"
#line 396 "inst_check.m"
                switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
#line 396 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
                  case (MR_Integer) 0:
#line 3611 "check_hlds.inst_check.c"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 396 "inst_check.m"
                    break;
#line 396 "inst_check.m"
                  case (MR_Integer) 1:
#line 3617 "check_hlds.inst_check.c"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 396 "inst_check.m"
                    break;
#line 396 "inst_check.m"
                  case (MR_Integer) 2:
#line 3623 "check_hlds.inst_check.c"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 396 "inst_check.m"
                    break;
#line 396 "inst_check.m"
                  case (MR_Integer) 3:
#line 3629 "check_hlds.inst_check.c"
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
#line 396 "inst_check.m"
                    break;
#line 396 "inst_check.m"
                }
#line 396 "inst_check.m"
                break;
#line 396 "inst_check.m"
              case (MR_Integer) 1:
#line 396 "inst_check.m"
                {
#line 396 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 396 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 396 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_8_8;

#line 396 "inst_check.m"
                  {
#line 396 "inst_check.m"
                    parse_tree__prog_data____Compare____type_ctor_0_0(&check_hlds__inst_check__V_8_8, check_hlds__inst_check__V_30_30, check_hlds__inst_check__V_6_6);
                  }
#line 3653 "check_hlds.inst_check.c"
                  check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_8_8 == (MR_Integer) 0);
#line 396 "inst_check.m"
                  check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 396 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 396 "inst_check.m"
                    *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__V_8_8;
#line 396 "inst_check.m"
                  else
#line 396 "inst_check.m"
                    {
#line 396 "inst_check.m"
                      hlds__hlds_data____Compare____hlds_type_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__V_29_29, check_hlds__inst_check__V_7_7);
                    }
#line 396 "inst_check.m"
                }
#line 396 "inst_check.m"
                break;
#line 396 "inst_check.m"
            }
#line 396 "inst_check.m"
          }
#line 396 "inst_check.m"
          break;
#line 396 "inst_check.m"
      }
#line 396 "inst_check.m"
  }
#line 396 "inst_check.m"
}

#line 396 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0(
#line 396 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 396 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2)
#line 396 "inst_check.m"
{
#line 396 "inst_check.m"
  {
#line 396 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 396 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastX_15 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 396 "inst_check.m"
    MR_Integer check_hlds__inst_check__CastY_16 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 396 "inst_check.m"
    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_15 == check_hlds__inst_check__CastY_16);
#line 396 "inst_check.m"
    if (check_hlds__inst_check__succeeded)
#line 396 "inst_check.m"
      check_hlds__inst_check__succeeded = MR_TRUE;
#line 396 "inst_check.m"
    else
#line 396 "inst_check.m"
#line 396 "inst_check.m"
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 396 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
        case (MR_Integer) 0:
#line 396 "inst_check.m"
#line 396 "inst_check.m"
          switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
#line 396 "inst_check.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 396 "inst_check.m"
            case (MR_Integer) 0:
#line 396 "inst_check.m"
              {
#line 396 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastX_7 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 396 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastY_8 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 396 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_8 == check_hlds__inst_check__CastX_7);
#line 396 "inst_check.m"
              }
#line 396 "inst_check.m"
              break;
#line 396 "inst_check.m"
            case (MR_Integer) 1:
#line 396 "inst_check.m"
              {
#line 396 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 396 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 396 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_10 == check_hlds__inst_check__CastX_9);
#line 396 "inst_check.m"
              }
#line 396 "inst_check.m"
              break;
#line 396 "inst_check.m"
            case (MR_Integer) 2:
#line 396 "inst_check.m"
              {
#line 396 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastX_11 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 396 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastY_12 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 396 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_12 == check_hlds__inst_check__CastX_11);
#line 396 "inst_check.m"
              }
#line 396 "inst_check.m"
              break;
#line 396 "inst_check.m"
            case (MR_Integer) 3:
#line 396 "inst_check.m"
              {
#line 396 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastX_13 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
#line 396 "inst_check.m"
                MR_Integer check_hlds__inst_check__CastY_14 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

#line 396 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_14 == check_hlds__inst_check__CastX_13);
#line 396 "inst_check.m"
              }
#line 396 "inst_check.m"
              break;
#line 396 "inst_check.m"
          }
#line 396 "inst_check.m"
          break;
#line 396 "inst_check.m"
        case (MR_Integer) 1:
#line 396 "inst_check.m"
          {
#line 396 "inst_check.m"
            MR_Word check_hlds__inst_check__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 396 "inst_check.m"
            MR_Word check_hlds__inst_check__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 396 "inst_check.m"
            MR_Word check_hlds__inst_check__V_5_5;
#line 396 "inst_check.m"
            MR_Word check_hlds__inst_check__V_6_6;

#line 396 "inst_check.m"
            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 396 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 396 "inst_check.m"
              {
#line 396 "inst_check.m"
                check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 396 "inst_check.m"
                check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 3810 "check_hlds.inst_check.c"
                {
#line 3812 "check_hlds.inst_check.c"
                  check_hlds__inst_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__inst_check__V_3_3, check_hlds__inst_check__V_5_5);
                }
#line 396 "inst_check.m"
                if (check_hlds__inst_check__succeeded)
#line 3817 "check_hlds.inst_check.c"
                  {
#line 3819 "check_hlds.inst_check.c"
                    check_hlds__inst_check__succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(check_hlds__inst_check__V_4_4, check_hlds__inst_check__V_6_6);
                  }
#line 396 "inst_check.m"
              }
#line 396 "inst_check.m"
          }
#line 396 "inst_check.m"
          break;
#line 396 "inst_check.m"
      }
#line 396 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 396 "inst_check.m"
  }
#line 396 "inst_check.m"
}

#line 1163 "inst_check.m"
static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
#line 1163 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3)
#line 1163 "inst_check.m"
{
#line 1167 "inst_check.m"
  {
#line 1167 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 1167 "inst_check.m"
    MR_String check_hlds__inst_check__Str_4;

#line 1167 "inst_check.m"
#line 1167 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3)) {
#line 1167 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1167 "inst_check.m"
      case (MR_Integer) 0:
#line 1167 "inst_check.m"
        {
#line 1167 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtor_5;
#line 1167 "inst_check.m"
          MR_Word check_hlds__inst_check__V_13_13 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3), (MR_Integer) 0);
#line 1167 "inst_check.m"
          MR_Word check_hlds__inst_check__V_6_6;

#line 1167 "inst_check.m"
          check_hlds__inst_check__TypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_13_13, (MR_Integer) 0)));
#line 1167 "inst_check.m"
          check_hlds__inst_check__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_13_13, (MR_Integer) 1)));
#line 1168 "inst_check.m"
          {
#line 1168 "inst_check.m"
            check_hlds__inst_check__Str_4 = parse_tree__prog_out__type_ctor_to_string_1_f_0(check_hlds__inst_check__TypeCtor_5);
          }
#line 1167 "inst_check.m"
        }
#line 1167 "inst_check.m"
        break;
#line 1167 "inst_check.m"
      case (MR_Integer) 1:
#line 1170 "inst_check.m"
        {
#line 1170 "inst_check.m"
          MR_Word check_hlds__inst_check__BuiltinType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

#line 1174 "inst_check.m"
          check_hlds__inst_check__Str_4 = ((&check_hlds__inst_check_vector_common_8[0 + check_hlds__inst_check__BuiltinType_7]))->check_hlds__inst_check__vector_common_type_8_0__vct_8_f_0;
#line 1170 "inst_check.m"
        }
#line 1167 "inst_check.m"
        break;
#line 1167 "inst_check.m"
      case (MR_Integer) 2:
#line 1185 "inst_check.m"
        {
#line 1185 "inst_check.m"
          MR_Integer check_hlds__inst_check__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));
#line 1185 "inst_check.m"
          MR_String check_hlds__inst_check__V_14_14;

#line 1186 "inst_check.m"
          {
#line 1186 "inst_check.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_3[13], check_hlds__inst_check__Arity_8, &check_hlds__inst_check__V_14_14);
          }
#line 1186 "inst_check.m"
          {
#line 1186 "inst_check.m"
            check_hlds__inst_check__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", check_hlds__inst_check__V_14_14);
          }
#line 1185 "inst_check.m"
        }
#line 1167 "inst_check.m"
        break;
#line 1167 "inst_check.m"
    }
#line 1167 "inst_check.m"
    return check_hlds__inst_check__Str_4;
#line 1167 "inst_check.m"
  }
#line 1163 "inst_check.m"
}

#line 1151 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(
#line 1151 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 1151 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 1151 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
#line 1151 "inst_check.m"
{
#line 1154 "inst_check.m"
  {
#line 1154 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 1154 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1154 "inst_check.m"
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1154 "inst_check.m"
    else
#line 1155 "inst_check.m"
      {
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorInfo_36_36;
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatch_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatches_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__TailPieces_9;
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_11;
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__BoundInstPieces_12;
#line 1155 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_13_13 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__V_15_15;
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__V_18_18;
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__V_19_19;
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__V_20_20;
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__V_23_23;
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__V_24_24;
#line 1155 "inst_check.m"
        MR_String check_hlds__inst_check__V_25_25;
#line 1155 "inst_check.m"
        MR_Word check_hlds__inst_check__V_35_35;
#line 1157 "inst_check.m"
        MR_Integer check_hlds__inst_check__V_10_10;

#line 1156 "inst_check.m"
        {
#line 1156 "inst_check.m"
          check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(check_hlds__inst_check__Mismatches_6, check_hlds__inst_check__V_13_13, &check_hlds__inst_check__TailPieces_9);
        }
#line 1157 "inst_check.m"
        check_hlds__inst_check__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 0)));
#line 1157 "inst_check.m"
        check_hlds__inst_check__TypeDefnOrBuiltin_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 1)));
#line 1157 "inst_check.m"
        check_hlds__inst_check__BoundInstPieces_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 2)));
#line 3993 "check_hlds.inst_check.c"
        check_hlds__inst_check__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1158 "inst_check.m"
        {
#line 1158 "inst_check.m"
          check_hlds__inst_check__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1158 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 1) = ((MR_Box) (check_hlds__inst_check__HeadVar__2_2));
#line 1158 "inst_check.m"
        }
#line 1159 "inst_check.m"
        {
#line 1159 "inst_check.m"
          check_hlds__inst_check__V_25_25 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__TypeDefnOrBuiltin_11);
        }
#line 1159 "inst_check.m"
        {
#line 1159 "inst_check.m"
          check_hlds__inst_check__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "inst_check.m"
          MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_24_24, 0) = ((MR_Box) (check_hlds__inst_check__V_25_25));
#line 1159 "inst_check.m"
        }
#line 1159 "inst_check.m"
        {
#line 1159 "inst_check.m"
          check_hlds__inst_check__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_23_23, 0) = ((MR_Box) (check_hlds__inst_check__V_24_24));
#line 1159 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[27])));
#line 1159 "inst_check.m"
        }
#line 1158 "inst_check.m"
        {
#line 1158 "inst_check.m"
          check_hlds__inst_check__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[47])));
#line 1158 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_20_20, 1) = ((MR_Box) (check_hlds__inst_check__V_23_23));
#line 1158 "inst_check.m"
        }
#line 1158 "inst_check.m"
        {
#line 1158 "inst_check.m"
          check_hlds__inst_check__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 0) = ((MR_Box) (check_hlds__inst_check__V_19_19));
#line 1158 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 1) = ((MR_Box) (check_hlds__inst_check__V_20_20));
#line 1158 "inst_check.m"
        }
#line 1158 "inst_check.m"
        {
#line 1158 "inst_check.m"
          check_hlds__inst_check__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[46])));
#line 1158 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_15_15, 1) = ((MR_Box) (check_hlds__inst_check__V_18_18));
#line 1158 "inst_check.m"
        }
#line 1161 "inst_check.m"
        {
#line 1161 "inst_check.m"
          check_hlds__inst_check__V_35_35 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_36_36, check_hlds__inst_check__BoundInstPieces_12, check_hlds__inst_check__TailPieces_9);
        }
#line 1161 "inst_check.m"
        {
#line 1161 "inst_check.m"
          *check_hlds__inst_check__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_36_36, check_hlds__inst_check__V_15_15, check_hlds__inst_check__V_35_35);
        }
#line 1155 "inst_check.m"
      }
#line 1154 "inst_check.m"
  }
#line 1151 "inst_check.m"
}

#line 1128 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
#line 1128 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 1128 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 1128 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
#line 1128 "inst_check.m"
{
#line 1131 "inst_check.m"
  {
#line 1131 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 1131 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1131 "inst_check.m"
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1131 "inst_check.m"
    else
#line 1132 "inst_check.m"
      {
#line 1132 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatch_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 1132 "inst_check.m"
        MR_Word check_hlds__inst_check__Mismatches_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 1132 "inst_check.m"
        MR_Integer check_hlds__inst_check__NumMismatches_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 0)));
#line 1133 "inst_check.m"
        MR_Word check_hlds__inst_check__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 1)));
#line 1133 "inst_check.m"
        MR_Word check_hlds__inst_check__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 2)));

#line 1134 "inst_check.m"
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__HeadVar__1_1 == check_hlds__inst_check__NumMismatches_9);
#line 1134 "inst_check.m"
        if (check_hlds__inst_check__succeeded)
#line 1135 "inst_check.m"
          {
#line 1135 "inst_check.m"
            MR_Word check_hlds__inst_check__TakenTail_12;

#line 1135 "inst_check.m"
            {
#line 1135 "inst_check.m"
              check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Mismatches_7, &check_hlds__inst_check__TakenTail_12);
            }
#line 1136 "inst_check.m"
            {
#line 1136 "inst_check.m"
              MR_Word base;
#line 1136 "inst_check.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "inst_check.m"
              *check_hlds__inst_check__HeadVar__3_3 = base;
#line 1136 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Mismatch_6));
#line 1136 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__TakenTail_12));
#line 1136 "inst_check.m"
            }
#line 1135 "inst_check.m"
          }
#line 1134 "inst_check.m"
        else
#line 1138 "inst_check.m"
          *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1132 "inst_check.m"
      }
#line 1131 "inst_check.m"
  }
#line 1128 "inst_check.m"
}

#line 1107 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__create_mismatch_pieces_2_p_0(
#line 1107 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 1107 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__2_2)
#line 1107 "inst_check.m"
{
#line 1110 "inst_check.m"
  {
#line 1110 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 1110 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1110 "inst_check.m"
      *check_hlds__inst_check__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1110 "inst_check.m"
    else
#line 1111 "inst_check.m"
      {
#line 1111 "inst_check.m"
        MR_Word check_hlds__inst_check__FirstMismatch_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 1111 "inst_check.m"
        MR_Word check_hlds__inst_check__LaterMismatches_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 1111 "inst_check.m"
        MR_Integer check_hlds__inst_check__FirstNumMismatches_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 0)));
#line 1111 "inst_check.m"
        MR_Word check_hlds__inst_check__TakenLaterMismatches_9;
#line 1112 "inst_check.m"
        MR_Word check_hlds__inst_check__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 1)));
#line 1112 "inst_check.m"
        MR_Word check_hlds__inst_check__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 2)));

#line 1113 "inst_check.m"
        {
#line 1113 "inst_check.m"
          check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(check_hlds__inst_check__FirstNumMismatches_6, check_hlds__inst_check__LaterMismatches_4, &check_hlds__inst_check__TakenLaterMismatches_9);
        }
#line 1118 "inst_check.m"
        if ((check_hlds__inst_check__TakenLaterMismatches_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1144 "inst_check.m"
          {
#line 1144 "inst_check.m"
            MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 1)));
#line 1144 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInstPieces_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 2)));
#line 1144 "inst_check.m"
            MR_Word check_hlds__inst_check__V_34_34;
#line 1144 "inst_check.m"
            MR_Word check_hlds__inst_check__V_37_37;
#line 1144 "inst_check.m"
            MR_Word check_hlds__inst_check__V_38_38;
#line 1144 "inst_check.m"
            MR_String check_hlds__inst_check__V_39_39;
#line 1145 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 0)));

#line 1147 "inst_check.m"
            {
#line 1147 "inst_check.m"
              check_hlds__inst_check__V_39_39 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__TypeDefnOrBuiltin_32);
            }
#line 1147 "inst_check.m"
            {
#line 1147 "inst_check.m"
              check_hlds__inst_check__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "inst_check.m"
              MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_38_38, 0) = ((MR_Box) (check_hlds__inst_check__V_39_39));
#line 1147 "inst_check.m"
            }
#line 1147 "inst_check.m"
            {
#line 1147 "inst_check.m"
              check_hlds__inst_check__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_37_37, 0) = ((MR_Box) (check_hlds__inst_check__V_38_38));
#line 1147 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[27])));
#line 1147 "inst_check.m"
            }
#line 1146 "inst_check.m"
            {
#line 1146 "inst_check.m"
              check_hlds__inst_check__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[44])));
#line 1146 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_34_34, 1) = ((MR_Box) (check_hlds__inst_check__V_37_37));
#line 1146 "inst_check.m"
            }
#line 1149 "inst_check.m"
            {
#line 1149 "inst_check.m"
              *check_hlds__inst_check__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__V_34_34, check_hlds__inst_check__BoundInstPieces_33);
            }
#line 1144 "inst_check.m"
          }
#line 1118 "inst_check.m"
        else
#line 1119 "inst_check.m"
          {
#line 1119 "inst_check.m"
            MR_Word check_hlds__inst_check__RelevantMismatches_12;
#line 1119 "inst_check.m"
            MR_Integer check_hlds__inst_check__NumRelevantMismatches_13;
#line 1119 "inst_check.m"
            MR_Word check_hlds__inst_check__HeadPieces_14;
#line 1119 "inst_check.m"
            MR_Word check_hlds__inst_check__TailPieces_15;
#line 1119 "inst_check.m"
            MR_Word check_hlds__inst_check__V_18_18;
#line 1119 "inst_check.m"
            MR_Word check_hlds__inst_check__V_19_19;

#line 1120 "inst_check.m"
            {
#line 1120 "inst_check.m"
              check_hlds__inst_check__RelevantMismatches_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__RelevantMismatches_12, 0) = ((MR_Box) (check_hlds__inst_check__FirstMismatch_3));
#line 1120 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__RelevantMismatches_12, 1) = ((MR_Box) (check_hlds__inst_check__TakenLaterMismatches_9));
#line 1120 "inst_check.m"
            }
#line 1121 "inst_check.m"
            {
#line 1121 "inst_check.m"
              mercury__list__length_2_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0, check_hlds__inst_check__RelevantMismatches_12, &check_hlds__inst_check__NumRelevantMismatches_13);
            }
#line 1122 "inst_check.m"
            {
#line 1122 "inst_check.m"
              check_hlds__inst_check__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "inst_check.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1122 "inst_check.m"
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_19_19, 1) = ((MR_Box) (check_hlds__inst_check__NumRelevantMismatches_13));
#line 1122 "inst_check.m"
            }
#line 1122 "inst_check.m"
            {
#line 1122 "inst_check.m"
              check_hlds__inst_check__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 0) = ((MR_Box) (check_hlds__inst_check__V_19_19));
#line 1122 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[24])));
#line 1122 "inst_check.m"
            }
#line 1122 "inst_check.m"
            {
#line 1122 "inst_check.m"
              check_hlds__inst_check__HeadPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[45])));
#line 1122 "inst_check.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadPieces_14, 1) = ((MR_Box) (check_hlds__inst_check__V_18_18));
#line 1122 "inst_check.m"
            }
#line 1124 "inst_check.m"
            {
#line 1124 "inst_check.m"
              check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(check_hlds__inst_check__RelevantMismatches_12, (MR_Integer) 1, &check_hlds__inst_check__TailPieces_15);
            }
#line 1125 "inst_check.m"
            {
#line 1125 "inst_check.m"
              *check_hlds__inst_check__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__HeadPieces_14, check_hlds__inst_check__TailPieces_15);
            }
#line 1119 "inst_check.m"
          }
#line 1111 "inst_check.m"
      }
#line 1110 "inst_check.m"
  }
#line 1107 "inst_check.m"
}

#line 1091 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_mismatch_6_p_0(
#line 1091 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_7,
#line 1091 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInst_8,
#line 1091 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16,
#line 1091 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17,
#line 1091 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18,
#line 1091 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19)
#line 1091 "inst_check.m"
{
#line 1094 "inst_check.m"
  {
#line 1094 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 1094 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_46_46;
#line 1094 "inst_check.m"
    MR_Word check_hlds__inst_check__ConsId_11;
#line 1094 "inst_check.m"
    MR_Word check_hlds__inst_check__SubInsts_12;
#line 1094 "inst_check.m"
    MR_String check_hlds__inst_check__InFunctorStr_13;
#line 1094 "inst_check.m"
    MR_String check_hlds__inst_check__ActualStr_14;
#line 1094 "inst_check.m"
    MR_Word check_hlds__inst_check__Pieces_15;
#line 1094 "inst_check.m"
    MR_String check_hlds__inst_check__V_29_29;
#line 1094 "inst_check.m"
    MR_Integer check_hlds__inst_check__V_33_33;
#line 1094 "inst_check.m"
    MR_Word check_hlds__inst_check__V_35_35;
#line 1094 "inst_check.m"
    MR_Word check_hlds__inst_check__V_36_36;
#line 1094 "inst_check.m"
    MR_Word check_hlds__inst_check__V_38_38;
#line 1094 "inst_check.m"
    MR_Word check_hlds__inst_check__V_39_39;
#line 1094 "inst_check.m"
    MR_Word check_hlds__inst_check__V_44_44;
#line 1094 "inst_check.m"
    MR_String check_hlds__inst_check__V_48_48;
#line 1094 "inst_check.m"
    MR_Word check_hlds__inst_check__V_54_54;
#line 1094 "inst_check.m"
    MR_String check_hlds__inst_check__V_55_55;
#line 1094 "inst_check.m"
    MR_String check_hlds__inst_check__V_58_58;
#line 1094 "inst_check.m"
    MR_String check_hlds__inst_check__V_65_65;
#line 1094 "inst_check.m"
    MR_String check_hlds__inst_check__V_67_67;
#line 1094 "inst_check.m"
    MR_String check_hlds__inst_check__V_68_68;
#line 1094 "inst_check.m"
    MR_String check_hlds__inst_check__V_75_75;

#line 1095 "inst_check.m"
    *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17 = (check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16 + (MR_Integer) 1);
#line 1096 "inst_check.m"
    check_hlds__inst_check__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_8, (MR_Integer) 0)));
#line 1096 "inst_check.m"
    check_hlds__inst_check__SubInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_8, (MR_Integer) 1)));
#line 4401 "check_hlds.inst_check.c"
    check_hlds__inst_check__V_54_54 = (MR_Word) &check_hlds__inst_check_scalar_common_3[13];
#line 1097 "inst_check.m"
    {
#line 1097 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_54_54, check_hlds__inst_check__CurNum_7, &check_hlds__inst_check__V_48_48);
    }
#line 1097 "inst_check.m"
    {
#line 1097 "inst_check.m"
      check_hlds__inst_check__V_55_55 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_48_48, (MR_String) ":");
    }
#line 1097 "inst_check.m"
    {
#line 1097 "inst_check.m"
      check_hlds__inst_check__InFunctorStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", check_hlds__inst_check__V_55_55);
    }
#line 1099 "inst_check.m"
    {
#line 1099 "inst_check.m"
      check_hlds__inst_check__V_29_29 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 1, check_hlds__inst_check__ConsId_11);
    }
#line 1100 "inst_check.m"
    {
#line 1100 "inst_check.m"
      check_hlds__inst_check__V_33_33 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_check__SubInsts_12);
    }
#line 1100 "inst_check.m"
    {
#line 1100 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_54_54, check_hlds__inst_check__V_33_33, &check_hlds__inst_check__V_58_58);
    }
#line 1098 "inst_check.m"
    {
#line 1098 "inst_check.m"
      check_hlds__inst_check__V_65_65 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_58_58, (MR_String) ".");
    }
#line 1098 "inst_check.m"
    {
#line 1098 "inst_check.m"
      check_hlds__inst_check__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "/", check_hlds__inst_check__V_65_65);
    }
#line 1099 "inst_check.m"
    {
#line 1099 "inst_check.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_54_54, check_hlds__inst_check__V_29_29, &check_hlds__inst_check__V_68_68);
    }
#line 1098 "inst_check.m"
    {
#line 1098 "inst_check.m"
      check_hlds__inst_check__V_75_75 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_68_68, check_hlds__inst_check__V_67_67);
    }
#line 1098 "inst_check.m"
    {
#line 1098 "inst_check.m"
      check_hlds__inst_check__ActualStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "function symbol is ", check_hlds__inst_check__V_75_75);
    }
#line 1102 "inst_check.m"
    {
#line 1102 "inst_check.m"
      check_hlds__inst_check__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1102 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_35_35, 1) = ((MR_Box) (check_hlds__inst_check__InFunctorStr_13));
#line 1102 "inst_check.m"
    }
#line 1102 "inst_check.m"
    {
#line 1102 "inst_check.m"
      check_hlds__inst_check__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1102 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_39_39, 1) = ((MR_Box) (check_hlds__inst_check__ActualStr_14));
#line 1102 "inst_check.m"
    }
#line 1102 "inst_check.m"
    {
#line 1102 "inst_check.m"
      check_hlds__inst_check__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_38_38, 0) = ((MR_Box) (check_hlds__inst_check__V_39_39));
#line 1102 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[6])));
#line 1102 "inst_check.m"
    }
#line 1102 "inst_check.m"
    {
#line 1102 "inst_check.m"
      check_hlds__inst_check__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1102 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_36_36, 1) = ((MR_Box) (check_hlds__inst_check__V_38_38));
#line 1102 "inst_check.m"
    }
#line 1102 "inst_check.m"
    {
#line 1102 "inst_check.m"
      check_hlds__inst_check__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_15, 0) = ((MR_Box) (check_hlds__inst_check__V_35_35));
#line 1102 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_15, 1) = ((MR_Box) (check_hlds__inst_check__V_36_36));
#line 1102 "inst_check.m"
    }
#line 4508 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1103 "inst_check.m"
    {
#line 1103 "inst_check.m"
      check_hlds__inst_check__V_44_44 = mercury__cord__from_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_46_46, check_hlds__inst_check__Pieces_15);
    }
#line 1103 "inst_check.m"
    {
#line 1103 "inst_check.m"
      *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19 = mercury__cord__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_46_46, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18, check_hlds__inst_check__V_44_44);
    }
#line 1094 "inst_check.m"
  }
#line 1091 "inst_check.m"
}

#line 1080 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0_1(
#line 1080 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 1080 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 1080 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 1080 "inst_check.m"
{
#line 1080 "inst_check.m"
  {
#line 1080 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 1080 "inst_check.m"
    MR_String check_hlds__inst_check__conv0_HeadVar__2_2;

#line 1080 "inst_check.m"
    {
#line 1080 "inst_check.m"
      mercury__string__int_to_string_2_p_0(((MR_Integer) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_HeadVar__2_2);
    }
#line 1080 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__2_2));
#line 1080 "inst_check.m"
  }
#line 1080 "inst_check.m"
}

#line 1072 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0(
#line 1072 "inst_check.m"
  MR_Integer check_hlds__inst_check__CurNum_9,
#line 1072 "inst_check.m"
  MR_String check_hlds__inst_check__FunctorName_10,
#line 1072 "inst_check.m"
  MR_Integer check_hlds__inst_check__ActualArity_11,
#line 1072 "inst_check.m"
  MR_Word check_hlds__inst_check__ExpectedAritiesSet_12,
#line 1072 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22,
#line 1072 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23,
#line 1072 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24,
#line 1072 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25)
#line 1072 "inst_check.m"
{
#line 1077 "inst_check.m"
  {
#line 1077 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_60_60;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorInfo_62_62;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__InFunctorStr_15;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__ExpectedArities_16;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__ExpectedArityStrs_17;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__ExpectedArityOrStr_18;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__ActualStr_19;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__ExpectedStr_20;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__Pieces_21;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__V_44_44;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__V_45_45;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__V_47_47;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__V_48_48;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__V_49_49;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__V_51_51;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__V_52_52;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__V_57_57;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__V_64_64;
#line 1077 "inst_check.m"
    MR_Word check_hlds__inst_check__V_70_70;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__V_71_71;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__V_74_74;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__V_81_81;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__V_83_83;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__V_84_84;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__V_91_91;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__V_94_94;
#line 1077 "inst_check.m"
    MR_String check_hlds__inst_check__V_101_101;

#line 1078 "inst_check.m"
    *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23 = (check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22 + (MR_Integer) 1);
#line 4637 "check_hlds.inst_check.c"
    check_hlds__inst_check__V_70_70 = (MR_Word) &check_hlds__inst_check_scalar_common_3[13];
#line 1079 "inst_check.m"
    {
#line 1079 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__CurNum_9, &check_hlds__inst_check__V_64_64);
    }
#line 1079 "inst_check.m"
    {
#line 1079 "inst_check.m"
      check_hlds__inst_check__V_71_71 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_64_64, (MR_String) ":");
    }
#line 1079 "inst_check.m"
    {
#line 1079 "inst_check.m"
      check_hlds__inst_check__InFunctorStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", check_hlds__inst_check__V_71_71);
    }
#line 4654 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1083 "inst_check.m"
    {
#line 1083 "inst_check.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__ActualArity_11, &check_hlds__inst_check__V_74_74);
    }
#line 1082 "inst_check.m"
    {
#line 1082 "inst_check.m"
      check_hlds__inst_check__V_81_81 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_74_74, (MR_String) ",");
    }
#line 1082 "inst_check.m"
    {
#line 1082 "inst_check.m"
      check_hlds__inst_check__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) " has arity ", check_hlds__inst_check__V_81_81);
    }
#line 1083 "inst_check.m"
    {
#line 1083 "inst_check.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__FunctorName_10, &check_hlds__inst_check__V_84_84);
    }
#line 1082 "inst_check.m"
    {
#line 1082 "inst_check.m"
      check_hlds__inst_check__V_91_91 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_84_84, check_hlds__inst_check__V_83_83);
    }
#line 1082 "inst_check.m"
    {
#line 1082 "inst_check.m"
      check_hlds__inst_check__ActualStr_19 = mercury__string__f_43_43_2_f_0((MR_String) "function symbol ", check_hlds__inst_check__V_91_91);
    }
#line 1086 "inst_check.m"
    {
#line 1086 "inst_check.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_60_60, check_hlds__inst_check__ExpectedAritiesSet_12, &check_hlds__inst_check__ExpectedArities_16);
    }
#line 1080 "inst_check.m"
    {
#line 1080 "inst_check.m"
      mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[4], check_hlds__inst_check__ExpectedArities_16, &check_hlds__inst_check__ExpectedArityStrs_17);
    }
#line 1081 "inst_check.m"
    {
#line 1081 "inst_check.m"
      check_hlds__inst_check__ExpectedArityOrStr_18 = mercury__string__join_list_2_f_0((MR_String) "or", check_hlds__inst_check__ExpectedArityStrs_17);
    }
#line 1085 "inst_check.m"
    {
#line 1085 "inst_check.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(check_hlds__inst_check__V_70_70, check_hlds__inst_check__ExpectedArityOrStr_18, &check_hlds__inst_check__V_94_94);
    }
#line 1084 "inst_check.m"
    {
#line 1084 "inst_check.m"
      check_hlds__inst_check__V_101_101 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__V_94_94, (MR_String) ".");
    }
#line 1084 "inst_check.m"
    {
#line 1084 "inst_check.m"
      check_hlds__inst_check__ExpectedStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "expected arity was ", check_hlds__inst_check__V_101_101);
    }
#line 1087 "inst_check.m"
    {
#line 1087 "inst_check.m"
      check_hlds__inst_check__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_44_44, 1) = ((MR_Box) (check_hlds__inst_check__InFunctorStr_15));
#line 1087 "inst_check.m"
    }
#line 1087 "inst_check.m"
    {
#line 1087 "inst_check.m"
      check_hlds__inst_check__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_48_48, 1) = ((MR_Box) (check_hlds__inst_check__ActualStr_19));
#line 1087 "inst_check.m"
    }
#line 1088 "inst_check.m"
    {
#line 1088 "inst_check.m"
      check_hlds__inst_check__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1088 "inst_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 1) = ((MR_Box) (check_hlds__inst_check__ExpectedStr_20));
#line 1088 "inst_check.m"
    }
#line 1088 "inst_check.m"
    {
#line 1088 "inst_check.m"
      check_hlds__inst_check__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 0) = ((MR_Box) (check_hlds__inst_check__V_52_52));
#line 1088 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[6])));
#line 1088 "inst_check.m"
    }
#line 1087 "inst_check.m"
    {
#line 1087 "inst_check.m"
      check_hlds__inst_check__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_49_49, 1) = ((MR_Box) (check_hlds__inst_check__V_51_51));
#line 1087 "inst_check.m"
    }
#line 1087 "inst_check.m"
    {
#line 1087 "inst_check.m"
      check_hlds__inst_check__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_47_47, 0) = ((MR_Box) (check_hlds__inst_check__V_48_48));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_47_47, 1) = ((MR_Box) (check_hlds__inst_check__V_49_49));
#line 1087 "inst_check.m"
    }
#line 1087 "inst_check.m"
    {
#line 1087 "inst_check.m"
      check_hlds__inst_check__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_45_45, 1) = ((MR_Box) (check_hlds__inst_check__V_47_47));
#line 1087 "inst_check.m"
    }
#line 1087 "inst_check.m"
    {
#line 1087 "inst_check.m"
      check_hlds__inst_check__Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_21, 0) = ((MR_Box) (check_hlds__inst_check__V_44_44));
#line 1087 "inst_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_21, 1) = ((MR_Box) (check_hlds__inst_check__V_45_45));
#line 1087 "inst_check.m"
    }
#line 4796 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1089 "inst_check.m"
    {
#line 1089 "inst_check.m"
      check_hlds__inst_check__V_57_57 = mercury__cord__from_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_62_62, check_hlds__inst_check__Pieces_21);
    }
#line 1089 "inst_check.m"
    {
#line 1089 "inst_check.m"
      *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25 = mercury__cord__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_62_62, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24, check_hlds__inst_check__V_57_57);
    }
#line 1077 "inst_check.m"
  }
#line 1072 "inst_check.m"
}

#line 1049 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(
#line 1049 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
#line 1049 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 1049 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 1049 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 1049 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 1049 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 1049 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
#line 1049 "inst_check.m"
{
#line 1053 "inst_check.m"
  while (MR_TRUE)
#line 1053 "inst_check.m"
    {
#line 1053 "inst_check.m"
      /* tailcall optimized into a loop */
#line 1053 "inst_check.m"
      {
#line 1053 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 1053 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "inst_check.m"
          {
#line 1054 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1054 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1053 "inst_check.m"
          }
#line 1053 "inst_check.m"
        else
#line 1056 "inst_check.m"
          {
#line 1056 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 1056 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 1056 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
#line 1056 "inst_check.m"
            MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29;
#line 1056 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30;
#line 1056 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_33_33;
#line 1057 "inst_check.m"
            MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));
#line 1058 "inst_check.m"
            MR_Integer check_hlds__inst_check__ActualArity_24;

#line 1058 "inst_check.m"
            check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1058 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 1058 "inst_check.m"
              {
#line 1058 "inst_check.m"
                check_hlds__inst_check__ActualArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 1059 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__ActualArity_24 == check_hlds__inst_check__HeadVar__1_1);
#line 1059 "inst_check.m"
                if (check_hlds__inst_check__succeeded)
#line 1060 "inst_check.m"
                  {
#line 1060 "inst_check.m"
                    check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1060 "inst_check.m"
                    check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1060 "inst_check.m"
                  }
#line 1059 "inst_check.m"
                else
#line 1062 "inst_check.m"
                  {
#line 1062 "inst_check.m"
                    check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30);
                  }
#line 1058 "inst_check.m"
              }
#line 1058 "inst_check.m"
            else
#line 1065 "inst_check.m"
              {
#line 1065 "inst_check.m"
                check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30);
              }
#line 1067 "inst_check.m"
            check_hlds__inst_check__V_33_33 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 1067 "inst_check.m"
            /* direct tailcall eliminated */
#line 1067 "inst_check.m"
            {
#line 1067 "inst_check.m"
              MR_Integer check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__V_33_33;
#line 1067 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__3__tmp_copy_3 = check_hlds__inst_check__BoundInsts_19;
#line 1067 "inst_check.m"
              MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29;
#line 1067 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30;

#line 1067 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6;
#line 1067 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4;
#line 1067 "inst_check.m"
              check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__HeadVar__3__tmp_copy_3;
#line 1067 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 1067 "inst_check.m"
            }
#line 1067 "inst_check.m"
            continue;
#line 1056 "inst_check.m"
          }
#line 1053 "inst_check.m"
      }
#line 1053 "inst_check.m"
      break;
#line 1053 "inst_check.m"
    }
#line 1049 "inst_check.m"
}

#line 1000 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(
#line 1000 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 1000 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 1000 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 1000 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 1000 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 1000 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 1000 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
#line 1000 "inst_check.m"
{
#line 1004 "inst_check.m"
  while (MR_TRUE)
#line 1004 "inst_check.m"
    {
#line 1004 "inst_check.m"
      /* tailcall optimized into a loop */
#line 1004 "inst_check.m"
      {
#line 1004 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 1004 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1004 "inst_check.m"
          {
#line 1005 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1005 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1004 "inst_check.m"
          }
#line 1004 "inst_check.m"
        else
#line 1007 "inst_check.m"
          {
#line 1007 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 1007 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 1007 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
#line 1007 "inst_check.m"
            MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43;
#line 1007 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44;
#line 1007 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_45_45;
#line 1008 "inst_check.m"
            MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));

#line 1016 "inst_check.m"
#line 1016 "inst_check.m"
            switch (check_hlds__inst_check__HeadVar__1_1) {
#line 1016 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1016 "inst_check.m"
              case (MR_Integer) 3:
#line 1025 "inst_check.m"
                {
#line 1025 "inst_check.m"
                  MR_Char check_hlds__inst_check__V_26_26;

#line 1025 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 1025 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 1025 "inst_check.m"
                    {
#line 1025 "inst_check.m"
                      check_hlds__inst_check__V_26_26 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 1026 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1026 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1025 "inst_check.m"
                    }
#line 1025 "inst_check.m"
                  else
#line 1027 "inst_check.m"
                    {
#line 1028 "inst_check.m"
                      MR_Word check_hlds__inst_check__SymName_27;
#line 1028 "inst_check.m"
                      MR_Integer check_hlds__inst_check__ConsArity_28;
#line 1028 "inst_check.m"
                      MR_Integer check_hlds__inst_check__V_37_37;
#line 1028 "inst_check.m"
                      MR_String check_hlds__inst_check__V_38_38;
#line 1028 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_29_29;

#line 1028 "inst_check.m"
                      check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1028 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 1028 "inst_check.m"
                        {
#line 1028 "inst_check.m"
                          check_hlds__inst_check__SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 1028 "inst_check.m"
                          check_hlds__inst_check__ConsArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 2)));
#line 1028 "inst_check.m"
                          check_hlds__inst_check__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 3)));
#line 1029 "inst_check.m"
                          {
#line 1029 "inst_check.m"
                            check_hlds__inst_check__V_38_38 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_27);
                          }
#line 1029 "inst_check.m"
                          {
#line 1029 "inst_check.m"
                            check_hlds__inst_check__V_37_37 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__V_38_38);
                          }
#line 1029 "inst_check.m"
                          check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_37_37 == (MR_Integer) 1);
#line 1028 "inst_check.m"
                          if (check_hlds__inst_check__succeeded)
#line 1030 "inst_check.m"
                            check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_28 == (MR_Integer) 0);
#line 1028 "inst_check.m"
                        }
#line 1027 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 1032 "inst_check.m"
                        {
#line 1032 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1032 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1032 "inst_check.m"
                        }
#line 1027 "inst_check.m"
                      else
#line 1034 "inst_check.m"
                        {
#line 1034 "inst_check.m"
                          check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                        }
#line 1027 "inst_check.m"
                    }
#line 1025 "inst_check.m"
                }
#line 1016 "inst_check.m"
                break;
#line 1016 "inst_check.m"
              case (MR_Integer) 1:
#line 1018 "inst_check.m"
                {
#line 1018 "inst_check.m"
                  MR_Float check_hlds__inst_check__V_25_25;

#line 1018 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1018 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 1018 "inst_check.m"
                    {
#line 1018 "inst_check.m"
                      check_hlds__inst_check__V_25_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 1019 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1019 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1018 "inst_check.m"
                    }
#line 1018 "inst_check.m"
                  else
#line 1021 "inst_check.m"
                    {
#line 1021 "inst_check.m"
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                    }
#line 1018 "inst_check.m"
                }
#line 1016 "inst_check.m"
                break;
#line 1016 "inst_check.m"
              case (MR_Integer) 0:
#line 1011 "inst_check.m"
                {
#line 1011 "inst_check.m"
                  MR_Integer check_hlds__inst_check__V_24_24;

#line 1011 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1011 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 1011 "inst_check.m"
                    {
#line 1011 "inst_check.m"
                      check_hlds__inst_check__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 1012 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1012 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1011 "inst_check.m"
                    }
#line 1011 "inst_check.m"
                  else
#line 1014 "inst_check.m"
                    {
#line 1014 "inst_check.m"
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                    }
#line 1011 "inst_check.m"
                }
#line 1016 "inst_check.m"
                break;
#line 1016 "inst_check.m"
              case (MR_Integer) 2:
#line 1038 "inst_check.m"
                {
#line 1038 "inst_check.m"
                  MR_String check_hlds__inst_check__V_30_30;

#line 1038 "inst_check.m"
                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1038 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 1038 "inst_check.m"
                    {
#line 1038 "inst_check.m"
                      check_hlds__inst_check__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 1039 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 1039 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 1038 "inst_check.m"
                    }
#line 1038 "inst_check.m"
                  else
#line 1041 "inst_check.m"
                    {
#line 1041 "inst_check.m"
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44);
                    }
#line 1038 "inst_check.m"
                }
#line 1016 "inst_check.m"
                break;
#line 1016 "inst_check.m"
            }
#line 1044 "inst_check.m"
            check_hlds__inst_check__V_45_45 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 1044 "inst_check.m"
            /* direct tailcall eliminated */
#line 1044 "inst_check.m"
            {
#line 1044 "inst_check.m"
              MR_Integer check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__V_45_45;
#line 1044 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__3__tmp_copy_3 = check_hlds__inst_check__BoundInsts_19;
#line 1044 "inst_check.m"
              MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_43_43;
#line 1044 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_44_44;

#line 1044 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6;
#line 1044 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4;
#line 1044 "inst_check.m"
              check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__HeadVar__3__tmp_copy_3;
#line 1044 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 1044 "inst_check.m"
            }
#line 1044 "inst_check.m"
            continue;
#line 1007 "inst_check.m"
          }
#line 1004 "inst_check.m"
      }
#line 1004 "inst_check.m"
      break;
#line 1004 "inst_check.m"
    }
#line 1000 "inst_check.m"
}

#line 978 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(
#line 978 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 978 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 978 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3,
#line 978 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4,
#line 978 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5)
#line 978 "inst_check.m"
{
#line 981 "inst_check.m"
  while (MR_TRUE)
#line 981 "inst_check.m"
    {
#line 981 "inst_check.m"
      /* tailcall optimized into a loop */
#line 981 "inst_check.m"
      {
#line 981 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 981 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 982 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4;
#line 981 "inst_check.m"
        else
#line 984 "inst_check.m"
          {
#line 984 "inst_check.m"
            MR_Word check_hlds__inst_check__Ctor_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 984 "inst_check.m"
            MR_Word check_hlds__inst_check__Ctors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 984 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 2)));
#line 984 "inst_check.m"
            MR_Integer check_hlds__inst_check__ConsArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 4)));
#line 984 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24;
#line 985 "inst_check.m"
            MR_Word check_hlds__inst_check___ExistTVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 0)));
#line 985 "inst_check.m"
            MR_Word check_hlds__inst_check___Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 1)));
#line 985 "inst_check.m"
            MR_Word check_hlds__inst_check___ConsArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 3)));
#line 985 "inst_check.m"
            MR_Word check_hlds__inst_check___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 5)));
#line 988 "inst_check.m"
            MR_String check_hlds__inst_check__V_27_27;

#line 988 "inst_check.m"
            {
#line 988 "inst_check.m"
              check_hlds__inst_check__V_27_27 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__ConsName_18);
            }
#line 988 "inst_check.m"
            check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__V_27_27) == 0);
#line 988 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 988 "inst_check.m"
              {
#line 989 "inst_check.m"
                check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_20 == check_hlds__inst_check__HeadVar__3_3);
#line 989 "inst_check.m"
                check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 988 "inst_check.m"
              }
#line 987 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 991 "inst_check.m"
              {
#line 991 "inst_check.m"
                {
#line 991 "inst_check.m"
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__inst_check__ConsArity_20)), check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4, &check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24);
                }
#line 991 "inst_check.m"
              }
#line 987 "inst_check.m"
            else
#line 987 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4;
#line 995 "inst_check.m"
            /* direct tailcall eliminated */
#line 995 "inst_check.m"
            {
#line 995 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__1__tmp_copy_1 = check_hlds__inst_check__Ctors_12;
#line 995 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24;

#line 995 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0__tmp_copy_4;
#line 995 "inst_check.m"
              check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__HeadVar__1__tmp_copy_1;
#line 995 "inst_check.m"
            }
#line 995 "inst_check.m"
            continue;
#line 984 "inst_check.m"
          }
#line 981 "inst_check.m"
      }
#line 981 "inst_check.m"
      break;
#line 981 "inst_check.m"
    }
#line 978 "inst_check.m"
}

#line 961 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(
#line 961 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 961 "inst_check.m"
  MR_String check_hlds__inst_check__HeadVar__2_2,
#line 961 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__3_3)
#line 961 "inst_check.m"
{
#line 5363 "check_hlds.inst_check.c"
  while (MR_TRUE)
#line 5365 "check_hlds.inst_check.c"
    {
#line 5367 "check_hlds.inst_check.c"
      /* tailcall optimized into a loop */
#line 5369 "check_hlds.inst_check.c"
      {
#line 5371 "check_hlds.inst_check.c"
        MR_bool check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 5373 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__Ctor_6;
#line 5375 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__Ctors_7;
#line 5377 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__ConsName_12;
#line 5379 "check_hlds.inst_check.c"
        MR_Integer check_hlds__inst_check__ConsArity_14;
#line 967 "inst_check.m"
        MR_Word check_hlds__inst_check___ExistTVars_10;
#line 967 "inst_check.m"
        MR_Word check_hlds__inst_check___Constraints_11;
#line 967 "inst_check.m"
        MR_Word check_hlds__inst_check___ConsArgs_13;
#line 967 "inst_check.m"
        MR_Word check_hlds__inst_check___Context_15;
#line 970 "inst_check.m"
        MR_String check_hlds__inst_check__V_16_16;

#line 5392 "check_hlds.inst_check.c"
        if (check_hlds__inst_check__succeeded)
#line 5394 "check_hlds.inst_check.c"
          {
#line 5396 "check_hlds.inst_check.c"
            check_hlds__inst_check__Ctor_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 5398 "check_hlds.inst_check.c"
            check_hlds__inst_check__Ctors_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 967 "inst_check.m"
            check_hlds__inst_check___ExistTVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 0)));
#line 967 "inst_check.m"
            check_hlds__inst_check___Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 1)));
#line 967 "inst_check.m"
            check_hlds__inst_check__ConsName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 2)));
#line 967 "inst_check.m"
            check_hlds__inst_check___ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 3)));
#line 967 "inst_check.m"
            check_hlds__inst_check__ConsArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 4)));
#line 967 "inst_check.m"
            check_hlds__inst_check___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 5)));
#line 970 "inst_check.m"
            {
#line 970 "inst_check.m"
              check_hlds__inst_check__V_16_16 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__ConsName_12);
            }
#line 970 "inst_check.m"
            check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__V_16_16) == 0);
#line 970 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 971 "inst_check.m"
              check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_14 == check_hlds__inst_check__HeadVar__3_3);
#line 969 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 973 "inst_check.m"
              check_hlds__inst_check__succeeded = MR_TRUE;
#line 969 "inst_check.m"
            else
#line 975 "inst_check.m"
              {
#line 975 "inst_check.m"
                /* direct tailcall eliminated */
#line 975 "inst_check.m"
                {
#line 975 "inst_check.m"
                  MR_Word check_hlds__inst_check__HeadVar__1__tmp_copy_1 = check_hlds__inst_check__Ctors_7;

#line 975 "inst_check.m"
                  check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__HeadVar__1__tmp_copy_1;
#line 975 "inst_check.m"
                }
#line 975 "inst_check.m"
                continue;
#line 975 "inst_check.m"
              }
#line 5446 "check_hlds.inst_check.c"
          }
#line 5448 "check_hlds.inst_check.c"
        return check_hlds__inst_check__succeeded;
#line 5450 "check_hlds.inst_check.c"
      }
#line 5452 "check_hlds.inst_check.c"
      break;
#line 5454 "check_hlds.inst_check.c"
    }
#line 961 "inst_check.m"
}

#line 928 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0(
#line 928 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 928 "inst_check.m"
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
#line 928 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__3_3,
#line 928 "inst_check.m"
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
#line 928 "inst_check.m"
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
#line 928 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
#line 928 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
#line 928 "inst_check.m"
{
#line 932 "inst_check.m"
  while (MR_TRUE)
#line 932 "inst_check.m"
    {
#line 932 "inst_check.m"
      /* tailcall optimized into a loop */
#line 932 "inst_check.m"
      {
#line 932 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 932 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "inst_check.m"
          {
#line 933 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 933 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 932 "inst_check.m"
          }
#line 932 "inst_check.m"
        else
#line 935 "inst_check.m"
          {
#line 935 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
#line 935 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
#line 935 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
#line 935 "inst_check.m"
            MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34;
#line 935 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35;
#line 935 "inst_check.m"
            MR_Integer check_hlds__inst_check__V_40_40;
#line 936 "inst_check.m"
            MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));
#line 937 "inst_check.m"
            MR_Word check_hlds__inst_check__SymName_24;
#line 937 "inst_check.m"
            MR_Integer check_hlds__inst_check__Arity_25;
#line 938 "inst_check.m"
            MR_Word check_hlds__inst_check__V_26_26;

#line 938 "inst_check.m"
            check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 938 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 938 "inst_check.m"
              {
#line 938 "inst_check.m"
                check_hlds__inst_check__SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
#line 938 "inst_check.m"
                check_hlds__inst_check__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 2)));
#line 938 "inst_check.m"
                check_hlds__inst_check__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 3)));
#line 940 "inst_check.m"
                {
#line 940 "inst_check.m"
                  MR_String check_hlds__inst_check__FunctorName_27;

#line 940 "inst_check.m"
                  {
#line 940 "inst_check.m"
                    check_hlds__inst_check__FunctorName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_24);
                  }
#line 942 "inst_check.m"
                  {
#line 942 "inst_check.m"
                    check_hlds__inst_check__succeeded = check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25);
                  }
#line 941 "inst_check.m"
                  if (check_hlds__inst_check__succeeded)
#line 944 "inst_check.m"
                    {
#line 944 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
#line 944 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
#line 944 "inst_check.m"
                    }
#line 941 "inst_check.m"
                  else
#line 947 "inst_check.m"
                    {
#line 947 "inst_check.m"
                      MR_Word check_hlds__inst_check__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 947 "inst_check.m"
                      MR_Word check_hlds__inst_check__ExpectedArities_28;
#line 947 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_33_33;

#line 947 "inst_check.m"
                      {
#line 947 "inst_check.m"
                        check_hlds__inst_check__V_33_33 = mercury__set__init_0_f_0(check_hlds__inst_check__TypeCtorInfo_44_44);
                      }
#line 946 "inst_check.m"
                      {
#line 946 "inst_check.m"
                        check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25, check_hlds__inst_check__V_33_33, &check_hlds__inst_check__ExpectedArities_28);
                      }
#line 948 "inst_check.m"
                      {
#line 948 "inst_check.m"
                        check_hlds__inst_check__succeeded = mercury__set__is_empty_1_p_0(check_hlds__inst_check__TypeCtorInfo_44_44, check_hlds__inst_check__ExpectedArities_28);
                      }
#line 948 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 949 "inst_check.m"
                        {
#line 949 "inst_check.m"
                          check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
                        }
#line 948 "inst_check.m"
                      else
#line 951 "inst_check.m"
                        {
#line 951 "inst_check.m"
                          check_hlds__inst_check__record_arity_mismatch_8_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25, check_hlds__inst_check__ExpectedArities_28, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
                        }
#line 947 "inst_check.m"
                    }
#line 940 "inst_check.m"
                }
#line 938 "inst_check.m"
              }
#line 938 "inst_check.m"
            else
#line 956 "inst_check.m"
              {
#line 956 "inst_check.m"
                check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
              }
#line 958 "inst_check.m"
            check_hlds__inst_check__V_40_40 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
#line 958 "inst_check.m"
            /* direct tailcall eliminated */
#line 958 "inst_check.m"
            {
#line 958 "inst_check.m"
              MR_Integer check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__V_40_40;
#line 958 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__3__tmp_copy_3 = check_hlds__inst_check__BoundInsts_19;
#line 958 "inst_check.m"
              MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34;
#line 958 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35;

#line 958 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0__tmp_copy_6;
#line 958 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0__tmp_copy_4;
#line 958 "inst_check.m"
              check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__HeadVar__3__tmp_copy_3;
#line 958 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 958 "inst_check.m"
            }
#line 958 "inst_check.m"
            continue;
#line 935 "inst_check.m"
          }
#line 932 "inst_check.m"
      }
#line 932 "inst_check.m"
      break;
#line 932 "inst_check.m"
    }
#line 928 "inst_check.m"
}

#line 892 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
#line 892 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_4,
#line 892 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_5,
#line 892 "inst_check.m"
  MR_Word * check_hlds__inst_check__MismatchFromType_6)
#line 892 "inst_check.m"
{
#line 896 "inst_check.m"
  {
#line 896 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 896 "inst_check.m"
    MR_Integer check_hlds__inst_check__NumMismatches_25;
#line 896 "inst_check.m"
    MR_Word check_hlds__inst_check__MismatchPiecesCord_26;
#line 896 "inst_check.m"
    MR_Word check_hlds__inst_check__MismatchPieces_29;

#line 913 "inst_check.m"
#line 913 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_5)) {
#line 913 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 913 "inst_check.m"
      case (MR_Integer) 0:
#line 898 "inst_check.m"
        {
#line 898 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtorAndDefn_7 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_5), (MR_Integer) 0);
#line 898 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_7, (MR_Integer) 1)));
#line 898 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeDefnBody_10;
#line 898 "inst_check.m"
          MR_Word check_hlds__inst_check__Constructors_11;
#line 898 "inst_check.m"
          MR_Word check_hlds__inst_check__V_41_41;
#line 899 "inst_check.m"
          MR_Word check_hlds__inst_check___TypeCtor_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_7, (MR_Integer) 0)));

#line 900 "inst_check.m"
          {
#line 900 "inst_check.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDefn_9, &check_hlds__inst_check__TypeDefnBody_10);
          }
#line 903 "inst_check.m"
#line 903 "inst_check.m"
          switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnBody_10)) {
#line 903 "inst_check.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 903 "inst_check.m"
            case (MR_Integer) 0:
#line 908 "inst_check.m"
              {
#line 909 "inst_check.m"
                {
#line 909 "inst_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
#line 909 "inst_check.m"
                  return;
                }
#line 908 "inst_check.m"
              }
#line 903 "inst_check.m"
              break;
#line 903 "inst_check.m"
            case (MR_Integer) 1:
#line 902 "inst_check.m"
              {
#line 902 "inst_check.m"
                MR_Word check_hlds__inst_check__V_12_12;
#line 902 "inst_check.m"
                MR_Word check_hlds__inst_check__V_13_13;
#line 902 "inst_check.m"
                MR_Word check_hlds__inst_check__V_14_14;
#line 902 "inst_check.m"
                MR_Word check_hlds__inst_check__V_15_15;
#line 902 "inst_check.m"
                MR_Word check_hlds__inst_check__V_16_16;
#line 902 "inst_check.m"
                MR_Word check_hlds__inst_check__V_17_17;
#line 902 "inst_check.m"
                MR_Word check_hlds__inst_check__V_18_18;
#line 902 "inst_check.m"
                MR_Word check_hlds__inst_check__V_19_19;

#line 902 "inst_check.m"
                check_hlds__inst_check__Constructors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 0)));
#line 902 "inst_check.m"
                check_hlds__inst_check__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 1)));
#line 902 "inst_check.m"
                check_hlds__inst_check__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 2)));
#line 902 "inst_check.m"
                check_hlds__inst_check__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 3)));
#line 902 "inst_check.m"
                check_hlds__inst_check__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 4)));
#line 902 "inst_check.m"
                check_hlds__inst_check__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 5)));
#line 902 "inst_check.m"
                check_hlds__inst_check__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 902 "inst_check.m"
                check_hlds__inst_check__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 902 "inst_check.m"
                check_hlds__inst_check__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 7)));
#line 902 "inst_check.m"
              }
#line 903 "inst_check.m"
              break;
#line 903 "inst_check.m"
            case (MR_Integer) 2:
#line 908 "inst_check.m"
              {
#line 909 "inst_check.m"
                {
#line 909 "inst_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
#line 909 "inst_check.m"
                  return;
                }
#line 908 "inst_check.m"
              }
#line 903 "inst_check.m"
              break;
#line 903 "inst_check.m"
            case (MR_Integer) 3:
#line 908 "inst_check.m"
              {
#line 909 "inst_check.m"
                {
#line 909 "inst_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
#line 909 "inst_check.m"
                  return;
                }
#line 908 "inst_check.m"
              }
#line 903 "inst_check.m"
              break;
#line 903 "inst_check.m"
          }
#line 912 "inst_check.m"
          {
#line 912 "inst_check.m"
            check_hlds__inst_check__V_41_41 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          }
#line 911 "inst_check.m"
          {
#line 911 "inst_check.m"
            check_hlds__inst_check__find_mismatches_from_user_7_p_0(check_hlds__inst_check__Constructors_11, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_25, check_hlds__inst_check__V_41_41, &check_hlds__inst_check__MismatchPiecesCord_26);
          }
#line 898 "inst_check.m"
        }
#line 913 "inst_check.m"
        break;
#line 913 "inst_check.m"
      case (MR_Integer) 1:
#line 914 "inst_check.m"
        {
#line 914 "inst_check.m"
          MR_Word check_hlds__inst_check__BuiltinType_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_5, (MR_Integer) 0)));
#line 914 "inst_check.m"
          MR_Word check_hlds__inst_check__V_35_35;

#line 916 "inst_check.m"
          {
#line 916 "inst_check.m"
            check_hlds__inst_check__V_35_35 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          }
#line 915 "inst_check.m"
          {
#line 915 "inst_check.m"
            check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(check_hlds__inst_check__BuiltinType_27, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_25, check_hlds__inst_check__V_35_35, &check_hlds__inst_check__MismatchPiecesCord_26);
          }
#line 914 "inst_check.m"
        }
#line 913 "inst_check.m"
        break;
#line 913 "inst_check.m"
      case (MR_Integer) 2:
#line 918 "inst_check.m"
        {
#line 918 "inst_check.m"
          MR_Integer check_hlds__inst_check__TupleArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_5, (MR_Integer) 0)));
#line 918 "inst_check.m"
          MR_Word check_hlds__inst_check__V_32_32;

#line 920 "inst_check.m"
          {
#line 920 "inst_check.m"
            check_hlds__inst_check__V_32_32 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          }
#line 919 "inst_check.m"
          {
#line 919 "inst_check.m"
            check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(check_hlds__inst_check__TupleArity_28, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_25, check_hlds__inst_check__V_32_32, &check_hlds__inst_check__MismatchPiecesCord_26);
          }
#line 918 "inst_check.m"
        }
#line 913 "inst_check.m"
        break;
#line 913 "inst_check.m"
    }
#line 922 "inst_check.m"
    {
#line 922 "inst_check.m"
      check_hlds__inst_check__MismatchPieces_29 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__MismatchPiecesCord_26);
    }
#line 923 "inst_check.m"
    {
#line 923 "inst_check.m"
      MR_Word base;
#line 923 "inst_check.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 923 "inst_check.m"
      *check_hlds__inst_check__MismatchFromType_6 = base;
#line 923 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__NumMismatches_25));
#line 923 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__TypeDefnOrBuiltin_5));
#line 923 "inst_check.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_check__MismatchPieces_29));
#line 923 "inst_check.m"
    }
#line 896 "inst_check.m"
  }
#line 892 "inst_check.m"
}

#line 866 "inst_check.m"
static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_6(
#line 866 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 866 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1)
#line 866 "inst_check.m"
{
#line 866 "inst_check.m"
  {
#line 866 "inst_check.m"
    MR_Box check_hlds__inst_check__wrapper_arg_2;
#line 866 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 866 "inst_check.m"
    MR_String check_hlds__inst_check__conv2_Str_4;

#line 866 "inst_check.m"
    {
#line 866 "inst_check.m"
      check_hlds__inst_check__conv2_Str_4 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1));
    }
#line 866 "inst_check.m"
    check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv2_Str_4));
#line 866 "inst_check.m"
    return check_hlds__inst_check__wrapper_arg_2;
#line 866 "inst_check.m"
  }
#line 866 "inst_check.m"
}

#line 815 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_1(
#line 815 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 815 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 815 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 815 "inst_check.m"
{
#line 815 "inst_check.m"
  {
#line 815 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 815 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_MismatchFromType_6;

#line 815 "inst_check.m"
    {
#line 815 "inst_check.m"
      check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_MismatchFromType_6);
    }
#line 815 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_MismatchFromType_6));
#line 815 "inst_check.m"
  }
#line 815 "inst_check.m"
}

#line 838 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_2(
#line 838 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 838 "inst_check.m"
{
#line 838 "inst_check.m"
  {
#line 838 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 838 "inst_check.m"
    MR_builtin_longjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__commit_0, 1);
#line 838 "inst_check.m"
  }
#line 838 "inst_check.m"
}

#line 838 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_4(
#line 838 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 838 "inst_check.m"
{
#line 838 "inst_check.m"
  {
#line 838 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 838 "inst_check.m"
    (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_118 = ((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__conv1_Type_118);
#line 838 "inst_check.m"
    {
#line 838 "inst_check.m"
      check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_3(check_hlds__inst_check__env_ptr);
    }
#line 838 "inst_check.m"
  }
#line 838 "inst_check.m"
}

#line 838 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_3(
#line 838 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 838 "inst_check.m"
{
#line 838 "inst_check.m"
  {
#line 838 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 843 "inst_check.m"
#line 843 "inst_check.m"
    switch (MR_tag((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_118)) {
#line 843 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 843 "inst_check.m"
      case (MR_Integer) 0:
#line 840 "inst_check.m"
        {
#line 840 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtorAndDefn_31 = (MR_Word) MR_body(((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_118), (MR_Integer) 0);
#line 840 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeDefn_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_31, (MR_Integer) 1)));
#line 841 "inst_check.m"
          MR_Word check_hlds__inst_check__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_31, (MR_Integer) 0)));

#line 842 "inst_check.m"
          {
#line 842 "inst_check.m"
            (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0((MR_Integer) 0, check_hlds__inst_check__TypeDefn_33);
          }
#line 840 "inst_check.m"
        }
#line 843 "inst_check.m"
        break;
#line 843 "inst_check.m"
      case (MR_Integer) 1:
#line 844 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 843 "inst_check.m"
        break;
#line 843 "inst_check.m"
      case (MR_Integer) 2:
#line 846 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 843 "inst_check.m"
        break;
#line 843 "inst_check.m"
    }
#line 843 "inst_check.m"
    if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded)
#line 843 "inst_check.m"
      {
#line 843 "inst_check.m"
        check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_2(check_hlds__inst_check__env_ptr);
      }
#line 838 "inst_check.m"
  }
#line 838 "inst_check.m"
}

#line 838 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_5(
#line 838 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 838 "inst_check.m"
{
#line 838 "inst_check.m"
  {
#line 838 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 838 "inst_check.m"
    if (MR_builtin_setjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__commit_0) == 0)
#line 838 "inst_check.m"
      {
#line 838 "inst_check.m"
        {
#line 838 "inst_check.m"
          {
#line 838 "inst_check.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, &(check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__conv1_Type_118, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11, check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_4, check_hlds__inst_check__env_ptr);
          }
#line 838 "inst_check.m"
        }
#line 838 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_FALSE;
#line 838 "inst_check.m"
      }
#line 838 "inst_check.m"
    else
#line 838 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 838 "inst_check.m"
  }
#line 838 "inst_check.m"
}

#line 792 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0(
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_8,
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_9,
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__BoundInsts_10,
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypes_11,
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__PossibleTypeSets_12,
#line 792 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_43,
#line 792 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_44)
#line 792 "inst_check.m"
{
#line 792 "inst_check.m"
  {
#line 792 "inst_check.m"
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s check_hlds__inst_check__env;

#line 792 "inst_check.m"
    (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11 = check_hlds__inst_check__PossibleTypes_11;
#line 798 "inst_check.m"
    {
#line 798 "inst_check.m"
      MR_Word check_hlds__inst_check__InstStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));
#line 798 "inst_check.m"
      MR_Word check_hlds__inst_check__DefinedInThisModule_15;
#line 799 "inst_check.m"
      MR_Word check_hlds__inst_check__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
#line 799 "inst_check.m"
      MR_Word check_hlds__inst_check__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
#line 799 "inst_check.m"
      MR_Word check_hlds__inst_check__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
#line 799 "inst_check.m"
      MR_Word check_hlds__inst_check__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
#line 799 "inst_check.m"
      MR_Word check_hlds__inst_check__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));

#line 800 "inst_check.m"
      {
#line 800 "inst_check.m"
        check_hlds__inst_check__DefinedInThisModule_15 = hlds__status__inst_status_defined_in_this_module_1_f_0(check_hlds__inst_check__InstStatus_14);
      }
#line 803 "inst_check.m"
#line 803 "inst_check.m"
      switch (check_hlds__inst_check__DefinedInThisModule_15) {
#line 803 "inst_check.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 803 "inst_check.m"
        case (MR_Integer) 0:
#line 802 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_43;
#line 803 "inst_check.m"
          break;
#line 803 "inst_check.m"
        case (MR_Integer) 1:
#line 804 "inst_check.m"
          if (((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 806 "inst_check.m"
            {
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__TypeCtorInfo_149_149;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__TypeCtorInfo_152_152;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__InstName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 0)));
#line 806 "inst_check.m"
              MR_Integer check_hlds__inst_check__InstArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 1)));
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__NoMatchPieces_19;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__AllPossibleTypesSet_20;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__AllPossibleTypes_21;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__MismatchesFromPossibleTypes_22;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__MismatchPieces_24;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__Pieces_25;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__Spec_26;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_101_101;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_102_102;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_103_103;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_108_108;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_111_111;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_112_112;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_113_113;
#line 806 "inst_check.m"
              MR_Word check_hlds__inst_check__V_114_114;
#line 807 "inst_check.m"
              MR_Word check_hlds__inst_check__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
#line 807 "inst_check.m"
              MR_Word check_hlds__inst_check__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
#line 807 "inst_check.m"
              MR_Word check_hlds__inst_check__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
#line 807 "inst_check.m"
              MR_Word check_hlds__inst_check__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
#line 807 "inst_check.m"
              MR_Word check_hlds__inst_check__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));

#line 810 "inst_check.m"
              {
#line 810 "inst_check.m"
                check_hlds__inst_check__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 810 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_103_103, 0) = ((MR_Box) (check_hlds__inst_check__InstName_17));
#line 810 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_103_103, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_18));
#line 810 "inst_check.m"
              }
#line 810 "inst_check.m"
              {
#line 810 "inst_check.m"
                check_hlds__inst_check__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 810 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_102_102, 1) = ((MR_Box) (check_hlds__inst_check__V_103_103));
#line 810 "inst_check.m"
              }
#line 810 "inst_check.m"
              {
#line 810 "inst_check.m"
                check_hlds__inst_check__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_101_101, 0) = ((MR_Box) (check_hlds__inst_check__V_102_102));
#line 810 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[40])));
#line 810 "inst_check.m"
              }
#line 809 "inst_check.m"
              {
#line 809 "inst_check.m"
                check_hlds__inst_check__NoMatchPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__NoMatchPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[38])));
#line 809 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__NoMatchPieces_19, 1) = ((MR_Box) (check_hlds__inst_check__V_101_101));
#line 809 "inst_check.m"
              }
#line 6248 "check_hlds.inst_check.c"
              check_hlds__inst_check__TypeCtorInfo_149_149 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
#line 813 "inst_check.m"
              {
#line 813 "inst_check.m"
                check_hlds__inst_check__AllPossibleTypesSet_20 = mercury__set__union_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_149_149, check_hlds__inst_check__PossibleTypeSets_12);
              }
#line 814 "inst_check.m"
              {
#line 814 "inst_check.m"
                mercury__set__to_sorted_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_149_149, check_hlds__inst_check__AllPossibleTypesSet_20, &check_hlds__inst_check__AllPossibleTypes_21);
              }
#line 815 "inst_check.m"
              {
#line 815 "inst_check.m"
                check_hlds__inst_check__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 815 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_7[0]));
#line 815 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 1) = ((MR_Box) (check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_1));
#line 815 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 815 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_108_108, 3) = ((MR_Box) (check_hlds__inst_check__BoundInsts_10));
#line 815 "inst_check.m"
              }
#line 6274 "check_hlds.inst_check.c"
              check_hlds__inst_check__TypeCtorInfo_152_152 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0;
#line 815 "inst_check.m"
              {
#line 815 "inst_check.m"
                mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_149_149, check_hlds__inst_check__TypeCtorInfo_152_152, check_hlds__inst_check__V_108_108, check_hlds__inst_check__AllPossibleTypes_21, &check_hlds__inst_check__MismatchesFromPossibleTypes_22);
              }
#line 817 "inst_check.m"
              {
#line 817 "inst_check.m"
                mercury__list__sort_2_p_0(check_hlds__inst_check__TypeCtorInfo_152_152, check_hlds__inst_check__MismatchesFromPossibleTypes_22, &check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23);
              }
#line 819 "inst_check.m"
              {
#line 819 "inst_check.m"
                check_hlds__inst_check__create_mismatch_pieces_2_p_0(check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23, &check_hlds__inst_check__MismatchPieces_24);
              }
#line 822 "inst_check.m"
              {
#line 822 "inst_check.m"
                check_hlds__inst_check__Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__NoMatchPieces_19, check_hlds__inst_check__MismatchPieces_24);
              }
#line 824 "inst_check.m"
              {
#line 824 "inst_check.m"
                check_hlds__inst_check__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 824 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_114_114, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_25));
#line 824 "inst_check.m"
              }
#line 824 "inst_check.m"
              {
#line 824 "inst_check.m"
                check_hlds__inst_check__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_113_113, 0) = ((MR_Box) (check_hlds__inst_check__V_114_114));
#line 824 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "inst_check.m"
              }
#line 824 "inst_check.m"
              {
#line 824 "inst_check.m"
                check_hlds__inst_check__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 824 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_112_112, 0) = ((MR_Box) (check_hlds__inst_check__Context_16));
#line 824 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_112_112, 1) = ((MR_Box) (check_hlds__inst_check__V_113_113));
#line 824 "inst_check.m"
              }
#line 824 "inst_check.m"
              {
#line 824 "inst_check.m"
                check_hlds__inst_check__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_111_111, 0) = ((MR_Box) (check_hlds__inst_check__V_112_112));
#line 824 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "inst_check.m"
              }
#line 823 "inst_check.m"
              {
#line 823 "inst_check.m"
                check_hlds__inst_check__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 823 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 823 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 823 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 2) = ((MR_Box) (check_hlds__inst_check__V_111_111));
#line 823 "inst_check.m"
              }
#line 825 "inst_check.m"
              {
#line 825 "inst_check.m"
                MR_Word base;
#line 825 "inst_check.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "inst_check.m"
                *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = base;
#line 825 "inst_check.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_26));
#line 825 "inst_check.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_43));
#line 825 "inst_check.m"
              }
#line 806 "inst_check.m"
            }
#line 804 "inst_check.m"
          else
#line 827 "inst_check.m"
            {
#line 827 "inst_check.m"
              MR_Word check_hlds__inst_check__InstIsExported_29;

#line 828 "inst_check.m"
              {
#line 828 "inst_check.m"
                check_hlds__inst_check__InstIsExported_29 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(check_hlds__inst_check__InstStatus_14);
              }
#line 835 "inst_check.m"
#line 835 "inst_check.m"
              switch (check_hlds__inst_check__InstIsExported_29) {
#line 835 "inst_check.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 835 "inst_check.m"
                case (MR_Integer) 0:
#line 834 "inst_check.m"
                  (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
#line 835 "inst_check.m"
                  break;
#line 835 "inst_check.m"
                case (MR_Integer) 1:
#line 838 "inst_check.m"
                  {
#line 838 "inst_check.m"
                    {
#line 838 "inst_check.m"
                      check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_5(&check_hlds__inst_check__env);
                    }
#line 838 "inst_check.m"
                  }
#line 835 "inst_check.m"
                  break;
#line 835 "inst_check.m"
              }
#line 832 "inst_check.m"
              if ((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded)
#line 832 "inst_check.m"
                *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_43;
#line 832 "inst_check.m"
              else
#line 853 "inst_check.m"
                {
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_92_92;
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_93_93;
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_94_94;
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_95_95;
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__Context_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__InstName_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 0)));
#line 853 "inst_check.m"
                  MR_Integer check_hlds__inst_check__InstArity_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 1)));
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__Pieces_122;
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__Spec_123;
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11, (MR_Integer) 1)));
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11, (MR_Integer) 0)));
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
#line 853 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));

#line 864 "inst_check.m"
                  if ((check_hlds__inst_check__V_159_159 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 856 "inst_check.m"
                    {
#line 856 "inst_check.m"
                      MR_String check_hlds__inst_check__OnePossibleTypeStr_37;
#line 856 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_72_72;
#line 856 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_73_73;
#line 856 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_74_74;
#line 856 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_75_75;
#line 856 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_78_78;
#line 856 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_81_81;
#line 856 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_82_82;

#line 857 "inst_check.m"
                      {
#line 857 "inst_check.m"
                        check_hlds__inst_check__OnePossibleTypeStr_37 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__V_160_160);
                      }
#line 860 "inst_check.m"
                      {
#line 860 "inst_check.m"
                        check_hlds__inst_check__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 860 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_74_74, 0) = ((MR_Box) (check_hlds__inst_check__InstName_120));
#line 860 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_74_74, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_121));
#line 860 "inst_check.m"
                      }
#line 860 "inst_check.m"
                      {
#line 860 "inst_check.m"
                        check_hlds__inst_check__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 860 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_73_73, 1) = ((MR_Box) (check_hlds__inst_check__V_74_74));
#line 860 "inst_check.m"
                      }
#line 862 "inst_check.m"
                      {
#line 862 "inst_check.m"
                        check_hlds__inst_check__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 862 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_82_82, 1) = ((MR_Box) (check_hlds__inst_check__OnePossibleTypeStr_37));
#line 862 "inst_check.m"
                      }
#line 862 "inst_check.m"
                      {
#line 862 "inst_check.m"
                        check_hlds__inst_check__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_81_81, 0) = ((MR_Box) (check_hlds__inst_check__V_82_82));
#line 862 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[19])));
#line 862 "inst_check.m"
                      }
#line 862 "inst_check.m"
                      {
#line 862 "inst_check.m"
                        check_hlds__inst_check__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[42])));
#line 862 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_78_78, 1) = ((MR_Box) (check_hlds__inst_check__V_81_81));
#line 862 "inst_check.m"
                      }
#line 861 "inst_check.m"
                      {
#line 861 "inst_check.m"
                        check_hlds__inst_check__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[41])));
#line 861 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_75_75, 1) = ((MR_Box) (check_hlds__inst_check__V_78_78));
#line 861 "inst_check.m"
                      }
#line 860 "inst_check.m"
                      {
#line 860 "inst_check.m"
                        check_hlds__inst_check__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_72_72, 0) = ((MR_Box) (check_hlds__inst_check__V_73_73));
#line 860 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_72_72, 1) = ((MR_Box) (check_hlds__inst_check__V_75_75));
#line 860 "inst_check.m"
                      }
#line 859 "inst_check.m"
                      {
#line 859 "inst_check.m"
                        check_hlds__inst_check__Pieces_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[38])));
#line 859 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 1) = ((MR_Box) (check_hlds__inst_check__V_72_72));
#line 859 "inst_check.m"
                      }
#line 856 "inst_check.m"
                    }
#line 864 "inst_check.m"
                  else
#line 865 "inst_check.m"
                    {
#line 865 "inst_check.m"
                      MR_Word check_hlds__inst_check__PossibleTypeStrs_41;
#line 865 "inst_check.m"
                      MR_String check_hlds__inst_check__PossibleTypesStr_42;
#line 865 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_51_51;
#line 865 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_52_52;
#line 865 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_53_53;
#line 865 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_54_54;
#line 865 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_57_57;
#line 865 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_60_60;
#line 865 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_61_61;

#line 866 "inst_check.m"
                      {
#line 866 "inst_check.m"
                        check_hlds__inst_check__PossibleTypeStrs_41 = mercury__list__map_2_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[3], (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11);
                      }
#line 869 "inst_check.m"
                      {
#line 869 "inst_check.m"
                        check_hlds__inst_check__PossibleTypesStr_42 = mercury__string__join_list_2_f_0((MR_String) ", ", check_hlds__inst_check__PossibleTypeStrs_41);
                      }
#line 871 "inst_check.m"
                      {
#line 871 "inst_check.m"
                        check_hlds__inst_check__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 871 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_53_53, 0) = ((MR_Box) (check_hlds__inst_check__InstName_120));
#line 871 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_53_53, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_121));
#line 871 "inst_check.m"
                      }
#line 871 "inst_check.m"
                      {
#line 871 "inst_check.m"
                        check_hlds__inst_check__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 871 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_52_52, 1) = ((MR_Box) (check_hlds__inst_check__V_53_53));
#line 871 "inst_check.m"
                      }
#line 873 "inst_check.m"
                      {
#line 873 "inst_check.m"
                        check_hlds__inst_check__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 873 "inst_check.m"
                        MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_61_61, 1) = ((MR_Box) (check_hlds__inst_check__PossibleTypesStr_42));
#line 873 "inst_check.m"
                      }
#line 873 "inst_check.m"
                      {
#line 873 "inst_check.m"
                        check_hlds__inst_check__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_60_60, 0) = ((MR_Box) (check_hlds__inst_check__V_61_61));
#line 873 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[22])));
#line 873 "inst_check.m"
                      }
#line 873 "inst_check.m"
                      {
#line 873 "inst_check.m"
                        check_hlds__inst_check__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[42])));
#line 873 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_57_57, 1) = ((MR_Box) (check_hlds__inst_check__V_60_60));
#line 873 "inst_check.m"
                      }
#line 872 "inst_check.m"
                      {
#line 872 "inst_check.m"
                        check_hlds__inst_check__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[43])));
#line 872 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_54_54, 1) = ((MR_Box) (check_hlds__inst_check__V_57_57));
#line 872 "inst_check.m"
                      }
#line 871 "inst_check.m"
                      {
#line 871 "inst_check.m"
                        check_hlds__inst_check__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 0) = ((MR_Box) (check_hlds__inst_check__V_52_52));
#line 871 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_51_51, 1) = ((MR_Box) (check_hlds__inst_check__V_54_54));
#line 871 "inst_check.m"
                      }
#line 870 "inst_check.m"
                      {
#line 870 "inst_check.m"
                        check_hlds__inst_check__Pieces_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[38])));
#line 870 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_122, 1) = ((MR_Box) (check_hlds__inst_check__V_51_51));
#line 870 "inst_check.m"
                      }
#line 865 "inst_check.m"
                    }
#line 877 "inst_check.m"
                  {
#line 877 "inst_check.m"
                    check_hlds__inst_check__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 877 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_95_95, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_122));
#line 877 "inst_check.m"
                  }
#line 877 "inst_check.m"
                  {
#line 877 "inst_check.m"
                    check_hlds__inst_check__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 877 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_94_94, 0) = ((MR_Box) (check_hlds__inst_check__V_95_95));
#line 877 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 877 "inst_check.m"
                  }
#line 877 "inst_check.m"
                  {
#line 877 "inst_check.m"
                    check_hlds__inst_check__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 877 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_93_93, 0) = ((MR_Box) (check_hlds__inst_check__Context_119));
#line 877 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_93_93, 1) = ((MR_Box) (check_hlds__inst_check__V_94_94));
#line 877 "inst_check.m"
                  }
#line 877 "inst_check.m"
                  {
#line 877 "inst_check.m"
                    check_hlds__inst_check__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 877 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_92_92, 0) = ((MR_Box) (check_hlds__inst_check__V_93_93));
#line 877 "inst_check.m"
                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 877 "inst_check.m"
                  }
#line 876 "inst_check.m"
                  {
#line 876 "inst_check.m"
                    check_hlds__inst_check__Spec_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 876 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 876 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 876 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_123, 2) = ((MR_Box) (check_hlds__inst_check__V_92_92));
#line 876 "inst_check.m"
                  }
#line 878 "inst_check.m"
                  {
#line 878 "inst_check.m"
                    MR_Word base;
#line 878 "inst_check.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "inst_check.m"
                    *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = base;
#line 878 "inst_check.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_123));
#line 878 "inst_check.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_43));
#line 878 "inst_check.m"
                  }
#line 853 "inst_check.m"
                }
#line 827 "inst_check.m"
            }
#line 803 "inst_check.m"
          break;
#line 803 "inst_check.m"
      }
#line 798 "inst_check.m"
    }
#line 792 "inst_check.m"
  }
#line 792 "inst_check.m"
}

#line 707 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(
#line 707 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_7,
#line 707 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_8,
#line 707 "inst_check.m"
  MR_Word check_hlds__inst_check__ForTypeKind_9,
#line 707 "inst_check.m"
  MR_Word check_hlds__inst_check__MismatchConsIdStrs_10,
#line 707 "inst_check.m"
  MR_Word * check_hlds__inst_check__IFTC_11,
#line 707 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_35)
#line 707 "inst_check.m"
{
#line 712 "inst_check.m"
  {
#line 712 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 712 "inst_check.m"
    MR_Word check_hlds__inst_check__InstSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_7, (MR_Integer) 0)));
#line 712 "inst_check.m"
    MR_Integer check_hlds__inst_check__InstArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_7, (MR_Integer) 1)));
#line 712 "inst_check.m"
    MR_Word check_hlds__inst_check__ShortInstSymName_15;
#line 712 "inst_check.m"
    MR_Word check_hlds__inst_check__Context_16;
#line 712 "inst_check.m"
    MR_Word check_hlds__inst_check__InstStatus_17;
#line 712 "inst_check.m"
    MR_Word check_hlds__inst_check__InstDefinedInThisModule_18;
#line 712 "inst_check.m"
    MR_Word check_hlds__inst_check__ForTypeCtor_19;
#line 712 "inst_check.m"
    MR_Word check_hlds__inst_check__TypeCtorName_20;
#line 712 "inst_check.m"
    MR_Integer check_hlds__inst_check__TypeCtorArity_21;
#line 712 "inst_check.m"
    MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 712 "inst_check.m"
    MR_String check_hlds__inst_check__V_37_37;
#line 712 "inst_check.m"
    MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_67_67;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_112_112;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_113_113;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_114_114;
#line 716 "inst_check.m"
    MR_Word check_hlds__inst_check__V_115_115;

#line 715 "inst_check.m"
    {
#line 715 "inst_check.m"
      check_hlds__inst_check__V_37_37 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__InstSymName_13);
    }
#line 715 "inst_check.m"
    {
#line 715 "inst_check.m"
      check_hlds__inst_check__ShortInstSymName_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 715 "inst_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__ShortInstSymName_15, 0) = ((MR_Box) (check_hlds__inst_check__V_37_37));
#line 715 "inst_check.m"
    }
#line 716 "inst_check.m"
    check_hlds__inst_check__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 0)));
#line 716 "inst_check.m"
    check_hlds__inst_check__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 1)));
#line 716 "inst_check.m"
    check_hlds__inst_check__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 2)));
#line 716 "inst_check.m"
    check_hlds__inst_check__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 3)));
#line 716 "inst_check.m"
    check_hlds__inst_check__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 4)));
#line 716 "inst_check.m"
    check_hlds__inst_check__InstStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 5)));
#line 718 "inst_check.m"
    {
#line 718 "inst_check.m"
      check_hlds__inst_check__InstDefinedInThisModule_18 = hlds__status__inst_status_defined_in_this_module_1_f_0(check_hlds__inst_check__InstStatus_17);
    }
#line 734 "inst_check.m"
#line 734 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__ForTypeKind_9)) {
#line 734 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 734 "inst_check.m"
      case (MR_Integer) 0:
#line 734 "inst_check.m"
#line 734 "inst_check.m"
        switch (MR_unmkbody(check_hlds__inst_check__ForTypeKind_9)) {
#line 734 "inst_check.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 734 "inst_check.m"
          case (MR_Integer) 0:
#line 732 "inst_check.m"
            {
#line 722 "inst_check.m"
              {
#line 722 "inst_check.m"
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__int_type_ctor_0_f_0();
              }
#line 733 "inst_check.m"
              check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
#line 733 "inst_check.m"
              check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
#line 732 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
#line 732 "inst_check.m"
            }
#line 734 "inst_check.m"
            break;
#line 734 "inst_check.m"
          case (MR_Integer) 1:
#line 732 "inst_check.m"
            {
#line 725 "inst_check.m"
              {
#line 725 "inst_check.m"
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
              }
#line 733 "inst_check.m"
              check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
#line 733 "inst_check.m"
              check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
#line 732 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
#line 732 "inst_check.m"
            }
#line 734 "inst_check.m"
            break;
#line 734 "inst_check.m"
          case (MR_Integer) 2:
#line 732 "inst_check.m"
            {
#line 728 "inst_check.m"
              {
#line 728 "inst_check.m"
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__char_type_ctor_0_f_0();
              }
#line 733 "inst_check.m"
              check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
#line 733 "inst_check.m"
              check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
#line 732 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
#line 732 "inst_check.m"
            }
#line 734 "inst_check.m"
            break;
#line 734 "inst_check.m"
          case (MR_Integer) 3:
#line 732 "inst_check.m"
            {
#line 731 "inst_check.m"
              {
#line 731 "inst_check.m"
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__string_type_ctor_0_f_0();
              }
#line 733 "inst_check.m"
              check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
#line 733 "inst_check.m"
              check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
#line 732 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
#line 732 "inst_check.m"
            }
#line 734 "inst_check.m"
            break;
#line 734 "inst_check.m"
        }
#line 734 "inst_check.m"
        break;
#line 734 "inst_check.m"
      case (MR_Integer) 1:
#line 735 "inst_check.m"
        {
#line 735 "inst_check.m"
          MR_Word check_hlds__inst_check__ForTypeDefn_22;
#line 735 "inst_check.m"
          MR_Word check_hlds__inst_check__InstIsExported_23;
#line 741 "inst_check.m"
          MR_Word check_hlds__inst_check__V_38_38;

#line 735 "inst_check.m"
          check_hlds__inst_check__ForTypeCtor_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeKind_9, (MR_Integer) 0)));
#line 735 "inst_check.m"
          check_hlds__inst_check__ForTypeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeKind_9, (MR_Integer) 1)));
#line 736 "inst_check.m"
          check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
#line 736 "inst_check.m"
          check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
#line 737 "inst_check.m"
          {
#line 737 "inst_check.m"
            check_hlds__inst_check__InstIsExported_23 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(check_hlds__inst_check__InstStatus_17);
          }
#line 740 "inst_check.m"
          check_hlds__inst_check__succeeded = (check_hlds__inst_check__InstIsExported_23 == (MR_Integer) 1);
#line 740 "inst_check.m"
          if (check_hlds__inst_check__succeeded)
#line 740 "inst_check.m"
            {
#line 741 "inst_check.m"
              check_hlds__inst_check__V_38_38 = (MR_Integer) 0;
#line 741 "inst_check.m"
              {
#line 741 "inst_check.m"
                check_hlds__inst_check__succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0(check_hlds__inst_check__V_38_38, check_hlds__inst_check__ForTypeDefn_22);
              }
#line 741 "inst_check.m"
              check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
#line 740 "inst_check.m"
            }
#line 739 "inst_check.m"
          if (check_hlds__inst_check__succeeded)
#line 747 "inst_check.m"
            {
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__VisPieces_24;
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__VisSpec_25;
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__V_41_41;
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__V_42_42;
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__V_43_43;
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__V_44_44;
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__V_47_47;
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__V_48_48;
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__V_49_49;
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__V_61_61;
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__V_62_62;
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__V_63_63;
#line 747 "inst_check.m"
              MR_Word check_hlds__inst_check__V_64_64;

#line 744 "inst_check.m"
              {
#line 744 "inst_check.m"
                check_hlds__inst_check__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 744 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_43_43, 0) = ((MR_Box) (check_hlds__inst_check__ShortInstSymName_15));
#line 744 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_43_43, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_14));
#line 744 "inst_check.m"
              }
#line 744 "inst_check.m"
              {
#line 744 "inst_check.m"
                check_hlds__inst_check__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 744 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_42_42, 1) = ((MR_Box) (check_hlds__inst_check__V_43_43));
#line 744 "inst_check.m"
              }
#line 746 "inst_check.m"
              {
#line 746 "inst_check.m"
                check_hlds__inst_check__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 746 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_49_49, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtorName_20));
#line 746 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_49_49, 1) = ((MR_Box) (check_hlds__inst_check__TypeCtorArity_21));
#line 746 "inst_check.m"
              }
#line 746 "inst_check.m"
              {
#line 746 "inst_check.m"
                check_hlds__inst_check__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 746 "inst_check.m"
                MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_48_48, 1) = ((MR_Box) (check_hlds__inst_check__V_49_49));
#line 746 "inst_check.m"
              }
#line 746 "inst_check.m"
              {
#line 746 "inst_check.m"
                check_hlds__inst_check__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_47_47, 0) = ((MR_Box) (check_hlds__inst_check__V_48_48));
#line 746 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[13])));
#line 746 "inst_check.m"
              }
#line 745 "inst_check.m"
              {
#line 745 "inst_check.m"
                check_hlds__inst_check__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_44_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[34])));
#line 745 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_44_44, 1) = ((MR_Box) (check_hlds__inst_check__V_47_47));
#line 745 "inst_check.m"
              }
#line 744 "inst_check.m"
              {
#line 744 "inst_check.m"
                check_hlds__inst_check__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_41_41, 0) = ((MR_Box) (check_hlds__inst_check__V_42_42));
#line 744 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_41_41, 1) = ((MR_Box) (check_hlds__inst_check__V_44_44));
#line 744 "inst_check.m"
              }
#line 743 "inst_check.m"
              {
#line 743 "inst_check.m"
                check_hlds__inst_check__VisPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__VisPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[32])));
#line 743 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__VisPieces_24, 1) = ((MR_Box) (check_hlds__inst_check__V_41_41));
#line 743 "inst_check.m"
              }
#line 749 "inst_check.m"
              {
#line 749 "inst_check.m"
                check_hlds__inst_check__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 749 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_64_64, 0) = ((MR_Box) (check_hlds__inst_check__VisPieces_24));
#line 749 "inst_check.m"
              }
#line 749 "inst_check.m"
              {
#line 749 "inst_check.m"
                check_hlds__inst_check__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_63_63, 0) = ((MR_Box) (check_hlds__inst_check__V_64_64));
#line 749 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "inst_check.m"
              }
#line 749 "inst_check.m"
              {
#line 749 "inst_check.m"
                check_hlds__inst_check__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 749 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_62_62, 0) = ((MR_Box) (check_hlds__inst_check__Context_16));
#line 749 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_62_62, 1) = ((MR_Box) (check_hlds__inst_check__V_63_63));
#line 749 "inst_check.m"
              }
#line 749 "inst_check.m"
              {
#line 749 "inst_check.m"
                check_hlds__inst_check__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_61_61, 0) = ((MR_Box) (check_hlds__inst_check__V_62_62));
#line 749 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "inst_check.m"
              }
#line 748 "inst_check.m"
              {
#line 748 "inst_check.m"
                check_hlds__inst_check__VisSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 748 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__VisSpec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__VisSpec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 748 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__VisSpec_25, 2) = ((MR_Box) (check_hlds__inst_check__V_61_61));
#line 748 "inst_check.m"
              }
#line 750 "inst_check.m"
              {
#line 750 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_Specs_67_67, 0) = ((MR_Box) (check_hlds__inst_check__VisSpec_25));
#line 750 "inst_check.m"
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_Specs_67_67, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_36_36));
#line 750 "inst_check.m"
              }
#line 747 "inst_check.m"
            }
#line 739 "inst_check.m"
          else
#line 739 "inst_check.m"
            check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
#line 735 "inst_check.m"
        }
#line 734 "inst_check.m"
        break;
#line 734 "inst_check.m"
    }
#line 7143 "check_hlds.inst_check.c"
    if ((check_hlds__inst_check__MismatchConsIdStrs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 779 "inst_check.m"
      if ((check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "inst_check.m"
        {
#line 778 "inst_check.m"
          {
#line 778 "inst_check.m"
            MR_Word base;
#line 778 "inst_check.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 778 "inst_check.m"
            *check_hlds__inst_check__IFTC_11 = base;
#line 778 "inst_check.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__ForTypeCtor_19));
#line 778 "inst_check.m"
          }
#line 777 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = check_hlds__inst_check__STATE_VARIABLE_Specs_67_67;
#line 777 "inst_check.m"
        }
#line 779 "inst_check.m"
      else
#line 780 "inst_check.m"
        {
#line 781 "inst_check.m"
          *check_hlds__inst_check__IFTC_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 785 "inst_check.m"
#line 785 "inst_check.m"
          switch (check_hlds__inst_check__InstDefinedInThisModule_18) {
#line 785 "inst_check.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 785 "inst_check.m"
            case (MR_Integer) 0:
#line 784 "inst_check.m"
              *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 785 "inst_check.m"
              break;
#line 785 "inst_check.m"
            case (MR_Integer) 1:
#line 786 "inst_check.m"
              *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = check_hlds__inst_check__STATE_VARIABLE_Specs_67_67;
#line 785 "inst_check.m"
              break;
#line 785 "inst_check.m"
          }
#line 780 "inst_check.m"
        }
#line 7192 "check_hlds.inst_check.c"
    else
#line 7194 "check_hlds.inst_check.c"
      {
#line 7196 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__TypeCtorInfo_122_122 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 7198 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__TypeCtorInfo_123_123;
#line 7200 "check_hlds.inst_check.c"
        MR_String check_hlds__inst_check__FuncSymbolPhrase_28;
#line 7202 "check_hlds.inst_check.c"
        MR_String check_hlds__inst_check__IsAreNotPhrase_29;
#line 7204 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__MismatchConsIdPieces_30;
#line 7206 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__MismatchPieces_31;
#line 7208 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__MismatchSpec_32;
#line 7210 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_72_72;
#line 7212 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_75_75;
#line 7214 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_76_76;
#line 7216 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_77_77;
#line 7218 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_78_78;
#line 7220 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_81_81;
#line 7222 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_82_82;
#line 7224 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_83_83;
#line 7226 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_84_84;
#line 7228 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_87_87;
#line 7230 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_90_90;
#line 7232 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_91_91;
#line 7234 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_93_93;
#line 7236 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_94_94;
#line 7238 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_95_95;
#line 7240 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_104_104;
#line 7242 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_105_105;
#line 7244 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_106_106;
#line 7246 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__V_107_107;
#line 7248 "check_hlds.inst_check.c"
        MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_110_124;
#line 760 "inst_check.m"
        MR_Box check_hlds__inst_check__conv0_FuncSymbolPhrase_28;
#line 762 "inst_check.m"
        MR_Box check_hlds__inst_check__conv1_IsAreNotPhrase_29;

#line 760 "inst_check.m"
        {
#line 760 "inst_check.m"
          check_hlds__inst_check__conv0_FuncSymbolPhrase_28 = parse_tree__error_util__choose_number_3_f_0(check_hlds__inst_check__TypeCtorInfo_122_122, check_hlds__inst_check__TypeCtorInfo_122_122, check_hlds__inst_check__MismatchConsIdStrs_10, ((MR_Box) ((MR_String) "function symbol")), ((MR_Box) ((MR_String) "function symbols")));
        }
#line 760 "inst_check.m"
        check_hlds__inst_check__FuncSymbolPhrase_28 = ((MR_String) check_hlds__inst_check__conv0_FuncSymbolPhrase_28);
#line 762 "inst_check.m"
        {
#line 762 "inst_check.m"
          check_hlds__inst_check__conv1_IsAreNotPhrase_29 = parse_tree__error_util__choose_number_3_f_0(check_hlds__inst_check__TypeCtorInfo_122_122, check_hlds__inst_check__TypeCtorInfo_122_122, check_hlds__inst_check__MismatchConsIdStrs_10, ((MR_Box) ((MR_String) "is not a function symbol")), ((MR_Box) ((MR_String) "are not function symbols")));
        }
#line 762 "inst_check.m"
        check_hlds__inst_check__IsAreNotPhrase_29 = ((MR_String) check_hlds__inst_check__conv1_IsAreNotPhrase_29);
#line 764 "inst_check.m"
        {
#line 764 "inst_check.m"
          check_hlds__inst_check__MismatchConsIdPieces_30 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(check_hlds__inst_check__MismatchConsIdStrs_10);
        }
#line 7274 "check_hlds.inst_check.c"
        check_hlds__inst_check__TypeCtorInfo_123_123 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 766 "inst_check.m"
        {
#line 766 "inst_check.m"
          check_hlds__inst_check__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 766 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_77_77, 0) = ((MR_Box) (check_hlds__inst_check__ShortInstSymName_15));
#line 766 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_77_77, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_14));
#line 766 "inst_check.m"
        }
#line 766 "inst_check.m"
        {
#line 766 "inst_check.m"
          check_hlds__inst_check__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 766 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_76_76, 1) = ((MR_Box) (check_hlds__inst_check__V_77_77));
#line 766 "inst_check.m"
        }
#line 768 "inst_check.m"
        {
#line 768 "inst_check.m"
          check_hlds__inst_check__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_83_83, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtorName_20));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_83_83, 1) = ((MR_Box) (check_hlds__inst_check__TypeCtorArity_21));
#line 768 "inst_check.m"
        }
#line 768 "inst_check.m"
        {
#line 768 "inst_check.m"
          check_hlds__inst_check__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_82_82, 1) = ((MR_Box) (check_hlds__inst_check__V_83_83));
#line 768 "inst_check.m"
        }
#line 769 "inst_check.m"
        {
#line 769 "inst_check.m"
          check_hlds__inst_check__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 769 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_91_91, 1) = ((MR_Box) (check_hlds__inst_check__FuncSymbolPhrase_28));
#line 769 "inst_check.m"
        }
#line 769 "inst_check.m"
        {
#line 769 "inst_check.m"
          check_hlds__inst_check__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_90_90, 0) = ((MR_Box) (check_hlds__inst_check__V_91_91));
#line 769 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "inst_check.m"
        }
#line 769 "inst_check.m"
        {
#line 769 "inst_check.m"
          check_hlds__inst_check__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_87_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[37])));
#line 769 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_87_87, 1) = ((MR_Box) (check_hlds__inst_check__V_90_90));
#line 769 "inst_check.m"
        }
#line 768 "inst_check.m"
        {
#line 768 "inst_check.m"
          check_hlds__inst_check__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_84_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[36])));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_84_84, 1) = ((MR_Box) (check_hlds__inst_check__V_87_87));
#line 768 "inst_check.m"
        }
#line 768 "inst_check.m"
        {
#line 768 "inst_check.m"
          check_hlds__inst_check__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_81_81, 0) = ((MR_Box) (check_hlds__inst_check__V_82_82));
#line 768 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_81_81, 1) = ((MR_Box) (check_hlds__inst_check__V_84_84));
#line 768 "inst_check.m"
        }
#line 767 "inst_check.m"
        {
#line 767 "inst_check.m"
          check_hlds__inst_check__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[35])));
#line 767 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_78_78, 1) = ((MR_Box) (check_hlds__inst_check__V_81_81));
#line 767 "inst_check.m"
        }
#line 766 "inst_check.m"
        {
#line 766 "inst_check.m"
          check_hlds__inst_check__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_75_75, 0) = ((MR_Box) (check_hlds__inst_check__V_76_76));
#line 766 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_75_75, 1) = ((MR_Box) (check_hlds__inst_check__V_78_78));
#line 766 "inst_check.m"
        }
#line 765 "inst_check.m"
        {
#line 765 "inst_check.m"
          check_hlds__inst_check__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_72_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[32])));
#line 765 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_72_72, 1) = ((MR_Box) (check_hlds__inst_check__V_75_75));
#line 765 "inst_check.m"
        }
#line 771 "inst_check.m"
        {
#line 771 "inst_check.m"
          check_hlds__inst_check__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 771 "inst_check.m"
          MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_95_95, 1) = ((MR_Box) (check_hlds__inst_check__IsAreNotPhrase_29));
#line 771 "inst_check.m"
        }
#line 771 "inst_check.m"
        {
#line 771 "inst_check.m"
          check_hlds__inst_check__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_94_94, 0) = ((MR_Box) (check_hlds__inst_check__V_95_95));
#line 771 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[15])));
#line 771 "inst_check.m"
        }
#line 770 "inst_check.m"
        {
#line 770 "inst_check.m"
          check_hlds__inst_check__V_93_93 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_123_123, check_hlds__inst_check__MismatchConsIdPieces_30, check_hlds__inst_check__V_94_94);
        }
#line 769 "inst_check.m"
        {
#line 769 "inst_check.m"
          check_hlds__inst_check__MismatchPieces_31 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_123_123, check_hlds__inst_check__V_72_72, check_hlds__inst_check__V_93_93);
        }
#line 773 "inst_check.m"
        {
#line 773 "inst_check.m"
          check_hlds__inst_check__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 773 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_107_107, 0) = ((MR_Box) (check_hlds__inst_check__MismatchPieces_31));
#line 773 "inst_check.m"
        }
#line 773 "inst_check.m"
        {
#line 773 "inst_check.m"
          check_hlds__inst_check__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_106_106, 0) = ((MR_Box) (check_hlds__inst_check__V_107_107));
#line 773 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "inst_check.m"
        }
#line 773 "inst_check.m"
        {
#line 773 "inst_check.m"
          check_hlds__inst_check__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 773 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_105_105, 0) = ((MR_Box) (check_hlds__inst_check__Context_16));
#line 773 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_105_105, 1) = ((MR_Box) (check_hlds__inst_check__V_106_106));
#line 773 "inst_check.m"
        }
#line 773 "inst_check.m"
        {
#line 773 "inst_check.m"
          check_hlds__inst_check__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_104_104, 0) = ((MR_Box) (check_hlds__inst_check__V_105_105));
#line 773 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "inst_check.m"
        }
#line 772 "inst_check.m"
        {
#line 772 "inst_check.m"
          check_hlds__inst_check__MismatchSpec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 772 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__MismatchSpec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__MismatchSpec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 772 "inst_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_check__MismatchSpec_32, 2) = ((MR_Box) (check_hlds__inst_check__V_104_104));
#line 772 "inst_check.m"
        }
#line 774 "inst_check.m"
        {
#line 774 "inst_check.m"
          check_hlds__inst_check__STATE_VARIABLE_Specs_110_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_Specs_110_124, 0) = ((MR_Box) (check_hlds__inst_check__MismatchSpec_32));
#line 774 "inst_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_Specs_110_124, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_67_67));
#line 774 "inst_check.m"
        }
#line 781 "inst_check.m"
        *check_hlds__inst_check__IFTC_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 785 "inst_check.m"
#line 785 "inst_check.m"
        switch (check_hlds__inst_check__InstDefinedInThisModule_18) {
#line 785 "inst_check.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 785 "inst_check.m"
          case (MR_Integer) 0:
#line 784 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 785 "inst_check.m"
            break;
#line 785 "inst_check.m"
          case (MR_Integer) 1:
#line 786 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = check_hlds__inst_check__STATE_VARIABLE_Specs_110_124;
#line 785 "inst_check.m"
            break;
#line 785 "inst_check.m"
        }
#line 7507 "check_hlds.inst_check.c"
      }
#line 712 "inst_check.m"
  }
#line 707 "inst_check.m"
}

#line 684 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(
#line 684 "inst_check.m"
  MR_Word check_hlds__inst_check__InstId_6,
#line 684 "inst_check.m"
  MR_Word check_hlds__inst_check__InstDefn_7,
#line 684 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeCtor_8,
#line 684 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_19,
#line 684 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_20)
#line 684 "inst_check.m"
{
#line 687 "inst_check.m"
  {
#line 687 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 687 "inst_check.m"
    MR_Word check_hlds__inst_check__InstStatus_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 5)));
#line 687 "inst_check.m"
    MR_Word check_hlds__inst_check__InstDefinedInThisModule_11;
#line 688 "inst_check.m"
    MR_Word check_hlds__inst_check__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 0)));
#line 688 "inst_check.m"
    MR_Word check_hlds__inst_check__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 1)));
#line 688 "inst_check.m"
    MR_Word check_hlds__inst_check__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 2)));
#line 688 "inst_check.m"
    MR_Word check_hlds__inst_check__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 3)));
#line 688 "inst_check.m"
    MR_Word check_hlds__inst_check__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 4)));

#line 689 "inst_check.m"
    {
#line 689 "inst_check.m"
      check_hlds__inst_check__InstDefinedInThisModule_11 = hlds__status__inst_status_defined_in_this_module_1_f_0(check_hlds__inst_check__InstStatus_10);
    }
#line 692 "inst_check.m"
#line 692 "inst_check.m"
    switch (check_hlds__inst_check__InstDefinedInThisModule_11) {
#line 692 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 692 "inst_check.m"
      case (MR_Integer) 0:
#line 691 "inst_check.m"
        *check_hlds__inst_check__STATE_VARIABLE_Specs_20 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_19;
#line 692 "inst_check.m"
        break;
#line 692 "inst_check.m"
      case (MR_Integer) 1:
#line 693 "inst_check.m"
        {
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 4)));
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__InstName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_6, (MR_Integer) 0)));
#line 693 "inst_check.m"
          MR_Integer check_hlds__inst_check__InstArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_6, (MR_Integer) 1)));
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__TypeCtorName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_8, (MR_Integer) 0)));
#line 693 "inst_check.m"
          MR_Integer check_hlds__inst_check__TypeCtorArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_8, (MR_Integer) 1)));
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__Pieces_17;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__Spec_18;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_23_23;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_24_24;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_25_25;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_26_26;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_29_29;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_30_30;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_31_31;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_43_43;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_44_44;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_45_45;
#line 693 "inst_check.m"
          MR_Word check_hlds__inst_check__V_46_46;
#line 694 "inst_check.m"
          MR_Word check_hlds__inst_check__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 0)));
#line 694 "inst_check.m"
          MR_Word check_hlds__inst_check__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 1)));
#line 694 "inst_check.m"
          MR_Word check_hlds__inst_check__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 2)));
#line 694 "inst_check.m"
          MR_Word check_hlds__inst_check__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 3)));
#line 694 "inst_check.m"
          MR_Word check_hlds__inst_check__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 5)));

#line 698 "inst_check.m"
          {
#line 698 "inst_check.m"
            check_hlds__inst_check__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 698 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_25_25, 0) = ((MR_Box) (check_hlds__inst_check__InstName_13));
#line 698 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_25_25, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_14));
#line 698 "inst_check.m"
          }
#line 698 "inst_check.m"
          {
#line 698 "inst_check.m"
            check_hlds__inst_check__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "inst_check.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 698 "inst_check.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_24_24, 1) = ((MR_Box) (check_hlds__inst_check__V_25_25));
#line 698 "inst_check.m"
          }
#line 700 "inst_check.m"
          {
#line 700 "inst_check.m"
            check_hlds__inst_check__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 700 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_31_31, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtorName_15));
#line 700 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_31_31, 1) = ((MR_Box) (check_hlds__inst_check__TypeCtorArity_16));
#line 700 "inst_check.m"
          }
#line 700 "inst_check.m"
          {
#line 700 "inst_check.m"
            check_hlds__inst_check__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "inst_check.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 700 "inst_check.m"
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__V_30_30, 1) = ((MR_Box) (check_hlds__inst_check__V_31_31));
#line 700 "inst_check.m"
          }
#line 700 "inst_check.m"
          {
#line 700 "inst_check.m"
            check_hlds__inst_check__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_29_29, 0) = ((MR_Box) (check_hlds__inst_check__V_30_30));
#line 700 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[10])));
#line 700 "inst_check.m"
          }
#line 699 "inst_check.m"
          {
#line 699 "inst_check.m"
            check_hlds__inst_check__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[33])));
#line 699 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_26_26, 1) = ((MR_Box) (check_hlds__inst_check__V_29_29));
#line 699 "inst_check.m"
          }
#line 698 "inst_check.m"
          {
#line 698 "inst_check.m"
            check_hlds__inst_check__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_23_23, 0) = ((MR_Box) (check_hlds__inst_check__V_24_24));
#line 698 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_23_23, 1) = ((MR_Box) (check_hlds__inst_check__V_26_26));
#line 698 "inst_check.m"
          }
#line 697 "inst_check.m"
          {
#line 697 "inst_check.m"
            check_hlds__inst_check__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[32])));
#line 697 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_17, 1) = ((MR_Box) (check_hlds__inst_check__V_23_23));
#line 697 "inst_check.m"
          }
#line 703 "inst_check.m"
          {
#line 703 "inst_check.m"
            check_hlds__inst_check__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 703 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_46_46, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_17));
#line 703 "inst_check.m"
          }
#line 703 "inst_check.m"
          {
#line 703 "inst_check.m"
            check_hlds__inst_check__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_45_45, 0) = ((MR_Box) (check_hlds__inst_check__V_46_46));
#line 703 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "inst_check.m"
          }
#line 703 "inst_check.m"
          {
#line 703 "inst_check.m"
            check_hlds__inst_check__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 703 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_44_44, 0) = ((MR_Box) (check_hlds__inst_check__Context_12));
#line 703 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_44_44, 1) = ((MR_Box) (check_hlds__inst_check__V_45_45));
#line 703 "inst_check.m"
          }
#line 703 "inst_check.m"
          {
#line 703 "inst_check.m"
            check_hlds__inst_check__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_43_43, 0) = ((MR_Box) (check_hlds__inst_check__V_44_44));
#line 703 "inst_check.m"
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "inst_check.m"
          }
#line 702 "inst_check.m"
          {
#line 702 "inst_check.m"
            check_hlds__inst_check__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 702 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 702 "inst_check.m"
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_18, 2) = ((MR_Box) (check_hlds__inst_check__V_43_43));
#line 702 "inst_check.m"
          }
#line 704 "inst_check.m"
          {
#line 704 "inst_check.m"
            MR_Word base;
#line 704 "inst_check.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_Specs_20 = base;
#line 704 "inst_check.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_18));
#line 704 "inst_check.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_19));
#line 704 "inst_check.m"
          }
#line 693 "inst_check.m"
        }
#line 692 "inst_check.m"
        break;
#line 692 "inst_check.m"
    }
#line 687 "inst_check.m"
  }
#line 684 "inst_check.m"
}

#line 650 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
#line 650 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 650 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 650 "inst_check.m"
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
#line 650 "inst_check.m"
{
#line 653 "inst_check.m"
  {
#line 653 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 653 "inst_check.m"
    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "inst_check.m"
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 653 "inst_check.m"
    else
#line 655 "inst_check.m"
      {
#line 655 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorAndDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 655 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorAndDefns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 655 "inst_check.m"
        MR_Word check_hlds__inst_check__MatchingUserTypes0_9;
#line 655 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtor_10;
#line 655 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorSymName_12;
#line 655 "inst_check.m"
        MR_Word check_hlds__inst_check__TypeCtorModuleName_15;
#line 658 "inst_check.m"
        MR_Word check_hlds__inst_check___TypeDefn_11;
#line 659 "inst_check.m"
        MR_Integer check_hlds__inst_check___TypeCtorArity_13;

#line 656 "inst_check.m"
        {
#line 656 "inst_check.m"
          check_hlds__inst_check__find_matching_user_types_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__TypeCtorAndDefns_7, &check_hlds__inst_check__MatchingUserTypes0_9);
        }
#line 658 "inst_check.m"
        check_hlds__inst_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_6, (MR_Integer) 0)));
#line 658 "inst_check.m"
        check_hlds__inst_check___TypeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_6, (MR_Integer) 1)));
#line 659 "inst_check.m"
        check_hlds__inst_check__TypeCtorSymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_10, (MR_Integer) 0)));
#line 659 "inst_check.m"
        check_hlds__inst_check___TypeCtorArity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_10, (MR_Integer) 1)));
#line 663 "inst_check.m"
        if (((MR_tag((MR_Word) check_hlds__inst_check__TypeCtorSymName_12)) == (MR_mktag((MR_Integer) 1))))
#line 664 "inst_check.m"
          {
#line 664 "inst_check.m"
            MR_String check_hlds__inst_check__V_16_16;

#line 664 "inst_check.m"
            check_hlds__inst_check__TypeCtorModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_12, (MR_Integer) 0)));
#line 664 "inst_check.m"
            check_hlds__inst_check__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_12, (MR_Integer) 1)));
#line 664 "inst_check.m"
          }
#line 663 "inst_check.m"
        else
#line 661 "inst_check.m"
          {
#line 662 "inst_check.m"
            {
#line 662 "inst_check.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.find_matching_user_types\'/3", (MR_String) "TypeCtorSymName is unqualified");
#line 662 "inst_check.m"
              return;
            }
#line 661 "inst_check.m"
          }
#line 669 "inst_check.m"
        if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 670 "inst_check.m"
          {
#line 670 "inst_check.m"
            MR_Word check_hlds__inst_check__FunctorModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 670 "inst_check.m"
            MR_String check_hlds__inst_check__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));

#line 672 "inst_check.m"
            {
#line 672 "inst_check.m"
              check_hlds__inst_check__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(check_hlds__inst_check__FunctorModuleName_18, check_hlds__inst_check__TypeCtorModuleName_15);
            }
#line 671 "inst_check.m"
            if (check_hlds__inst_check__succeeded)
#line 675 "inst_check.m"
              {
#line 675 "inst_check.m"
                MR_Word check_hlds__inst_check__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__inst_check__TypeCtorAndDefn_6);

#line 675 "inst_check.m"
                {
#line 675 "inst_check.m"
                  MR_Word base;
#line 675 "inst_check.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "inst_check.m"
                  *check_hlds__inst_check__HeadVar__3_3 = base;
#line 675 "inst_check.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__V_23_23));
#line 675 "inst_check.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__MatchingUserTypes0_9));
#line 675 "inst_check.m"
                }
#line 675 "inst_check.m"
              }
#line 671 "inst_check.m"
            else
#line 678 "inst_check.m"
              *check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__MatchingUserTypes0_9;
#line 670 "inst_check.m"
          }
#line 669 "inst_check.m"
        else
#line 667 "inst_check.m"
          {
#line 667 "inst_check.m"
            MR_Word check_hlds__inst_check__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__inst_check__TypeCtorAndDefn_6);

#line 668 "inst_check.m"
            {
#line 668 "inst_check.m"
              MR_Word base;
#line 668 "inst_check.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "inst_check.m"
              *check_hlds__inst_check__HeadVar__3_3 = base;
#line 668 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__V_24_24));
#line 668 "inst_check.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__MatchingUserTypes0_9));
#line 668 "inst_check.m"
            }
#line 667 "inst_check.m"
          }
#line 655 "inst_check.m"
      }
#line 653 "inst_check.m"
  }
#line 650 "inst_check.m"
}

#line 560 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(
#line 560 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 560 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 560 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3,
#line 560 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4,
#line 560 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5,
#line 560 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6)
#line 560 "inst_check.m"
{
#line 565 "inst_check.m"
  while (MR_TRUE)
#line 565 "inst_check.m"
    {
#line 565 "inst_check.m"
      /* tailcall optimized into a loop */
#line 565 "inst_check.m"
      {
#line 565 "inst_check.m"
        MR_bool check_hlds__inst_check__succeeded;

#line 565 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "inst_check.m"
          {
#line 566 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5;
#line 566 "inst_check.m"
            *check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3;
#line 565 "inst_check.m"
          }
#line 565 "inst_check.m"
        else
#line 568 "inst_check.m"
          {
#line 568 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 568 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 568 "inst_check.m"
            MR_Word check_hlds__inst_check__MaybePossibleTypes_19;
#line 568 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26;
#line 568 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27;
#line 568 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_15, (MR_Integer) 0)));
#line 590 "inst_check.m"
            MR_Word check_hlds__inst_check__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_15, (MR_Integer) 1)));

#line 618 "inst_check.m"
#line 618 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__ConsId_34)) {
#line 618 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 618 "inst_check.m"
              case (MR_Integer) 0:
#line 647 "inst_check.m"
                check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "inst_check.m"
                break;
#line 618 "inst_check.m"
              case (MR_Integer) 1:
#line 647 "inst_check.m"
                check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "inst_check.m"
                break;
#line 618 "inst_check.m"
              case (MR_Integer) 2:
#line 647 "inst_check.m"
                check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "inst_check.m"
                break;
#line 618 "inst_check.m"
              case (MR_Integer) 3:
#line 618 "inst_check.m"
#line 618 "inst_check.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 0)))) {
#line 618 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 618 "inst_check.m"
                  case (MR_Integer) 0:
#line 618 "inst_check.m"
                  case (MR_Integer) 1:
#line 618 "inst_check.m"
                  case (MR_Integer) 4:
#line 618 "inst_check.m"
                  case (MR_Integer) 9:
#line 618 "inst_check.m"
                  case (MR_Integer) 10:
#line 618 "inst_check.m"
                  case (MR_Integer) 11:
#line 618 "inst_check.m"
                  case (MR_Integer) 12:
#line 618 "inst_check.m"
                  case (MR_Integer) 13:
#line 618 "inst_check.m"
                  case (MR_Integer) 14:
#line 647 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "inst_check.m"
                    break;
#line 618 "inst_check.m"
                  case (MR_Integer) 2:
#line 592 "inst_check.m"
                    {
#line 592 "inst_check.m"
                      MR_Word check_hlds__inst_check__SymName_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 1)));
#line 592 "inst_check.m"
                      MR_Integer check_hlds__inst_check__Arity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 2)));
#line 592 "inst_check.m"
                      MR_String check_hlds__inst_check__Name_39;
#line 592 "inst_check.m"
                      MR_Word check_hlds__inst_check__FunctorNameAndArity_40;
#line 592 "inst_check.m"
                      MR_Word check_hlds__inst_check__UserTypes_42;
#line 592 "inst_check.m"
                      MR_Word check_hlds__inst_check__UserCharTypes_43;
#line 592 "inst_check.m"
                      MR_Word check_hlds__inst_check__Types_44;
#line 592 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 3)));
#line 595 "inst_check.m"
                      MR_Word check_hlds__inst_check__TypeCtorDefns_41;
#line 605 "inst_check.m"
                      MR_Integer check_hlds__inst_check__V_86_86;
#line 612 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_89_89;

#line 593 "inst_check.m"
                      {
#line 593 "inst_check.m"
                        check_hlds__inst_check__Name_39 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_36);
                      }
#line 594 "inst_check.m"
                      {
#line 594 "inst_check.m"
                        check_hlds__inst_check__FunctorNameAndArity_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__FunctorNameAndArity_40, 0) = ((MR_Box) (check_hlds__inst_check__Name_39));
#line 594 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__FunctorNameAndArity_40, 1) = ((MR_Box) (check_hlds__inst_check__Arity_37));
#line 594 "inst_check.m"
                      }
#line 596 "inst_check.m"
                      {
#line 596 "inst_check.m"
                        check_hlds__inst_check__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0, check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__FunctorNameAndArity_40)), &check_hlds__inst_check__TypeCtorDefns_41);
                      }
#line 595 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 599 "inst_check.m"
                        {
#line 599 "inst_check.m"
                          check_hlds__inst_check__find_matching_user_types_3_p_0(check_hlds__inst_check__SymName_36, check_hlds__inst_check__TypeCtorDefns_41, &check_hlds__inst_check__UserTypes_42);
                        }
#line 595 "inst_check.m"
                      else
#line 601 "inst_check.m"
                        check_hlds__inst_check__UserTypes_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "inst_check.m"
                      {
#line 605 "inst_check.m"
                        check_hlds__inst_check__V_86_86 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__Name_39);
                      }
#line 605 "inst_check.m"
                      check_hlds__inst_check__succeeded = (check_hlds__inst_check__V_86_86 == (MR_Integer) 1);
#line 605 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 606 "inst_check.m"
                        {
#line 606 "inst_check.m"
                          {
#line 606 "inst_check.m"
                            check_hlds__inst_check__UserCharTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__UserCharTypes_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[0])));
#line 606 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__UserCharTypes_43, 1) = ((MR_Box) (check_hlds__inst_check__UserTypes_42));
#line 606 "inst_check.m"
                          }
#line 606 "inst_check.m"
                        }
#line 605 "inst_check.m"
                      else
#line 608 "inst_check.m"
                        check_hlds__inst_check__UserCharTypes_43 = check_hlds__inst_check__UserTypes_42;
#line 612 "inst_check.m"
                      {
#line 612 "inst_check.m"
                        check_hlds__inst_check__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_89_89, 0) = ((MR_Box) (check_hlds__inst_check__SymName_36));
#line 612 "inst_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_89_89, 1) = ((MR_Box) (check_hlds__inst_check__Arity_37));
#line 612 "inst_check.m"
                      }
#line 612 "inst_check.m"
                      {
#line 612 "inst_check.m"
                        check_hlds__inst_check__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__inst_check__V_89_89);
                      }
#line 612 "inst_check.m"
                      if (check_hlds__inst_check__succeeded)
#line 613 "inst_check.m"
                        {
#line 613 "inst_check.m"
                          MR_Word check_hlds__inst_check__V_90_90;

#line 613 "inst_check.m"
                          {
#line 613 "inst_check.m"
                            check_hlds__inst_check__V_90_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "inst_check.m"
                            MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_90_90, 0) = ((MR_Box) (check_hlds__inst_check__Arity_37));
#line 613 "inst_check.m"
                          }
#line 613 "inst_check.m"
                          {
#line 613 "inst_check.m"
                            check_hlds__inst_check__Types_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Types_44, 0) = ((MR_Box) (check_hlds__inst_check__V_90_90));
#line 613 "inst_check.m"
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Types_44, 1) = ((MR_Box) (check_hlds__inst_check__UserCharTypes_43));
#line 613 "inst_check.m"
                          }
#line 613 "inst_check.m"
                        }
#line 612 "inst_check.m"
                      else
#line 615 "inst_check.m"
                        check_hlds__inst_check__Types_44 = check_hlds__inst_check__UserCharTypes_43;
#line 617 "inst_check.m"
                      {
#line 617 "inst_check.m"
                        check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 617 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, 0) = ((MR_Box) (check_hlds__inst_check__Types_44));
#line 617 "inst_check.m"
                      }
#line 592 "inst_check.m"
                    }
#line 618 "inst_check.m"
                    break;
#line 618 "inst_check.m"
                  case (MR_Integer) 3:
#line 619 "inst_check.m"
                    {
#line 619 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_83_83;
#line 619 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_84_84;
#line 619 "inst_check.m"
                      MR_Integer check_hlds__inst_check__Arity_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_34, (MR_Integer) 1)));

#line 620 "inst_check.m"
                      {
#line 620 "inst_check.m"
                        check_hlds__inst_check__V_84_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 620 "inst_check.m"
                        MR_hl_field(MR_mktag(2), check_hlds__inst_check__V_84_84, 0) = ((MR_Box) (check_hlds__inst_check__Arity_91));
#line 620 "inst_check.m"
                      }
#line 620 "inst_check.m"
                      {
#line 620 "inst_check.m"
                        check_hlds__inst_check__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_83_83, 0) = ((MR_Box) (check_hlds__inst_check__V_84_84));
#line 620 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "inst_check.m"
                      }
#line 620 "inst_check.m"
                      {
#line 620 "inst_check.m"
                        check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 620 "inst_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, 0) = ((MR_Box) (check_hlds__inst_check__V_83_83));
#line 620 "inst_check.m"
                      }
#line 619 "inst_check.m"
                    }
#line 618 "inst_check.m"
                    break;
#line 618 "inst_check.m"
                  case (MR_Integer) 5:
#line 623 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[5]);
#line 618 "inst_check.m"
                    break;
#line 618 "inst_check.m"
                  case (MR_Integer) 6:
#line 626 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[3]);
#line 618 "inst_check.m"
                    break;
#line 618 "inst_check.m"
                  case (MR_Integer) 7:
#line 629 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[1]);
#line 618 "inst_check.m"
                    break;
#line 618 "inst_check.m"
                  case (MR_Integer) 8:
#line 632 "inst_check.m"
                    check_hlds__inst_check__MaybePossibleTypes_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[7]);
#line 618 "inst_check.m"
                    break;
#line 618 "inst_check.m"
                }
#line 618 "inst_check.m"
                break;
#line 618 "inst_check.m"
            }
#line 574 "inst_check.m"
            if ((check_hlds__inst_check__MaybePossibleTypes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "inst_check.m"
              {
#line 573 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27 = (MR_Integer) 0;
#line 572 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5;
#line 572 "inst_check.m"
              }
#line 574 "inst_check.m"
            else
#line 575 "inst_check.m"
              {
#line 575 "inst_check.m"
                MR_Word check_hlds__inst_check__PossibleTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, (MR_Integer) 0)));
#line 575 "inst_check.m"
                MR_Word check_hlds__inst_check__PossibleTypeSet_21;

#line 576 "inst_check.m"
                {
#line 576 "inst_check.m"
                  check_hlds__inst_check__PossibleTypeSet_21 = mercury__set__list_to_set_1_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, check_hlds__inst_check__PossibleTypes_20);
                }
#line 577 "inst_check.m"
                {
#line 577 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26, 0) = ((MR_Box) (check_hlds__inst_check__PossibleTypeSet_21));
#line 577 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5));
#line 577 "inst_check.m"
                }
#line 575 "inst_check.m"
                check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3;
#line 575 "inst_check.m"
              }
#line 579 "inst_check.m"
            /* direct tailcall eliminated */
#line 579 "inst_check.m"
            {
#line 579 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__BoundInsts_16;
#line 579 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0__tmp_copy_3 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27;
#line 579 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0__tmp_copy_5 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26;

#line 579 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0__tmp_copy_5;
#line 579 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0__tmp_copy_3;
#line 579 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 579 "inst_check.m"
            }
#line 579 "inst_check.m"
            continue;
#line 568 "inst_check.m"
          }
#line 565 "inst_check.m"
      }
#line 565 "inst_check.m"
      break;
#line 565 "inst_check.m"
    }
#line 560 "inst_check.m"
}

#line 437 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_1(
#line 437 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 437 "inst_check.m"
{
#line 437 "inst_check.m"
  {
#line 437 "inst_check.m"
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 437 "inst_check.m"
    MR_builtin_longjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__commit_0, 1);
#line 437 "inst_check.m"
  }
#line 437 "inst_check.m"
}

#line 437 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_3(
#line 437 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 437 "inst_check.m"
{
#line 437 "inst_check.m"
  {
#line 437 "inst_check.m"
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 437 "inst_check.m"
    (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95 = ((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__conv0_Constructor_95);
#line 437 "inst_check.m"
    {
#line 437 "inst_check.m"
      check_hlds__inst_check__check_for_type_bound_insts_4_p_0_2(check_hlds__inst_check__env_ptr);
    }
#line 437 "inst_check.m"
  }
#line 437 "inst_check.m"
}

#line 437 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_2(
#line 437 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 437 "inst_check.m"
{
#line 437 "inst_check.m"
  {
#line 437 "inst_check.m"
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 437 "inst_check.m"
    {
#line 438 "inst_check.m"
      MR_Word check_hlds__inst_check__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95, (MR_Integer) 0)));
#line 438 "inst_check.m"
      MR_Word check_hlds__inst_check__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95, (MR_Integer) 1)));
#line 438 "inst_check.m"
      MR_Word check_hlds__inst_check__V_42_42;
#line 438 "inst_check.m"
      MR_Word check_hlds__inst_check__V_44_44;

#line 438 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorSymName_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95, (MR_Integer) 2)));
#line 438 "inst_check.m"
      check_hlds__inst_check__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95, (MR_Integer) 3)));
#line 438 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorArity_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95, (MR_Integer) 4)));
#line 438 "inst_check.m"
      check_hlds__inst_check__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_95, (MR_Integer) 5)));
#line 439 "inst_check.m"
      {
#line 439 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__V_100_100 = mdbcomp__sym_name__unqualify_name_1_f_0((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorSymName_41);
      }
#line 439 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (strcmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsName_31, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__V_100_100) == 0);
#line 437 "inst_check.m"
      if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 437 "inst_check.m"
        {
#line 440 "inst_check.m"
          (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorArity_43 == (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsArity_17);
#line 440 "inst_check.m"
          if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 440 "inst_check.m"
            {
#line 440 "inst_check.m"
              check_hlds__inst_check__check_for_type_bound_insts_4_p_0_1(check_hlds__inst_check__env_ptr);
            }
#line 437 "inst_check.m"
        }
#line 437 "inst_check.m"
    }
#line 437 "inst_check.m"
  }
#line 437 "inst_check.m"
}

#line 437 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_4(
#line 437 "inst_check.m"
  void * check_hlds__inst_check__env_ptr_arg)
#line 437 "inst_check.m"
{
#line 437 "inst_check.m"
  {
#line 437 "inst_check.m"
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

#line 437 "inst_check.m"
    if (MR_builtin_setjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__commit_0) == 0)
#line 437 "inst_check.m"
      {
#line 437 "inst_check.m"
        {
#line 437 "inst_check.m"
          {
#line 437 "inst_check.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__conv0_Constructor_95, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructors_22, check_hlds__inst_check__check_for_type_bound_insts_4_p_0_3, check_hlds__inst_check__env_ptr);
          }
#line 437 "inst_check.m"
        }
#line 437 "inst_check.m"
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = MR_FALSE;
#line 437 "inst_check.m"
      }
#line 437 "inst_check.m"
    else
#line 437 "inst_check.m"
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = MR_TRUE;
#line 437 "inst_check.m"
  }
#line 437 "inst_check.m"
}

#line 403 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0(
#line 403 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__1_1,
#line 403 "inst_check.m"
  MR_Word check_hlds__inst_check__HeadVar__2_2,
#line 403 "inst_check.m"
  MR_Word check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3,
#line 403 "inst_check.m"
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_4)
#line 403 "inst_check.m"
{
#line 403 "inst_check.m"
  {
#line 403 "inst_check.m"
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s check_hlds__inst_check__env;

#line 406 "inst_check.m"
    while (MR_TRUE)
#line 406 "inst_check.m"
      {
#line 406 "inst_check.m"
        /* tailcall optimized into a loop */
#line 406 "inst_check.m"
        if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 406 "inst_check.m"
          *check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_4 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 406 "inst_check.m"
        else
#line 408 "inst_check.m"
          {
#line 408 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
#line 408 "inst_check.m"
            MR_Word check_hlds__inst_check__BoundInsts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
#line 408 "inst_check.m"
            MR_Word check_hlds__inst_check__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_10, (MR_Integer) 0)));
#line 408 "inst_check.m"
            MR_String check_hlds__inst_check__ConsIdStr_15;
#line 408 "inst_check.m"
            MR_Word check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93;
#line 409 "inst_check.m"
            MR_Word check_hlds__inst_check__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_10, (MR_Integer) 1)));

#line 410 "inst_check.m"
            {
#line 410 "inst_check.m"
              check_hlds__inst_check__ConsIdStr_15 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(check_hlds__inst_check__ConsId_13);
            }
#line 481 "inst_check.m"
#line 481 "inst_check.m"
            switch (MR_tag((MR_Word) check_hlds__inst_check__ConsId_13)) {
#line 481 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 481 "inst_check.m"
              case (MR_Integer) 0:
#line 544 "inst_check.m"
                {
#line 544 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 544 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 544 "inst_check.m"
                }
#line 481 "inst_check.m"
                break;
#line 481 "inst_check.m"
              case (MR_Integer) 1:
#line 544 "inst_check.m"
                {
#line 544 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 544 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 544 "inst_check.m"
                }
#line 481 "inst_check.m"
                break;
#line 481 "inst_check.m"
              case (MR_Integer) 2:
#line 544 "inst_check.m"
                {
#line 544 "inst_check.m"
                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 544 "inst_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 544 "inst_check.m"
                }
#line 481 "inst_check.m"
                break;
#line 481 "inst_check.m"
              case (MR_Integer) 3:
#line 481 "inst_check.m"
#line 481 "inst_check.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_13, (MR_Integer) 0)))) {
#line 481 "inst_check.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 481 "inst_check.m"
                  case (MR_Integer) 0:
#line 481 "inst_check.m"
                  case (MR_Integer) 1:
#line 481 "inst_check.m"
                  case (MR_Integer) 3:
#line 481 "inst_check.m"
                  case (MR_Integer) 4:
#line 481 "inst_check.m"
                  case (MR_Integer) 9:
#line 481 "inst_check.m"
                  case (MR_Integer) 10:
#line 481 "inst_check.m"
                  case (MR_Integer) 11:
#line 481 "inst_check.m"
                  case (MR_Integer) 12:
#line 481 "inst_check.m"
                  case (MR_Integer) 13:
#line 481 "inst_check.m"
                  case (MR_Integer) 14:
#line 544 "inst_check.m"
                    {
#line 544 "inst_check.m"
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "inst_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 544 "inst_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 544 "inst_check.m"
                    }
#line 481 "inst_check.m"
                    break;
#line 481 "inst_check.m"
                  case (MR_Integer) 2:
#line 412 "inst_check.m"
                    {
#line 412 "inst_check.m"
                      MR_Word check_hlds__inst_check__ConsSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_13, (MR_Integer) 1)));
#line 412 "inst_check.m"
                      MR_Word check_hlds__inst_check__V_18_18;

#line 412 "inst_check.m"
                      (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_13, (MR_Integer) 2)));
#line 412 "inst_check.m"
                      check_hlds__inst_check__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_13, (MR_Integer) 3)));
#line 464 "inst_check.m"
#line 464 "inst_check.m"
                      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 464 "inst_check.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 464 "inst_check.m"
                        case (MR_Integer) 0:
#line 464 "inst_check.m"
#line 464 "inst_check.m"
                          switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
#line 464 "inst_check.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 464 "inst_check.m"
                            case (MR_Integer) 0:
#line 464 "inst_check.m"
                            case (MR_Integer) 1:
#line 464 "inst_check.m"
                            case (MR_Integer) 3:
#line 479 "inst_check.m"
                              {
#line 479 "inst_check.m"
                                check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "inst_check.m"
                                MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 479 "inst_check.m"
                                MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 479 "inst_check.m"
                              }
#line 464 "inst_check.m"
                              break;
#line 464 "inst_check.m"
                            case (MR_Integer) 2:
#line 466 "inst_check.m"
                              {
#line 467 "inst_check.m"
                                MR_Integer check_hlds__inst_check__V_90_90;
#line 467 "inst_check.m"
                                MR_String check_hlds__inst_check__ConsName_96;

#line 467 "inst_check.m"
                                (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__ConsSymName_16)) == (MR_mktag((MR_Integer) 0)));
#line 467 "inst_check.m"
                                if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 467 "inst_check.m"
                                  {
#line 467 "inst_check.m"
                                    check_hlds__inst_check__ConsName_96 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ConsSymName_16, (MR_Integer) 0)));
#line 468 "inst_check.m"
                                    {
#line 468 "inst_check.m"
                                      check_hlds__inst_check__V_90_90 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__ConsName_96);
                                    }
#line 468 "inst_check.m"
                                    (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__V_90_90 == (MR_Integer) 1);
#line 467 "inst_check.m"
                                  }
#line 466 "inst_check.m"
                                if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 466 "inst_check.m"
                                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 466 "inst_check.m"
                                else
#line 472 "inst_check.m"
                                  {
#line 472 "inst_check.m"
                                    check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "inst_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 472 "inst_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 472 "inst_check.m"
                                  }
#line 466 "inst_check.m"
                              }
#line 464 "inst_check.m"
                              break;
#line 464 "inst_check.m"
                          }
#line 464 "inst_check.m"
                          break;
#line 464 "inst_check.m"
                        case (MR_Integer) 1:
#line 414 "inst_check.m"
                          {
#line 414 "inst_check.m"
                            MR_Word check_hlds__inst_check__TypeCtor_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
#line 414 "inst_check.m"
                            MR_Word check_hlds__inst_check__TypeDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
#line 414 "inst_check.m"
                            MR_Word check_hlds__inst_check__TypeDefnBody_21;

#line 415 "inst_check.m"
                            {
#line 415 "inst_check.m"
                              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDefn_20, &check_hlds__inst_check__TypeDefnBody_21);
                            }
#line 456 "inst_check.m"
#line 456 "inst_check.m"
                            switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnBody_21)) {
#line 456 "inst_check.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 456 "inst_check.m"
                              case (MR_Integer) 0:
#line 462 "inst_check.m"
                                {
#line 462 "inst_check.m"
                                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "inst_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 462 "inst_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 462 "inst_check.m"
                                }
#line 456 "inst_check.m"
                                break;
#line 456 "inst_check.m"
                              case (MR_Integer) 1:
#line 418 "inst_check.m"
                                {
#line 418 "inst_check.m"
                                  MR_Word check_hlds__inst_check__ModuleMismatch_32;
#line 418 "inst_check.m"
                                  MR_Word check_hlds__inst_check__ConsIdMismatch_45;
#line 417 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_23_23;
#line 417 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_24_24;
#line 417 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_25_25;
#line 417 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_26_26;
#line 417 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_27_27;
#line 417 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_28_28;
#line 417 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_29_29;
#line 417 "inst_check.m"
                                  MR_Word check_hlds__inst_check__V_30_30;

#line 417 "inst_check.m"
                                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructors_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 0)));
#line 417 "inst_check.m"
                                  check_hlds__inst_check__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 1)));
#line 417 "inst_check.m"
                                  check_hlds__inst_check__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 2)));
#line 417 "inst_check.m"
                                  check_hlds__inst_check__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 3)));
#line 417 "inst_check.m"
                                  check_hlds__inst_check__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 4)));
#line 417 "inst_check.m"
                                  check_hlds__inst_check__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 5)));
#line 417 "inst_check.m"
                                  check_hlds__inst_check__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 417 "inst_check.m"
                                  check_hlds__inst_check__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 417 "inst_check.m"
                                  check_hlds__inst_check__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 7)));
#line 422 "inst_check.m"
                                  if (((MR_tag((MR_Word) check_hlds__inst_check__ConsSymName_16)) == (MR_mktag((MR_Integer) 1))))
#line 423 "inst_check.m"
                                    {
#line 423 "inst_check.m"
                                      MR_Word check_hlds__inst_check__ConsModulename_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ConsSymName_16, (MR_Integer) 0)));
#line 423 "inst_check.m"
                                      MR_Word check_hlds__inst_check__TypeCtorSymName_34;
#line 424 "inst_check.m"
                                      MR_Integer check_hlds__inst_check__V_35_35;
#line 426 "inst_check.m"
                                      MR_Word check_hlds__inst_check__TypeCtormoduleName_36;
#line 426 "inst_check.m"
                                      MR_String check_hlds__inst_check__V_37_37;

#line 423 "inst_check.m"
                                      (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsName_31 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ConsSymName_16, (MR_Integer) 1)));
#line 424 "inst_check.m"
                                      check_hlds__inst_check__TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_19, (MR_Integer) 0)));
#line 424 "inst_check.m"
                                      check_hlds__inst_check__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_19, (MR_Integer) 1)));
#line 426 "inst_check.m"
                                      (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__TypeCtorSymName_34)) == (MR_mktag((MR_Integer) 1)));
#line 426 "inst_check.m"
                                      if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 426 "inst_check.m"
                                        {
#line 426 "inst_check.m"
                                          check_hlds__inst_check__TypeCtormoduleName_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_34, (MR_Integer) 0)));
#line 426 "inst_check.m"
                                          check_hlds__inst_check__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_34, (MR_Integer) 1)));
#line 427 "inst_check.m"
                                          {
#line 427 "inst_check.m"
                                            (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(check_hlds__inst_check__ConsModulename_33, check_hlds__inst_check__TypeCtormoduleName_36);
                                          }
#line 426 "inst_check.m"
                                        }
#line 425 "inst_check.m"
                                      if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 430 "inst_check.m"
                                        check_hlds__inst_check__ModuleMismatch_32 = (MR_Integer) 0;
#line 425 "inst_check.m"
                                      else
#line 432 "inst_check.m"
                                        check_hlds__inst_check__ModuleMismatch_32 = (MR_Integer) 1;
#line 423 "inst_check.m"
                                    }
#line 422 "inst_check.m"
                                  else
#line 420 "inst_check.m"
                                    {
#line 420 "inst_check.m"
                                      (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsName_31 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ConsSymName_16, (MR_Integer) 0)));
#line 421 "inst_check.m"
                                      check_hlds__inst_check__ModuleMismatch_32 = (MR_Integer) 0;
#line 420 "inst_check.m"
                                    }
#line 437 "inst_check.m"
                                  {
#line 437 "inst_check.m"
                                    check_hlds__inst_check__check_for_type_bound_insts_4_p_0_4(&check_hlds__inst_check__env);
                                  }
#line 435 "inst_check.m"
                                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 443 "inst_check.m"
                                    check_hlds__inst_check__ConsIdMismatch_45 = (MR_Integer) 0;
#line 435 "inst_check.m"
                                  else
#line 445 "inst_check.m"
                                    check_hlds__inst_check__ConsIdMismatch_45 = (MR_Integer) 1;
#line 448 "inst_check.m"
                                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__ModuleMismatch_32 == (MR_Integer) 0);
#line 448 "inst_check.m"
                                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 449 "inst_check.m"
                                    (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__ConsIdMismatch_45 == (MR_Integer) 0);
#line 447 "inst_check.m"
                                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
#line 447 "inst_check.m"
                                    check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 447 "inst_check.m"
                                  else
#line 453 "inst_check.m"
                                    {
#line 453 "inst_check.m"
                                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "inst_check.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 453 "inst_check.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 453 "inst_check.m"
                                    }
#line 418 "inst_check.m"
                                }
#line 456 "inst_check.m"
                                break;
#line 456 "inst_check.m"
                              case (MR_Integer) 2:
#line 462 "inst_check.m"
                                {
#line 462 "inst_check.m"
                                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "inst_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 462 "inst_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 462 "inst_check.m"
                                }
#line 456 "inst_check.m"
                                break;
#line 456 "inst_check.m"
                              case (MR_Integer) 3:
#line 462 "inst_check.m"
                                {
#line 462 "inst_check.m"
                                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "inst_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 462 "inst_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 462 "inst_check.m"
                                }
#line 456 "inst_check.m"
                                break;
#line 456 "inst_check.m"
                            }
#line 414 "inst_check.m"
                          }
#line 464 "inst_check.m"
                          break;
#line 464 "inst_check.m"
                      }
#line 412 "inst_check.m"
                    }
#line 481 "inst_check.m"
                    break;
#line 481 "inst_check.m"
                  case (MR_Integer) 5:
#line 485 "inst_check.m"
#line 485 "inst_check.m"
                    switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 485 "inst_check.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 485 "inst_check.m"
                      case (MR_Integer) 0:
#line 485 "inst_check.m"
#line 485 "inst_check.m"
                        switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
#line 485 "inst_check.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 485 "inst_check.m"
                          case (MR_Integer) 0:
#line 484 "inst_check.m"
                            check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 485 "inst_check.m"
                            break;
#line 485 "inst_check.m"
                          case (MR_Integer) 1:
#line 485 "inst_check.m"
                          case (MR_Integer) 2:
#line 485 "inst_check.m"
                          case (MR_Integer) 3:
#line 491 "inst_check.m"
                            {
#line 491 "inst_check.m"
                              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 491 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 491 "inst_check.m"
                            }
#line 485 "inst_check.m"
                            break;
#line 485 "inst_check.m"
                        }
#line 485 "inst_check.m"
                        break;
#line 485 "inst_check.m"
                      case (MR_Integer) 1:
#line 491 "inst_check.m"
                        {
#line 491 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 491 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 491 "inst_check.m"
                        }
#line 485 "inst_check.m"
                        break;
#line 485 "inst_check.m"
                    }
#line 481 "inst_check.m"
                    break;
#line 481 "inst_check.m"
                  case (MR_Integer) 6:
#line 497 "inst_check.m"
#line 497 "inst_check.m"
                    switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 497 "inst_check.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 497 "inst_check.m"
                      case (MR_Integer) 0:
#line 497 "inst_check.m"
#line 497 "inst_check.m"
                        switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
#line 497 "inst_check.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 497 "inst_check.m"
                          case (MR_Integer) 0:
#line 497 "inst_check.m"
                          case (MR_Integer) 2:
#line 497 "inst_check.m"
                          case (MR_Integer) 3:
#line 503 "inst_check.m"
                            {
#line 503 "inst_check.m"
                              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 503 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 503 "inst_check.m"
                            }
#line 497 "inst_check.m"
                            break;
#line 497 "inst_check.m"
                          case (MR_Integer) 1:
#line 496 "inst_check.m"
                            check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 497 "inst_check.m"
                            break;
#line 497 "inst_check.m"
                        }
#line 497 "inst_check.m"
                        break;
#line 497 "inst_check.m"
                      case (MR_Integer) 1:
#line 503 "inst_check.m"
                        {
#line 503 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 503 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 503 "inst_check.m"
                        }
#line 497 "inst_check.m"
                        break;
#line 497 "inst_check.m"
                    }
#line 481 "inst_check.m"
                    break;
#line 481 "inst_check.m"
                  case (MR_Integer) 7:
#line 509 "inst_check.m"
#line 509 "inst_check.m"
                    switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 509 "inst_check.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 509 "inst_check.m"
                      case (MR_Integer) 0:
#line 509 "inst_check.m"
#line 509 "inst_check.m"
                        switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
#line 509 "inst_check.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 509 "inst_check.m"
                          case (MR_Integer) 0:
#line 509 "inst_check.m"
                          case (MR_Integer) 1:
#line 509 "inst_check.m"
                          case (MR_Integer) 3:
#line 515 "inst_check.m"
                            {
#line 515 "inst_check.m"
                              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 515 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 515 "inst_check.m"
                            }
#line 509 "inst_check.m"
                            break;
#line 509 "inst_check.m"
                          case (MR_Integer) 2:
#line 508 "inst_check.m"
                            check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 509 "inst_check.m"
                            break;
#line 509 "inst_check.m"
                        }
#line 509 "inst_check.m"
                        break;
#line 509 "inst_check.m"
                      case (MR_Integer) 1:
#line 515 "inst_check.m"
                        {
#line 515 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 515 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 515 "inst_check.m"
                        }
#line 509 "inst_check.m"
                        break;
#line 509 "inst_check.m"
                    }
#line 481 "inst_check.m"
                    break;
#line 481 "inst_check.m"
                  case (MR_Integer) 8:
#line 521 "inst_check.m"
#line 521 "inst_check.m"
                    switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
#line 521 "inst_check.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 521 "inst_check.m"
                      case (MR_Integer) 0:
#line 521 "inst_check.m"
#line 521 "inst_check.m"
                        switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
#line 521 "inst_check.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 521 "inst_check.m"
                          case (MR_Integer) 0:
#line 521 "inst_check.m"
                          case (MR_Integer) 1:
#line 521 "inst_check.m"
                          case (MR_Integer) 2:
#line 527 "inst_check.m"
                            {
#line 527 "inst_check.m"
                              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 527 "inst_check.m"
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 527 "inst_check.m"
                            }
#line 521 "inst_check.m"
                            break;
#line 521 "inst_check.m"
                          case (MR_Integer) 3:
#line 520 "inst_check.m"
                            check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
#line 521 "inst_check.m"
                            break;
#line 521 "inst_check.m"
                        }
#line 521 "inst_check.m"
                        break;
#line 521 "inst_check.m"
                      case (MR_Integer) 1:
#line 527 "inst_check.m"
                        {
#line 527 "inst_check.m"
                          check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
#line 527 "inst_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
#line 527 "inst_check.m"
                        }
#line 521 "inst_check.m"
                        break;
#line 521 "inst_check.m"
                    }
#line 481 "inst_check.m"
                    break;
#line 481 "inst_check.m"
                }
#line 481 "inst_check.m"
                break;
#line 481 "inst_check.m"
            }
#line 546 "inst_check.m"
            /* direct tailcall eliminated */
#line 546 "inst_check.m"
            {
#line 546 "inst_check.m"
              MR_Word check_hlds__inst_check__HeadVar__2__tmp_copy_2 = check_hlds__inst_check__BoundInsts_11;
#line 546 "inst_check.m"
              MR_Word check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0__tmp_copy_3 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_93_93;

#line 546 "inst_check.m"
              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0__tmp_copy_3;
#line 546 "inst_check.m"
              check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__HeadVar__2__tmp_copy_2;
#line 546 "inst_check.m"
            }
#line 546 "inst_check.m"
            continue;
#line 408 "inst_check.m"
          }
#line 406 "inst_check.m"
        break;
#line 406 "inst_check.m"
      }
#line 403 "inst_check.m"
  }
#line 403 "inst_check.m"
}

#line 368 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(
#line 368 "inst_check.m"
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3,
#line 368 "inst_check.m"
  MR_Word * check_hlds__inst_check__TypeCtor_4)
#line 368 "inst_check.m"
{
#line 373 "inst_check.m"
  {
#line 373 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;

#line 373 "inst_check.m"
#line 373 "inst_check.m"
    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3)) {
#line 373 "inst_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 373 "inst_check.m"
      case (MR_Integer) 0:
#line 373 "inst_check.m"
        {
#line 373 "inst_check.m"
          MR_Word check_hlds__inst_check__V_22_22 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3), (MR_Integer) 0);
#line 373 "inst_check.m"
          MR_Word check_hlds__inst_check__V_5_5;

#line 373 "inst_check.m"
          *check_hlds__inst_check__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_22_22, (MR_Integer) 0)));
#line 373 "inst_check.m"
          check_hlds__inst_check__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_22_22, (MR_Integer) 1)));
#line 373 "inst_check.m"
        }
#line 373 "inst_check.m"
        break;
#line 373 "inst_check.m"
      case (MR_Integer) 1:
#line 375 "inst_check.m"
        {
#line 375 "inst_check.m"
          MR_Word check_hlds__inst_check__BuiltinType_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

#line 379 "inst_check.m"
          *check_hlds__inst_check__TypeCtor_4 = ((&check_hlds__inst_check_vector_common_6[0 + check_hlds__inst_check__BuiltinType_6]))->check_hlds__inst_check__vector_common_type_6_0__vct_6_f_0;
#line 375 "inst_check.m"
        }
#line 373 "inst_check.m"
        break;
#line 373 "inst_check.m"
      case (MR_Integer) 2:
#line 390 "inst_check.m"
        {
#line 390 "inst_check.m"
          MR_Integer check_hlds__inst_check__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

#line 391 "inst_check.m"
          {
#line 391 "inst_check.m"
            MR_Word base;
#line 391 "inst_check.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "inst_check.m"
            *check_hlds__inst_check__TypeCtor_4 = base;
#line 391 "inst_check.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_3[12]));
#line 391 "inst_check.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__Arity_7));
#line 391 "inst_check.m"
          }
#line 390 "inst_check.m"
        }
#line 373 "inst_check.m"
        break;
#line 373 "inst_check.m"
    }
#line 373 "inst_check.m"
  }
#line 368 "inst_check.m"
}

#line 325 "inst_check.m"
static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_2(
#line 325 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg,
#line 325 "inst_check.m"
  MR_Box check_hlds__inst_check__wrapper_arg_1,
#line 325 "inst_check.m"
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
#line 325 "inst_check.m"
{
#line 325 "inst_check.m"
  {
#line 325 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
#line 325 "inst_check.m"
    MR_Word check_hlds__inst_check__conv0_TypeCtor_4;

#line 325 "inst_check.m"
    {
#line 325 "inst_check.m"
      check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_TypeCtor_4);
    }
#line 325 "inst_check.m"
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_TypeCtor_4));
#line 325 "inst_check.m"
  }
#line 325 "inst_check.m"
}

#line 359 "inst_check.m"
static MR_bool MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1(
#line 359 "inst_check.m"
  MR_Box check_hlds__inst_check__closure_arg)
#line 359 "inst_check.m"
{
#line 359 "inst_check.m"
  {
#line 359 "inst_check.m"
    MR_bool check_hlds__inst_check__succeeded;
#line 359 "inst_check.m"
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;

#line 359 "inst_check.m"
    {
#line 359 "inst_check.m"
      check_hlds__inst_check__succeeded = check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__359__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 4))));
    }
#line 359 "inst_check.m"
    return check_hlds__inst_check__succeeded;
#line 359 "inst_check.m"
  }
#line 359 "inst_check.m"
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

#line 363 "inst_check.m"
    if ((check_hlds__inst_check__InstBody_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "inst_check.m"
      {
#line 365 "inst_check.m"
        *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
#line 364 "inst_check.m"
        *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
#line 364 "inst_check.m"
      }
#line 363 "inst_check.m"
    else
#line 235 "inst_check.m"
      {
#line 235 "inst_check.m"
        MR_Word check_hlds__inst_check__Inst_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__InstBody_16, (MR_Integer) 0)));

#line 348 "inst_check.m"
#line 348 "inst_check.m"
        switch (MR_tag((MR_Word) check_hlds__inst_check__Inst_20)) {
#line 348 "inst_check.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 348 "inst_check.m"
          case (MR_Integer) 0:
#line 358 "inst_check.m"
            {
#line 358 "inst_check.m"
              MR_Word check_hlds__inst_check__V_56_56;

#line 359 "inst_check.m"
              {
#line 359 "inst_check.m"
                check_hlds__inst_check__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 359 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1]));
#line 359 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1));
#line 359 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 359 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 3) = ((MR_Box) (check_hlds__inst_check__IFTC0_17));
#line 359 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "inst_check.m"
              }
#line 359 "inst_check.m"
              {
#line 359 "inst_check.m"
                mercury__require__expect_4_p_0(check_hlds__inst_check__V_56_56, (MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "not bound, IFTC0 != iftc_not_applicable");
              }
#line 361 "inst_check.m"
              *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
#line 358 "inst_check.m"
              *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
#line 358 "inst_check.m"
            }
#line 348 "inst_check.m"
            break;
#line 348 "inst_check.m"
          case (MR_Integer) 1:
#line 348 "inst_check.m"
          case (MR_Integer) 2:
#line 358 "inst_check.m"
            {
#line 358 "inst_check.m"
              MR_Word check_hlds__inst_check__V_56_56;

#line 359 "inst_check.m"
              {
#line 359 "inst_check.m"
                check_hlds__inst_check__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 359 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1]));
#line 359 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1));
#line 359 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 359 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 3) = ((MR_Box) (check_hlds__inst_check__IFTC0_17));
#line 359 "inst_check.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "inst_check.m"
              }
#line 359 "inst_check.m"
              {
#line 359 "inst_check.m"
                mercury__require__expect_4_p_0(check_hlds__inst_check__V_56_56, (MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "not bound, IFTC0 != iftc_not_applicable");
              }
#line 361 "inst_check.m"
              *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
#line 358 "inst_check.m"
              *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
#line 358 "inst_check.m"
            }
#line 348 "inst_check.m"
            break;
#line 348 "inst_check.m"
          case (MR_Integer) 3:
#line 348 "inst_check.m"
#line 348 "inst_check.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_20, (MR_Integer) 0)))) {
#line 348 "inst_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 348 "inst_check.m"
              case (MR_Integer) 0:
#line 237 "inst_check.m"
                {
#line 237 "inst_check.m"
                  MR_Word check_hlds__inst_check__BoundInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_20, (MR_Integer) 3)));
#line 237 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_20, (MR_Integer) 1)));
#line 237 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_20, (MR_Integer) 2)));

#line 311 "inst_check.m"
#line 311 "inst_check.m"
                  switch (MR_tag((MR_Word) check_hlds__inst_check__IFTC0_17)) {
#line 311 "inst_check.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 311 "inst_check.m"
                    case (MR_Integer) 0:
#line 311 "inst_check.m"
#line 311 "inst_check.m"
                      switch (MR_unmkbody(check_hlds__inst_check__IFTC0_17)) {
#line 311 "inst_check.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 311 "inst_check.m"
                        case (MR_Integer) 0:
#line 342 "inst_check.m"
                          {
#line 345 "inst_check.m"
                            {
#line 345 "inst_check.m"
                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "bound, IFTC0 = iftc_not_applicable");
#line 345 "inst_check.m"
                              return;
                            }
#line 342 "inst_check.m"
                          }
#line 311 "inst_check.m"
                          break;
#line 311 "inst_check.m"
                        case (MR_Integer) 1:
#line 312 "inst_check.m"
                          {
#line 312 "inst_check.m"
                            MR_Word check_hlds__inst_check__TypeableFunctors_37;
#line 312 "inst_check.m"
                            MR_Word check_hlds__inst_check__PossibleTypeSets_38;

#line 313 "inst_check.m"
                            {
#line 313 "inst_check.m"
                              check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(check_hlds__inst_check__FunctorsToTypesMap_9, check_hlds__inst_check__BoundInsts_23, (MR_Integer) 1, &check_hlds__inst_check__TypeableFunctors_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__PossibleTypeSets_38);
                            }
#line 319 "inst_check.m"
#line 319 "inst_check.m"
                            switch (check_hlds__inst_check__TypeableFunctors_37) {
#line 319 "inst_check.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 319 "inst_check.m"
                              case (MR_Integer) 1:
#line 320 "inst_check.m"
                                {
#line 320 "inst_check.m"
                                  MR_Word check_hlds__inst_check__TypeCtorInfo_111_111 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
#line 320 "inst_check.m"
                                  MR_Word check_hlds__inst_check__PossibleTypesSet_39;
#line 320 "inst_check.m"
                                  MR_Word check_hlds__inst_check__PossibleTypes_40;
#line 320 "inst_check.m"
                                  MR_Word check_hlds__inst_check__PossibleTypeCtors_41;
#line 320 "inst_check.m"
                                  MR_Word check_hlds__inst_check__IFTC_106;

#line 321 "inst_check.m"
                                  {
#line 321 "inst_check.m"
                                    check_hlds__inst_check__PossibleTypesSet_39 = mercury__set__intersect_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_111_111, check_hlds__inst_check__PossibleTypeSets_38);
                                  }
#line 322 "inst_check.m"
                                  {
#line 322 "inst_check.m"
                                    check_hlds__inst_check__PossibleTypes_40 = mercury__set__to_sorted_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_111_111, check_hlds__inst_check__PossibleTypesSet_39);
                                  }
#line 323 "inst_check.m"
                                  {
#line 323 "inst_check.m"
                                    check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__BoundInsts_23, check_hlds__inst_check__PossibleTypes_40, check_hlds__inst_check__PossibleTypeSets_38, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54, check_hlds__inst_check__STATE_VARIABLE_Specs_55);
                                  }
#line 325 "inst_check.m"
                                  {
#line 325 "inst_check.m"
                                    mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_111_111, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[2], check_hlds__inst_check__PossibleTypes_40, &check_hlds__inst_check__PossibleTypeCtors_41);
                                  }
#line 327 "inst_check.m"
                                  {
#line 327 "inst_check.m"
                                    check_hlds__inst_check__IFTC_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 327 "inst_check.m"
                                    MR_hl_field(MR_mktag(2), check_hlds__inst_check__IFTC_106, 0) = ((MR_Box) (check_hlds__inst_check__PossibleTypeCtors_41));
#line 327 "inst_check.m"
                                  }
#line 328 "inst_check.m"
                                  {
#line 328 "inst_check.m"
                                    MR_Word base;
#line 328 "inst_check.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 328 "inst_check.m"
                                    *check_hlds__inst_check__InstDefn_12 = base;
#line 328 "inst_check.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__InstVarSet_14));
#line 328 "inst_check.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__InstParams_15));
#line 328 "inst_check.m"
                                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_check__InstBody_16));
#line 328 "inst_check.m"
                                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__inst_check__IFTC_106));
#line 328 "inst_check.m"
                                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__inst_check__Context_18));
#line 328 "inst_check.m"
                                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__inst_check__Status_19));
#line 328 "inst_check.m"
                                  }
#line 320 "inst_check.m"
                                }
#line 319 "inst_check.m"
                                break;
#line 319 "inst_check.m"
                              case (MR_Integer) 0:
#line 317 "inst_check.m"
                                {
#line 318 "inst_check.m"
                                  *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
#line 317 "inst_check.m"
                                  *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
#line 317 "inst_check.m"
                                }
#line 319 "inst_check.m"
                                break;
#line 319 "inst_check.m"
                            }
#line 312 "inst_check.m"
                          }
#line 311 "inst_check.m"
                          break;
#line 311 "inst_check.m"
                        case (MR_Integer) 2:
#line 337 "inst_check.m"
                          {
#line 339 "inst_check.m"
                            {
#line 339 "inst_check.m"
                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "bound, IFTC0 = iftc_applicable_error");
#line 339 "inst_check.m"
                              return;
                            }
#line 337 "inst_check.m"
                          }
#line 311 "inst_check.m"
                          break;
#line 311 "inst_check.m"
                      }
#line 311 "inst_check.m"
                      break;
#line 311 "inst_check.m"
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
#line 9687 "check_hlds.inst_check.c"
                        if (check_hlds__inst_check__succeeded)
#line 9689 "check_hlds.inst_check.c"
                          {
#line 9691 "check_hlds.inst_check.c"
                            MR_Word check_hlds__inst_check__ForTypeKind_33;
#line 9693 "check_hlds.inst_check.c"
                            MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_34;
#line 9695 "check_hlds.inst_check.c"
                            MR_Word check_hlds__inst_check__MismatchConsIdStrs_35;
#line 9697 "check_hlds.inst_check.c"
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
#line 302 "inst_check.m"
                            {
#line 302 "inst_check.m"
                              check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_33, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_34);
                            }
#line 304 "inst_check.m"
                            {
#line 304 "inst_check.m"
                              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_34, &check_hlds__inst_check__MismatchConsIdStrs_35);
                            }
#line 305 "inst_check.m"
                            {
#line 305 "inst_check.m"
                              check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_33, check_hlds__inst_check__MismatchConsIdStrs_35, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_36);
                            }
#line 307 "inst_check.m"
                            {
#line 307 "inst_check.m"
                              *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_36, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                            }
#line 9729 "check_hlds.inst_check.c"
                          }
#line 9731 "check_hlds.inst_check.c"
                        else
#line 9733 "check_hlds.inst_check.c"
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
#line 256 "inst_check.m"
                            if (check_hlds__inst_check__succeeded)
#line 257 "inst_check.m"
                              check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
#line 9795 "check_hlds.inst_check.c"
                            if (check_hlds__inst_check__succeeded)
#line 9797 "check_hlds.inst_check.c"
                              {
#line 9799 "check_hlds.inst_check.c"
                                MR_Word check_hlds__inst_check__ForTypeKind_128;
#line 9801 "check_hlds.inst_check.c"
                                MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_129;
#line 9803 "check_hlds.inst_check.c"
                                MR_Word check_hlds__inst_check__MismatchConsIdStrs_130;
#line 9805 "check_hlds.inst_check.c"
                                MR_Word check_hlds__inst_check__MatchSpecs_131;
#line 259 "inst_check.m"
                                MR_Word check_hlds__inst_check__ForTypeCtor_142;

#line 259 "inst_check.m"
                                {
#line 259 "inst_check.m"
                                  check_hlds__inst_check__ForTypeCtor_142 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
                                }
#line 260 "inst_check.m"
                                check_hlds__inst_check__ForTypeKind_128 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 302 "inst_check.m"
                                {
#line 302 "inst_check.m"
                                  check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_128, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_129);
                                }
#line 304 "inst_check.m"
                                {
#line 304 "inst_check.m"
                                  mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_129, &check_hlds__inst_check__MismatchConsIdStrs_130);
                                }
#line 305 "inst_check.m"
                                {
#line 305 "inst_check.m"
                                  check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_128, check_hlds__inst_check__MismatchConsIdStrs_130, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_131);
                                }
#line 307 "inst_check.m"
                                {
#line 307 "inst_check.m"
                                  *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_131, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                                }
#line 9837 "check_hlds.inst_check.c"
                              }
#line 9839 "check_hlds.inst_check.c"
                            else
#line 9841 "check_hlds.inst_check.c"
                              {
#line 265 "inst_check.m"
                                MR_String check_hlds__inst_check__CName_29;

#line 269 "inst_check.m"
                                check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
#line 265 "inst_check.m"
                                if (check_hlds__inst_check__succeeded)
#line 265 "inst_check.m"
                                  {
#line 263 "inst_check.m"
                                    if (((MR_tag((MR_Word) check_hlds__inst_check__ForTypeCtorName_25)) == (MR_mktag((MR_Integer) 1))))
#line 263 "inst_check.m"
                                      {
#line 263 "inst_check.m"
                                        MR_String check_hlds__inst_check__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 1)));
#line 263 "inst_check.m"
                                        MR_Word check_hlds__inst_check__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));
#line 263 "inst_check.m"
                                        MR_String check_hlds__inst_check__V_124_124;

#line 263 "inst_check.m"
                                        check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__V_121_121)) == (MR_mktag((MR_Integer) 0)));
#line 263 "inst_check.m"
                                        if (check_hlds__inst_check__succeeded)
#line 263 "inst_check.m"
                                          {
#line 263 "inst_check.m"
                                            check_hlds__inst_check__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_121_121, (MR_Integer) 0)));
#line 263 "inst_check.m"
                                            if ((strcmp(check_hlds__inst_check__V_124_124, (MR_String) "") == 0))
#line 263 "inst_check.m"
                                              {
#line 263 "inst_check.m"
                                                check_hlds__inst_check__CName_29 = check_hlds__inst_check__V_120_120;
#line 263 "inst_check.m"
                                                check_hlds__inst_check__succeeded = MR_TRUE;
#line 263 "inst_check.m"
                                              }
#line 263 "inst_check.m"
                                            else
#line 263 "inst_check.m"
                                            if ((strcmp(check_hlds__inst_check__V_124_124, (MR_String) "char") == 0))
#line 264 "inst_check.m"
                                              {
#line 264 "inst_check.m"
                                                check_hlds__inst_check__CName_29 = check_hlds__inst_check__V_120_120;
#line 264 "inst_check.m"
                                                check_hlds__inst_check__succeeded = MR_TRUE;
#line 264 "inst_check.m"
                                              }
#line 263 "inst_check.m"
                                            else
#line 263 "inst_check.m"
                                              check_hlds__inst_check__succeeded = MR_FALSE;
#line 263 "inst_check.m"
                                          }
#line 263 "inst_check.m"
                                      }
#line 263 "inst_check.m"
                                    else
#line 262 "inst_check.m"
                                      {
#line 262 "inst_check.m"
                                        check_hlds__inst_check__CName_29 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));
#line 262 "inst_check.m"
                                        check_hlds__inst_check__succeeded = MR_TRUE;
#line 262 "inst_check.m"
                                      }
#line 265 "inst_check.m"
                                    if (check_hlds__inst_check__succeeded)
#line 267 "inst_check.m"
                                      {
#line 267 "inst_check.m"
                                        if ((strcmp(check_hlds__inst_check__CName_29, (MR_String) "char") == 0))
#line 266 "inst_check.m"
                                          check_hlds__inst_check__succeeded = MR_TRUE;
#line 267 "inst_check.m"
                                        else
#line 267 "inst_check.m"
                                        if ((strcmp(check_hlds__inst_check__CName_29, (MR_String) "character") == 0))
#line 267 "inst_check.m"
                                          check_hlds__inst_check__succeeded = MR_TRUE;
#line 267 "inst_check.m"
                                        else
#line 267 "inst_check.m"
                                          check_hlds__inst_check__succeeded = MR_FALSE;
#line 267 "inst_check.m"
                                      }
#line 265 "inst_check.m"
                                  }
#line 9933 "check_hlds.inst_check.c"
                                if (check_hlds__inst_check__succeeded)
#line 9935 "check_hlds.inst_check.c"
                                  {
#line 9937 "check_hlds.inst_check.c"
                                    MR_Word check_hlds__inst_check__ForTypeKind_151;
#line 9939 "check_hlds.inst_check.c"
                                    MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_152;
#line 9941 "check_hlds.inst_check.c"
                                    MR_Word check_hlds__inst_check__MismatchConsIdStrs_153;
#line 9943 "check_hlds.inst_check.c"
                                    MR_Word check_hlds__inst_check__MatchSpecs_154;
#line 271 "inst_check.m"
                                    MR_Word check_hlds__inst_check__ForTypeCtor_172;

#line 271 "inst_check.m"
                                    {
#line 271 "inst_check.m"
                                      check_hlds__inst_check__ForTypeCtor_172 = parse_tree__builtin_lib_types__char_type_ctor_0_f_0();
                                    }
#line 272 "inst_check.m"
                                    check_hlds__inst_check__ForTypeKind_151 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 302 "inst_check.m"
                                    {
#line 302 "inst_check.m"
                                      check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_151, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_152);
                                    }
#line 304 "inst_check.m"
                                    {
#line 304 "inst_check.m"
                                      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_152, &check_hlds__inst_check__MismatchConsIdStrs_153);
                                    }
#line 305 "inst_check.m"
                                    {
#line 305 "inst_check.m"
                                      check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_151, check_hlds__inst_check__MismatchConsIdStrs_153, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_154);
                                    }
#line 307 "inst_check.m"
                                    {
#line 307 "inst_check.m"
                                      *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_154, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                                    }
#line 9975 "check_hlds.inst_check.c"
                                  }
#line 9977 "check_hlds.inst_check.c"
                                else
#line 9979 "check_hlds.inst_check.c"
                                  {
#line 275 "inst_check.m"
                                    if (((MR_tag((MR_Word) check_hlds__inst_check__ForTypeCtorName_25)) == (MR_mktag((MR_Integer) 1))))
#line 275 "inst_check.m"
                                      {
#line 275 "inst_check.m"
                                        MR_String check_hlds__inst_check__V_122_122 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 1)));
#line 275 "inst_check.m"
                                        MR_Word check_hlds__inst_check__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));
#line 275 "inst_check.m"
                                        MR_String check_hlds__inst_check__V_127_127;

#line 275 "inst_check.m"
                                        check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__V_122_122, (MR_String) "string") == 0);
#line 275 "inst_check.m"
                                        if (check_hlds__inst_check__succeeded)
#line 275 "inst_check.m"
                                          {
#line 275 "inst_check.m"
                                            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__V_123_123)) == (MR_mktag((MR_Integer) 0)));
#line 275 "inst_check.m"
                                            if (check_hlds__inst_check__succeeded)
#line 275 "inst_check.m"
                                              {
#line 275 "inst_check.m"
                                                check_hlds__inst_check__V_127_127 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_123_123, (MR_Integer) 0)));
#line 275 "inst_check.m"
                                                if ((strcmp(check_hlds__inst_check__V_127_127, (MR_String) "") == 0))
#line 275 "inst_check.m"
                                                  check_hlds__inst_check__succeeded = MR_TRUE;
#line 275 "inst_check.m"
                                                else
#line 275 "inst_check.m"
                                                if ((strcmp(check_hlds__inst_check__V_127_127, (MR_String) "string") == 0))
#line 276 "inst_check.m"
                                                  check_hlds__inst_check__succeeded = MR_TRUE;
#line 275 "inst_check.m"
                                                else
#line 275 "inst_check.m"
                                                  check_hlds__inst_check__succeeded = MR_FALSE;
#line 275 "inst_check.m"
                                              }
#line 275 "inst_check.m"
                                          }
#line 275 "inst_check.m"
                                      }
#line 275 "inst_check.m"
                                    else
#line 274 "inst_check.m"
                                      {
#line 274 "inst_check.m"
                                        MR_String check_hlds__inst_check__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));

#line 274 "inst_check.m"
                                        check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__V_101_101, (MR_String) "string") == 0);
#line 274 "inst_check.m"
                                      }
#line 278 "inst_check.m"
                                    if (check_hlds__inst_check__succeeded)
#line 279 "inst_check.m"
                                      check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
#line 10041 "check_hlds.inst_check.c"
                                    if (check_hlds__inst_check__succeeded)
#line 10043 "check_hlds.inst_check.c"
                                      {
#line 10045 "check_hlds.inst_check.c"
                                        MR_Word check_hlds__inst_check__ForTypeKind_174;
#line 10047 "check_hlds.inst_check.c"
                                        MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_175;
#line 10049 "check_hlds.inst_check.c"
                                        MR_Word check_hlds__inst_check__MismatchConsIdStrs_176;
#line 10051 "check_hlds.inst_check.c"
                                        MR_Word check_hlds__inst_check__MatchSpecs_177;
#line 281 "inst_check.m"
                                        MR_Word check_hlds__inst_check__ForTypeCtor_195;

#line 281 "inst_check.m"
                                        {
#line 281 "inst_check.m"
                                          check_hlds__inst_check__ForTypeCtor_195 = parse_tree__builtin_lib_types__string_type_ctor_0_f_0();
                                        }
#line 282 "inst_check.m"
                                        check_hlds__inst_check__ForTypeKind_174 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 302 "inst_check.m"
                                        {
#line 302 "inst_check.m"
                                          check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_174, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_175);
                                        }
#line 304 "inst_check.m"
                                        {
#line 304 "inst_check.m"
                                          mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_175, &check_hlds__inst_check__MismatchConsIdStrs_176);
                                        }
#line 305 "inst_check.m"
                                        {
#line 305 "inst_check.m"
                                          check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_174, check_hlds__inst_check__MismatchConsIdStrs_176, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_177);
                                        }
#line 307 "inst_check.m"
                                        {
#line 307 "inst_check.m"
                                          *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_177, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                                        }
#line 10083 "check_hlds.inst_check.c"
                                      }
#line 10085 "check_hlds.inst_check.c"
                                    else
#line 10087 "check_hlds.inst_check.c"
                                      {
#line 10089 "check_hlds.inst_check.c"
                                        MR_Word check_hlds__inst_check__ForTypeDefn_30;

#line 286 "inst_check.m"
                                        {
#line 286 "inst_check.m"
                                          check_hlds__inst_check__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__inst_check__TypeTable_8, check_hlds__inst_check__ForTypeCtor0_24, &check_hlds__inst_check__ForTypeDefn_30);
                                        }
#line 10097 "check_hlds.inst_check.c"
                                        if (check_hlds__inst_check__succeeded)
#line 10099 "check_hlds.inst_check.c"
                                          {
#line 10101 "check_hlds.inst_check.c"
                                            MR_Word check_hlds__inst_check__ForTypeKind_197;
#line 10103 "check_hlds.inst_check.c"
                                            MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_198;
#line 10105 "check_hlds.inst_check.c"
                                            MR_Word check_hlds__inst_check__MismatchConsIdStrs_199;
#line 10107 "check_hlds.inst_check.c"
                                            MR_Word check_hlds__inst_check__MatchSpecs_200;

#line 289 "inst_check.m"
                                            {
#line 289 "inst_check.m"
                                              check_hlds__inst_check__ForTypeKind_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "inst_check.m"
                                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeKind_197, 0) = ((MR_Box) (check_hlds__inst_check__ForTypeCtor0_24));
#line 289 "inst_check.m"
                                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeKind_197, 1) = ((MR_Box) (check_hlds__inst_check__ForTypeDefn_30));
#line 289 "inst_check.m"
                                            }
#line 302 "inst_check.m"
                                            {
#line 302 "inst_check.m"
                                              check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_197, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_198);
                                            }
#line 304 "inst_check.m"
                                            {
#line 304 "inst_check.m"
                                              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_198, &check_hlds__inst_check__MismatchConsIdStrs_199);
                                            }
#line 305 "inst_check.m"
                                            {
#line 305 "inst_check.m"
                                              check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_197, check_hlds__inst_check__MismatchConsIdStrs_199, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_200);
                                            }
#line 307 "inst_check.m"
                                            {
#line 307 "inst_check.m"
                                              *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_200, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                                            }
#line 10140 "check_hlds.inst_check.c"
                                          }
#line 10142 "check_hlds.inst_check.c"
                                        else
#line 10144 "check_hlds.inst_check.c"
                                          {
#line 297 "inst_check.m"
                                            {
#line 297 "inst_check.m"
                                              check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeCtor0_24, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54, check_hlds__inst_check__STATE_VARIABLE_Specs_55);
                                            }
#line 299 "inst_check.m"
                                            check_hlds__inst_check__IFTC_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10153 "check_hlds.inst_check.c"
                                          }
#line 10155 "check_hlds.inst_check.c"
                                      }
#line 10157 "check_hlds.inst_check.c"
                                  }
#line 10159 "check_hlds.inst_check.c"
                              }
#line 10161 "check_hlds.inst_check.c"
                          }
#line 309 "inst_check.m"
                        {
#line 309 "inst_check.m"
                          MR_Word base;
#line 309 "inst_check.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 309 "inst_check.m"
                          *check_hlds__inst_check__InstDefn_12 = base;
#line 309 "inst_check.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__InstVarSet_14));
#line 309 "inst_check.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__InstParams_15));
#line 309 "inst_check.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_check__InstBody_16));
#line 309 "inst_check.m"
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__inst_check__IFTC_32));
#line 309 "inst_check.m"
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__inst_check__Context_18));
#line 309 "inst_check.m"
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__inst_check__Status_19));
#line 309 "inst_check.m"
                        }
#line 239 "inst_check.m"
                      }
#line 311 "inst_check.m"
                      break;
#line 311 "inst_check.m"
                    case (MR_Integer) 2:
#line 332 "inst_check.m"
                      {
#line 334 "inst_check.m"
                        {
#line 334 "inst_check.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "bound, IFTC0 = iftc_applicable_known");
#line 334 "inst_check.m"
                          return;
                        }
#line 332 "inst_check.m"
                      }
#line 311 "inst_check.m"
                      break;
#line 311 "inst_check.m"
                  }
#line 237 "inst_check.m"
                }
#line 348 "inst_check.m"
                break;
#line 348 "inst_check.m"
              case (MR_Integer) 1:
#line 348 "inst_check.m"
              case (MR_Integer) 2:
#line 348 "inst_check.m"
              case (MR_Integer) 3:
#line 348 "inst_check.m"
              case (MR_Integer) 4:
#line 348 "inst_check.m"
              case (MR_Integer) 5:
#line 358 "inst_check.m"
                {
#line 358 "inst_check.m"
                  MR_Word check_hlds__inst_check__V_56_56;

#line 359 "inst_check.m"
                  {
#line 359 "inst_check.m"
                    check_hlds__inst_check__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 359 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1]));
#line 359 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1));
#line 359 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 359 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 3) = ((MR_Box) (check_hlds__inst_check__IFTC0_17));
#line 359 "inst_check.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_check__V_56_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "inst_check.m"
                  }
#line 359 "inst_check.m"
                  {
#line 359 "inst_check.m"
                    mercury__require__expect_4_p_0(check_hlds__inst_check__V_56_56, (MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "not bound, IFTC0 != iftc_not_applicable");
                  }
#line 361 "inst_check.m"
                  *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
#line 358 "inst_check.m"
                  *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
#line 358 "inst_check.m"
                }
#line 348 "inst_check.m"
                break;
#line 348 "inst_check.m"
            }
#line 348 "inst_check.m"
            break;
#line 348 "inst_check.m"
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
#line 10474 "check_hlds.inst_check.c"
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
#line 122 "inst_check.m"
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
#line 122 "inst_check.m"
            else
#line 122 "inst_check.m"
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
#line 10857 "check_hlds.inst_check.c"
    check_hlds__inst_check__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0;
#line 10859 "check_hlds.inst_check.c"
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
