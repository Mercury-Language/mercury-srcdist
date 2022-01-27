/*
** Automatically generated from `special_pred.m'
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


/* :- module hlds.special_pred. */
/* :- implementation. */

/*
INIT mercury__hlds__special_pred__init
ENDINIT
*/

#include "hlds.special_pred.mih"


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
#include "check_hlds.type_util.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 88 "special_pred.m"
struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s {
#line 88 "special_pred.m"
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__SpecialPredId_5;
#line 88 "special_pred.m"
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6;
#line 255 "special_pred.m"
  MR_bool hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded;
#line 263 "special_pred.m"
  jmp_buf hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0;
#line 263 "special_pred.m"
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13;
#line 263 "special_pred.m"
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14;
#line 265 "special_pred.m"
  MR_Box hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13;
#line 88 "special_pred.m"
};


#line 159 "hlds.special_pred.c"
static const MR_FA_TypeInfo_Struct2 hlds__special_pred__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 162 "hlds.special_pred.c"
static const MR_FA_TypeInfo_Struct2 hlds__special_pred__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 165 "hlds.special_pred.c"
static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_0_0_10001(
#line 168 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_1,
#line 170 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2);

#line 173 "hlds.special_pred.c"
static void MR_CALL 
hlds__special_pred____Compare____special_pred_0_0_10001(
#line 176 "hlds.special_pred.c"
  MR_Box * hlds__special_pred__wrapper_arg_1,
#line 178 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2,
#line 180 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_3);

#line 183 "hlds.special_pred.c"
static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_map_0_0_10001(
#line 186 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_1,
#line 188 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2);

#line 191 "hlds.special_pred.c"
static void MR_CALL 
hlds__special_pred____Compare____special_pred_map_0_0_10001(
#line 194 "hlds.special_pred.c"
  MR_Box * hlds__special_pred__wrapper_arg_1,
#line 196 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2,
#line 198 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_3);

#line 263 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(
#line 263 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg);

#line 265 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3(
#line 265 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg);

#line 263 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(
#line 263 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg);

#line 263 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(
#line 263 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg);


static /* final */ const MR_Box hlds__special_pred_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__special_pred_scalar_common_2[2][3];


#line 187 "special_pred.m"
/* sealed */ struct hlds__special_pred__vector_common_type_3_0_s {
#line 187 "special_pred.m"
  const MR_String hlds__special_pred__vector_common_type_3_0__vct_3_f_0;
#line 187 "special_pred.m"
};

static /* final */ const struct hlds__special_pred__vector_common_type_3_0_s hlds__special_pred_vector_common_3[14];



static /* final */ const MR_Box hlds__special_pred_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__special_pred_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__special_pred_scalar_common_1[2])))
  },
};

static /* final */ const MR_Box hlds__special_pred_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__special_pred_scalar_common_2[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};


static /* final */ const struct hlds__special_pred__vector_common_type_3_0_s hlds__special_pred_vector_common_3[14] = {
  /* row 0 */   {     (MR_String) "unification predicate" },
  /* row 1 */   {     (MR_String) "indexing predicate" },
  /* row 2 */   {     (MR_String) "comparison predicate" },
  /* row 3 */   {     (MR_String) "initialisation predicate" },
  /* row 4 */   {     (MR_String) "character" },
  /* row 5 */   {     (MR_String) "float" },
  /* row 6 */   {     (MR_String) "int" },
  /* row 7 */   {     (MR_String) "pred" },
  /* row 8 */   {     (MR_String) "string" },
  /* row 9 */   {     (MR_String) "character" },
  /* row 10 */   {     (MR_String) "float" },
  /* row 11 */   {     (MR_String) "int" },
  /* row 12 */   {     (MR_String) "pred" },
  /* row 13 */   {     (MR_String) "string" },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 308 "hlds.special_pred.c"
static const MR_FA_TypeInfo_Struct2 hlds__special_pred__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 317 "hlds.special_pred.c"
const MR_TypeCtorInfo_Struct hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__special_pred____Unify____special_pred_0_0_10001)),
  ((MR_Box) (hlds__special_pred____Compare____special_pred_0_0_10001)),
  (MR_String) "hlds.special_pred",
  (MR_String) "special_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__special_pred__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 334 "hlds.special_pred.c"
static const MR_FA_TypeInfo_Struct2 hlds__special_pred__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__special_pred__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 343 "hlds.special_pred.c"
const MR_TypeCtorInfo_Struct hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__special_pred____Unify____special_pred_map_0_0_10001)),
  ((MR_Box) (hlds__special_pred____Compare____special_pred_map_0_0_10001)),
  (MR_String) "hlds.special_pred",
  (MR_String) "special_pred_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__special_pred__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 360 "hlds.special_pred.c"
static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_0_0_10001(
#line 363 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_1,
#line 365 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2)
#line 367 "hlds.special_pred.c"
{
#line 369 "hlds.special_pred.c"
  {
#line 371 "hlds.special_pred.c"
    MR_bool hlds__special_pred__succeeded;

#line 374 "hlds.special_pred.c"
    {
#line 376 "hlds.special_pred.c"
      hlds__special_pred__succeeded = hlds__special_pred____Unify____special_pred_0_0(((MR_Word) hlds__special_pred__wrapper_arg_1), ((MR_Word) hlds__special_pred__wrapper_arg_2));
    }
#line 379 "hlds.special_pred.c"
    return hlds__special_pred__succeeded;
#line 381 "hlds.special_pred.c"
  }
#line 383 "hlds.special_pred.c"
}

#line 386 "hlds.special_pred.c"
static void MR_CALL 
hlds__special_pred____Compare____special_pred_0_0_10001(
#line 389 "hlds.special_pred.c"
  MR_Box * hlds__special_pred__wrapper_arg_1,
#line 391 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2,
#line 393 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_3)
#line 395 "hlds.special_pred.c"
{
#line 397 "hlds.special_pred.c"
  {
#line 399 "hlds.special_pred.c"
    MR_Word hlds__special_pred__conv0_HeadVar__1_1;

#line 402 "hlds.special_pred.c"
    {
#line 404 "hlds.special_pred.c"
      hlds__special_pred____Compare____special_pred_0_0(&hlds__special_pred__conv0_HeadVar__1_1, ((MR_Word) hlds__special_pred__wrapper_arg_2), ((MR_Word) hlds__special_pred__wrapper_arg_3));
    }
#line 407 "hlds.special_pred.c"
    *hlds__special_pred__wrapper_arg_1 = ((MR_Box) (hlds__special_pred__conv0_HeadVar__1_1));
#line 409 "hlds.special_pred.c"
  }
#line 411 "hlds.special_pred.c"
}

#line 414 "hlds.special_pred.c"
static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_map_0_0_10001(
#line 417 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_1,
#line 419 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2)
#line 421 "hlds.special_pred.c"
{
#line 423 "hlds.special_pred.c"
  {
#line 425 "hlds.special_pred.c"
    MR_bool hlds__special_pred__succeeded;

#line 428 "hlds.special_pred.c"
    {
#line 430 "hlds.special_pred.c"
      hlds__special_pred__succeeded = hlds__special_pred____Unify____special_pred_map_0_0(((MR_Word) hlds__special_pred__wrapper_arg_1), ((MR_Word) hlds__special_pred__wrapper_arg_2));
    }
#line 433 "hlds.special_pred.c"
    return hlds__special_pred__succeeded;
#line 435 "hlds.special_pred.c"
  }
#line 437 "hlds.special_pred.c"
}

#line 440 "hlds.special_pred.c"
static void MR_CALL 
hlds__special_pred____Compare____special_pred_map_0_0_10001(
#line 443 "hlds.special_pred.c"
  MR_Box * hlds__special_pred__wrapper_arg_1,
#line 445 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2,
#line 447 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_3)
#line 449 "hlds.special_pred.c"
{
#line 451 "hlds.special_pred.c"
  {
#line 453 "hlds.special_pred.c"
    MR_Word hlds__special_pred__conv0_HeadVar__1_1;

#line 456 "hlds.special_pred.c"
    {
#line 458 "hlds.special_pred.c"
      hlds__special_pred____Compare____special_pred_map_0_0(&hlds__special_pred__conv0_HeadVar__1_1, ((MR_Word) hlds__special_pred__wrapper_arg_2), ((MR_Word) hlds__special_pred__wrapper_arg_3));
    }
#line 461 "hlds.special_pred.c"
    *hlds__special_pred__wrapper_arg_1 = ((MR_Box) (hlds__special_pred__conv0_HeadVar__1_1));
#line 463 "hlds.special_pred.c"
  }
#line 465 "hlds.special_pred.c"
}

#line 49 "special_pred.m"
void MR_CALL 
hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_p_0(
#line 49 "special_pred.m"
  MR_Integer * hlds__special_pred__HeadVar__2_2)
#line 49 "special_pred.m"
{
#line 132 "special_pred.m"
  {
#line 132 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 132 "special_pred.m"
    *hlds__special_pred__HeadVar__2_2 = (MR_Integer) 0;
#line 132 "special_pred.m"
  }
#line 49 "special_pred.m"
}

#line 39 "special_pred.m"
MR_String MR_CALL 
hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_f_0(
#line 39 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPred_4)
#line 39 "special_pred.m"
{
#line 136 "special_pred.m"
  {
#line 136 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 136 "special_pred.m"
    MR_String hlds__special_pred__Name_7;

#line 136 "special_pred.m"
    {
#line 136 "special_pred.m"
      return hlds__special_pred__Name_7 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(hlds__special_pred__SpecialPred_4);
    }
#line 136 "special_pred.m"
    return hlds__special_pred__Name_7;
#line 136 "special_pred.m"
  }
#line 39 "special_pred.m"
}

#line 32 "special_pred.m"
void MR_CALL 
hlds__special_pred____Compare____special_pred_map_0_0(
#line 32 "special_pred.m"
  MR_Word * hlds__special_pred__HeadVar__1_1,
#line 32 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__2_2,
#line 32 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__3_3)
#line 32 "special_pred.m"
{
#line 32 "special_pred.m"
  {
#line 32 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 32 "special_pred.m"
    MR_Word hlds__special_pred__Cast_HeadVar1_4 = hlds__special_pred__HeadVar__2_2;
#line 32 "special_pred.m"
    MR_Word hlds__special_pred__Cast_HeadVar2_5 = hlds__special_pred__HeadVar__3_3;

#line 32 "special_pred.m"
    {
#line 32 "special_pred.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[1], hlds__special_pred__HeadVar__1_1, ((MR_Box) (hlds__special_pred__Cast_HeadVar1_4)), ((MR_Box) (hlds__special_pred__Cast_HeadVar2_5)));
#line 32 "special_pred.m"
      return;
    }
#line 32 "special_pred.m"
  }
#line 32 "special_pred.m"
}

#line 32 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_map_0_0(
#line 32 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_1,
#line 32 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__2_2)
#line 32 "special_pred.m"
{
#line 32 "special_pred.m"
  {
#line 32 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 32 "special_pred.m"
    MR_Word hlds__special_pred__Cast_HeadVar1_3 = hlds__special_pred__HeadVar__1_1;
#line 32 "special_pred.m"
    MR_Word hlds__special_pred__Cast_HeadVar2_4 = hlds__special_pred__HeadVar__2_2;

#line 32 "special_pred.m"
    {
#line 32 "special_pred.m"
      return hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__special_pred_scalar_common_2[1], ((MR_Box) (hlds__special_pred__Cast_HeadVar1_3)), ((MR_Box) (hlds__special_pred__Cast_HeadVar2_4)));
    }
#line 32 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 32 "special_pred.m"
  }
#line 32 "special_pred.m"
}

#line 34 "special_pred.m"
void MR_CALL 
hlds__special_pred____Compare____special_pred_0_0(
#line 34 "special_pred.m"
  MR_Word * hlds__special_pred__HeadVar__1_1,
#line 34 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__2_2,
#line 34 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__3_3)
#line 34 "special_pred.m"
{
#line 34 "special_pred.m"
  {
#line 34 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 34 "special_pred.m"
    MR_Word hlds__special_pred__Cast_HeadVar1_4 = hlds__special_pred__HeadVar__2_2;
#line 34 "special_pred.m"
    MR_Word hlds__special_pred__Cast_HeadVar2_5 = hlds__special_pred__HeadVar__3_3;

#line 34 "special_pred.m"
    {
#line 34 "special_pred.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], hlds__special_pred__HeadVar__1_1, ((MR_Box) (hlds__special_pred__Cast_HeadVar1_4)), ((MR_Box) (hlds__special_pred__Cast_HeadVar2_5)));
#line 34 "special_pred.m"
      return;
    }
#line 34 "special_pred.m"
  }
#line 34 "special_pred.m"
}

#line 34 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_0_0(
#line 34 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_1,
#line 34 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__2_2)
#line 34 "special_pred.m"
{
#line 34 "special_pred.m"
  {
#line 34 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 34 "special_pred.m"
    MR_Word hlds__special_pred__Cast_HeadVar1_3 = hlds__special_pred__HeadVar__1_1;
#line 34 "special_pred.m"
    MR_Word hlds__special_pred__Cast_HeadVar2_4 = hlds__special_pred__HeadVar__2_2;

#line 34 "special_pred.m"
    {
#line 34 "special_pred.m"
      return hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], ((MR_Box) (hlds__special_pred__Cast_HeadVar1_3)), ((MR_Box) (hlds__special_pred__Cast_HeadVar2_4)));
    }
#line 34 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 34 "special_pred.m"
  }
#line 34 "special_pred.m"
}

#line 107 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(
#line 107 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_2)
#line 107 "special_pred.m"
{
#line 303 "special_pred.m"
  {
#line 303 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 303 "special_pred.m"
    MR_Word hlds__special_pred__Globals_3;
#line 303 "special_pred.m"
    MR_Word hlds__special_pred__Target_4;

#line 304 "special_pred.m"
    {
#line 304 "special_pred.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_2, &hlds__special_pred__Globals_3);
    }
#line 305 "special_pred.m"
    {
#line 305 "special_pred.m"
      libs__globals__get_target_2_p_0(hlds__special_pred__Globals_3, &hlds__special_pred__Target_4);
    }
#line 307 "special_pred.m"
    if (((MR_Integer) 30 & (((MR_Integer) 1 << hlds__special_pred__Target_4))))
#line 307 "special_pred.m"
      {
#line 307 "special_pred.m"
        hlds__special_pred__succeeded = MR_TRUE;
#line 307 "special_pred.m"
      }
#line 307 "special_pred.m"
    else
#line 307 "special_pred.m"
      hlds__special_pred__succeeded = MR_FALSE;
#line 303 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 303 "special_pred.m"
  }
#line 107 "special_pred.m"
}

#line 101 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(
#line 101 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_3,
#line 101 "special_pred.m"
  MR_String * hlds__special_pred__TypeName_4)
#line 101 "special_pred.m"
{
#line 286 "special_pred.m"
  {
#line 286 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 286 "special_pred.m"
    MR_Word hlds__special_pred__Builtin_5;
#line 286 "special_pred.m"
    MR_Word hlds__special_pred__V_6_6;
#line 286 "special_pred.m"
    MR_Integer hlds__special_pred__V_7_7;
#line 286 "special_pred.m"
    MR_Word hlds__special_pred__V_8_8;
#line 290 "special_pred.m"
    MR_Integer hlds__special_pred__lo_0;
#line 290 "special_pred.m"
    MR_Integer hlds__special_pred__hi_1;
#line 290 "special_pred.m"
    MR_Integer hlds__special_pred__mid_2;
#line 290 "special_pred.m"
    MR_Integer hlds__special_pred__result_3;

#line 287 "special_pred.m"
    {
#line 287 "special_pred.m"
      hlds__special_pred__Builtin_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 288 "special_pred.m"
    hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_3, (MR_Integer) 0)));
#line 288 "special_pred.m"
    hlds__special_pred__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_3, (MR_Integer) 1)));
#line 288 "special_pred.m"
    hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 288 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 288 "special_pred.m"
      {
#line 288 "special_pred.m"
        hlds__special_pred__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_6_6, (MR_Integer) 0)));
#line 288 "special_pred.m"
        *hlds__special_pred__TypeName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_6_6, (MR_Integer) 1)));
#line 288 "special_pred.m"
        {
#line 288 "special_pred.m"
          hlds__special_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__special_pred__Builtin_5, hlds__special_pred__V_8_8);
        }
#line 286 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 286 "special_pred.m"
          {
#line 288 "special_pred.m"
            hlds__special_pred__succeeded = (hlds__special_pred__V_7_7 == (MR_Integer) 0);
#line 286 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 286 "special_pred.m"
              {
#line 290 "special_pred.m"
                /* binary string simple lookup switch */
#line 290 "special_pred.m"
                hlds__special_pred__lo_0 = (MR_Integer) 0;
#line 290 "special_pred.m"
                hlds__special_pred__hi_1 = (MR_Integer) 4;
#line 290 "special_pred.m"
                do
#line 290 "special_pred.m"
                  {
#line 290 "special_pred.m"
                    hlds__special_pred__mid_2 = (((hlds__special_pred__lo_0 + hlds__special_pred__hi_1)) / (MR_Integer) 2);
#line 290 "special_pred.m"
                    hlds__special_pred__result_3 = MR_strcmp(*hlds__special_pred__TypeName_4, ((&hlds__special_pred_vector_common_3[9 + hlds__special_pred__mid_2]))->hlds__special_pred__vector_common_type_3_0__vct_3_f_0);
#line 290 "special_pred.m"
                    if ((hlds__special_pred__result_3 == (MR_Integer) 0))
#line 290 "special_pred.m"
                      {
#line 290 "special_pred.m"
                        hlds__special_pred__succeeded = MR_TRUE;
#line 290 "special_pred.m"
                        /* jump out of search loop */
#line 290 "special_pred.m"
                        goto label_0;
#line 290 "special_pred.m"
                      }
#line 290 "special_pred.m"
                    else
#line 290 "special_pred.m"
                    if ((hlds__special_pred__result_3 < (MR_Integer) 0))
#line 290 "special_pred.m"
                      hlds__special_pred__hi_1 = (hlds__special_pred__mid_2 - (MR_Integer) 1);
#line 290 "special_pred.m"
                    else
#line 290 "special_pred.m"
                      hlds__special_pred__lo_0 = (hlds__special_pred__mid_2 + (MR_Integer) 1);
#line 290 "special_pred.m"
                  }
#line 290 "special_pred.m"
                while ((hlds__special_pred__lo_0 <= hlds__special_pred__hi_1));
#line 290 "special_pred.m"
                hlds__special_pred__succeeded = MR_FALSE;
#line 290 "special_pred.m"
              label_0:;
#line 286 "special_pred.m"
              }
#line 286 "special_pred.m"
          }
#line 288 "special_pred.m"
      }
#line 286 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 286 "special_pred.m"
  }
#line 101 "special_pred.m"
}

#line 95 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(
#line 95 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_4,
#line 95 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_5,
#line 95 "special_pred.m"
  MR_Word hlds__special_pred__Body_6)
#line 95 "special_pred.m"
{
#line 273 "special_pred.m"
  {
#line 273 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 283 "special_pred.m"
    MR_Word hlds__special_pred__V_11_11;
#line 283 "special_pred.m"
    MR_Word hlds__special_pred__V_27_27;

#line 275 "special_pred.m"
    {
#line 275 "special_pred.m"
      MR_Word hlds__special_pred__V_7_7;

#line 275 "special_pred.m"
      hlds__special_pred__succeeded = ((((MR_tag((MR_Word) hlds__special_pred__Body_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__Body_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 275 "special_pred.m"
      if (hlds__special_pred__succeeded)
#line 275 "special_pred.m"
        hlds__special_pred__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__Body_6, (MR_Integer) 1)));
#line 275 "special_pred.m"
      hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 275 "special_pred.m"
    }
#line 276 "special_pred.m"
    if (!(hlds__special_pred__succeeded))
#line 279 "special_pred.m"
      {
#line 279 "special_pred.m"
        MR_String hlds__special_pred__V_8_8;
#line 279 "special_pred.m"
        MR_Word hlds__special_pred__Globals_13;
#line 279 "special_pred.m"
        MR_Word hlds__special_pred__Target_14;
#line 279 "special_pred.m"
        MR_Word hlds__special_pred__Builtin_17;
#line 279 "special_pred.m"
        MR_Word hlds__special_pred__V_18_18;
#line 279 "special_pred.m"
        MR_Integer hlds__special_pred__V_19_19;
#line 279 "special_pred.m"
        MR_Word hlds__special_pred__V_20_20;
#line 290 "special_pred.m"
        MR_Integer hlds__special_pred__lo_0;
#line 290 "special_pred.m"
        MR_Integer hlds__special_pred__hi_1;
#line 290 "special_pred.m"
        MR_Integer hlds__special_pred__mid_2;
#line 290 "special_pred.m"
        MR_Integer hlds__special_pred__result_3;

#line 304 "special_pred.m"
        {
#line 304 "special_pred.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_4, &hlds__special_pred__Globals_13);
        }
#line 305 "special_pred.m"
        {
#line 305 "special_pred.m"
          libs__globals__get_target_2_p_0(hlds__special_pred__Globals_13, &hlds__special_pred__Target_14);
        }
#line 307 "special_pred.m"
        if (((MR_Integer) 30 & (((MR_Integer) 1 << hlds__special_pred__Target_14))))
#line 307 "special_pred.m"
          {
#line 307 "special_pred.m"
            hlds__special_pred__succeeded = MR_TRUE;
#line 307 "special_pred.m"
          }
#line 307 "special_pred.m"
        else
#line 307 "special_pred.m"
          hlds__special_pred__succeeded = MR_FALSE;
#line 279 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 279 "special_pred.m"
          {
#line 287 "special_pred.m"
            {
#line 287 "special_pred.m"
              hlds__special_pred__Builtin_17 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 288 "special_pred.m"
            hlds__special_pred__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_5, (MR_Integer) 0)));
#line 288 "special_pred.m"
            hlds__special_pred__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_5, (MR_Integer) 1)));
#line 288 "special_pred.m"
            hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 288 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 288 "special_pred.m"
              {
#line 288 "special_pred.m"
                hlds__special_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, (MR_Integer) 0)));
#line 288 "special_pred.m"
                hlds__special_pred__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, (MR_Integer) 1)));
#line 288 "special_pred.m"
                {
#line 288 "special_pred.m"
                  hlds__special_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__special_pred__Builtin_17, hlds__special_pred__V_20_20);
                }
#line 279 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 279 "special_pred.m"
                  {
#line 288 "special_pred.m"
                    hlds__special_pred__succeeded = (hlds__special_pred__V_19_19 == (MR_Integer) 0);
#line 279 "special_pred.m"
                    if (hlds__special_pred__succeeded)
#line 279 "special_pred.m"
                      {
#line 290 "special_pred.m"
                        /* binary string simple lookup switch */
#line 290 "special_pred.m"
                        hlds__special_pred__lo_0 = (MR_Integer) 0;
#line 290 "special_pred.m"
                        hlds__special_pred__hi_1 = (MR_Integer) 4;
#line 290 "special_pred.m"
                        do
#line 290 "special_pred.m"
                          {
#line 290 "special_pred.m"
                            hlds__special_pred__mid_2 = (((hlds__special_pred__lo_0 + hlds__special_pred__hi_1)) / (MR_Integer) 2);
#line 290 "special_pred.m"
                            hlds__special_pred__result_3 = MR_strcmp(hlds__special_pred__V_8_8, ((&hlds__special_pred_vector_common_3[4 + hlds__special_pred__mid_2]))->hlds__special_pred__vector_common_type_3_0__vct_3_f_0);
#line 290 "special_pred.m"
                            if ((hlds__special_pred__result_3 == (MR_Integer) 0))
#line 290 "special_pred.m"
                              {
#line 290 "special_pred.m"
                                hlds__special_pred__succeeded = MR_TRUE;
#line 290 "special_pred.m"
                                /* jump out of search loop */
#line 290 "special_pred.m"
                                goto label_0;
#line 290 "special_pred.m"
                              }
#line 290 "special_pred.m"
                            else
#line 290 "special_pred.m"
                            if ((hlds__special_pred__result_3 < (MR_Integer) 0))
#line 290 "special_pred.m"
                              hlds__special_pred__hi_1 = (hlds__special_pred__mid_2 - (MR_Integer) 1);
#line 290 "special_pred.m"
                            else
#line 290 "special_pred.m"
                              hlds__special_pred__lo_0 = (hlds__special_pred__mid_2 + (MR_Integer) 1);
#line 290 "special_pred.m"
                          }
#line 290 "special_pred.m"
                        while ((hlds__special_pred__lo_0 <= hlds__special_pred__hi_1));
#line 290 "special_pred.m"
                        hlds__special_pred__succeeded = MR_FALSE;
#line 290 "special_pred.m"
                      label_0:;
#line 279 "special_pred.m"
                      }
#line 279 "special_pred.m"
                  }
#line 288 "special_pred.m"
              }
#line 279 "special_pred.m"
          }
#line 279 "special_pred.m"
      }
#line 273 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 273 "special_pred.m"
      {
#line 282 "special_pred.m"
        {
#line 282 "special_pred.m"
          hlds__special_pred__succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(hlds__special_pred__TypeCtor_5, hlds__special_pred__Body_6);
        }
#line 282 "special_pred.m"
        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 273 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 273 "special_pred.m"
          {
#line 283 "special_pred.m"
            {
#line 283 "special_pred.m"
              hlds__special_pred__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(hlds__special_pred__ModuleInfo_4, hlds__special_pred__Body_6, &hlds__special_pred__V_11_11);
            }
#line 283 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 283 "special_pred.m"
              {
#line 283 "special_pred.m"
                hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 283 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 283 "special_pred.m"
                  hlds__special_pred__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_11_11, (MR_Integer) 0)));
#line 283 "special_pred.m"
              }
#line 283 "special_pred.m"
            hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 273 "special_pred.m"
          }
#line 273 "special_pred.m"
      }
#line 273 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 273 "special_pred.m"
  }
#line 95 "special_pred.m"
}

#line 263 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(
#line 263 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg)
#line 263 "special_pred.m"
{
#line 263 "special_pred.m"
  {
#line 263 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

#line 263 "special_pred.m"
    MR_builtin_longjmp((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0, 1);
#line 263 "special_pred.m"
  }
#line 263 "special_pred.m"
}

#line 265 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3(
#line 265 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg)
#line 265 "special_pred.m"
{
#line 265 "special_pred.m"
  {
#line 265 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

#line 265 "special_pred.m"
    (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13 = ((MR_Word) (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13);
#line 265 "special_pred.m"
    {
#line 265 "special_pred.m"
      hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(hlds__special_pred__env_ptr);
#line 265 "special_pred.m"
      return;
    }
#line 265 "special_pred.m"
  }
#line 265 "special_pred.m"
}

#line 263 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(
#line 263 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg)
#line 263 "special_pred.m"
{
#line 263 "special_pred.m"
  {
#line 263 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

#line 263 "special_pred.m"
    {
#line 266 "special_pred.m"
      MR_Word hlds__special_pred__V_15_15;
#line 266 "special_pred.m"
      MR_Word hlds__special_pred__V_16_16;
#line 266 "special_pred.m"
      MR_Word hlds__special_pred__V_17_17;
#line 266 "special_pred.m"
      MR_Integer hlds__special_pred__V_18_18;
#line 266 "special_pred.m"
      MR_Word hlds__special_pred__V_19_19;
#line 267 "special_pred.m"
      MR_Word hlds__special_pred__V_20_20;
#line 267 "special_pred.m"
      MR_Word hlds__special_pred__V_21_21;

#line 266 "special_pred.m"
      (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 0)));
#line 266 "special_pred.m"
      hlds__special_pred__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 1)));
#line 266 "special_pred.m"
      hlds__special_pred__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 2)));
#line 266 "special_pred.m"
      hlds__special_pred__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 3)));
#line 266 "special_pred.m"
      hlds__special_pred__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 4)));
#line 266 "special_pred.m"
      hlds__special_pred__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 5)));
#line 267 "special_pred.m"
      (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 267 "special_pred.m"
      if ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 267 "special_pred.m"
        {
#line 267 "special_pred.m"
          {
#line 267 "special_pred.m"
            hlds__special_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14, (MR_Integer) 0)));
#line 267 "special_pred.m"
            hlds__special_pred__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14, (MR_Integer) 1)));
#line 267 "special_pred.m"
          }
#line 267 "special_pred.m"
          {
#line 267 "special_pred.m"
            hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(hlds__special_pred__env_ptr);
#line 267 "special_pred.m"
            return;
          }
#line 267 "special_pred.m"
        }
#line 263 "special_pred.m"
    }
#line 263 "special_pred.m"
  }
#line 263 "special_pred.m"
}

#line 263 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(
#line 263 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg)
#line 263 "special_pred.m"
{
#line 263 "special_pred.m"
  {
#line 263 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

#line 263 "special_pred.m"
    if (MR_builtin_setjmp((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0) == 0)
#line 263 "special_pred.m"
      {
#line 263 "special_pred.m"
        {
#line 263 "special_pred.m"
          MR_Word hlds__special_pred__TypeCtorInfo_32_32;
#line 263 "special_pred.m"
          MR_Word hlds__special_pred__Ctors_12;
#line 264 "special_pred.m"
          MR_Word hlds__special_pred__V_24_24;
#line 264 "special_pred.m"
          MR_Word hlds__special_pred__V_25_25;
#line 264 "special_pred.m"
          MR_Word hlds__special_pred__V_26_26;
#line 264 "special_pred.m"
          MR_Word hlds__special_pred__V_27_27;
#line 264 "special_pred.m"
          MR_Word hlds__special_pred__V_28_28;
#line 264 "special_pred.m"
          MR_Word hlds__special_pred__V_29_29;
#line 264 "special_pred.m"
          MR_Word hlds__special_pred__V_30_30;
#line 264 "special_pred.m"
          MR_Word hlds__special_pred__V_31_31;

#line 263 "special_pred.m"
          (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__SpecialPredId_5 == (MR_Integer) 3);
#line 263 "special_pred.m"
          (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = !((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded);
#line 263 "special_pred.m"
          if ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 263 "special_pred.m"
            {
#line 264 "special_pred.m"
              (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6)) == (MR_mktag((MR_Integer) 1)));
#line 264 "special_pred.m"
              if ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 264 "special_pred.m"
                {
#line 264 "special_pred.m"
                  {
#line 264 "special_pred.m"
                    hlds__special_pred__Ctors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6, (MR_Integer) 0)));
#line 264 "special_pred.m"
                    hlds__special_pred__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6, (MR_Integer) 1)));
#line 264 "special_pred.m"
                    hlds__special_pred__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6, (MR_Integer) 2)));
#line 264 "special_pred.m"
                    hlds__special_pred__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6, (MR_Integer) 3)));
#line 264 "special_pred.m"
                    hlds__special_pred__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6, (MR_Integer) 4)));
#line 264 "special_pred.m"
                    hlds__special_pred__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6, (MR_Integer) 5)));
#line 264 "special_pred.m"
                    hlds__special_pred__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 264 "special_pred.m"
                    hlds__special_pred__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 264 "special_pred.m"
                    hlds__special_pred__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6, (MR_Integer) 7)));
#line 264 "special_pred.m"
                  }
#line 263 "special_pred.m"
                  {
#line 1217 "hlds.special_pred.c"
                    hlds__special_pred__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 265 "special_pred.m"
                    {
#line 265 "special_pred.m"
                      mercury__list__member_2_p_1(hlds__special_pred__TypeCtorInfo_32_32, &(hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13, hlds__special_pred__Ctors_12, hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3, hlds__special_pred__env_ptr);
                    }
#line 263 "special_pred.m"
                  }
#line 264 "special_pred.m"
                }
#line 263 "special_pred.m"
            }
#line 263 "special_pred.m"
        }
#line 263 "special_pred.m"
        (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
#line 263 "special_pred.m"
      }
#line 263 "special_pred.m"
    else
#line 263 "special_pred.m"
      (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_TRUE;
#line 263 "special_pred.m"
  }
#line 263 "special_pred.m"
}

#line 88 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(
#line 88 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_4,
#line 88 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPredId_5,
#line 88 "special_pred.m"
  MR_Word hlds__special_pred__Body_6)
#line 88 "special_pred.m"
{
#line 88 "special_pred.m"
  {
#line 88 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s hlds__special_pred__env;

#line 88 "special_pred.m"
    (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__SpecialPredId_5 = hlds__special_pred__SpecialPredId_5;
#line 88 "special_pred.m"
    (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6 = hlds__special_pred__Body_6;
#line 255 "special_pred.m"
#line 255 "special_pred.m"
    switch ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__SpecialPredId_5) {
#line 255 "special_pred.m"
      default:
#line 255 "special_pred.m"
        (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
#line 255 "special_pred.m"
        break;
#line 255 "special_pred.m"
      case (MR_Integer) 2:
#line 259 "special_pred.m"
        {
#line 259 "special_pred.m"
          MR_Word hlds__special_pred__UserCmp_10;
#line 259 "special_pred.m"
          MR_Word hlds__special_pred__V_22_22;
#line 261 "special_pred.m"
          MR_Word hlds__special_pred__V_9_9;
#line 261 "special_pred.m"
          MR_Word hlds__special_pred__V_11_11;

#line 260 "special_pred.m"
          {
#line 260 "special_pred.m"
            (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(hlds__special_pred__ModuleInfo_4, (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6, &hlds__special_pred__V_22_22);
          }
#line 259 "special_pred.m"
          if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 259 "special_pred.m"
            {
#line 261 "special_pred.m"
              (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 261 "special_pred.m"
              if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 261 "special_pred.m"
                {
#line 261 "special_pred.m"
                  hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_22_22, (MR_Integer) 0)));
#line 261 "special_pred.m"
                  hlds__special_pred__UserCmp_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_22_22, (MR_Integer) 1)));
#line 261 "special_pred.m"
                  (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__special_pred__UserCmp_10)) == (MR_mktag((MR_Integer) 1)));
#line 261 "special_pred.m"
                  if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 261 "special_pred.m"
                    hlds__special_pred__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__UserCmp_10, (MR_Integer) 0)));
#line 261 "special_pred.m"
                }
#line 259 "special_pred.m"
            }
#line 259 "special_pred.m"
        }
#line 255 "special_pred.m"
        break;
#line 255 "special_pred.m"
      case (MR_Integer) 3:
#line 270 "special_pred.m"
        {
#line 270 "special_pred.m"
          (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_is_solver_type_2_p_0(hlds__special_pred__ModuleInfo_4, (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6);
        }
#line 255 "special_pred.m"
        break;
#line 255 "special_pred.m"
      case (MR_Integer) 0:
#line 255 "special_pred.m"
        {
#line 255 "special_pred.m"
          MR_Word hlds__special_pred__V_33_33;
#line 256 "special_pred.m"
          MR_Word hlds__special_pred__V_36_36;
#line 256 "special_pred.m"
          MR_Word hlds__special_pred__V_37_37;

#line 256 "special_pred.m"
          {
#line 256 "special_pred.m"
            (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(hlds__special_pred__ModuleInfo_4, (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Body_6, &hlds__special_pred__V_33_33);
          }
#line 255 "special_pred.m"
          if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 255 "special_pred.m"
            {
#line 256 "special_pred.m"
              (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 256 "special_pred.m"
              if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 256 "special_pred.m"
                {
#line 256 "special_pred.m"
                  hlds__special_pred__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_33_33, (MR_Integer) 0)));
#line 256 "special_pred.m"
                  hlds__special_pred__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_33_33, (MR_Integer) 1)));
#line 256 "special_pred.m"
                }
#line 255 "special_pred.m"
            }
#line 255 "special_pred.m"
        }
#line 255 "special_pred.m"
        break;
#line 255 "special_pred.m"
    }
#line 255 "special_pred.m"
    if (!((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded))
#line 263 "special_pred.m"
      {
#line 263 "special_pred.m"
        {
#line 263 "special_pred.m"
          hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(&hlds__special_pred__env);
        }
#line 263 "special_pred.m"
      }
#line 255 "special_pred.m"
    return (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded;
#line 88 "special_pred.m"
  }
#line 88 "special_pred.m"
}

#line 79 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__special_pred_is_generated_lazily_4_p_0(
#line 79 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_5,
#line 79 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_6,
#line 79 "special_pred.m"
  MR_Word hlds__special_pred__Body_7,
#line 79 "special_pred.m"
  MR_Word hlds__special_pred__Status_8)
#line 79 "special_pred.m"
{
#line 208 "special_pred.m"
  {
#line 208 "special_pred.m"
    MR_bool hlds__special_pred__succeeded = ((((MR_tag((MR_Word) hlds__special_pred__Body_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__Body_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 208 "special_pred.m"
    MR_Word hlds__special_pred__CtorCat_11;
#line 214 "special_pred.m"
    MR_Word hlds__special_pred__V_9_9;
#line 214 "special_pred.m"
    MR_Word hlds__special_pred__V_10_10;
#line 215 "special_pred.m"
    MR_Word hlds__special_pred__V_14_14;

#line 214 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 214 "special_pred.m"
      {
#line 214 "special_pred.m"
        hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__Body_7, (MR_Integer) 1)));
#line 214 "special_pred.m"
        hlds__special_pred__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__Body_7, (MR_Integer) 2)));
#line 214 "special_pred.m"
      }
#line 214 "special_pred.m"
    hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 208 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 208 "special_pred.m"
      {
#line 215 "special_pred.m"
        hlds__special_pred__succeeded = ((((MR_tag((MR_Word) hlds__special_pred__Body_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__Body_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 215 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 215 "special_pred.m"
          {
#line 215 "special_pred.m"
            hlds__special_pred__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__Body_7, (MR_Integer) 1)));
#line 215 "special_pred.m"
            hlds__special_pred__succeeded = (hlds__special_pred__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 215 "special_pred.m"
          }
#line 215 "special_pred.m"
        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 208 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 208 "special_pred.m"
          {
#line 217 "special_pred.m"
            {
#line 217 "special_pred.m"
              hlds__special_pred__CtorCat_11 = check_hlds__type_util__classify_type_ctor_2_f_0(hlds__special_pred__ModuleInfo_5, hlds__special_pred__TypeCtor_6);
            }
#line 219 "special_pred.m"
            hlds__special_pred__succeeded = (hlds__special_pred__CtorCat_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 220 "special_pred.m"
            if (!(hlds__special_pred__succeeded))
#line 224 "special_pred.m"
              {
#line 245 "special_pred.m"
                MR_Word hlds__special_pred__V_21_21;
#line 250 "special_pred.m"
                MR_Word hlds__special_pred__V_25_25;

#line 222 "special_pred.m"
                if (((MR_tag((MR_Word) hlds__special_pred__CtorCat_11)) == (MR_mktag((MR_Integer) 2))))
#line 222 "special_pred.m"
                  hlds__special_pred__succeeded = MR_TRUE;
#line 222 "special_pred.m"
                else
#line 222 "special_pred.m"
                if (((((MR_tag((MR_Word) hlds__special_pred__CtorCat_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__CtorCat_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 221 "special_pred.m"
                  hlds__special_pred__succeeded = MR_TRUE;
#line 222 "special_pred.m"
                else
#line 222 "special_pred.m"
                  hlds__special_pred__succeeded = MR_FALSE;
#line 222 "special_pred.m"
                if (!(hlds__special_pred__succeeded))
#line 223 "special_pred.m"
                  {
#line 223 "special_pred.m"
                    MR_Word hlds__special_pred__V_15_15;

#line 223 "special_pred.m"
                    {
#line 223 "special_pred.m"
                      hlds__special_pred__V_15_15 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(hlds__special_pred__CtorCat_11);
                    }
#line 223 "special_pred.m"
                    hlds__special_pred__succeeded = (hlds__special_pred__V_15_15 == (MR_Integer) 1);
#line 223 "special_pred.m"
                  }
#line 224 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 224 "special_pred.m"
                  {
#line 233 "special_pred.m"
                    {
#line 233 "special_pred.m"
                      MR_Word hlds__special_pred__V_24_24;

#line 233 "special_pred.m"
                      {
#line 233 "special_pred.m"
                        hlds__special_pred__V_24_24 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__special_pred__Status_8);
                      }
#line 233 "special_pred.m"
                      hlds__special_pred__succeeded = (hlds__special_pred__V_24_24 == (MR_Integer) 0);
#line 233 "special_pred.m"
                    }
#line 234 "special_pred.m"
                    if (!(hlds__special_pred__succeeded))
#line 235 "special_pred.m"
                      {
#line 235 "special_pred.m"
                        MR_Word hlds__special_pred__Globals_20;

#line 235 "special_pred.m"
                        {
#line 235 "special_pred.m"
                          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_5, &hlds__special_pred__Globals_20);
                        }
#line 236 "special_pred.m"
                        {
#line 236 "special_pred.m"
                          hlds__special_pred__succeeded = libs__globals__lookup_bool_option_3_p_1(hlds__special_pred__Globals_20, (MR_Integer) 279, (MR_Integer) 0);
                        }
#line 235 "special_pred.m"
                      }
#line 224 "special_pred.m"
                    if (hlds__special_pred__succeeded)
#line 224 "special_pred.m"
                      {
#line 245 "special_pred.m"
                        hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__Body_7)) == (MR_mktag((MR_Integer) 0)));
#line 245 "special_pred.m"
                        if (hlds__special_pred__succeeded)
#line 245 "special_pred.m"
                          hlds__special_pred__V_21_21 = (MR_Word) MR_body(((MR_Word) hlds__special_pred__Body_7), (MR_Integer) 0);
#line 245 "special_pred.m"
                        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 224 "special_pred.m"
                        if (hlds__special_pred__succeeded)
#line 224 "special_pred.m"
                          {
#line 250 "special_pred.m"
                            hlds__special_pred__V_25_25 = (MR_Integer) 0;
#line 250 "special_pred.m"
                            {
#line 250 "special_pred.m"
                              hlds__special_pred__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(hlds__special_pred__ModuleInfo_5, hlds__special_pred__V_25_25, hlds__special_pred__Body_7);
                            }
#line 250 "special_pred.m"
                            hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 224 "special_pred.m"
                          }
#line 224 "special_pred.m"
                      }
#line 224 "special_pred.m"
                  }
#line 224 "special_pred.m"
              }
#line 208 "special_pred.m"
          }
#line 208 "special_pred.m"
      }
#line 208 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 208 "special_pred.m"
  }
#line 79 "special_pred.m"
}

#line 76 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__special_pred_is_generated_lazily_2_p_0(
#line 76 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_3,
#line 76 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_4)
#line 76 "special_pred.m"
{
#line 192 "special_pred.m"
  {
#line 192 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 192 "special_pred.m"
    MR_Word hlds__special_pred__CtorCat_5;

#line 193 "special_pred.m"
    {
#line 193 "special_pred.m"
      hlds__special_pred__CtorCat_5 = check_hlds__type_util__classify_type_ctor_2_f_0(hlds__special_pred__ModuleInfo_3, hlds__special_pred__TypeCtor_4);
    }
#line 195 "special_pred.m"
    hlds__special_pred__succeeded = (hlds__special_pred__CtorCat_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 196 "special_pred.m"
    if (!(hlds__special_pred__succeeded))
#line 200 "special_pred.m"
      {
#line 200 "special_pred.m"
        MR_Word hlds__special_pred__TypeTable_8;
#line 200 "special_pred.m"
        MR_Word hlds__special_pred__TypeDefn_9;
#line 200 "special_pred.m"
        MR_Word hlds__special_pred__Body_10;
#line 200 "special_pred.m"
        MR_Word hlds__special_pred__Status_11;
#line 245 "special_pred.m"
        MR_Word hlds__special_pred__V_18_18;
#line 250 "special_pred.m"
        MR_Word hlds__special_pred__V_22_22;

#line 198 "special_pred.m"
        if (((MR_tag((MR_Word) hlds__special_pred__CtorCat_5)) == (MR_mktag((MR_Integer) 2))))
#line 198 "special_pred.m"
          hlds__special_pred__succeeded = MR_TRUE;
#line 198 "special_pred.m"
        else
#line 198 "special_pred.m"
        if (((((MR_tag((MR_Word) hlds__special_pred__CtorCat_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__CtorCat_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 197 "special_pred.m"
          hlds__special_pred__succeeded = MR_TRUE;
#line 198 "special_pred.m"
        else
#line 198 "special_pred.m"
          hlds__special_pred__succeeded = MR_FALSE;
#line 198 "special_pred.m"
        if (!(hlds__special_pred__succeeded))
#line 199 "special_pred.m"
          {
#line 199 "special_pred.m"
            MR_Word hlds__special_pred__V_12_12;

#line 199 "special_pred.m"
            {
#line 199 "special_pred.m"
              hlds__special_pred__V_12_12 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(hlds__special_pred__CtorCat_5);
            }
#line 199 "special_pred.m"
            hlds__special_pred__succeeded = (hlds__special_pred__V_12_12 == (MR_Integer) 1);
#line 199 "special_pred.m"
          }
#line 200 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 200 "special_pred.m"
          {
#line 201 "special_pred.m"
            {
#line 201 "special_pred.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__special_pred__ModuleInfo_3, &hlds__special_pred__TypeTable_8);
            }
#line 202 "special_pred.m"
            {
#line 202 "special_pred.m"
              hlds__special_pred__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__special_pred__TypeTable_8, hlds__special_pred__TypeCtor_4, &hlds__special_pred__TypeDefn_9);
            }
#line 200 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 200 "special_pred.m"
              {
#line 203 "special_pred.m"
                {
#line 203 "special_pred.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(hlds__special_pred__TypeDefn_9, &hlds__special_pred__Body_10);
                }
#line 204 "special_pred.m"
                {
#line 204 "special_pred.m"
                  hlds__hlds_data__get_type_defn_status_2_p_0(hlds__special_pred__TypeDefn_9, &hlds__special_pred__Status_11);
                }
#line 233 "special_pred.m"
                {
#line 233 "special_pred.m"
                  MR_Word hlds__special_pred__V_21_21;

#line 233 "special_pred.m"
                  {
#line 233 "special_pred.m"
                    hlds__special_pred__V_21_21 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__special_pred__Status_11);
                  }
#line 233 "special_pred.m"
                  hlds__special_pred__succeeded = (hlds__special_pred__V_21_21 == (MR_Integer) 0);
#line 233 "special_pred.m"
                }
#line 234 "special_pred.m"
                if (!(hlds__special_pred__succeeded))
#line 235 "special_pred.m"
                  {
#line 235 "special_pred.m"
                    MR_Word hlds__special_pred__Globals_17;

#line 235 "special_pred.m"
                    {
#line 235 "special_pred.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_3, &hlds__special_pred__Globals_17);
                    }
#line 236 "special_pred.m"
                    {
#line 236 "special_pred.m"
                      hlds__special_pred__succeeded = libs__globals__lookup_bool_option_3_p_1(hlds__special_pred__Globals_17, (MR_Integer) 279, (MR_Integer) 0);
                    }
#line 235 "special_pred.m"
                  }
#line 200 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 200 "special_pred.m"
                  {
#line 245 "special_pred.m"
                    hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__Body_10)) == (MR_mktag((MR_Integer) 0)));
#line 245 "special_pred.m"
                    if (hlds__special_pred__succeeded)
#line 245 "special_pred.m"
                      hlds__special_pred__V_18_18 = (MR_Word) MR_body(((MR_Word) hlds__special_pred__Body_10), (MR_Integer) 0);
#line 245 "special_pred.m"
                    hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 200 "special_pred.m"
                    if (hlds__special_pred__succeeded)
#line 200 "special_pred.m"
                      {
#line 250 "special_pred.m"
                        hlds__special_pred__V_22_22 = (MR_Integer) 0;
#line 250 "special_pred.m"
                        {
#line 250 "special_pred.m"
                          hlds__special_pred__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(hlds__special_pred__ModuleInfo_3, hlds__special_pred__V_22_22, hlds__special_pred__Body_10);
                        }
#line 250 "special_pred.m"
                        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 200 "special_pred.m"
                      }
#line 200 "special_pred.m"
                  }
#line 200 "special_pred.m"
              }
#line 200 "special_pred.m"
          }
#line 200 "special_pred.m"
      }
#line 192 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 192 "special_pred.m"
  }
#line 76 "special_pred.m"
}

#line 69 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_description_2_p_0(
#line 69 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_1,
#line 69 "special_pred.m"
  MR_String * hlds__special_pred__HeadVar__2_2)
#line 69 "special_pred.m"
{
#line 187 "special_pred.m"
  {
#line 187 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 187 "special_pred.m"
    *hlds__special_pred__HeadVar__2_2 = ((&hlds__special_pred_vector_common_3[0 + hlds__special_pred__HeadVar__1_1]))->hlds__special_pred__vector_common_type_3_0__vct_3_f_0;
#line 187 "special_pred.m"
  }
#line 69 "special_pred.m"
}

#line 66 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_get_type_det_3_p_0(
#line 66 "special_pred.m"
  MR_Word hlds__special_pred__SpecialId_4,
#line 66 "special_pred.m"
  MR_Word hlds__special_pred__ArgTypes_5,
#line 66 "special_pred.m"
  MR_Word * hlds__special_pred__Type_6)
#line 66 "special_pred.m"
{
#line 183 "special_pred.m"
  {
#line 183 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 183 "special_pred.m"
    MR_Word hlds__special_pred__TypePrime_7;

#line 181 "special_pred.m"
    {
#line 181 "special_pred.m"
      hlds__special_pred__succeeded = hlds__special_pred__special_pred_get_type_3_p_0(hlds__special_pred__SpecialId_4, hlds__special_pred__ArgTypes_5, &hlds__special_pred__TypePrime_7);
    }
#line 183 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 182 "special_pred.m"
      *hlds__special_pred__Type_6 = hlds__special_pred__TypePrime_7;
#line 183 "special_pred.m"
    else
#line 184 "special_pred.m"
      {
#line 184 "special_pred.m"
        {
#line 184 "special_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.special_pred", (MR_String) "predicate \140hlds.special_pred.special_pred_get_type_det\'/3", (MR_String) "special_pred_get_type failed");
#line 184 "special_pred.m"
          return;
        }
#line 184 "special_pred.m"
      }
#line 183 "special_pred.m"
  }
#line 66 "special_pred.m"
}

#line 63 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__special_pred_get_type_3_p_0(
#line 63 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_1,
#line 63 "special_pred.m"
  MR_Word hlds__special_pred__Types_2,
#line 63 "special_pred.m"
  MR_Word * hlds__special_pred__T_3)
#line 63 "special_pred.m"
{
#line 171 "special_pred.m"
  {
#line 171 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 171 "special_pred.m"
#line 171 "special_pred.m"
    switch (hlds__special_pred__HeadVar__1_1) {
#line 171 "special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 171 "special_pred.m"
      case (MR_Integer) 2:
#line 175 "special_pred.m"
        {
#line 175 "special_pred.m"
          MR_Word hlds__special_pred__V_17_17;
#line 176 "special_pred.m"
          MR_Word hlds__special_pred__V_16_16;

#line 176 "special_pred.m"
          {
#line 176 "special_pred.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_17_17);
          }
#line 176 "special_pred.m"
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 176 "special_pred.m"
          if (hlds__special_pred__succeeded)
#line 176 "special_pred.m"
            {
#line 176 "special_pred.m"
              *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_17_17, (MR_Integer) 0)));
#line 176 "special_pred.m"
              hlds__special_pred__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_17_17, (MR_Integer) 1)));
#line 176 "special_pred.m"
            }
#line 175 "special_pred.m"
        }
#line 171 "special_pred.m"
        break;
#line 171 "special_pred.m"
      case (MR_Integer) 1:
#line 173 "special_pred.m"
        {
#line 173 "special_pred.m"
          MR_Word hlds__special_pred__V_12_12;
#line 173 "special_pred.m"
          MR_Word hlds__special_pred__V_13_13;
#line 174 "special_pred.m"
          MR_Word hlds__special_pred__V_10_10;
#line 174 "special_pred.m"
          MR_Word hlds__special_pred__V_11_11;

#line 174 "special_pred.m"
          {
#line 174 "special_pred.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_12_12);
          }
#line 174 "special_pred.m"
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 174 "special_pred.m"
          if (hlds__special_pred__succeeded)
#line 174 "special_pred.m"
            {
#line 174 "special_pred.m"
              hlds__special_pred__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_12_12, (MR_Integer) 0)));
#line 174 "special_pred.m"
              hlds__special_pred__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_12_12, (MR_Integer) 1)));
#line 174 "special_pred.m"
              hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 174 "special_pred.m"
              if (hlds__special_pred__succeeded)
#line 174 "special_pred.m"
                {
#line 174 "special_pred.m"
                  *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_13_13, (MR_Integer) 0)));
#line 174 "special_pred.m"
                  hlds__special_pred__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_13_13, (MR_Integer) 1)));
#line 174 "special_pred.m"
                }
#line 174 "special_pred.m"
            }
#line 173 "special_pred.m"
        }
#line 171 "special_pred.m"
        break;
#line 171 "special_pred.m"
      case (MR_Integer) 3:
#line 177 "special_pred.m"
        {
#line 177 "special_pred.m"
          MR_Word hlds__special_pred__V_21_21;
#line 178 "special_pred.m"
          MR_Word hlds__special_pred__V_20_20;

#line 178 "special_pred.m"
          {
#line 178 "special_pred.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_21_21);
          }
#line 178 "special_pred.m"
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 178 "special_pred.m"
          if (hlds__special_pred__succeeded)
#line 178 "special_pred.m"
            {
#line 178 "special_pred.m"
              *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_21_21, (MR_Integer) 0)));
#line 178 "special_pred.m"
              hlds__special_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_21_21, (MR_Integer) 1)));
#line 178 "special_pred.m"
            }
#line 177 "special_pred.m"
        }
#line 171 "special_pred.m"
        break;
#line 171 "special_pred.m"
      case (MR_Integer) 0:
#line 171 "special_pred.m"
        {
#line 171 "special_pred.m"
          MR_Word hlds__special_pred__V_7_7;
#line 172 "special_pred.m"
          MR_Word hlds__special_pred__V_6_6;

#line 172 "special_pred.m"
          {
#line 172 "special_pred.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_7_7);
          }
#line 172 "special_pred.m"
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 172 "special_pred.m"
          if (hlds__special_pred__succeeded)
#line 172 "special_pred.m"
            {
#line 172 "special_pred.m"
              *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_7_7, (MR_Integer) 0)));
#line 172 "special_pred.m"
              hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_7_7, (MR_Integer) 1)));
#line 172 "special_pred.m"
            }
#line 171 "special_pred.m"
        }
#line 171 "special_pred.m"
        break;
#line 171 "special_pred.m"
    }
#line 171 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 171 "special_pred.m"
  }
#line 63 "special_pred.m"
}

#line 51 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_list_1_p_0(
#line 51 "special_pred.m"
  MR_Word * hlds__special_pred__HeadVar__1_1)
#line 51 "special_pred.m"
{
#line 130 "special_pred.m"
  {
#line 130 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 130 "special_pred.m"
    *hlds__special_pred__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__special_pred_scalar_common_1[3]);
#line 130 "special_pred.m"
  }
#line 51 "special_pred.m"
}

#line 49 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_mode_num_2_p_0(
#line 49 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_3,
#line 49 "special_pred.m"
  MR_Integer * hlds__special_pred__HeadVar__2_2)
#line 49 "special_pred.m"
{
#line 132 "special_pred.m"
  {
#line 132 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 132 "special_pred.m"
    {
#line 132 "special_pred.m"
      hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_p_0(hlds__special_pred__HeadVar__2_2);
#line 132 "special_pred.m"
      return;
    }
#line 132 "special_pred.m"
  }
#line 49 "special_pred.m"
}

#line 46 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_interface_5_p_0(
#line 46 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_1,
#line 46 "special_pred.m"
  MR_Word hlds__special_pred__Type_2,
#line 46 "special_pred.m"
  MR_Word * hlds__special_pred__HeadVar__3_3,
#line 46 "special_pred.m"
  MR_Word * hlds__special_pred__HeadVar__4_4,
#line 46 "special_pred.m"
  MR_Word * hlds__special_pred__HeadVar__5_5)
#line 46 "special_pred.m"
{
#line 158 "special_pred.m"
  {
#line 158 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 158 "special_pred.m"
#line 158 "special_pred.m"
    switch (hlds__special_pred__HeadVar__1_1) {
#line 158 "special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 158 "special_pred.m"
      case (MR_Integer) 2:
#line 165 "special_pred.m"
        {
#line 165 "special_pred.m"
          MR_Word hlds__special_pred__Uo_21;
#line 165 "special_pred.m"
          MR_Word hlds__special_pred__In_22;
#line 165 "special_pred.m"
          MR_Word hlds__special_pred__V_23_23;
#line 165 "special_pred.m"
          MR_Word hlds__special_pred__V_24_24;
#line 165 "special_pred.m"
          MR_Word hlds__special_pred__V_25_25;
#line 165 "special_pred.m"
          MR_Word hlds__special_pred__V_27_27;
#line 165 "special_pred.m"
          MR_Word hlds__special_pred__V_28_28;

#line 165 "special_pred.m"
          {
#line 165 "special_pred.m"
            hlds__special_pred__V_23_23 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
          }
#line 165 "special_pred.m"
          {
#line 165 "special_pred.m"
            hlds__special_pred__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_25_25, 0) = ((MR_Box) (hlds__special_pred__Type_2));
#line 165 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 165 "special_pred.m"
          }
#line 165 "special_pred.m"
          {
#line 165 "special_pred.m"
            hlds__special_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_24_24, 0) = ((MR_Box) (hlds__special_pred__Type_2));
#line 165 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_24_24, 1) = ((MR_Box) (hlds__special_pred__V_25_25));
#line 165 "special_pred.m"
          }
#line 165 "special_pred.m"
          {
#line 165 "special_pred.m"
            MR_Word base;
#line 165 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "special_pred.m"
            *hlds__special_pred__HeadVar__3_3 = base;
#line 165 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__V_23_23));
#line 165 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_24_24));
#line 165 "special_pred.m"
          }
#line 165 "special_pred.m"
          *hlds__special_pred__HeadVar__5_5 = (MR_Integer) 0;
#line 166 "special_pred.m"
          {
#line 166 "special_pred.m"
            parse_tree__prog_mode__in_mode_1_p_0(&hlds__special_pred__In_22);
          }
#line 165 "special_pred.m"
          {
#line 165 "special_pred.m"
            hlds__special_pred__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_28_28, 0) = ((MR_Box) (hlds__special_pred__In_22));
#line 165 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 165 "special_pred.m"
          }
#line 165 "special_pred.m"
          {
#line 165 "special_pred.m"
            hlds__special_pred__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_27_27, 0) = ((MR_Box) (hlds__special_pred__In_22));
#line 165 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_27_27, 1) = ((MR_Box) (hlds__special_pred__V_28_28));
#line 165 "special_pred.m"
          }
#line 167 "special_pred.m"
          {
#line 167 "special_pred.m"
            parse_tree__prog_mode__uo_mode_1_p_0(&hlds__special_pred__Uo_21);
          }
#line 165 "special_pred.m"
          {
#line 165 "special_pred.m"
            MR_Word base;
#line 165 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "special_pred.m"
            *hlds__special_pred__HeadVar__4_4 = base;
#line 165 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Uo_21));
#line 165 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_27_27));
#line 165 "special_pred.m"
          }
#line 165 "special_pred.m"
        }
#line 158 "special_pred.m"
        break;
#line 158 "special_pred.m"
      case (MR_Integer) 1:
#line 161 "special_pred.m"
        {
#line 161 "special_pred.m"
          MR_Word hlds__special_pred__In_13;
#line 161 "special_pred.m"
          MR_Word hlds__special_pred__Out_14;
#line 161 "special_pred.m"
          MR_Word hlds__special_pred__V_15_15;
#line 161 "special_pred.m"
          MR_Word hlds__special_pred__V_16_16;
#line 161 "special_pred.m"
          MR_Word hlds__special_pred__V_18_18;

#line 160 "special_pred.m"
          {
#line 160 "special_pred.m"
            hlds__special_pred__V_16_16 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 160 "special_pred.m"
          {
#line 160 "special_pred.m"
            hlds__special_pred__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_15_15, 0) = ((MR_Box) (hlds__special_pred__V_16_16));
#line 160 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "special_pred.m"
          }
#line 160 "special_pred.m"
          {
#line 160 "special_pred.m"
            MR_Word base;
#line 160 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "special_pred.m"
            *hlds__special_pred__HeadVar__3_3 = base;
#line 160 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Type_2));
#line 160 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_15_15));
#line 160 "special_pred.m"
          }
#line 161 "special_pred.m"
          *hlds__special_pred__HeadVar__5_5 = (MR_Integer) 0;
#line 162 "special_pred.m"
          {
#line 162 "special_pred.m"
            parse_tree__prog_mode__in_mode_1_p_0(&hlds__special_pred__In_13);
          }
#line 163 "special_pred.m"
          {
#line 163 "special_pred.m"
            parse_tree__prog_mode__out_mode_1_p_0(&hlds__special_pred__Out_14);
          }
#line 160 "special_pred.m"
          {
#line 160 "special_pred.m"
            hlds__special_pred__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, 0) = ((MR_Box) (hlds__special_pred__Out_14));
#line 160 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "special_pred.m"
          }
#line 160 "special_pred.m"
          {
#line 160 "special_pred.m"
            MR_Word base;
#line 160 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "special_pred.m"
            *hlds__special_pred__HeadVar__4_4 = base;
#line 160 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__In_13));
#line 160 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_18_18));
#line 160 "special_pred.m"
          }
#line 161 "special_pred.m"
        }
#line 158 "special_pred.m"
        break;
#line 158 "special_pred.m"
      case (MR_Integer) 3:
#line 168 "special_pred.m"
        {
#line 168 "special_pred.m"
          MR_Word hlds__special_pred__InAny_31;

#line 168 "special_pred.m"
          {
#line 168 "special_pred.m"
            MR_Word base;
#line 168 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 168 "special_pred.m"
            *hlds__special_pred__HeadVar__3_3 = base;
#line 168 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Type_2));
#line 168 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "special_pred.m"
          }
#line 168 "special_pred.m"
          *hlds__special_pred__HeadVar__5_5 = (MR_Integer) 0;
#line 169 "special_pred.m"
          {
#line 169 "special_pred.m"
            hlds__special_pred__InAny_31 = parse_tree__prog_mode__out_any_mode_0_f_0();
          }
#line 168 "special_pred.m"
          {
#line 168 "special_pred.m"
            MR_Word base;
#line 168 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 168 "special_pred.m"
            *hlds__special_pred__HeadVar__4_4 = base;
#line 168 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__InAny_31));
#line 168 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "special_pred.m"
          }
#line 168 "special_pred.m"
        }
#line 158 "special_pred.m"
        break;
#line 158 "special_pred.m"
      case (MR_Integer) 0:
#line 158 "special_pred.m"
        {
#line 158 "special_pred.m"
          MR_Word hlds__special_pred__In_7;
#line 158 "special_pred.m"
          MR_Word hlds__special_pred__V_8_8;
#line 158 "special_pred.m"
          MR_Word hlds__special_pred__V_10_10;

#line 157 "special_pred.m"
          {
#line 157 "special_pred.m"
            hlds__special_pred__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_8_8, 0) = ((MR_Box) (hlds__special_pred__Type_2));
#line 157 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "special_pred.m"
          }
#line 157 "special_pred.m"
          {
#line 157 "special_pred.m"
            MR_Word base;
#line 157 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "special_pred.m"
            *hlds__special_pred__HeadVar__3_3 = base;
#line 157 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Type_2));
#line 157 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_8_8));
#line 157 "special_pred.m"
          }
#line 158 "special_pred.m"
          *hlds__special_pred__HeadVar__5_5 = (MR_Integer) 1;
#line 159 "special_pred.m"
          {
#line 159 "special_pred.m"
            parse_tree__prog_mode__in_mode_1_p_0(&hlds__special_pred__In_7);
          }
#line 157 "special_pred.m"
          {
#line 157 "special_pred.m"
            hlds__special_pred__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_10_10, 0) = ((MR_Box) (hlds__special_pred__In_7));
#line 157 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "special_pred.m"
          }
#line 157 "special_pred.m"
          {
#line 157 "special_pred.m"
            MR_Word base;
#line 157 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "special_pred.m"
            *hlds__special_pred__HeadVar__4_4 = base;
#line 157 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__In_7));
#line 157 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_10_10));
#line 157 "special_pred.m"
          }
#line 158 "special_pred.m"
        }
#line 158 "special_pred.m"
        break;
#line 158 "special_pred.m"
    }
#line 158 "special_pred.m"
  }
#line 46 "special_pred.m"
}

#line 39 "special_pred.m"
MR_String MR_CALL 
hlds__special_pred__special_pred_name_2_f_0(
#line 39 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPred_4,
#line 39 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__2_2)
#line 39 "special_pred.m"
{
#line 136 "special_pred.m"
  {
#line 136 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 136 "special_pred.m"
    MR_String hlds__special_pred__Name_7;

#line 136 "special_pred.m"
    {
#line 136 "special_pred.m"
      return hlds__special_pred__Name_7 = hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_f_0(hlds__special_pred__SpecialPred_4);
    }
#line 136 "special_pred.m"
    return hlds__special_pred__Name_7;
#line 136 "special_pred.m"
  }
#line 39 "special_pred.m"
}

void mercury__hlds__special_pred__init(void)
{
}

void mercury__hlds__special_pred__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_0);
	MR_register_type_ctor_info(&hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_map_0);
}

void mercury__hlds__special_pred__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.special_pred. */
