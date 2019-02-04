/*
** Automatically generated from `special_pred.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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
#include "hlds.hlds_dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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



struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s {
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6;
  MR_bool hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded;
  jmp_buf hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0;
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13;
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14;
  MR_Box hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13;
};


static const MR_FA_TypeInfo_Struct2 hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo hlds__special_pred__hlds__special_pred__field_types_special_pred_maps_0_0[3];

static const MR_ConstString hlds__special_pred__hlds__special_pred__field_names_special_pred_maps_0_0[3];

static const MR_DuFunctorDesc hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0;

static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0[1];

static const MR_DuPtagLayout hlds__special_pred__hlds__special_pred__du_ptag_ordered_special_pred_maps_0[1];

static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_name_ordered_special_pred_maps_0[1];

static const MR_Integer hlds__special_pred__hlds__special_pred__functor_number_map_special_pred_maps_0[1];

static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0_10001(
  MR_Box hlds__special_pred__wrapper_arg_1,
  MR_Box hlds__special_pred__wrapper_arg_2);

static void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0_10001(
  MR_Box * hlds__special_pred__wrapper_arg_1,
  MR_Box hlds__special_pred__wrapper_arg_2,
  MR_Box hlds__special_pred__wrapper_arg_3);

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(
  void * hlds__special_pred__env_ptr_arg);

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3(
  void * hlds__special_pred__env_ptr_arg);

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(
  void * hlds__special_pred__env_ptr_arg);

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(
  void * hlds__special_pred__env_ptr_arg);


static /* final */ const MR_Box hlds__special_pred_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__special_pred_scalar_common_2[1][3];




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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_PseudoTypeInfo hlds__special_pred__hlds__special_pred__field_types_special_pred_maps_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0
};

static const MR_ConstString hlds__special_pred__hlds__special_pred__field_names_special_pred_maps_0_0[3] = {
  (MR_String) "spm_unify_map",
  (MR_String) "spm_index_map",
  (MR_String) "spm_compare_map"
};

static const MR_DuFunctorDesc hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0 = {
  (MR_String) "special_pred_maps",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__special_pred__hlds__special_pred__field_types_special_pred_maps_0_0,
  hlds__special_pred__hlds__special_pred__field_names_special_pred_maps_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0[1] = {
  &hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0
};

static const MR_DuPtagLayout hlds__special_pred__hlds__special_pred__du_ptag_ordered_special_pred_maps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_name_ordered_special_pred_maps_0[1] = {
  &hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0
};

static const MR_Integer hlds__special_pred__hlds__special_pred__functor_number_map_special_pred_maps_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_maps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0_10001(
  MR_Box hlds__special_pred__wrapper_arg_1,
  MR_Box hlds__special_pred__wrapper_arg_2)
{
  {
    MR_bool hlds__special_pred__succeeded;

    {
      hlds__special_pred__succeeded = hlds__special_pred____Unify____special_pred_maps_0_0(((MR_Word) hlds__special_pred__wrapper_arg_1), ((MR_Word) hlds__special_pred__wrapper_arg_2));
    }
    return hlds__special_pred__succeeded;
  }
}

static void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0_10001(
  MR_Box * hlds__special_pred__wrapper_arg_1,
  MR_Box hlds__special_pred__wrapper_arg_2,
  MR_Box hlds__special_pred__wrapper_arg_3)
{
  {
    MR_Word hlds__special_pred__conv0_HeadVar__1_1;

    {
      hlds__special_pred____Compare____special_pred_maps_0_0(&hlds__special_pred__conv0_HeadVar__1_1, ((MR_Word) hlds__special_pred__wrapper_arg_2), ((MR_Word) hlds__special_pred__wrapper_arg_3));
    }
    *hlds__special_pred__wrapper_arg_1 = ((MR_Box) (hlds__special_pred__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_p_0(
  MR_Integer * hlds__special_pred__HeadVar__2_2)
{
  {
    MR_bool hlds__special_pred__succeeded;

    *hlds__special_pred__HeadVar__2_2 = (MR_Integer) 0;
  }
}

MR_String MR_CALL 
hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_f_0(
  MR_Word hlds__special_pred__SpecialPred_4)
{
  {
    MR_bool hlds__special_pred__succeeded;
    MR_String hlds__special_pred__Name_7;

    {
      hlds__special_pred__Name_7 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(hlds__special_pred__SpecialPred_4);
    }
    return hlds__special_pred__Name_7;
  }
}

void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0(
  MR_Word * hlds__special_pred__HeadVar__1_1,
  MR_Word hlds__special_pred__HeadVar__2_2,
  MR_Word hlds__special_pred__HeadVar__3_3)
{
  {
    MR_bool hlds__special_pred__succeeded;
    MR_Integer hlds__special_pred__CastX_12 = (MR_Integer) hlds__special_pred__HeadVar__2_2;
    MR_Integer hlds__special_pred__CastY_13 = (MR_Integer) hlds__special_pred__HeadVar__3_3;

    hlds__special_pred__succeeded = (hlds__special_pred__CastX_12 == hlds__special_pred__CastY_13);
    if (hlds__special_pred__succeeded)
      *hlds__special_pred__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__special_pred__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__special_pred__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__special_pred__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__special_pred__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__special_pred__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], &hlds__special_pred__V_10_10, ((MR_Box) (hlds__special_pred__V_4_4)), ((MR_Box) (hlds__special_pred__V_7_7)));
        }
        hlds__special_pred__succeeded = (hlds__special_pred__V_10_10 == (MR_Integer) 0);
        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
        if (hlds__special_pred__succeeded)
          *hlds__special_pred__HeadVar__1_1 = hlds__special_pred__V_10_10;
        else
          {
            MR_Word hlds__special_pred__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], &hlds__special_pred__V_11_11, ((MR_Box) (hlds__special_pred__V_5_5)), ((MR_Box) (hlds__special_pred__V_8_8)));
            }
            hlds__special_pred__succeeded = (hlds__special_pred__V_11_11 == (MR_Integer) 0);
            hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
            if (hlds__special_pred__succeeded)
              *hlds__special_pred__HeadVar__1_1 = hlds__special_pred__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], hlds__special_pred__HeadVar__1_1, ((MR_Box) (hlds__special_pred__V_6_6)), ((MR_Box) (hlds__special_pred__V_9_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0(
  MR_Word hlds__special_pred__HeadVar__1_1,
  MR_Word hlds__special_pred__HeadVar__2_2)
{
  {
    MR_bool hlds__special_pred__succeeded;
    MR_Integer hlds__special_pred__CastX_9 = (MR_Integer) hlds__special_pred__HeadVar__1_1;
    MR_Integer hlds__special_pred__CastY_10 = (MR_Integer) hlds__special_pred__HeadVar__2_2;

    hlds__special_pred__succeeded = (hlds__special_pred__CastX_9 == hlds__special_pred__CastY_10);
    if (hlds__special_pred__succeeded)
      hlds__special_pred__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__special_pred__TypeInfo_12_12;
        MR_Word hlds__special_pred__TypeInfo_13_13;
        MR_Word hlds__special_pred__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__special_pred__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__special_pred__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__special_pred__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__special_pred__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__HeadVar__2_2, (MR_Integer) 2)));

        {
          hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], ((MR_Box) (hlds__special_pred__V_3_3)), ((MR_Box) (hlds__special_pred__V_6_6)));
        }
        if (hlds__special_pred__succeeded)
          {
            hlds__special_pred__TypeInfo_12_12 = (MR_Word) &hlds__special_pred_scalar_common_2[0];
            {
              hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__special_pred__TypeInfo_12_12, ((MR_Box) (hlds__special_pred__V_4_4)), ((MR_Box) (hlds__special_pred__V_7_7)));
            }
            if (hlds__special_pred__succeeded)
              {
                hlds__special_pred__TypeInfo_13_13 = (MR_Word) &hlds__special_pred_scalar_common_2[0];
                {
                  hlds__special_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__special_pred__TypeInfo_13_13, ((MR_Box) (hlds__special_pred__V_5_5)), ((MR_Box) (hlds__special_pred__V_8_8)));
                }
              }
          }
      }
    return hlds__special_pred__succeeded;
  }
}

MR_bool MR_CALL 
hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(
  MR_Word hlds__special_pred__ModuleInfo_2)
{
  {
    MR_bool hlds__special_pred__succeeded;
    MR_Word hlds__special_pred__Globals_3;
    MR_Word hlds__special_pred__Target_4;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_2, &hlds__special_pred__Globals_3);
    }
    {
      libs__globals__get_target_2_p_0(hlds__special_pred__Globals_3, &hlds__special_pred__Target_4);
    }
    switch (hlds__special_pred__Target_4) {
      default:
        hlds__special_pred__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        hlds__special_pred__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        hlds__special_pred__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        hlds__special_pred__succeeded = MR_TRUE;
        break;
    }
    return hlds__special_pred__succeeded;
  }
}

MR_bool MR_CALL 
hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(
  MR_Word hlds__special_pred__TypeCtor_3,
  MR_String * hlds__special_pred__TypeName_4)
{
  {
    MR_bool hlds__special_pred__succeeded;
    MR_Word hlds__special_pred__Builtin_5;
    MR_Word hlds__special_pred__V_6_6;
    MR_Integer hlds__special_pred__V_7_7;
    MR_Word hlds__special_pred__V_8_8;

    {
      hlds__special_pred__Builtin_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_3, (MR_Integer) 0)));
    hlds__special_pred__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__special_pred__TypeCtor_3, (MR_Integer) 1)));
    hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_6_6)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__special_pred__succeeded)
      {
        hlds__special_pred__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_6_6, (MR_Integer) 0)));
        *hlds__special_pred__TypeName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_6_6, (MR_Integer) 1)));
        {
          hlds__special_pred__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__special_pred__Builtin_5, hlds__special_pred__V_8_8);
        }
        if (hlds__special_pred__succeeded)
          {
            hlds__special_pred__succeeded = (hlds__special_pred__V_7_7 == (MR_Integer) 0);
            if (hlds__special_pred__succeeded)
              {
                {
                  hlds__special_pred__succeeded = parse_tree__prog_data__is_builtin_type_name_1_p_0(*hlds__special_pred__TypeName_4);
                }
                if (!(hlds__special_pred__succeeded))
                  hlds__special_pred__succeeded = (strcmp(*hlds__special_pred__TypeName_4, (MR_String) "pred") == 0);
              }
          }
      }
    return hlds__special_pred__succeeded;
  }
}

MR_bool MR_CALL 
hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(
  MR_Word hlds__special_pred__ModuleInfo_4,
  MR_Word hlds__special_pred__TypeCtor_5,
  MR_Word hlds__special_pred__TypeBody_6)
{
  {
    MR_bool hlds__special_pred__succeeded;
    MR_Word hlds__special_pred__V_11_11;
    MR_Word hlds__special_pred__V_20_20;

    {
      MR_Word hlds__special_pred__V_7_7;

      hlds__special_pred__succeeded = ((((MR_tag((MR_Word) hlds__special_pred__TypeBody_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (hlds__special_pred__succeeded)
        hlds__special_pred__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_6, (MR_Integer) 1)));
      hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
    }
    if (!(hlds__special_pred__succeeded))
      {
        MR_Word hlds__special_pred__Globals_13;
        MR_Word hlds__special_pred__Target_14;
        MR_String hlds__special_pred__V_8_8;

        {
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_4, &hlds__special_pred__Globals_13);
        }
        {
          libs__globals__get_target_2_p_0(hlds__special_pred__Globals_13, &hlds__special_pred__Target_14);
        }
        switch (hlds__special_pred__Target_14) {
          default:
            hlds__special_pred__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            hlds__special_pred__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            hlds__special_pred__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            hlds__special_pred__succeeded = MR_TRUE;
            break;
        }
        if (hlds__special_pred__succeeded)
          {
            hlds__special_pred__succeeded = hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(hlds__special_pred__TypeCtor_5, &hlds__special_pred__V_8_8);
          }
      }
    if (hlds__special_pred__succeeded)
      {
        {
          hlds__special_pred__succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(hlds__special_pred__TypeCtor_5, hlds__special_pred__TypeBody_6);
        }
        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
        if (hlds__special_pred__succeeded)
          {
            {
              hlds__special_pred__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(hlds__special_pred__ModuleInfo_4, hlds__special_pred__TypeBody_6, &hlds__special_pred__V_11_11);
            }
            if (hlds__special_pred__succeeded)
              {
                hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_11_11)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__special_pred__succeeded)
                  hlds__special_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_11_11, (MR_Integer) 0)));
              }
            hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
          }
      }
    return hlds__special_pred__succeeded;
  }
}

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(
  void * hlds__special_pred__env_ptr_arg)
{
  {
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

    MR_builtin_longjmp((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3(
  void * hlds__special_pred__env_ptr_arg)
{
  {
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

    (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13 = ((MR_Word) (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13);
    {
      hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(hlds__special_pred__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(
  void * hlds__special_pred__env_ptr_arg)
{
  {
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

    {
      MR_Word hlds__special_pred__V_15_15;
      MR_Word hlds__special_pred__V_16_16;
      MR_Word hlds__special_pred__V_17_17;
      MR_Integer hlds__special_pred__V_18_18;
      MR_Word hlds__special_pred__V_19_19;
      MR_Word hlds__special_pred__V_20_20;
      MR_Word hlds__special_pred__V_21_21;

      (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 0)));
      hlds__special_pred__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 1)));
      hlds__special_pred__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 2)));
      hlds__special_pred__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 3)));
      hlds__special_pred__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 4)));
      hlds__special_pred__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 5)));
      (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14)) == (MR_mktag((MR_Integer) 1)));
      if ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
        {
          {
            hlds__special_pred__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14, (MR_Integer) 0)));
            hlds__special_pred__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14, (MR_Integer) 1)));
          }
          {
            hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(hlds__special_pred__env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(
  void * hlds__special_pred__env_ptr_arg)
{
  {
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * hlds__special_pred__env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) hlds__special_pred__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word hlds__special_pred__TypeCtorInfo_32_32;
          MR_Word hlds__special_pred__Ctors_12;
          MR_Word hlds__special_pred__V_24_24;
          MR_Word hlds__special_pred__V_25_25;
          MR_Word hlds__special_pred__V_26_26;
          MR_Word hlds__special_pred__V_27_27;
          MR_Word hlds__special_pred__V_28_28;
          MR_Word hlds__special_pred__V_29_29;
          MR_Word hlds__special_pred__V_30_30;
          MR_Word hlds__special_pred__V_31_31;

          (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6)) == (MR_mktag((MR_Integer) 1)));
          if ((hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
            {
              {
                hlds__special_pred__Ctors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 0)));
                hlds__special_pred__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 1)));
                hlds__special_pred__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 2)));
                hlds__special_pred__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 3)));
                hlds__special_pred__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 4)));
                hlds__special_pred__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 5)));
                hlds__special_pred__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 6)))) & (MR_Integer) 1);
                hlds__special_pred__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                hlds__special_pred__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 7)));
              }
              {
                hlds__special_pred__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
                {
                  mercury__list__member_2_p_1(hlds__special_pred__TypeCtorInfo_32_32, &(hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13, hlds__special_pred__Ctors_12, hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3, hlds__special_pred__env_ptr);
                }
              }
            }
        }
        (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__special_pred__env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(
  MR_Word hlds__special_pred__ModuleInfo_4,
  MR_Word hlds__special_pred__SpecialPredId_5,
  MR_Word hlds__special_pred__TypeBody_6)
{
  {
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s hlds__special_pred__env;

    (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6 = hlds__special_pred__TypeBody_6;
    switch (hlds__special_pred__SpecialPredId_5) {
      default:
        (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__special_pred__UserCmp_10;
          MR_Word hlds__special_pred__V_22_22;
          MR_Word hlds__special_pred__V_9_9;
          MR_Word hlds__special_pred__V_11_11;

          {
            (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(hlds__special_pred__ModuleInfo_4, (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, &hlds__special_pred__V_22_22);
          }
          if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
            {
              (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_22_22)) == (MR_mktag((MR_Integer) 0)));
              if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
                {
                  hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_22_22, (MR_Integer) 0)));
                  hlds__special_pred__UserCmp_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_22_22, (MR_Integer) 1)));
                  (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__special_pred__UserCmp_10)) == (MR_mktag((MR_Integer) 1)));
                  if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
                    hlds__special_pred__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__UserCmp_10, (MR_Integer) 0)));
                }
            }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__special_pred__V_33_33;
          MR_Word hlds__special_pred__V_36_36;
          MR_Word hlds__special_pred__V_37_37;

          {
            (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(hlds__special_pred__ModuleInfo_4, (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, &hlds__special_pred__V_33_33);
          }
          if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
            {
              (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_33_33)) == (MR_mktag((MR_Integer) 0)));
              if ((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
                {
                  hlds__special_pred__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_33_33, (MR_Integer) 0)));
                  hlds__special_pred__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__V_33_33, (MR_Integer) 1)));
                }
            }
        }
        break;
    }
    if (!((hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded))
      {
        {
          hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(&hlds__special_pred__env);
        }
      }
    return (hlds__special_pred__env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded;
  }
}

MR_bool MR_CALL 
hlds__special_pred__special_pred_is_generated_lazily_4_p_0(
  MR_Word hlds__special_pred__ModuleInfo_5,
  MR_Word hlds__special_pred__TypeCtor_6,
  MR_Word hlds__special_pred__TypeBody_7,
  MR_Word hlds__special_pred__TypeStatus_8)
{
  {
    MR_bool hlds__special_pred__succeeded = ((((MR_tag((MR_Word) hlds__special_pred__TypeBody_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Word hlds__special_pred__CtorCat_11;
    MR_Word hlds__special_pred__V_9_9;
    MR_Word hlds__special_pred__V_10_10;
    MR_Word hlds__special_pred__V_14_14;

    if (hlds__special_pred__succeeded)
      {
        hlds__special_pred__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 1)));
        hlds__special_pred__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 2)));
      }
    hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
    if (hlds__special_pred__succeeded)
      {
        hlds__special_pred__succeeded = ((((MR_tag((MR_Word) hlds__special_pred__TypeBody_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (hlds__special_pred__succeeded)
          {
            hlds__special_pred__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__TypeBody_7, (MR_Integer) 1)));
            hlds__special_pred__succeeded = (hlds__special_pred__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          }
        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
        if (hlds__special_pred__succeeded)
          {
            {
              hlds__special_pred__CtorCat_11 = check_hlds__type_util__classify_type_ctor_2_f_0(hlds__special_pred__ModuleInfo_5, hlds__special_pred__TypeCtor_6);
            }
            hlds__special_pred__succeeded = (hlds__special_pred__CtorCat_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            if (!(hlds__special_pred__succeeded))
              {
                MR_Word hlds__special_pred__V_20_20;
                MR_Word hlds__special_pred__V_24_24;

                if (((MR_tag((MR_Word) hlds__special_pred__CtorCat_11)) == (MR_mktag((MR_Integer) 2))))
                  hlds__special_pred__succeeded = MR_TRUE;
                else
                if (((((MR_tag((MR_Word) hlds__special_pred__CtorCat_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__CtorCat_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
                  hlds__special_pred__succeeded = MR_TRUE;
                else
                  hlds__special_pred__succeeded = MR_FALSE;
                if (!(hlds__special_pred__succeeded))
                  {
                    MR_Word hlds__special_pred__V_15_15;

                    {
                      hlds__special_pred__V_15_15 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(hlds__special_pred__CtorCat_11);
                    }
                    hlds__special_pred__succeeded = (hlds__special_pred__V_15_15 == (MR_Integer) 1);
                  }
                if (hlds__special_pred__succeeded)
                  {
                    {
                      MR_Word hlds__special_pred__V_23_23;

                      {
                        hlds__special_pred__V_23_23 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__special_pred__TypeStatus_8);
                      }
                      hlds__special_pred__succeeded = (hlds__special_pred__V_23_23 == (MR_Integer) 0);
                    }
                    if (!(hlds__special_pred__succeeded))
                      {
                        MR_Word hlds__special_pred__Globals_19;

                        {
                          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_5, &hlds__special_pred__Globals_19);
                        }
                        {
                          hlds__special_pred__succeeded = libs__globals__lookup_bool_option_3_p_1(hlds__special_pred__Globals_19, (MR_Integer) 282, (MR_Integer) 0);
                        }
                      }
                    if (hlds__special_pred__succeeded)
                      {
                        hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__TypeBody_7)) == (MR_mktag((MR_Integer) 0)));
                        if (hlds__special_pred__succeeded)
                          hlds__special_pred__V_20_20 = (MR_Word) MR_body(((MR_Word) hlds__special_pred__TypeBody_7), (MR_Integer) 0);
                        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
                        if (hlds__special_pred__succeeded)
                          {
                            hlds__special_pred__V_24_24 = (MR_Integer) 0;
                            {
                              hlds__special_pred__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(hlds__special_pred__ModuleInfo_5, hlds__special_pred__V_24_24, hlds__special_pred__TypeBody_7);
                            }
                            hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
                          }
                      }
                  }
              }
          }
      }
    return hlds__special_pred__succeeded;
  }
}

MR_bool MR_CALL 
hlds__special_pred__special_pred_is_generated_lazily_2_p_0(
  MR_Word hlds__special_pred__ModuleInfo_3,
  MR_Word hlds__special_pred__TypeCtor_4)
{
  {
    MR_bool hlds__special_pred__succeeded;
    MR_Word hlds__special_pred__CtorCat_5;

    {
      hlds__special_pred__CtorCat_5 = check_hlds__type_util__classify_type_ctor_2_f_0(hlds__special_pred__ModuleInfo_3, hlds__special_pred__TypeCtor_4);
    }
    hlds__special_pred__succeeded = (hlds__special_pred__CtorCat_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    if (!(hlds__special_pred__succeeded))
      {
        MR_Word hlds__special_pred__TypeTable_8;
        MR_Word hlds__special_pred__TypeDefn_9;
        MR_Word hlds__special_pred__TypeBody_10;
        MR_Word hlds__special_pred__TypeStatus_11;
        MR_Word hlds__special_pred__V_17_17;
        MR_Word hlds__special_pred__V_21_21;

        if (((MR_tag((MR_Word) hlds__special_pred__CtorCat_5)) == (MR_mktag((MR_Integer) 2))))
          hlds__special_pred__succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) hlds__special_pred__CtorCat_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__special_pred__CtorCat_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
          hlds__special_pred__succeeded = MR_TRUE;
        else
          hlds__special_pred__succeeded = MR_FALSE;
        if (!(hlds__special_pred__succeeded))
          {
            MR_Word hlds__special_pred__V_12_12;

            {
              hlds__special_pred__V_12_12 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(hlds__special_pred__CtorCat_5);
            }
            hlds__special_pred__succeeded = (hlds__special_pred__V_12_12 == (MR_Integer) 1);
          }
        if (hlds__special_pred__succeeded)
          {
            {
              hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__special_pred__ModuleInfo_3, &hlds__special_pred__TypeTable_8);
            }
            {
              hlds__special_pred__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__special_pred__TypeTable_8, hlds__special_pred__TypeCtor_4, &hlds__special_pred__TypeDefn_9);
            }
            if (hlds__special_pred__succeeded)
              {
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(hlds__special_pred__TypeDefn_9, &hlds__special_pred__TypeBody_10);
                }
                {
                  hlds__hlds_data__get_type_defn_status_2_p_0(hlds__special_pred__TypeDefn_9, &hlds__special_pred__TypeStatus_11);
                }
                {
                  MR_Word hlds__special_pred__V_20_20;

                  {
                    hlds__special_pred__V_20_20 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__special_pred__TypeStatus_11);
                  }
                  hlds__special_pred__succeeded = (hlds__special_pred__V_20_20 == (MR_Integer) 0);
                }
                if (!(hlds__special_pred__succeeded))
                  {
                    MR_Word hlds__special_pred__Globals_16;

                    {
                      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__special_pred__ModuleInfo_3, &hlds__special_pred__Globals_16);
                    }
                    {
                      hlds__special_pred__succeeded = libs__globals__lookup_bool_option_3_p_1(hlds__special_pred__Globals_16, (MR_Integer) 282, (MR_Integer) 0);
                    }
                  }
                if (hlds__special_pred__succeeded)
                  {
                    hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__TypeBody_10)) == (MR_mktag((MR_Integer) 0)));
                    if (hlds__special_pred__succeeded)
                      hlds__special_pred__V_17_17 = (MR_Word) MR_body(((MR_Word) hlds__special_pred__TypeBody_10), (MR_Integer) 0);
                    hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
                    if (hlds__special_pred__succeeded)
                      {
                        hlds__special_pred__V_21_21 = (MR_Integer) 0;
                        {
                          hlds__special_pred__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(hlds__special_pred__ModuleInfo_3, hlds__special_pred__V_21_21, hlds__special_pred__TypeBody_10);
                        }
                        hlds__special_pred__succeeded = !(hlds__special_pred__succeeded);
                      }
                  }
              }
          }
      }
    return hlds__special_pred__succeeded;
  }
}

void MR_CALL 
hlds__special_pred__special_pred_get_type_det_3_p_0(
  MR_Word hlds__special_pred__SpecialId_4,
  MR_Word hlds__special_pred__ArgTypes_5,
  MR_Word * hlds__special_pred__Type_6)
{
  {
    MR_bool hlds__special_pred__succeeded;
    MR_Word hlds__special_pred__TypePrime_7;

    {
      hlds__special_pred__succeeded = hlds__special_pred__special_pred_get_type_3_p_0(hlds__special_pred__SpecialId_4, hlds__special_pred__ArgTypes_5, &hlds__special_pred__TypePrime_7);
    }
    if (hlds__special_pred__succeeded)
      *hlds__special_pred__Type_6 = hlds__special_pred__TypePrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.special_pred", (MR_String) "predicate \140hlds.special_pred.special_pred_get_type_det\'/3", (MR_String) "special_pred_get_type failed");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
hlds__special_pred__special_pred_get_type_3_p_0(
  MR_Word hlds__special_pred__HeadVar__1_1,
  MR_Word hlds__special_pred__Types_2,
  MR_Word * hlds__special_pred__T_3)
{
  {
    MR_bool hlds__special_pred__succeeded;

    switch (hlds__special_pred__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word hlds__special_pred__V_17_17;
          MR_Word hlds__special_pred__V_16_16;

          {
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_17_17);
          }
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_17_17)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__special_pred__succeeded)
            {
              *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_17_17, (MR_Integer) 0)));
              hlds__special_pred__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_17_17, (MR_Integer) 1)));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__special_pred__V_12_12;
          MR_Word hlds__special_pred__V_13_13;
          MR_Word hlds__special_pred__V_10_10;
          MR_Word hlds__special_pred__V_11_11;

          {
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_12_12);
          }
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_12_12)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__special_pred__succeeded)
            {
              hlds__special_pred__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_12_12, (MR_Integer) 0)));
              hlds__special_pred__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_12_12, (MR_Integer) 1)));
              hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_13_13)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__special_pred__succeeded)
                {
                  *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_13_13, (MR_Integer) 0)));
                  hlds__special_pred__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_13_13, (MR_Integer) 1)));
                }
            }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__special_pred__V_7_7;
          MR_Word hlds__special_pred__V_6_6;

          {
            mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], hlds__special_pred__Types_2, &hlds__special_pred__V_7_7);
          }
          hlds__special_pred__succeeded = ((MR_tag((MR_Word) hlds__special_pred__V_7_7)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__special_pred__succeeded)
            {
              *hlds__special_pred__T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_7_7, (MR_Integer) 0)));
              hlds__special_pred__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__special_pred__V_7_7, (MR_Integer) 1)));
            }
        }
        break;
    }
    return hlds__special_pred__succeeded;
  }
}

void MR_CALL 
hlds__special_pred__special_pred_interface_5_p_0(
  MR_Word hlds__special_pred__SpecialPredId_6,
  MR_Word hlds__special_pred__Type_7,
  MR_Word * hlds__special_pred__ArgTypes_8,
  MR_Word * hlds__special_pred__ArgModes_9,
  MR_Word * hlds__special_pred__Detism_10)
{
  {
    MR_bool hlds__special_pred__succeeded;

    switch (hlds__special_pred__SpecialPredId_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word hlds__special_pred__Uo_13;
          MR_Word hlds__special_pred__V_14_14;
          MR_Word hlds__special_pred__V_15_15;
          MR_Word hlds__special_pred__V_16_16;
          MR_Word hlds__special_pred__V_18_18;
          MR_Word hlds__special_pred__V_19_19;
          MR_Word hlds__special_pred__In_31;

          {
            hlds__special_pred__V_14_14 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
          }
          {
            hlds__special_pred__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_16_16, 0) = ((MR_Box) (hlds__special_pred__Type_7));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__special_pred__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_15_15, 0) = ((MR_Box) (hlds__special_pred__Type_7));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_15_15, 1) = ((MR_Box) (hlds__special_pred__V_16_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__special_pred__ArgTypes_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__V_14_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_15_15));
          }
          {
            parse_tree__prog_mode__in_mode_1_p_0(&hlds__special_pred__In_31);
          }
          {
            parse_tree__prog_mode__uo_mode_1_p_0(&hlds__special_pred__Uo_13);
          }
          {
            hlds__special_pred__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_19_19, 0) = ((MR_Box) (hlds__special_pred__In_31));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__special_pred__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, 0) = ((MR_Box) (hlds__special_pred__In_31));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_18_18, 1) = ((MR_Box) (hlds__special_pred__V_19_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__special_pred__ArgModes_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Uo_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_18_18));
          }
          *hlds__special_pred__Detism_10 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__special_pred__Out_12;
          MR_Word hlds__special_pred__V_21_21;
          MR_Word hlds__special_pred__V_22_22;
          MR_Word hlds__special_pred__V_24_24;
          MR_Word hlds__special_pred__In_30;

          {
            hlds__special_pred__V_22_22 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
          {
            hlds__special_pred__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_21_21, 0) = ((MR_Box) (hlds__special_pred__V_22_22));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__special_pred__ArgTypes_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Type_7));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_21_21));
          }
          {
            parse_tree__prog_mode__in_mode_1_p_0(&hlds__special_pred__In_30);
          }
          {
            parse_tree__prog_mode__out_mode_1_p_0(&hlds__special_pred__Out_12);
          }
          {
            hlds__special_pred__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_24_24, 0) = ((MR_Box) (hlds__special_pred__Out_12));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__special_pred__ArgModes_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__In_30));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_24_24));
          }
          *hlds__special_pred__Detism_10 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__special_pred__In_11;
          MR_Word hlds__special_pred__V_26_26;
          MR_Word hlds__special_pred__V_28_28;

          {
            hlds__special_pred__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_26_26, 0) = ((MR_Box) (hlds__special_pred__Type_7));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__special_pred__ArgTypes_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__Type_7));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_26_26));
          }
          {
            parse_tree__prog_mode__in_mode_1_p_0(&hlds__special_pred__In_11);
          }
          {
            hlds__special_pred__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_28_28, 0) = ((MR_Box) (hlds__special_pred__In_11));
            MR_hl_field(MR_mktag(1), hlds__special_pred__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__special_pred__ArgModes_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__special_pred__In_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__special_pred__V_28_28));
          }
          *hlds__special_pred__Detism_10 = (MR_Integer) 1;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__special_pred__special_pred_mode_num_2_p_0(
  MR_Word hlds__special_pred__HeadVar__1_3,
  MR_Integer * hlds__special_pred__HeadVar__2_2)
{
  {
    MR_bool hlds__special_pred__succeeded;

    {
      hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_p_0(hlds__special_pred__HeadVar__2_2);
    }
  }
}

MR_String MR_CALL 
hlds__special_pred__special_pred_name_2_f_0(
  MR_Word hlds__special_pred__SpecialPred_4,
  MR_Word hlds__special_pred__HeadVar__2_2)
{
  {
    MR_bool hlds__special_pred__succeeded;
    MR_String hlds__special_pred__Name_7;

    {
      hlds__special_pred__Name_7 = hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_f_0(hlds__special_pred__SpecialPred_4);
    }
    return hlds__special_pred__Name_7;
  }
}

void MR_CALL 
hlds__special_pred__special_pred_description_2_p_0(
  MR_Word hlds__special_pred__HeadVar__1_1,
  MR_String * hlds__special_pred__HeadVar__2_2)
{
  {
    MR_bool hlds__special_pred__succeeded;

    switch (hlds__special_pred__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        *hlds__special_pred__HeadVar__2_2 = (MR_String) "comparison predicate";
        break;
      case (MR_Integer) 1:
        *hlds__special_pred__HeadVar__2_2 = (MR_String) "indexing predicate";
        break;
      case (MR_Integer) 0:
        *hlds__special_pred__HeadVar__2_2 = (MR_String) "unification predicate";
        break;
    }
  }
}

void MR_CALL 
hlds__special_pred__special_pred_list_1_p_0(
  MR_Word * hlds__special_pred__HeadVar__1_1)
{
  {
    MR_bool hlds__special_pred__succeeded;

    *hlds__special_pred__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__special_pred_scalar_common_1[3]);
  }
}

void MR_CALL 
hlds__special_pred__lookup_special_pred_maps_4_p_0(
  MR_Word hlds__special_pred__SpecMaps_5,
  MR_Word hlds__special_pred__SpecialPredId_6,
  MR_Word hlds__special_pred__TypeCtor_7,
  MR_Word * hlds__special_pred__PredId_8)
{
  {
    MR_bool hlds__special_pred__succeeded;
    MR_Word hlds__special_pred__SpecMap_9;
    MR_Word hlds__special_pred__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 2)));
    MR_Word hlds__special_pred__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 1)));
    MR_Word hlds__special_pred__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 0)));
    MR_Box hlds__special_pred__conv0_PredId_8;

    switch (hlds__special_pred__SpecialPredId_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_21_21;
        break;
      case (MR_Integer) 1:
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_22_22;
        break;
      case (MR_Integer) 0:
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_23_23;
        break;
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__special_pred__SpecMap_9, ((MR_Box) (hlds__special_pred__TypeCtor_7)), &hlds__special_pred__conv0_PredId_8);
    }
    *hlds__special_pred__PredId_8 = ((MR_Word) hlds__special_pred__conv0_PredId_8);
  }
}

MR_bool MR_CALL 
hlds__special_pred__search_special_pred_maps_4_p_0(
  MR_Word hlds__special_pred__SpecMaps_5,
  MR_Word hlds__special_pred__SpecialPredId_6,
  MR_Word hlds__special_pred__TypeCtor_7,
  MR_Word * hlds__special_pred__PredId_8)
{
  {
    MR_bool hlds__special_pred__succeeded;
    MR_Word hlds__special_pred__SpecMap_9;
    MR_Word hlds__special_pred__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 2)));
    MR_Word hlds__special_pred__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 1)));
    MR_Word hlds__special_pred__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__special_pred__SpecMaps_5, (MR_Integer) 0)));
    MR_Box hlds__special_pred__conv0_PredId_8;

    switch (hlds__special_pred__SpecialPredId_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_21_21;
        break;
      case (MR_Integer) 1:
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_22_22;
        break;
      case (MR_Integer) 0:
        hlds__special_pred__SpecMap_9 = hlds__special_pred__V_23_23;
        break;
    }
    {
      hlds__special_pred__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__special_pred__SpecMap_9, ((MR_Box) (hlds__special_pred__TypeCtor_7)), &hlds__special_pred__conv0_PredId_8);
    }
    if (hlds__special_pred__succeeded)
      {
        *hlds__special_pred__PredId_8 = ((MR_Word) hlds__special_pred__conv0_PredId_8);
        hlds__special_pred__succeeded = MR_TRUE;
      }
    return hlds__special_pred__succeeded;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__special_pred__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.special_pred. */
