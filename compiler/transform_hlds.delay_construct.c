/*
** Automatically generated from `delay_construct.m'
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


/* :- module transform_hlds.delay_construct. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__delay_construct__init
ENDINIT
*/

#include "transform_hlds.delay_construct.mih"


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
#include "check_hlds.inst_match.mih"
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
#include "hlds.passes_aux.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 140 "transform_hlds.delay_construct.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__delay_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 143 "transform_hlds.delay_construct.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__delay_construct__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 146 "transform_hlds.delay_construct.c"
static const MR_PseudoTypeInfo transform_hlds__delay_construct__transform_hlds__delay_construct__field_types_delay_construct_info_0_0[4];

#line 149 "transform_hlds.delay_construct.c"
static const MR_ConstString transform_hlds__delay_construct__transform_hlds__delay_construct__field_names_delay_construct_info_0_0[4];

#line 152 "transform_hlds.delay_construct.c"
static const MR_DuFunctorDesc transform_hlds__delay_construct__transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0;

#line 155 "transform_hlds.delay_construct.c"
static const MR_DuFunctorDescPtr transform_hlds__delay_construct__transform_hlds__delay_construct__du_stag_ordered_delay_construct_info_0_0[1];

#line 158 "transform_hlds.delay_construct.c"
static const MR_DuPtagLayout transform_hlds__delay_construct__transform_hlds__delay_construct__du_ptag_ordered_delay_construct_info_0[1];

#line 161 "transform_hlds.delay_construct.c"
static const MR_DuFunctorDescPtr transform_hlds__delay_construct__transform_hlds__delay_construct__du_name_ordered_delay_construct_info_0[1];

#line 164 "transform_hlds.delay_construct.c"
static const MR_Integer transform_hlds__delay_construct__transform_hlds__delay_construct__functor_number_map_delay_construct_info_0[1];

#line 167 "transform_hlds.delay_construct.c"
static MR_bool MR_CALL 
transform_hlds__delay_construct____Unify____delay_construct_info_0_0_10001(
#line 170 "transform_hlds.delay_construct.c"
  MR_Box transform_hlds__delay_construct__wrapper_arg_1,
#line 172 "transform_hlds.delay_construct.c"
  MR_Box transform_hlds__delay_construct__wrapper_arg_2);

#line 175 "transform_hlds.delay_construct.c"
static void MR_CALL 
transform_hlds__delay_construct____Compare____delay_construct_info_0_0_10001(
#line 178 "transform_hlds.delay_construct.c"
  MR_Box * transform_hlds__delay_construct__wrapper_arg_1,
#line 180 "transform_hlds.delay_construct.c"
  MR_Box transform_hlds__delay_construct__wrapper_arg_2,
#line 182 "transform_hlds.delay_construct.c"
  MR_Box transform_hlds__delay_construct__wrapper_arg_3);

#line 76 "delay_construct.m"
static void MR_CALL 
transform_hlds__delay_construct____Compare____delay_construct_info_0_0(
#line 76 "delay_construct.m"
  MR_Word * transform_hlds__delay_construct__HeadVar__1_1,
#line 76 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__2_2,
#line 76 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__3_3);

#line 76 "delay_construct.m"
static MR_bool MR_CALL 
transform_hlds__delay_construct____Unify____delay_construct_info_0_0(
#line 76 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
#line 76 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__2_2);

#line 271 "delay_construct.m"
static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_cases_4_p_0(
#line 271 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
#line 271 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__InstMap0_2,
#line 271 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__DelayInfo_3,
#line 271 "delay_construct.m"
  MR_Word * transform_hlds__delay_construct__HeadVar__4_4);

#line 262 "delay_construct.m"
static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(
#line 262 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
#line 262 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__InstMap0_2,
#line 262 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__DelayInfo_3,
#line 262 "delay_construct.m"
  MR_Word * transform_hlds__delay_construct__HeadVar__4_4);

#line 200 "delay_construct.m"
static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(
#line 200 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
#line 200 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__InstMap0_2,
#line 200 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__DelayInfo_3,
#line 200 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__ConstructedVars0_4,
#line 200 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__5_5,
#line 200 "delay_construct.m"
  MR_Word * transform_hlds__delay_construct__HeadVar__6_6);

#line 86 "delay_construct.m"
static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(
#line 86 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__Goal0_5,
#line 86 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__InstMap0_6,
#line 86 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__DelayInfo_7,
#line 86 "delay_construct.m"
  MR_Word * transform_hlds__delay_construct__Goal_8);


static /* final */ const MR_Box transform_hlds__delay_construct_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__delay_construct_scalar_common_2[1][3];




static /* final */ const MR_Box transform_hlds__delay_construct_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__delay_construct_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__delay_construct_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 289 "transform_hlds.delay_construct.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__delay_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 297 "transform_hlds.delay_construct.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__delay_construct__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__delay_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 306 "transform_hlds.delay_construct.c"
static const MR_PseudoTypeInfo transform_hlds__delay_construct__transform_hlds__delay_construct__field_types_delay_construct_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__delay_construct__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0
};

#line 314 "transform_hlds.delay_construct.c"
static const MR_ConstString transform_hlds__delay_construct__transform_hlds__delay_construct__field_names_delay_construct_info_0_0[4] = {
  (MR_String) "dci_module_info",
  (MR_String) "dci_body_typeinfo_liveness",
  (MR_String) "dci_vartypes",
  (MR_String) "dci_rtti_varmaps"
};

#line 322 "transform_hlds.delay_construct.c"
static const MR_DuFunctorDesc transform_hlds__delay_construct__transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0 = {
  (MR_String) "delay_construct_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__delay_construct__transform_hlds__delay_construct__field_types_delay_construct_info_0_0,
  transform_hlds__delay_construct__transform_hlds__delay_construct__field_names_delay_construct_info_0_0,
  NULL,
  NULL
};

#line 337 "transform_hlds.delay_construct.c"
static const MR_DuFunctorDescPtr transform_hlds__delay_construct__transform_hlds__delay_construct__du_stag_ordered_delay_construct_info_0_0[1] = {
  &transform_hlds__delay_construct__transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0
};

#line 342 "transform_hlds.delay_construct.c"
static const MR_DuPtagLayout transform_hlds__delay_construct__transform_hlds__delay_construct__du_ptag_ordered_delay_construct_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__delay_construct__transform_hlds__delay_construct__du_stag_ordered_delay_construct_info_0_0
  }
};

#line 351 "transform_hlds.delay_construct.c"
static const MR_DuFunctorDescPtr transform_hlds__delay_construct__transform_hlds__delay_construct__du_name_ordered_delay_construct_info_0[1] = {
  &transform_hlds__delay_construct__transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0
};

#line 356 "transform_hlds.delay_construct.c"
static const MR_Integer transform_hlds__delay_construct__transform_hlds__delay_construct__functor_number_map_delay_construct_info_0[1] = {
  (MR_Integer) 0
};

#line 361 "transform_hlds.delay_construct.c"
const MR_TypeCtorInfo_Struct transform_hlds__delay_construct__transform_hlds__delay_construct__type_ctor_info_delay_construct_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__delay_construct____Unify____delay_construct_info_0_0_10001)),
  ((MR_Box) (transform_hlds__delay_construct____Compare____delay_construct_info_0_0_10001)),
  (MR_String) "transform_hlds.delay_construct",
  (MR_String) "delay_construct_info",
  {     transform_hlds__delay_construct__transform_hlds__delay_construct__du_name_ordered_delay_construct_info_0 },
  {     transform_hlds__delay_construct__transform_hlds__delay_construct__du_ptag_ordered_delay_construct_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__delay_construct__transform_hlds__delay_construct__functor_number_map_delay_construct_info_0
};

#line 378 "transform_hlds.delay_construct.c"
static MR_bool MR_CALL 
transform_hlds__delay_construct____Unify____delay_construct_info_0_0_10001(
#line 381 "transform_hlds.delay_construct.c"
  MR_Box transform_hlds__delay_construct__wrapper_arg_1,
#line 383 "transform_hlds.delay_construct.c"
  MR_Box transform_hlds__delay_construct__wrapper_arg_2)
#line 385 "transform_hlds.delay_construct.c"
{
#line 387 "transform_hlds.delay_construct.c"
  {
#line 389 "transform_hlds.delay_construct.c"
    MR_bool transform_hlds__delay_construct__succeeded;

#line 392 "transform_hlds.delay_construct.c"
    {
#line 394 "transform_hlds.delay_construct.c"
      transform_hlds__delay_construct__succeeded = transform_hlds__delay_construct____Unify____delay_construct_info_0_0(((MR_Word) transform_hlds__delay_construct__wrapper_arg_1), ((MR_Word) transform_hlds__delay_construct__wrapper_arg_2));
    }
#line 397 "transform_hlds.delay_construct.c"
    return transform_hlds__delay_construct__succeeded;
#line 399 "transform_hlds.delay_construct.c"
  }
#line 401 "transform_hlds.delay_construct.c"
}

#line 404 "transform_hlds.delay_construct.c"
static void MR_CALL 
transform_hlds__delay_construct____Compare____delay_construct_info_0_0_10001(
#line 407 "transform_hlds.delay_construct.c"
  MR_Box * transform_hlds__delay_construct__wrapper_arg_1,
#line 409 "transform_hlds.delay_construct.c"
  MR_Box transform_hlds__delay_construct__wrapper_arg_2,
#line 411 "transform_hlds.delay_construct.c"
  MR_Box transform_hlds__delay_construct__wrapper_arg_3)
#line 413 "transform_hlds.delay_construct.c"
{
#line 415 "transform_hlds.delay_construct.c"
  {
#line 417 "transform_hlds.delay_construct.c"
    MR_Word transform_hlds__delay_construct__conv0_HeadVar__1_1;

#line 420 "transform_hlds.delay_construct.c"
    {
#line 422 "transform_hlds.delay_construct.c"
      transform_hlds__delay_construct____Compare____delay_construct_info_0_0(&transform_hlds__delay_construct__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__delay_construct__wrapper_arg_2), ((MR_Word) transform_hlds__delay_construct__wrapper_arg_3));
    }
#line 425 "transform_hlds.delay_construct.c"
    *transform_hlds__delay_construct__wrapper_arg_1 = ((MR_Box) (transform_hlds__delay_construct__conv0_HeadVar__1_1));
#line 427 "transform_hlds.delay_construct.c"
  }
#line 429 "transform_hlds.delay_construct.c"
}

#line 76 "delay_construct.m"
static void MR_CALL 
transform_hlds__delay_construct____Compare____delay_construct_info_0_0(
#line 76 "delay_construct.m"
  MR_Word * transform_hlds__delay_construct__HeadVar__1_1,
#line 76 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__2_2,
#line 76 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__3_3)
#line 76 "delay_construct.m"
{
#line 76 "delay_construct.m"
  {
#line 76 "delay_construct.m"
    MR_bool transform_hlds__delay_construct__succeeded;
#line 76 "delay_construct.m"
    MR_Integer transform_hlds__delay_construct__CastX_15 = (MR_Integer) transform_hlds__delay_construct__HeadVar__2_2;
#line 76 "delay_construct.m"
    MR_Integer transform_hlds__delay_construct__CastY_16 = (MR_Integer) transform_hlds__delay_construct__HeadVar__3_3;

#line 76 "delay_construct.m"
    transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__CastX_15 == transform_hlds__delay_construct__CastY_16);
#line 76 "delay_construct.m"
    if (transform_hlds__delay_construct__succeeded)
#line 456 "transform_hlds.delay_construct.c"
      *transform_hlds__delay_construct__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "delay_construct.m"
    else
#line 76 "delay_construct.m"
      {
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 0)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 3)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__3_3, (MR_Integer) 2)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__3_3, (MR_Integer) 3)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_12_12;

#line 76 "delay_construct.m"
        {
#line 76 "delay_construct.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__delay_construct__V_12_12, transform_hlds__delay_construct__V_4_4, transform_hlds__delay_construct__V_8_8);
        }
#line 486 "transform_hlds.delay_construct.c"
        transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__V_12_12 == (MR_Integer) 0);
#line 76 "delay_construct.m"
        transform_hlds__delay_construct__succeeded = !(transform_hlds__delay_construct__succeeded);
#line 76 "delay_construct.m"
        if (transform_hlds__delay_construct__succeeded)
#line 76 "delay_construct.m"
          *transform_hlds__delay_construct__HeadVar__1_1 = transform_hlds__delay_construct__V_12_12;
#line 76 "delay_construct.m"
        else
#line 76 "delay_construct.m"
          {
#line 76 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_13_13;
#line 76 "delay_construct.m"
            MR_Integer transform_hlds__delay_construct__V_21_21 = (MR_Integer) transform_hlds__delay_construct__V_5_5;
#line 76 "delay_construct.m"
            MR_Integer transform_hlds__delay_construct__V_22_22 = (MR_Integer) transform_hlds__delay_construct__V_9_9;

#line 76 "delay_construct.m"
            {
#line 76 "delay_construct.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__delay_construct__V_13_13, transform_hlds__delay_construct__V_21_21, transform_hlds__delay_construct__V_22_22);
            }
#line 510 "transform_hlds.delay_construct.c"
            transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__V_13_13 == (MR_Integer) 0);
#line 76 "delay_construct.m"
            transform_hlds__delay_construct__succeeded = !(transform_hlds__delay_construct__succeeded);
#line 76 "delay_construct.m"
            if (transform_hlds__delay_construct__succeeded)
#line 76 "delay_construct.m"
              *transform_hlds__delay_construct__HeadVar__1_1 = transform_hlds__delay_construct__V_13_13;
#line 76 "delay_construct.m"
            else
#line 76 "delay_construct.m"
              {
#line 76 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__V_14_14;

#line 76 "delay_construct.m"
                {
#line 76 "delay_construct.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__delay_construct_scalar_common_2[0], &transform_hlds__delay_construct__V_14_14, ((MR_Box) (transform_hlds__delay_construct__V_6_6)), ((MR_Box) (transform_hlds__delay_construct__V_10_10)));
                }
#line 530 "transform_hlds.delay_construct.c"
                transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__V_14_14 == (MR_Integer) 0);
#line 76 "delay_construct.m"
                transform_hlds__delay_construct__succeeded = !(transform_hlds__delay_construct__succeeded);
#line 76 "delay_construct.m"
                if (transform_hlds__delay_construct__succeeded)
#line 76 "delay_construct.m"
                  *transform_hlds__delay_construct__HeadVar__1_1 = transform_hlds__delay_construct__V_14_14;
#line 76 "delay_construct.m"
                else
#line 76 "delay_construct.m"
                  {
#line 76 "delay_construct.m"
                    hlds__hlds_rtti____Compare____rtti_varmaps_0_0(transform_hlds__delay_construct__HeadVar__1_1, transform_hlds__delay_construct__V_7_7, transform_hlds__delay_construct__V_11_11);
#line 76 "delay_construct.m"
                    return;
                  }
#line 76 "delay_construct.m"
              }
#line 76 "delay_construct.m"
          }
#line 76 "delay_construct.m"
      }
#line 76 "delay_construct.m"
  }
#line 76 "delay_construct.m"
}

#line 76 "delay_construct.m"
static MR_bool MR_CALL 
transform_hlds__delay_construct____Unify____delay_construct_info_0_0(
#line 76 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
#line 76 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__2_2)
#line 76 "delay_construct.m"
{
#line 76 "delay_construct.m"
  {
#line 76 "delay_construct.m"
    MR_bool transform_hlds__delay_construct__succeeded;
#line 76 "delay_construct.m"
    MR_Integer transform_hlds__delay_construct__CastX_11 = (MR_Integer) transform_hlds__delay_construct__HeadVar__1_1;
#line 76 "delay_construct.m"
    MR_Integer transform_hlds__delay_construct__CastY_12 = (MR_Integer) transform_hlds__delay_construct__HeadVar__2_2;

#line 76 "delay_construct.m"
    transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__CastX_11 == transform_hlds__delay_construct__CastY_12);
#line 76 "delay_construct.m"
    if (transform_hlds__delay_construct__succeeded)
#line 76 "delay_construct.m"
      transform_hlds__delay_construct__succeeded = MR_TRUE;
#line 76 "delay_construct.m"
    else
#line 76 "delay_construct.m"
      {
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__TypeInfo_14_14;
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 2)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 3)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 0)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 3)));

#line 605 "transform_hlds.delay_construct.c"
        {
#line 607 "transform_hlds.delay_construct.c"
          transform_hlds__delay_construct__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__delay_construct__V_3_3, transform_hlds__delay_construct__V_7_7);
        }
#line 76 "delay_construct.m"
        if (transform_hlds__delay_construct__succeeded)
#line 76 "delay_construct.m"
          {
#line 614 "transform_hlds.delay_construct.c"
            transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__V_4_4 == transform_hlds__delay_construct__V_8_8);
#line 76 "delay_construct.m"
            if (transform_hlds__delay_construct__succeeded)
#line 76 "delay_construct.m"
              {
#line 620 "transform_hlds.delay_construct.c"
                transform_hlds__delay_construct__TypeInfo_14_14 = (MR_Word) &transform_hlds__delay_construct_scalar_common_2[0];
#line 622 "transform_hlds.delay_construct.c"
                {
#line 624 "transform_hlds.delay_construct.c"
                  transform_hlds__delay_construct__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__delay_construct__TypeInfo_14_14, ((MR_Box) (transform_hlds__delay_construct__V_5_5)), ((MR_Box) (transform_hlds__delay_construct__V_9_9)));
                }
#line 76 "delay_construct.m"
                if (transform_hlds__delay_construct__succeeded)
#line 629 "transform_hlds.delay_construct.c"
                  {
#line 631 "transform_hlds.delay_construct.c"
                    return transform_hlds__delay_construct__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__delay_construct__V_6_6, transform_hlds__delay_construct__V_10_10);
                  }
#line 76 "delay_construct.m"
              }
#line 76 "delay_construct.m"
          }
#line 76 "delay_construct.m"
      }
#line 76 "delay_construct.m"
    return transform_hlds__delay_construct__succeeded;
#line 76 "delay_construct.m"
  }
#line 76 "delay_construct.m"
}

#line 271 "delay_construct.m"
static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_cases_4_p_0(
#line 271 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
#line 271 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__InstMap0_2,
#line 271 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__DelayInfo_3,
#line 271 "delay_construct.m"
  MR_Word * transform_hlds__delay_construct__HeadVar__4_4)
#line 271 "delay_construct.m"
{
#line 274 "delay_construct.m"
  {
#line 274 "delay_construct.m"
    MR_bool transform_hlds__delay_construct__succeeded;

#line 274 "delay_construct.m"
    if ((transform_hlds__delay_construct__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "delay_construct.m"
      *transform_hlds__delay_construct__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 274 "delay_construct.m"
    else
#line 276 "delay_construct.m"
      {
#line 276 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__Case0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 0)));
#line 276 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__Cases0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__Case_11;
#line 276 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__Cases_12;
#line 276 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Case0_7, (MR_Integer) 0)));
#line 276 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Case0_7, (MR_Integer) 1)));
#line 276 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Case0_7, (MR_Integer) 2)));
#line 276 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__Goal_16;

#line 278 "delay_construct.m"
        {
#line 278 "delay_construct.m"
          transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__Goal0_15, transform_hlds__delay_construct__InstMap0_2, transform_hlds__delay_construct__DelayInfo_3, &transform_hlds__delay_construct__Goal_16);
        }
#line 279 "delay_construct.m"
        {
#line 279 "delay_construct.m"
          transform_hlds__delay_construct__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 279 "delay_construct.m"
          MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Case_11, 0) = ((MR_Box) (transform_hlds__delay_construct__MainConsId_13));
#line 279 "delay_construct.m"
          MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Case_11, 1) = ((MR_Box) (transform_hlds__delay_construct__OtherConsIds_14));
#line 279 "delay_construct.m"
          MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Case_11, 2) = ((MR_Box) (transform_hlds__delay_construct__Goal_16));
#line 279 "delay_construct.m"
        }
#line 280 "delay_construct.m"
        {
#line 280 "delay_construct.m"
          transform_hlds__delay_construct__delay_construct_in_cases_4_p_0(transform_hlds__delay_construct__Cases0_8, transform_hlds__delay_construct__InstMap0_2, transform_hlds__delay_construct__DelayInfo_3, &transform_hlds__delay_construct__Cases_12);
        }
#line 276 "delay_construct.m"
        {
#line 276 "delay_construct.m"
          MR_Word base;
#line 276 "delay_construct.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "delay_construct.m"
          *transform_hlds__delay_construct__HeadVar__4_4 = base;
#line 276 "delay_construct.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__delay_construct__Case_11));
#line 276 "delay_construct.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__delay_construct__Cases_12));
#line 276 "delay_construct.m"
        }
#line 276 "delay_construct.m"
      }
#line 274 "delay_construct.m"
  }
#line 271 "delay_construct.m"
}

#line 262 "delay_construct.m"
static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(
#line 262 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
#line 262 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__InstMap0_2,
#line 262 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__DelayInfo_3,
#line 262 "delay_construct.m"
  MR_Word * transform_hlds__delay_construct__HeadVar__4_4)
#line 262 "delay_construct.m"
{
#line 265 "delay_construct.m"
  {
#line 265 "delay_construct.m"
    MR_bool transform_hlds__delay_construct__succeeded;

#line 265 "delay_construct.m"
    if ((transform_hlds__delay_construct__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "delay_construct.m"
      *transform_hlds__delay_construct__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "delay_construct.m"
    else
#line 267 "delay_construct.m"
      {
#line 267 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 0)));
#line 267 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__Goals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 1)));
#line 267 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__Goal_11;
#line 267 "delay_construct.m"
        MR_Word transform_hlds__delay_construct__Goals_12;

#line 268 "delay_construct.m"
        {
#line 268 "delay_construct.m"
          transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__Goal0_7, transform_hlds__delay_construct__InstMap0_2, transform_hlds__delay_construct__DelayInfo_3, &transform_hlds__delay_construct__Goal_11);
        }
#line 269 "delay_construct.m"
        {
#line 269 "delay_construct.m"
          transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(transform_hlds__delay_construct__Goals0_8, transform_hlds__delay_construct__InstMap0_2, transform_hlds__delay_construct__DelayInfo_3, &transform_hlds__delay_construct__Goals_12);
        }
#line 267 "delay_construct.m"
        {
#line 267 "delay_construct.m"
          MR_Word base;
#line 267 "delay_construct.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "delay_construct.m"
          *transform_hlds__delay_construct__HeadVar__4_4 = base;
#line 267 "delay_construct.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__delay_construct__Goal_11));
#line 267 "delay_construct.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__delay_construct__Goals_12));
#line 267 "delay_construct.m"
        }
#line 267 "delay_construct.m"
      }
#line 265 "delay_construct.m"
  }
#line 262 "delay_construct.m"
}

#line 200 "delay_construct.m"
static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(
#line 200 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
#line 200 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__InstMap0_2,
#line 200 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__DelayInfo_3,
#line 200 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__ConstructedVars0_4,
#line 200 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__5_5,
#line 200 "delay_construct.m"
  MR_Word * transform_hlds__delay_construct__HeadVar__6_6)
#line 200 "delay_construct.m"
{
#line 204 "delay_construct.m"
  while (MR_TRUE)
#line 204 "delay_construct.m"
    {
#line 204 "delay_construct.m"
      /* tailcall optimized into a loop */
#line 204 "delay_construct.m"
      {
#line 204 "delay_construct.m"
        MR_bool transform_hlds__delay_construct__succeeded;

#line 204 "delay_construct.m"
        if ((transform_hlds__delay_construct__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "delay_construct.m"
          {
#line 205 "delay_construct.m"
            {
#line 205 "delay_construct.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__delay_construct__HeadVar__5_5, transform_hlds__delay_construct__HeadVar__6_6);
#line 205 "delay_construct.m"
              return;
            }
#line 204 "delay_construct.m"
          }
#line 204 "delay_construct.m"
        else
#line 207 "delay_construct.m"
          {
#line 207 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 0)));
#line 207 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 1)));
#line 207 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__GoalExpr0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Goal0_12, (MR_Integer) 0)));
#line 207 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__GoalInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Goal0_12, (MR_Integer) 1)));
#line 207 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__InstMapDelta0_21;
#line 207 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__InstMap1_22;
#line 224 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__Var_28;
#line 212 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__Unif_26;
#line 212 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__Args_30;
#line 212 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__Inst0_37;
#line 212 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__Inst1_38;
#line 212 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_46_46;
#line 212 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_47_47;
#line 212 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_23_23;
#line 212 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_24_24;
#line 212 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_25_25;
#line 212 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_27_27;
#line 213 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_29_29;
#line 213 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_31_31;
#line 213 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_32_32;
#line 213 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_33_33;
#line 213 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_34_34;
#line 214 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_35_35;
#line 214 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_36_36;
#line 216 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_57_57;
#line 216 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_58_58;
#line 216 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_59_59;
#line 218 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_60_60;
#line 218 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_61_61;
#line 218 "delay_construct.m"
            MR_Word transform_hlds__delay_construct__V_62_62;

#line 209 "delay_construct.m"
            {
#line 209 "delay_construct.m"
              transform_hlds__delay_construct__InstMapDelta0_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__delay_construct__GoalInfo0_20);
            }
#line 210 "delay_construct.m"
            {
#line 210 "delay_construct.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__delay_construct__InstMap0_2, transform_hlds__delay_construct__InstMapDelta0_21, &transform_hlds__delay_construct__InstMap1_22);
            }
#line 212 "delay_construct.m"
            transform_hlds__delay_construct__succeeded = ((MR_tag((MR_Word) transform_hlds__delay_construct__GoalExpr0_19)) == (MR_mktag((MR_Integer) 1)));
#line 212 "delay_construct.m"
            if (transform_hlds__delay_construct__succeeded)
#line 212 "delay_construct.m"
              {
#line 212 "delay_construct.m"
                transform_hlds__delay_construct__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 0)));
#line 212 "delay_construct.m"
                transform_hlds__delay_construct__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 1)));
#line 212 "delay_construct.m"
                transform_hlds__delay_construct__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 2)));
#line 212 "delay_construct.m"
                transform_hlds__delay_construct__Unif_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 3)));
#line 212 "delay_construct.m"
                transform_hlds__delay_construct__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 4)));
#line 213 "delay_construct.m"
                transform_hlds__delay_construct__succeeded = ((MR_tag((MR_Word) transform_hlds__delay_construct__Unif_26)) == (MR_mktag((MR_Integer) 0)));
#line 213 "delay_construct.m"
                if (transform_hlds__delay_construct__succeeded)
#line 213 "delay_construct.m"
                  {
#line 213 "delay_construct.m"
                    transform_hlds__delay_construct__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 0)));
#line 213 "delay_construct.m"
                    transform_hlds__delay_construct__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 1)));
#line 213 "delay_construct.m"
                    transform_hlds__delay_construct__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 2)));
#line 213 "delay_construct.m"
                    transform_hlds__delay_construct__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 3)));
#line 213 "delay_construct.m"
                    transform_hlds__delay_construct__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 4)));
#line 213 "delay_construct.m"
                    transform_hlds__delay_construct__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 5)));
#line 213 "delay_construct.m"
                    transform_hlds__delay_construct__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 6)));
#line 214 "delay_construct.m"
                    transform_hlds__delay_construct__succeeded = ((MR_tag((MR_Word) transform_hlds__delay_construct__Args_30)) == (MR_mktag((MR_Integer) 1)));
#line 214 "delay_construct.m"
                    if (transform_hlds__delay_construct__succeeded)
#line 214 "delay_construct.m"
                      {
#line 214 "delay_construct.m"
                        transform_hlds__delay_construct__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__Args_30, (MR_Integer) 0)));
#line 214 "delay_construct.m"
                        transform_hlds__delay_construct__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__Args_30, (MR_Integer) 1)));
#line 215 "delay_construct.m"
                        {
#line 215 "delay_construct.m"
                          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__delay_construct__InstMap0_2, transform_hlds__delay_construct__Var_28, &transform_hlds__delay_construct__Inst0_37);
                        }
#line 216 "delay_construct.m"
                        transform_hlds__delay_construct__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 0)));
#line 216 "delay_construct.m"
                        transform_hlds__delay_construct__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 1)));
#line 216 "delay_construct.m"
                        transform_hlds__delay_construct__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 2)));
#line 216 "delay_construct.m"
                        transform_hlds__delay_construct__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 3)));
#line 216 "delay_construct.m"
                        {
#line 216 "delay_construct.m"
                          transform_hlds__delay_construct__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__delay_construct__V_46_46, transform_hlds__delay_construct__Inst0_37);
                        }
#line 212 "delay_construct.m"
                        if (transform_hlds__delay_construct__succeeded)
#line 212 "delay_construct.m"
                          {
#line 217 "delay_construct.m"
                            {
#line 217 "delay_construct.m"
                              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__delay_construct__InstMap1_22, transform_hlds__delay_construct__Var_28, &transform_hlds__delay_construct__Inst1_38);
                            }
#line 218 "delay_construct.m"
                            transform_hlds__delay_construct__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 0)));
#line 218 "delay_construct.m"
                            transform_hlds__delay_construct__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 1)));
#line 218 "delay_construct.m"
                            transform_hlds__delay_construct__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 2)));
#line 218 "delay_construct.m"
                            transform_hlds__delay_construct__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 3)));
#line 218 "delay_construct.m"
                            {
#line 218 "delay_construct.m"
                              transform_hlds__delay_construct__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(transform_hlds__delay_construct__V_47_47, transform_hlds__delay_construct__Inst1_38);
                            }
#line 212 "delay_construct.m"
                          }
#line 214 "delay_construct.m"
                      }
#line 213 "delay_construct.m"
                  }
#line 212 "delay_construct.m"
              }
#line 224 "delay_construct.m"
            if (transform_hlds__delay_construct__succeeded)
#line 220 "delay_construct.m"
              {
#line 220 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__ConstructedVars1_39;
#line 220 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__RevDelayedGoals1_40;

#line 220 "delay_construct.m"
                {
#line 220 "delay_construct.m"
                  mercury__set__insert_3_p_0((MR_Word) &transform_hlds__delay_construct_scalar_common_1[0], ((MR_Box) (transform_hlds__delay_construct__Var_28)), transform_hlds__delay_construct__ConstructedVars0_4, &transform_hlds__delay_construct__ConstructedVars1_39);
                }
#line 221 "delay_construct.m"
                {
#line 221 "delay_construct.m"
                  transform_hlds__delay_construct__RevDelayedGoals1_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "delay_construct.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__RevDelayedGoals1_40, 0) = ((MR_Box) (transform_hlds__delay_construct__Goal0_12));
#line 221 "delay_construct.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__RevDelayedGoals1_40, 1) = ((MR_Box) (transform_hlds__delay_construct__HeadVar__5_5));
#line 221 "delay_construct.m"
                }
#line 222 "delay_construct.m"
                /* direct tailcall eliminated */
#line 222 "delay_construct.m"
                {
#line 222 "delay_construct.m"
                  MR_Word transform_hlds__delay_construct__HeadVar__1__tmp_copy_1 = transform_hlds__delay_construct__Goals0_13;
#line 222 "delay_construct.m"
                  MR_Word transform_hlds__delay_construct__InstMap0__tmp_copy_2 = transform_hlds__delay_construct__InstMap1_22;
#line 222 "delay_construct.m"
                  MR_Word transform_hlds__delay_construct__ConstructedVars0__tmp_copy_4 = transform_hlds__delay_construct__ConstructedVars1_39;
#line 222 "delay_construct.m"
                  MR_Word transform_hlds__delay_construct__HeadVar__5__tmp_copy_5 = transform_hlds__delay_construct__RevDelayedGoals1_40;

#line 222 "delay_construct.m"
                  transform_hlds__delay_construct__HeadVar__5_5 = transform_hlds__delay_construct__HeadVar__5__tmp_copy_5;
#line 222 "delay_construct.m"
                  transform_hlds__delay_construct__ConstructedVars0_4 = transform_hlds__delay_construct__ConstructedVars0__tmp_copy_4;
#line 222 "delay_construct.m"
                  transform_hlds__delay_construct__InstMap0_2 = transform_hlds__delay_construct__InstMap0__tmp_copy_2;
#line 222 "delay_construct.m"
                  transform_hlds__delay_construct__HeadVar__1_1 = transform_hlds__delay_construct__HeadVar__1__tmp_copy_1;
#line 222 "delay_construct.m"
                }
#line 222 "delay_construct.m"
                continue;
#line 220 "delay_construct.m"
              }
#line 224 "delay_construct.m"
            else
#line 240 "delay_construct.m"
              {
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__TypeCtorInfo_74_74;
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__NonLocals_41;
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__CompletedNonLocals_42;
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__Intersection_43;
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__V_48_48;
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__V_51_51;
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__V_52_52;
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__V_64_64;
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__V_65_65;
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Goal0_12, (MR_Integer) 0)));
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Goal0_12, (MR_Integer) 1)));
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__Detism_93;
#line 225 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__MaxSoln_95;
#line 257 "delay_construct.m"
                MR_Word transform_hlds__delay_construct___CanFail_94;
#line 228 "delay_construct.m"
                MR_Word transform_hlds__delay_construct__V_63_63;

#line 225 "delay_construct.m"
                {
#line 225 "delay_construct.m"
                  transform_hlds__delay_construct__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(transform_hlds__delay_construct__GoalExpr0_19, transform_hlds__delay_construct__V_77_77);
                }
#line 225 "delay_construct.m"
                if (transform_hlds__delay_construct__succeeded)
#line 225 "delay_construct.m"
                  {
#line 225 "delay_construct.m"
                    {
#line 225 "delay_construct.m"
                      transform_hlds__delay_construct__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(transform_hlds__delay_construct__GoalInfo0_20, transform_hlds__delay_construct__V_78_78);
                    }
#line 225 "delay_construct.m"
                    if (transform_hlds__delay_construct__succeeded)
#line 225 "delay_construct.m"
                      {
#line 253 "delay_construct.m"
                        if (((MR_tag((MR_Word) transform_hlds__delay_construct__GoalExpr0_19)) == (MR_mktag((MR_Integer) 2))))
#line 254 "delay_construct.m"
                          {
#line 254 "delay_construct.m"
                            MR_Word transform_hlds__delay_construct__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 3)));
#line 254 "delay_construct.m"
                            MR_Word transform_hlds__delay_construct__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 0)));
#line 254 "delay_construct.m"
                            MR_Integer transform_hlds__delay_construct__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 1)));
#line 254 "delay_construct.m"
                            MR_Word transform_hlds__delay_construct__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 2)));
#line 254 "delay_construct.m"
                            MR_Word transform_hlds__delay_construct__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 4)));
#line 254 "delay_construct.m"
                            MR_Word transform_hlds__delay_construct__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 5)));

#line 254 "delay_construct.m"
                            transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__V_96_96 == (MR_Integer) 0);
#line 254 "delay_construct.m"
                          }
#line 253 "delay_construct.m"
                        else
#line 253 "delay_construct.m"
                        if (((MR_tag((MR_Word) transform_hlds__delay_construct__GoalExpr0_19)) == (MR_mktag((MR_Integer) 1))))
#line 252 "delay_construct.m"
                          transform_hlds__delay_construct__succeeded = MR_TRUE;
#line 253 "delay_construct.m"
                        else
#line 253 "delay_construct.m"
                          transform_hlds__delay_construct__succeeded = MR_FALSE;
#line 225 "delay_construct.m"
                        if (transform_hlds__delay_construct__succeeded)
#line 225 "delay_construct.m"
                          {
#line 256 "delay_construct.m"
                            {
#line 256 "delay_construct.m"
                              transform_hlds__delay_construct__Detism_93 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__delay_construct__GoalInfo0_20);
                            }
#line 257 "delay_construct.m"
                            {
#line 257 "delay_construct.m"
                              parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__delay_construct__Detism_93, &transform_hlds__delay_construct___CanFail_94, &transform_hlds__delay_construct__MaxSoln_95);
                            }
#line 258 "delay_construct.m"
                            transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__MaxSoln_95 == (MR_Integer) 3);
#line 258 "delay_construct.m"
                            transform_hlds__delay_construct__succeeded = !(transform_hlds__delay_construct__succeeded);
#line 225 "delay_construct.m"
                            if (transform_hlds__delay_construct__succeeded)
#line 225 "delay_construct.m"
                              {
#line 227 "delay_construct.m"
                                {
#line 227 "delay_construct.m"
                                  transform_hlds__delay_construct__NonLocals_41 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__delay_construct__GoalInfo0_20);
                                }
#line 228 "delay_construct.m"
                                transform_hlds__delay_construct__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 0)));
#line 228 "delay_construct.m"
                                transform_hlds__delay_construct__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 1)));
#line 228 "delay_construct.m"
                                transform_hlds__delay_construct__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 2)));
#line 228 "delay_construct.m"
                                transform_hlds__delay_construct__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 3)));
#line 228 "delay_construct.m"
                                {
#line 228 "delay_construct.m"
                                  hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(transform_hlds__delay_construct__NonLocals_41, transform_hlds__delay_construct__V_48_48, transform_hlds__delay_construct__V_64_64, transform_hlds__delay_construct__V_65_65, &transform_hlds__delay_construct__CompletedNonLocals_42);
                                }
#line 1184 "transform_hlds.delay_construct.c"
                                transform_hlds__delay_construct__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 233 "delay_construct.m"
                                {
#line 233 "delay_construct.m"
                                  transform_hlds__delay_construct__V_51_51 = parse_tree__set_of_var__set_to_bitset_1_f_0(transform_hlds__delay_construct__TypeCtorInfo_74_74, transform_hlds__delay_construct__ConstructedVars0_4);
                                }
#line 232 "delay_construct.m"
                                {
#line 232 "delay_construct.m"
                                  parse_tree__set_of_var__intersect_3_p_0(transform_hlds__delay_construct__TypeCtorInfo_74_74, transform_hlds__delay_construct__CompletedNonLocals_42, transform_hlds__delay_construct__V_51_51, &transform_hlds__delay_construct__Intersection_43);
                                }
#line 234 "delay_construct.m"
                                {
#line 234 "delay_construct.m"
                                  transform_hlds__delay_construct__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__delay_construct__TypeCtorInfo_74_74, transform_hlds__delay_construct__Intersection_43);
                                }
#line 225 "delay_construct.m"
                                if (transform_hlds__delay_construct__succeeded)
#line 225 "delay_construct.m"
                                  {
#line 235 "delay_construct.m"
                                    {
#line 235 "delay_construct.m"
                                      transform_hlds__delay_construct__V_52_52 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__delay_construct__GoalInfo0_20);
                                    }
#line 235 "delay_construct.m"
                                    transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__V_52_52 == (MR_Integer) 0);
#line 225 "delay_construct.m"
                                  }
#line 225 "delay_construct.m"
                              }
#line 225 "delay_construct.m"
                          }
#line 225 "delay_construct.m"
                      }
#line 225 "delay_construct.m"
                  }
#line 240 "delay_construct.m"
                if (transform_hlds__delay_construct__succeeded)
#line 238 "delay_construct.m"
                  {
#line 238 "delay_construct.m"
                    MR_Word transform_hlds__delay_construct__Goals1_44;

#line 237 "delay_construct.m"
                    {
#line 237 "delay_construct.m"
                      transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(transform_hlds__delay_construct__Goals0_13, transform_hlds__delay_construct__InstMap1_22, transform_hlds__delay_construct__DelayInfo_3, transform_hlds__delay_construct__ConstructedVars0_4, transform_hlds__delay_construct__HeadVar__5_5, &transform_hlds__delay_construct__Goals1_44);
                    }
#line 239 "delay_construct.m"
                    {
#line 239 "delay_construct.m"
                      MR_Word base;
#line 239 "delay_construct.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "delay_construct.m"
                      *transform_hlds__delay_construct__HeadVar__6_6 = base;
#line 239 "delay_construct.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__delay_construct__Goal0_12));
#line 239 "delay_construct.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__delay_construct__Goals1_44));
#line 239 "delay_construct.m"
                    }
#line 238 "delay_construct.m"
                  }
#line 240 "delay_construct.m"
                else
#line 241 "delay_construct.m"
                  {
#line 241 "delay_construct.m"
                    MR_Word transform_hlds__delay_construct__TypeCtorInfo_75_75 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 241 "delay_construct.m"
                    MR_Word transform_hlds__delay_construct__DelayedGoals_45;
#line 241 "delay_construct.m"
                    MR_Word transform_hlds__delay_construct__V_53_53;
#line 241 "delay_construct.m"
                    MR_Word transform_hlds__delay_construct__V_55_55;
#line 241 "delay_construct.m"
                    MR_Word transform_hlds__delay_construct__Goals1_56;

#line 241 "delay_construct.m"
                    {
#line 241 "delay_construct.m"
                      mercury__list__reverse_2_p_0(transform_hlds__delay_construct__TypeCtorInfo_75_75, transform_hlds__delay_construct__HeadVar__5_5, &transform_hlds__delay_construct__DelayedGoals_45);
                    }
#line 243 "delay_construct.m"
                    {
#line 243 "delay_construct.m"
                      transform_hlds__delay_construct__V_53_53 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__delay_construct_scalar_common_1[0]);
                    }
#line 242 "delay_construct.m"
                    {
#line 242 "delay_construct.m"
                      transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(transform_hlds__delay_construct__Goals0_13, transform_hlds__delay_construct__InstMap1_22, transform_hlds__delay_construct__DelayInfo_3, transform_hlds__delay_construct__V_53_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__delay_construct__Goals1_56);
                    }
#line 244 "delay_construct.m"
                    {
#line 244 "delay_construct.m"
                      transform_hlds__delay_construct__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "delay_construct.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__V_55_55, 0) = ((MR_Box) (transform_hlds__delay_construct__Goal0_12));
#line 244 "delay_construct.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__V_55_55, 1) = ((MR_Box) (transform_hlds__delay_construct__Goals1_56));
#line 244 "delay_construct.m"
                    }
#line 244 "delay_construct.m"
                    {
#line 244 "delay_construct.m"
                      mercury__list__append_3_p_1(transform_hlds__delay_construct__TypeCtorInfo_75_75, transform_hlds__delay_construct__DelayedGoals_45, transform_hlds__delay_construct__V_55_55, transform_hlds__delay_construct__HeadVar__6_6);
#line 244 "delay_construct.m"
                      return;
                    }
#line 241 "delay_construct.m"
                  }
#line 240 "delay_construct.m"
              }
#line 207 "delay_construct.m"
          }
#line 204 "delay_construct.m"
      }
#line 204 "delay_construct.m"
      break;
#line 204 "delay_construct.m"
    }
#line 200 "delay_construct.m"
}

#line 86 "delay_construct.m"
static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(
#line 86 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__Goal0_5,
#line 86 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__InstMap0_6,
#line 86 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__DelayInfo_7,
#line 86 "delay_construct.m"
  MR_Word * transform_hlds__delay_construct__Goal_8)
#line 86 "delay_construct.m"
{
#line 89 "delay_construct.m"
  {
#line 89 "delay_construct.m"
    MR_bool transform_hlds__delay_construct__succeeded;
#line 89 "delay_construct.m"
    MR_Word transform_hlds__delay_construct__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Goal0_5, (MR_Integer) 0)));
#line 89 "delay_construct.m"
    MR_Word transform_hlds__delay_construct__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Goal0_5, (MR_Integer) 1)));

#line 126 "delay_construct.m"
#line 126 "delay_construct.m"
    switch (MR_tag((MR_Word) transform_hlds__delay_construct__GoalExpr0_9)) {
#line 126 "delay_construct.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 126 "delay_construct.m"
      case (MR_Integer) 0:
#line 131 "delay_construct.m"
        {
#line 131 "delay_construct.m"
          MR_Word transform_hlds__delay_construct__NegGoal0_18 = (MR_Word) MR_body(((MR_Word) transform_hlds__delay_construct__GoalExpr0_9), (MR_Integer) 0);
#line 131 "delay_construct.m"
          MR_Word transform_hlds__delay_construct__NegGoal_19;
#line 131 "delay_construct.m"
          MR_Word transform_hlds__delay_construct__V_69_69;

#line 132 "delay_construct.m"
          {
#line 132 "delay_construct.m"
            transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__NegGoal0_18, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__NegGoal_19);
          }
#line 133 "delay_construct.m"
          transform_hlds__delay_construct__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__delay_construct__NegGoal_19);
#line 133 "delay_construct.m"
          {
#line 133 "delay_construct.m"
            MR_Word base;
#line 133 "delay_construct.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 133 "delay_construct.m"
            *transform_hlds__delay_construct__Goal_8 = base;
#line 133 "delay_construct.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__delay_construct__V_69_69));
#line 133 "delay_construct.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__delay_construct__GoalInfo0_10));
#line 133 "delay_construct.m"
          }
#line 131 "delay_construct.m"
        }
#line 126 "delay_construct.m"
        break;
#line 126 "delay_construct.m"
      case (MR_Integer) 1:
#line 126 "delay_construct.m"
      case (MR_Integer) 2:
#line 166 "delay_construct.m"
        *transform_hlds__delay_construct__Goal_8 = transform_hlds__delay_construct__Goal0_5;
#line 126 "delay_construct.m"
        break;
#line 126 "delay_construct.m"
      case (MR_Integer) 3:
#line 126 "delay_construct.m"
#line 126 "delay_construct.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 0)))) {
#line 126 "delay_construct.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 126 "delay_construct.m"
          case (MR_Integer) 0:
#line 126 "delay_construct.m"
          case (MR_Integer) 1:
#line 166 "delay_construct.m"
            *transform_hlds__delay_construct__Goal_8 = transform_hlds__delay_construct__Goal0_5;
#line 126 "delay_construct.m"
            break;
#line 126 "delay_construct.m"
          case (MR_Integer) 2:
#line 92 "delay_construct.m"
            {
#line 92 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 1)));
#line 92 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 2)));
#line 92 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Goals1_16;
#line 92 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Goals_17;
#line 92 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__V_73_73;

#line 120 "delay_construct.m"
#line 120 "delay_construct.m"
              switch (transform_hlds__delay_construct__ConjType_11) {
#line 120 "delay_construct.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 120 "delay_construct.m"
                case (MR_Integer) 1:
#line 122 "delay_construct.m"
                  transform_hlds__delay_construct__Goals1_16 = transform_hlds__delay_construct__Goals0_12;
#line 120 "delay_construct.m"
                  break;
#line 120 "delay_construct.m"
                case (MR_Integer) 0:
#line 94 "delay_construct.m"
                  {
#line 94 "delay_construct.m"
                    MR_Word transform_hlds__delay_construct__Detism_13;
#line 94 "delay_construct.m"
                    MR_Word transform_hlds__delay_construct__CanFail_14;
#line 94 "delay_construct.m"
                    MR_Word transform_hlds__delay_construct__MaxSoln_15;

#line 95 "delay_construct.m"
                    {
#line 95 "delay_construct.m"
                      transform_hlds__delay_construct__Detism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__delay_construct__GoalInfo0_10);
                    }
#line 96 "delay_construct.m"
                    {
#line 96 "delay_construct.m"
                      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__delay_construct__Detism_13, &transform_hlds__delay_construct__CanFail_14, &transform_hlds__delay_construct__MaxSoln_15);
                    }
#line 112 "delay_construct.m"
                    transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__CanFail_14 == (MR_Integer) 0);
#line 112 "delay_construct.m"
                    if (transform_hlds__delay_construct__succeeded)
#line 112 "delay_construct.m"
                      {
#line 113 "delay_construct.m"
                        transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__MaxSoln_15 == (MR_Integer) 0);
#line 113 "delay_construct.m"
                        transform_hlds__delay_construct__succeeded = !(transform_hlds__delay_construct__succeeded);
#line 112 "delay_construct.m"
                      }
#line 117 "delay_construct.m"
                    if (transform_hlds__delay_construct__succeeded)
#line 115 "delay_construct.m"
                      {
#line 115 "delay_construct.m"
                        MR_Word transform_hlds__delay_construct__V_71_71;

#line 115 "delay_construct.m"
                        {
#line 115 "delay_construct.m"
                          transform_hlds__delay_construct__V_71_71 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__delay_construct_scalar_common_1[0]);
                        }
#line 115 "delay_construct.m"
                        {
#line 115 "delay_construct.m"
                          transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(transform_hlds__delay_construct__Goals0_12, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, transform_hlds__delay_construct__V_71_71, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__delay_construct__Goals1_16);
                        }
#line 115 "delay_construct.m"
                      }
#line 117 "delay_construct.m"
                    else
#line 118 "delay_construct.m"
                      transform_hlds__delay_construct__Goals1_16 = transform_hlds__delay_construct__Goals0_12;
#line 94 "delay_construct.m"
                  }
#line 120 "delay_construct.m"
                  break;
#line 120 "delay_construct.m"
              }
#line 124 "delay_construct.m"
              {
#line 124 "delay_construct.m"
                transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(transform_hlds__delay_construct__Goals1_16, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__Goals_17);
              }
#line 125 "delay_construct.m"
              {
#line 125 "delay_construct.m"
                transform_hlds__delay_construct__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 125 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 125 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_73_73, 1) = ((MR_Box) (transform_hlds__delay_construct__ConjType_11));
#line 125 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_73_73, 2) = ((MR_Box) (transform_hlds__delay_construct__Goals_17));
#line 125 "delay_construct.m"
              }
#line 125 "delay_construct.m"
              {
#line 125 "delay_construct.m"
                MR_Word base;
#line 125 "delay_construct.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 125 "delay_construct.m"
                *transform_hlds__delay_construct__Goal_8 = base;
#line 125 "delay_construct.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__delay_construct__V_73_73));
#line 125 "delay_construct.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__delay_construct__GoalInfo0_10));
#line 125 "delay_construct.m"
              }
#line 92 "delay_construct.m"
            }
#line 126 "delay_construct.m"
            break;
#line 126 "delay_construct.m"
          case (MR_Integer) 3:
#line 127 "delay_construct.m"
            {
#line 127 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__V_70_70;
#line 127 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Goals0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 1)));
#line 127 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Goals_75;

#line 128 "delay_construct.m"
              {
#line 128 "delay_construct.m"
                transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(transform_hlds__delay_construct__Goals0_74, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__Goals_75);
              }
#line 129 "delay_construct.m"
              {
#line 129 "delay_construct.m"
                transform_hlds__delay_construct__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 129 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_70_70, 1) = ((MR_Box) (transform_hlds__delay_construct__Goals_75));
#line 129 "delay_construct.m"
              }
#line 129 "delay_construct.m"
              {
#line 129 "delay_construct.m"
                MR_Word base;
#line 129 "delay_construct.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 129 "delay_construct.m"
                *transform_hlds__delay_construct__Goal_8 = base;
#line 129 "delay_construct.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__delay_construct__V_70_70));
#line 129 "delay_construct.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__delay_construct__GoalInfo0_10));
#line 129 "delay_construct.m"
              }
#line 127 "delay_construct.m"
            }
#line 126 "delay_construct.m"
            break;
#line 126 "delay_construct.m"
          case (MR_Integer) 4:
#line 135 "delay_construct.m"
            {
#line 135 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 1)));
#line 135 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Cases0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 3)));
#line 135 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Cases_22;
#line 135 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__V_68_68;
#line 135 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__CanFail_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 2)));

#line 136 "delay_construct.m"
              {
#line 136 "delay_construct.m"
                transform_hlds__delay_construct__delay_construct_in_cases_4_p_0(transform_hlds__delay_construct__Cases0_21, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__Cases_22);
              }
#line 137 "delay_construct.m"
              {
#line 137 "delay_construct.m"
                transform_hlds__delay_construct__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 137 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 137 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_68_68, 1) = ((MR_Box) (transform_hlds__delay_construct__Var_20));
#line 137 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_68_68, 2) = ((MR_Box) (transform_hlds__delay_construct__CanFail_76));
#line 137 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_68_68, 3) = ((MR_Box) (transform_hlds__delay_construct__Cases_22));
#line 137 "delay_construct.m"
              }
#line 137 "delay_construct.m"
              {
#line 137 "delay_construct.m"
                MR_Word base;
#line 137 "delay_construct.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 137 "delay_construct.m"
                *transform_hlds__delay_construct__Goal_8 = base;
#line 137 "delay_construct.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__delay_construct__V_68_68));
#line 137 "delay_construct.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__delay_construct__GoalInfo0_10));
#line 137 "delay_construct.m"
              }
#line 135 "delay_construct.m"
            }
#line 126 "delay_construct.m"
            break;
#line 126 "delay_construct.m"
          case (MR_Integer) 5:
#line 148 "delay_construct.m"
            {
#line 148 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Reason_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 1)));
#line 148 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__SubGoal0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 2)));
#line 150 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__FGT_37;
#line 150 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__V_36_36;

#line 150 "delay_construct.m"
              transform_hlds__delay_construct__succeeded = ((((MR_tag((MR_Word) transform_hlds__delay_construct__Reason_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Reason_34, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 150 "delay_construct.m"
              if (transform_hlds__delay_construct__succeeded)
#line 150 "delay_construct.m"
                {
#line 150 "delay_construct.m"
                  transform_hlds__delay_construct__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Reason_34, (MR_Integer) 1)));
#line 150 "delay_construct.m"
                  transform_hlds__delay_construct__FGT_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Reason_34, (MR_Integer) 2)));
#line 152 "delay_construct.m"
#line 152 "delay_construct.m"
                  switch (transform_hlds__delay_construct__FGT_37) {
#line 152 "delay_construct.m"
                    default:
#line 152 "delay_construct.m"
                      transform_hlds__delay_construct__succeeded = MR_FALSE;
#line 152 "delay_construct.m"
                      break;
#line 152 "delay_construct.m"
                    case (MR_Integer) 1:
#line 151 "delay_construct.m"
                      transform_hlds__delay_construct__succeeded = MR_TRUE;
#line 152 "delay_construct.m"
                      break;
#line 152 "delay_construct.m"
                    case (MR_Integer) 2:
#line 152 "delay_construct.m"
                      transform_hlds__delay_construct__succeeded = MR_TRUE;
#line 152 "delay_construct.m"
                      break;
#line 152 "delay_construct.m"
                  }
#line 150 "delay_construct.m"
                }
#line 156 "delay_construct.m"
              if (transform_hlds__delay_construct__succeeded)
#line 155 "delay_construct.m"
                *transform_hlds__delay_construct__Goal_8 = transform_hlds__delay_construct__Goal0_5;
#line 156 "delay_construct.m"
              else
#line 157 "delay_construct.m"
                {
#line 157 "delay_construct.m"
                  MR_Word transform_hlds__delay_construct__SubGoal_38;
#line 157 "delay_construct.m"
                  MR_Word transform_hlds__delay_construct__V_66_66;

#line 157 "delay_construct.m"
                  {
#line 157 "delay_construct.m"
                    transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__SubGoal0_35, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__SubGoal_38);
                  }
#line 158 "delay_construct.m"
                  {
#line 158 "delay_construct.m"
                    transform_hlds__delay_construct__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 158 "delay_construct.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 158 "delay_construct.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_66_66, 1) = ((MR_Box) (transform_hlds__delay_construct__Reason_34));
#line 158 "delay_construct.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_66_66, 2) = ((MR_Box) (transform_hlds__delay_construct__SubGoal_38));
#line 158 "delay_construct.m"
                  }
#line 158 "delay_construct.m"
                  {
#line 158 "delay_construct.m"
                    MR_Word base;
#line 158 "delay_construct.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 158 "delay_construct.m"
                    *transform_hlds__delay_construct__Goal_8 = base;
#line 158 "delay_construct.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__delay_construct__V_66_66));
#line 158 "delay_construct.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__delay_construct__GoalInfo0_10));
#line 158 "delay_construct.m"
                  }
#line 157 "delay_construct.m"
                }
#line 148 "delay_construct.m"
            }
#line 126 "delay_construct.m"
            break;
#line 126 "delay_construct.m"
          case (MR_Integer) 6:
#line 139 "delay_construct.m"
            {
#line 139 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 1)));
#line 139 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Cond0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 2)));
#line 139 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Then0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 3)));
#line 139 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Else0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 4)));
#line 139 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__CondInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Cond0_24, (MR_Integer) 1)));
#line 139 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__CondInstMapDelta_29;
#line 139 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__InstMapThen_30;
#line 139 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Cond_31;
#line 139 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Then_32;
#line 139 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__Else_33;
#line 139 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__V_67_67;
#line 140 "delay_construct.m"
              MR_Word transform_hlds__delay_construct__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Cond0_24, (MR_Integer) 0)));

#line 141 "delay_construct.m"
              {
#line 141 "delay_construct.m"
                transform_hlds__delay_construct__CondInstMapDelta_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__delay_construct__CondInfo0_28);
              }
#line 142 "delay_construct.m"
              {
#line 142 "delay_construct.m"
                hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__CondInstMapDelta_29, &transform_hlds__delay_construct__InstMapThen_30);
              }
#line 143 "delay_construct.m"
              {
#line 143 "delay_construct.m"
                transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__Cond0_24, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__Cond_31);
              }
#line 144 "delay_construct.m"
              {
#line 144 "delay_construct.m"
                transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__Then0_25, transform_hlds__delay_construct__InstMapThen_30, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__Then_32);
              }
#line 145 "delay_construct.m"
              {
#line 145 "delay_construct.m"
                transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__Else0_26, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__Else_33);
              }
#line 146 "delay_construct.m"
              {
#line 146 "delay_construct.m"
                transform_hlds__delay_construct__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 146 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 146 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_67_67, 1) = ((MR_Box) (transform_hlds__delay_construct__Vars_23));
#line 146 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_67_67, 2) = ((MR_Box) (transform_hlds__delay_construct__Cond_31));
#line 146 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_67_67, 3) = ((MR_Box) (transform_hlds__delay_construct__Then_32));
#line 146 "delay_construct.m"
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__V_67_67, 4) = ((MR_Box) (transform_hlds__delay_construct__Else_33));
#line 146 "delay_construct.m"
              }
#line 146 "delay_construct.m"
              {
#line 146 "delay_construct.m"
                MR_Word base;
#line 146 "delay_construct.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 146 "delay_construct.m"
                *transform_hlds__delay_construct__Goal_8 = base;
#line 146 "delay_construct.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__delay_construct__V_67_67));
#line 146 "delay_construct.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__delay_construct__GoalInfo0_10));
#line 146 "delay_construct.m"
              }
#line 139 "delay_construct.m"
            }
#line 126 "delay_construct.m"
            break;
#line 126 "delay_construct.m"
          case (MR_Integer) 7:
#line 168 "delay_construct.m"
            {
#line 170 "delay_construct.m"
              {
#line 170 "delay_construct.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.delay_construct", (MR_String) "predicate \140transform_hlds.delay_construct.delay_construct_in_goal\'/4", (MR_String) "shorthand");
#line 170 "delay_construct.m"
                return;
              }
#line 168 "delay_construct.m"
            }
#line 126 "delay_construct.m"
            break;
#line 126 "delay_construct.m"
        }
#line 126 "delay_construct.m"
        break;
#line 126 "delay_construct.m"
    }
#line 89 "delay_construct.m"
  }
#line 86 "delay_construct.m"
}

#line 35 "delay_construct.m"
void MR_CALL 
transform_hlds__delay_construct__delay_construct_proc_4_p_0(
#line 35 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__ModuleInfo_5,
#line 35 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__HeadVar__2_2,
#line 35 "delay_construct.m"
  MR_Word transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_0_19,
#line 35 "delay_construct.m"
  MR_Word * transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_20)
#line 35 "delay_construct.m"
{
#line 59 "delay_construct.m"
  {
#line 59 "delay_construct.m"
    MR_bool transform_hlds__delay_construct__succeeded;
#line 59 "delay_construct.m"
    MR_Word transform_hlds__delay_construct__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 0)));
#line 59 "delay_construct.m"
    MR_Integer transform_hlds__delay_construct__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 1)));
#line 59 "delay_construct.m"
    MR_Word transform_hlds__delay_construct__Globals_10;
#line 59 "delay_construct.m"
    MR_Word transform_hlds__delay_construct__PredInfo_11;
#line 59 "delay_construct.m"
    MR_Word transform_hlds__delay_construct__BodyTypeinfoLiveness_12;
#line 59 "delay_construct.m"
    MR_Word transform_hlds__delay_construct__VarTypes_13;
#line 59 "delay_construct.m"
    MR_Word transform_hlds__delay_construct__RttiVarMaps_14;
#line 59 "delay_construct.m"
    MR_Word transform_hlds__delay_construct__InstMap0_15;
#line 59 "delay_construct.m"
    MR_Word transform_hlds__delay_construct__DelayInfo_16;
#line 59 "delay_construct.m"
    MR_Word transform_hlds__delay_construct__Goal0_17;
#line 59 "delay_construct.m"
    MR_Word transform_hlds__delay_construct__Goal_18;

#line 61 "delay_construct.m"
    {
#line 61 "delay_construct.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Delaying construction unifications in ", transform_hlds__delay_construct__PredId_6, transform_hlds__delay_construct__ProcId_7, transform_hlds__delay_construct__ModuleInfo_5);
    }
#line 64 "delay_construct.m"
    {
#line 64 "delay_construct.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__delay_construct__ModuleInfo_5, &transform_hlds__delay_construct__Globals_10);
    }
#line 65 "delay_construct.m"
    {
#line 65 "delay_construct.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__delay_construct__ModuleInfo_5, transform_hlds__delay_construct__PredId_6, &transform_hlds__delay_construct__PredInfo_11);
    }
#line 66 "delay_construct.m"
    {
#line 66 "delay_construct.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(transform_hlds__delay_construct__PredInfo_11, transform_hlds__delay_construct__Globals_10, &transform_hlds__delay_construct__BodyTypeinfoLiveness_12);
    }
#line 67 "delay_construct.m"
    {
#line 67 "delay_construct.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__delay_construct__VarTypes_13);
    }
#line 68 "delay_construct.m"
    {
#line 68 "delay_construct.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__delay_construct__RttiVarMaps_14);
    }
#line 69 "delay_construct.m"
    {
#line 69 "delay_construct.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_0_19, transform_hlds__delay_construct__ModuleInfo_5, &transform_hlds__delay_construct__InstMap0_15);
    }
#line 70 "delay_construct.m"
    {
#line 70 "delay_construct.m"
      transform_hlds__delay_construct__DelayInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 70 "delay_construct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_16, 0) = ((MR_Box) (transform_hlds__delay_construct__ModuleInfo_5));
#line 70 "delay_construct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_16, 1) = ((MR_Box) (transform_hlds__delay_construct__BodyTypeinfoLiveness_12));
#line 70 "delay_construct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_16, 2) = ((MR_Box) (transform_hlds__delay_construct__VarTypes_13));
#line 70 "delay_construct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_16, 3) = ((MR_Box) (transform_hlds__delay_construct__RttiVarMaps_14));
#line 70 "delay_construct.m"
    }
#line 72 "delay_construct.m"
    {
#line 72 "delay_construct.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__delay_construct__Goal0_17);
    }
#line 73 "delay_construct.m"
    {
#line 73 "delay_construct.m"
      transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__Goal0_17, transform_hlds__delay_construct__InstMap0_15, transform_hlds__delay_construct__DelayInfo_16, &transform_hlds__delay_construct__Goal_18);
    }
#line 74 "delay_construct.m"
    {
#line 74 "delay_construct.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__delay_construct__Goal_18, transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_0_19, transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_20);
#line 74 "delay_construct.m"
      return;
    }
#line 59 "delay_construct.m"
  }
#line 35 "delay_construct.m"
}

void mercury__transform_hlds__delay_construct__init(void)
{
}

void mercury__transform_hlds__delay_construct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__delay_construct__transform_hlds__delay_construct__type_ctor_info_delay_construct_info_0);
}

void mercury__transform_hlds__delay_construct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.delay_construct. */
