/*
** Automatically generated from `hlds_defns.m'
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


/* :- module hlds.hlds_defns. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_defns__init
ENDINIT
*/

#include "hlds.hlds_defns.mih"


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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
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




#line 142 "hlds.hlds_defns.c"
static const MR_PseudoTypeInfo hlds__hlds_defns__hlds__hlds_defns__field_types_name_arity_0_0[2];

#line 145 "hlds.hlds_defns.c"
static const MR_DuFunctorDesc hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_name_arity_0_0;

#line 148 "hlds.hlds_defns.c"
static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_stag_ordered_name_arity_0_0[1];

#line 151 "hlds.hlds_defns.c"
static const MR_DuPtagLayout hlds__hlds_defns__hlds__hlds_defns__du_ptag_ordered_name_arity_0[1];

#line 154 "hlds.hlds_defns.c"
static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_name_ordered_name_arity_0[1];

#line 157 "hlds.hlds_defns.c"
static const MR_Integer hlds__hlds_defns__hlds__hlds_defns__functor_number_map_name_arity_0[1];

#line 160 "hlds.hlds_defns.c"
static MR_bool MR_CALL 
hlds__hlds_defns____Unify____name_arity_0_0_10001(
#line 163 "hlds.hlds_defns.c"
  MR_Box hlds__hlds_defns__wrapper_arg_1,
#line 165 "hlds.hlds_defns.c"
  MR_Box hlds__hlds_defns__wrapper_arg_2);

#line 168 "hlds.hlds_defns.c"
static void MR_CALL 
hlds__hlds_defns____Compare____name_arity_0_0_10001(
#line 171 "hlds.hlds_defns.c"
  MR_Box * hlds__hlds_defns__wrapper_arg_1,
#line 173 "hlds.hlds_defns.c"
  MR_Box hlds__hlds_defns__wrapper_arg_2,
#line 175 "hlds.hlds_defns.c"
  MR_Box hlds__hlds_defns__wrapper_arg_3);

#line 52 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns____Compare____name_arity_0_0(
#line 52 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__HeadVar__1_1,
#line 52 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 52 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__3_3);

#line 52 "hlds_defns.m"
static MR_bool MR_CALL 
hlds__hlds_defns____Unify____name_arity_0_0(
#line 52 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__1_1,
#line 52 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2);

#line 293 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__output_prefixed_strings_5_p_0(
#line 293 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__1_1,
#line 293 "hlds_defns.m"
  MR_String hlds__hlds_defns__HeadVar__2_2,
#line 293 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__3_3);

#line 280 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__output_prefixed_name_arities_5_p_0(
#line 280 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__1_1,
#line 280 "hlds_defns.m"
  MR_String hlds__hlds_defns__HeadVar__2_2,
#line 280 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__3_3);

#line 270 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__instance_type_to_desc_2_p_0(
#line 270 "hlds_defns.m"
  MR_Word hlds__hlds_defns__Type_3,
#line 270 "hlds_defns.m"
  MR_String * hlds__hlds_defns__TypeDesc_4);

#line 258 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0_1(
#line 258 "hlds_defns.m"
  MR_Box hlds__hlds_defns__closure_arg,
#line 258 "hlds_defns.m"
  MR_Box hlds__hlds_defns__wrapper_arg_1,
#line 258 "hlds_defns.m"
  MR_Box * hlds__hlds_defns__wrapper_arg_2);

#line 246 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0(
#line 246 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleName_1,
#line 246 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ClassId_2,
#line 246 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__3_3,
#line 246 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_4,
#line 246 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_5);

#line 234 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_4_p_0(
#line 234 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleName_1,
#line 234 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 234 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_3,
#line 234 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_4);

#line 212 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_typeclass_names_4_p_0(
#line 212 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleName_1,
#line 212 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 212 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0_3,
#line 212 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_4);

#line 178 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_pred_names_6_p_0(
#line 178 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__1_1,
#line 178 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 178 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3,
#line 178 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_4,
#line 178 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5,
#line 178 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_PredNameArities_6);

#line 156 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_mode_names_4_p_0(
#line 156 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleName_1,
#line 156 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 156 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0_3,
#line 156 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_4);

#line 135 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_inst_names_4_p_0(
#line 135 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleName_1,
#line 135 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 135 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0_3,
#line 135 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_InstNameArities_4);

#line 111 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_type_names_4_p_0(
#line 111 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleName_1,
#line 111 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 111 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0_3,
#line 111 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_4);


static /* final */ const MR_Box hlds__hlds_defns_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_2[1][5];

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_3[1][3];

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_4[1][1];




static /* final */ const MR_Box hlds__hlds_defns_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
};

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__hlds_defns_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_defns_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 380 "hlds.hlds_defns.c"
static const MR_PseudoTypeInfo hlds__hlds_defns__hlds__hlds_defns__field_types_name_arity_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 386 "hlds.hlds_defns.c"
static const MR_DuFunctorDesc hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_name_arity_0_0 = {
  (MR_String) "name_arity",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_defns__hlds__hlds_defns__field_types_name_arity_0_0,
  NULL,
  NULL,
  NULL
};

#line 401 "hlds.hlds_defns.c"
static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_stag_ordered_name_arity_0_0[1] = {
  &hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_name_arity_0_0
};

#line 406 "hlds.hlds_defns.c"
static const MR_DuPtagLayout hlds__hlds_defns__hlds__hlds_defns__du_ptag_ordered_name_arity_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_defns__hlds__hlds_defns__du_stag_ordered_name_arity_0_0
  }
};

#line 415 "hlds.hlds_defns.c"
static const MR_DuFunctorDescPtr hlds__hlds_defns__hlds__hlds_defns__du_name_ordered_name_arity_0[1] = {
  &hlds__hlds_defns__hlds__hlds_defns__du_functor_desc_name_arity_0_0
};

#line 420 "hlds.hlds_defns.c"
static const MR_Integer hlds__hlds_defns__hlds__hlds_defns__functor_number_map_name_arity_0[1] = {
  (MR_Integer) 0
};

#line 425 "hlds.hlds_defns.c"
const MR_TypeCtorInfo_Struct hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_defns____Unify____name_arity_0_0_10001)),
  ((MR_Box) (hlds__hlds_defns____Compare____name_arity_0_0_10001)),
  (MR_String) "hlds.hlds_defns",
  (MR_String) "name_arity",
  {     hlds__hlds_defns__hlds__hlds_defns__du_name_ordered_name_arity_0 },
  {     hlds__hlds_defns__hlds__hlds_defns__du_ptag_ordered_name_arity_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_defns__hlds__hlds_defns__functor_number_map_name_arity_0
};

#line 442 "hlds.hlds_defns.c"
static MR_bool MR_CALL 
hlds__hlds_defns____Unify____name_arity_0_0_10001(
#line 445 "hlds.hlds_defns.c"
  MR_Box hlds__hlds_defns__wrapper_arg_1,
#line 447 "hlds.hlds_defns.c"
  MR_Box hlds__hlds_defns__wrapper_arg_2)
#line 449 "hlds.hlds_defns.c"
{
#line 451 "hlds.hlds_defns.c"
  {
#line 453 "hlds.hlds_defns.c"
    MR_bool hlds__hlds_defns__succeeded;

#line 456 "hlds.hlds_defns.c"
    {
#line 458 "hlds.hlds_defns.c"
      hlds__hlds_defns__succeeded = hlds__hlds_defns____Unify____name_arity_0_0(((MR_Word) hlds__hlds_defns__wrapper_arg_1), ((MR_Word) hlds__hlds_defns__wrapper_arg_2));
    }
#line 461 "hlds.hlds_defns.c"
    return hlds__hlds_defns__succeeded;
#line 463 "hlds.hlds_defns.c"
  }
#line 465 "hlds.hlds_defns.c"
}

#line 468 "hlds.hlds_defns.c"
static void MR_CALL 
hlds__hlds_defns____Compare____name_arity_0_0_10001(
#line 471 "hlds.hlds_defns.c"
  MR_Box * hlds__hlds_defns__wrapper_arg_1,
#line 473 "hlds.hlds_defns.c"
  MR_Box hlds__hlds_defns__wrapper_arg_2,
#line 475 "hlds.hlds_defns.c"
  MR_Box hlds__hlds_defns__wrapper_arg_3)
#line 477 "hlds.hlds_defns.c"
{
#line 479 "hlds.hlds_defns.c"
  {
#line 481 "hlds.hlds_defns.c"
    MR_Word hlds__hlds_defns__conv0_HeadVar__1_1;

#line 484 "hlds.hlds_defns.c"
    {
#line 486 "hlds.hlds_defns.c"
      hlds__hlds_defns____Compare____name_arity_0_0(&hlds__hlds_defns__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_defns__wrapper_arg_2), ((MR_Word) hlds__hlds_defns__wrapper_arg_3));
    }
#line 489 "hlds.hlds_defns.c"
    *hlds__hlds_defns__wrapper_arg_1 = ((MR_Box) (hlds__hlds_defns__conv0_HeadVar__1_1));
#line 491 "hlds.hlds_defns.c"
  }
#line 493 "hlds.hlds_defns.c"
}

#line 52 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns____Compare____name_arity_0_0(
#line 52 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__HeadVar__1_1,
#line 52 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 52 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__3_3)
#line 52 "hlds_defns.m"
{
#line 52 "hlds_defns.m"
  {
#line 52 "hlds_defns.m"
    MR_bool hlds__hlds_defns__succeeded;
#line 52 "hlds_defns.m"
    MR_Integer hlds__hlds_defns__CastX_9 = (MR_Integer) hlds__hlds_defns__HeadVar__2_2;
#line 52 "hlds_defns.m"
    MR_Integer hlds__hlds_defns__CastY_10 = (MR_Integer) hlds__hlds_defns__HeadVar__3_3;

#line 52 "hlds_defns.m"
    hlds__hlds_defns__succeeded = (hlds__hlds_defns__CastX_9 == hlds__hlds_defns__CastY_10);
#line 52 "hlds_defns.m"
    if (hlds__hlds_defns__succeeded)
#line 520 "hlds.hlds_defns.c"
      *hlds__hlds_defns__HeadVar__1_1 = (MR_Integer) 0;
#line 52 "hlds_defns.m"
    else
#line 52 "hlds_defns.m"
      {
#line 52 "hlds_defns.m"
        MR_String hlds__hlds_defns__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
#line 52 "hlds_defns.m"
        MR_Integer hlds__hlds_defns__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
#line 52 "hlds_defns.m"
        MR_String hlds__hlds_defns__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 0)));
#line 52 "hlds_defns.m"
        MR_Integer hlds__hlds_defns__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 1)));
#line 52 "hlds_defns.m"
        MR_Word hlds__hlds_defns__V_8_8;

#line 52 "hlds_defns.m"
        {
#line 52 "hlds_defns.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_defns__V_8_8, hlds__hlds_defns__V_4_4, hlds__hlds_defns__V_6_6);
        }
#line 542 "hlds.hlds_defns.c"
        hlds__hlds_defns__succeeded = (hlds__hlds_defns__V_8_8 == (MR_Integer) 0);
#line 52 "hlds_defns.m"
        hlds__hlds_defns__succeeded = !(hlds__hlds_defns__succeeded);
#line 52 "hlds_defns.m"
        if (hlds__hlds_defns__succeeded)
#line 52 "hlds_defns.m"
          *hlds__hlds_defns__HeadVar__1_1 = hlds__hlds_defns__V_8_8;
#line 52 "hlds_defns.m"
        else
#line 52 "hlds_defns.m"
          {
#line 52 "hlds_defns.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_defns__HeadVar__1_1, hlds__hlds_defns__V_5_5, hlds__hlds_defns__V_7_7);
          }
#line 52 "hlds_defns.m"
      }
#line 52 "hlds_defns.m"
  }
#line 52 "hlds_defns.m"
}

#line 52 "hlds_defns.m"
static MR_bool MR_CALL 
hlds__hlds_defns____Unify____name_arity_0_0(
#line 52 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__1_1,
#line 52 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2)
#line 52 "hlds_defns.m"
{
#line 52 "hlds_defns.m"
  {
#line 52 "hlds_defns.m"
    MR_bool hlds__hlds_defns__succeeded;
#line 52 "hlds_defns.m"
    MR_Integer hlds__hlds_defns__CastX_7 = (MR_Integer) hlds__hlds_defns__HeadVar__1_1;
#line 52 "hlds_defns.m"
    MR_Integer hlds__hlds_defns__CastY_8 = (MR_Integer) hlds__hlds_defns__HeadVar__2_2;

#line 52 "hlds_defns.m"
    hlds__hlds_defns__succeeded = (hlds__hlds_defns__CastX_7 == hlds__hlds_defns__CastY_8);
#line 52 "hlds_defns.m"
    if (hlds__hlds_defns__succeeded)
#line 52 "hlds_defns.m"
      hlds__hlds_defns__succeeded = MR_TRUE;
#line 52 "hlds_defns.m"
    else
#line 52 "hlds_defns.m"
      {
#line 52 "hlds_defns.m"
        MR_String hlds__hlds_defns__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__1_1, (MR_Integer) 0)));
#line 52 "hlds_defns.m"
        MR_Integer hlds__hlds_defns__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__1_1, (MR_Integer) 1)));
#line 52 "hlds_defns.m"
        MR_String hlds__hlds_defns__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
#line 52 "hlds_defns.m"
        MR_Integer hlds__hlds_defns__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));

#line 601 "hlds.hlds_defns.c"
        hlds__hlds_defns__succeeded = (strcmp(hlds__hlds_defns__V_3_3, hlds__hlds_defns__V_5_5) == 0);
#line 52 "hlds_defns.m"
        if (hlds__hlds_defns__succeeded)
#line 605 "hlds.hlds_defns.c"
          hlds__hlds_defns__succeeded = (hlds__hlds_defns__V_4_4 == hlds__hlds_defns__V_6_6);
#line 52 "hlds_defns.m"
      }
#line 52 "hlds_defns.m"
    return hlds__hlds_defns__succeeded;
#line 52 "hlds_defns.m"
  }
#line 52 "hlds_defns.m"
}

#line 293 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__output_prefixed_strings_5_p_0(
#line 293 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__1_1,
#line 293 "hlds_defns.m"
  MR_String hlds__hlds_defns__HeadVar__2_2,
#line 293 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__3_3)
#line 293 "hlds_defns.m"
{
#line 296 "hlds_defns.m"
  while (MR_TRUE)
#line 296 "hlds_defns.m"
    {
#line 296 "hlds_defns.m"
      /* tailcall optimized into a loop */
#line 296 "hlds_defns.m"
      {
#line 296 "hlds_defns.m"
        MR_bool hlds__hlds_defns__succeeded;

#line 296 "hlds_defns.m"
        if ((hlds__hlds_defns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "hlds_defns.m"
          {
#line 296 "hlds_defns.m"
          }
#line 296 "hlds_defns.m"
        else
#line 297 "hlds_defns.m"
          {
#line 297 "hlds_defns.m"
            MR_String hlds__hlds_defns__Str_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 0)));
#line 297 "hlds_defns.m"
            MR_Word hlds__hlds_defns__Strs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 1)));

#line 298 "hlds_defns.m"
            {
#line 298 "hlds_defns.m"
              mercury__io__write_string_4_p_0(hlds__hlds_defns__HeadVar__1_1, hlds__hlds_defns__HeadVar__2_2);
            }
#line 299 "hlds_defns.m"
            {
#line 299 "hlds_defns.m"
              mercury__io__write_string_4_p_0(hlds__hlds_defns__HeadVar__1_1, hlds__hlds_defns__Str_13);
            }
#line 300 "hlds_defns.m"
            {
#line 300 "hlds_defns.m"
              mercury__io__nl_3_p_0(hlds__hlds_defns__HeadVar__1_1);
            }
#line 301 "hlds_defns.m"
            /* direct tailcall eliminated */
#line 301 "hlds_defns.m"
            {
#line 301 "hlds_defns.m"
              MR_Word hlds__hlds_defns__HeadVar__3__tmp_copy_3 = hlds__hlds_defns__Strs_14;

#line 301 "hlds_defns.m"
              hlds__hlds_defns__HeadVar__3_3 = hlds__hlds_defns__HeadVar__3__tmp_copy_3;
#line 301 "hlds_defns.m"
            }
#line 301 "hlds_defns.m"
            continue;
#line 297 "hlds_defns.m"
          }
#line 296 "hlds_defns.m"
      }
#line 296 "hlds_defns.m"
      break;
#line 296 "hlds_defns.m"
    }
#line 293 "hlds_defns.m"
}

#line 280 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__output_prefixed_name_arities_5_p_0(
#line 280 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__1_1,
#line 280 "hlds_defns.m"
  MR_String hlds__hlds_defns__HeadVar__2_2,
#line 280 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__3_3)
#line 280 "hlds_defns.m"
{
#line 283 "hlds_defns.m"
  while (MR_TRUE)
#line 283 "hlds_defns.m"
    {
#line 283 "hlds_defns.m"
      /* tailcall optimized into a loop */
#line 283 "hlds_defns.m"
      {
#line 283 "hlds_defns.m"
        MR_bool hlds__hlds_defns__succeeded;

#line 283 "hlds_defns.m"
        if ((hlds__hlds_defns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "hlds_defns.m"
          {
#line 283 "hlds_defns.m"
          }
#line 283 "hlds_defns.m"
        else
#line 284 "hlds_defns.m"
          {
#line 284 "hlds_defns.m"
            MR_Word hlds__hlds_defns__NameArity_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 0)));
#line 284 "hlds_defns.m"
            MR_Word hlds__hlds_defns__NameArities_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 1)));
#line 284 "hlds_defns.m"
            MR_String hlds__hlds_defns__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__NameArity_13, (MR_Integer) 0)));
#line 284 "hlds_defns.m"
            MR_Integer hlds__hlds_defns__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__NameArity_13, (MR_Integer) 1)));

#line 286 "hlds_defns.m"
            {
#line 286 "hlds_defns.m"
              mercury__io__write_string_4_p_0(hlds__hlds_defns__HeadVar__1_1, hlds__hlds_defns__HeadVar__2_2);
            }
#line 287 "hlds_defns.m"
            {
#line 287 "hlds_defns.m"
              mercury__io__write_string_4_p_0(hlds__hlds_defns__HeadVar__1_1, hlds__hlds_defns__Name_16);
            }
#line 288 "hlds_defns.m"
            {
#line 288 "hlds_defns.m"
              mercury__io__write_string_4_p_0(hlds__hlds_defns__HeadVar__1_1, (MR_String) "/");
            }
#line 289 "hlds_defns.m"
            {
#line 289 "hlds_defns.m"
              mercury__io__write_int_4_p_0(hlds__hlds_defns__HeadVar__1_1, hlds__hlds_defns__Arity_17);
            }
#line 290 "hlds_defns.m"
            {
#line 290 "hlds_defns.m"
              mercury__io__nl_3_p_0(hlds__hlds_defns__HeadVar__1_1);
            }
#line 291 "hlds_defns.m"
            /* direct tailcall eliminated */
#line 291 "hlds_defns.m"
            {
#line 291 "hlds_defns.m"
              MR_Word hlds__hlds_defns__HeadVar__3__tmp_copy_3 = hlds__hlds_defns__NameArities_14;

#line 291 "hlds_defns.m"
              hlds__hlds_defns__HeadVar__3_3 = hlds__hlds_defns__HeadVar__3__tmp_copy_3;
#line 291 "hlds_defns.m"
            }
#line 291 "hlds_defns.m"
            continue;
#line 284 "hlds_defns.m"
          }
#line 283 "hlds_defns.m"
      }
#line 283 "hlds_defns.m"
      break;
#line 283 "hlds_defns.m"
    }
#line 280 "hlds_defns.m"
}

#line 270 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__instance_type_to_desc_2_p_0(
#line 270 "hlds_defns.m"
  MR_Word hlds__hlds_defns__Type_3,
#line 270 "hlds_defns.m"
  MR_String * hlds__hlds_defns__TypeDesc_4)
#line 270 "hlds_defns.m"
{
#line 272 "hlds_defns.m"
  {
#line 272 "hlds_defns.m"
    MR_bool hlds__hlds_defns__succeeded;
#line 272 "hlds_defns.m"
    MR_Word hlds__hlds_defns__TypeCtor_5;
#line 272 "hlds_defns.m"
    MR_Word hlds__hlds_defns__TypeSymName_6;
#line 272 "hlds_defns.m"
    MR_Integer hlds__hlds_defns__TypeArity_7;
#line 272 "hlds_defns.m"
    MR_String hlds__hlds_defns__TypeName_8;
#line 272 "hlds_defns.m"
    MR_String hlds__hlds_defns__V_9_9;
#line 272 "hlds_defns.m"
    MR_String hlds__hlds_defns__V_11_11;

#line 273 "hlds_defns.m"
    {
#line 273 "hlds_defns.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(hlds__hlds_defns__Type_3, &hlds__hlds_defns__TypeCtor_5);
    }
#line 274 "hlds_defns.m"
    hlds__hlds_defns__TypeSymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__TypeCtor_5, (MR_Integer) 0)));
#line 274 "hlds_defns.m"
    hlds__hlds_defns__TypeArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__TypeCtor_5, (MR_Integer) 1)));
#line 275 "hlds_defns.m"
    {
#line 275 "hlds_defns.m"
      hlds__hlds_defns__TypeName_8 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hlds_defns__TypeSymName_6);
    }
#line 276 "hlds_defns.m"
    {
#line 276 "hlds_defns.m"
      hlds__hlds_defns__V_11_11 = mercury__string__int_to_string_1_f_0(hlds__hlds_defns__TypeArity_7);
    }
#line 276 "hlds_defns.m"
    {
#line 276 "hlds_defns.m"
      hlds__hlds_defns__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_defns__V_11_11);
    }
#line 276 "hlds_defns.m"
    {
#line 276 "hlds_defns.m"
      *hlds__hlds_defns__TypeDesc_4 = mercury__string__f_43_43_2_f_0(hlds__hlds_defns__TypeName_8, hlds__hlds_defns__V_9_9);
    }
#line 272 "hlds_defns.m"
  }
#line 270 "hlds_defns.m"
}

#line 258 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0_1(
#line 258 "hlds_defns.m"
  MR_Box hlds__hlds_defns__closure_arg,
#line 258 "hlds_defns.m"
  MR_Box hlds__hlds_defns__wrapper_arg_1,
#line 258 "hlds_defns.m"
  MR_Box * hlds__hlds_defns__wrapper_arg_2)
#line 258 "hlds_defns.m"
{
#line 258 "hlds_defns.m"
  {
#line 258 "hlds_defns.m"
    MR_Box hlds__hlds_defns__closure = hlds__hlds_defns__closure_arg;
#line 258 "hlds_defns.m"
    MR_String hlds__hlds_defns__conv0_TypeDesc_4;

#line 258 "hlds_defns.m"
    {
#line 258 "hlds_defns.m"
      hlds__hlds_defns__instance_type_to_desc_2_p_0(((MR_Word) hlds__hlds_defns__wrapper_arg_1), &hlds__hlds_defns__conv0_TypeDesc_4);
    }
#line 258 "hlds_defns.m"
    *hlds__hlds_defns__wrapper_arg_2 = ((MR_Box) (hlds__hlds_defns__conv0_TypeDesc_4));
#line 258 "hlds_defns.m"
  }
#line 258 "hlds_defns.m"
}

#line 246 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0(
#line 246 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleName_1,
#line 246 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ClassId_2,
#line 246 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__3_3,
#line 246 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_4,
#line 246 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_5)
#line 246 "hlds_defns.m"
{
#line 249 "hlds_defns.m"
  while (MR_TRUE)
#line 249 "hlds_defns.m"
    {
#line 249 "hlds_defns.m"
      /* tailcall optimized into a loop */
#line 249 "hlds_defns.m"
      {
#line 249 "hlds_defns.m"
        MR_bool hlds__hlds_defns__succeeded;

#line 249 "hlds_defns.m"
        if ((hlds__hlds_defns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "hlds_defns.m"
          *hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_5 = hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_4;
#line 249 "hlds_defns.m"
        else
#line 251 "hlds_defns.m"
          {
#line 251 "hlds_defns.m"
            MR_Word hlds__hlds_defns__InstanceDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 0)));
#line 251 "hlds_defns.m"
            MR_Word hlds__hlds_defns__InstanceDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__3_3, (MR_Integer) 1)));
#line 251 "hlds_defns.m"
            MR_Word hlds__hlds_defns__InstanceModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 0)));
#line 251 "hlds_defns.m"
            MR_Word hlds__hlds_defns__OrigTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 2)));
#line 251 "hlds_defns.m"
            MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_44_44;
#line 252 "hlds_defns.m"
            MR_Word hlds__hlds_defns___Types_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 1)));
#line 252 "hlds_defns.m"
            MR_Word hlds__hlds_defns___Status_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 3)));
#line 252 "hlds_defns.m"
            MR_Word hlds__hlds_defns___Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 4)));
#line 252 "hlds_defns.m"
            MR_Word hlds__hlds_defns___Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 5)));
#line 252 "hlds_defns.m"
            MR_Word hlds__hlds_defns___Body_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 6)));
#line 252 "hlds_defns.m"
            MR_Word hlds__hlds_defns___Interface_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 7)));
#line 252 "hlds_defns.m"
            MR_Word hlds__hlds_defns___TVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 8)));
#line 252 "hlds_defns.m"
            MR_Word hlds__hlds_defns___Proofs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstanceDefn_13, (MR_Integer) 9)));

#line 254 "hlds_defns.m"
            {
#line 254 "hlds_defns.m"
              hlds__hlds_defns__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_defns__InstanceModuleName_16, hlds__hlds_defns__ModuleName_1);
            }
#line 264 "hlds_defns.m"
            if (hlds__hlds_defns__succeeded)
#line 255 "hlds_defns.m"
              {
#line 255 "hlds_defns.m"
                MR_Word hlds__hlds_defns__TypeCtorInfo_49_49;
#line 255 "hlds_defns.m"
                MR_Word hlds__hlds_defns__ClassSymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__ClassId_2, (MR_Integer) 0)));
#line 255 "hlds_defns.m"
                MR_Integer hlds__hlds_defns__ClassArity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__ClassId_2, (MR_Integer) 1)));
#line 255 "hlds_defns.m"
                MR_String hlds__hlds_defns__ClassName_28;
#line 255 "hlds_defns.m"
                MR_Word hlds__hlds_defns__OrigTypeDescs_29;
#line 255 "hlds_defns.m"
                MR_String hlds__hlds_defns__TypeVectorDesc_30;
#line 255 "hlds_defns.m"
                MR_String hlds__hlds_defns__InstanceDesc_31;
#line 255 "hlds_defns.m"
                MR_String hlds__hlds_defns__V_51_51;
#line 255 "hlds_defns.m"
                MR_Word hlds__hlds_defns__V_57_57;
#line 255 "hlds_defns.m"
                MR_String hlds__hlds_defns__V_58_58;
#line 255 "hlds_defns.m"
                MR_String hlds__hlds_defns__V_60_60;
#line 255 "hlds_defns.m"
                MR_String hlds__hlds_defns__V_61_61;
#line 255 "hlds_defns.m"
                MR_String hlds__hlds_defns__V_68_68;
#line 255 "hlds_defns.m"
                MR_String hlds__hlds_defns__V_70_70;
#line 255 "hlds_defns.m"
                MR_String hlds__hlds_defns__V_71_71;

#line 256 "hlds_defns.m"
                {
#line 256 "hlds_defns.m"
                  hlds__hlds_defns__ClassName_28 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hlds_defns__ClassSymName_26);
                }
#line 978 "hlds.hlds_defns.c"
                hlds__hlds_defns__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 258 "hlds_defns.m"
                {
#line 258 "hlds_defns.m"
                  mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_defns__TypeCtorInfo_49_49, (MR_Word) &hlds__hlds_defns_scalar_common_3[0], hlds__hlds_defns__OrigTypes_18, &hlds__hlds_defns__OrigTypeDescs_29);
                }
#line 259 "hlds_defns.m"
                {
#line 259 "hlds_defns.m"
                  hlds__hlds_defns__TypeVectorDesc_30 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__hlds_defns__OrigTypeDescs_29);
                }
#line 990 "hlds.hlds_defns.c"
                hlds__hlds_defns__V_57_57 = (MR_Word) &hlds__hlds_defns_scalar_common_4[0];
#line 262 "hlds_defns.m"
                {
#line 262 "hlds_defns.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_defns__V_57_57, hlds__hlds_defns__TypeVectorDesc_30, &hlds__hlds_defns__V_51_51);
                }
#line 261 "hlds_defns.m"
                {
#line 261 "hlds_defns.m"
                  hlds__hlds_defns__V_58_58 = mercury__string__f_43_43_2_f_0(hlds__hlds_defns__V_51_51, (MR_String) ">");
                }
#line 261 "hlds_defns.m"
                {
#line 261 "hlds_defns.m"
                  hlds__hlds_defns__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) " <", hlds__hlds_defns__V_58_58);
                }
#line 262 "hlds_defns.m"
                {
#line 262 "hlds_defns.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_defns__V_57_57, hlds__hlds_defns__ClassArity_27, &hlds__hlds_defns__V_61_61);
                }
#line 261 "hlds_defns.m"
                {
#line 261 "hlds_defns.m"
                  hlds__hlds_defns__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__hlds_defns__V_61_61, hlds__hlds_defns__V_60_60);
                }
#line 261 "hlds_defns.m"
                {
#line 261 "hlds_defns.m"
                  hlds__hlds_defns__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_defns__V_68_68);
                }
#line 262 "hlds_defns.m"
                {
#line 262 "hlds_defns.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_defns__V_57_57, hlds__hlds_defns__ClassName_28, &hlds__hlds_defns__V_71_71);
                }
#line 261 "hlds_defns.m"
                {
#line 261 "hlds_defns.m"
                  hlds__hlds_defns__InstanceDesc_31 = mercury__string__f_43_43_2_f_0(hlds__hlds_defns__V_71_71, hlds__hlds_defns__V_70_70);
                }
#line 263 "hlds_defns.m"
                {
#line 263 "hlds_defns.m"
                  mercury__set__insert_3_p_0(hlds__hlds_defns__TypeCtorInfo_49_49, ((MR_Box) (hlds__hlds_defns__InstanceDesc_31)), hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_4, &hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_44_44);
                }
#line 255 "hlds_defns.m"
              }
#line 264 "hlds_defns.m"
            else
#line 264 "hlds_defns.m"
              hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_44_44 = hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_4;
#line 267 "hlds_defns.m"
            /* direct tailcall eliminated */
#line 267 "hlds_defns.m"
            {
#line 267 "hlds_defns.m"
              MR_Word hlds__hlds_defns__HeadVar__3__tmp_copy_3 = hlds__hlds_defns__InstanceDefns_14;
#line 267 "hlds_defns.m"
              MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0__tmp_copy_4 = hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_44_44;

#line 267 "hlds_defns.m"
              hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_4 = hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0__tmp_copy_4;
#line 267 "hlds_defns.m"
              hlds__hlds_defns__HeadVar__3_3 = hlds__hlds_defns__HeadVar__3__tmp_copy_3;
#line 267 "hlds_defns.m"
            }
#line 267 "hlds_defns.m"
            continue;
#line 251 "hlds_defns.m"
          }
#line 249 "hlds_defns.m"
      }
#line 249 "hlds_defns.m"
      break;
#line 249 "hlds_defns.m"
    }
#line 246 "hlds_defns.m"
}

#line 234 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_instance_names_4_p_0(
#line 234 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleName_1,
#line 234 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 234 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_3,
#line 234 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_4)
#line 234 "hlds_defns.m"
{
#line 238 "hlds_defns.m"
  while (MR_TRUE)
#line 238 "hlds_defns.m"
    {
#line 238 "hlds_defns.m"
      /* tailcall optimized into a loop */
#line 238 "hlds_defns.m"
      {
#line 238 "hlds_defns.m"
        MR_bool hlds__hlds_defns__succeeded;

#line 238 "hlds_defns.m"
        if ((hlds__hlds_defns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "hlds_defns.m"
          *hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_4 = hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_3;
#line 238 "hlds_defns.m"
        else
#line 240 "hlds_defns.m"
          {
#line 240 "hlds_defns.m"
            MR_Word hlds__hlds_defns__InstancePair_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
#line 240 "hlds_defns.m"
            MR_Word hlds__hlds_defns__InstancePairs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
#line 240 "hlds_defns.m"
            MR_Word hlds__hlds_defns__ClassId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstancePair_10, (MR_Integer) 0)));
#line 240 "hlds_defns.m"
            MR_Word hlds__hlds_defns__InstanceDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstancePair_10, (MR_Integer) 1)));
#line 240 "hlds_defns.m"
            MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_17_17;

#line 242 "hlds_defns.m"
            {
#line 242 "hlds_defns.m"
              hlds__hlds_defns__gather_local_instance_names_for_class_5_p_0(hlds__hlds_defns__ModuleName_1, hlds__hlds_defns__ClassId_13, hlds__hlds_defns__InstanceDefns_14, hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_3, &hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_17_17);
            }
#line 244 "hlds_defns.m"
            /* direct tailcall eliminated */
#line 244 "hlds_defns.m"
            {
#line 244 "hlds_defns.m"
              MR_Word hlds__hlds_defns__HeadVar__2__tmp_copy_2 = hlds__hlds_defns__InstancePairs_11;
#line 244 "hlds_defns.m"
              MR_Word hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0__tmp_copy_3 = hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_17_17;

#line 244 "hlds_defns.m"
              hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0_3 = hlds__hlds_defns__STATE_VARIABLE_InstanceDescs_0__tmp_copy_3;
#line 244 "hlds_defns.m"
              hlds__hlds_defns__HeadVar__2_2 = hlds__hlds_defns__HeadVar__2__tmp_copy_2;
#line 244 "hlds_defns.m"
            }
#line 244 "hlds_defns.m"
            continue;
#line 240 "hlds_defns.m"
          }
#line 238 "hlds_defns.m"
      }
#line 238 "hlds_defns.m"
      break;
#line 238 "hlds_defns.m"
    }
#line 234 "hlds_defns.m"
}

#line 212 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_typeclass_names_4_p_0(
#line 212 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleName_1,
#line 212 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 212 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0_3,
#line 212 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_4)
#line 212 "hlds_defns.m"
{
#line 215 "hlds_defns.m"
  while (MR_TRUE)
#line 215 "hlds_defns.m"
    {
#line 215 "hlds_defns.m"
      /* tailcall optimized into a loop */
#line 215 "hlds_defns.m"
      {
#line 215 "hlds_defns.m"
        MR_bool hlds__hlds_defns__succeeded;

#line 215 "hlds_defns.m"
        if ((hlds__hlds_defns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "hlds_defns.m"
          *hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_4 = hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0_3;
#line 215 "hlds_defns.m"
        else
#line 217 "hlds_defns.m"
          {
#line 217 "hlds_defns.m"
            MR_Word hlds__hlds_defns__ClassId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
#line 217 "hlds_defns.m"
            MR_Word hlds__hlds_defns__ClassIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "hlds_defns.m"
            MR_Word hlds__hlds_defns__ClassSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__ClassId_10, (MR_Integer) 0)));
#line 217 "hlds_defns.m"
            MR_Integer hlds__hlds_defns__ClassArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__ClassId_10, (MR_Integer) 1)));
#line 217 "hlds_defns.m"
            MR_Word hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_21_21;

#line 222 "hlds_defns.m"
            if (((MR_tag((MR_Word) hlds__hlds_defns__ClassSymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 223 "hlds_defns.m"
              {
#line 223 "hlds_defns.m"
                MR_Word hlds__hlds_defns__ClassModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__ClassSymName_13, (MR_Integer) 0)));
#line 223 "hlds_defns.m"
                MR_String hlds__hlds_defns__ClassName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__ClassSymName_13, (MR_Integer) 1)));

#line 224 "hlds_defns.m"
                {
#line 224 "hlds_defns.m"
                  hlds__hlds_defns__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_defns__ClassModuleName_16, hlds__hlds_defns__ModuleName_1);
                }
#line 226 "hlds_defns.m"
                if (hlds__hlds_defns__succeeded)
#line 225 "hlds_defns.m"
                  {
#line 225 "hlds_defns.m"
                    MR_Word hlds__hlds_defns__V_20_20;

#line 225 "hlds_defns.m"
                    {
#line 225 "hlds_defns.m"
                      hlds__hlds_defns__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 225 "hlds_defns.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__V_20_20, 0) = ((MR_Box) (hlds__hlds_defns__ClassName_17));
#line 225 "hlds_defns.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__V_20_20, 1) = ((MR_Box) (hlds__hlds_defns__ClassArity_14));
#line 225 "hlds_defns.m"
                    }
#line 225 "hlds_defns.m"
                    {
#line 225 "hlds_defns.m"
                      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0, ((MR_Box) (hlds__hlds_defns__V_20_20)), hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0_3, &hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_21_21);
                    }
#line 225 "hlds_defns.m"
                  }
#line 226 "hlds_defns.m"
                else
#line 226 "hlds_defns.m"
                  hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_21_21 = hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0_3;
#line 223 "hlds_defns.m"
              }
#line 222 "hlds_defns.m"
            else
#line 220 "hlds_defns.m"
              {
#line 221 "hlds_defns.m"
                {
#line 221 "hlds_defns.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_defns", (MR_String) "predicate \140hlds.hlds_defns.gather_local_typeclass_names\'/4", (MR_String) "unqualified class_id name");
#line 221 "hlds_defns.m"
                  return;
                }
#line 220 "hlds_defns.m"
              }
#line 230 "hlds_defns.m"
            /* direct tailcall eliminated */
#line 230 "hlds_defns.m"
            {
#line 230 "hlds_defns.m"
              MR_Word hlds__hlds_defns__HeadVar__2__tmp_copy_2 = hlds__hlds_defns__ClassIds_11;
#line 230 "hlds_defns.m"
              MR_Word hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0__tmp_copy_3 = hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_21_21;

#line 230 "hlds_defns.m"
              hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0_3 = hlds__hlds_defns__STATE_VARIABLE_ClassNameArities_0__tmp_copy_3;
#line 230 "hlds_defns.m"
              hlds__hlds_defns__HeadVar__2_2 = hlds__hlds_defns__HeadVar__2__tmp_copy_2;
#line 230 "hlds_defns.m"
            }
#line 230 "hlds_defns.m"
            continue;
#line 217 "hlds_defns.m"
          }
#line 215 "hlds_defns.m"
      }
#line 215 "hlds_defns.m"
      break;
#line 215 "hlds_defns.m"
    }
#line 212 "hlds_defns.m"
}

#line 178 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_pred_names_6_p_0(
#line 178 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__1_1,
#line 178 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 178 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3,
#line 178 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_4,
#line 178 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5,
#line 178 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_PredNameArities_6)
#line 178 "hlds_defns.m"
{
#line 183 "hlds_defns.m"
  while (MR_TRUE)
#line 183 "hlds_defns.m"
    {
#line 183 "hlds_defns.m"
      /* tailcall optimized into a loop */
#line 183 "hlds_defns.m"
      {
#line 183 "hlds_defns.m"
        MR_bool hlds__hlds_defns__succeeded;

#line 183 "hlds_defns.m"
        if ((hlds__hlds_defns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "hlds_defns.m"
          {
#line 183 "hlds_defns.m"
            *hlds__hlds_defns__STATE_VARIABLE_PredNameArities_6 = hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5;
#line 183 "hlds_defns.m"
            *hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_4 = hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3;
#line 183 "hlds_defns.m"
          }
#line 183 "hlds_defns.m"
        else
#line 185 "hlds_defns.m"
          {
#line 185 "hlds_defns.m"
            MR_Word hlds__hlds_defns__PredDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "hlds_defns.m"
            MR_Word hlds__hlds_defns__PredDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "hlds_defns.m"
            MR_Word hlds__hlds_defns__PredInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__PredDefn_15, (MR_Integer) 1)));
#line 185 "hlds_defns.m"
            MR_Word hlds__hlds_defns__PredModuleName_21;
#line 185 "hlds_defns.m"
            MR_Word hlds__hlds_defns__Origin_22;
#line 185 "hlds_defns.m"
            MR_Word hlds__hlds_defns__STATE_VARIABLE_PredNameArities_32_32;
#line 185 "hlds_defns.m"
            MR_Word hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_33_33;
#line 186 "hlds_defns.m"
            MR_Word hlds__hlds_defns___PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__PredDefn_15, (MR_Integer) 0)));
#line 191 "hlds_defns.m"
            MR_Word hlds__hlds_defns__V_23_23;

#line 187 "hlds_defns.m"
            {
#line 187 "hlds_defns.m"
              hlds__hlds_pred__pred_info_get_module_name_2_p_0(hlds__hlds_defns__PredInfo_20, &hlds__hlds_defns__PredModuleName_21);
            }
#line 188 "hlds_defns.m"
            {
#line 188 "hlds_defns.m"
              hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_defns__PredInfo_20, &hlds__hlds_defns__Origin_22);
            }
#line 190 "hlds_defns.m"
            {
#line 190 "hlds_defns.m"
              hlds__hlds_defns__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_defns__PredModuleName_21, hlds__hlds_defns__HeadVar__1_1);
            }
#line 190 "hlds_defns.m"
            if (hlds__hlds_defns__succeeded)
#line 190 "hlds_defns.m"
              {
#line 191 "hlds_defns.m"
                hlds__hlds_defns__succeeded = ((((MR_tag((MR_Word) hlds__hlds_defns__Origin_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_defns__Origin_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 191 "hlds_defns.m"
                if (hlds__hlds_defns__succeeded)
#line 191 "hlds_defns.m"
                  hlds__hlds_defns__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_defns__Origin_22, (MR_Integer) 1)));
#line 190 "hlds_defns.m"
              }
#line 204 "hlds_defns.m"
            if (hlds__hlds_defns__succeeded)
#line 193 "hlds_defns.m"
              {
#line 193 "hlds_defns.m"
                MR_String hlds__hlds_defns__PredName_24;
#line 193 "hlds_defns.m"
                MR_Integer hlds__hlds_defns__PredArity_25;
#line 193 "hlds_defns.m"
                MR_Word hlds__hlds_defns__NameArity_26;
#line 193 "hlds_defns.m"
                MR_Word hlds__hlds_defns__PorF_27;

#line 193 "hlds_defns.m"
                {
#line 193 "hlds_defns.m"
                  hlds__hlds_pred__pred_info_get_name_2_p_0(hlds__hlds_defns__PredInfo_20, &hlds__hlds_defns__PredName_24);
                }
#line 194 "hlds_defns.m"
                {
#line 194 "hlds_defns.m"
                  hlds__hlds_defns__PredArity_25 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_defns__PredInfo_20);
                }
#line 195 "hlds_defns.m"
                {
#line 195 "hlds_defns.m"
                  hlds__hlds_defns__NameArity_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 195 "hlds_defns.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_defns__NameArity_26, 0) = ((MR_Box) (hlds__hlds_defns__PredName_24));
#line 195 "hlds_defns.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_defns__NameArity_26, 1) = ((MR_Box) (hlds__hlds_defns__PredArity_25));
#line 195 "hlds_defns.m"
                }
#line 196 "hlds_defns.m"
                {
#line 196 "hlds_defns.m"
                  hlds__hlds_defns__PorF_27 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_defns__PredInfo_20);
                }
#line 200 "hlds_defns.m"
#line 200 "hlds_defns.m"
                switch (hlds__hlds_defns__PorF_27) {
#line 200 "hlds_defns.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 200 "hlds_defns.m"
                  case (MR_Integer) 1:
#line 198 "hlds_defns.m"
                    {
#line 199 "hlds_defns.m"
                      {
#line 199 "hlds_defns.m"
                        mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0, ((MR_Box) (hlds__hlds_defns__NameArity_26)), hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3, &hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_33_33);
                      }
#line 198 "hlds_defns.m"
                      hlds__hlds_defns__STATE_VARIABLE_PredNameArities_32_32 = hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5;
#line 198 "hlds_defns.m"
                    }
#line 200 "hlds_defns.m"
                    break;
#line 200 "hlds_defns.m"
                  case (MR_Integer) 0:
#line 201 "hlds_defns.m"
                    {
#line 202 "hlds_defns.m"
                      {
#line 202 "hlds_defns.m"
                        mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0, ((MR_Box) (hlds__hlds_defns__NameArity_26)), hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5, &hlds__hlds_defns__STATE_VARIABLE_PredNameArities_32_32);
                      }
#line 201 "hlds_defns.m"
                      hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_33_33 = hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3;
#line 201 "hlds_defns.m"
                    }
#line 200 "hlds_defns.m"
                    break;
#line 200 "hlds_defns.m"
                }
#line 193 "hlds_defns.m"
              }
#line 204 "hlds_defns.m"
            else
#line 205 "hlds_defns.m"
              {
#line 205 "hlds_defns.m"
                hlds__hlds_defns__STATE_VARIABLE_PredNameArities_32_32 = hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5;
#line 205 "hlds_defns.m"
                hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_33_33 = hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3;
#line 205 "hlds_defns.m"
              }
#line 207 "hlds_defns.m"
            /* direct tailcall eliminated */
#line 207 "hlds_defns.m"
            {
#line 207 "hlds_defns.m"
              MR_Word hlds__hlds_defns__HeadVar__2__tmp_copy_2 = hlds__hlds_defns__PredDefns_16;
#line 207 "hlds_defns.m"
              MR_Word hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0__tmp_copy_3 = hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_33_33;
#line 207 "hlds_defns.m"
              MR_Word hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0__tmp_copy_5 = hlds__hlds_defns__STATE_VARIABLE_PredNameArities_32_32;

#line 207 "hlds_defns.m"
              hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0_5 = hlds__hlds_defns__STATE_VARIABLE_PredNameArities_0__tmp_copy_5;
#line 207 "hlds_defns.m"
              hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0_3 = hlds__hlds_defns__STATE_VARIABLE_FuncNameArities_0__tmp_copy_3;
#line 207 "hlds_defns.m"
              hlds__hlds_defns__HeadVar__2_2 = hlds__hlds_defns__HeadVar__2__tmp_copy_2;
#line 207 "hlds_defns.m"
            }
#line 207 "hlds_defns.m"
            continue;
#line 185 "hlds_defns.m"
          }
#line 183 "hlds_defns.m"
      }
#line 183 "hlds_defns.m"
      break;
#line 183 "hlds_defns.m"
    }
#line 178 "hlds_defns.m"
}

#line 156 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_mode_names_4_p_0(
#line 156 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleName_1,
#line 156 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 156 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0_3,
#line 156 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_4)
#line 156 "hlds_defns.m"
{
#line 159 "hlds_defns.m"
  while (MR_TRUE)
#line 159 "hlds_defns.m"
    {
#line 159 "hlds_defns.m"
      /* tailcall optimized into a loop */
#line 159 "hlds_defns.m"
      {
#line 159 "hlds_defns.m"
        MR_bool hlds__hlds_defns__succeeded;

#line 159 "hlds_defns.m"
        if ((hlds__hlds_defns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 159 "hlds_defns.m"
          *hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_4 = hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0_3;
#line 159 "hlds_defns.m"
        else
#line 161 "hlds_defns.m"
          {
#line 161 "hlds_defns.m"
            MR_Word hlds__hlds_defns__ModeId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
#line 161 "hlds_defns.m"
            MR_Word hlds__hlds_defns__ModeIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "hlds_defns.m"
            MR_Word hlds__hlds_defns__ModeSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__ModeId_10, (MR_Integer) 0)));
#line 161 "hlds_defns.m"
            MR_Integer hlds__hlds_defns__ModeArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__ModeId_10, (MR_Integer) 1)));
#line 161 "hlds_defns.m"
            MR_Word hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_21_21;

#line 166 "hlds_defns.m"
            if (((MR_tag((MR_Word) hlds__hlds_defns__ModeSymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 167 "hlds_defns.m"
              {
#line 167 "hlds_defns.m"
                MR_Word hlds__hlds_defns__ModeModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__ModeSymName_13, (MR_Integer) 0)));
#line 167 "hlds_defns.m"
                MR_String hlds__hlds_defns__ModeName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__ModeSymName_13, (MR_Integer) 1)));

#line 168 "hlds_defns.m"
                {
#line 168 "hlds_defns.m"
                  hlds__hlds_defns__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_defns__ModeModuleName_16, hlds__hlds_defns__ModuleName_1);
                }
#line 170 "hlds_defns.m"
                if (hlds__hlds_defns__succeeded)
#line 169 "hlds_defns.m"
                  {
#line 169 "hlds_defns.m"
                    MR_Word hlds__hlds_defns__V_20_20;

#line 169 "hlds_defns.m"
                    {
#line 169 "hlds_defns.m"
                      hlds__hlds_defns__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 169 "hlds_defns.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__V_20_20, 0) = ((MR_Box) (hlds__hlds_defns__ModeName_17));
#line 169 "hlds_defns.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__V_20_20, 1) = ((MR_Box) (hlds__hlds_defns__ModeArity_14));
#line 169 "hlds_defns.m"
                    }
#line 169 "hlds_defns.m"
                    {
#line 169 "hlds_defns.m"
                      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0, ((MR_Box) (hlds__hlds_defns__V_20_20)), hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0_3, &hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_21_21);
                    }
#line 169 "hlds_defns.m"
                  }
#line 170 "hlds_defns.m"
                else
#line 170 "hlds_defns.m"
                  hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_21_21 = hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0_3;
#line 167 "hlds_defns.m"
              }
#line 166 "hlds_defns.m"
            else
#line 164 "hlds_defns.m"
              {
#line 165 "hlds_defns.m"
                {
#line 165 "hlds_defns.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_defns", (MR_String) "predicate \140hlds.hlds_defns.gather_local_mode_names\'/4", (MR_String) "unqualified mode_id name");
#line 165 "hlds_defns.m"
                  return;
                }
#line 164 "hlds_defns.m"
              }
#line 174 "hlds_defns.m"
            /* direct tailcall eliminated */
#line 174 "hlds_defns.m"
            {
#line 174 "hlds_defns.m"
              MR_Word hlds__hlds_defns__HeadVar__2__tmp_copy_2 = hlds__hlds_defns__ModeIds_11;
#line 174 "hlds_defns.m"
              MR_Word hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0__tmp_copy_3 = hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_21_21;

#line 174 "hlds_defns.m"
              hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0_3 = hlds__hlds_defns__STATE_VARIABLE_ModeNameArities_0__tmp_copy_3;
#line 174 "hlds_defns.m"
              hlds__hlds_defns__HeadVar__2_2 = hlds__hlds_defns__HeadVar__2__tmp_copy_2;
#line 174 "hlds_defns.m"
            }
#line 174 "hlds_defns.m"
            continue;
#line 161 "hlds_defns.m"
          }
#line 159 "hlds_defns.m"
      }
#line 159 "hlds_defns.m"
      break;
#line 159 "hlds_defns.m"
    }
#line 156 "hlds_defns.m"
}

#line 135 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_inst_names_4_p_0(
#line 135 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleName_1,
#line 135 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 135 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0_3,
#line 135 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_InstNameArities_4)
#line 135 "hlds_defns.m"
{
#line 138 "hlds_defns.m"
  while (MR_TRUE)
#line 138 "hlds_defns.m"
    {
#line 138 "hlds_defns.m"
      /* tailcall optimized into a loop */
#line 138 "hlds_defns.m"
      {
#line 138 "hlds_defns.m"
        MR_bool hlds__hlds_defns__succeeded;

#line 138 "hlds_defns.m"
        if ((hlds__hlds_defns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 138 "hlds_defns.m"
          *hlds__hlds_defns__STATE_VARIABLE_InstNameArities_4 = hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0_3;
#line 138 "hlds_defns.m"
        else
#line 139 "hlds_defns.m"
          {
#line 139 "hlds_defns.m"
            MR_Word hlds__hlds_defns__InstId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
#line 139 "hlds_defns.m"
            MR_Word hlds__hlds_defns__InstIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "hlds_defns.m"
            MR_Word hlds__hlds_defns__InstSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstId_10, (MR_Integer) 0)));
#line 139 "hlds_defns.m"
            MR_Integer hlds__hlds_defns__InstArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__InstId_10, (MR_Integer) 1)));
#line 139 "hlds_defns.m"
            MR_Word hlds__hlds_defns__STATE_VARIABLE_InstNameArities_21_21;

#line 144 "hlds_defns.m"
            if (((MR_tag((MR_Word) hlds__hlds_defns__InstSymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 145 "hlds_defns.m"
              {
#line 145 "hlds_defns.m"
                MR_Word hlds__hlds_defns__InstModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__InstSymName_13, (MR_Integer) 0)));
#line 145 "hlds_defns.m"
                MR_String hlds__hlds_defns__InstName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__InstSymName_13, (MR_Integer) 1)));

#line 146 "hlds_defns.m"
                {
#line 146 "hlds_defns.m"
                  hlds__hlds_defns__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_defns__InstModuleName_16, hlds__hlds_defns__ModuleName_1);
                }
#line 148 "hlds_defns.m"
                if (hlds__hlds_defns__succeeded)
#line 147 "hlds_defns.m"
                  {
#line 147 "hlds_defns.m"
                    MR_Word hlds__hlds_defns__V_20_20;

#line 147 "hlds_defns.m"
                    {
#line 147 "hlds_defns.m"
                      hlds__hlds_defns__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "hlds_defns.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__V_20_20, 0) = ((MR_Box) (hlds__hlds_defns__InstName_17));
#line 147 "hlds_defns.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__V_20_20, 1) = ((MR_Box) (hlds__hlds_defns__InstArity_14));
#line 147 "hlds_defns.m"
                    }
#line 147 "hlds_defns.m"
                    {
#line 147 "hlds_defns.m"
                      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0, ((MR_Box) (hlds__hlds_defns__V_20_20)), hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0_3, &hlds__hlds_defns__STATE_VARIABLE_InstNameArities_21_21);
                    }
#line 147 "hlds_defns.m"
                  }
#line 148 "hlds_defns.m"
                else
#line 148 "hlds_defns.m"
                  hlds__hlds_defns__STATE_VARIABLE_InstNameArities_21_21 = hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0_3;
#line 145 "hlds_defns.m"
              }
#line 144 "hlds_defns.m"
            else
#line 142 "hlds_defns.m"
              {
#line 143 "hlds_defns.m"
                {
#line 143 "hlds_defns.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_defns", (MR_String) "predicate \140hlds.hlds_defns.gather_local_inst_names\'/4", (MR_String) "unqualified inst_id name");
#line 143 "hlds_defns.m"
                  return;
                }
#line 142 "hlds_defns.m"
              }
#line 152 "hlds_defns.m"
            /* direct tailcall eliminated */
#line 152 "hlds_defns.m"
            {
#line 152 "hlds_defns.m"
              MR_Word hlds__hlds_defns__HeadVar__2__tmp_copy_2 = hlds__hlds_defns__InstIds_11;
#line 152 "hlds_defns.m"
              MR_Word hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0__tmp_copy_3 = hlds__hlds_defns__STATE_VARIABLE_InstNameArities_21_21;

#line 152 "hlds_defns.m"
              hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0_3 = hlds__hlds_defns__STATE_VARIABLE_InstNameArities_0__tmp_copy_3;
#line 152 "hlds_defns.m"
              hlds__hlds_defns__HeadVar__2_2 = hlds__hlds_defns__HeadVar__2__tmp_copy_2;
#line 152 "hlds_defns.m"
            }
#line 152 "hlds_defns.m"
            continue;
#line 139 "hlds_defns.m"
          }
#line 138 "hlds_defns.m"
      }
#line 138 "hlds_defns.m"
      break;
#line 138 "hlds_defns.m"
    }
#line 135 "hlds_defns.m"
}

#line 111 "hlds_defns.m"
static void MR_CALL 
hlds__hlds_defns__gather_local_type_names_4_p_0(
#line 111 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleName_1,
#line 111 "hlds_defns.m"
  MR_Word hlds__hlds_defns__HeadVar__2_2,
#line 111 "hlds_defns.m"
  MR_Word hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0_3,
#line 111 "hlds_defns.m"
  MR_Word * hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_4)
#line 111 "hlds_defns.m"
{
#line 115 "hlds_defns.m"
  while (MR_TRUE)
#line 115 "hlds_defns.m"
    {
#line 115 "hlds_defns.m"
      /* tailcall optimized into a loop */
#line 115 "hlds_defns.m"
      {
#line 115 "hlds_defns.m"
        MR_bool hlds__hlds_defns__succeeded;

#line 115 "hlds_defns.m"
        if ((hlds__hlds_defns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 115 "hlds_defns.m"
          *hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_4 = hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0_3;
#line 115 "hlds_defns.m"
        else
#line 117 "hlds_defns.m"
          {
#line 117 "hlds_defns.m"
            MR_Word hlds__hlds_defns__TypeCtor_10;
#line 117 "hlds_defns.m"
            MR_Word hlds__hlds_defns__TypeCtorDefns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 1)));
#line 117 "hlds_defns.m"
            MR_Word hlds__hlds_defns__TypeCtorSymName_14;
#line 117 "hlds_defns.m"
            MR_Integer hlds__hlds_defns__TypeCtorArity_15;
#line 117 "hlds_defns.m"
            MR_Word hlds__hlds_defns__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__HeadVar__2_2, (MR_Integer) 0)));
#line 117 "hlds_defns.m"
            MR_Word hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_23_23;
#line 116 "hlds_defns.m"
            MR_Word hlds__hlds_defns___Defn_11;

#line 116 "hlds_defns.m"
            hlds__hlds_defns__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__V_21_21, (MR_Integer) 0)));
#line 116 "hlds_defns.m"
            hlds__hlds_defns___Defn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__V_21_21, (MR_Integer) 1)));
#line 118 "hlds_defns.m"
            hlds__hlds_defns__TypeCtorSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__TypeCtor_10, (MR_Integer) 0)));
#line 118 "hlds_defns.m"
            hlds__hlds_defns__TypeCtorArity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_defns__TypeCtor_10, (MR_Integer) 1)));
#line 122 "hlds_defns.m"
            if (((MR_tag((MR_Word) hlds__hlds_defns__TypeCtorSymName_14)) == (MR_mktag((MR_Integer) 1))))
#line 123 "hlds_defns.m"
              {
#line 123 "hlds_defns.m"
                MR_Word hlds__hlds_defns__TypeCtorModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__TypeCtorSymName_14, (MR_Integer) 0)));
#line 123 "hlds_defns.m"
                MR_String hlds__hlds_defns__TypeCtorName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_defns__TypeCtorSymName_14, (MR_Integer) 1)));

#line 124 "hlds_defns.m"
                {
#line 124 "hlds_defns.m"
                  hlds__hlds_defns__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_defns__TypeCtorModuleName_17, hlds__hlds_defns__ModuleName_1);
                }
#line 127 "hlds_defns.m"
                if (hlds__hlds_defns__succeeded)
#line 125 "hlds_defns.m"
                  {
#line 125 "hlds_defns.m"
                    MR_Word hlds__hlds_defns__V_22_22;

#line 125 "hlds_defns.m"
                    {
#line 125 "hlds_defns.m"
                      hlds__hlds_defns__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 125 "hlds_defns.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__V_22_22, 0) = ((MR_Box) (hlds__hlds_defns__TypeCtorName_18));
#line 125 "hlds_defns.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_defns__V_22_22, 1) = ((MR_Box) (hlds__hlds_defns__TypeCtorArity_15));
#line 125 "hlds_defns.m"
                    }
#line 125 "hlds_defns.m"
                    {
#line 125 "hlds_defns.m"
                      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0, ((MR_Box) (hlds__hlds_defns__V_22_22)), hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0_3, &hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_23_23);
                    }
#line 125 "hlds_defns.m"
                  }
#line 127 "hlds_defns.m"
                else
#line 127 "hlds_defns.m"
                  hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_23_23 = hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0_3;
#line 123 "hlds_defns.m"
              }
#line 122 "hlds_defns.m"
            else
#line 120 "hlds_defns.m"
              {
#line 121 "hlds_defns.m"
                {
#line 121 "hlds_defns.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_defns", (MR_String) "predicate \140hlds.hlds_defns.gather_local_type_names\'/4", (MR_String) "unqualified type_ctor name");
#line 121 "hlds_defns.m"
                  return;
                }
#line 120 "hlds_defns.m"
              }
#line 131 "hlds_defns.m"
            /* direct tailcall eliminated */
#line 131 "hlds_defns.m"
            {
#line 131 "hlds_defns.m"
              MR_Word hlds__hlds_defns__HeadVar__2__tmp_copy_2 = hlds__hlds_defns__TypeCtorDefns_12;
#line 131 "hlds_defns.m"
              MR_Word hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0__tmp_copy_3 = hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_23_23;

#line 131 "hlds_defns.m"
              hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0_3 = hlds__hlds_defns__STATE_VARIABLE_TypeNameArities_0__tmp_copy_3;
#line 131 "hlds_defns.m"
              hlds__hlds_defns__HeadVar__2_2 = hlds__hlds_defns__HeadVar__2__tmp_copy_2;
#line 131 "hlds_defns.m"
            }
#line 131 "hlds_defns.m"
            continue;
#line 117 "hlds_defns.m"
          }
#line 115 "hlds_defns.m"
      }
#line 115 "hlds_defns.m"
      break;
#line 115 "hlds_defns.m"
    }
#line 111 "hlds_defns.m"
}

#line 29 "hlds_defns.m"
void MR_CALL 
hlds__hlds_defns__write_hlds_defns_4_p_0(
#line 29 "hlds_defns.m"
  MR_Word hlds__hlds_defns__Stream_5,
#line 29 "hlds_defns.m"
  MR_Word hlds__hlds_defns__ModuleInfo_6)
#line 29 "hlds_defns.m"
{
#line 57 "hlds_defns.m"
  {
#line 57 "hlds_defns.m"
    MR_bool hlds__hlds_defns__succeeded;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__TypeCtorInfo_60_60;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__TypeCtorInfo_67_67;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__TypeCtorInfo_70_70;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__ModuleName_8;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__TypeTable_9;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__TypeCtorDefns_10;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__TypeNameArities_11;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__InstTable_12;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__UserInstTable_13;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__UserInstIds_14;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__InstNameArities_15;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__ModeTable_16;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__ModeDefnMap_17;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__ModeIds_18;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__ModeNameArities_19;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__Preds_20;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__PredDefns_21;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__FuncNameArities_22;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__PredNameArities_23;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__ClassTable_24;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__ClassIds_25;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__ClassNameArities_26;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__InstanceTable_27;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__InstanceDefns_28;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__InstanceDescs_29;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_32_32;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_33_33;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_34_34;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_35_35;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_36_36;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_37_37;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_38_38;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_40_40;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_43_43;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_46_46;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_49_49;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_52_52;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_55_55;
#line 57 "hlds_defns.m"
    MR_Word hlds__hlds_defns__V_58_58;

#line 58 "hlds_defns.m"
    {
#line 58 "hlds_defns.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__ModuleName_8);
    }
#line 60 "hlds_defns.m"
    {
#line 60 "hlds_defns.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__TypeTable_9);
    }
#line 61 "hlds_defns.m"
    {
#line 61 "hlds_defns.m"
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(hlds__hlds_defns__TypeTable_9, &hlds__hlds_defns__TypeCtorDefns_10);
    }
#line 1985 "hlds.hlds_defns.c"
    hlds__hlds_defns__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0;
#line 63 "hlds_defns.m"
    {
#line 63 "hlds_defns.m"
      hlds__hlds_defns__V_32_32 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_60_60);
    }
#line 62 "hlds_defns.m"
    {
#line 62 "hlds_defns.m"
      hlds__hlds_defns__gather_local_type_names_4_p_0(hlds__hlds_defns__ModuleName_8, hlds__hlds_defns__TypeCtorDefns_10, hlds__hlds_defns__V_32_32, &hlds__hlds_defns__TypeNameArities_11);
    }
#line 65 "hlds_defns.m"
    {
#line 65 "hlds_defns.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__InstTable_12);
    }
#line 66 "hlds_defns.m"
    {
#line 66 "hlds_defns.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(hlds__hlds_defns__InstTable_12, &hlds__hlds_defns__UserInstTable_13);
    }
#line 67 "hlds_defns.m"
    {
#line 67 "hlds_defns.m"
      mercury__map__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__hlds_defns__UserInstTable_13, &hlds__hlds_defns__UserInstIds_14);
    }
#line 69 "hlds_defns.m"
    {
#line 69 "hlds_defns.m"
      hlds__hlds_defns__V_33_33 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_60_60);
    }
#line 68 "hlds_defns.m"
    {
#line 68 "hlds_defns.m"
      hlds__hlds_defns__gather_local_inst_names_4_p_0(hlds__hlds_defns__ModuleName_8, hlds__hlds_defns__UserInstIds_14, hlds__hlds_defns__V_33_33, &hlds__hlds_defns__InstNameArities_15);
    }
#line 71 "hlds_defns.m"
    {
#line 71 "hlds_defns.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__ModeTable_16);
    }
#line 72 "hlds_defns.m"
    {
#line 72 "hlds_defns.m"
      hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__hlds_defns__ModeTable_16, &hlds__hlds_defns__ModeDefnMap_17);
    }
#line 73 "hlds_defns.m"
    {
#line 73 "hlds_defns.m"
      mercury__map__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, hlds__hlds_defns__ModeDefnMap_17, &hlds__hlds_defns__ModeIds_18);
    }
#line 75 "hlds_defns.m"
    {
#line 75 "hlds_defns.m"
      hlds__hlds_defns__V_34_34 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_60_60);
    }
#line 74 "hlds_defns.m"
    {
#line 74 "hlds_defns.m"
      hlds__hlds_defns__gather_local_mode_names_4_p_0(hlds__hlds_defns__ModuleName_8, hlds__hlds_defns__ModeIds_18, hlds__hlds_defns__V_34_34, &hlds__hlds_defns__ModeNameArities_19);
    }
#line 77 "hlds_defns.m"
    {
#line 77 "hlds_defns.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__Preds_20);
    }
#line 78 "hlds_defns.m"
    {
#line 78 "hlds_defns.m"
      mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__hlds_defns__Preds_20, &hlds__hlds_defns__PredDefns_21);
    }
#line 80 "hlds_defns.m"
    {
#line 80 "hlds_defns.m"
      hlds__hlds_defns__V_35_35 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_60_60);
    }
#line 80 "hlds_defns.m"
    {
#line 80 "hlds_defns.m"
      hlds__hlds_defns__V_36_36 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_60_60);
    }
#line 79 "hlds_defns.m"
    {
#line 79 "hlds_defns.m"
      hlds__hlds_defns__gather_local_pred_names_6_p_0(hlds__hlds_defns__ModuleName_8, hlds__hlds_defns__PredDefns_21, hlds__hlds_defns__V_35_35, &hlds__hlds_defns__FuncNameArities_22, hlds__hlds_defns__V_36_36, &hlds__hlds_defns__PredNameArities_23);
    }
#line 82 "hlds_defns.m"
    {
#line 82 "hlds_defns.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__ClassTable_24);
    }
#line 2077 "hlds.hlds_defns.c"
    hlds__hlds_defns__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 83 "hlds_defns.m"
    {
#line 83 "hlds_defns.m"
      mercury__map__keys_2_p_0(hlds__hlds_defns__TypeCtorInfo_67_67, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__hlds_defns__ClassTable_24, &hlds__hlds_defns__ClassIds_25);
    }
#line 85 "hlds_defns.m"
    {
#line 85 "hlds_defns.m"
      hlds__hlds_defns__V_37_37 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_60_60);
    }
#line 84 "hlds_defns.m"
    {
#line 84 "hlds_defns.m"
      hlds__hlds_defns__gather_local_typeclass_names_4_p_0(hlds__hlds_defns__ModuleName_8, hlds__hlds_defns__ClassIds_25, hlds__hlds_defns__V_37_37, &hlds__hlds_defns__ClassNameArities_26);
    }
#line 87 "hlds_defns.m"
    {
#line 87 "hlds_defns.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__hlds_defns__ModuleInfo_6, &hlds__hlds_defns__InstanceTable_27);
    }
#line 88 "hlds_defns.m"
    {
#line 88 "hlds_defns.m"
      mercury__map__to_sorted_assoc_list_2_p_0(hlds__hlds_defns__TypeCtorInfo_67_67, (MR_Word) &hlds__hlds_defns_scalar_common_1[0], hlds__hlds_defns__InstanceTable_27, &hlds__hlds_defns__InstanceDefns_28);
    }
#line 2104 "hlds.hlds_defns.c"
    hlds__hlds_defns__TypeCtorInfo_70_70 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 90 "hlds_defns.m"
    {
#line 90 "hlds_defns.m"
      hlds__hlds_defns__V_38_38 = mercury__set__init_0_f_0(hlds__hlds_defns__TypeCtorInfo_70_70);
    }
#line 89 "hlds_defns.m"
    {
#line 89 "hlds_defns.m"
      hlds__hlds_defns__gather_local_instance_names_4_p_0(hlds__hlds_defns__ModuleName_8, hlds__hlds_defns__InstanceDefns_28, hlds__hlds_defns__V_38_38, &hlds__hlds_defns__InstanceDescs_29);
    }
#line 95 "hlds_defns.m"
    {
#line 95 "hlds_defns.m"
      hlds__hlds_defns__V_40_40 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_60_60, hlds__hlds_defns__FuncNameArities_22);
    }
#line 94 "hlds_defns.m"
    {
#line 94 "hlds_defns.m"
      hlds__hlds_defns__output_prefixed_name_arities_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "func ", hlds__hlds_defns__V_40_40);
    }
#line 97 "hlds_defns.m"
    {
#line 97 "hlds_defns.m"
      hlds__hlds_defns__V_43_43 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_60_60, hlds__hlds_defns__InstNameArities_15);
    }
#line 96 "hlds_defns.m"
    {
#line 96 "hlds_defns.m"
      hlds__hlds_defns__output_prefixed_name_arities_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "inst ", hlds__hlds_defns__V_43_43);
    }
#line 99 "hlds_defns.m"
    {
#line 99 "hlds_defns.m"
      hlds__hlds_defns__V_46_46 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_70_70, hlds__hlds_defns__InstanceDescs_29);
    }
#line 98 "hlds_defns.m"
    {
#line 98 "hlds_defns.m"
      hlds__hlds_defns__output_prefixed_strings_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "instance ", hlds__hlds_defns__V_46_46);
    }
#line 101 "hlds_defns.m"
    {
#line 101 "hlds_defns.m"
      hlds__hlds_defns__V_49_49 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_60_60, hlds__hlds_defns__ModeNameArities_19);
    }
#line 100 "hlds_defns.m"
    {
#line 100 "hlds_defns.m"
      hlds__hlds_defns__output_prefixed_name_arities_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "mode ", hlds__hlds_defns__V_49_49);
    }
#line 103 "hlds_defns.m"
    {
#line 103 "hlds_defns.m"
      hlds__hlds_defns__V_52_52 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_60_60, hlds__hlds_defns__PredNameArities_23);
    }
#line 102 "hlds_defns.m"
    {
#line 102 "hlds_defns.m"
      hlds__hlds_defns__output_prefixed_name_arities_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "pred ", hlds__hlds_defns__V_52_52);
    }
#line 105 "hlds_defns.m"
    {
#line 105 "hlds_defns.m"
      hlds__hlds_defns__V_55_55 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_60_60, hlds__hlds_defns__TypeNameArities_11);
    }
#line 104 "hlds_defns.m"
    {
#line 104 "hlds_defns.m"
      hlds__hlds_defns__output_prefixed_name_arities_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "type ", hlds__hlds_defns__V_55_55);
    }
#line 107 "hlds_defns.m"
    {
#line 107 "hlds_defns.m"
      hlds__hlds_defns__V_58_58 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_defns__TypeCtorInfo_60_60, hlds__hlds_defns__ClassNameArities_26);
    }
#line 106 "hlds_defns.m"
    {
#line 106 "hlds_defns.m"
      hlds__hlds_defns__output_prefixed_name_arities_5_p_0(hlds__hlds_defns__Stream_5, (MR_String) "typeclass ", hlds__hlds_defns__V_58_58);
    }
#line 57 "hlds_defns.m"
  }
#line 29 "hlds_defns.m"
}

void mercury__hlds__hlds_defns__init(void)
{
}

void mercury__hlds__hlds_defns__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_defns__hlds__hlds_defns__type_ctor_info_name_arity_0);
}

void mercury__hlds__hlds_defns__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_defns. */
