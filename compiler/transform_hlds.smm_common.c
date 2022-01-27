/*
** Automatically generated from `smm_common.m'
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


/* :- module transform_hlds.smm_common. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__smm_common__init
ENDINIT
*/

#include "transform_hlds.smm_common.mih"


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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
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




#line 142 "transform_hlds.smm_common.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__smm_common__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 145 "transform_hlds.smm_common.c"
static const MR_PseudoTypeInfo transform_hlds__smm_common__transform_hlds__smm_common__field_types_program_point_0_0[2];

#line 148 "transform_hlds.smm_common.c"
static const MR_ConstString transform_hlds__smm_common__transform_hlds__smm_common__field_names_program_point_0_0[2];

#line 151 "transform_hlds.smm_common.c"
static const MR_DuFunctorDesc transform_hlds__smm_common__transform_hlds__smm_common__du_functor_desc_program_point_0_0;

#line 154 "transform_hlds.smm_common.c"
static const MR_DuFunctorDescPtr transform_hlds__smm_common__transform_hlds__smm_common__du_stag_ordered_program_point_0_0[1];

#line 157 "transform_hlds.smm_common.c"
static const MR_DuPtagLayout transform_hlds__smm_common__transform_hlds__smm_common__du_ptag_ordered_program_point_0[1];

#line 160 "transform_hlds.smm_common.c"
static const MR_DuFunctorDescPtr transform_hlds__smm_common__transform_hlds__smm_common__du_name_ordered_program_point_0[1];

#line 163 "transform_hlds.smm_common.c"
static const MR_Integer transform_hlds__smm_common__transform_hlds__smm_common__functor_number_map_program_point_0[1];

#line 166 "transform_hlds.smm_common.c"
static MR_bool MR_CALL 
transform_hlds__smm_common____Unify____program_point_0_0_10001(
#line 169 "transform_hlds.smm_common.c"
  MR_Box transform_hlds__smm_common__wrapper_arg_1,
#line 171 "transform_hlds.smm_common.c"
  MR_Box transform_hlds__smm_common__wrapper_arg_2);

#line 174 "transform_hlds.smm_common.c"
static void MR_CALL 
transform_hlds__smm_common____Compare____program_point_0_0_10001(
#line 177 "transform_hlds.smm_common.c"
  MR_Box * transform_hlds__smm_common__wrapper_arg_1,
#line 179 "transform_hlds.smm_common.c"
  MR_Box transform_hlds__smm_common__wrapper_arg_2,
#line 181 "transform_hlds.smm_common.c"
  MR_Box transform_hlds__smm_common__wrapper_arg_3);

#line 134 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__134__1_2_p_0(
#line 134 "smm_common.m"
  MR_Word transform_hlds__smm_common__SpecialPredIds_5,
#line 134 "smm_common.m"
  MR_Word transform_hlds__smm_common__LambdaHeadVar__1_13);

#line 142 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__proc_not_defined_in_module_2_p_0(
#line 142 "smm_common.m"
  MR_Word transform_hlds__smm_common__ModuleInfo_3,
#line 142 "smm_common.m"
  MR_Word transform_hlds__smm_common__HeadVar__2_2);

#line 124 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_5(
#line 124 "smm_common.m"
  MR_Box transform_hlds__smm_common__closure_arg,
#line 124 "smm_common.m"
  MR_Box transform_hlds__smm_common__wrapper_arg_1);

#line 134 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_4(
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__closure_arg,
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__wrapper_arg_1);

#line 134 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_3(
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__closure_arg,
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__wrapper_arg_1);

#line 134 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_2(
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__closure_arg,
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__wrapper_arg_1);

#line 134 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_1(
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__closure_arg,
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__smm_common_scalar_common_1[2][5];




static /* final */ const MR_Box transform_hlds__smm_common_scalar_common_1[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__smm_common__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 274 "transform_hlds.smm_common.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__smm_common__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 282 "transform_hlds.smm_common.c"
static const MR_PseudoTypeInfo transform_hlds__smm_common__transform_hlds__smm_common__field_types_program_point_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 288 "transform_hlds.smm_common.c"
static const MR_ConstString transform_hlds__smm_common__transform_hlds__smm_common__field_names_program_point_0_0[2] = {
  (MR_String) "pp_context",
  (MR_String) "pp_id"
};

#line 294 "transform_hlds.smm_common.c"
static const MR_DuFunctorDesc transform_hlds__smm_common__transform_hlds__smm_common__du_functor_desc_program_point_0_0 = {
  (MR_String) "pp",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__smm_common__transform_hlds__smm_common__field_types_program_point_0_0,
  transform_hlds__smm_common__transform_hlds__smm_common__field_names_program_point_0_0,
  NULL,
  NULL
};

#line 309 "transform_hlds.smm_common.c"
static const MR_DuFunctorDescPtr transform_hlds__smm_common__transform_hlds__smm_common__du_stag_ordered_program_point_0_0[1] = {
  &transform_hlds__smm_common__transform_hlds__smm_common__du_functor_desc_program_point_0_0
};

#line 314 "transform_hlds.smm_common.c"
static const MR_DuPtagLayout transform_hlds__smm_common__transform_hlds__smm_common__du_ptag_ordered_program_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__smm_common__transform_hlds__smm_common__du_stag_ordered_program_point_0_0
  }
};

#line 323 "transform_hlds.smm_common.c"
static const MR_DuFunctorDescPtr transform_hlds__smm_common__transform_hlds__smm_common__du_name_ordered_program_point_0[1] = {
  &transform_hlds__smm_common__transform_hlds__smm_common__du_functor_desc_program_point_0_0
};

#line 328 "transform_hlds.smm_common.c"
static const MR_Integer transform_hlds__smm_common__transform_hlds__smm_common__functor_number_map_program_point_0[1] = {
  (MR_Integer) 0
};

#line 333 "transform_hlds.smm_common.c"
const MR_TypeCtorInfo_Struct transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__smm_common____Unify____program_point_0_0_10001)),
  ((MR_Box) (transform_hlds__smm_common____Compare____program_point_0_0_10001)),
  (MR_String) "transform_hlds.smm_common",
  (MR_String) "program_point",
  {     transform_hlds__smm_common__transform_hlds__smm_common__du_name_ordered_program_point_0 },
  {     transform_hlds__smm_common__transform_hlds__smm_common__du_ptag_ordered_program_point_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__smm_common__transform_hlds__smm_common__functor_number_map_program_point_0
};

#line 350 "transform_hlds.smm_common.c"
static MR_bool MR_CALL 
transform_hlds__smm_common____Unify____program_point_0_0_10001(
#line 353 "transform_hlds.smm_common.c"
  MR_Box transform_hlds__smm_common__wrapper_arg_1,
#line 355 "transform_hlds.smm_common.c"
  MR_Box transform_hlds__smm_common__wrapper_arg_2)
#line 357 "transform_hlds.smm_common.c"
{
#line 359 "transform_hlds.smm_common.c"
  {
#line 361 "transform_hlds.smm_common.c"
    MR_bool transform_hlds__smm_common__succeeded;

#line 364 "transform_hlds.smm_common.c"
    {
#line 366 "transform_hlds.smm_common.c"
      transform_hlds__smm_common__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(((MR_Word) transform_hlds__smm_common__wrapper_arg_1), ((MR_Word) transform_hlds__smm_common__wrapper_arg_2));
    }
#line 369 "transform_hlds.smm_common.c"
    return transform_hlds__smm_common__succeeded;
#line 371 "transform_hlds.smm_common.c"
  }
#line 373 "transform_hlds.smm_common.c"
}

#line 376 "transform_hlds.smm_common.c"
static void MR_CALL 
transform_hlds__smm_common____Compare____program_point_0_0_10001(
#line 379 "transform_hlds.smm_common.c"
  MR_Box * transform_hlds__smm_common__wrapper_arg_1,
#line 381 "transform_hlds.smm_common.c"
  MR_Box transform_hlds__smm_common__wrapper_arg_2,
#line 383 "transform_hlds.smm_common.c"
  MR_Box transform_hlds__smm_common__wrapper_arg_3)
#line 385 "transform_hlds.smm_common.c"
{
#line 387 "transform_hlds.smm_common.c"
  {
#line 389 "transform_hlds.smm_common.c"
    MR_Word transform_hlds__smm_common__conv0_HeadVar__1_1;

#line 392 "transform_hlds.smm_common.c"
    {
#line 394 "transform_hlds.smm_common.c"
      transform_hlds__smm_common____Compare____program_point_0_0(&transform_hlds__smm_common__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__smm_common__wrapper_arg_2), ((MR_Word) transform_hlds__smm_common__wrapper_arg_3));
    }
#line 397 "transform_hlds.smm_common.c"
    *transform_hlds__smm_common__wrapper_arg_1 = ((MR_Box) (transform_hlds__smm_common__conv0_HeadVar__1_1));
#line 399 "transform_hlds.smm_common.c"
  }
#line 401 "transform_hlds.smm_common.c"
}

#line 134 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__134__1_2_p_0(
#line 134 "smm_common.m"
  MR_Word transform_hlds__smm_common__SpecialPredIds_5,
#line 134 "smm_common.m"
  MR_Word transform_hlds__smm_common__LambdaHeadVar__1_13)
#line 134 "smm_common.m"
{
#line 134 "smm_common.m"
  {
#line 134 "smm_common.m"
    MR_bool transform_hlds__smm_common__succeeded;
#line 134 "smm_common.m"
    MR_Word transform_hlds__smm_common__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__LambdaHeadVar__1_13, (MR_Integer) 0)));
#line 136 "smm_common.m"
    MR_Integer transform_hlds__smm_common__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__LambdaHeadVar__1_13, (MR_Integer) 1)));

#line 137 "smm_common.m"
    {
#line 137 "smm_common.m"
      transform_hlds__smm_common__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__smm_common__PredId_7)), transform_hlds__smm_common__SpecialPredIds_5);
    }
#line 134 "smm_common.m"
    return transform_hlds__smm_common__succeeded;
#line 134 "smm_common.m"
  }
#line 134 "smm_common.m"
}

#line 56 "smm_common.m"
void MR_CALL 
transform_hlds__smm_common____Compare____program_point_0_0(
#line 56 "smm_common.m"
  MR_Word * transform_hlds__smm_common__HeadVar__1_1,
#line 56 "smm_common.m"
  MR_Word transform_hlds__smm_common__HeadVar__2_2,
#line 56 "smm_common.m"
  MR_Word transform_hlds__smm_common__HeadVar__3_3)
#line 56 "smm_common.m"
{
#line 56 "smm_common.m"
  {
#line 56 "smm_common.m"
    MR_bool transform_hlds__smm_common__succeeded;
#line 56 "smm_common.m"
    MR_Integer transform_hlds__smm_common__CastX_9 = (MR_Integer) transform_hlds__smm_common__HeadVar__2_2;
#line 56 "smm_common.m"
    MR_Integer transform_hlds__smm_common__CastY_10 = (MR_Integer) transform_hlds__smm_common__HeadVar__3_3;

#line 56 "smm_common.m"
    transform_hlds__smm_common__succeeded = (transform_hlds__smm_common__CastX_9 == transform_hlds__smm_common__CastY_10);
#line 56 "smm_common.m"
    if (transform_hlds__smm_common__succeeded)
#line 458 "transform_hlds.smm_common.c"
      *transform_hlds__smm_common__HeadVar__1_1 = (MR_Integer) 0;
#line 56 "smm_common.m"
    else
#line 56 "smm_common.m"
      {
#line 56 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__2_2, (MR_Integer) 0)));
#line 56 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__3_3, (MR_Integer) 0)));
#line 56 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__3_3, (MR_Integer) 1)));
#line 56 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_8_8;

#line 56 "smm_common.m"
        {
#line 56 "smm_common.m"
          mercury__term____Compare____context_0_0(&transform_hlds__smm_common__V_8_8, transform_hlds__smm_common__V_4_4, transform_hlds__smm_common__V_6_6);
        }
#line 480 "transform_hlds.smm_common.c"
        transform_hlds__smm_common__succeeded = (transform_hlds__smm_common__V_8_8 == (MR_Integer) 0);
#line 56 "smm_common.m"
        transform_hlds__smm_common__succeeded = !(transform_hlds__smm_common__succeeded);
#line 56 "smm_common.m"
        if (transform_hlds__smm_common__succeeded)
#line 56 "smm_common.m"
          *transform_hlds__smm_common__HeadVar__1_1 = transform_hlds__smm_common__V_8_8;
#line 56 "smm_common.m"
        else
#line 56 "smm_common.m"
          {
#line 56 "smm_common.m"
            mdbcomp__goal_path____Compare____reverse_goal_path_0_0(transform_hlds__smm_common__HeadVar__1_1, transform_hlds__smm_common__V_5_5, transform_hlds__smm_common__V_7_7);
          }
#line 56 "smm_common.m"
      }
#line 56 "smm_common.m"
  }
#line 56 "smm_common.m"
}

#line 56 "smm_common.m"
MR_bool MR_CALL 
transform_hlds__smm_common____Unify____program_point_0_0(
#line 56 "smm_common.m"
  MR_Word transform_hlds__smm_common__HeadVar__1_1,
#line 56 "smm_common.m"
  MR_Word transform_hlds__smm_common__HeadVar__2_2)
#line 56 "smm_common.m"
{
#line 56 "smm_common.m"
  {
#line 56 "smm_common.m"
    MR_bool transform_hlds__smm_common__succeeded;
#line 56 "smm_common.m"
    MR_Integer transform_hlds__smm_common__CastX_7 = (MR_Integer) transform_hlds__smm_common__HeadVar__1_1;
#line 56 "smm_common.m"
    MR_Integer transform_hlds__smm_common__CastY_8 = (MR_Integer) transform_hlds__smm_common__HeadVar__2_2;

#line 56 "smm_common.m"
    transform_hlds__smm_common__succeeded = (transform_hlds__smm_common__CastX_7 == transform_hlds__smm_common__CastY_8);
#line 56 "smm_common.m"
    if (transform_hlds__smm_common__succeeded)
#line 56 "smm_common.m"
      transform_hlds__smm_common__succeeded = MR_TRUE;
#line 56 "smm_common.m"
    else
#line 56 "smm_common.m"
      {
#line 56 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__1_1, (MR_Integer) 0)));
#line 56 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__2_2, (MR_Integer) 0)));
#line 56 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__2_2, (MR_Integer) 1)));

#line 539 "transform_hlds.smm_common.c"
        {
#line 541 "transform_hlds.smm_common.c"
          transform_hlds__smm_common__succeeded = mercury__term____Unify____context_0_0(transform_hlds__smm_common__V_3_3, transform_hlds__smm_common__V_5_5);
        }
#line 56 "smm_common.m"
        if (transform_hlds__smm_common__succeeded)
#line 546 "transform_hlds.smm_common.c"
          {
#line 548 "transform_hlds.smm_common.c"
            transform_hlds__smm_common__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(transform_hlds__smm_common__V_4_4, transform_hlds__smm_common__V_6_6);
          }
#line 56 "smm_common.m"
      }
#line 56 "smm_common.m"
    return transform_hlds__smm_common__succeeded;
#line 56 "smm_common.m"
  }
#line 56 "smm_common.m"
}

#line 142 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__proc_not_defined_in_module_2_p_0(
#line 142 "smm_common.m"
  MR_Word transform_hlds__smm_common__ModuleInfo_3,
#line 142 "smm_common.m"
  MR_Word transform_hlds__smm_common__HeadVar__2_2)
#line 142 "smm_common.m"
{
#line 145 "smm_common.m"
  {
#line 145 "smm_common.m"
    MR_bool transform_hlds__smm_common__succeeded;
#line 145 "smm_common.m"
    MR_Word transform_hlds__smm_common__PredId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__2_2, (MR_Integer) 0)));
#line 145 "smm_common.m"
    MR_Word transform_hlds__smm_common__PredInfo_6;
#line 145 "smm_common.m"
    MR_Word transform_hlds__smm_common__PredStatus_7;
#line 145 "smm_common.m"
    MR_Word transform_hlds__smm_common__V_8_8;
#line 145 "smm_common.m"
    MR_Integer transform_hlds__smm_common__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__2_2, (MR_Integer) 1)));

#line 146 "smm_common.m"
    {
#line 146 "smm_common.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__smm_common__ModuleInfo_3, transform_hlds__smm_common__PredId_4, &transform_hlds__smm_common__PredInfo_6);
    }
#line 147 "smm_common.m"
    {
#line 147 "smm_common.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__smm_common__PredInfo_6, &transform_hlds__smm_common__PredStatus_7);
    }
#line 148 "smm_common.m"
    {
#line 148 "smm_common.m"
      transform_hlds__smm_common__V_8_8 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__smm_common__PredStatus_7);
    }
#line 148 "smm_common.m"
    transform_hlds__smm_common__succeeded = (transform_hlds__smm_common__V_8_8 == (MR_Integer) 0);
#line 145 "smm_common.m"
    return transform_hlds__smm_common__succeeded;
#line 145 "smm_common.m"
  }
#line 142 "smm_common.m"
}

#line 68 "smm_common.m"
void MR_CALL 
transform_hlds__smm_common__dump_program_point_3_p_0(
#line 68 "smm_common.m"
  MR_Word transform_hlds__smm_common__HeadVar__1_1)
#line 68 "smm_common.m"
{
#line 158 "smm_common.m"
  {
#line 158 "smm_common.m"
    MR_bool transform_hlds__smm_common__succeeded;
#line 158 "smm_common.m"
    MR_Word transform_hlds__smm_common__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__1_1, (MR_Integer) 0)));
#line 158 "smm_common.m"
    MR_Word transform_hlds__smm_common__RevGoalPath_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__HeadVar__1_1, (MR_Integer) 1)));
#line 158 "smm_common.m"
    MR_String transform_hlds__smm_common__V_12_12;

#line 159 "smm_common.m"
    {
#line 159 "smm_common.m"
      parse_tree__prog_out__write_context_3_p_0(transform_hlds__smm_common__Context_4);
    }
#line 160 "smm_common.m"
    {
#line 160 "smm_common.m"
      mercury__io__write_string_3_p_0((MR_String) "--");
    }
#line 161 "smm_common.m"
    {
#line 161 "smm_common.m"
      transform_hlds__smm_common__V_12_12 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(transform_hlds__smm_common__RevGoalPath_5);
    }
#line 161 "smm_common.m"
    {
#line 161 "smm_common.m"
      mercury__io__write_string_3_p_0(transform_hlds__smm_common__V_12_12);
    }
#line 158 "smm_common.m"
  }
#line 68 "smm_common.m"
}

#line 64 "smm_common.m"
MR_Word MR_CALL 
transform_hlds__smm_common__program_point_init_1_f_0(
#line 64 "smm_common.m"
  MR_Word transform_hlds__smm_common__GoalInfo_3)
#line 64 "smm_common.m"
{
#line 153 "smm_common.m"
  {
#line 153 "smm_common.m"
    MR_bool transform_hlds__smm_common__succeeded;
#line 153 "smm_common.m"
    MR_Word transform_hlds__smm_common__ProgPoint_4;
#line 153 "smm_common.m"
    MR_Word transform_hlds__smm_common__Context_5;
#line 153 "smm_common.m"
    MR_Word transform_hlds__smm_common__RevGoalPath_6;

#line 154 "smm_common.m"
    {
#line 154 "smm_common.m"
      transform_hlds__smm_common__Context_5 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__smm_common__GoalInfo_3);
    }
#line 155 "smm_common.m"
    {
#line 155 "smm_common.m"
      transform_hlds__smm_common__RevGoalPath_6 = hlds__hlds_goal__goal_info_get_reverse_goal_path_1_f_0(transform_hlds__smm_common__GoalInfo_3);
    }
#line 156 "smm_common.m"
    {
#line 156 "smm_common.m"
      transform_hlds__smm_common__ProgPoint_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 156 "smm_common.m"
      MR_hl_field(MR_mktag(0), transform_hlds__smm_common__ProgPoint_4, 0) = ((MR_Box) (transform_hlds__smm_common__Context_5));
#line 156 "smm_common.m"
      MR_hl_field(MR_mktag(0), transform_hlds__smm_common__ProgPoint_4, 1) = ((MR_Box) (transform_hlds__smm_common__RevGoalPath_6));
#line 156 "smm_common.m"
    }
#line 153 "smm_common.m"
    return transform_hlds__smm_common__ProgPoint_4;
#line 153 "smm_common.m"
  }
#line 64 "smm_common.m"
}

#line 124 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_5(
#line 124 "smm_common.m"
  MR_Box transform_hlds__smm_common__closure_arg,
#line 124 "smm_common.m"
  MR_Box transform_hlds__smm_common__wrapper_arg_1)
#line 124 "smm_common.m"
{
#line 124 "smm_common.m"
  {
#line 124 "smm_common.m"
    MR_bool transform_hlds__smm_common__succeeded;
#line 124 "smm_common.m"
    MR_Box transform_hlds__smm_common__closure = transform_hlds__smm_common__closure_arg;

#line 124 "smm_common.m"
    {
#line 124 "smm_common.m"
      transform_hlds__smm_common__succeeded = transform_hlds__smm_common__proc_not_defined_in_module_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__smm_common__wrapper_arg_1));
    }
#line 124 "smm_common.m"
    return transform_hlds__smm_common__succeeded;
#line 124 "smm_common.m"
  }
#line 124 "smm_common.m"
}

#line 134 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_4(
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__closure_arg,
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__wrapper_arg_1)
#line 134 "smm_common.m"
{
#line 134 "smm_common.m"
  {
#line 134 "smm_common.m"
    MR_bool transform_hlds__smm_common__succeeded;
#line 134 "smm_common.m"
    MR_Box transform_hlds__smm_common__closure = transform_hlds__smm_common__closure_arg;

#line 134 "smm_common.m"
    {
#line 134 "smm_common.m"
      transform_hlds__smm_common__succeeded = transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__134__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__smm_common__wrapper_arg_1));
    }
#line 134 "smm_common.m"
    return transform_hlds__smm_common__succeeded;
#line 134 "smm_common.m"
  }
#line 134 "smm_common.m"
}

#line 134 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_3(
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__closure_arg,
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__wrapper_arg_1)
#line 134 "smm_common.m"
{
#line 134 "smm_common.m"
  {
#line 134 "smm_common.m"
    MR_bool transform_hlds__smm_common__succeeded;
#line 134 "smm_common.m"
    MR_Box transform_hlds__smm_common__closure = transform_hlds__smm_common__closure_arg;

#line 134 "smm_common.m"
    {
#line 134 "smm_common.m"
      transform_hlds__smm_common__succeeded = transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__134__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__smm_common__wrapper_arg_1));
    }
#line 134 "smm_common.m"
    return transform_hlds__smm_common__succeeded;
#line 134 "smm_common.m"
  }
#line 134 "smm_common.m"
}

#line 134 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_2(
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__closure_arg,
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__wrapper_arg_1)
#line 134 "smm_common.m"
{
#line 134 "smm_common.m"
  {
#line 134 "smm_common.m"
    MR_bool transform_hlds__smm_common__succeeded;
#line 134 "smm_common.m"
    MR_Box transform_hlds__smm_common__closure = transform_hlds__smm_common__closure_arg;

#line 134 "smm_common.m"
    {
#line 134 "smm_common.m"
      transform_hlds__smm_common__succeeded = transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__134__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__smm_common__wrapper_arg_1));
    }
#line 134 "smm_common.m"
    return transform_hlds__smm_common__succeeded;
#line 134 "smm_common.m"
  }
#line 134 "smm_common.m"
}

#line 134 "smm_common.m"
static MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0_1(
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__closure_arg,
#line 134 "smm_common.m"
  MR_Box transform_hlds__smm_common__wrapper_arg_1)
#line 134 "smm_common.m"
{
#line 134 "smm_common.m"
  {
#line 134 "smm_common.m"
    MR_bool transform_hlds__smm_common__succeeded;
#line 134 "smm_common.m"
    MR_Box transform_hlds__smm_common__closure = transform_hlds__smm_common__closure_arg;

#line 134 "smm_common.m"
    {
#line 134 "smm_common.m"
      transform_hlds__smm_common__succeeded = transform_hlds__smm_common__IntroducedFrom__pred__some_special_preds_are_in_list__134__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__smm_common__wrapper_arg_1));
    }
#line 134 "smm_common.m"
    return transform_hlds__smm_common__succeeded;
#line 134 "smm_common.m"
  }
#line 134 "smm_common.m"
}

#line 45 "smm_common.m"
MR_bool MR_CALL 
transform_hlds__smm_common__some_are_special_preds_2_p_0(
#line 45 "smm_common.m"
  MR_Word transform_hlds__smm_common__PPIds_3,
#line 45 "smm_common.m"
  MR_Word transform_hlds__smm_common__ModuleInfo_4)
#line 45 "smm_common.m"
{
#line 115 "smm_common.m"
  {
#line 115 "smm_common.m"
    MR_bool transform_hlds__smm_common__succeeded;

#line 115 "smm_common.m"
    {
#line 115 "smm_common.m"
      MR_Word transform_hlds__smm_common__SpecialPredMaps_5;
#line 115 "smm_common.m"
      MR_Word transform_hlds__smm_common__UnifyMap_6;
#line 115 "smm_common.m"
      MR_Word transform_hlds__smm_common__IndexMap_7;
#line 115 "smm_common.m"
      MR_Word transform_hlds__smm_common__CompareMap_8;
#line 115 "smm_common.m"
      MR_Word transform_hlds__smm_common__InitMap_9;

#line 115 "smm_common.m"
      {
#line 115 "smm_common.m"
        hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(transform_hlds__smm_common__ModuleInfo_4, &transform_hlds__smm_common__SpecialPredMaps_5);
      }
#line 116 "smm_common.m"
      transform_hlds__smm_common__UnifyMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__SpecialPredMaps_5, (MR_Integer) 0)));
#line 116 "smm_common.m"
      transform_hlds__smm_common__IndexMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__SpecialPredMaps_5, (MR_Integer) 1)));
#line 116 "smm_common.m"
      transform_hlds__smm_common__CompareMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__SpecialPredMaps_5, (MR_Integer) 2)));
#line 116 "smm_common.m"
      transform_hlds__smm_common__InitMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__SpecialPredMaps_5, (MR_Integer) 3)));
#line 132 "smm_common.m"
      {
#line 132 "smm_common.m"
        MR_Word transform_hlds__smm_common__SpecialPredIds_18;
#line 132 "smm_common.m"
        MR_Word transform_hlds__smm_common__SpecialPPIds_22;
#line 132 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_25_25;
#line 140 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_23_23;
#line 140 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_24_24;

#line 133 "smm_common.m"
        {
#line 133 "smm_common.m"
          mercury__map__values_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__smm_common__UnifyMap_6, &transform_hlds__smm_common__SpecialPredIds_18);
        }
#line 134 "smm_common.m"
        {
#line 134 "smm_common.m"
          transform_hlds__smm_common__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 134 "smm_common.m"
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_25_25, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[0]));
#line 134 "smm_common.m"
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_25_25, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_1));
#line 134 "smm_common.m"
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 134 "smm_common.m"
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_25_25, 3) = ((MR_Box) (transform_hlds__smm_common__SpecialPredIds_18));
#line 134 "smm_common.m"
        }
#line 134 "smm_common.m"
        {
#line 134 "smm_common.m"
          mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__smm_common__V_25_25, transform_hlds__smm_common__PPIds_3, &transform_hlds__smm_common__SpecialPPIds_22);
        }
#line 140 "smm_common.m"
        transform_hlds__smm_common__succeeded = ((MR_tag((MR_Word) transform_hlds__smm_common__SpecialPPIds_22)) == (MR_mktag((MR_Integer) 1)));
#line 140 "smm_common.m"
        if (transform_hlds__smm_common__succeeded)
#line 140 "smm_common.m"
          {
#line 140 "smm_common.m"
            transform_hlds__smm_common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_22, (MR_Integer) 0)));
#line 140 "smm_common.m"
            transform_hlds__smm_common__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_22, (MR_Integer) 1)));
#line 140 "smm_common.m"
          }
#line 132 "smm_common.m"
      }
#line 119 "smm_common.m"
      if (!(transform_hlds__smm_common__succeeded))
#line 119 "smm_common.m"
        {
#line 132 "smm_common.m"
          {
#line 132 "smm_common.m"
            MR_Word transform_hlds__smm_common__SpecialPredIds_34;
#line 132 "smm_common.m"
            MR_Word transform_hlds__smm_common__SpecialPPIds_38;
#line 132 "smm_common.m"
            MR_Word transform_hlds__smm_common__V_41_41;
#line 140 "smm_common.m"
            MR_Word transform_hlds__smm_common__V_39_39;
#line 140 "smm_common.m"
            MR_Word transform_hlds__smm_common__V_40_40;

#line 133 "smm_common.m"
            {
#line 133 "smm_common.m"
              mercury__map__values_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__smm_common__IndexMap_7, &transform_hlds__smm_common__SpecialPredIds_34);
            }
#line 134 "smm_common.m"
            {
#line 134 "smm_common.m"
              transform_hlds__smm_common__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 134 "smm_common.m"
              MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_41_41, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[0]));
#line 134 "smm_common.m"
              MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_41_41, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_2));
#line 134 "smm_common.m"
              MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 134 "smm_common.m"
              MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_41_41, 3) = ((MR_Box) (transform_hlds__smm_common__SpecialPredIds_34));
#line 134 "smm_common.m"
            }
#line 134 "smm_common.m"
            {
#line 134 "smm_common.m"
              mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__smm_common__V_41_41, transform_hlds__smm_common__PPIds_3, &transform_hlds__smm_common__SpecialPPIds_38);
            }
#line 140 "smm_common.m"
            transform_hlds__smm_common__succeeded = ((MR_tag((MR_Word) transform_hlds__smm_common__SpecialPPIds_38)) == (MR_mktag((MR_Integer) 1)));
#line 140 "smm_common.m"
            if (transform_hlds__smm_common__succeeded)
#line 140 "smm_common.m"
              {
#line 140 "smm_common.m"
                transform_hlds__smm_common__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_38, (MR_Integer) 0)));
#line 140 "smm_common.m"
                transform_hlds__smm_common__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_38, (MR_Integer) 1)));
#line 140 "smm_common.m"
              }
#line 132 "smm_common.m"
          }
#line 119 "smm_common.m"
          if (!(transform_hlds__smm_common__succeeded))
#line 119 "smm_common.m"
            {
#line 132 "smm_common.m"
              {
#line 132 "smm_common.m"
                MR_Word transform_hlds__smm_common__SpecialPredIds_50;
#line 132 "smm_common.m"
                MR_Word transform_hlds__smm_common__SpecialPPIds_54;
#line 132 "smm_common.m"
                MR_Word transform_hlds__smm_common__V_57_57;
#line 140 "smm_common.m"
                MR_Word transform_hlds__smm_common__V_55_55;
#line 140 "smm_common.m"
                MR_Word transform_hlds__smm_common__V_56_56;

#line 133 "smm_common.m"
                {
#line 133 "smm_common.m"
                  mercury__map__values_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__smm_common__CompareMap_8, &transform_hlds__smm_common__SpecialPredIds_50);
                }
#line 134 "smm_common.m"
                {
#line 134 "smm_common.m"
                  transform_hlds__smm_common__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 134 "smm_common.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_57_57, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[0]));
#line 134 "smm_common.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_57_57, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_3));
#line 134 "smm_common.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 134 "smm_common.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_57_57, 3) = ((MR_Box) (transform_hlds__smm_common__SpecialPredIds_50));
#line 134 "smm_common.m"
                }
#line 134 "smm_common.m"
                {
#line 134 "smm_common.m"
                  mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__smm_common__V_57_57, transform_hlds__smm_common__PPIds_3, &transform_hlds__smm_common__SpecialPPIds_54);
                }
#line 140 "smm_common.m"
                transform_hlds__smm_common__succeeded = ((MR_tag((MR_Word) transform_hlds__smm_common__SpecialPPIds_54)) == (MR_mktag((MR_Integer) 1)));
#line 140 "smm_common.m"
                if (transform_hlds__smm_common__succeeded)
#line 140 "smm_common.m"
                  {
#line 140 "smm_common.m"
                    transform_hlds__smm_common__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_54, (MR_Integer) 0)));
#line 140 "smm_common.m"
                    transform_hlds__smm_common__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_54, (MR_Integer) 1)));
#line 140 "smm_common.m"
                  }
#line 132 "smm_common.m"
              }
#line 119 "smm_common.m"
              if (!(transform_hlds__smm_common__succeeded))
#line 132 "smm_common.m"
                {
#line 132 "smm_common.m"
                  MR_Word transform_hlds__smm_common__SpecialPredIds_66;
#line 132 "smm_common.m"
                  MR_Word transform_hlds__smm_common__SpecialPPIds_70;
#line 132 "smm_common.m"
                  MR_Word transform_hlds__smm_common__V_73_73;
#line 140 "smm_common.m"
                  MR_Word transform_hlds__smm_common__V_71_71;
#line 140 "smm_common.m"
                  MR_Word transform_hlds__smm_common__V_72_72;

#line 133 "smm_common.m"
                  {
#line 133 "smm_common.m"
                    mercury__map__values_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__smm_common__InitMap_9, &transform_hlds__smm_common__SpecialPredIds_66);
                  }
#line 134 "smm_common.m"
                  {
#line 134 "smm_common.m"
                    transform_hlds__smm_common__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 134 "smm_common.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_73_73, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[0]));
#line 134 "smm_common.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_73_73, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_4));
#line 134 "smm_common.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 134 "smm_common.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_73_73, 3) = ((MR_Box) (transform_hlds__smm_common__SpecialPredIds_66));
#line 134 "smm_common.m"
                  }
#line 134 "smm_common.m"
                  {
#line 134 "smm_common.m"
                    mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__smm_common__V_73_73, transform_hlds__smm_common__PPIds_3, &transform_hlds__smm_common__SpecialPPIds_70);
                  }
#line 140 "smm_common.m"
                  transform_hlds__smm_common__succeeded = ((MR_tag((MR_Word) transform_hlds__smm_common__SpecialPPIds_70)) == (MR_mktag((MR_Integer) 1)));
#line 140 "smm_common.m"
                  if (transform_hlds__smm_common__succeeded)
#line 140 "smm_common.m"
                    {
#line 140 "smm_common.m"
                      transform_hlds__smm_common__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_70, (MR_Integer) 0)));
#line 140 "smm_common.m"
                      transform_hlds__smm_common__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__SpecialPPIds_70, (MR_Integer) 1)));
#line 140 "smm_common.m"
                    }
#line 132 "smm_common.m"
                }
#line 119 "smm_common.m"
            }
#line 119 "smm_common.m"
        }
#line 115 "smm_common.m"
    }
#line 115 "smm_common.m"
    if (!(transform_hlds__smm_common__succeeded))
#line 125 "smm_common.m"
      {
#line 125 "smm_common.m"
        MR_Word transform_hlds__smm_common__FilteredPPIds_10;
#line 125 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_13_13;
#line 126 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_11_11;
#line 126 "smm_common.m"
        MR_Word transform_hlds__smm_common__V_12_12;

#line 124 "smm_common.m"
        {
#line 124 "smm_common.m"
          transform_hlds__smm_common__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 124 "smm_common.m"
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_13_13, 0) = ((MR_Box) (&transform_hlds__smm_common_scalar_common_1[1]));
#line 124 "smm_common.m"
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_13_13, 1) = ((MR_Box) (transform_hlds__smm_common__some_are_special_preds_2_p_0_5));
#line 124 "smm_common.m"
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 124 "smm_common.m"
          MR_hl_field(MR_mktag(0), transform_hlds__smm_common__V_13_13, 3) = ((MR_Box) (transform_hlds__smm_common__ModuleInfo_4));
#line 124 "smm_common.m"
        }
#line 124 "smm_common.m"
        {
#line 124 "smm_common.m"
          mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__smm_common__V_13_13, transform_hlds__smm_common__PPIds_3, &transform_hlds__smm_common__FilteredPPIds_10);
        }
#line 126 "smm_common.m"
        transform_hlds__smm_common__succeeded = ((MR_tag((MR_Word) transform_hlds__smm_common__FilteredPPIds_10)) == (MR_mktag((MR_Integer) 1)));
#line 126 "smm_common.m"
        if (transform_hlds__smm_common__succeeded)
#line 126 "smm_common.m"
          {
#line 126 "smm_common.m"
            transform_hlds__smm_common__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__FilteredPPIds_10, (MR_Integer) 0)));
#line 126 "smm_common.m"
            transform_hlds__smm_common__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__FilteredPPIds_10, (MR_Integer) 1)));
#line 126 "smm_common.m"
          }
#line 125 "smm_common.m"
      }
#line 115 "smm_common.m"
    return transform_hlds__smm_common__succeeded;
#line 115 "smm_common.m"
  }
#line 45 "smm_common.m"
}

#line 37 "smm_common.m"
MR_bool MR_CALL 
transform_hlds__smm_common__check_type_of_node_3_p_0(
#line 37 "smm_common.m"
  MR_Word transform_hlds__smm_common__ModuleInfo_4,
#line 37 "smm_common.m"
  MR_Word transform_hlds__smm_common__StartType_5,
#line 37 "smm_common.m"
  MR_Word transform_hlds__smm_common__Selector_6)
#line 37 "smm_common.m"
{
#line 90 "smm_common.m"
  while (MR_TRUE)
#line 90 "smm_common.m"
    {
#line 90 "smm_common.m"
      /* tailcall optimized into a loop */
#line 90 "smm_common.m"
      {
#line 90 "smm_common.m"
        MR_bool transform_hlds__smm_common__succeeded;

#line 90 "smm_common.m"
        if ((transform_hlds__smm_common__Selector_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 99 "smm_common.m"
          transform_hlds__smm_common__succeeded = MR_TRUE;
#line 90 "smm_common.m"
        else
#line 90 "smm_common.m"
          {
#line 90 "smm_common.m"
            MR_Word transform_hlds__smm_common__Sel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__Selector_6, (MR_Integer) 0)));
#line 90 "smm_common.m"
            MR_Word transform_hlds__smm_common__Sels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__Selector_6, (MR_Integer) 1)));
#line 90 "smm_common.m"
            MR_Word transform_hlds__smm_common__SubType_11;

#line 94 "smm_common.m"
            if (((MR_tag((MR_Word) transform_hlds__smm_common__Sel_7)) == (MR_mktag((MR_Integer) 0))))
#line 92 "smm_common.m"
              {
#line 92 "smm_common.m"
                MR_Word transform_hlds__smm_common__TypeCtorInfo_12_18;
#line 92 "smm_common.m"
                MR_Word transform_hlds__smm_common__Cons_id_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__Sel_7, (MR_Integer) 0)));
#line 92 "smm_common.m"
                MR_Integer transform_hlds__smm_common__Choice_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__smm_common__Sel_7, (MR_Integer) 1)));
#line 92 "smm_common.m"
                MR_Word transform_hlds__smm_common__ArgTypes_17;
#line 111 "smm_common.m"
                MR_Box transform_hlds__smm_common__conv0_SubType_11;

#line 110 "smm_common.m"
                {
#line 110 "smm_common.m"
                  transform_hlds__smm_common__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__smm_common__ModuleInfo_4, transform_hlds__smm_common__StartType_5, transform_hlds__smm_common__Cons_id_9, &transform_hlds__smm_common__ArgTypes_17);
                }
#line 92 "smm_common.m"
                if (transform_hlds__smm_common__succeeded)
#line 92 "smm_common.m"
                  {
#line 1210 "transform_hlds.smm_common.c"
                    transform_hlds__smm_common__TypeCtorInfo_12_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 111 "smm_common.m"
                    {
#line 111 "smm_common.m"
                      transform_hlds__smm_common__succeeded = mercury__list__index1_3_p_0(transform_hlds__smm_common__TypeCtorInfo_12_18, transform_hlds__smm_common__ArgTypes_17, transform_hlds__smm_common__Choice_10, &transform_hlds__smm_common__conv0_SubType_11);
                    }
#line 111 "smm_common.m"
                    if (transform_hlds__smm_common__succeeded)
#line 111 "smm_common.m"
                      {
#line 111 "smm_common.m"
                        transform_hlds__smm_common__SubType_11 = ((MR_Word) transform_hlds__smm_common__conv0_SubType_11);
#line 111 "smm_common.m"
                        transform_hlds__smm_common__succeeded = MR_TRUE;
#line 111 "smm_common.m"
                      }
#line 92 "smm_common.m"
                  }
#line 92 "smm_common.m"
              }
#line 94 "smm_common.m"
            else
#line 95 "smm_common.m"
              {
#line 95 "smm_common.m"
                transform_hlds__smm_common__SubType_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__smm_common__Sel_7, (MR_Integer) 0)));
#line 95 "smm_common.m"
                transform_hlds__smm_common__succeeded = MR_TRUE;
#line 95 "smm_common.m"
              }
#line 90 "smm_common.m"
            if (transform_hlds__smm_common__succeeded)
#line 97 "smm_common.m"
              {
#line 97 "smm_common.m"
                /* direct tailcall eliminated */
#line 97 "smm_common.m"
                {
#line 97 "smm_common.m"
                  MR_Word transform_hlds__smm_common__StartType__tmp_copy_5 = transform_hlds__smm_common__SubType_11;
#line 97 "smm_common.m"
                  MR_Word transform_hlds__smm_common__Selector__tmp_copy_6 = transform_hlds__smm_common__Sels_8;

#line 97 "smm_common.m"
                  transform_hlds__smm_common__Selector_6 = transform_hlds__smm_common__Selector__tmp_copy_6;
#line 97 "smm_common.m"
                  transform_hlds__smm_common__StartType_5 = transform_hlds__smm_common__StartType__tmp_copy_5;
#line 97 "smm_common.m"
                }
#line 97 "smm_common.m"
                continue;
#line 97 "smm_common.m"
              }
#line 90 "smm_common.m"
          }
#line 90 "smm_common.m"
        return transform_hlds__smm_common__succeeded;
#line 90 "smm_common.m"
      }
#line 90 "smm_common.m"
      break;
#line 90 "smm_common.m"
    }
#line 37 "smm_common.m"
}

void mercury__transform_hlds__smm_common__init(void)
{
}

void mercury__transform_hlds__smm_common__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0);
}

void mercury__transform_hlds__smm_common__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.smm_common. */
