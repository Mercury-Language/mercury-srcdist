/*
** Automatically generated from `special_pred.m'
** by the Mercury compiler,
** version rotd-2017-10-15
** configured for x86_64-pc-linux-gnu.
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


// :- module hlds.special_pred.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__special_pred__hlds__special_pred__field_types_special_pred_maps_0_0,
  hlds__special_pred__hlds__special_pred__field_names_special_pred_maps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0[1] = {
  &hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0
};

static const MR_DuPtagLayout hlds__special_pred__hlds__special_pred__du_ptag_ordered_special_pred_maps_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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

void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__special_pred_scalar_common_2[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) &hlds__special_pred_scalar_common_2[0];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) &hlds__special_pred_scalar_common_2[0];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(
  MR_Word ModuleInfo_2)
{
  {
    MR_bool succeeded;
    MR_Word Globals_3;
    MR_Word Target_4;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_2, &Globals_3);
    libs__globals__get_target_2_p_0(Globals_3, &Target_4);
    switch (Target_4) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeCtor_5,
  MR_Word TypeBody_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_11;
    MR_Word ArgX1_19;

    {
      MR_Word Var_7;

      succeeded = ((((MR_tag((MR_Word) TypeBody_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
        Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_6, (MR_Integer) 1)));
      succeeded = !(succeeded);
    }
    if (!(succeeded))
    {
      MR_Word Globals_13;
      MR_Word Target_14;
      MR_String Var_8;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_13);
      libs__globals__get_target_2_p_0(Globals_13, &Target_14);
      switch (Target_14) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
        succeeded = hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(TypeCtor_5, &Var_8);
    }
    if (succeeded)
    {
      succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(TypeCtor_5, TypeBody_6);
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_4, TypeBody_6, &Var_11);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            ArgX1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0)));
        }
        succeeded = !(succeeded);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(
  MR_Word TypeCtor_3,
  MR_String * TypeName_4)
{
  {
    MR_bool succeeded;
    MR_Word Builtin_5;
    MR_Word Var_6;
    MR_Integer Var_7;
    MR_Word Var_8;

    Builtin_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 0)));
    Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 1)));
    succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_6, (MR_Integer) 0)));
      *TypeName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_6, (MR_Integer) 1)));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Builtin_5, Var_8);
      if (succeeded)
      {
        succeeded = (Var_7 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = parse_tree__prog_data__is_builtin_type_name_1_p_0(*TypeName_4);
          if (!(succeeded))
            succeeded = (strcmp(*TypeName_4, (MR_String) "pred") == 0);
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__special_pred__special_pred_is_generated_lazily_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeCtor_6,
  MR_Word TypeBody_7,
  MR_Word TypeStatus_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) TypeBody_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Word CtorCat_10;
    MR_Word Var_9;
    MR_Word Var_13;

    if (succeeded)
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_7, (MR_Integer) 1)));
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) TypeBody_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_7, (MR_Integer) 1)));
        succeeded = (Var_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        CtorCat_10 = check_hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_5, TypeCtor_6);
        succeeded = (CtorCat_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        if (!(succeeded))
        {
          MR_Word Var_19;
          MR_Word Var_23;

          if (((MR_tag((MR_Word) CtorCat_10)) == (MR_mktag((MR_Integer) 2))))
            succeeded = MR_TRUE;
          else
          if (((((MR_tag((MR_Word) CtorCat_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          if (!(succeeded))
          {
            MR_Word Var_14;

            Var_14 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(CtorCat_10);
            succeeded = (Var_14 == (MR_Integer) 1);
          }
          if (succeeded)
          {
            {
              MR_Word Var_22;

              Var_22 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_8);
              succeeded = (Var_22 == (MR_Integer) 0);
            }
            if (!(succeeded))
            {
              MR_Word Globals_18;

              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_18);
              succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_18, (MR_Integer) 284, (MR_Integer) 0);
            }
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TypeBody_7)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
                Var_19 = (MR_Word) MR_body(((MR_Word) TypeBody_7), (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_23 = (MR_Integer) 0;
                succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(ModuleInfo_5, Var_23, TypeBody_7);
                succeeded = !(succeeded);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__special_pred__special_pred_is_generated_lazily_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word TypeCtor_4)
{
  {
    MR_bool succeeded;
    MR_Word CtorCat_5;

    CtorCat_5 = check_hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_3, TypeCtor_4);
    succeeded = (CtorCat_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    if (!(succeeded))
    {
      MR_Word TypeTable_8;
      MR_Word TypeDefn_9;
      MR_Word TypeBody_10;
      MR_Word TypeStatus_11;
      MR_Word Var_17;
      MR_Word Var_21;

      if (((MR_tag((MR_Word) CtorCat_5)) == (MR_mktag((MR_Integer) 2))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) CtorCat_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (!(succeeded))
      {
        MR_Word Var_12;

        Var_12 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(CtorCat_5);
        succeeded = (Var_12 == (MR_Integer) 1);
      }
      if (succeeded)
      {
        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_8);
        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_8, TypeCtor_4, &TypeDefn_9);
        if (succeeded)
        {
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_10);
          hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_9, &TypeStatus_11);
          {
            MR_Word Var_20;

            Var_20 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_11);
            succeeded = (Var_20 == (MR_Integer) 0);
          }
          if (!(succeeded))
          {
            MR_Word Globals_16;

            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_16);
            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_16, (MR_Integer) 284, (MR_Integer) 0);
          }
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) TypeBody_10)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
              Var_17 = (MR_Word) MR_body(((MR_Word) TypeBody_10), (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_21 = (MR_Integer) 0;
              succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(ModuleInfo_3, Var_21, TypeBody_10);
              succeeded = !(succeeded);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13 = ((MR_Word) (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13);
    hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(env_ptr);
  }
}

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Integer Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;

      (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 0)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 1)));
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 2)));
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 3)));
      Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 4)));
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_13, (MR_Integer) 5)));
      (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14)) == (MR_mktag((MR_Integer) 1)));
      if ((env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
      {
        Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14, (MR_Integer) 0)));
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__ExistQTVars_14, (MR_Integer) 1)));
        hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word TypeCtorInfo_32_32;
          MR_Word Ctors_12;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;

          (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6)) == (MR_mktag((MR_Integer) 1)));
          if ((env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
          {
            Ctors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 0)));
            Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 1)));
            Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 2)));
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 3)));
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 4)));
            Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 5)));
            Var_29 = ((((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 6)))) & (MR_Integer) 1);
            Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, (MR_Integer) 7)));
            TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
            mercury__list__member_2_p_1(TypeCtorInfo_32_32, &(env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_13, Ctors_12, hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3, env_ptr);
          }
        }
        (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word SpecialPredId_5,
  MR_Word TypeBody_6)
{
  {
    struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s env;

    (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6 = TypeBody_6;
    switch (SpecialPredId_5) {
      default:
        (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word UserCmp_10;
          MR_Word Var_22;
          MR_Word Var_9;
          MR_Word Var_11;

          (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_4, (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, &Var_22);
          if ((env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
          {
            (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_mktag((MR_Integer) 0)));
            if ((env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
            {
              Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));
              UserCmp_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1)));
              (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) UserCmp_10)) == (MR_mktag((MR_Integer) 1)));
              if ((env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
                Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), UserCmp_10, (MR_Integer) 0)));
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_33;
          MR_Word ArgX1_34;
          MR_Word ArgX2_36;

          (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_4, (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TypeBody_6, &Var_33);
          if ((env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
          {
            (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_mktag((MR_Integer) 0)));
            if ((env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
            {
              ArgX1_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0)));
              ArgX2_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1)));
            }
          }
        }
        break;
    }
    if (!((env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded))
    {
      hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(&env);
    }
    return (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded;
  }
}

void MR_CALL 
hlds__special_pred__special_pred_get_type_det_3_p_0(
  MR_Word SpecialId_4,
  MR_Word ArgTypes_5,
  MR_Word * Type_6)
{
  {
    MR_bool succeeded;
    MR_Word TypePrime_7;

    succeeded = hlds__special_pred__special_pred_get_type_3_p_0(SpecialId_4, ArgTypes_5, &TypePrime_7);
    if (succeeded)
      *Type_6 = TypePrime_7;
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
  MR_Word HeadVar__1_1,
  MR_Word Types_2,
  MR_Word * T_3)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word Var_17;
          MR_Word Var_16;

          mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], Types_2, &Var_17);
          succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            *T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0)));
            Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1)));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_12;
          MR_Word Var_13;
          MR_Word Var_10;
          MR_Word Var_11;

          mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], Types_2, &Var_12);
          succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 0)));
            Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              *T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0)));
              Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 1)));
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_7;
          MR_Word Var_6;

          mercury__list__reverse_2_p_0((MR_Word) &hlds__special_pred_scalar_common_1[0], Types_2, &Var_7);
          succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            *T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 0)));
            Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 1)));
          }
        }
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__special_pred__special_pred_interface_5_p_0(
  MR_Word SpecialPredId_6,
  MR_Word Type_7,
  MR_Word * ArgTypes_8,
  MR_Word * ArgModes_9,
  MR_Word * Detism_10)
{
  switch (SpecialPredId_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word Uo_13;
        MR_Word Var_14;
        MR_Word Var_15;
        MR_Word Var_16;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word In_31;

        Var_14 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
        {
          Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Type_7));
          MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Type_7));
          MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ArgTypes_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_15));
        }
        parse_tree__prog_mode__in_mode_1_p_0(&In_31);
        parse_tree__prog_mode__uo_mode_1_p_0(&Uo_13);
        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (In_31));
          MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (In_31));
          MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ArgModes_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Uo_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_18));
        }
        *Detism_10 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Out_12;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_24;
        MR_Word In_30;

        Var_22 = parse_tree__builtin_lib_types__int_type_0_f_0();
        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ArgTypes_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_21));
        }
        parse_tree__prog_mode__in_mode_1_p_0(&In_30);
        parse_tree__prog_mode__out_mode_1_p_0(&Out_12);
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Out_12));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ArgModes_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (In_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_24));
        }
        *Detism_10 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word In_11;
        MR_Word Var_26;
        MR_Word Var_28;

        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Type_7));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ArgTypes_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_26));
        }
        parse_tree__prog_mode__in_mode_1_p_0(&In_11);
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (In_11));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ArgModes_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (In_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_28));
        }
        *Detism_10 = (MR_Integer) 1;
      }
      break;
  }
}

void MR_CALL 
hlds__special_pred__special_pred_mode_num_2_p_0(
  MR_Word HeadVar__1_3,
  MR_Integer * HeadVar__2_2)
{
  hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_p_0(HeadVar__2_2);
}

void MR_CALL 
hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_p_0(
  MR_Integer * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Integer) 0;
}

MR_String MR_CALL 
hlds__special_pred__special_pred_name_2_f_0(
  MR_Word SpecialPred_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_String Name_7;

    Name_7 = hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_f_0(SpecialPred_4);
    return Name_7;
  }
}

MR_String MR_CALL 
hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_f_0(
  MR_Word SpecialPred_4)
{
  {
    MR_String Name_7;

    Name_7 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(SpecialPred_4);
    return Name_7;
  }
}

void MR_CALL 
hlds__special_pred__special_pred_description_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_String) "comparison predicate";
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_String) "indexing predicate";
      break;
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_String) "unification predicate";
      break;
  }
}

void MR_CALL 
hlds__special_pred__special_pred_list_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__special_pred_scalar_common_1[3]);
}

void MR_CALL 
hlds__special_pred__lookup_special_pred_maps_4_p_0(
  MR_Word SpecMaps_5,
  MR_Word SpecialPredId_6,
  MR_Word TypeCtor_7,
  MR_Word * PredId_8)
{
  {
    MR_Word SpecMap_9;
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_5, (MR_Integer) 2)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_5, (MR_Integer) 1)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_5, (MR_Integer) 0)));
    MR_Box conv0_PredId_8;

    switch (SpecialPredId_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        SpecMap_9 = Var_21;
        break;
      case (MR_Integer) 1:
        SpecMap_9 = Var_22;
        break;
      case (MR_Integer) 0:
        SpecMap_9 = Var_23;
        break;
    }
    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, SpecMap_9, ((MR_Box) (TypeCtor_7)), &conv0_PredId_8);
    *PredId_8 = ((MR_Word) conv0_PredId_8);
  }
}

MR_bool MR_CALL 
hlds__special_pred__search_special_pred_maps_4_p_0(
  MR_Word SpecMaps_5,
  MR_Word SpecialPredId_6,
  MR_Word TypeCtor_7,
  MR_Word * PredId_8)
{
  {
    MR_bool succeeded;
    MR_Word SpecMap_9;
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_5, (MR_Integer) 2)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_5, (MR_Integer) 1)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_5, (MR_Integer) 0)));
    MR_Box conv0_PredId_8;

    switch (SpecialPredId_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        SpecMap_9 = Var_21;
        break;
      case (MR_Integer) 1:
        SpecMap_9 = Var_22;
        break;
      case (MR_Integer) 0:
        SpecMap_9 = Var_23;
        break;
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, SpecMap_9, ((MR_Box) (TypeCtor_7)), &conv0_PredId_8);
    if (succeeded)
    {
      *PredId_8 = ((MR_Word) conv0_PredId_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__special_pred____Unify____special_pred_maps_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__special_pred____Compare____special_pred_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module hlds.special_pred.
