/*
** Automatically generated from `special_pred.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
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



#line 103 "special_pred.m"
struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s {
#line 103 "special_pred.m"
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__SpecialPredId_5;
#line 103 "special_pred.m"
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6;
#line 321 "special_pred.m"
  MR_bool hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded;
#line 329 "special_pred.m"
  jmp_buf hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0;
#line 329 "special_pred.m"
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13;
#line 329 "special_pred.m"
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14;
#line 331 "special_pred.m"
  MR_Box hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13;
#line 103 "special_pred.m"
};


#line 162 "hlds.special_pred.c"
static const MR_FA_TypeInfo_Struct2 hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 165 "hlds.special_pred.c"
static const MR_PseudoTypeInfo hlds__special_pred__hlds__special_pred__field_types_special_pred_maps_0_0[4];

#line 168 "hlds.special_pred.c"
static const MR_ConstString hlds__special_pred__hlds__special_pred__field_names_special_pred_maps_0_0[4];

#line 171 "hlds.special_pred.c"
static const MR_DuFunctorDesc hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0;

#line 174 "hlds.special_pred.c"
static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0[1];

#line 177 "hlds.special_pred.c"
static const MR_DuPtagLayout hlds__special_pred__hlds__special_pred__du_ptag_ordered_special_pred_maps_0[1];

#line 180 "hlds.special_pred.c"
static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_name_ordered_special_pred_maps_0[1];

#line 183 "hlds.special_pred.c"
static const MR_Integer hlds__special_pred__hlds__special_pred__functor_number_map_special_pred_maps_0[1];

#line 186 "hlds.special_pred.c"
static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0_10001(
#line 189 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_1,
#line 191 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2);

#line 194 "hlds.special_pred.c"
static void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0_10001(
#line 197 "hlds.special_pred.c"
  MR_Box * hlds__special_pred__wrapper_arg_1,
#line 199 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2,
#line 201 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_3);

#line 329 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(
#line 329 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg);

#line 331 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3(
#line 331 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg);

#line 329 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(
#line 329 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg);

#line 329 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(
#line 329 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg);


static /* final */ const MR_Box hlds__special_pred_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__special_pred_scalar_common_2[1][3];


#line 177 "special_pred.m"
/* sealed */ struct hlds__special_pred__vector_common_type_3_0_s {
#line 177 "special_pred.m"
  const MR_String hlds__special_pred__vector_common_type_3_0__vct_3_f_0;
#line 177 "special_pred.m"
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

static /* final */ const MR_Box hlds__special_pred_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 303 "hlds.special_pred.c"
static const MR_FA_TypeInfo_Struct2 hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 312 "hlds.special_pred.c"
static const MR_PseudoTypeInfo hlds__special_pred__hlds__special_pred__field_types_special_pred_maps_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 320 "hlds.special_pred.c"
static const MR_ConstString hlds__special_pred__hlds__special_pred__field_names_special_pred_maps_0_0[4] = {
  (MR_String) "spm_unify_map",
  (MR_String) "spm_index_map",
  (MR_String) "spm_compare_map",
  (MR_String) "spm_init_map"
};

#line 328 "hlds.special_pred.c"
static const MR_DuFunctorDesc hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0 = {
  (MR_String) "special_pred_maps",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__special_pred__hlds__special_pred__field_types_special_pred_maps_0_0,
  hlds__special_pred__hlds__special_pred__field_names_special_pred_maps_0_0,
  NULL,
  NULL
};

#line 343 "hlds.special_pred.c"
static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0[1] = {
  &hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0
};

#line 348 "hlds.special_pred.c"
static const MR_DuPtagLayout hlds__special_pred__hlds__special_pred__du_ptag_ordered_special_pred_maps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0
  }
};

#line 357 "hlds.special_pred.c"
static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_name_ordered_special_pred_maps_0[1] = {
  &hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0
};

#line 362 "hlds.special_pred.c"
static const MR_Integer hlds__special_pred__hlds__special_pred__functor_number_map_special_pred_maps_0[1] = {
  (MR_Integer) 0
};

#line 367 "hlds.special_pred.c"
const MR_TypeCtorInfo_Struct hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_maps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__special_pred____Unify____special_pred_maps_0_0_10001)),
  ((MR_Box) (hlds__special_pred____Compare____special_pred_maps_0_0_10001)),
  (MR_String) "hlds.special_pred",
  (MR_String) "special_pred_maps",
  {     hlds__special_pred__hlds__special_pred__du_name_ordered_special_pred_maps_0 },
  {     hlds__special_pred__hlds__special_pred__du_ptag_ordered_special_pred_maps_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__special_pred__hlds__special_pred__functor_number_map_special_pred_maps_0
};

#line 384 "hlds.special_pred.c"
static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0_10001(
#line 387 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_1,
#line 389 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2)
#line 391 "hlds.special_pred.c"
{
#line 393 "hlds.special_pred.c"
  {
#line 395 "hlds.special_pred.c"
    MR_bool hlds__special_pred__succeeded;

#line 398 "hlds.special_pred.c"
    {
#line 400 "hlds.special_pred.c"
      hlds__special_pred__succeeded = hlds__special_pred____Unify____special_pred_maps_0_0(((MR_Word) hlds__special_pred__wrapper_arg_1), ((MR_Word) hlds__special_pred__wrapper_arg_2));
    }
#line 403 "hlds.special_pred.c"
    return hlds__special_pred__succeeded;
#line 405 "hlds.special_pred.c"
  }
#line 407 "hlds.special_pred.c"
}

#line 410 "hlds.special_pred.c"
static void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0_10001(
#line 413 "hlds.special_pred.c"
  MR_Box * hlds__special_pred__wrapper_arg_1,
#line 415 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2,
#line 417 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_3)
#line 419 "hlds.special_pred.c"
{
#line 421 "hlds.special_pred.c"
  {
#line 423 "hlds.special_pred.c"
    MR_Word hlds__special_pred__conv0_HeadVar__1_1;

#line 426 "hlds.special_pred.c"
    {
#line 428 "hlds.special_pred.c"
      hlds__special_pred____Compare____special_pred_maps_0_0(&hlds__special_pred__conv0_HeadVar__1_1, ((MR_Word) hlds__special_pred__wrapper_arg_2), ((MR_Word) hlds__special_pred__wrapper_arg_3));
    }
#line 431 "hlds.special_pred.c"
    *hlds__special_pred__wrapper_arg_1 = ((MR_Box) (hlds__special_pred__conv0_HeadVar__1_1));
#line 433 "hlds.special_pred.c"
  }
#line 435 "hlds.special_pred.c"
}

#line 56 "special_pred.m"
void MR_CALL 
hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_p_0(
#line 56 "special_pred.m"
  MR_Integer * hlds__special_pred__HeadVar__2_2)
#line 56 "special_pred.m"
{
#line 206 "special_pred.m"
  {
#line 206 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 206 "special_pred.m"
    *hlds__special_pred__HeadVar__2_2 = (MR_Integer) 0;
#line 206 "special_pred.m"
  }
#line 56 "special_pred.m"
}

#line 54 "special_pred.m"
MR_String MR_CALL 
hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_f_0(
#line 54 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPred_4)
#line 54 "special_pred.m"
{
#line 185 "special_pred.m"
  {
#line 185 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 185 "special_pred.m"
    MR_String hlds__special_pred__Name_7;

#line 185 "special_pred.m"
    {
#line 185 "special_pred.m"
      return hlds__special_pred__Name_7 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(hlds__special_pred__SpecialPred_4);
    }
#line 185 "special_pred.m"
    return hlds__special_pred__Name_7;
#line 185 "special_pred.m"
  }
#line 54 "special_pred.m"
}

#line 31 "special_pred.m"
void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0(
#line 31 "special_pred.m"
  MR_Word * hlds__special_pred__HeadVar__1_1,
#line 31 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__2_2,
#line 31 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__3_3)
#line 31 "special_pred.m"
{
#line 31 "special_pred.m"
  {
#line 31 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 31 "special_pred.m"
    MR_Integer hlds__special_pred__CastX_15 = (MR_Integer) hlds__special_pred__HeadVar__2_2;
#line 31 "special_pred.m"
    MR_Integer hlds__special_pred__CastY_16 = (MR_Integer) hlds__special_pred__HeadVar__3_3;

#line 31 "special_pred.m"
    hlds__special_pred__succeeded = (hlds__special_pred__CastX_15 == hlds__special_pred__CastY_16);
#line 31 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 507 "hlds.special_pred.c"
      *hlds__special_pred__HeadVar__1_1 = (MR_Integer) 0;
#line 31 "special_pred.m"
    else
#line 31 "special_pred.m"
      {
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 1)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 2)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 3)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__3_3, (MR_Integer) 0)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__3_3, (MR_Integer) 1)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__3_3, (MR_Integer) 2)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__3_3, (MR_Integer) 3)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_12_12;

#line 31 "special_pred.m"
        {
#line 31 "special_pred.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], &hlds__special_pred__V_12_12, ((MR_Box) (hlds__special_pred__V_4_4)), ((MR_Box) (hlds__special_pred__V_8_8)));
        }
#line 537 "hlds.special_pred.c"
        hlds__special_pred__succeeded = (hlds__special_pred__V_12_12 == (MR_Integer) 0);
#line 31 "special_pred.m"
        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 31 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 31 "special_pred.m"
          *hlds__special_pred__HeadVar__1_1 = hlds__special_pred__V_12_12;
#line 31 "special_pred.m"
        else
#line 31 "special_pred.m"
          {
#line 31 "special_pred.m"
            MR_Word hlds__special_pred__V_13_13;

#line 31 "special_pred.m"
            {
#line 31 "special_pred.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], &hlds__special_pred__V_13_13, ((MR_Box) (hlds__special_pred__V_5_5)), ((MR_Box) (hlds__special_pred__V_9_9)));
            }
#line 557 "hlds.special_pred.c"
            hlds__special_pred__succeeded = (hlds__special_pred__V_13_13 == (MR_Integer) 0);
#line 31 "special_pred.m"
            hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 31 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 31 "special_pred.m"
              *hlds__special_pred__HeadVar__1_1 = hlds__special_pred__V_13_13;
#line 31 "special_pred.m"
            else
#line 31 "special_pred.m"
              {
#line 31 "special_pred.m"
                MR_Word hlds__special_pred__V_14_14;

#line 31 "special_pred.m"
                {
#line 31 "special_pred.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], &hlds__special_pred__V_14_14, ((MR_Box) (hlds__special_pred__V_6_6)), ((MR_Box) (hlds__special_pred__V_10_10)));
                }
#line 577 "hlds.special_pred.c"
                hlds__special_pred__succeeded = (hlds__special_pred__V_14_14 == (MR_Integer) 0);
#line 31 "special_pred.m"
                hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 31 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 31 "special_pred.m"
                  *hlds__special_pred__HeadVar__1_1 = hlds__special_pred__V_14_14;
#line 31 "special_pred.m"
                else
#line 31 "special_pred.m"
                  {
#line 31 "special_pred.m"
                    {
#line 31 "special_pred.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], hlds__special_pred__HeadVar__1_1, ((MR_Box) (hlds__special_pred__V_7_7)), ((MR_Box) (hlds__special_pred__V_11_11)));
#line 31 "special_pred.m"
                      return;
                    }
#line 31 "special_pred.m"
                  }
#line 31 "special_pred.m"
              }
#line 31 "special_pred.m"
          }
#line 31 "special_pred.m"
      }
#line 31 "special_pred.m"
  }
#line 31 "special_pred.m"
}

#line 31 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0(
#line 31 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_1,
#line 31 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__2_2)
#line 31 "special_pred.m"
{
#line 31 "special_pred.m"
  {
#line 31 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 31 "special_pred.m"
    MR_Integer hlds__special_pred__CastX_11 = (MR_Integer) hlds__special_pred__HeadVar__1_1;
#line 31 "special_pred.m"
    MR_Integer hlds__special_pred__CastY_12 = (MR_Integer) hlds__special_pred__HeadVar__2_2;

#line 31 "special_pred.m"
    hlds__special_pred__succeeded = (hlds__special_pred__CastX_11 == hlds__special_pred__CastY_12);
#line 31 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 31 "special_pred.m"
      hlds__special_pred__succeeded = MR_TRUE;
#line 31 "special_pred.m"
    else
#line 31 "special_pred.m"
      {
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__TypeInfo_14_14;
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__TypeInfo_15_15;
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__TypeInfo_16_16;
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__1_1, (MR_Integer) 0)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__1_1, (MR_Integer) 1)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__1_1, (MR_Integer) 2)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__1_1, (MR_Integer) 3)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 1)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 2)));
#line 31 "special_pred.m"
        MR_Word hlds__special_pred__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 3)));

#line 660 "hlds.special_pred.c"
        {
#line 662 "hlds.special_pred.c"
          hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], ((MR_Box) (hlds__special_pred__V_3_3)), ((MR_Box) (hlds__special_pred__V_7_7)));
        }
#line 31 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 31 "special_pred.m"
          {
#line 669 "hlds.special_pred.c"
            hlds__special_pred__TypeInfo_14_14 = (MR_Word) &hlds__special_pred_scalar_common_2[0];
#line 671 "hlds.special_pred.c"
            {
#line 673 "hlds.special_pred.c"
              hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__special_pred__TypeInfo_14_14, ((MR_Box) (hlds__special_pred__V_4_4)), ((MR_Box) (hlds__special_pred__V_8_8)));
            }
#line 31 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 31 "special_pred.m"
              {
#line 680 "hlds.special_pred.c"
                hlds__special_pred__TypeInfo_15_15 = (MR_Word) &hlds__special_pred_scalar_common_2[0];
#line 682 "hlds.special_pred.c"
                {
#line 684 "hlds.special_pred.c"
                  hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__special_pred__TypeInfo_15_15, ((MR_Box) (hlds__special_pred__V_5_5)), ((MR_Box) (hlds__special_pred__V_9_9)));
                }
#line 31 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 31 "special_pred.m"
                  {
#line 691 "hlds.special_pred.c"
                    hlds__special_pred__TypeInfo_16_16 = (MR_Word) &hlds__special_pred_scalar_common_2[0];
#line 693 "hlds.special_pred.c"
                    {
#line 695 "hlds.special_pred.c"
                      return hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__special_pred__TypeInfo_16_16, ((MR_Box) (hlds__special_pred__V_6_6)), ((MR_Box) (hlds__special_pred__V_10_10)));
                    }
#line 31 "special_pred.m"
                  }
#line 31 "special_pred.m"
              }
#line 31 "special_pred.m"
          }
#line 31 "special_pred.m"
      }
#line 31 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 31 "special_pred.m"
  }
#line 31 "special_pred.m"
}

#line 124 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(
#line 124 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_2)
#line 124 "special_pred.m"
{
#line 364 "special_pred.m"
  {
#line 364 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 364 "special_pred.m"
    MR_Word hlds__special_pred__Globals_3;
#line 364 "special_pred.m"
    MR_Word hlds__special_pred__Target_4;

#line 370 "special_pred.m"
    {
#line 370 "special_pred.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_2, &hlds__special_pred__Globals_3);
    }
#line 371 "special_pred.m"
    {
#line 371 "special_pred.m"
      libs__globals__get_target_2_p_0(hlds__special_pred__Globals_3, &hlds__special_pred__Target_4);
    }
#line 373 "special_pred.m"
#line 373 "special_pred.m"
    switch (hlds__special_pred__Target_4) {
#line 373 "special_pred.m"
      default:
#line 373 "special_pred.m"
        hlds__special_pred__succeeded = MR_FALSE;
#line 373 "special_pred.m"
        break;
#line 373 "special_pred.m"
      case (MR_Integer) 1:
#line 372 "special_pred.m"
        hlds__special_pred__succeeded = MR_TRUE;
#line 373 "special_pred.m"
        break;
#line 373 "special_pred.m"
      case (MR_Integer) 3:
#line 374 "special_pred.m"
        hlds__special_pred__succeeded = MR_TRUE;
#line 373 "special_pred.m"
        break;
#line 373 "special_pred.m"
      case (MR_Integer) 2:
#line 373 "special_pred.m"
        hlds__special_pred__succeeded = MR_TRUE;
#line 373 "special_pred.m"
        break;
#line 373 "special_pred.m"
    }
#line 364 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 364 "special_pred.m"
  }
#line 124 "special_pred.m"
}

#line 116 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(
#line 116 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_3,
#line 116 "special_pred.m"
  MR_String * hlds__special_pred__TypeName_4)
#line 116 "special_pred.m"
{
#line 352 "special_pred.m"
  {
#line 352 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 352 "special_pred.m"
    MR_Word hlds__special_pred__Builtin_5;
#line 352 "special_pred.m"
    MR_Word hlds__special_pred__V_6_6;
#line 352 "special_pred.m"
    MR_Integer hlds__special_pred__V_7_7;
#line 352 "special_pred.m"
    MR_Word hlds__special_pred__V_8_8;
#line 356 "special_pred.m"
    MR_Integer hlds__special_pred__lo_0;
#line 356 "special_pred.m"
    MR_Integer hlds__special_pred__hi_1;
#line 356 "special_pred.m"
    MR_Integer hlds__special_pred__mid_2;
#line 356 "special_pred.m"
    MR_Integer hlds__special_pred__result_3;

#line 353 "special_pred.m"
    {
#line 353 "special_pred.m"
      hlds__special_pred__Builtin_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 354 "special_pred.m"
    hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_3, (MR_Integer) 0)));
#line 354 "special_pred.m"
    hlds__special_pred__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_3, (MR_Integer) 1)));
#line 354 "special_pred.m"
    hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 354 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 354 "special_pred.m"
      {
#line 354 "special_pred.m"
        hlds__special_pred__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_6_6, (MR_Integer) 0)));
#line 354 "special_pred.m"
        *hlds__special_pred__TypeName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_6_6, (MR_Integer) 1)));
#line 354 "special_pred.m"
        {
#line 354 "special_pred.m"
          hlds__special_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__special_pred__Builtin_5, hlds__special_pred__V_8_8);
        }
#line 352 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 352 "special_pred.m"
          {
#line 354 "special_pred.m"
            hlds__special_pred__succeeded = (hlds__special_pred__V_7_7 == (MR_Integer) 0);
#line 352 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 352 "special_pred.m"
              {
#line 356 "special_pred.m"
                /* binary string simple lookup switch */
#line 356 "special_pred.m"
                hlds__special_pred__lo_0 = (MR_Integer) 0;
#line 356 "special_pred.m"
                hlds__special_pred__hi_1 = (MR_Integer) 4;
#line 356 "special_pred.m"
                do
#line 356 "special_pred.m"
                  {
#line 356 "special_pred.m"
                    hlds__special_pred__mid_2 = (((hlds__special_pred__lo_0 + hlds__special_pred__hi_1)) / (MR_Integer) 2);
#line 356 "special_pred.m"
                    hlds__special_pred__result_3 = MR_strcmp(*hlds__special_pred__TypeName_4, ((&hlds__special_pred_vector_common_3[9 + hlds__special_pred__mid_2]))->hlds__special_pred__vector_common_type_3_0__vct_3_f_0);
#line 356 "special_pred.m"
                    if ((hlds__special_pred__result_3 == (MR_Integer) 0))
#line 356 "special_pred.m"
                      {
#line 356 "special_pred.m"
                        hlds__special_pred__succeeded = MR_TRUE;
#line 356 "special_pred.m"
                        /* jump out of search loop */
#line 356 "special_pred.m"
                        goto label_0;
#line 356 "special_pred.m"
                      }
#line 356 "special_pred.m"
                    else
#line 356 "special_pred.m"
                    if ((hlds__special_pred__result_3 < (MR_Integer) 0))
#line 356 "special_pred.m"
                      hlds__special_pred__hi_1 = (hlds__special_pred__mid_2 - (MR_Integer) 1);
#line 356 "special_pred.m"
                    else
#line 356 "special_pred.m"
                      hlds__special_pred__lo_0 = (hlds__special_pred__mid_2 + (MR_Integer) 1);
#line 356 "special_pred.m"
                  }
#line 356 "special_pred.m"
                while ((hlds__special_pred__lo_0 <= hlds__special_pred__hi_1));
#line 356 "special_pred.m"
                hlds__special_pred__succeeded = MR_FALSE;
#line 356 "special_pred.m"
              label_0:;
#line 352 "special_pred.m"
              }
#line 352 "special_pred.m"
          }
#line 354 "special_pred.m"
      }
#line 352 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 352 "special_pred.m"
  }
#line 116 "special_pred.m"
}

#line 110 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(
#line 110 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_4,
#line 110 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_5,
#line 110 "special_pred.m"
  MR_Word hlds__special_pred__TypeBody_6)
#line 110 "special_pred.m"
{
#line 339 "special_pred.m"
  {
#line 339 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 349 "special_pred.m"
    MR_Word hlds__special_pred__V_11_11;
#line 349 "special_pred.m"
    MR_Word hlds__special_pred__V_27_27;

#line 341 "special_pred.m"
    {
#line 341 "special_pred.m"
      MR_Word hlds__special_pred__V_7_7;

#line 341 "special_pred.m"
      hlds__special_pred__succeeded = ((((MR_tag((MR_Word) hlds__special_pred__TypeBody_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 341 "special_pred.m"
      if (hlds__special_pred__succeeded)
#line 341 "special_pred.m"
        hlds__special_pred__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_6, (MR_Integer) 1)));
#line 341 "special_pred.m"
      hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 341 "special_pred.m"
    }
#line 342 "special_pred.m"
    if (!(hlds__special_pred__succeeded))
#line 345 "special_pred.m"
      {
#line 345 "special_pred.m"
        MR_String hlds__special_pred__V_8_8;
#line 345 "special_pred.m"
        MR_Word hlds__special_pred__Globals_13;
#line 345 "special_pred.m"
        MR_Word hlds__special_pred__Target_14;
#line 345 "special_pred.m"
        MR_Word hlds__special_pred__Builtin_17;
#line 345 "special_pred.m"
        MR_Word hlds__special_pred__V_18_18;
#line 345 "special_pred.m"
        MR_Integer hlds__special_pred__V_19_19;
#line 345 "special_pred.m"
        MR_Word hlds__special_pred__V_20_20;
#line 356 "special_pred.m"
        MR_Integer hlds__special_pred__lo_0;
#line 356 "special_pred.m"
        MR_Integer hlds__special_pred__hi_1;
#line 356 "special_pred.m"
        MR_Integer hlds__special_pred__mid_2;
#line 356 "special_pred.m"
        MR_Integer hlds__special_pred__result_3;

#line 370 "special_pred.m"
        {
#line 370 "special_pred.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_4, &hlds__special_pred__Globals_13);
        }
#line 371 "special_pred.m"
        {
#line 371 "special_pred.m"
          libs__globals__get_target_2_p_0(hlds__special_pred__Globals_13, &hlds__special_pred__Target_14);
        }
#line 373 "special_pred.m"
#line 373 "special_pred.m"
        switch (hlds__special_pred__Target_14) {
#line 373 "special_pred.m"
          default:
#line 373 "special_pred.m"
            hlds__special_pred__succeeded = MR_FALSE;
#line 373 "special_pred.m"
            break;
#line 373 "special_pred.m"
          case (MR_Integer) 1:
#line 372 "special_pred.m"
            hlds__special_pred__succeeded = MR_TRUE;
#line 373 "special_pred.m"
            break;
#line 373 "special_pred.m"
          case (MR_Integer) 3:
#line 374 "special_pred.m"
            hlds__special_pred__succeeded = MR_TRUE;
#line 373 "special_pred.m"
            break;
#line 373 "special_pred.m"
          case (MR_Integer) 2:
#line 373 "special_pred.m"
            hlds__special_pred__succeeded = MR_TRUE;
#line 373 "special_pred.m"
            break;
#line 373 "special_pred.m"
        }
#line 345 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 345 "special_pred.m"
          {
#line 353 "special_pred.m"
            {
#line 353 "special_pred.m"
              hlds__special_pred__Builtin_17 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 354 "special_pred.m"
            hlds__special_pred__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_5, (MR_Integer) 0)));
#line 354 "special_pred.m"
            hlds__special_pred__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_5, (MR_Integer) 1)));
#line 354 "special_pred.m"
            hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 354 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 354 "special_pred.m"
              {
#line 354 "special_pred.m"
                hlds__special_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, (MR_Integer) 0)));
#line 354 "special_pred.m"
                hlds__special_pred__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, (MR_Integer) 1)));
#line 354 "special_pred.m"
                {
#line 354 "special_pred.m"
                  hlds__special_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__special_pred__Builtin_17, hlds__special_pred__V_20_20);
                }
#line 345 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 345 "special_pred.m"
                  {
#line 354 "special_pred.m"
                    hlds__special_pred__succeeded = (hlds__special_pred__V_19_19 == (MR_Integer) 0);
#line 345 "special_pred.m"
                    if (hlds__special_pred__succeeded)
#line 345 "special_pred.m"
                      {
#line 356 "special_pred.m"
                        /* binary string simple lookup switch */
#line 356 "special_pred.m"
                        hlds__special_pred__lo_0 = (MR_Integer) 0;
#line 356 "special_pred.m"
                        hlds__special_pred__hi_1 = (MR_Integer) 4;
#line 356 "special_pred.m"
                        do
#line 356 "special_pred.m"
                          {
#line 356 "special_pred.m"
                            hlds__special_pred__mid_2 = (((hlds__special_pred__lo_0 + hlds__special_pred__hi_1)) / (MR_Integer) 2);
#line 356 "special_pred.m"
                            hlds__special_pred__result_3 = MR_strcmp(hlds__special_pred__V_8_8, ((&hlds__special_pred_vector_common_3[4 + hlds__special_pred__mid_2]))->hlds__special_pred__vector_common_type_3_0__vct_3_f_0);
#line 356 "special_pred.m"
                            if ((hlds__special_pred__result_3 == (MR_Integer) 0))
#line 356 "special_pred.m"
                              {
#line 356 "special_pred.m"
                                hlds__special_pred__succeeded = MR_TRUE;
#line 356 "special_pred.m"
                                /* jump out of search loop */
#line 356 "special_pred.m"
                                goto label_0;
#line 356 "special_pred.m"
                              }
#line 356 "special_pred.m"
                            else
#line 356 "special_pred.m"
                            if ((hlds__special_pred__result_3 < (MR_Integer) 0))
#line 356 "special_pred.m"
                              hlds__special_pred__hi_1 = (hlds__special_pred__mid_2 - (MR_Integer) 1);
#line 356 "special_pred.m"
                            else
#line 356 "special_pred.m"
                              hlds__special_pred__lo_0 = (hlds__special_pred__mid_2 + (MR_Integer) 1);
#line 356 "special_pred.m"
                          }
#line 356 "special_pred.m"
                        while ((hlds__special_pred__lo_0 <= hlds__special_pred__hi_1));
#line 356 "special_pred.m"
                        hlds__special_pred__succeeded = MR_FALSE;
#line 356 "special_pred.m"
                      label_0:;
#line 345 "special_pred.m"
                      }
#line 345 "special_pred.m"
                  }
#line 354 "special_pred.m"
              }
#line 345 "special_pred.m"
          }
#line 345 "special_pred.m"
      }
#line 339 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 339 "special_pred.m"
      {
#line 348 "special_pred.m"
        {
#line 348 "special_pred.m"
          hlds__special_pred__succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(hlds__special_pred__TypeCtor_5, hlds__special_pred__TypeBody_6);
        }
#line 348 "special_pred.m"
        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 339 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 339 "special_pred.m"
          {
#line 349 "special_pred.m"
            {
#line 349 "special_pred.m"
              hlds__special_pred__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(hlds__special_pred__ModuleInfo_4, hlds__special_pred__TypeBody_6, &hlds__special_pred__V_11_11);
            }
#line 349 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 349 "special_pred.m"
              {
#line 349 "special_pred.m"
                hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 349 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 349 "special_pred.m"
                  hlds__special_pred__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_11_11, (MR_Integer) 0)));
#line 349 "special_pred.m"
              }
#line 349 "special_pred.m"
            hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 339 "special_pred.m"
          }
#line 339 "special_pred.m"
      }
#line 339 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 339 "special_pred.m"
  }
#line 110 "special_pred.m"
}

#line 329 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(
#line 329 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg)
#line 329 "special_pred.m"
{
#line 329 "special_pred.m"
  {
#line 329 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

#line 329 "special_pred.m"
    MR_builtin_longjmp((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0, 1);
#line 329 "special_pred.m"
  }
#line 329 "special_pred.m"
}

#line 331 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3(
#line 331 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg)
#line 331 "special_pred.m"
{
#line 331 "special_pred.m"
  {
#line 331 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

#line 331 "special_pred.m"
    (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13 = ((MR_Word) (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13);
#line 331 "special_pred.m"
    {
#line 331 "special_pred.m"
      hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(hlds__special_pred__env_ptr);
#line 331 "special_pred.m"
      return;
    }
#line 331 "special_pred.m"
  }
#line 331 "special_pred.m"
}

#line 329 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(
#line 329 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg)
#line 329 "special_pred.m"
{
#line 329 "special_pred.m"
  {
#line 329 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

#line 329 "special_pred.m"
    {
#line 332 "special_pred.m"
      MR_Word hlds__special_pred__V_15_15;
#line 332 "special_pred.m"
      MR_Word hlds__special_pred__V_16_16;
#line 332 "special_pred.m"
      MR_Word hlds__special_pred__V_17_17;
#line 332 "special_pred.m"
      MR_Integer hlds__special_pred__V_18_18;
#line 332 "special_pred.m"
      MR_Word hlds__special_pred__V_19_19;
#line 333 "special_pred.m"
      MR_Word hlds__special_pred__V_20_20;
#line 333 "special_pred.m"
      MR_Word hlds__special_pred__V_21_21;

#line 332 "special_pred.m"
      (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 0)));
#line 332 "special_pred.m"
      hlds__special_pred__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 1)));
#line 332 "special_pred.m"
      hlds__special_pred__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 2)));
#line 332 "special_pred.m"
      hlds__special_pred__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 3)));
#line 332 "special_pred.m"
      hlds__special_pred__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 4)));
#line 332 "special_pred.m"
      hlds__special_pred__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 5)));
#line 333 "special_pred.m"
      (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 333 "special_pred.m"
      if ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 333 "special_pred.m"
        {
#line 333 "special_pred.m"
          {
#line 333 "special_pred.m"
            hlds__special_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14, (MR_Integer) 0)));
#line 333 "special_pred.m"
            hlds__special_pred__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14, (MR_Integer) 1)));
#line 333 "special_pred.m"
          }
#line 333 "special_pred.m"
          {
#line 333 "special_pred.m"
            hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(hlds__special_pred__env_ptr);
#line 333 "special_pred.m"
            return;
          }
#line 333 "special_pred.m"
        }
#line 329 "special_pred.m"
    }
#line 329 "special_pred.m"
  }
#line 329 "special_pred.m"
}

#line 329 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(
#line 329 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg)
#line 329 "special_pred.m"
{
#line 329 "special_pred.m"
  {
#line 329 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

#line 329 "special_pred.m"
    if (MR_builtin_setjmp((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0) == 0)
#line 329 "special_pred.m"
      {
#line 329 "special_pred.m"
        {
#line 329 "special_pred.m"
          MR_Word hlds__special_pred__TypeCtorInfo_32_32;
#line 329 "special_pred.m"
          MR_Word hlds__special_pred__Ctors_12;
#line 330 "special_pred.m"
          MR_Word hlds__special_pred__V_24_24;
#line 330 "special_pred.m"
          MR_Word hlds__special_pred__V_25_25;
#line 330 "special_pred.m"
          MR_Word hlds__special_pred__V_26_26;
#line 330 "special_pred.m"
          MR_Word hlds__special_pred__V_27_27;
#line 330 "special_pred.m"
          MR_Word hlds__special_pred__V_28_28;
#line 330 "special_pred.m"
          MR_Word hlds__special_pred__V_29_29;
#line 330 "special_pred.m"
          MR_Word hlds__special_pred__V_30_30;
#line 330 "special_pred.m"
          MR_Word hlds__special_pred__V_31_31;

#line 329 "special_pred.m"
          (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__SpecialPredId_5 == (MR_Integer) 3);
#line 329 "special_pred.m"
          (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = !((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded);
#line 329 "special_pred.m"
          if ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 329 "special_pred.m"
            {
#line 330 "special_pred.m"
              (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6)) == (MR_mktag((MR_Integer) 1)));
#line 330 "special_pred.m"
              if ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 330 "special_pred.m"
                {
#line 330 "special_pred.m"
                  {
#line 330 "special_pred.m"
                    hlds__special_pred__Ctors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 0)));
#line 330 "special_pred.m"
                    hlds__special_pred__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 1)));
#line 330 "special_pred.m"
                    hlds__special_pred__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 2)));
#line 330 "special_pred.m"
                    hlds__special_pred__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 3)));
#line 330 "special_pred.m"
                    hlds__special_pred__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 4)));
#line 330 "special_pred.m"
                    hlds__special_pred__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 5)));
#line 330 "special_pred.m"
                    hlds__special_pred__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 330 "special_pred.m"
                    hlds__special_pred__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 330 "special_pred.m"
                    hlds__special_pred__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 7)));
#line 330 "special_pred.m"
                  }
#line 329 "special_pred.m"
                  {
#line 1327 "hlds.special_pred.c"
                    hlds__special_pred__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 331 "special_pred.m"
                    {
#line 331 "special_pred.m"
                      mercury__list__member_2_p_1(hlds__special_pred__TypeCtorInfo_32_32, &(hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13, hlds__special_pred__Ctors_12, hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3, hlds__special_pred__env_ptr);
                    }
#line 329 "special_pred.m"
                  }
#line 330 "special_pred.m"
                }
#line 329 "special_pred.m"
            }
#line 329 "special_pred.m"
        }
#line 329 "special_pred.m"
        (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
#line 329 "special_pred.m"
      }
#line 329 "special_pred.m"
    else
#line 329 "special_pred.m"
      (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_TRUE;
#line 329 "special_pred.m"
  }
#line 329 "special_pred.m"
}

#line 103 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(
#line 103 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_4,
#line 103 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPredId_5,
#line 103 "special_pred.m"
  MR_Word hlds__special_pred__TypeBody_6)
#line 103 "special_pred.m"
{
#line 103 "special_pred.m"
  {
#line 103 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s hlds__special_pred__env;

#line 103 "special_pred.m"
    (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__SpecialPredId_5 = hlds__special_pred__SpecialPredId_5;
#line 103 "special_pred.m"
    (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6 = hlds__special_pred__TypeBody_6;
#line 321 "special_pred.m"
#line 321 "special_pred.m"
    switch ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__SpecialPredId_5) {
#line 321 "special_pred.m"
      default:
#line 321 "special_pred.m"
        (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
#line 321 "special_pred.m"
        break;
#line 321 "special_pred.m"
      case (MR_Integer) 2:
#line 325 "special_pred.m"
        {
#line 325 "special_pred.m"
          MR_Word hlds__special_pred__UserCmp_10;
#line 325 "special_pred.m"
          MR_Word hlds__special_pred__V_22_22;
#line 327 "special_pred.m"
          MR_Word hlds__special_pred__V_9_9;
#line 327 "special_pred.m"
          MR_Word hlds__special_pred__V_11_11;

#line 326 "special_pred.m"
          {
#line 326 "special_pred.m"
            (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(hlds__special_pred__ModuleInfo_4, (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, &hlds__special_pred__V_22_22);
          }
#line 325 "special_pred.m"
          if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 325 "special_pred.m"
            {
#line 327 "special_pred.m"
              (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 327 "special_pred.m"
              if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 327 "special_pred.m"
                {
#line 327 "special_pred.m"
                  hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_22_22, (MR_Integer) 0)));
#line 327 "special_pred.m"
                  hlds__special_pred__UserCmp_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_22_22, (MR_Integer) 1)));
#line 327 "special_pred.m"
                  (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__special_pred__UserCmp_10)) == (MR_mktag((MR_Integer) 1)));
#line 327 "special_pred.m"
                  if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 327 "special_pred.m"
                    hlds__special_pred__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__UserCmp_10, (MR_Integer) 0)));
#line 327 "special_pred.m"
                }
#line 325 "special_pred.m"
            }
#line 325 "special_pred.m"
        }
#line 321 "special_pred.m"
        break;
#line 321 "special_pred.m"
      case (MR_Integer) 3:
#line 336 "special_pred.m"
        {
#line 336 "special_pred.m"
          (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_is_solver_type_2_p_0(hlds__special_pred__ModuleInfo_4, (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6);
        }
#line 321 "special_pred.m"
        break;
#line 321 "special_pred.m"
      case (MR_Integer) 0:
#line 321 "special_pred.m"
        {
#line 321 "special_pred.m"
          MR_Word hlds__special_pred__V_33_33;
#line 322 "special_pred.m"
          MR_Word hlds__special_pred__V_36_36;
#line 322 "special_pred.m"
          MR_Word hlds__special_pred__V_37_37;

#line 322 "special_pred.m"
          {
#line 322 "special_pred.m"
            (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(hlds__special_pred__ModuleInfo_4, (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, &hlds__special_pred__V_33_33);
          }
#line 321 "special_pred.m"
          if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 321 "special_pred.m"
            {
#line 322 "special_pred.m"
              (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 322 "special_pred.m"
              if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 322 "special_pred.m"
                {
#line 322 "special_pred.m"
                  hlds__special_pred__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_33_33, (MR_Integer) 0)));
#line 322 "special_pred.m"
                  hlds__special_pred__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_33_33, (MR_Integer) 1)));
#line 322 "special_pred.m"
                }
#line 321 "special_pred.m"
            }
#line 321 "special_pred.m"
        }
#line 321 "special_pred.m"
        break;
#line 321 "special_pred.m"
    }
#line 321 "special_pred.m"
    if (!((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded))
#line 329 "special_pred.m"
      {
#line 329 "special_pred.m"
        {
#line 329 "special_pred.m"
          hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(&hlds__special_pred__env);
        }
#line 329 "special_pred.m"
      }
#line 321 "special_pred.m"
    return (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded;
#line 103 "special_pred.m"
  }
#line 103 "special_pred.m"
}

#line 94 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__special_pred_is_generated_lazily_4_p_0(
#line 94 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_5,
#line 94 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_6,
#line 94 "special_pred.m"
  MR_Word hlds__special_pred__TypeBody_7,
#line 94 "special_pred.m"
  MR_Word hlds__special_pred__TypeStatus_8)
#line 94 "special_pred.m"
{
#line 274 "special_pred.m"
  {
#line 274 "special_pred.m"
    MR_bool hlds__special_pred__succeeded = ((((MR_tag((MR_Word) hlds__special_pred__TypeBody_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 274 "special_pred.m"
    MR_Word hlds__special_pred__CtorCat_11;
#line 280 "special_pred.m"
    MR_Word hlds__special_pred__V_9_9;
#line 280 "special_pred.m"
    MR_Word hlds__special_pred__V_10_10;
#line 281 "special_pred.m"
    MR_Word hlds__special_pred__V_14_14;

#line 280 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 280 "special_pred.m"
      {
#line 280 "special_pred.m"
        hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 1)));
#line 280 "special_pred.m"
        hlds__special_pred__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 2)));
#line 280 "special_pred.m"
      }
#line 280 "special_pred.m"
    hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 274 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 274 "special_pred.m"
      {
#line 281 "special_pred.m"
        hlds__special_pred__succeeded = ((((MR_tag((MR_Word) hlds__special_pred__TypeBody_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 281 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 281 "special_pred.m"
          {
#line 281 "special_pred.m"
            hlds__special_pred__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 1)));
#line 281 "special_pred.m"
            hlds__special_pred__succeeded = (hlds__special_pred__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 281 "special_pred.m"
          }
#line 281 "special_pred.m"
        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 274 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 274 "special_pred.m"
          {
#line 283 "special_pred.m"
            {
#line 283 "special_pred.m"
              hlds__special_pred__CtorCat_11 = check_hlds__type_util__classify_type_ctor_2_f_0(hlds__special_pred__ModuleInfo_5, hlds__special_pred__TypeCtor_6);
            }
#line 285 "special_pred.m"
            hlds__special_pred__succeeded = (hlds__special_pred__CtorCat_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 286 "special_pred.m"
            if (!(hlds__special_pred__succeeded))
#line 290 "special_pred.m"
              {
#line 311 "special_pred.m"
                MR_Word hlds__special_pred__V_20_20;
#line 316 "special_pred.m"
                MR_Word hlds__special_pred__V_24_24;

#line 288 "special_pred.m"
                if (((MR_tag((MR_Word) hlds__special_pred__CtorCat_11)) == (MR_mktag((MR_Integer) 2))))
#line 288 "special_pred.m"
                  hlds__special_pred__succeeded = MR_TRUE;
#line 288 "special_pred.m"
                else
#line 288 "special_pred.m"
                if (((((MR_tag((MR_Word) hlds__special_pred__CtorCat_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__CtorCat_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 287 "special_pred.m"
                  hlds__special_pred__succeeded = MR_TRUE;
#line 288 "special_pred.m"
                else
#line 288 "special_pred.m"
                  hlds__special_pred__succeeded = MR_FALSE;
#line 288 "special_pred.m"
                if (!(hlds__special_pred__succeeded))
#line 289 "special_pred.m"
                  {
#line 289 "special_pred.m"
                    MR_Word hlds__special_pred__V_15_15;

#line 289 "special_pred.m"
                    {
#line 289 "special_pred.m"
                      hlds__special_pred__V_15_15 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(hlds__special_pred__CtorCat_11);
                    }
#line 289 "special_pred.m"
                    hlds__special_pred__succeeded = (hlds__special_pred__V_15_15 == (MR_Integer) 1);
#line 289 "special_pred.m"
                  }
#line 290 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 290 "special_pred.m"
                  {
#line 299 "special_pred.m"
                    {
#line 299 "special_pred.m"
                      MR_Word hlds__special_pred__V_23_23;

#line 299 "special_pred.m"
                      {
#line 299 "special_pred.m"
                        hlds__special_pred__V_23_23 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__special_pred__TypeStatus_8);
                      }
#line 299 "special_pred.m"
                      hlds__special_pred__succeeded = (hlds__special_pred__V_23_23 == (MR_Integer) 0);
#line 299 "special_pred.m"
                    }
#line 300 "special_pred.m"
                    if (!(hlds__special_pred__succeeded))
#line 301 "special_pred.m"
                      {
#line 301 "special_pred.m"
                        MR_Word hlds__special_pred__Globals_19;

#line 301 "special_pred.m"
                        {
#line 301 "special_pred.m"
                          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_5, &hlds__special_pred__Globals_19);
                        }
#line 302 "special_pred.m"
                        {
#line 302 "special_pred.m"
                          hlds__special_pred__succeeded = libs__globals__lookup_bool_option_3_p_1(hlds__special_pred__Globals_19, (MR_Integer) 271, (MR_Integer) 0);
                        }
#line 301 "special_pred.m"
                      }
#line 290 "special_pred.m"
                    if (hlds__special_pred__succeeded)
#line 290 "special_pred.m"
                      {
#line 311 "special_pred.m"
                        hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__TypeBody_7)) == (MR_mktag((MR_Integer) 0)));
#line 311 "special_pred.m"
                        if (hlds__special_pred__succeeded)
#line 311 "special_pred.m"
                          hlds__special_pred__V_20_20 = (MR_Word) MR_body(((MR_Word) hlds__special_pred__TypeBody_7), (MR_Integer) 0);
#line 311 "special_pred.m"
                        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 290 "special_pred.m"
                        if (hlds__special_pred__succeeded)
#line 290 "special_pred.m"
                          {
#line 316 "special_pred.m"
                            hlds__special_pred__V_24_24 = (MR_Integer) 0;
#line 316 "special_pred.m"
                            {
#line 316 "special_pred.m"
                              hlds__special_pred__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(hlds__special_pred__ModuleInfo_5, hlds__special_pred__V_24_24, hlds__special_pred__TypeBody_7);
                            }
#line 316 "special_pred.m"
                            hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 290 "special_pred.m"
                          }
#line 290 "special_pred.m"
                      }
#line 290 "special_pred.m"
                  }
#line 290 "special_pred.m"
              }
#line 274 "special_pred.m"
          }
#line 274 "special_pred.m"
      }
#line 274 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 274 "special_pred.m"
  }
#line 94 "special_pred.m"
}

#line 89 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__special_pred_is_generated_lazily_2_p_0(
#line 89 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_3,
#line 89 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_4)
#line 89 "special_pred.m"
{
#line 258 "special_pred.m"
  {
#line 258 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 258 "special_pred.m"
    MR_Word hlds__special_pred__CtorCat_5;

#line 259 "special_pred.m"
    {
#line 259 "special_pred.m"
      hlds__special_pred__CtorCat_5 = check_hlds__type_util__classify_type_ctor_2_f_0(hlds__special_pred__ModuleInfo_3, hlds__special_pred__TypeCtor_4);
    }
#line 261 "special_pred.m"
    hlds__special_pred__succeeded = (hlds__special_pred__CtorCat_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 262 "special_pred.m"
    if (!(hlds__special_pred__succeeded))
#line 266 "special_pred.m"
      {
#line 266 "special_pred.m"
        MR_Word hlds__special_pred__TypeTable_8;
#line 266 "special_pred.m"
        MR_Word hlds__special_pred__TypeDefn_9;
#line 266 "special_pred.m"
        MR_Word hlds__special_pred__TypeBody_10;
#line 266 "special_pred.m"
        MR_Word hlds__special_pred__TypeStatus_11;
#line 311 "special_pred.m"
        MR_Word hlds__special_pred__V_17_17;
#line 316 "special_pred.m"
        MR_Word hlds__special_pred__V_21_21;

#line 264 "special_pred.m"
        if (((MR_tag((MR_Word) hlds__special_pred__CtorCat_5)) == (MR_mktag((MR_Integer) 2))))
#line 264 "special_pred.m"
          hlds__special_pred__succeeded = MR_TRUE;
#line 264 "special_pred.m"
        else
#line 264 "special_pred.m"
        if (((((MR_tag((MR_Word) hlds__special_pred__CtorCat_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__CtorCat_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 263 "special_pred.m"
          hlds__special_pred__succeeded = MR_TRUE;
#line 264 "special_pred.m"
        else
#line 264 "special_pred.m"
          hlds__special_pred__succeeded = MR_FALSE;
#line 264 "special_pred.m"
        if (!(hlds__special_pred__succeeded))
#line 265 "special_pred.m"
          {
#line 265 "special_pred.m"
            MR_Word hlds__special_pred__V_12_12;

#line 265 "special_pred.m"
            {
#line 265 "special_pred.m"
              hlds__special_pred__V_12_12 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(hlds__special_pred__CtorCat_5);
            }
#line 265 "special_pred.m"
            hlds__special_pred__succeeded = (hlds__special_pred__V_12_12 == (MR_Integer) 1);
#line 265 "special_pred.m"
          }
#line 266 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 266 "special_pred.m"
          {
#line 267 "special_pred.m"
            {
#line 267 "special_pred.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__special_pred__ModuleInfo_3, &hlds__special_pred__TypeTable_8);
            }
#line 268 "special_pred.m"
            {
#line 268 "special_pred.m"
              hlds__special_pred__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__special_pred__TypeTable_8, hlds__special_pred__TypeCtor_4, &hlds__special_pred__TypeDefn_9);
            }
#line 266 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 266 "special_pred.m"
              {
#line 269 "special_pred.m"
                {
#line 269 "special_pred.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(hlds__special_pred__TypeDefn_9, &hlds__special_pred__TypeBody_10);
                }
#line 270 "special_pred.m"
                {
#line 270 "special_pred.m"
                  hlds__hlds_data__get_type_defn_status_2_p_0(hlds__special_pred__TypeDefn_9, &hlds__special_pred__TypeStatus_11);
                }
#line 299 "special_pred.m"
                {
#line 299 "special_pred.m"
                  MR_Word hlds__special_pred__V_20_20;

#line 299 "special_pred.m"
                  {
#line 299 "special_pred.m"
                    hlds__special_pred__V_20_20 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__special_pred__TypeStatus_11);
                  }
#line 299 "special_pred.m"
                  hlds__special_pred__succeeded = (hlds__special_pred__V_20_20 == (MR_Integer) 0);
#line 299 "special_pred.m"
                }
#line 300 "special_pred.m"
                if (!(hlds__special_pred__succeeded))
#line 301 "special_pred.m"
                  {
#line 301 "special_pred.m"
                    MR_Word hlds__special_pred__Globals_16;

#line 301 "special_pred.m"
                    {
#line 301 "special_pred.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_3, &hlds__special_pred__Globals_16);
                    }
#line 302 "special_pred.m"
                    {
#line 302 "special_pred.m"
                      hlds__special_pred__succeeded = libs__globals__lookup_bool_option_3_p_1(hlds__special_pred__Globals_16, (MR_Integer) 271, (MR_Integer) 0);
                    }
#line 301 "special_pred.m"
                  }
#line 266 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 266 "special_pred.m"
                  {
#line 311 "special_pred.m"
                    hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__TypeBody_10)) == (MR_mktag((MR_Integer) 0)));
#line 311 "special_pred.m"
                    if (hlds__special_pred__succeeded)
#line 311 "special_pred.m"
                      hlds__special_pred__V_17_17 = (MR_Word) MR_body(((MR_Word) hlds__special_pred__TypeBody_10), (MR_Integer) 0);
#line 311 "special_pred.m"
                    hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 266 "special_pred.m"
                    if (hlds__special_pred__succeeded)
#line 266 "special_pred.m"
                      {
#line 316 "special_pred.m"
                        hlds__special_pred__V_21_21 = (MR_Integer) 0;
#line 316 "special_pred.m"
                        {
#line 316 "special_pred.m"
                          hlds__special_pred__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(hlds__special_pred__ModuleInfo_3, hlds__special_pred__V_21_21, hlds__special_pred__TypeBody_10);
                        }
#line 316 "special_pred.m"
                        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 266 "special_pred.m"
                      }
#line 266 "special_pred.m"
                  }
#line 266 "special_pred.m"
              }
#line 266 "special_pred.m"
          }
#line 266 "special_pred.m"
      }
#line 258 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 258 "special_pred.m"
  }
#line 89 "special_pred.m"
}

#line 79 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_get_type_det_3_p_0(
#line 79 "special_pred.m"
  MR_Word hlds__special_pred__SpecialId_4,
#line 79 "special_pred.m"
  MR_Word hlds__special_pred__ArgTypes_5,
#line 79 "special_pred.m"
  MR_Word * hlds__special_pred__Type_6)
#line 79 "special_pred.m"
{
#line 252 "special_pred.m"
  {
#line 252 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 252 "special_pred.m"
    MR_Word hlds__special_pred__TypePrime_7;

#line 250 "special_pred.m"
    {
#line 250 "special_pred.m"
      hlds__special_pred__succeeded = hlds__special_pred__special_pred_get_type_3_p_0(hlds__special_pred__SpecialId_4, hlds__special_pred__ArgTypes_5, &hlds__special_pred__TypePrime_7);
    }
#line 252 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 251 "special_pred.m"
      *hlds__special_pred__Type_6 = hlds__special_pred__TypePrime_7;
#line 252 "special_pred.m"
    else
#line 253 "special_pred.m"
      {
#line 253 "special_pred.m"
        {
#line 253 "special_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.special_pred", (MR_String) "predicate \140hlds.special_pred.special_pred_get_type_det\'/3", (MR_String) "special_pred_get_type failed");
#line 253 "special_pred.m"
          return;
        }
#line 253 "special_pred.m"
      }
#line 252 "special_pred.m"
  }
#line 79 "special_pred.m"
}

#line 76 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__special_pred_get_type_3_p_0(
#line 76 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_1,
#line 76 "special_pred.m"
  MR_Word hlds__special_pred__Types_2,
#line 76 "special_pred.m"
  MR_Word * hlds__special_pred__T_3)
#line 76 "special_pred.m"
{
#line 240 "special_pred.m"
  {
#line 240 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 240 "special_pred.m"
#line 240 "special_pred.m"
    switch (hlds__special_pred__HeadVar__1_1) {
#line 240 "special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 240 "special_pred.m"
      case (MR_Integer) 2:
#line 244 "special_pred.m"
        {
#line 244 "special_pred.m"
          MR_Word hlds__special_pred__V_17_17;
#line 245 "special_pred.m"
          MR_Word hlds__special_pred__V_16_16;

#line 245 "special_pred.m"
          {
#line 245 "special_pred.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_17_17);
          }
#line 245 "special_pred.m"
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 245 "special_pred.m"
          if (hlds__special_pred__succeeded)
#line 245 "special_pred.m"
            {
#line 245 "special_pred.m"
              *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_17_17, (MR_Integer) 0)));
#line 245 "special_pred.m"
              hlds__special_pred__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_17_17, (MR_Integer) 1)));
#line 245 "special_pred.m"
            }
#line 244 "special_pred.m"
        }
#line 240 "special_pred.m"
        break;
#line 240 "special_pred.m"
      case (MR_Integer) 1:
#line 242 "special_pred.m"
        {
#line 242 "special_pred.m"
          MR_Word hlds__special_pred__V_12_12;
#line 242 "special_pred.m"
          MR_Word hlds__special_pred__V_13_13;
#line 243 "special_pred.m"
          MR_Word hlds__special_pred__V_10_10;
#line 243 "special_pred.m"
          MR_Word hlds__special_pred__V_11_11;

#line 243 "special_pred.m"
          {
#line 243 "special_pred.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_12_12);
          }
#line 243 "special_pred.m"
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 243 "special_pred.m"
          if (hlds__special_pred__succeeded)
#line 243 "special_pred.m"
            {
#line 243 "special_pred.m"
              hlds__special_pred__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_12_12, (MR_Integer) 0)));
#line 243 "special_pred.m"
              hlds__special_pred__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_12_12, (MR_Integer) 1)));
#line 243 "special_pred.m"
              hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 243 "special_pred.m"
              if (hlds__special_pred__succeeded)
#line 243 "special_pred.m"
                {
#line 243 "special_pred.m"
                  *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_13_13, (MR_Integer) 0)));
#line 243 "special_pred.m"
                  hlds__special_pred__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_13_13, (MR_Integer) 1)));
#line 243 "special_pred.m"
                }
#line 243 "special_pred.m"
            }
#line 242 "special_pred.m"
        }
#line 240 "special_pred.m"
        break;
#line 240 "special_pred.m"
      case (MR_Integer) 3:
#line 246 "special_pred.m"
        {
#line 246 "special_pred.m"
          MR_Word hlds__special_pred__V_21_21;
#line 247 "special_pred.m"
          MR_Word hlds__special_pred__V_20_20;

#line 247 "special_pred.m"
          {
#line 247 "special_pred.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_21_21);
          }
#line 247 "special_pred.m"
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 247 "special_pred.m"
          if (hlds__special_pred__succeeded)
#line 247 "special_pred.m"
            {
#line 247 "special_pred.m"
              *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_21_21, (MR_Integer) 0)));
#line 247 "special_pred.m"
              hlds__special_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_21_21, (MR_Integer) 1)));
#line 247 "special_pred.m"
            }
#line 246 "special_pred.m"
        }
#line 240 "special_pred.m"
        break;
#line 240 "special_pred.m"
      case (MR_Integer) 0:
#line 240 "special_pred.m"
        {
#line 240 "special_pred.m"
          MR_Word hlds__special_pred__V_7_7;
#line 241 "special_pred.m"
          MR_Word hlds__special_pred__V_6_6;

#line 241 "special_pred.m"
          {
#line 241 "special_pred.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_7_7);
          }
#line 241 "special_pred.m"
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 241 "special_pred.m"
          if (hlds__special_pred__succeeded)
#line 241 "special_pred.m"
            {
#line 241 "special_pred.m"
              *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_7_7, (MR_Integer) 0)));
#line 241 "special_pred.m"
              hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_7_7, (MR_Integer) 1)));
#line 241 "special_pred.m"
            }
#line 240 "special_pred.m"
        }
#line 240 "special_pred.m"
        break;
#line 240 "special_pred.m"
    }
#line 240 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 240 "special_pred.m"
  }
#line 76 "special_pred.m"
}

#line 63 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_interface_5_p_0(
#line 63 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPredId_6,
#line 63 "special_pred.m"
  MR_Word hlds__special_pred__Type_7,
#line 63 "special_pred.m"
  MR_Word * hlds__special_pred__ArgTypes_8,
#line 63 "special_pred.m"
  MR_Word * hlds__special_pred__ArgModes_9,
#line 63 "special_pred.m"
  MR_Word * hlds__special_pred__Detism_10)
#line 63 "special_pred.m"
{
#line 213 "special_pred.m"
  {
#line 213 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 213 "special_pred.m"
#line 213 "special_pred.m"
    switch (hlds__special_pred__SpecialPredId_6) {
#line 213 "special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 213 "special_pred.m"
      case (MR_Integer) 2:
#line 226 "special_pred.m"
        {
#line 226 "special_pred.m"
          MR_Word hlds__special_pred__Uo_13;
#line 226 "special_pred.m"
          MR_Word hlds__special_pred__V_17_17;
#line 226 "special_pred.m"
          MR_Word hlds__special_pred__V_18_18;
#line 226 "special_pred.m"
          MR_Word hlds__special_pred__V_19_19;
#line 226 "special_pred.m"
          MR_Word hlds__special_pred__V_21_21;
#line 226 "special_pred.m"
          MR_Word hlds__special_pred__V_22_22;
#line 226 "special_pred.m"
          MR_Word hlds__special_pred__In_34;

#line 227 "special_pred.m"
          {
#line 227 "special_pred.m"
            hlds__special_pred__V_17_17 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
          }
#line 227 "special_pred.m"
          {
#line 227 "special_pred.m"
            hlds__special_pred__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_19_19, 0) = ((MR_Box) (hlds__special_pred__Type_7));
#line 227 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "special_pred.m"
          }
#line 227 "special_pred.m"
          {
#line 227 "special_pred.m"
            hlds__special_pred__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, 0) = ((MR_Box) (hlds__special_pred__Type_7));
#line 227 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, 1) = ((MR_Box) (hlds__special_pred__V_19_19));
#line 227 "special_pred.m"
          }
#line 227 "special_pred.m"
          {
#line 227 "special_pred.m"
            MR_Word base;
#line 227 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "special_pred.m"
            *hlds__special_pred__ArgTypes_8 = base;
#line 227 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__V_17_17));
#line 227 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_18_18));
#line 227 "special_pred.m"
          }
#line 228 "special_pred.m"
          {
#line 228 "special_pred.m"
            parse_tree__prog_mode__in_mode_1_p_0(&hlds__special_pred__In_34);
          }
#line 229 "special_pred.m"
          {
#line 229 "special_pred.m"
            parse_tree__prog_mode__uo_mode_1_p_0(&hlds__special_pred__Uo_13);
          }
#line 230 "special_pred.m"
          {
#line 230 "special_pred.m"
            hlds__special_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_22_22, 0) = ((MR_Box) (hlds__special_pred__In_34));
#line 230 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "special_pred.m"
          }
#line 230 "special_pred.m"
          {
#line 230 "special_pred.m"
            hlds__special_pred__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_21_21, 0) = ((MR_Box) (hlds__special_pred__In_34));
#line 230 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_21_21, 1) = ((MR_Box) (hlds__special_pred__V_22_22));
#line 230 "special_pred.m"
          }
#line 230 "special_pred.m"
          {
#line 230 "special_pred.m"
            MR_Word base;
#line 230 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "special_pred.m"
            *hlds__special_pred__ArgModes_9 = base;
#line 230 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Uo_13));
#line 230 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_21_21));
#line 230 "special_pred.m"
          }
#line 231 "special_pred.m"
          *hlds__special_pred__Detism_10 = (MR_Integer) 0;
#line 226 "special_pred.m"
        }
#line 213 "special_pred.m"
        break;
#line 213 "special_pred.m"
      case (MR_Integer) 1:
#line 219 "special_pred.m"
        {
#line 219 "special_pred.m"
          MR_Word hlds__special_pred__Out_12;
#line 219 "special_pred.m"
          MR_Word hlds__special_pred__V_24_24;
#line 219 "special_pred.m"
          MR_Word hlds__special_pred__V_25_25;
#line 219 "special_pred.m"
          MR_Word hlds__special_pred__V_27_27;
#line 219 "special_pred.m"
          MR_Word hlds__special_pred__In_33;

#line 220 "special_pred.m"
          {
#line 220 "special_pred.m"
            hlds__special_pred__V_25_25 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 220 "special_pred.m"
          {
#line 220 "special_pred.m"
            hlds__special_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_24_24, 0) = ((MR_Box) (hlds__special_pred__V_25_25));
#line 220 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "special_pred.m"
          }
#line 220 "special_pred.m"
          {
#line 220 "special_pred.m"
            MR_Word base;
#line 220 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "special_pred.m"
            *hlds__special_pred__ArgTypes_8 = base;
#line 220 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Type_7));
#line 220 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_24_24));
#line 220 "special_pred.m"
          }
#line 221 "special_pred.m"
          {
#line 221 "special_pred.m"
            parse_tree__prog_mode__in_mode_1_p_0(&hlds__special_pred__In_33);
          }
#line 222 "special_pred.m"
          {
#line 222 "special_pred.m"
            parse_tree__prog_mode__out_mode_1_p_0(&hlds__special_pred__Out_12);
          }
#line 223 "special_pred.m"
          {
#line 223 "special_pred.m"
            hlds__special_pred__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_27_27, 0) = ((MR_Box) (hlds__special_pred__Out_12));
#line 223 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 223 "special_pred.m"
          }
#line 223 "special_pred.m"
          {
#line 223 "special_pred.m"
            MR_Word base;
#line 223 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "special_pred.m"
            *hlds__special_pred__ArgModes_9 = base;
#line 223 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__In_33));
#line 223 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_27_27));
#line 223 "special_pred.m"
          }
#line 224 "special_pred.m"
          *hlds__special_pred__Detism_10 = (MR_Integer) 0;
#line 219 "special_pred.m"
        }
#line 213 "special_pred.m"
        break;
#line 213 "special_pred.m"
      case (MR_Integer) 3:
#line 233 "special_pred.m"
        {
#line 233 "special_pred.m"
          MR_Word hlds__special_pred__InAny_14;

#line 234 "special_pred.m"
          {
#line 234 "special_pred.m"
            MR_Word base;
#line 234 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "special_pred.m"
            *hlds__special_pred__ArgTypes_8 = base;
#line 234 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Type_7));
#line 234 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "special_pred.m"
          }
#line 235 "special_pred.m"
          {
#line 235 "special_pred.m"
            hlds__special_pred__InAny_14 = parse_tree__prog_mode__out_any_mode_0_f_0();
          }
#line 236 "special_pred.m"
          {
#line 236 "special_pred.m"
            MR_Word base;
#line 236 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "special_pred.m"
            *hlds__special_pred__ArgModes_9 = base;
#line 236 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__InAny_14));
#line 236 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "special_pred.m"
          }
#line 237 "special_pred.m"
          *hlds__special_pred__Detism_10 = (MR_Integer) 0;
#line 233 "special_pred.m"
        }
#line 213 "special_pred.m"
        break;
#line 213 "special_pred.m"
      case (MR_Integer) 0:
#line 213 "special_pred.m"
        {
#line 213 "special_pred.m"
          MR_Word hlds__special_pred__In_11;
#line 213 "special_pred.m"
          MR_Word hlds__special_pred__V_29_29;
#line 213 "special_pred.m"
          MR_Word hlds__special_pred__V_31_31;

#line 214 "special_pred.m"
          {
#line 214 "special_pred.m"
            hlds__special_pred__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_29_29, 0) = ((MR_Box) (hlds__special_pred__Type_7));
#line 214 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "special_pred.m"
          }
#line 214 "special_pred.m"
          {
#line 214 "special_pred.m"
            MR_Word base;
#line 214 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "special_pred.m"
            *hlds__special_pred__ArgTypes_8 = base;
#line 214 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Type_7));
#line 214 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_29_29));
#line 214 "special_pred.m"
          }
#line 215 "special_pred.m"
          {
#line 215 "special_pred.m"
            parse_tree__prog_mode__in_mode_1_p_0(&hlds__special_pred__In_11);
          }
#line 216 "special_pred.m"
          {
#line 216 "special_pred.m"
            hlds__special_pred__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_31_31, 0) = ((MR_Box) (hlds__special_pred__In_11));
#line 216 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "special_pred.m"
          }
#line 216 "special_pred.m"
          {
#line 216 "special_pred.m"
            MR_Word base;
#line 216 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "special_pred.m"
            *hlds__special_pred__ArgModes_9 = base;
#line 216 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__In_11));
#line 216 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_31_31));
#line 216 "special_pred.m"
          }
#line 217 "special_pred.m"
          *hlds__special_pred__Detism_10 = (MR_Integer) 1;
#line 213 "special_pred.m"
        }
#line 213 "special_pred.m"
        break;
#line 213 "special_pred.m"
    }
#line 213 "special_pred.m"
  }
#line 63 "special_pred.m"
}

#line 56 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_mode_num_2_p_0(
#line 56 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_3,
#line 56 "special_pred.m"
  MR_Integer * hlds__special_pred__HeadVar__2_2)
#line 56 "special_pred.m"
{
#line 206 "special_pred.m"
  {
#line 206 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 206 "special_pred.m"
    {
#line 206 "special_pred.m"
      hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_p_0(hlds__special_pred__HeadVar__2_2);
#line 206 "special_pred.m"
      return;
    }
#line 206 "special_pred.m"
  }
#line 56 "special_pred.m"
}

#line 54 "special_pred.m"
MR_String MR_CALL 
hlds__special_pred__special_pred_name_2_f_0(
#line 54 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPred_4,
#line 54 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__2_2)
#line 54 "special_pred.m"
{
#line 185 "special_pred.m"
  {
#line 185 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 185 "special_pred.m"
    MR_String hlds__special_pred__Name_7;

#line 185 "special_pred.m"
    {
#line 185 "special_pred.m"
      return hlds__special_pred__Name_7 = hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_f_0(hlds__special_pred__SpecialPred_4);
    }
#line 185 "special_pred.m"
    return hlds__special_pred__Name_7;
#line 185 "special_pred.m"
  }
#line 54 "special_pred.m"
}

#line 48 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_description_2_p_0(
#line 48 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_1,
#line 48 "special_pred.m"
  MR_String * hlds__special_pred__HeadVar__2_2)
#line 48 "special_pred.m"
{
#line 177 "special_pred.m"
  {
#line 177 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 177 "special_pred.m"
    *hlds__special_pred__HeadVar__2_2 = ((&hlds__special_pred_vector_common_3[0 + hlds__special_pred__HeadVar__1_1]))->hlds__special_pred__vector_common_type_3_0__vct_3_f_0;
#line 177 "special_pred.m"
  }
#line 48 "special_pred.m"
}

#line 46 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_list_1_p_0(
#line 46 "special_pred.m"
  MR_Word * hlds__special_pred__HeadVar__1_1)
#line 46 "special_pred.m"
{
#line 175 "special_pred.m"
  {
#line 175 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 175 "special_pred.m"
    *hlds__special_pred__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__special_pred_scalar_common_1[3]);
#line 175 "special_pred.m"
  }
#line 46 "special_pred.m"
}

#line 41 "special_pred.m"
void MR_CALL 
hlds__special_pred__lookup_special_pred_maps_4_p_0(
#line 41 "special_pred.m"
  MR_Word hlds__special_pred__SpecMaps_5,
#line 41 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPredId_6,
#line 41 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_7,
#line 41 "special_pred.m"
  MR_Word * hlds__special_pred__PredId_8)
#line 41 "special_pred.m"
{
#line 151 "special_pred.m"
  {
#line 151 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 151 "special_pred.m"
    MR_Word hlds__special_pred__SpecMap_9;
#line 151 "special_pred.m"
    MR_Word hlds__special_pred__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 3)));
#line 151 "special_pred.m"
    MR_Word hlds__special_pred__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 2)));
#line 151 "special_pred.m"
    MR_Word hlds__special_pred__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 1)));
#line 151 "special_pred.m"
    MR_Word hlds__special_pred__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 0)));
#line 153 "special_pred.m"
    MR_Box hlds__special_pred__conv0_PredId_8;

#line 160 "special_pred.m"
#line 160 "special_pred.m"
    switch (hlds__special_pred__SpecialPredId_6) {
#line 160 "special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 160 "special_pred.m"
      case (MR_Integer) 2:
#line 167 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_28_28;
#line 160 "special_pred.m"
        break;
#line 160 "special_pred.m"
      case (MR_Integer) 1:
#line 164 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_29_29;
#line 160 "special_pred.m"
        break;
#line 160 "special_pred.m"
      case (MR_Integer) 3:
#line 170 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_27_27;
#line 160 "special_pred.m"
        break;
#line 160 "special_pred.m"
      case (MR_Integer) 0:
#line 161 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_30_30;
#line 160 "special_pred.m"
        break;
#line 160 "special_pred.m"
    }
#line 153 "special_pred.m"
    {
#line 153 "special_pred.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__special_pred__SpecMap_9, ((MR_Box) (hlds__special_pred__TypeCtor_7)), &hlds__special_pred__conv0_PredId_8);
    }
#line 153 "special_pred.m"
    *hlds__special_pred__PredId_8 = ((MR_Word) hlds__special_pred__conv0_PredId_8);
#line 151 "special_pred.m"
  }
#line 41 "special_pred.m"
}

#line 39 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__search_special_pred_maps_4_p_0(
#line 39 "special_pred.m"
  MR_Word hlds__special_pred__SpecMaps_5,
#line 39 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPredId_6,
#line 39 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_7,
#line 39 "special_pred.m"
  MR_Word * hlds__special_pred__PredId_8)
#line 39 "special_pred.m"
{
#line 147 "special_pred.m"
  {
#line 147 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 147 "special_pred.m"
    MR_Word hlds__special_pred__SpecMap_9;
#line 147 "special_pred.m"
    MR_Word hlds__special_pred__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 3)));
#line 147 "special_pred.m"
    MR_Word hlds__special_pred__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 2)));
#line 147 "special_pred.m"
    MR_Word hlds__special_pred__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 1)));
#line 147 "special_pred.m"
    MR_Word hlds__special_pred__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 0)));
#line 149 "special_pred.m"
    MR_Box hlds__special_pred__conv0_PredId_8;

#line 160 "special_pred.m"
#line 160 "special_pred.m"
    switch (hlds__special_pred__SpecialPredId_6) {
#line 160 "special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 160 "special_pred.m"
      case (MR_Integer) 2:
#line 167 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_28_28;
#line 160 "special_pred.m"
        break;
#line 160 "special_pred.m"
      case (MR_Integer) 1:
#line 164 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_29_29;
#line 160 "special_pred.m"
        break;
#line 160 "special_pred.m"
      case (MR_Integer) 3:
#line 170 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_27_27;
#line 160 "special_pred.m"
        break;
#line 160 "special_pred.m"
      case (MR_Integer) 0:
#line 161 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_30_30;
#line 160 "special_pred.m"
        break;
#line 160 "special_pred.m"
    }
#line 149 "special_pred.m"
    {
#line 149 "special_pred.m"
      hlds__special_pred__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__special_pred__SpecMap_9, ((MR_Box) (hlds__special_pred__TypeCtor_7)), &hlds__special_pred__conv0_PredId_8);
    }
#line 149 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 149 "special_pred.m"
      {
#line 149 "special_pred.m"
        *hlds__special_pred__PredId_8 = ((MR_Word) hlds__special_pred__conv0_PredId_8);
#line 149 "special_pred.m"
        hlds__special_pred__succeeded = MR_TRUE;
#line 149 "special_pred.m"
      }
#line 147 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 147 "special_pred.m"
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

	MR_register_type_ctor_info(&hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_maps_0);
}

void mercury__hlds__special_pred__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.special_pred. */
