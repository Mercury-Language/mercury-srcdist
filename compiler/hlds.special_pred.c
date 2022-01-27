/*
** Automatically generated from `special_pred.m'
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
#include "parse_tree.maybe_error.mih"
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



#line 105 "special_pred.m"
struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s {
#line 105 "special_pred.m"
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__SpecialPredId_5;
#line 105 "special_pred.m"
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6;
#line 325 "special_pred.m"
  MR_bool hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded;
#line 333 "special_pred.m"
  jmp_buf hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0;
#line 333 "special_pred.m"
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13;
#line 333 "special_pred.m"
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14;
#line 335 "special_pred.m"
  MR_Box hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13;
#line 105 "special_pred.m"
};


#line 163 "hlds.special_pred.c"
static const MR_FA_TypeInfo_Struct2 hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 166 "hlds.special_pred.c"
static const MR_PseudoTypeInfo hlds__special_pred__hlds__special_pred__field_types_special_pred_maps_0_0[4];

#line 169 "hlds.special_pred.c"
static const MR_ConstString hlds__special_pred__hlds__special_pred__field_names_special_pred_maps_0_0[4];

#line 172 "hlds.special_pred.c"
static const MR_DuFunctorDesc hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0;

#line 175 "hlds.special_pred.c"
static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0[1];

#line 178 "hlds.special_pred.c"
static const MR_DuPtagLayout hlds__special_pred__hlds__special_pred__du_ptag_ordered_special_pred_maps_0[1];

#line 181 "hlds.special_pred.c"
static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_name_ordered_special_pred_maps_0[1];

#line 184 "hlds.special_pred.c"
static const MR_Integer hlds__special_pred__hlds__special_pred__functor_number_map_special_pred_maps_0[1];

#line 187 "hlds.special_pred.c"
static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0_10001(
#line 190 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_1,
#line 192 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2);

#line 195 "hlds.special_pred.c"
static void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0_10001(
#line 198 "hlds.special_pred.c"
  MR_Box * hlds__special_pred__wrapper_arg_1,
#line 200 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2,
#line 202 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_3);

#line 333 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(
#line 333 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg);

#line 335 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3(
#line 335 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg);

#line 333 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(
#line 333 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg);

#line 333 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(
#line 333 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg);


static /* final */ const MR_Box hlds__special_pred_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__special_pred_scalar_common_2[1][3];


#line 181 "special_pred.m"
/* sealed */ struct hlds__special_pred__vector_common_type_3_0_s {
#line 181 "special_pred.m"
  const MR_String hlds__special_pred__vector_common_type_3_0__vct_3_f_0;
#line 181 "special_pred.m"
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



#line 304 "hlds.special_pred.c"
static const MR_FA_TypeInfo_Struct2 hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 313 "hlds.special_pred.c"
static const MR_PseudoTypeInfo hlds__special_pred__hlds__special_pred__field_types_special_pred_maps_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 321 "hlds.special_pred.c"
static const MR_ConstString hlds__special_pred__hlds__special_pred__field_names_special_pred_maps_0_0[4] = {
  (MR_String) "spm_unify_map",
  (MR_String) "spm_index_map",
  (MR_String) "spm_compare_map",
  (MR_String) "spm_init_map"
};

#line 329 "hlds.special_pred.c"
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

#line 344 "hlds.special_pred.c"
static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0[1] = {
  &hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0
};

#line 349 "hlds.special_pred.c"
static const MR_DuPtagLayout hlds__special_pred__hlds__special_pred__du_ptag_ordered_special_pred_maps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0
  }
};

#line 358 "hlds.special_pred.c"
static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_name_ordered_special_pred_maps_0[1] = {
  &hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0
};

#line 363 "hlds.special_pred.c"
static const MR_Integer hlds__special_pred__hlds__special_pred__functor_number_map_special_pred_maps_0[1] = {
  (MR_Integer) 0
};

#line 368 "hlds.special_pred.c"
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

#line 385 "hlds.special_pred.c"
static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0_10001(
#line 388 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_1,
#line 390 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2)
#line 392 "hlds.special_pred.c"
{
#line 394 "hlds.special_pred.c"
  {
#line 396 "hlds.special_pred.c"
    MR_bool hlds__special_pred__succeeded;

#line 399 "hlds.special_pred.c"
    {
#line 401 "hlds.special_pred.c"
      hlds__special_pred__succeeded = hlds__special_pred____Unify____special_pred_maps_0_0(((MR_Word) hlds__special_pred__wrapper_arg_1), ((MR_Word) hlds__special_pred__wrapper_arg_2));
    }
#line 404 "hlds.special_pred.c"
    return hlds__special_pred__succeeded;
#line 406 "hlds.special_pred.c"
  }
#line 408 "hlds.special_pred.c"
}

#line 411 "hlds.special_pred.c"
static void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0_10001(
#line 414 "hlds.special_pred.c"
  MR_Box * hlds__special_pred__wrapper_arg_1,
#line 416 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_2,
#line 418 "hlds.special_pred.c"
  MR_Box hlds__special_pred__wrapper_arg_3)
#line 420 "hlds.special_pred.c"
{
#line 422 "hlds.special_pred.c"
  {
#line 424 "hlds.special_pred.c"
    MR_Word hlds__special_pred__conv0_HeadVar__1_1;

#line 427 "hlds.special_pred.c"
    {
#line 429 "hlds.special_pred.c"
      hlds__special_pred____Compare____special_pred_maps_0_0(&hlds__special_pred__conv0_HeadVar__1_1, ((MR_Word) hlds__special_pred__wrapper_arg_2), ((MR_Word) hlds__special_pred__wrapper_arg_3));
    }
#line 432 "hlds.special_pred.c"
    *hlds__special_pred__wrapper_arg_1 = ((MR_Box) (hlds__special_pred__conv0_HeadVar__1_1));
#line 434 "hlds.special_pred.c"
  }
#line 436 "hlds.special_pred.c"
}

#line 58 "special_pred.m"
void MR_CALL 
hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_p_0(
#line 58 "special_pred.m"
  MR_Integer * hlds__special_pred__HeadVar__2_2)
#line 58 "special_pred.m"
{
#line 210 "special_pred.m"
  {
#line 210 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 210 "special_pred.m"
    *hlds__special_pred__HeadVar__2_2 = (MR_Integer) 0;
#line 210 "special_pred.m"
  }
#line 58 "special_pred.m"
}

#line 56 "special_pred.m"
MR_String MR_CALL 
hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_f_0(
#line 56 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPred_4)
#line 56 "special_pred.m"
{
#line 189 "special_pred.m"
  {
#line 189 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 189 "special_pred.m"
    MR_String hlds__special_pred__Name_7;

#line 189 "special_pred.m"
    {
#line 189 "special_pred.m"
      hlds__special_pred__Name_7 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(hlds__special_pred__SpecialPred_4);
    }
#line 189 "special_pred.m"
    return hlds__special_pred__Name_7;
#line 189 "special_pred.m"
  }
#line 56 "special_pred.m"
}

#line 33 "special_pred.m"
void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0(
#line 33 "special_pred.m"
  MR_Word * hlds__special_pred__HeadVar__1_1,
#line 33 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__2_2,
#line 33 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__3_3)
#line 33 "special_pred.m"
{
#line 33 "special_pred.m"
  {
#line 33 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 33 "special_pred.m"
    MR_Integer hlds__special_pred__CastX_15 = (MR_Integer) hlds__special_pred__HeadVar__2_2;
#line 33 "special_pred.m"
    MR_Integer hlds__special_pred__CastY_16 = (MR_Integer) hlds__special_pred__HeadVar__3_3;

#line 33 "special_pred.m"
    hlds__special_pred__succeeded = (hlds__special_pred__CastX_15 == hlds__special_pred__CastY_16);
#line 33 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 508 "hlds.special_pred.c"
      *hlds__special_pred__HeadVar__1_1 = (MR_Integer) 0;
#line 33 "special_pred.m"
    else
#line 33 "special_pred.m"
      {
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 0)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 1)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 2)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 3)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__3_3, (MR_Integer) 0)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__3_3, (MR_Integer) 1)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__3_3, (MR_Integer) 2)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__3_3, (MR_Integer) 3)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_12_12;

#line 33 "special_pred.m"
        {
#line 33 "special_pred.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], &hlds__special_pred__V_12_12, ((MR_Box) (hlds__special_pred__V_4_4)), ((MR_Box) (hlds__special_pred__V_8_8)));
        }
#line 538 "hlds.special_pred.c"
        hlds__special_pred__succeeded = (hlds__special_pred__V_12_12 == (MR_Integer) 0);
#line 33 "special_pred.m"
        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 33 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 33 "special_pred.m"
          *hlds__special_pred__HeadVar__1_1 = hlds__special_pred__V_12_12;
#line 33 "special_pred.m"
        else
#line 33 "special_pred.m"
          {
#line 33 "special_pred.m"
            MR_Word hlds__special_pred__V_13_13;

#line 33 "special_pred.m"
            {
#line 33 "special_pred.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], &hlds__special_pred__V_13_13, ((MR_Box) (hlds__special_pred__V_5_5)), ((MR_Box) (hlds__special_pred__V_9_9)));
            }
#line 558 "hlds.special_pred.c"
            hlds__special_pred__succeeded = (hlds__special_pred__V_13_13 == (MR_Integer) 0);
#line 33 "special_pred.m"
            hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 33 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 33 "special_pred.m"
              *hlds__special_pred__HeadVar__1_1 = hlds__special_pred__V_13_13;
#line 33 "special_pred.m"
            else
#line 33 "special_pred.m"
              {
#line 33 "special_pred.m"
                MR_Word hlds__special_pred__V_14_14;

#line 33 "special_pred.m"
                {
#line 33 "special_pred.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], &hlds__special_pred__V_14_14, ((MR_Box) (hlds__special_pred__V_6_6)), ((MR_Box) (hlds__special_pred__V_10_10)));
                }
#line 578 "hlds.special_pred.c"
                hlds__special_pred__succeeded = (hlds__special_pred__V_14_14 == (MR_Integer) 0);
#line 33 "special_pred.m"
                hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 33 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 33 "special_pred.m"
                  *hlds__special_pred__HeadVar__1_1 = hlds__special_pred__V_14_14;
#line 33 "special_pred.m"
                else
#line 33 "special_pred.m"
                  {
#line 33 "special_pred.m"
                    {
#line 33 "special_pred.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], hlds__special_pred__HeadVar__1_1, ((MR_Box) (hlds__special_pred__V_7_7)), ((MR_Box) (hlds__special_pred__V_11_11)));
                    }
#line 33 "special_pred.m"
                  }
#line 33 "special_pred.m"
              }
#line 33 "special_pred.m"
          }
#line 33 "special_pred.m"
      }
#line 33 "special_pred.m"
  }
#line 33 "special_pred.m"
}

#line 33 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0(
#line 33 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_1,
#line 33 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__2_2)
#line 33 "special_pred.m"
{
#line 33 "special_pred.m"
  {
#line 33 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 33 "special_pred.m"
    MR_Integer hlds__special_pred__CastX_11 = (MR_Integer) hlds__special_pred__HeadVar__1_1;
#line 33 "special_pred.m"
    MR_Integer hlds__special_pred__CastY_12 = (MR_Integer) hlds__special_pred__HeadVar__2_2;

#line 33 "special_pred.m"
    hlds__special_pred__succeeded = (hlds__special_pred__CastX_11 == hlds__special_pred__CastY_12);
#line 33 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 33 "special_pred.m"
      hlds__special_pred__succeeded = MR_TRUE;
#line 33 "special_pred.m"
    else
#line 33 "special_pred.m"
      {
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__TypeInfo_14_14;
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__TypeInfo_15_15;
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__TypeInfo_16_16;
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__1_1, (MR_Integer) 0)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__1_1, (MR_Integer) 1)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__1_1, (MR_Integer) 2)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__1_1, (MR_Integer) 3)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 0)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 1)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 2)));
#line 33 "special_pred.m"
        MR_Word hlds__special_pred__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 3)));

#line 659 "hlds.special_pred.c"
        {
#line 661 "hlds.special_pred.c"
          hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], ((MR_Box) (hlds__special_pred__V_3_3)), ((MR_Box) (hlds__special_pred__V_7_7)));
        }
#line 33 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 33 "special_pred.m"
          {
#line 668 "hlds.special_pred.c"
            hlds__special_pred__TypeInfo_14_14 = (MR_Word) &hlds__special_pred_scalar_common_2[0];
#line 670 "hlds.special_pred.c"
            {
#line 672 "hlds.special_pred.c"
              hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__special_pred__TypeInfo_14_14, ((MR_Box) (hlds__special_pred__V_4_4)), ((MR_Box) (hlds__special_pred__V_8_8)));
            }
#line 33 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 33 "special_pred.m"
              {
#line 679 "hlds.special_pred.c"
                hlds__special_pred__TypeInfo_15_15 = (MR_Word) &hlds__special_pred_scalar_common_2[0];
#line 681 "hlds.special_pred.c"
                {
#line 683 "hlds.special_pred.c"
                  hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__special_pred__TypeInfo_15_15, ((MR_Box) (hlds__special_pred__V_5_5)), ((MR_Box) (hlds__special_pred__V_9_9)));
                }
#line 33 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 33 "special_pred.m"
                  {
#line 690 "hlds.special_pred.c"
                    hlds__special_pred__TypeInfo_16_16 = (MR_Word) &hlds__special_pred_scalar_common_2[0];
#line 692 "hlds.special_pred.c"
                    {
#line 694 "hlds.special_pred.c"
                      hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__special_pred__TypeInfo_16_16, ((MR_Box) (hlds__special_pred__V_6_6)), ((MR_Box) (hlds__special_pred__V_10_10)));
                    }
#line 33 "special_pred.m"
                  }
#line 33 "special_pred.m"
              }
#line 33 "special_pred.m"
          }
#line 33 "special_pred.m"
      }
#line 33 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 33 "special_pred.m"
  }
#line 33 "special_pred.m"
}

#line 126 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(
#line 126 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_2)
#line 126 "special_pred.m"
{
#line 368 "special_pred.m"
  {
#line 368 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 368 "special_pred.m"
    MR_Word hlds__special_pred__Globals_3;
#line 368 "special_pred.m"
    MR_Word hlds__special_pred__Target_4;

#line 374 "special_pred.m"
    {
#line 374 "special_pred.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_2, &hlds__special_pred__Globals_3);
    }
#line 375 "special_pred.m"
    {
#line 375 "special_pred.m"
      libs__globals__get_target_2_p_0(hlds__special_pred__Globals_3, &hlds__special_pred__Target_4);
    }
#line 377 "special_pred.m"
#line 377 "special_pred.m"
    switch (hlds__special_pred__Target_4) {
#line 377 "special_pred.m"
      default:
#line 377 "special_pred.m"
        hlds__special_pred__succeeded = MR_FALSE;
#line 377 "special_pred.m"
        break;
#line 377 "special_pred.m"
      case (MR_Integer) 1:
#line 376 "special_pred.m"
        hlds__special_pred__succeeded = MR_TRUE;
#line 377 "special_pred.m"
        break;
#line 377 "special_pred.m"
      case (MR_Integer) 3:
#line 378 "special_pred.m"
        hlds__special_pred__succeeded = MR_TRUE;
#line 377 "special_pred.m"
        break;
#line 377 "special_pred.m"
      case (MR_Integer) 2:
#line 377 "special_pred.m"
        hlds__special_pred__succeeded = MR_TRUE;
#line 377 "special_pred.m"
        break;
#line 377 "special_pred.m"
    }
#line 368 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 368 "special_pred.m"
  }
#line 126 "special_pred.m"
}

#line 118 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(
#line 118 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_3,
#line 118 "special_pred.m"
  MR_String * hlds__special_pred__TypeName_4)
#line 118 "special_pred.m"
{
#line 356 "special_pred.m"
  {
#line 356 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 356 "special_pred.m"
    MR_Word hlds__special_pred__Builtin_5;
#line 356 "special_pred.m"
    MR_Word hlds__special_pred__V_6_6;
#line 356 "special_pred.m"
    MR_Integer hlds__special_pred__V_7_7;
#line 356 "special_pred.m"
    MR_Word hlds__special_pred__V_8_8;
#line 360 "special_pred.m"
    MR_Integer hlds__special_pred__lo_0;
#line 360 "special_pred.m"
    MR_Integer hlds__special_pred__hi_1;
#line 360 "special_pred.m"
    MR_Integer hlds__special_pred__mid_2;
#line 360 "special_pred.m"
    MR_Integer hlds__special_pred__result_3;

#line 357 "special_pred.m"
    {
#line 357 "special_pred.m"
      hlds__special_pred__Builtin_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 358 "special_pred.m"
    hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_3, (MR_Integer) 0)));
#line 358 "special_pred.m"
    hlds__special_pred__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_3, (MR_Integer) 1)));
#line 358 "special_pred.m"
    hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 358 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 358 "special_pred.m"
      {
#line 358 "special_pred.m"
        hlds__special_pred__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_6_6, (MR_Integer) 0)));
#line 358 "special_pred.m"
        *hlds__special_pred__TypeName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_6_6, (MR_Integer) 1)));
#line 358 "special_pred.m"
        {
#line 358 "special_pred.m"
          hlds__special_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__special_pred__Builtin_5, hlds__special_pred__V_8_8);
        }
#line 356 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 356 "special_pred.m"
          {
#line 358 "special_pred.m"
            hlds__special_pred__succeeded = (hlds__special_pred__V_7_7 == (MR_Integer) 0);
#line 356 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 356 "special_pred.m"
              {
#line 360 "special_pred.m"
                /* binary string simple lookup switch */
#line 360 "special_pred.m"
                hlds__special_pred__lo_0 = (MR_Integer) 0;
#line 360 "special_pred.m"
                hlds__special_pred__hi_1 = (MR_Integer) 4;
#line 360 "special_pred.m"
                do
#line 360 "special_pred.m"
                  {
#line 360 "special_pred.m"
                    hlds__special_pred__mid_2 = (((hlds__special_pred__lo_0 + hlds__special_pred__hi_1)) / (MR_Integer) 2);
#line 360 "special_pred.m"
                    hlds__special_pred__result_3 = MR_strcmp(*hlds__special_pred__TypeName_4, ((&hlds__special_pred_vector_common_3[9 + hlds__special_pred__mid_2]))->hlds__special_pred__vector_common_type_3_0__vct_3_f_0);
#line 360 "special_pred.m"
                    if ((hlds__special_pred__result_3 == (MR_Integer) 0))
#line 360 "special_pred.m"
                      {
#line 360 "special_pred.m"
                        hlds__special_pred__succeeded = MR_TRUE;
#line 360 "special_pred.m"
                        /* jump out of search loop */
#line 360 "special_pred.m"
                        goto label_0;
#line 360 "special_pred.m"
                      }
#line 360 "special_pred.m"
                    else
#line 360 "special_pred.m"
                    if ((hlds__special_pred__result_3 < (MR_Integer) 0))
#line 360 "special_pred.m"
                      hlds__special_pred__hi_1 = (hlds__special_pred__mid_2 - (MR_Integer) 1);
#line 360 "special_pred.m"
                    else
#line 360 "special_pred.m"
                      hlds__special_pred__lo_0 = (hlds__special_pred__mid_2 + (MR_Integer) 1);
#line 360 "special_pred.m"
                  }
#line 360 "special_pred.m"
                while ((hlds__special_pred__lo_0 <= hlds__special_pred__hi_1));
#line 360 "special_pred.m"
                hlds__special_pred__succeeded = MR_FALSE;
#line 360 "special_pred.m"
              label_0:;
#line 356 "special_pred.m"
              }
#line 356 "special_pred.m"
          }
#line 358 "special_pred.m"
      }
#line 356 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 356 "special_pred.m"
  }
#line 118 "special_pred.m"
}

#line 112 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(
#line 112 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_4,
#line 112 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_5,
#line 112 "special_pred.m"
  MR_Word hlds__special_pred__TypeBody_6)
#line 112 "special_pred.m"
{
#line 343 "special_pred.m"
  {
#line 343 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 353 "special_pred.m"
    MR_Word hlds__special_pred__V_11_11;
#line 353 "special_pred.m"
    MR_Word hlds__special_pred__V_27_27;

#line 345 "special_pred.m"
    {
#line 345 "special_pred.m"
      MR_Word hlds__special_pred__V_7_7;

#line 345 "special_pred.m"
      hlds__special_pred__succeeded = ((((MR_tag((MR_Word) hlds__special_pred__TypeBody_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 345 "special_pred.m"
      if (hlds__special_pred__succeeded)
#line 345 "special_pred.m"
        hlds__special_pred__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_6, (MR_Integer) 1)));
#line 345 "special_pred.m"
      hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 345 "special_pred.m"
    }
#line 346 "special_pred.m"
    if (!(hlds__special_pred__succeeded))
#line 349 "special_pred.m"
      {
#line 349 "special_pred.m"
        MR_String hlds__special_pred__V_8_8;
#line 349 "special_pred.m"
        MR_Word hlds__special_pred__Globals_13;
#line 349 "special_pred.m"
        MR_Word hlds__special_pred__Target_14;
#line 349 "special_pred.m"
        MR_Word hlds__special_pred__Builtin_17;
#line 349 "special_pred.m"
        MR_Word hlds__special_pred__V_18_18;
#line 349 "special_pred.m"
        MR_Integer hlds__special_pred__V_19_19;
#line 349 "special_pred.m"
        MR_Word hlds__special_pred__V_20_20;
#line 360 "special_pred.m"
        MR_Integer hlds__special_pred__lo_0;
#line 360 "special_pred.m"
        MR_Integer hlds__special_pred__hi_1;
#line 360 "special_pred.m"
        MR_Integer hlds__special_pred__mid_2;
#line 360 "special_pred.m"
        MR_Integer hlds__special_pred__result_3;

#line 374 "special_pred.m"
        {
#line 374 "special_pred.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_4, &hlds__special_pred__Globals_13);
        }
#line 375 "special_pred.m"
        {
#line 375 "special_pred.m"
          libs__globals__get_target_2_p_0(hlds__special_pred__Globals_13, &hlds__special_pred__Target_14);
        }
#line 377 "special_pred.m"
#line 377 "special_pred.m"
        switch (hlds__special_pred__Target_14) {
#line 377 "special_pred.m"
          default:
#line 377 "special_pred.m"
            hlds__special_pred__succeeded = MR_FALSE;
#line 377 "special_pred.m"
            break;
#line 377 "special_pred.m"
          case (MR_Integer) 1:
#line 376 "special_pred.m"
            hlds__special_pred__succeeded = MR_TRUE;
#line 377 "special_pred.m"
            break;
#line 377 "special_pred.m"
          case (MR_Integer) 3:
#line 378 "special_pred.m"
            hlds__special_pred__succeeded = MR_TRUE;
#line 377 "special_pred.m"
            break;
#line 377 "special_pred.m"
          case (MR_Integer) 2:
#line 377 "special_pred.m"
            hlds__special_pred__succeeded = MR_TRUE;
#line 377 "special_pred.m"
            break;
#line 377 "special_pred.m"
        }
#line 349 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 349 "special_pred.m"
          {
#line 357 "special_pred.m"
            {
#line 357 "special_pred.m"
              hlds__special_pred__Builtin_17 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 358 "special_pred.m"
            hlds__special_pred__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_5, (MR_Integer) 0)));
#line 358 "special_pred.m"
            hlds__special_pred__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_5, (MR_Integer) 1)));
#line 358 "special_pred.m"
            hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 358 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 358 "special_pred.m"
              {
#line 358 "special_pred.m"
                hlds__special_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, (MR_Integer) 0)));
#line 358 "special_pred.m"
                hlds__special_pred__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, (MR_Integer) 1)));
#line 358 "special_pred.m"
                {
#line 358 "special_pred.m"
                  hlds__special_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__special_pred__Builtin_17, hlds__special_pred__V_20_20);
                }
#line 349 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 349 "special_pred.m"
                  {
#line 358 "special_pred.m"
                    hlds__special_pred__succeeded = (hlds__special_pred__V_19_19 == (MR_Integer) 0);
#line 349 "special_pred.m"
                    if (hlds__special_pred__succeeded)
#line 349 "special_pred.m"
                      {
#line 360 "special_pred.m"
                        /* binary string simple lookup switch */
#line 360 "special_pred.m"
                        hlds__special_pred__lo_0 = (MR_Integer) 0;
#line 360 "special_pred.m"
                        hlds__special_pred__hi_1 = (MR_Integer) 4;
#line 360 "special_pred.m"
                        do
#line 360 "special_pred.m"
                          {
#line 360 "special_pred.m"
                            hlds__special_pred__mid_2 = (((hlds__special_pred__lo_0 + hlds__special_pred__hi_1)) / (MR_Integer) 2);
#line 360 "special_pred.m"
                            hlds__special_pred__result_3 = MR_strcmp(hlds__special_pred__V_8_8, ((&hlds__special_pred_vector_common_3[4 + hlds__special_pred__mid_2]))->hlds__special_pred__vector_common_type_3_0__vct_3_f_0);
#line 360 "special_pred.m"
                            if ((hlds__special_pred__result_3 == (MR_Integer) 0))
#line 360 "special_pred.m"
                              {
#line 360 "special_pred.m"
                                hlds__special_pred__succeeded = MR_TRUE;
#line 360 "special_pred.m"
                                /* jump out of search loop */
#line 360 "special_pred.m"
                                goto label_0;
#line 360 "special_pred.m"
                              }
#line 360 "special_pred.m"
                            else
#line 360 "special_pred.m"
                            if ((hlds__special_pred__result_3 < (MR_Integer) 0))
#line 360 "special_pred.m"
                              hlds__special_pred__hi_1 = (hlds__special_pred__mid_2 - (MR_Integer) 1);
#line 360 "special_pred.m"
                            else
#line 360 "special_pred.m"
                              hlds__special_pred__lo_0 = (hlds__special_pred__mid_2 + (MR_Integer) 1);
#line 360 "special_pred.m"
                          }
#line 360 "special_pred.m"
                        while ((hlds__special_pred__lo_0 <= hlds__special_pred__hi_1));
#line 360 "special_pred.m"
                        hlds__special_pred__succeeded = MR_FALSE;
#line 360 "special_pred.m"
                      label_0:;
#line 349 "special_pred.m"
                      }
#line 349 "special_pred.m"
                  }
#line 358 "special_pred.m"
              }
#line 349 "special_pred.m"
          }
#line 349 "special_pred.m"
      }
#line 343 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 343 "special_pred.m"
      {
#line 352 "special_pred.m"
        {
#line 352 "special_pred.m"
          hlds__special_pred__succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(hlds__special_pred__TypeCtor_5, hlds__special_pred__TypeBody_6);
        }
#line 352 "special_pred.m"
        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 343 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 343 "special_pred.m"
          {
#line 353 "special_pred.m"
            {
#line 353 "special_pred.m"
              hlds__special_pred__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(hlds__special_pred__ModuleInfo_4, hlds__special_pred__TypeBody_6, &hlds__special_pred__V_11_11);
            }
#line 353 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 353 "special_pred.m"
              {
#line 353 "special_pred.m"
                hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 353 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 353 "special_pred.m"
                  hlds__special_pred__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_11_11, (MR_Integer) 0)));
#line 353 "special_pred.m"
              }
#line 353 "special_pred.m"
            hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 343 "special_pred.m"
          }
#line 343 "special_pred.m"
      }
#line 343 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 343 "special_pred.m"
  }
#line 112 "special_pred.m"
}

#line 333 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(
#line 333 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg)
#line 333 "special_pred.m"
{
#line 333 "special_pred.m"
  {
#line 333 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

#line 333 "special_pred.m"
    MR_builtin_longjmp((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0, 1);
#line 333 "special_pred.m"
  }
#line 333 "special_pred.m"
}

#line 335 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3(
#line 335 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg)
#line 335 "special_pred.m"
{
#line 335 "special_pred.m"
  {
#line 335 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

#line 335 "special_pred.m"
    (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13 = ((MR_Word) (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13);
#line 335 "special_pred.m"
    {
#line 335 "special_pred.m"
      hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(hlds__special_pred__env_ptr);
    }
#line 335 "special_pred.m"
  }
#line 335 "special_pred.m"
}

#line 333 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(
#line 333 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg)
#line 333 "special_pred.m"
{
#line 333 "special_pred.m"
  {
#line 333 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

#line 333 "special_pred.m"
    {
#line 336 "special_pred.m"
      MR_Word hlds__special_pred__V_15_15;
#line 336 "special_pred.m"
      MR_Word hlds__special_pred__V_16_16;
#line 336 "special_pred.m"
      MR_Word hlds__special_pred__V_17_17;
#line 336 "special_pred.m"
      MR_Integer hlds__special_pred__V_18_18;
#line 336 "special_pred.m"
      MR_Word hlds__special_pred__V_19_19;
#line 337 "special_pred.m"
      MR_Word hlds__special_pred__V_20_20;
#line 337 "special_pred.m"
      MR_Word hlds__special_pred__V_21_21;

#line 336 "special_pred.m"
      (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 0)));
#line 336 "special_pred.m"
      hlds__special_pred__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 1)));
#line 336 "special_pred.m"
      hlds__special_pred__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 2)));
#line 336 "special_pred.m"
      hlds__special_pred__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 3)));
#line 336 "special_pred.m"
      hlds__special_pred__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 4)));
#line 336 "special_pred.m"
      hlds__special_pred__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 5)));
#line 337 "special_pred.m"
      (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 337 "special_pred.m"
      if ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 337 "special_pred.m"
        {
#line 337 "special_pred.m"
          {
#line 337 "special_pred.m"
            hlds__special_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14, (MR_Integer) 0)));
#line 337 "special_pred.m"
            hlds__special_pred__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14, (MR_Integer) 1)));
#line 337 "special_pred.m"
          }
#line 337 "special_pred.m"
          {
#line 337 "special_pred.m"
            hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(hlds__special_pred__env_ptr);
          }
#line 337 "special_pred.m"
        }
#line 333 "special_pred.m"
    }
#line 333 "special_pred.m"
  }
#line 333 "special_pred.m"
}

#line 333 "special_pred.m"
static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(
#line 333 "special_pred.m"
  void * hlds__special_pred__env_ptr_arg)
#line 333 "special_pred.m"
{
#line 333 "special_pred.m"
  {
#line 333 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

#line 333 "special_pred.m"
    if (MR_builtin_setjmp((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0) == 0)
#line 333 "special_pred.m"
      {
#line 333 "special_pred.m"
        {
#line 333 "special_pred.m"
          MR_Word hlds__special_pred__TypeCtorInfo_32_32;
#line 333 "special_pred.m"
          MR_Word hlds__special_pred__Ctors_12;
#line 334 "special_pred.m"
          MR_Word hlds__special_pred__V_24_24;
#line 334 "special_pred.m"
          MR_Word hlds__special_pred__V_25_25;
#line 334 "special_pred.m"
          MR_Word hlds__special_pred__V_26_26;
#line 334 "special_pred.m"
          MR_Word hlds__special_pred__V_27_27;
#line 334 "special_pred.m"
          MR_Word hlds__special_pred__V_28_28;
#line 334 "special_pred.m"
          MR_Word hlds__special_pred__V_29_29;
#line 334 "special_pred.m"
          MR_Word hlds__special_pred__V_30_30;
#line 334 "special_pred.m"
          MR_Word hlds__special_pred__V_31_31;

#line 333 "special_pred.m"
          (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__SpecialPredId_5 == (MR_Integer) 3);
#line 333 "special_pred.m"
          (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = !((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded);
#line 333 "special_pred.m"
          if ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 333 "special_pred.m"
            {
#line 334 "special_pred.m"
              (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6)) == (MR_mktag((MR_Integer) 1)));
#line 334 "special_pred.m"
              if ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 334 "special_pred.m"
                {
#line 334 "special_pred.m"
                  {
#line 334 "special_pred.m"
                    hlds__special_pred__Ctors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 0)));
#line 334 "special_pred.m"
                    hlds__special_pred__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 1)));
#line 334 "special_pred.m"
                    hlds__special_pred__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 2)));
#line 334 "special_pred.m"
                    hlds__special_pred__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 3)));
#line 334 "special_pred.m"
                    hlds__special_pred__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 4)));
#line 334 "special_pred.m"
                    hlds__special_pred__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 5)));
#line 334 "special_pred.m"
                    hlds__special_pred__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 334 "special_pred.m"
                    hlds__special_pred__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 334 "special_pred.m"
                    hlds__special_pred__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 7)));
#line 334 "special_pred.m"
                  }
#line 333 "special_pred.m"
                  {
#line 1322 "hlds.special_pred.c"
                    hlds__special_pred__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 335 "special_pred.m"
                    {
#line 335 "special_pred.m"
                      mercury__list__member_2_p_1(hlds__special_pred__TypeCtorInfo_32_32, &(hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13, hlds__special_pred__Ctors_12, hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3, hlds__special_pred__env_ptr);
                    }
#line 333 "special_pred.m"
                  }
#line 334 "special_pred.m"
                }
#line 333 "special_pred.m"
            }
#line 333 "special_pred.m"
        }
#line 333 "special_pred.m"
        (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
#line 333 "special_pred.m"
      }
#line 333 "special_pred.m"
    else
#line 333 "special_pred.m"
      (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_TRUE;
#line 333 "special_pred.m"
  }
#line 333 "special_pred.m"
}

#line 105 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(
#line 105 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_4,
#line 105 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPredId_5,
#line 105 "special_pred.m"
  MR_Word hlds__special_pred__TypeBody_6)
#line 105 "special_pred.m"
{
#line 105 "special_pred.m"
  {
#line 105 "special_pred.m"
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s hlds__special_pred__env;

#line 105 "special_pred.m"
    (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__SpecialPredId_5 = hlds__special_pred__SpecialPredId_5;
#line 105 "special_pred.m"
    (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6 = hlds__special_pred__TypeBody_6;
#line 325 "special_pred.m"
#line 325 "special_pred.m"
    switch ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__SpecialPredId_5) {
#line 325 "special_pred.m"
      default:
#line 325 "special_pred.m"
        (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
#line 325 "special_pred.m"
        break;
#line 325 "special_pred.m"
      case (MR_Integer) 2:
#line 329 "special_pred.m"
        {
#line 329 "special_pred.m"
          MR_Word hlds__special_pred__UserCmp_10;
#line 329 "special_pred.m"
          MR_Word hlds__special_pred__V_22_22;
#line 331 "special_pred.m"
          MR_Word hlds__special_pred__V_9_9;
#line 331 "special_pred.m"
          MR_Word hlds__special_pred__V_11_11;

#line 330 "special_pred.m"
          {
#line 330 "special_pred.m"
            (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(hlds__special_pred__ModuleInfo_4, (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, &hlds__special_pred__V_22_22);
          }
#line 329 "special_pred.m"
          if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 329 "special_pred.m"
            {
#line 331 "special_pred.m"
              (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 331 "special_pred.m"
              if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 331 "special_pred.m"
                {
#line 331 "special_pred.m"
                  hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_22_22, (MR_Integer) 0)));
#line 331 "special_pred.m"
                  hlds__special_pred__UserCmp_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_22_22, (MR_Integer) 1)));
#line 331 "special_pred.m"
                  (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__special_pred__UserCmp_10)) == (MR_mktag((MR_Integer) 1)));
#line 331 "special_pred.m"
                  if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 331 "special_pred.m"
                    hlds__special_pred__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__UserCmp_10, (MR_Integer) 0)));
#line 331 "special_pred.m"
                }
#line 329 "special_pred.m"
            }
#line 329 "special_pred.m"
        }
#line 325 "special_pred.m"
        break;
#line 325 "special_pred.m"
      case (MR_Integer) 3:
#line 340 "special_pred.m"
        {
#line 340 "special_pred.m"
          (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_is_solver_type_2_p_0(hlds__special_pred__ModuleInfo_4, (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6);
        }
#line 325 "special_pred.m"
        break;
#line 325 "special_pred.m"
      case (MR_Integer) 0:
#line 325 "special_pred.m"
        {
#line 325 "special_pred.m"
          MR_Word hlds__special_pred__V_33_33;
#line 326 "special_pred.m"
          MR_Word hlds__special_pred__V_36_36;
#line 326 "special_pred.m"
          MR_Word hlds__special_pred__V_37_37;

#line 326 "special_pred.m"
          {
#line 326 "special_pred.m"
            (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(hlds__special_pred__ModuleInfo_4, (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, &hlds__special_pred__V_33_33);
          }
#line 325 "special_pred.m"
          if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 325 "special_pred.m"
            {
#line 326 "special_pred.m"
              (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 326 "special_pred.m"
              if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
#line 326 "special_pred.m"
                {
#line 326 "special_pred.m"
                  hlds__special_pred__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_33_33, (MR_Integer) 0)));
#line 326 "special_pred.m"
                  hlds__special_pred__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_33_33, (MR_Integer) 1)));
#line 326 "special_pred.m"
                }
#line 325 "special_pred.m"
            }
#line 325 "special_pred.m"
        }
#line 325 "special_pred.m"
        break;
#line 325 "special_pred.m"
    }
#line 325 "special_pred.m"
    if (!((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded))
#line 333 "special_pred.m"
      {
#line 333 "special_pred.m"
        {
#line 333 "special_pred.m"
          hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(&hlds__special_pred__env);
        }
#line 333 "special_pred.m"
      }
#line 325 "special_pred.m"
    return (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded;
#line 105 "special_pred.m"
  }
#line 105 "special_pred.m"
}

#line 96 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__special_pred_is_generated_lazily_4_p_0(
#line 96 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_5,
#line 96 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_6,
#line 96 "special_pred.m"
  MR_Word hlds__special_pred__TypeBody_7,
#line 96 "special_pred.m"
  MR_Word hlds__special_pred__TypeStatus_8)
#line 96 "special_pred.m"
{
#line 278 "special_pred.m"
  {
#line 278 "special_pred.m"
    MR_bool hlds__special_pred__succeeded = ((((MR_tag((MR_Word) hlds__special_pred__TypeBody_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 278 "special_pred.m"
    MR_Word hlds__special_pred__CtorCat_11;
#line 284 "special_pred.m"
    MR_Word hlds__special_pred__V_9_9;
#line 284 "special_pred.m"
    MR_Word hlds__special_pred__V_10_10;
#line 285 "special_pred.m"
    MR_Word hlds__special_pred__V_14_14;

#line 284 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 284 "special_pred.m"
      {
#line 284 "special_pred.m"
        hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 1)));
#line 284 "special_pred.m"
        hlds__special_pred__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 2)));
#line 284 "special_pred.m"
      }
#line 284 "special_pred.m"
    hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 278 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 278 "special_pred.m"
      {
#line 285 "special_pred.m"
        hlds__special_pred__succeeded = ((((MR_tag((MR_Word) hlds__special_pred__TypeBody_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 285 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 285 "special_pred.m"
          {
#line 285 "special_pred.m"
            hlds__special_pred__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 1)));
#line 285 "special_pred.m"
            hlds__special_pred__succeeded = (hlds__special_pred__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 285 "special_pred.m"
          }
#line 285 "special_pred.m"
        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 278 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 278 "special_pred.m"
          {
#line 287 "special_pred.m"
            {
#line 287 "special_pred.m"
              hlds__special_pred__CtorCat_11 = check_hlds__type_util__classify_type_ctor_2_f_0(hlds__special_pred__ModuleInfo_5, hlds__special_pred__TypeCtor_6);
            }
#line 289 "special_pred.m"
            hlds__special_pred__succeeded = (hlds__special_pred__CtorCat_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 290 "special_pred.m"
            if (!(hlds__special_pred__succeeded))
#line 294 "special_pred.m"
              {
#line 315 "special_pred.m"
                MR_Word hlds__special_pred__V_20_20;
#line 320 "special_pred.m"
                MR_Word hlds__special_pred__V_24_24;

#line 292 "special_pred.m"
                if (((MR_tag((MR_Word) hlds__special_pred__CtorCat_11)) == (MR_mktag((MR_Integer) 2))))
#line 292 "special_pred.m"
                  hlds__special_pred__succeeded = MR_TRUE;
#line 292 "special_pred.m"
                else
#line 292 "special_pred.m"
                if (((((MR_tag((MR_Word) hlds__special_pred__CtorCat_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__CtorCat_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 291 "special_pred.m"
                  hlds__special_pred__succeeded = MR_TRUE;
#line 292 "special_pred.m"
                else
#line 292 "special_pred.m"
                  hlds__special_pred__succeeded = MR_FALSE;
#line 292 "special_pred.m"
                if (!(hlds__special_pred__succeeded))
#line 293 "special_pred.m"
                  {
#line 293 "special_pred.m"
                    MR_Word hlds__special_pred__V_15_15;

#line 293 "special_pred.m"
                    {
#line 293 "special_pred.m"
                      hlds__special_pred__V_15_15 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(hlds__special_pred__CtorCat_11);
                    }
#line 293 "special_pred.m"
                    hlds__special_pred__succeeded = (hlds__special_pred__V_15_15 == (MR_Integer) 1);
#line 293 "special_pred.m"
                  }
#line 294 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 294 "special_pred.m"
                  {
#line 303 "special_pred.m"
                    {
#line 303 "special_pred.m"
                      MR_Word hlds__special_pred__V_23_23;

#line 303 "special_pred.m"
                      {
#line 303 "special_pred.m"
                        hlds__special_pred__V_23_23 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__special_pred__TypeStatus_8);
                      }
#line 303 "special_pred.m"
                      hlds__special_pred__succeeded = (hlds__special_pred__V_23_23 == (MR_Integer) 0);
#line 303 "special_pred.m"
                    }
#line 304 "special_pred.m"
                    if (!(hlds__special_pred__succeeded))
#line 305 "special_pred.m"
                      {
#line 305 "special_pred.m"
                        MR_Word hlds__special_pred__Globals_19;

#line 305 "special_pred.m"
                        {
#line 305 "special_pred.m"
                          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_5, &hlds__special_pred__Globals_19);
                        }
#line 306 "special_pred.m"
                        {
#line 306 "special_pred.m"
                          hlds__special_pred__succeeded = libs__globals__lookup_bool_option_3_p_1(hlds__special_pred__Globals_19, (MR_Integer) 272, (MR_Integer) 0);
                        }
#line 305 "special_pred.m"
                      }
#line 294 "special_pred.m"
                    if (hlds__special_pred__succeeded)
#line 294 "special_pred.m"
                      {
#line 315 "special_pred.m"
                        hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__TypeBody_7)) == (MR_mktag((MR_Integer) 0)));
#line 315 "special_pred.m"
                        if (hlds__special_pred__succeeded)
#line 315 "special_pred.m"
                          hlds__special_pred__V_20_20 = (MR_Word) MR_body(((MR_Word) hlds__special_pred__TypeBody_7), (MR_Integer) 0);
#line 315 "special_pred.m"
                        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 294 "special_pred.m"
                        if (hlds__special_pred__succeeded)
#line 294 "special_pred.m"
                          {
#line 320 "special_pred.m"
                            hlds__special_pred__V_24_24 = (MR_Integer) 0;
#line 320 "special_pred.m"
                            {
#line 320 "special_pred.m"
                              hlds__special_pred__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(hlds__special_pred__ModuleInfo_5, hlds__special_pred__V_24_24, hlds__special_pred__TypeBody_7);
                            }
#line 320 "special_pred.m"
                            hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 294 "special_pred.m"
                          }
#line 294 "special_pred.m"
                      }
#line 294 "special_pred.m"
                  }
#line 294 "special_pred.m"
              }
#line 278 "special_pred.m"
          }
#line 278 "special_pred.m"
      }
#line 278 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 278 "special_pred.m"
  }
#line 96 "special_pred.m"
}

#line 91 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__special_pred_is_generated_lazily_2_p_0(
#line 91 "special_pred.m"
  MR_Word hlds__special_pred__ModuleInfo_3,
#line 91 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_4)
#line 91 "special_pred.m"
{
#line 262 "special_pred.m"
  {
#line 262 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 262 "special_pred.m"
    MR_Word hlds__special_pred__CtorCat_5;

#line 263 "special_pred.m"
    {
#line 263 "special_pred.m"
      hlds__special_pred__CtorCat_5 = check_hlds__type_util__classify_type_ctor_2_f_0(hlds__special_pred__ModuleInfo_3, hlds__special_pred__TypeCtor_4);
    }
#line 265 "special_pred.m"
    hlds__special_pred__succeeded = (hlds__special_pred__CtorCat_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 266 "special_pred.m"
    if (!(hlds__special_pred__succeeded))
#line 270 "special_pred.m"
      {
#line 270 "special_pred.m"
        MR_Word hlds__special_pred__TypeTable_8;
#line 270 "special_pred.m"
        MR_Word hlds__special_pred__TypeDefn_9;
#line 270 "special_pred.m"
        MR_Word hlds__special_pred__TypeBody_10;
#line 270 "special_pred.m"
        MR_Word hlds__special_pred__TypeStatus_11;
#line 315 "special_pred.m"
        MR_Word hlds__special_pred__V_17_17;
#line 320 "special_pred.m"
        MR_Word hlds__special_pred__V_21_21;

#line 268 "special_pred.m"
        if (((MR_tag((MR_Word) hlds__special_pred__CtorCat_5)) == (MR_mktag((MR_Integer) 2))))
#line 268 "special_pred.m"
          hlds__special_pred__succeeded = MR_TRUE;
#line 268 "special_pred.m"
        else
#line 268 "special_pred.m"
        if (((((MR_tag((MR_Word) hlds__special_pred__CtorCat_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__CtorCat_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 267 "special_pred.m"
          hlds__special_pred__succeeded = MR_TRUE;
#line 268 "special_pred.m"
        else
#line 268 "special_pred.m"
          hlds__special_pred__succeeded = MR_FALSE;
#line 268 "special_pred.m"
        if (!(hlds__special_pred__succeeded))
#line 269 "special_pred.m"
          {
#line 269 "special_pred.m"
            MR_Word hlds__special_pred__V_12_12;

#line 269 "special_pred.m"
            {
#line 269 "special_pred.m"
              hlds__special_pred__V_12_12 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(hlds__special_pred__CtorCat_5);
            }
#line 269 "special_pred.m"
            hlds__special_pred__succeeded = (hlds__special_pred__V_12_12 == (MR_Integer) 1);
#line 269 "special_pred.m"
          }
#line 270 "special_pred.m"
        if (hlds__special_pred__succeeded)
#line 270 "special_pred.m"
          {
#line 271 "special_pred.m"
            {
#line 271 "special_pred.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__special_pred__ModuleInfo_3, &hlds__special_pred__TypeTable_8);
            }
#line 272 "special_pred.m"
            {
#line 272 "special_pred.m"
              hlds__special_pred__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__special_pred__TypeTable_8, hlds__special_pred__TypeCtor_4, &hlds__special_pred__TypeDefn_9);
            }
#line 270 "special_pred.m"
            if (hlds__special_pred__succeeded)
#line 270 "special_pred.m"
              {
#line 273 "special_pred.m"
                {
#line 273 "special_pred.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(hlds__special_pred__TypeDefn_9, &hlds__special_pred__TypeBody_10);
                }
#line 274 "special_pred.m"
                {
#line 274 "special_pred.m"
                  hlds__hlds_data__get_type_defn_status_2_p_0(hlds__special_pred__TypeDefn_9, &hlds__special_pred__TypeStatus_11);
                }
#line 303 "special_pred.m"
                {
#line 303 "special_pred.m"
                  MR_Word hlds__special_pred__V_20_20;

#line 303 "special_pred.m"
                  {
#line 303 "special_pred.m"
                    hlds__special_pred__V_20_20 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__special_pred__TypeStatus_11);
                  }
#line 303 "special_pred.m"
                  hlds__special_pred__succeeded = (hlds__special_pred__V_20_20 == (MR_Integer) 0);
#line 303 "special_pred.m"
                }
#line 304 "special_pred.m"
                if (!(hlds__special_pred__succeeded))
#line 305 "special_pred.m"
                  {
#line 305 "special_pred.m"
                    MR_Word hlds__special_pred__Globals_16;

#line 305 "special_pred.m"
                    {
#line 305 "special_pred.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_3, &hlds__special_pred__Globals_16);
                    }
#line 306 "special_pred.m"
                    {
#line 306 "special_pred.m"
                      hlds__special_pred__succeeded = libs__globals__lookup_bool_option_3_p_1(hlds__special_pred__Globals_16, (MR_Integer) 272, (MR_Integer) 0);
                    }
#line 305 "special_pred.m"
                  }
#line 270 "special_pred.m"
                if (hlds__special_pred__succeeded)
#line 270 "special_pred.m"
                  {
#line 315 "special_pred.m"
                    hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__TypeBody_10)) == (MR_mktag((MR_Integer) 0)));
#line 315 "special_pred.m"
                    if (hlds__special_pred__succeeded)
#line 315 "special_pred.m"
                      hlds__special_pred__V_17_17 = (MR_Word) MR_body(((MR_Word) hlds__special_pred__TypeBody_10), (MR_Integer) 0);
#line 315 "special_pred.m"
                    hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 270 "special_pred.m"
                    if (hlds__special_pred__succeeded)
#line 270 "special_pred.m"
                      {
#line 320 "special_pred.m"
                        hlds__special_pred__V_21_21 = (MR_Integer) 0;
#line 320 "special_pred.m"
                        {
#line 320 "special_pred.m"
                          hlds__special_pred__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(hlds__special_pred__ModuleInfo_3, hlds__special_pred__V_21_21, hlds__special_pred__TypeBody_10);
                        }
#line 320 "special_pred.m"
                        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
#line 270 "special_pred.m"
                      }
#line 270 "special_pred.m"
                  }
#line 270 "special_pred.m"
              }
#line 270 "special_pred.m"
          }
#line 270 "special_pred.m"
      }
#line 262 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 262 "special_pred.m"
  }
#line 91 "special_pred.m"
}

#line 81 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_get_type_det_3_p_0(
#line 81 "special_pred.m"
  MR_Word hlds__special_pred__SpecialId_4,
#line 81 "special_pred.m"
  MR_Word hlds__special_pred__ArgTypes_5,
#line 81 "special_pred.m"
  MR_Word * hlds__special_pred__Type_6)
#line 81 "special_pred.m"
{
#line 254 "special_pred.m"
  {
#line 254 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 254 "special_pred.m"
    MR_Word hlds__special_pred__TypePrime_7;

#line 254 "special_pred.m"
    {
#line 254 "special_pred.m"
      hlds__special_pred__succeeded = hlds__special_pred__special_pred_get_type_3_p_0(hlds__special_pred__SpecialId_4, hlds__special_pred__ArgTypes_5, &hlds__special_pred__TypePrime_7);
    }
#line 254 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 255 "special_pred.m"
      *hlds__special_pred__Type_6 = hlds__special_pred__TypePrime_7;
#line 254 "special_pred.m"
    else
#line 257 "special_pred.m"
      {
#line 257 "special_pred.m"
        {
#line 257 "special_pred.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.special_pred", (MR_String) "predicate \140hlds.special_pred.special_pred_get_type_det\'/3", (MR_String) "special_pred_get_type failed");
#line 257 "special_pred.m"
          return;
        }
#line 257 "special_pred.m"
      }
#line 254 "special_pred.m"
  }
#line 81 "special_pred.m"
}

#line 78 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__special_pred_get_type_3_p_0(
#line 78 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_1,
#line 78 "special_pred.m"
  MR_Word hlds__special_pred__Types_2,
#line 78 "special_pred.m"
  MR_Word * hlds__special_pred__T_3)
#line 78 "special_pred.m"
{
#line 244 "special_pred.m"
  {
#line 244 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 244 "special_pred.m"
#line 244 "special_pred.m"
    switch (hlds__special_pred__HeadVar__1_1) {
#line 244 "special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 244 "special_pred.m"
      case (MR_Integer) 2:
#line 248 "special_pred.m"
        {
#line 248 "special_pred.m"
          MR_Word hlds__special_pred__V_17_17;
#line 249 "special_pred.m"
          MR_Word hlds__special_pred__V_16_16;

#line 249 "special_pred.m"
          {
#line 249 "special_pred.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_17_17);
          }
#line 249 "special_pred.m"
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 249 "special_pred.m"
          if (hlds__special_pred__succeeded)
#line 249 "special_pred.m"
            {
#line 249 "special_pred.m"
              *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_17_17, (MR_Integer) 0)));
#line 249 "special_pred.m"
              hlds__special_pred__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_17_17, (MR_Integer) 1)));
#line 249 "special_pred.m"
            }
#line 248 "special_pred.m"
        }
#line 244 "special_pred.m"
        break;
#line 244 "special_pred.m"
      case (MR_Integer) 1:
#line 246 "special_pred.m"
        {
#line 246 "special_pred.m"
          MR_Word hlds__special_pred__V_12_12;
#line 246 "special_pred.m"
          MR_Word hlds__special_pred__V_13_13;
#line 247 "special_pred.m"
          MR_Word hlds__special_pred__V_10_10;
#line 247 "special_pred.m"
          MR_Word hlds__special_pred__V_11_11;

#line 247 "special_pred.m"
          {
#line 247 "special_pred.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_12_12);
          }
#line 247 "special_pred.m"
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 247 "special_pred.m"
          if (hlds__special_pred__succeeded)
#line 247 "special_pred.m"
            {
#line 247 "special_pred.m"
              hlds__special_pred__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_12_12, (MR_Integer) 0)));
#line 247 "special_pred.m"
              hlds__special_pred__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_12_12, (MR_Integer) 1)));
#line 247 "special_pred.m"
              hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 247 "special_pred.m"
              if (hlds__special_pred__succeeded)
#line 247 "special_pred.m"
                {
#line 247 "special_pred.m"
                  *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_13_13, (MR_Integer) 0)));
#line 247 "special_pred.m"
                  hlds__special_pred__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_13_13, (MR_Integer) 1)));
#line 247 "special_pred.m"
                }
#line 247 "special_pred.m"
            }
#line 246 "special_pred.m"
        }
#line 244 "special_pred.m"
        break;
#line 244 "special_pred.m"
      case (MR_Integer) 3:
#line 250 "special_pred.m"
        {
#line 250 "special_pred.m"
          MR_Word hlds__special_pred__V_21_21;
#line 251 "special_pred.m"
          MR_Word hlds__special_pred__V_20_20;

#line 251 "special_pred.m"
          {
#line 251 "special_pred.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_21_21);
          }
#line 251 "special_pred.m"
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 251 "special_pred.m"
          if (hlds__special_pred__succeeded)
#line 251 "special_pred.m"
            {
#line 251 "special_pred.m"
              *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_21_21, (MR_Integer) 0)));
#line 251 "special_pred.m"
              hlds__special_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_21_21, (MR_Integer) 1)));
#line 251 "special_pred.m"
            }
#line 250 "special_pred.m"
        }
#line 244 "special_pred.m"
        break;
#line 244 "special_pred.m"
      case (MR_Integer) 0:
#line 244 "special_pred.m"
        {
#line 244 "special_pred.m"
          MR_Word hlds__special_pred__V_7_7;
#line 245 "special_pred.m"
          MR_Word hlds__special_pred__V_6_6;

#line 245 "special_pred.m"
          {
#line 245 "special_pred.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_7_7);
          }
#line 245 "special_pred.m"
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 245 "special_pred.m"
          if (hlds__special_pred__succeeded)
#line 245 "special_pred.m"
            {
#line 245 "special_pred.m"
              *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_7_7, (MR_Integer) 0)));
#line 245 "special_pred.m"
              hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_7_7, (MR_Integer) 1)));
#line 245 "special_pred.m"
            }
#line 244 "special_pred.m"
        }
#line 244 "special_pred.m"
        break;
#line 244 "special_pred.m"
    }
#line 244 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 244 "special_pred.m"
  }
#line 78 "special_pred.m"
}

#line 65 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_interface_5_p_0(
#line 65 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPredId_6,
#line 65 "special_pred.m"
  MR_Word hlds__special_pred__Type_7,
#line 65 "special_pred.m"
  MR_Word * hlds__special_pred__ArgTypes_8,
#line 65 "special_pred.m"
  MR_Word * hlds__special_pred__ArgModes_9,
#line 65 "special_pred.m"
  MR_Word * hlds__special_pred__Detism_10)
#line 65 "special_pred.m"
{
#line 217 "special_pred.m"
  {
#line 217 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 217 "special_pred.m"
#line 217 "special_pred.m"
    switch (hlds__special_pred__SpecialPredId_6) {
#line 217 "special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 217 "special_pred.m"
      case (MR_Integer) 2:
#line 230 "special_pred.m"
        {
#line 230 "special_pred.m"
          MR_Word hlds__special_pred__Uo_13;
#line 230 "special_pred.m"
          MR_Word hlds__special_pred__V_17_17;
#line 230 "special_pred.m"
          MR_Word hlds__special_pred__V_18_18;
#line 230 "special_pred.m"
          MR_Word hlds__special_pred__V_19_19;
#line 230 "special_pred.m"
          MR_Word hlds__special_pred__V_21_21;
#line 230 "special_pred.m"
          MR_Word hlds__special_pred__V_22_22;
#line 230 "special_pred.m"
          MR_Word hlds__special_pred__In_34;

#line 231 "special_pred.m"
          {
#line 231 "special_pred.m"
            hlds__special_pred__V_17_17 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
          }
#line 231 "special_pred.m"
          {
#line 231 "special_pred.m"
            hlds__special_pred__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_19_19, 0) = ((MR_Box) (hlds__special_pred__Type_7));
#line 231 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "special_pred.m"
          }
#line 231 "special_pred.m"
          {
#line 231 "special_pred.m"
            hlds__special_pred__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, 0) = ((MR_Box) (hlds__special_pred__Type_7));
#line 231 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, 1) = ((MR_Box) (hlds__special_pred__V_19_19));
#line 231 "special_pred.m"
          }
#line 231 "special_pred.m"
          {
#line 231 "special_pred.m"
            MR_Word base;
#line 231 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "special_pred.m"
            *hlds__special_pred__ArgTypes_8 = base;
#line 231 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__V_17_17));
#line 231 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_18_18));
#line 231 "special_pred.m"
          }
#line 232 "special_pred.m"
          {
#line 232 "special_pred.m"
            parse_tree__prog_mode__in_mode_1_p_0(&hlds__special_pred__In_34);
          }
#line 233 "special_pred.m"
          {
#line 233 "special_pred.m"
            parse_tree__prog_mode__uo_mode_1_p_0(&hlds__special_pred__Uo_13);
          }
#line 234 "special_pred.m"
          {
#line 234 "special_pred.m"
            hlds__special_pred__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_22_22, 0) = ((MR_Box) (hlds__special_pred__In_34));
#line 234 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "special_pred.m"
          }
#line 234 "special_pred.m"
          {
#line 234 "special_pred.m"
            hlds__special_pred__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_21_21, 0) = ((MR_Box) (hlds__special_pred__In_34));
#line 234 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_21_21, 1) = ((MR_Box) (hlds__special_pred__V_22_22));
#line 234 "special_pred.m"
          }
#line 234 "special_pred.m"
          {
#line 234 "special_pred.m"
            MR_Word base;
#line 234 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "special_pred.m"
            *hlds__special_pred__ArgModes_9 = base;
#line 234 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Uo_13));
#line 234 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_21_21));
#line 234 "special_pred.m"
          }
#line 235 "special_pred.m"
          *hlds__special_pred__Detism_10 = (MR_Integer) 0;
#line 230 "special_pred.m"
        }
#line 217 "special_pred.m"
        break;
#line 217 "special_pred.m"
      case (MR_Integer) 1:
#line 223 "special_pred.m"
        {
#line 223 "special_pred.m"
          MR_Word hlds__special_pred__Out_12;
#line 223 "special_pred.m"
          MR_Word hlds__special_pred__V_24_24;
#line 223 "special_pred.m"
          MR_Word hlds__special_pred__V_25_25;
#line 223 "special_pred.m"
          MR_Word hlds__special_pred__V_27_27;
#line 223 "special_pred.m"
          MR_Word hlds__special_pred__In_33;

#line 224 "special_pred.m"
          {
#line 224 "special_pred.m"
            hlds__special_pred__V_25_25 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 224 "special_pred.m"
          {
#line 224 "special_pred.m"
            hlds__special_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_24_24, 0) = ((MR_Box) (hlds__special_pred__V_25_25));
#line 224 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "special_pred.m"
          }
#line 224 "special_pred.m"
          {
#line 224 "special_pred.m"
            MR_Word base;
#line 224 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "special_pred.m"
            *hlds__special_pred__ArgTypes_8 = base;
#line 224 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Type_7));
#line 224 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_24_24));
#line 224 "special_pred.m"
          }
#line 225 "special_pred.m"
          {
#line 225 "special_pred.m"
            parse_tree__prog_mode__in_mode_1_p_0(&hlds__special_pred__In_33);
          }
#line 226 "special_pred.m"
          {
#line 226 "special_pred.m"
            parse_tree__prog_mode__out_mode_1_p_0(&hlds__special_pred__Out_12);
          }
#line 227 "special_pred.m"
          {
#line 227 "special_pred.m"
            hlds__special_pred__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_27_27, 0) = ((MR_Box) (hlds__special_pred__Out_12));
#line 227 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "special_pred.m"
          }
#line 227 "special_pred.m"
          {
#line 227 "special_pred.m"
            MR_Word base;
#line 227 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "special_pred.m"
            *hlds__special_pred__ArgModes_9 = base;
#line 227 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__In_33));
#line 227 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_27_27));
#line 227 "special_pred.m"
          }
#line 228 "special_pred.m"
          *hlds__special_pred__Detism_10 = (MR_Integer) 0;
#line 223 "special_pred.m"
        }
#line 217 "special_pred.m"
        break;
#line 217 "special_pred.m"
      case (MR_Integer) 3:
#line 237 "special_pred.m"
        {
#line 237 "special_pred.m"
          MR_Word hlds__special_pred__InAny_14;

#line 238 "special_pred.m"
          {
#line 238 "special_pred.m"
            MR_Word base;
#line 238 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "special_pred.m"
            *hlds__special_pred__ArgTypes_8 = base;
#line 238 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Type_7));
#line 238 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "special_pred.m"
          }
#line 239 "special_pred.m"
          {
#line 239 "special_pred.m"
            hlds__special_pred__InAny_14 = parse_tree__prog_mode__out_any_mode_0_f_0();
          }
#line 240 "special_pred.m"
          {
#line 240 "special_pred.m"
            MR_Word base;
#line 240 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "special_pred.m"
            *hlds__special_pred__ArgModes_9 = base;
#line 240 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__InAny_14));
#line 240 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "special_pred.m"
          }
#line 241 "special_pred.m"
          *hlds__special_pred__Detism_10 = (MR_Integer) 0;
#line 237 "special_pred.m"
        }
#line 217 "special_pred.m"
        break;
#line 217 "special_pred.m"
      case (MR_Integer) 0:
#line 217 "special_pred.m"
        {
#line 217 "special_pred.m"
          MR_Word hlds__special_pred__In_11;
#line 217 "special_pred.m"
          MR_Word hlds__special_pred__V_29_29;
#line 217 "special_pred.m"
          MR_Word hlds__special_pred__V_31_31;

#line 218 "special_pred.m"
          {
#line 218 "special_pred.m"
            hlds__special_pred__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_29_29, 0) = ((MR_Box) (hlds__special_pred__Type_7));
#line 218 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "special_pred.m"
          }
#line 218 "special_pred.m"
          {
#line 218 "special_pred.m"
            MR_Word base;
#line 218 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "special_pred.m"
            *hlds__special_pred__ArgTypes_8 = base;
#line 218 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Type_7));
#line 218 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_29_29));
#line 218 "special_pred.m"
          }
#line 219 "special_pred.m"
          {
#line 219 "special_pred.m"
            parse_tree__prog_mode__in_mode_1_p_0(&hlds__special_pred__In_11);
          }
#line 220 "special_pred.m"
          {
#line 220 "special_pred.m"
            hlds__special_pred__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_31_31, 0) = ((MR_Box) (hlds__special_pred__In_11));
#line 220 "special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "special_pred.m"
          }
#line 220 "special_pred.m"
          {
#line 220 "special_pred.m"
            MR_Word base;
#line 220 "special_pred.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "special_pred.m"
            *hlds__special_pred__ArgModes_9 = base;
#line 220 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__In_11));
#line 220 "special_pred.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_31_31));
#line 220 "special_pred.m"
          }
#line 221 "special_pred.m"
          *hlds__special_pred__Detism_10 = (MR_Integer) 1;
#line 217 "special_pred.m"
        }
#line 217 "special_pred.m"
        break;
#line 217 "special_pred.m"
    }
#line 217 "special_pred.m"
  }
#line 65 "special_pred.m"
}

#line 58 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_mode_num_2_p_0(
#line 58 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_3,
#line 58 "special_pred.m"
  MR_Integer * hlds__special_pred__HeadVar__2_2)
#line 58 "special_pred.m"
{
#line 210 "special_pred.m"
  {
#line 210 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 210 "special_pred.m"
    {
#line 210 "special_pred.m"
      hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_p_0(hlds__special_pred__HeadVar__2_2);
    }
#line 210 "special_pred.m"
  }
#line 58 "special_pred.m"
}

#line 56 "special_pred.m"
MR_String MR_CALL 
hlds__special_pred__special_pred_name_2_f_0(
#line 56 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPred_4,
#line 56 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__2_2)
#line 56 "special_pred.m"
{
#line 189 "special_pred.m"
  {
#line 189 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 189 "special_pred.m"
    MR_String hlds__special_pred__Name_7;

#line 189 "special_pred.m"
    {
#line 189 "special_pred.m"
      hlds__special_pred__Name_7 = hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_f_0(hlds__special_pred__SpecialPred_4);
    }
#line 189 "special_pred.m"
    return hlds__special_pred__Name_7;
#line 189 "special_pred.m"
  }
#line 56 "special_pred.m"
}

#line 50 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_description_2_p_0(
#line 50 "special_pred.m"
  MR_Word hlds__special_pred__HeadVar__1_1,
#line 50 "special_pred.m"
  MR_String * hlds__special_pred__HeadVar__2_2)
#line 50 "special_pred.m"
{
#line 181 "special_pred.m"
  {
#line 181 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 181 "special_pred.m"
    *hlds__special_pred__HeadVar__2_2 = ((&hlds__special_pred_vector_common_3[0 + hlds__special_pred__HeadVar__1_1]))->hlds__special_pred__vector_common_type_3_0__vct_3_f_0;
#line 181 "special_pred.m"
  }
#line 50 "special_pred.m"
}

#line 48 "special_pred.m"
void MR_CALL 
hlds__special_pred__special_pred_list_1_p_0(
#line 48 "special_pred.m"
  MR_Word * hlds__special_pred__HeadVar__1_1)
#line 48 "special_pred.m"
{
#line 179 "special_pred.m"
  {
#line 179 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;

#line 179 "special_pred.m"
    *hlds__special_pred__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__special_pred_scalar_common_1[3]);
#line 179 "special_pred.m"
  }
#line 48 "special_pred.m"
}

#line 43 "special_pred.m"
void MR_CALL 
hlds__special_pred__lookup_special_pred_maps_4_p_0(
#line 43 "special_pred.m"
  MR_Word hlds__special_pred__SpecMaps_5,
#line 43 "special_pred.m"
  MR_Word hlds__special_pred__SpecialPredId_6,
#line 43 "special_pred.m"
  MR_Word hlds__special_pred__TypeCtor_7,
#line 43 "special_pred.m"
  MR_Word * hlds__special_pred__PredId_8)
#line 43 "special_pred.m"
{
#line 155 "special_pred.m"
  {
#line 155 "special_pred.m"
    MR_bool hlds__special_pred__succeeded;
#line 155 "special_pred.m"
    MR_Word hlds__special_pred__SpecMap_9;
#line 155 "special_pred.m"
    MR_Word hlds__special_pred__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 3)));
#line 155 "special_pred.m"
    MR_Word hlds__special_pred__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 2)));
#line 155 "special_pred.m"
    MR_Word hlds__special_pred__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 1)));
#line 155 "special_pred.m"
    MR_Word hlds__special_pred__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 0)));
#line 157 "special_pred.m"
    MR_Box hlds__special_pred__conv0_PredId_8;

#line 164 "special_pred.m"
#line 164 "special_pred.m"
    switch (hlds__special_pred__SpecialPredId_6) {
#line 164 "special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 164 "special_pred.m"
      case (MR_Integer) 2:
#line 171 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_28_28;
#line 164 "special_pred.m"
        break;
#line 164 "special_pred.m"
      case (MR_Integer) 1:
#line 168 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_29_29;
#line 164 "special_pred.m"
        break;
#line 164 "special_pred.m"
      case (MR_Integer) 3:
#line 174 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_27_27;
#line 164 "special_pred.m"
        break;
#line 164 "special_pred.m"
      case (MR_Integer) 0:
#line 165 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_30_30;
#line 164 "special_pred.m"
        break;
#line 164 "special_pred.m"
    }
#line 157 "special_pred.m"
    {
#line 157 "special_pred.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__special_pred__SpecMap_9, ((MR_Box) (hlds__special_pred__TypeCtor_7)), &hlds__special_pred__conv0_PredId_8);
    }
#line 157 "special_pred.m"
    *hlds__special_pred__PredId_8 = ((MR_Word) hlds__special_pred__conv0_PredId_8);
#line 155 "special_pred.m"
  }
#line 43 "special_pred.m"
}

#line 41 "special_pred.m"
MR_bool MR_CALL 
hlds__special_pred__search_special_pred_maps_4_p_0(
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

#line 164 "special_pred.m"
#line 164 "special_pred.m"
    switch (hlds__special_pred__SpecialPredId_6) {
#line 164 "special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 164 "special_pred.m"
      case (MR_Integer) 2:
#line 171 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_28_28;
#line 164 "special_pred.m"
        break;
#line 164 "special_pred.m"
      case (MR_Integer) 1:
#line 168 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_29_29;
#line 164 "special_pred.m"
        break;
#line 164 "special_pred.m"
      case (MR_Integer) 3:
#line 174 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_27_27;
#line 164 "special_pred.m"
        break;
#line 164 "special_pred.m"
      case (MR_Integer) 0:
#line 165 "special_pred.m"
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_30_30;
#line 164 "special_pred.m"
        break;
#line 164 "special_pred.m"
    }
#line 153 "special_pred.m"
    {
#line 153 "special_pred.m"
      hlds__special_pred__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__special_pred__SpecMap_9, ((MR_Box) (hlds__special_pred__TypeCtor_7)), &hlds__special_pred__conv0_PredId_8);
    }
#line 153 "special_pred.m"
    if (hlds__special_pred__succeeded)
#line 153 "special_pred.m"
      {
#line 153 "special_pred.m"
        *hlds__special_pred__PredId_8 = ((MR_Word) hlds__special_pred__conv0_PredId_8);
#line 153 "special_pred.m"
        hlds__special_pred__succeeded = MR_TRUE;
#line 153 "special_pred.m"
      }
#line 151 "special_pred.m"
    return hlds__special_pred__succeeded;
#line 151 "special_pred.m"
  }
#line 41 "special_pred.m"
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
