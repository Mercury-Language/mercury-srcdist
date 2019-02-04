/*
** Automatically generated from `delay_construct.m'
** by the Mercury compiler,
** version rotd-2017-06-22
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__delay_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__delay_construct__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo transform_hlds__delay_construct__transform_hlds__delay_construct__field_types_delay_construct_info_0_0[4];

static const MR_ConstString transform_hlds__delay_construct__transform_hlds__delay_construct__field_names_delay_construct_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__delay_construct__transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__delay_construct__transform_hlds__delay_construct__du_stag_ordered_delay_construct_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__delay_construct__transform_hlds__delay_construct__du_ptag_ordered_delay_construct_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__delay_construct__transform_hlds__delay_construct__du_name_ordered_delay_construct_info_0[1];

static const MR_Integer transform_hlds__delay_construct__transform_hlds__delay_construct__functor_number_map_delay_construct_info_0[1];

static MR_bool MR_CALL 
transform_hlds__delay_construct____Unify____delay_construct_info_0_0_10001(
  MR_Box transform_hlds__delay_construct__wrapper_arg_1,
  MR_Box transform_hlds__delay_construct__wrapper_arg_2);

static void MR_CALL 
transform_hlds__delay_construct____Compare____delay_construct_info_0_0_10001(
  MR_Box * transform_hlds__delay_construct__wrapper_arg_1,
  MR_Box transform_hlds__delay_construct__wrapper_arg_2,
  MR_Box transform_hlds__delay_construct__wrapper_arg_3);

static void MR_CALL 
transform_hlds__delay_construct____Compare____delay_construct_info_0_0(
  MR_Word * transform_hlds__delay_construct__HeadVar__1_1,
  MR_Word transform_hlds__delay_construct__HeadVar__2_2,
  MR_Word transform_hlds__delay_construct__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__delay_construct____Unify____delay_construct_info_0_0(
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
  MR_Word transform_hlds__delay_construct__HeadVar__2_2);

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_cases_4_p_0(
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
  MR_Word transform_hlds__delay_construct__InstMap0_2,
  MR_Word transform_hlds__delay_construct__DelayInfo_3,
  MR_Word * transform_hlds__delay_construct__HeadVar__4_4);

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
  MR_Word transform_hlds__delay_construct__InstMap0_2,
  MR_Word transform_hlds__delay_construct__DelayInfo_3,
  MR_Word * transform_hlds__delay_construct__HeadVar__4_4);

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
  MR_Word transform_hlds__delay_construct__InstMap0_2,
  MR_Word transform_hlds__delay_construct__DelayInfo_3,
  MR_Word transform_hlds__delay_construct__ConstructedVars0_4,
  MR_Word transform_hlds__delay_construct__HeadVar__5_5,
  MR_Word * transform_hlds__delay_construct__HeadVar__6_6);

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(
  MR_Word transform_hlds__delay_construct__Goal0_5,
  MR_Word transform_hlds__delay_construct__InstMap0_6,
  MR_Word transform_hlds__delay_construct__DelayInfo_7,
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



static const MR_FA_TypeInfo_Struct1 transform_hlds__delay_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__delay_construct__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__delay_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__delay_construct__transform_hlds__delay_construct__field_types_delay_construct_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__delay_construct__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0
};

static const MR_ConstString transform_hlds__delay_construct__transform_hlds__delay_construct__field_names_delay_construct_info_0_0[4] = {
  (MR_String) "dci_module_info",
  (MR_String) "dci_body_typeinfo_liveness",
  (MR_String) "dci_vartypes",
  (MR_String) "dci_rtti_varmaps"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__delay_construct__transform_hlds__delay_construct__du_stag_ordered_delay_construct_info_0_0[1] = {
  &transform_hlds__delay_construct__transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0
};

static const MR_DuPtagLayout transform_hlds__delay_construct__transform_hlds__delay_construct__du_ptag_ordered_delay_construct_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__delay_construct__transform_hlds__delay_construct__du_stag_ordered_delay_construct_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__delay_construct__transform_hlds__delay_construct__du_name_ordered_delay_construct_info_0[1] = {
  &transform_hlds__delay_construct__transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0
};

static const MR_Integer transform_hlds__delay_construct__transform_hlds__delay_construct__functor_number_map_delay_construct_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__delay_construct__transform_hlds__delay_construct__type_ctor_info_delay_construct_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
transform_hlds__delay_construct____Unify____delay_construct_info_0_0_10001(
  MR_Box transform_hlds__delay_construct__wrapper_arg_1,
  MR_Box transform_hlds__delay_construct__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__delay_construct__succeeded;

    {
      transform_hlds__delay_construct__succeeded = transform_hlds__delay_construct____Unify____delay_construct_info_0_0(((MR_Word) transform_hlds__delay_construct__wrapper_arg_1), ((MR_Word) transform_hlds__delay_construct__wrapper_arg_2));
    }
    return transform_hlds__delay_construct__succeeded;
  }
}

static void MR_CALL 
transform_hlds__delay_construct____Compare____delay_construct_info_0_0_10001(
  MR_Box * transform_hlds__delay_construct__wrapper_arg_1,
  MR_Box transform_hlds__delay_construct__wrapper_arg_2,
  MR_Box transform_hlds__delay_construct__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__delay_construct__conv0_HeadVar__1_1;

    {
      transform_hlds__delay_construct____Compare____delay_construct_info_0_0(&transform_hlds__delay_construct__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__delay_construct__wrapper_arg_2), ((MR_Word) transform_hlds__delay_construct__wrapper_arg_3));
    }
    *transform_hlds__delay_construct__wrapper_arg_1 = ((MR_Box) (transform_hlds__delay_construct__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
transform_hlds__delay_construct____Compare____delay_construct_info_0_0(
  MR_Word * transform_hlds__delay_construct__HeadVar__1_1,
  MR_Word transform_hlds__delay_construct__HeadVar__2_2,
  MR_Word transform_hlds__delay_construct__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__delay_construct__succeeded;
    MR_Integer transform_hlds__delay_construct__CastX_15 = (MR_Integer) transform_hlds__delay_construct__HeadVar__2_2;
    MR_Integer transform_hlds__delay_construct__CastY_16 = (MR_Integer) transform_hlds__delay_construct__HeadVar__3_3;

    transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__CastX_15 == transform_hlds__delay_construct__CastY_16);
    if (transform_hlds__delay_construct__succeeded)
      *transform_hlds__delay_construct__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__delay_construct__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__delay_construct__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__delay_construct__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__delay_construct__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__delay_construct__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__delay_construct__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__delay_construct__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__delay_construct__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__delay_construct__Var_12;

        {
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__delay_construct__Var_12, transform_hlds__delay_construct__ArgX1_4, transform_hlds__delay_construct__ArgY1_5);
        }
        transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__Var_12 == (MR_Integer) 0);
        transform_hlds__delay_construct__succeeded = !(transform_hlds__delay_construct__succeeded);
        if (transform_hlds__delay_construct__succeeded)
          *transform_hlds__delay_construct__HeadVar__1_1 = transform_hlds__delay_construct__Var_12;
        else
          {
            MR_Word transform_hlds__delay_construct__Var_13;
            MR_Integer transform_hlds__delay_construct__Var_21 = (MR_Integer) transform_hlds__delay_construct__ArgX2_6;
            MR_Integer transform_hlds__delay_construct__Var_22 = (MR_Integer) transform_hlds__delay_construct__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__delay_construct__Var_13, transform_hlds__delay_construct__Var_21, transform_hlds__delay_construct__Var_22);
            }
            transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__Var_13 == (MR_Integer) 0);
            transform_hlds__delay_construct__succeeded = !(transform_hlds__delay_construct__succeeded);
            if (transform_hlds__delay_construct__succeeded)
              *transform_hlds__delay_construct__HeadVar__1_1 = transform_hlds__delay_construct__Var_13;
            else
              {
                MR_Word transform_hlds__delay_construct__Var_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__delay_construct_scalar_common_2[0], &transform_hlds__delay_construct__Var_14, ((MR_Box) (transform_hlds__delay_construct__ArgX3_8)), ((MR_Box) (transform_hlds__delay_construct__ArgY3_9)));
                }
                transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__Var_14 == (MR_Integer) 0);
                transform_hlds__delay_construct__succeeded = !(transform_hlds__delay_construct__succeeded);
                if (transform_hlds__delay_construct__succeeded)
                  *transform_hlds__delay_construct__HeadVar__1_1 = transform_hlds__delay_construct__Var_14;
                else
                  {
                    hlds__hlds_rtti____Compare____rtti_varmaps_0_0(transform_hlds__delay_construct__HeadVar__1_1, transform_hlds__delay_construct__ArgX4_10, transform_hlds__delay_construct__ArgY4_11);
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__delay_construct____Unify____delay_construct_info_0_0(
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
  MR_Word transform_hlds__delay_construct__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__delay_construct__succeeded;
    MR_Integer transform_hlds__delay_construct__CastX_11 = (MR_Integer) transform_hlds__delay_construct__HeadVar__1_1;
    MR_Integer transform_hlds__delay_construct__CastY_12 = (MR_Integer) transform_hlds__delay_construct__HeadVar__2_2;

    transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__CastX_11 == transform_hlds__delay_construct__CastY_12);
    if (transform_hlds__delay_construct__succeeded)
      transform_hlds__delay_construct__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__delay_construct__TypeInfo_14_14;
        MR_Word transform_hlds__delay_construct__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__delay_construct__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__delay_construct__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__delay_construct__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__delay_construct__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__delay_construct__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__delay_construct__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__delay_construct__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 3)));

        {
          transform_hlds__delay_construct__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__delay_construct__ArgX1_3, transform_hlds__delay_construct__ArgY1_4);
        }
        if (transform_hlds__delay_construct__succeeded)
          {
            transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__ArgX2_5 == transform_hlds__delay_construct__ArgY2_6);
            if (transform_hlds__delay_construct__succeeded)
              {
                transform_hlds__delay_construct__TypeInfo_14_14 = (MR_Word) &transform_hlds__delay_construct_scalar_common_2[0];
                {
                  transform_hlds__delay_construct__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__delay_construct__TypeInfo_14_14, ((MR_Box) (transform_hlds__delay_construct__ArgX3_7)), ((MR_Box) (transform_hlds__delay_construct__ArgY3_8)));
                }
                if (transform_hlds__delay_construct__succeeded)
                  {
                    transform_hlds__delay_construct__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__delay_construct__ArgX4_9, transform_hlds__delay_construct__ArgY4_10);
                  }
              }
          }
      }
    return transform_hlds__delay_construct__succeeded;
  }
}

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_cases_4_p_0(
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
  MR_Word transform_hlds__delay_construct__InstMap0_2,
  MR_Word transform_hlds__delay_construct__DelayInfo_3,
  MR_Word * transform_hlds__delay_construct__HeadVar__4_4)
{
  {
    MR_bool transform_hlds__delay_construct__succeeded;

    if ((transform_hlds__delay_construct__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__delay_construct__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__delay_construct__Case0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__delay_construct__Cases0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__delay_construct__Case_11;
        MR_Word transform_hlds__delay_construct__Cases_12;
        MR_Word transform_hlds__delay_construct__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Case0_7, (MR_Integer) 0)));
        MR_Word transform_hlds__delay_construct__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Case0_7, (MR_Integer) 1)));
        MR_Word transform_hlds__delay_construct__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Case0_7, (MR_Integer) 2)));
        MR_Word transform_hlds__delay_construct__Goal_16;

        {
          transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__Goal0_15, transform_hlds__delay_construct__InstMap0_2, transform_hlds__delay_construct__DelayInfo_3, &transform_hlds__delay_construct__Goal_16);
        }
        {
          transform_hlds__delay_construct__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Case_11, 0) = ((MR_Box) (transform_hlds__delay_construct__MainConsId_13));
          MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Case_11, 1) = ((MR_Box) (transform_hlds__delay_construct__OtherConsIds_14));
          MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Case_11, 2) = ((MR_Box) (transform_hlds__delay_construct__Goal_16));
        }
        {
          transform_hlds__delay_construct__delay_construct_in_cases_4_p_0(transform_hlds__delay_construct__Cases0_8, transform_hlds__delay_construct__InstMap0_2, transform_hlds__delay_construct__DelayInfo_3, &transform_hlds__delay_construct__Cases_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__delay_construct__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__delay_construct__Case_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__delay_construct__Cases_12));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
  MR_Word transform_hlds__delay_construct__InstMap0_2,
  MR_Word transform_hlds__delay_construct__DelayInfo_3,
  MR_Word * transform_hlds__delay_construct__HeadVar__4_4)
{
  {
    MR_bool transform_hlds__delay_construct__succeeded;

    if ((transform_hlds__delay_construct__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__delay_construct__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__delay_construct__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__delay_construct__Goals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__delay_construct__Goal_11;
        MR_Word transform_hlds__delay_construct__Goals_12;

        {
          transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__Goal0_7, transform_hlds__delay_construct__InstMap0_2, transform_hlds__delay_construct__DelayInfo_3, &transform_hlds__delay_construct__Goal_11);
        }
        {
          transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(transform_hlds__delay_construct__Goals0_8, transform_hlds__delay_construct__InstMap0_2, transform_hlds__delay_construct__DelayInfo_3, &transform_hlds__delay_construct__Goals_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__delay_construct__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__delay_construct__Goal_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__delay_construct__Goals_12));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(
  MR_Word transform_hlds__delay_construct__HeadVar__1_1,
  MR_Word transform_hlds__delay_construct__InstMap0_2,
  MR_Word transform_hlds__delay_construct__DelayInfo_3,
  MR_Word transform_hlds__delay_construct__ConstructedVars0_4,
  MR_Word transform_hlds__delay_construct__HeadVar__5_5,
  MR_Word * transform_hlds__delay_construct__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__delay_construct__succeeded;

        if ((transform_hlds__delay_construct__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__delay_construct__HeadVar__5_5, transform_hlds__delay_construct__HeadVar__6_6);
            }
          }
        else
          {
            MR_Word transform_hlds__delay_construct__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__delay_construct__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__delay_construct__GoalExpr0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Goal0_12, (MR_Integer) 0)));
            MR_Word transform_hlds__delay_construct__GoalInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Goal0_12, (MR_Integer) 1)));
            MR_Word transform_hlds__delay_construct__InstMapDelta0_21;
            MR_Word transform_hlds__delay_construct__InstMap1_22;
            MR_Word transform_hlds__delay_construct__Var_28;
            MR_Word transform_hlds__delay_construct__Unif_26;
            MR_Word transform_hlds__delay_construct__Args_30;
            MR_Word transform_hlds__delay_construct__Inst0_37;
            MR_Word transform_hlds__delay_construct__Inst1_38;
            MR_Word transform_hlds__delay_construct__Var_46;
            MR_Word transform_hlds__delay_construct__Var_47;
            MR_Word transform_hlds__delay_construct__Var_23;
            MR_Word transform_hlds__delay_construct__Var_24;
            MR_Word transform_hlds__delay_construct__Var_25;
            MR_Word transform_hlds__delay_construct__Var_27;
            MR_Word transform_hlds__delay_construct__Var_29;
            MR_Word transform_hlds__delay_construct__Var_31;
            MR_Word transform_hlds__delay_construct__Var_32;
            MR_Word transform_hlds__delay_construct__Var_33;
            MR_Word transform_hlds__delay_construct__Var_34;
            MR_Word transform_hlds__delay_construct__Var_35;
            MR_Word transform_hlds__delay_construct__Var_36;
            MR_Word transform_hlds__delay_construct__Var_57;
            MR_Word transform_hlds__delay_construct__Var_58;
            MR_Word transform_hlds__delay_construct__Var_59;
            MR_Word transform_hlds__delay_construct__Var_60;
            MR_Word transform_hlds__delay_construct__Var_61;
            MR_Word transform_hlds__delay_construct__Var_62;

            {
              transform_hlds__delay_construct__InstMapDelta0_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__delay_construct__GoalInfo0_20);
            }
            {
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__delay_construct__InstMap0_2, transform_hlds__delay_construct__InstMapDelta0_21, &transform_hlds__delay_construct__InstMap1_22);
            }
            transform_hlds__delay_construct__succeeded = ((MR_tag((MR_Word) transform_hlds__delay_construct__GoalExpr0_19)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__delay_construct__succeeded)
              {
                transform_hlds__delay_construct__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 0)));
                transform_hlds__delay_construct__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 1)));
                transform_hlds__delay_construct__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 2)));
                transform_hlds__delay_construct__Unif_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 3)));
                transform_hlds__delay_construct__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 4)));
                transform_hlds__delay_construct__succeeded = ((MR_tag((MR_Word) transform_hlds__delay_construct__Unif_26)) == (MR_mktag((MR_Integer) 0)));
                if (transform_hlds__delay_construct__succeeded)
                  {
                    transform_hlds__delay_construct__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 0)));
                    transform_hlds__delay_construct__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 1)));
                    transform_hlds__delay_construct__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 2)));
                    transform_hlds__delay_construct__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 3)));
                    transform_hlds__delay_construct__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 4)));
                    transform_hlds__delay_construct__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 5)));
                    transform_hlds__delay_construct__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Unif_26, (MR_Integer) 6)));
                    transform_hlds__delay_construct__succeeded = ((MR_tag((MR_Word) transform_hlds__delay_construct__Args_30)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__delay_construct__succeeded)
                      {
                        transform_hlds__delay_construct__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__Args_30, (MR_Integer) 0)));
                        transform_hlds__delay_construct__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__Args_30, (MR_Integer) 1)));
                        {
                          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__delay_construct__InstMap0_2, transform_hlds__delay_construct__Var_28, &transform_hlds__delay_construct__Inst0_37);
                        }
                        transform_hlds__delay_construct__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 0)));
                        transform_hlds__delay_construct__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 1)));
                        transform_hlds__delay_construct__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 2)));
                        transform_hlds__delay_construct__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 3)));
                        {
                          transform_hlds__delay_construct__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__delay_construct__Var_46, transform_hlds__delay_construct__Inst0_37);
                        }
                        if (transform_hlds__delay_construct__succeeded)
                          {
                            {
                              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__delay_construct__InstMap1_22, transform_hlds__delay_construct__Var_28, &transform_hlds__delay_construct__Inst1_38);
                            }
                            transform_hlds__delay_construct__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 0)));
                            transform_hlds__delay_construct__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 1)));
                            transform_hlds__delay_construct__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 2)));
                            transform_hlds__delay_construct__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 3)));
                            {
                              transform_hlds__delay_construct__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(transform_hlds__delay_construct__Var_47, transform_hlds__delay_construct__Inst1_38);
                            }
                          }
                      }
                  }
              }
            if (transform_hlds__delay_construct__succeeded)
              {
                MR_Word transform_hlds__delay_construct__ConstructedVars1_39;
                MR_Word transform_hlds__delay_construct__RevDelayedGoals1_40;

                {
                  mercury__set__insert_3_p_0((MR_Word) &transform_hlds__delay_construct_scalar_common_1[0], ((MR_Box) (transform_hlds__delay_construct__Var_28)), transform_hlds__delay_construct__ConstructedVars0_4, &transform_hlds__delay_construct__ConstructedVars1_39);
                }
                {
                  transform_hlds__delay_construct__RevDelayedGoals1_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__RevDelayedGoals1_40, 0) = ((MR_Box) (transform_hlds__delay_construct__Goal0_12));
                  MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__RevDelayedGoals1_40, 1) = ((MR_Box) (transform_hlds__delay_construct__HeadVar__5_5));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__delay_construct__next_value_of_HeadVar__1_1 = transform_hlds__delay_construct__Goals0_13;
                  MR_Word transform_hlds__delay_construct__next_value_of_InstMap0_2 = transform_hlds__delay_construct__InstMap1_22;
                  MR_Word transform_hlds__delay_construct__next_value_of_ConstructedVars0_4 = transform_hlds__delay_construct__ConstructedVars1_39;
                  MR_Word transform_hlds__delay_construct__next_value_of_HeadVar__5_5 = transform_hlds__delay_construct__RevDelayedGoals1_40;

                  transform_hlds__delay_construct__HeadVar__5_5 = transform_hlds__delay_construct__next_value_of_HeadVar__5_5;
                  transform_hlds__delay_construct__ConstructedVars0_4 = transform_hlds__delay_construct__next_value_of_ConstructedVars0_4;
                  transform_hlds__delay_construct__InstMap0_2 = transform_hlds__delay_construct__next_value_of_InstMap0_2;
                  transform_hlds__delay_construct__HeadVar__1_1 = transform_hlds__delay_construct__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            else
              {
                MR_Word transform_hlds__delay_construct__TypeCtorInfo_74_74;
                MR_Word transform_hlds__delay_construct__NonLocals_41;
                MR_Word transform_hlds__delay_construct__CompletedNonLocals_42;
                MR_Word transform_hlds__delay_construct__Intersection_43;
                MR_Word transform_hlds__delay_construct__Var_48;
                MR_Word transform_hlds__delay_construct__Var_51;
                MR_Word transform_hlds__delay_construct__Var_52;
                MR_Word transform_hlds__delay_construct__Var_64;
                MR_Word transform_hlds__delay_construct__Var_65;
                MR_Word transform_hlds__delay_construct__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Goal0_12, (MR_Integer) 0)));
                MR_Word transform_hlds__delay_construct__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Goal0_12, (MR_Integer) 1)));
                MR_Word transform_hlds__delay_construct__Detism_93;
                MR_Word transform_hlds__delay_construct__MaxSoln_95;
                MR_Word transform_hlds__delay_construct___CanFail_94;
                MR_Word transform_hlds__delay_construct__Var_63;

                {
                  transform_hlds__delay_construct__succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(transform_hlds__delay_construct__GoalExpr0_19, transform_hlds__delay_construct__Var_77);
                }
                if (transform_hlds__delay_construct__succeeded)
                  {
                    {
                      transform_hlds__delay_construct__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(transform_hlds__delay_construct__GoalInfo0_20, transform_hlds__delay_construct__Var_78);
                    }
                    if (transform_hlds__delay_construct__succeeded)
                      {
                        if (((MR_tag((MR_Word) transform_hlds__delay_construct__GoalExpr0_19)) == (MR_mktag((MR_Integer) 2))))
                          {
                            MR_Word transform_hlds__delay_construct__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 3)));
                            MR_Word transform_hlds__delay_construct__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 0)));
                            MR_Integer transform_hlds__delay_construct__Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 1)));
                            MR_Word transform_hlds__delay_construct__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 2)));
                            MR_Word transform_hlds__delay_construct__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 4)));
                            MR_Word transform_hlds__delay_construct__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__delay_construct__GoalExpr0_19, (MR_Integer) 5)));

                            transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__Var_96 == (MR_Integer) 0);
                          }
                        else
                        if (((MR_tag((MR_Word) transform_hlds__delay_construct__GoalExpr0_19)) == (MR_mktag((MR_Integer) 1))))
                          transform_hlds__delay_construct__succeeded = MR_TRUE;
                        else
                          transform_hlds__delay_construct__succeeded = MR_FALSE;
                        if (transform_hlds__delay_construct__succeeded)
                          {
                            {
                              transform_hlds__delay_construct__Detism_93 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__delay_construct__GoalInfo0_20);
                            }
                            {
                              parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__delay_construct__Detism_93, &transform_hlds__delay_construct___CanFail_94, &transform_hlds__delay_construct__MaxSoln_95);
                            }
                            transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__MaxSoln_95 == (MR_Integer) 3);
                            transform_hlds__delay_construct__succeeded = !(transform_hlds__delay_construct__succeeded);
                            if (transform_hlds__delay_construct__succeeded)
                              {
                                {
                                  transform_hlds__delay_construct__NonLocals_41 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__delay_construct__GoalInfo0_20);
                                }
                                transform_hlds__delay_construct__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 0)));
                                transform_hlds__delay_construct__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 1)));
                                transform_hlds__delay_construct__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 2)));
                                transform_hlds__delay_construct__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_3, (MR_Integer) 3)));
                                {
                                  hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(transform_hlds__delay_construct__NonLocals_41, transform_hlds__delay_construct__Var_48, transform_hlds__delay_construct__Var_64, transform_hlds__delay_construct__Var_65, &transform_hlds__delay_construct__CompletedNonLocals_42);
                                }
                                transform_hlds__delay_construct__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                {
                                  transform_hlds__delay_construct__Var_51 = parse_tree__set_of_var__set_to_bitset_1_f_0(transform_hlds__delay_construct__TypeCtorInfo_74_74, transform_hlds__delay_construct__ConstructedVars0_4);
                                }
                                {
                                  parse_tree__set_of_var__intersect_3_p_0(transform_hlds__delay_construct__TypeCtorInfo_74_74, transform_hlds__delay_construct__CompletedNonLocals_42, transform_hlds__delay_construct__Var_51, &transform_hlds__delay_construct__Intersection_43);
                                }
                                {
                                  transform_hlds__delay_construct__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__delay_construct__TypeCtorInfo_74_74, transform_hlds__delay_construct__Intersection_43);
                                }
                                if (transform_hlds__delay_construct__succeeded)
                                  {
                                    {
                                      transform_hlds__delay_construct__Var_52 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__delay_construct__GoalInfo0_20);
                                    }
                                    transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__Var_52 == (MR_Integer) 0);
                                  }
                              }
                          }
                      }
                  }
                if (transform_hlds__delay_construct__succeeded)
                  {
                    MR_Word transform_hlds__delay_construct__Goals1_44;

                    {
                      transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(transform_hlds__delay_construct__Goals0_13, transform_hlds__delay_construct__InstMap1_22, transform_hlds__delay_construct__DelayInfo_3, transform_hlds__delay_construct__ConstructedVars0_4, transform_hlds__delay_construct__HeadVar__5_5, &transform_hlds__delay_construct__Goals1_44);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__delay_construct__HeadVar__6_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__delay_construct__Goal0_12));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__delay_construct__Goals1_44));
                    }
                  }
                else
                  {
                    MR_Word transform_hlds__delay_construct__TypeCtorInfo_75_75 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    MR_Word transform_hlds__delay_construct__DelayedGoals_45;
                    MR_Word transform_hlds__delay_construct__Var_53;
                    MR_Word transform_hlds__delay_construct__Var_55;
                    MR_Word transform_hlds__delay_construct__Goals1_56;

                    {
                      mercury__list__reverse_2_p_0(transform_hlds__delay_construct__TypeCtorInfo_75_75, transform_hlds__delay_construct__HeadVar__5_5, &transform_hlds__delay_construct__DelayedGoals_45);
                    }
                    {
                      transform_hlds__delay_construct__Var_53 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__delay_construct_scalar_common_1[0]);
                    }
                    {
                      transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(transform_hlds__delay_construct__Goals0_13, transform_hlds__delay_construct__InstMap1_22, transform_hlds__delay_construct__DelayInfo_3, transform_hlds__delay_construct__Var_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__delay_construct__Goals1_56);
                    }
                    {
                      transform_hlds__delay_construct__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__Var_55, 0) = ((MR_Box) (transform_hlds__delay_construct__Goal0_12));
                      MR_hl_field(MR_mktag(1), transform_hlds__delay_construct__Var_55, 1) = ((MR_Box) (transform_hlds__delay_construct__Goals1_56));
                    }
                    {
                      mercury__list__append_3_p_1(transform_hlds__delay_construct__TypeCtorInfo_75_75, transform_hlds__delay_construct__DelayedGoals_45, transform_hlds__delay_construct__Var_55, transform_hlds__delay_construct__HeadVar__6_6);
                    }
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(
  MR_Word transform_hlds__delay_construct__Goal0_5,
  MR_Word transform_hlds__delay_construct__InstMap0_6,
  MR_Word transform_hlds__delay_construct__DelayInfo_7,
  MR_Word * transform_hlds__delay_construct__Goal_8)
{
  {
    MR_bool transform_hlds__delay_construct__succeeded;
    MR_Word transform_hlds__delay_construct__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Goal0_5, (MR_Integer) 0)));
    MR_Word transform_hlds__delay_construct__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Goal0_5, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__delay_construct__GoalExpr0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__delay_construct__NegGoal0_18 = (MR_Word) MR_body(((MR_Word) transform_hlds__delay_construct__GoalExpr0_9), (MR_Integer) 0);
          MR_Word transform_hlds__delay_construct__NegGoal_19;
          MR_Word transform_hlds__delay_construct__Var_69;

          {
            transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__NegGoal0_18, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__NegGoal_19);
          }
          transform_hlds__delay_construct__Var_69 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__delay_construct__NegGoal_19);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__delay_construct__Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__delay_construct__Var_69));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__delay_construct__GoalInfo0_10));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *transform_hlds__delay_construct__Goal_8 = transform_hlds__delay_construct__Goal0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *transform_hlds__delay_construct__Goal_8 = transform_hlds__delay_construct__Goal0_5;
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__delay_construct__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word transform_hlds__delay_construct__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word transform_hlds__delay_construct__Goals1_16;
              MR_Word transform_hlds__delay_construct__Goals_17;
              MR_Word transform_hlds__delay_construct__Var_73;

              switch (transform_hlds__delay_construct__ConjType_11) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  transform_hlds__delay_construct__Goals1_16 = transform_hlds__delay_construct__Goals0_12;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__delay_construct__Detism_13;
                    MR_Word transform_hlds__delay_construct__CanFail_14;
                    MR_Word transform_hlds__delay_construct__MaxSoln_15;

                    {
                      transform_hlds__delay_construct__Detism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__delay_construct__GoalInfo0_10);
                    }
                    {
                      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__delay_construct__Detism_13, &transform_hlds__delay_construct__CanFail_14, &transform_hlds__delay_construct__MaxSoln_15);
                    }
                    transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__CanFail_14 == (MR_Integer) 0);
                    if (transform_hlds__delay_construct__succeeded)
                      {
                        transform_hlds__delay_construct__succeeded = (transform_hlds__delay_construct__MaxSoln_15 == (MR_Integer) 0);
                        transform_hlds__delay_construct__succeeded = !(transform_hlds__delay_construct__succeeded);
                      }
                    if (transform_hlds__delay_construct__succeeded)
                      {
                        MR_Word transform_hlds__delay_construct__Var_71;

                        {
                          transform_hlds__delay_construct__Var_71 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__delay_construct_scalar_common_1[0]);
                        }
                        {
                          transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(transform_hlds__delay_construct__Goals0_12, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, transform_hlds__delay_construct__Var_71, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__delay_construct__Goals1_16);
                        }
                      }
                    else
                      transform_hlds__delay_construct__Goals1_16 = transform_hlds__delay_construct__Goals0_12;
                  }
                  break;
              }
              {
                transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(transform_hlds__delay_construct__Goals1_16, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__Goals_17);
              }
              {
                transform_hlds__delay_construct__Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_73, 1) = ((MR_Box) (transform_hlds__delay_construct__ConjType_11));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_73, 2) = ((MR_Box) (transform_hlds__delay_construct__Goals_17));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__delay_construct__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__delay_construct__Var_73));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__delay_construct__GoalInfo0_10));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__delay_construct__Var_70;
              MR_Word transform_hlds__delay_construct__Goals0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word transform_hlds__delay_construct__Goals_75;

              {
                transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(transform_hlds__delay_construct__Goals0_74, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__Goals_75);
              }
              {
                transform_hlds__delay_construct__Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_70, 1) = ((MR_Box) (transform_hlds__delay_construct__Goals_75));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__delay_construct__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__delay_construct__Var_70));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__delay_construct__GoalInfo0_10));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__delay_construct__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word transform_hlds__delay_construct__Cases0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 3)));
              MR_Word transform_hlds__delay_construct__Cases_22;
              MR_Word transform_hlds__delay_construct__Var_68;
              MR_Word transform_hlds__delay_construct__CanFail_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 2)));

              {
                transform_hlds__delay_construct__delay_construct_in_cases_4_p_0(transform_hlds__delay_construct__Cases0_21, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__Cases_22);
              }
              {
                transform_hlds__delay_construct__Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_68, 1) = ((MR_Box) (transform_hlds__delay_construct__Var_20));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_68, 2) = ((MR_Box) (transform_hlds__delay_construct__CanFail_76));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_68, 3) = ((MR_Box) (transform_hlds__delay_construct__Cases_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__delay_construct__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__delay_construct__Var_68));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__delay_construct__GoalInfo0_10));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__delay_construct__Reason_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word transform_hlds__delay_construct__SubGoal0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word transform_hlds__delay_construct__FGT_37;
              MR_Word transform_hlds__delay_construct__Var_36;

              transform_hlds__delay_construct__succeeded = ((((MR_tag((MR_Word) transform_hlds__delay_construct__Reason_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Reason_34, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (transform_hlds__delay_construct__succeeded)
                {
                  transform_hlds__delay_construct__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Reason_34, (MR_Integer) 1)));
                  transform_hlds__delay_construct__FGT_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Reason_34, (MR_Integer) 2)));
                  switch (transform_hlds__delay_construct__FGT_37) {
                    default:
                      transform_hlds__delay_construct__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      transform_hlds__delay_construct__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      transform_hlds__delay_construct__succeeded = MR_TRUE;
                      break;
                  }
                }
              if (transform_hlds__delay_construct__succeeded)
                *transform_hlds__delay_construct__Goal_8 = transform_hlds__delay_construct__Goal0_5;
              else
                {
                  MR_Word transform_hlds__delay_construct__SubGoal_38;
                  MR_Word transform_hlds__delay_construct__Var_66;

                  {
                    transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__SubGoal0_35, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__SubGoal_38);
                  }
                  {
                    transform_hlds__delay_construct__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_66, 1) = ((MR_Box) (transform_hlds__delay_construct__Reason_34));
                    MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_66, 2) = ((MR_Box) (transform_hlds__delay_construct__SubGoal_38));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *transform_hlds__delay_construct__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__delay_construct__Var_66));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__delay_construct__GoalInfo0_10));
                  }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__delay_construct__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 1)));
              MR_Word transform_hlds__delay_construct__Cond0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 2)));
              MR_Word transform_hlds__delay_construct__Then0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 3)));
              MR_Word transform_hlds__delay_construct__Else0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__GoalExpr0_9, (MR_Integer) 4)));
              MR_Word transform_hlds__delay_construct__CondInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Cond0_24, (MR_Integer) 1)));
              MR_Word transform_hlds__delay_construct__CondInstMapDelta_29;
              MR_Word transform_hlds__delay_construct__InstMapThen_30;
              MR_Word transform_hlds__delay_construct__Cond_31;
              MR_Word transform_hlds__delay_construct__Then_32;
              MR_Word transform_hlds__delay_construct__Else_33;
              MR_Word transform_hlds__delay_construct__Var_67;
              MR_Word transform_hlds__delay_construct__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__Cond0_24, (MR_Integer) 0)));

              {
                transform_hlds__delay_construct__CondInstMapDelta_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__delay_construct__CondInfo0_28);
              }
              {
                hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__CondInstMapDelta_29, &transform_hlds__delay_construct__InstMapThen_30);
              }
              {
                transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__Cond0_24, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__Cond_31);
              }
              {
                transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__Then0_25, transform_hlds__delay_construct__InstMapThen_30, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__Then_32);
              }
              {
                transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__Else0_26, transform_hlds__delay_construct__InstMap0_6, transform_hlds__delay_construct__DelayInfo_7, &transform_hlds__delay_construct__Else_33);
              }
              {
                transform_hlds__delay_construct__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_67, 1) = ((MR_Box) (transform_hlds__delay_construct__Vars_23));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_67, 2) = ((MR_Box) (transform_hlds__delay_construct__Cond_31));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_67, 3) = ((MR_Box) (transform_hlds__delay_construct__Then_32));
                MR_hl_field(MR_mktag(3), transform_hlds__delay_construct__Var_67, 4) = ((MR_Box) (transform_hlds__delay_construct__Else_33));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__delay_construct__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__delay_construct__Var_67));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__delay_construct__GoalInfo0_10));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.delay_construct", (MR_String) "predicate \140transform_hlds.delay_construct.delay_construct_in_goal\'/4", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__delay_construct__delay_construct_proc_4_p_0(
  MR_Word transform_hlds__delay_construct__ModuleInfo_5,
  MR_Word transform_hlds__delay_construct__HeadVar__2_2,
  MR_Word transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_0_19,
  MR_Word * transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_20)
{
  {
    MR_bool transform_hlds__delay_construct__succeeded;
    MR_Word transform_hlds__delay_construct__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer transform_hlds__delay_construct__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word transform_hlds__delay_construct__Globals_10;
    MR_Word transform_hlds__delay_construct__PredInfo_11;
    MR_Word transform_hlds__delay_construct__BodyTypeinfoLiveness_12;
    MR_Word transform_hlds__delay_construct__VarTypes_13;
    MR_Word transform_hlds__delay_construct__RttiVarMaps_14;
    MR_Word transform_hlds__delay_construct__InstMap0_15;
    MR_Word transform_hlds__delay_construct__DelayInfo_16;
    MR_Word transform_hlds__delay_construct__Goal0_17;
    MR_Word transform_hlds__delay_construct__Goal_18;

    {
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Delaying construction unifications in ", transform_hlds__delay_construct__PredId_6, transform_hlds__delay_construct__ProcId_7, transform_hlds__delay_construct__ModuleInfo_5);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__delay_construct__ModuleInfo_5, &transform_hlds__delay_construct__Globals_10);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__delay_construct__ModuleInfo_5, transform_hlds__delay_construct__PredId_6, &transform_hlds__delay_construct__PredInfo_11);
    }
    {
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(transform_hlds__delay_construct__PredInfo_11, transform_hlds__delay_construct__Globals_10, &transform_hlds__delay_construct__BodyTypeinfoLiveness_12);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__delay_construct__VarTypes_13);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__delay_construct__RttiVarMaps_14);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_0_19, transform_hlds__delay_construct__ModuleInfo_5, &transform_hlds__delay_construct__InstMap0_15);
    }
    {
      transform_hlds__delay_construct__DelayInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_16, 0) = ((MR_Box) (transform_hlds__delay_construct__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_16, 1) = ((MR_Box) (transform_hlds__delay_construct__BodyTypeinfoLiveness_12));
      MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_16, 2) = ((MR_Box) (transform_hlds__delay_construct__VarTypes_13));
      MR_hl_field(MR_mktag(0), transform_hlds__delay_construct__DelayInfo_16, 3) = ((MR_Box) (transform_hlds__delay_construct__RttiVarMaps_14));
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_0_19, &transform_hlds__delay_construct__Goal0_17);
    }
    {
      transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(transform_hlds__delay_construct__Goal0_17, transform_hlds__delay_construct__InstMap0_15, transform_hlds__delay_construct__DelayInfo_16, &transform_hlds__delay_construct__Goal_18);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__delay_construct__Goal_18, transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_0_19, transform_hlds__delay_construct__STATE_VARIABLE_ProcInfo_20);
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__delay_construct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.delay_construct. */
