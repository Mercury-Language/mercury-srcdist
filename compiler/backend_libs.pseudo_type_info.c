/*
** Automatically generated from `pseudo_type_info.m'
** by the Mercury compiler,
** version rotd-2017-09-11
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


// :- module backend_libs.pseudo_type_info.
// :- implementation.

/*
INIT mercury__backend_libs__pseudo_type_info__init
ENDINIT
*/

#include "backend_libs.pseudo_type_info.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 backend_libs__pseudo_type_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_type_info_0;

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__178__1_2_p_0(
  MR_Word TypeInfoArgs_28,
  MR_Integer HeadVar__2_31);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__168__1_3_p_0(
  MR_Word VarArityId_7,
  MR_Word TypeInfoArgs_10,
  MR_Integer HeadVar__3_31);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__114__1_2_p_0(
  MR_Word PseudoArgs_63,
  MR_Integer HeadVar__2_68);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__103__1_3_p_0(
  MR_Word VarArityId_27,
  MR_Word PseudoArgs_30,
  MR_Integer HeadVar__3_68);

static void MR_CALL 
backend_libs__pseudo_type_info__generate_pseudo_arg_4_p_0(
  MR_Integer NumUnivQTvars_5,
  MR_Word ExistQTvars_6,
  MR_Word TypeArg_7,
  MR_Word * MaybePseudoArg_8);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_1[1][2];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_2[1][7];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_3[2][6];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_4[1][1];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_5[4][5];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_6[2][3];




static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__pseudo_type_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0))
  },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_var_arity_ctor_id_0)),
    ((MR_Box) (&backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_var_arity_ctor_id_0)),
    ((MR_Box) (&backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "builtin"))
  },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_6[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[2])),
    ((MR_Box) (backend_libs__pseudo_type_info__construct_type_info_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[2])),
    ((MR_Box) (backend_libs__pseudo_type_info__construct_type_info_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 backend_libs__pseudo_type_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__pseudo_type_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0
  }
};

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__178__1_2_p_0(
  MR_Word TypeInfoArgs_28,
  MR_Integer HeadVar__2_31)
{
  {
    MR_bool succeeded;
    MR_Integer NumPseudoArgs_35;

    mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, TypeInfoArgs_28, &NumPseudoArgs_35);
    succeeded = (NumPseudoArgs_35 == HeadVar__2_31);
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__168__1_3_p_0(
  MR_Word VarArityId_7,
  MR_Word TypeInfoArgs_10,
  MR_Integer HeadVar__3_31)
{
  {
    MR_bool succeeded;
    MR_Integer NumPseudoArgs_36;

    mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, TypeInfoArgs_10, &NumPseudoArgs_36);
    switch (VarArityId_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Var_37 = (NumPseudoArgs_36 - HeadVar__3_31);

          succeeded = (Var_37 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        succeeded = (NumPseudoArgs_36 == HeadVar__3_31);
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__114__1_2_p_0(
  MR_Word PseudoArgs_63,
  MR_Integer HeadVar__2_68)
{
  {
    MR_bool succeeded;
    MR_Integer NumPseudoArgs_72;

    mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, PseudoArgs_63, &NumPseudoArgs_72);
    succeeded = (NumPseudoArgs_72 == HeadVar__2_68);
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__103__1_3_p_0(
  MR_Word VarArityId_27,
  MR_Word PseudoArgs_30,
  MR_Integer HeadVar__3_68)
{
  {
    MR_bool succeeded;
    MR_Integer NumPseudoArgs_73;

    mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, PseudoArgs_30, &NumPseudoArgs_73);
    switch (VarArityId_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Var_74 = (NumPseudoArgs_73 - HeadVar__3_68);

          succeeded = (Var_74 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        succeeded = (NumPseudoArgs_73 == HeadVar__3_68);
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__pseudo_type_info__generate_pseudo_arg_4_p_0(
  MR_Integer NumUnivQTvars_5,
  MR_Word ExistQTvars_6,
  MR_Word TypeArg_7,
  MR_Word * MaybePseudoArg_8)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_type__type_is_ground_1_p_0(TypeArg_7);
    if (succeeded)
    {
      MR_Word PseudoArg_9;

      backend_libs__pseudo_type_info__construct_type_info_2_p_0(TypeArg_7, &PseudoArg_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePseudoArg_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PseudoArg_9));
      }
    }
    else
    {
      MR_Word PseudoArg_10;

      backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(TypeArg_7, NumUnivQTvars_5, ExistQTvars_6, &PseudoArg_10);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePseudoArg_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PseudoArg_10));
      }
    }
  }
}

void MR_CALL 
backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(
  MR_Word Type_5,
  MR_Integer NumUnivQTvars_6,
  MR_Word ExistQTvars_7,
  MR_Word * MaybePseudoTypeInfo_8)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_type__type_is_ground_1_p_0(Type_5);
    if (succeeded)
    {
      MR_Word TypeInfo_9;

      backend_libs__pseudo_type_info__construct_type_info_2_p_0(Type_5, &TypeInfo_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePseudoTypeInfo_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeInfo_9));
      }
    }
    else
    {
      MR_Word PseudoTypeInfo_10;

      backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(Type_5, NumUnivQTvars_6, ExistQTvars_7, &PseudoTypeInfo_10);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePseudoTypeInfo_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PseudoTypeInfo_10));
      }
    }
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__178__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeInfo_4;

    backend_libs__pseudo_type_info__construct_type_info_2_p_0(((MR_Word) wrapper_arg_1), &conv1_TypeInfo_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_TypeInfo_4));
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__168__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_TypeInfo_4;

    backend_libs__pseudo_type_info__construct_type_info_2_p_0(((MR_Word) wrapper_arg_1), &conv0_TypeInfo_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_TypeInfo_4));
  }
}

void MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0(
  MR_Word Type_3,
  MR_Word * TypeInfo_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_5;
    MR_Word TypeArgs_6;
    MR_Integer Var_31;
    MR_Word Var_32;
    MR_Word VarArityId_7;
    MR_Word PredOrFunc_36;
    MR_Word _Purity_35;
    MR_Word Var_38;

    parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_3, &TypeCtor_5, &TypeArgs_6);
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0)));
    Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1)));
    succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_3, &_Purity_35, &PredOrFunc_36, &Var_38);
    if (succeeded)
    {
      switch (PredOrFunc_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          VarArityId_7 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          VarArityId_7 = (MR_Integer) 0;
          break;
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_39;

      succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_3, &Var_39);
      if (succeeded)
      {
        VarArityId_7 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfoArgs_10;
      MR_Word Var_18;

      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, (MR_Word) &backend_libs__pseudo_type_info_scalar_common_6[0], TypeArgs_6, &TypeInfoArgs_10);
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_type_info_2_p_0_2));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (VarArityId_7));
        MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (TypeInfoArgs_10));
        MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (Var_31));
      }
      mercury__require__expect_4_p_0(Var_18, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_type_info\'/2", (MR_String) "arity mismatch");
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *TypeInfo_4 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (VarArityId_7));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (TypeInfoArgs_10));
      }
    }
    else
    {
      MR_String TypeName_13;
      MR_Word TypeModule_14;
      MR_Word RttiTypeCtor_15;
      MR_Word Var_24;
      MR_Word TypeInfoArgs_28;

      TypeName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(Var_32);
      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(Var_32, (MR_Word) &backend_libs__pseudo_type_info_scalar_common_4[0], &TypeModule_14);
      {
        RttiTypeCtor_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RttiTypeCtor_15, 0) = ((MR_Box) (TypeModule_14));
        MR_hl_field(MR_mktag(0), RttiTypeCtor_15, 1) = ((MR_Box) (TypeName_13));
        MR_hl_field(MR_mktag(0), RttiTypeCtor_15, 2) = ((MR_Box) (Var_31));
      }
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, (MR_Word) &backend_libs__pseudo_type_info_scalar_common_6[1], TypeArgs_6, &TypeInfoArgs_28);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_type_info_2_p_0_4));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (TypeInfoArgs_28));
        MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Var_31));
      }
      mercury__require__expect_4_p_0(Var_24, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_type_info\'/2", (MR_String) "arity mismatch");
      if ((TypeInfoArgs_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *TypeInfo_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) RttiTypeCtor_15);
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *TypeInfo_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RttiTypeCtor_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeInfoArgs_28));
        }
    }
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__114__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybePseudoArg_8;

    backend_libs__pseudo_type_info__generate_pseudo_arg_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv1_MaybePseudoArg_8);
    *wrapper_arg_2 = ((MR_Box) (conv1_MaybePseudoArg_8));
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__103__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybePseudoArg_8;

    backend_libs__pseudo_type_info__generate_pseudo_arg_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_MaybePseudoArg_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybePseudoArg_8));
  }
}

void MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(
  MR_Word Type_5,
  MR_Integer NumUnivQTvars_6,
  MR_Word ExistQTvars_7,
  MR_Word * PseudoTypeInfo_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Type_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Type_5, (MR_Integer) 0)));
          MR_Integer VarInt0_40;
          MR_Integer VarInt_41;
          MR_Word Var_48;
          MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Type_5, (MR_Integer) 1)));

          mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, Var_38, &VarInt0_40);
          succeeded = (VarInt0_40 <= NumUnivQTvars_6);
          if (!(succeeded))
          {
            succeeded = (NumUnivQTvars_6 < (MR_Integer) 0);
          }
          if (succeeded)
            VarInt_41 = VarInt0_40;
          else
          {
            MR_Integer ExistNum0_42;

            succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) &backend_libs__pseudo_type_info_scalar_common_1[0], ExistQTvars_7, ((MR_Box) (Var_38)), &ExistNum0_42);
            if (succeeded)
            {
              VarInt_41 = (ExistNum0_42 + (MR_Integer) 512);
            }
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "not in list");
                return;
              }
            }
          }
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_5));
            MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (VarInt_41));
            MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) ((MR_Integer) 1024));
          }
          mercury__require__expect_4_p_0(Var_48, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "type var exceeds limit");
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *PseudoTypeInfo_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (VarInt_41));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word TypeCtor_25;
          MR_Word TypeArgs_26;
          MR_Integer Var_68;
          MR_Word Var_69;
          MR_Word VarArityId_27;
          MR_Word PredOrFunc_73;
          MR_Word _Purity_72;
          MR_Word Var_75;

          parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_5, &TypeCtor_25, &TypeArgs_26);
          Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_25, (MR_Integer) 0)));
          Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_25, (MR_Integer) 1)));
          succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_5, &_Purity_72, &PredOrFunc_73, &Var_75);
          if (succeeded)
          {
            switch (PredOrFunc_73) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                VarArityId_27 = (MR_Integer) 1;
                break;
              case (MR_Integer) 0:
                VarArityId_27 = (MR_Integer) 0;
                break;
            }
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Var_76;

            succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_5, &Var_76);
            if (succeeded)
            {
              VarArityId_27 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            MR_Word PseudoArgs_30;
            MR_Word Var_53;
            MR_Word Var_81;

            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_1));
              MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (NumUnivQTvars_6));
              MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (ExistQTvars_7));
            }
            mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, Var_81, TypeArgs_26, &PseudoArgs_30);
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_2));
              MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (VarArityId_27));
              MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (PseudoArgs_30));
              MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (Var_68));
            }
            mercury__require__expect_4_p_0(Var_53, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "var arity mismatch");
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *PseudoTypeInfo_8 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (VarArityId_27));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (PseudoArgs_30));
            }
          }
          else
          {
            MR_String TypeName_33;
            MR_Word TypeModule_34;
            MR_Word RttiTypeCtor_35;
            MR_Word Var_59;
            MR_Word PseudoArgs_63;
            MR_Word Var_90;

            TypeName_33 = mdbcomp__sym_name__unqualify_name_1_f_0(Var_69);
            mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(Var_69, (MR_Word) &backend_libs__pseudo_type_info_scalar_common_4[0], &TypeModule_34);
            {
              RttiTypeCtor_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RttiTypeCtor_35, 0) = ((MR_Box) (TypeModule_34));
              MR_hl_field(MR_mktag(0), RttiTypeCtor_35, 1) = ((MR_Box) (TypeName_33));
              MR_hl_field(MR_mktag(0), RttiTypeCtor_35, 2) = ((MR_Box) (Var_68));
            }
            {
              Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_3));
              MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (NumUnivQTvars_6));
              MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (ExistQTvars_7));
            }
            mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, Var_90, TypeArgs_26, &PseudoArgs_63);
            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_4));
              MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (PseudoArgs_63));
              MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Var_68));
            }
            mercury__require__expect_4_p_0(Var_59, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "arity mismatch");
            if ((PseudoArgs_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *PseudoTypeInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) RttiTypeCtor_35);
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *PseudoTypeInfo_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RttiTypeCtor_35));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PseudoArgs_63));
              }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeCtor_25;
          MR_Word TypeArgs_26;
          MR_Integer Var_68;
          MR_Word Var_69;
          MR_Word VarArityId_27;
          MR_Word PredOrFunc_73;
          MR_Word _Purity_72;
          MR_Word Var_75;

          parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_5, &TypeCtor_25, &TypeArgs_26);
          Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_25, (MR_Integer) 0)));
          Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_25, (MR_Integer) 1)));
          succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_5, &_Purity_72, &PredOrFunc_73, &Var_75);
          if (succeeded)
          {
            switch (PredOrFunc_73) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                VarArityId_27 = (MR_Integer) 1;
                break;
              case (MR_Integer) 0:
                VarArityId_27 = (MR_Integer) 0;
                break;
            }
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Var_76;

            succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_5, &Var_76);
            if (succeeded)
            {
              VarArityId_27 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            MR_Word PseudoArgs_30;
            MR_Word Var_53;
            MR_Word Var_81;

            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_1));
              MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (NumUnivQTvars_6));
              MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (ExistQTvars_7));
            }
            mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, Var_81, TypeArgs_26, &PseudoArgs_30);
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_2));
              MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (VarArityId_27));
              MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (PseudoArgs_30));
              MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (Var_68));
            }
            mercury__require__expect_4_p_0(Var_53, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "var arity mismatch");
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *PseudoTypeInfo_8 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (VarArityId_27));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (PseudoArgs_30));
            }
          }
          else
          {
            MR_String TypeName_33;
            MR_Word TypeModule_34;
            MR_Word RttiTypeCtor_35;
            MR_Word Var_59;
            MR_Word PseudoArgs_63;
            MR_Word Var_90;

            TypeName_33 = mdbcomp__sym_name__unqualify_name_1_f_0(Var_69);
            mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(Var_69, (MR_Word) &backend_libs__pseudo_type_info_scalar_common_4[0], &TypeModule_34);
            {
              RttiTypeCtor_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RttiTypeCtor_35, 0) = ((MR_Box) (TypeModule_34));
              MR_hl_field(MR_mktag(0), RttiTypeCtor_35, 1) = ((MR_Box) (TypeName_33));
              MR_hl_field(MR_mktag(0), RttiTypeCtor_35, 2) = ((MR_Box) (Var_68));
            }
            {
              Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_3));
              MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (NumUnivQTvars_6));
              MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (ExistQTvars_7));
            }
            mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, Var_90, TypeArgs_26, &PseudoArgs_63);
            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_4));
              MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (PseudoArgs_63));
              MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Var_68));
            }
            mercury__require__expect_4_p_0(Var_59, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "arity mismatch");
            if ((PseudoArgs_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *PseudoTypeInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) RttiTypeCtor_35);
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *PseudoTypeInfo_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RttiTypeCtor_35));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PseudoArgs_63));
              }
          }
        }
        break;
    }
  }
}

void mercury__backend_libs__pseudo_type_info__init(void)
{
}

void mercury__backend_libs__pseudo_type_info__init_type_tables(void)
{
}

void mercury__backend_libs__pseudo_type_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__pseudo_type_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.pseudo_type_info.
