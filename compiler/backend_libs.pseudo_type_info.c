/*
** Automatically generated from `pseudo_type_info.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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


/* :- module backend_libs.pseudo_type_info. */
/* :- implementation. */

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
#include "libs.compiler_util.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_type_info_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__pseudo_type_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__pseudo_type_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__178__1_2_p_0(
  MR_Word backend_libs__pseudo_type_info__TypeInfoArgs_28,
  MR_Integer backend_libs__pseudo_type_info__HeadVar__2_31);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__168__1_3_p_0(
  MR_Word backend_libs__pseudo_type_info__VarArityId_7,
  MR_Word backend_libs__pseudo_type_info__TypeInfoArgs_10,
  MR_Integer backend_libs__pseudo_type_info__HeadVar__3_31);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__114__1_2_p_0(
  MR_Word backend_libs__pseudo_type_info__PseudoArgs_63,
  MR_Integer backend_libs__pseudo_type_info__HeadVar__2_68);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__103__1_3_p_0(
  MR_Word backend_libs__pseudo_type_info__VarArityId_27,
  MR_Word backend_libs__pseudo_type_info__PseudoArgs_30,
  MR_Integer backend_libs__pseudo_type_info__HeadVar__3_68);

static void MR_CALL 
backend_libs__pseudo_type_info__generate_plain_args_2_p_0_1(
  MR_Box backend_libs__pseudo_type_info__closure_arg,
  MR_Box backend_libs__pseudo_type_info__wrapper_arg_1,
  MR_Box * backend_libs__pseudo_type_info__wrapper_arg_2);

static void MR_CALL 
backend_libs__pseudo_type_info__generate_plain_args_2_p_0(
  MR_Word backend_libs__pseudo_type_info__TypeArgs_3,
  MR_Word * backend_libs__pseudo_type_info__PseudoArgs_4);

static void MR_CALL 
backend_libs__pseudo_type_info__generate_pseudo_arg_4_p_0(
  MR_Integer backend_libs__pseudo_type_info__NumUnivQTvars_5,
  MR_Word backend_libs__pseudo_type_info__ExistQTvars_6,
  MR_Word backend_libs__pseudo_type_info__TypeArg_7,
  MR_Word * backend_libs__pseudo_type_info__MaybePseudoArg_8);

static void MR_CALL 
backend_libs__pseudo_type_info__generate_pseudo_args_4_p_0_1(
  MR_Box backend_libs__pseudo_type_info__closure_arg,
  MR_Box backend_libs__pseudo_type_info__wrapper_arg_1,
  MR_Box * backend_libs__pseudo_type_info__wrapper_arg_2);

static void MR_CALL 
backend_libs__pseudo_type_info__generate_pseudo_args_4_p_0(
  MR_Word backend_libs__pseudo_type_info__TypeArgs_5,
  MR_Integer backend_libs__pseudo_type_info__NumUnivQTvars_6,
  MR_Word backend_libs__pseudo_type_info__ExistQTvars_7,
  MR_Word * backend_libs__pseudo_type_info__PseudoArgs_8);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_2(
  MR_Box backend_libs__pseudo_type_info__closure_arg);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_1(
  MR_Box backend_libs__pseudo_type_info__closure_arg);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_3(
  MR_Box backend_libs__pseudo_type_info__closure_arg);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_2(
  MR_Box backend_libs__pseudo_type_info__closure_arg);

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_1(
  MR_Box backend_libs__pseudo_type_info__closure_arg);


static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_1[1][2];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_2[2][6];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_3[1][1];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_4[4][5];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_5[1][7];

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_6[1][3];




static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_2[2][6] = {
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

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "builtin"))
  },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_4[4][5] = {
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
    ((MR_Box) (&backend_libs__pseudo_type_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0))
  },
};

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_5[1][7] = {
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

static /* final */ const MR_Box backend_libs__pseudo_type_info_scalar_common_6[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_4[3])),
    ((MR_Box) (backend_libs__pseudo_type_info__generate_plain_args_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__178__1_2_p_0(
  MR_Word backend_libs__pseudo_type_info__TypeInfoArgs_28,
  MR_Integer backend_libs__pseudo_type_info__HeadVar__2_31)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;
    MR_Integer backend_libs__pseudo_type_info__NumPseudoArgs_35;

    {
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, backend_libs__pseudo_type_info__TypeInfoArgs_28, &backend_libs__pseudo_type_info__NumPseudoArgs_35);
    }
    backend_libs__pseudo_type_info__succeeded = (backend_libs__pseudo_type_info__NumPseudoArgs_35 == backend_libs__pseudo_type_info__HeadVar__2_31);
    return backend_libs__pseudo_type_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__168__1_3_p_0(
  MR_Word backend_libs__pseudo_type_info__VarArityId_7,
  MR_Word backend_libs__pseudo_type_info__TypeInfoArgs_10,
  MR_Integer backend_libs__pseudo_type_info__HeadVar__3_31)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;
    MR_Integer backend_libs__pseudo_type_info__NumPseudoArgs_36;

    {
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, backend_libs__pseudo_type_info__TypeInfoArgs_10, &backend_libs__pseudo_type_info__NumPseudoArgs_36);
    }
    switch (backend_libs__pseudo_type_info__VarArityId_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer backend_libs__pseudo_type_info__V_37_37 = (backend_libs__pseudo_type_info__NumPseudoArgs_36 - backend_libs__pseudo_type_info__HeadVar__3_31);

          backend_libs__pseudo_type_info__succeeded = (backend_libs__pseudo_type_info__V_37_37 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        backend_libs__pseudo_type_info__succeeded = (backend_libs__pseudo_type_info__NumPseudoArgs_36 == backend_libs__pseudo_type_info__HeadVar__3_31);
        break;
    }
    return backend_libs__pseudo_type_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__114__1_2_p_0(
  MR_Word backend_libs__pseudo_type_info__PseudoArgs_63,
  MR_Integer backend_libs__pseudo_type_info__HeadVar__2_68)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;
    MR_Integer backend_libs__pseudo_type_info__NumPseudoArgs_72;

    {
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, backend_libs__pseudo_type_info__PseudoArgs_63, &backend_libs__pseudo_type_info__NumPseudoArgs_72);
    }
    backend_libs__pseudo_type_info__succeeded = (backend_libs__pseudo_type_info__NumPseudoArgs_72 == backend_libs__pseudo_type_info__HeadVar__2_68);
    return backend_libs__pseudo_type_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__103__1_3_p_0(
  MR_Word backend_libs__pseudo_type_info__VarArityId_27,
  MR_Word backend_libs__pseudo_type_info__PseudoArgs_30,
  MR_Integer backend_libs__pseudo_type_info__HeadVar__3_68)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;
    MR_Integer backend_libs__pseudo_type_info__NumPseudoArgs_73;

    {
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, backend_libs__pseudo_type_info__PseudoArgs_30, &backend_libs__pseudo_type_info__NumPseudoArgs_73);
    }
    switch (backend_libs__pseudo_type_info__VarArityId_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer backend_libs__pseudo_type_info__V_74_74 = (backend_libs__pseudo_type_info__NumPseudoArgs_73 - backend_libs__pseudo_type_info__HeadVar__3_68);

          backend_libs__pseudo_type_info__succeeded = (backend_libs__pseudo_type_info__V_74_74 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        backend_libs__pseudo_type_info__succeeded = (backend_libs__pseudo_type_info__NumPseudoArgs_73 == backend_libs__pseudo_type_info__HeadVar__3_68);
        break;
    }
    return backend_libs__pseudo_type_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__pseudo_type_info__generate_plain_args_2_p_0_1(
  MR_Box backend_libs__pseudo_type_info__closure_arg,
  MR_Box backend_libs__pseudo_type_info__wrapper_arg_1,
  MR_Box * backend_libs__pseudo_type_info__wrapper_arg_2)
{
  {
    MR_Box backend_libs__pseudo_type_info__closure = backend_libs__pseudo_type_info__closure_arg;
    MR_Word backend_libs__pseudo_type_info__conv0_TypeInfo_4;

    {
      backend_libs__pseudo_type_info__construct_type_info_2_p_0(((MR_Word) backend_libs__pseudo_type_info__wrapper_arg_1), &backend_libs__pseudo_type_info__conv0_TypeInfo_4);
    }
    *backend_libs__pseudo_type_info__wrapper_arg_2 = ((MR_Box) (backend_libs__pseudo_type_info__conv0_TypeInfo_4));
  }
}

static void MR_CALL 
backend_libs__pseudo_type_info__generate_plain_args_2_p_0(
  MR_Word backend_libs__pseudo_type_info__TypeArgs_3,
  MR_Word * backend_libs__pseudo_type_info__PseudoArgs_4)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;

    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, (MR_Word) &backend_libs__pseudo_type_info_scalar_common_6[0], backend_libs__pseudo_type_info__TypeArgs_3, backend_libs__pseudo_type_info__PseudoArgs_4);
    }
  }
}

static void MR_CALL 
backend_libs__pseudo_type_info__generate_pseudo_arg_4_p_0(
  MR_Integer backend_libs__pseudo_type_info__NumUnivQTvars_5,
  MR_Word backend_libs__pseudo_type_info__ExistQTvars_6,
  MR_Word backend_libs__pseudo_type_info__TypeArg_7,
  MR_Word * backend_libs__pseudo_type_info__MaybePseudoArg_8)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;

    {
      backend_libs__pseudo_type_info__succeeded = parse_tree__prog_type__type_is_ground_1_p_0(backend_libs__pseudo_type_info__TypeArg_7);
    }
    if (backend_libs__pseudo_type_info__succeeded)
      {
        MR_Word backend_libs__pseudo_type_info__PseudoArg_9;

        {
          backend_libs__pseudo_type_info__construct_type_info_2_p_0(backend_libs__pseudo_type_info__TypeArg_7, &backend_libs__pseudo_type_info__PseudoArg_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__pseudo_type_info__MaybePseudoArg_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__pseudo_type_info__PseudoArg_9));
        }
      }
    else
      {
        MR_Word backend_libs__pseudo_type_info__PseudoArg_10;

        {
          backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(backend_libs__pseudo_type_info__TypeArg_7, backend_libs__pseudo_type_info__NumUnivQTvars_5, backend_libs__pseudo_type_info__ExistQTvars_6, &backend_libs__pseudo_type_info__PseudoArg_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *backend_libs__pseudo_type_info__MaybePseudoArg_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__pseudo_type_info__PseudoArg_10));
        }
      }
  }
}

static void MR_CALL 
backend_libs__pseudo_type_info__generate_pseudo_args_4_p_0_1(
  MR_Box backend_libs__pseudo_type_info__closure_arg,
  MR_Box backend_libs__pseudo_type_info__wrapper_arg_1,
  MR_Box * backend_libs__pseudo_type_info__wrapper_arg_2)
{
  {
    MR_Box backend_libs__pseudo_type_info__closure = backend_libs__pseudo_type_info__closure_arg;
    MR_Word backend_libs__pseudo_type_info__conv0_MaybePseudoArg_8;

    {
      backend_libs__pseudo_type_info__generate_pseudo_arg_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__pseudo_type_info__wrapper_arg_1), &backend_libs__pseudo_type_info__conv0_MaybePseudoArg_8);
    }
    *backend_libs__pseudo_type_info__wrapper_arg_2 = ((MR_Box) (backend_libs__pseudo_type_info__conv0_MaybePseudoArg_8));
  }
}

static void MR_CALL 
backend_libs__pseudo_type_info__generate_pseudo_args_4_p_0(
  MR_Word backend_libs__pseudo_type_info__TypeArgs_5,
  MR_Integer backend_libs__pseudo_type_info__NumUnivQTvars_6,
  MR_Word backend_libs__pseudo_type_info__ExistQTvars_7,
  MR_Word * backend_libs__pseudo_type_info__PseudoArgs_8)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;
    MR_Word backend_libs__pseudo_type_info__V_9_9;

    {
      backend_libs__pseudo_type_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_9_9, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_9_9, 1) = ((MR_Box) (backend_libs__pseudo_type_info__generate_pseudo_args_4_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_9_9, 3) = ((MR_Box) (backend_libs__pseudo_type_info__NumUnivQTvars_6));
      MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_9_9, 4) = ((MR_Box) (backend_libs__pseudo_type_info__ExistQTvars_7));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, backend_libs__pseudo_type_info__V_9_9, backend_libs__pseudo_type_info__TypeArgs_5, backend_libs__pseudo_type_info__PseudoArgs_8);
    }
  }
}

void MR_CALL 
backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(
  MR_Word backend_libs__pseudo_type_info__Type_5,
  MR_Integer backend_libs__pseudo_type_info__NumUnivQTvars_6,
  MR_Word backend_libs__pseudo_type_info__ExistQTvars_7,
  MR_Word * backend_libs__pseudo_type_info__MaybePseudoTypeInfo_8)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;

    {
      backend_libs__pseudo_type_info__succeeded = parse_tree__prog_type__type_is_ground_1_p_0(backend_libs__pseudo_type_info__Type_5);
    }
    if (backend_libs__pseudo_type_info__succeeded)
      {
        MR_Word backend_libs__pseudo_type_info__TypeInfo_9;

        {
          backend_libs__pseudo_type_info__construct_type_info_2_p_0(backend_libs__pseudo_type_info__Type_5, &backend_libs__pseudo_type_info__TypeInfo_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__pseudo_type_info__MaybePseudoTypeInfo_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__pseudo_type_info__TypeInfo_9));
        }
      }
    else
      {
        MR_Word backend_libs__pseudo_type_info__PseudoTypeInfo_10;

        {
          backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(backend_libs__pseudo_type_info__Type_5, backend_libs__pseudo_type_info__NumUnivQTvars_6, backend_libs__pseudo_type_info__ExistQTvars_7, &backend_libs__pseudo_type_info__PseudoTypeInfo_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *backend_libs__pseudo_type_info__MaybePseudoTypeInfo_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__pseudo_type_info__PseudoTypeInfo_10));
        }
      }
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_2(
  MR_Box backend_libs__pseudo_type_info__closure_arg)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;
    MR_Box backend_libs__pseudo_type_info__closure = backend_libs__pseudo_type_info__closure_arg;

    {
      backend_libs__pseudo_type_info__succeeded = backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__178__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__pseudo_type_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0_1(
  MR_Box backend_libs__pseudo_type_info__closure_arg)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;
    MR_Box backend_libs__pseudo_type_info__closure = backend_libs__pseudo_type_info__closure_arg;

    {
      backend_libs__pseudo_type_info__succeeded = backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_type_info__168__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 5))));
    }
    return backend_libs__pseudo_type_info__succeeded;
  }
}

void MR_CALL 
backend_libs__pseudo_type_info__construct_type_info_2_p_0(
  MR_Word backend_libs__pseudo_type_info__Type_3,
  MR_Word * backend_libs__pseudo_type_info__TypeInfo_4)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;
    MR_Word backend_libs__pseudo_type_info__TypeCtor_5;
    MR_Word backend_libs__pseudo_type_info__TypeArgs_6;
    MR_Integer backend_libs__pseudo_type_info__V_31_31;
    MR_Word backend_libs__pseudo_type_info__V_32_32;
    MR_Word backend_libs__pseudo_type_info__VarArityId_7;
    MR_Word backend_libs__pseudo_type_info__PredOrFunc_36;
    MR_Word backend_libs__pseudo_type_info___Purity_35;
    MR_Word backend_libs__pseudo_type_info__V_38_38;

    {
      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(backend_libs__pseudo_type_info__Type_3, &backend_libs__pseudo_type_info__TypeCtor_5, &backend_libs__pseudo_type_info__TypeArgs_6);
    }
    backend_libs__pseudo_type_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__TypeCtor_5, (MR_Integer) 0)));
    backend_libs__pseudo_type_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__TypeCtor_5, (MR_Integer) 1)));
    {
      backend_libs__pseudo_type_info__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(backend_libs__pseudo_type_info__Type_3, &backend_libs__pseudo_type_info___Purity_35, &backend_libs__pseudo_type_info__PredOrFunc_36, &backend_libs__pseudo_type_info__V_38_38);
    }
    if (backend_libs__pseudo_type_info__succeeded)
      {
        switch (backend_libs__pseudo_type_info__PredOrFunc_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            backend_libs__pseudo_type_info__VarArityId_7 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            backend_libs__pseudo_type_info__VarArityId_7 = (MR_Integer) 0;
            break;
        }
        backend_libs__pseudo_type_info__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word backend_libs__pseudo_type_info__V_39_39;

        {
          backend_libs__pseudo_type_info__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(backend_libs__pseudo_type_info__Type_3, &backend_libs__pseudo_type_info__V_39_39);
        }
        if (backend_libs__pseudo_type_info__succeeded)
          {
            backend_libs__pseudo_type_info__VarArityId_7 = (MR_Integer) 2;
            backend_libs__pseudo_type_info__succeeded = MR_TRUE;
          }
      }
    if (backend_libs__pseudo_type_info__succeeded)
      {
        MR_Word backend_libs__pseudo_type_info__TypeInfoArgs_10;
        MR_Word backend_libs__pseudo_type_info__V_18_18;

        {
          backend_libs__pseudo_type_info__generate_plain_args_2_p_0(backend_libs__pseudo_type_info__TypeArgs_6, &backend_libs__pseudo_type_info__TypeInfoArgs_10);
        }
        {
          backend_libs__pseudo_type_info__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_18_18, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_2[1]));
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_18_18, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_type_info_2_p_0_1));
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_18_18, 3) = ((MR_Box) (backend_libs__pseudo_type_info__VarArityId_7));
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_18_18, 4) = ((MR_Box) (backend_libs__pseudo_type_info__TypeInfoArgs_10));
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_18_18, 5) = ((MR_Box) (backend_libs__pseudo_type_info__V_31_31));
        }
        {
          mercury__require__expect_4_p_0(backend_libs__pseudo_type_info__V_18_18, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_type_info\'/2", (MR_String) "arity mismatch");
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__pseudo_type_info__TypeInfo_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__pseudo_type_info__VarArityId_7));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (backend_libs__pseudo_type_info__TypeInfoArgs_10));
        }
      }
    else
      {
        MR_String backend_libs__pseudo_type_info__TypeName_13;
        MR_Word backend_libs__pseudo_type_info__TypeModule_14;
        MR_Word backend_libs__pseudo_type_info__RttiTypeCtor_15;
        MR_Word backend_libs__pseudo_type_info__V_24_24;
        MR_Word backend_libs__pseudo_type_info__TypeInfoArgs_28;

        {
          backend_libs__pseudo_type_info__TypeName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__pseudo_type_info__V_32_32);
        }
        {
          mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(backend_libs__pseudo_type_info__V_32_32, (MR_Word) &backend_libs__pseudo_type_info_scalar_common_3[0], &backend_libs__pseudo_type_info__TypeModule_14);
        }
        {
          backend_libs__pseudo_type_info__RttiTypeCtor_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__RttiTypeCtor_15, 0) = ((MR_Box) (backend_libs__pseudo_type_info__TypeModule_14));
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__RttiTypeCtor_15, 1) = ((MR_Box) (backend_libs__pseudo_type_info__TypeName_13));
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__RttiTypeCtor_15, 2) = ((MR_Box) (backend_libs__pseudo_type_info__V_31_31));
        }
        {
          backend_libs__pseudo_type_info__generate_plain_args_2_p_0(backend_libs__pseudo_type_info__TypeArgs_6, &backend_libs__pseudo_type_info__TypeInfoArgs_28);
        }
        {
          backend_libs__pseudo_type_info__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_24_24, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_24_24, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_type_info_2_p_0_2));
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_24_24, 3) = ((MR_Box) (backend_libs__pseudo_type_info__TypeInfoArgs_28));
          MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_24_24, 4) = ((MR_Box) (backend_libs__pseudo_type_info__V_31_31));
        }
        {
          mercury__require__expect_4_p_0(backend_libs__pseudo_type_info__V_24_24, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_type_info\'/2", (MR_String) "arity mismatch");
        }
        if ((backend_libs__pseudo_type_info__TypeInfoArgs_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *backend_libs__pseudo_type_info__TypeInfo_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__pseudo_type_info__RttiTypeCtor_15);
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *backend_libs__pseudo_type_info__TypeInfo_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__pseudo_type_info__RttiTypeCtor_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__pseudo_type_info__TypeInfoArgs_28));
          }
      }
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_3(
  MR_Box backend_libs__pseudo_type_info__closure_arg)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;
    MR_Box backend_libs__pseudo_type_info__closure = backend_libs__pseudo_type_info__closure_arg;

    {
      backend_libs__pseudo_type_info__succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__pseudo_type_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_2(
  MR_Box backend_libs__pseudo_type_info__closure_arg)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;
    MR_Box backend_libs__pseudo_type_info__closure = backend_libs__pseudo_type_info__closure_arg;

    {
      backend_libs__pseudo_type_info__succeeded = backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__114__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__pseudo_type_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_1(
  MR_Box backend_libs__pseudo_type_info__closure_arg)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;
    MR_Box backend_libs__pseudo_type_info__closure = backend_libs__pseudo_type_info__closure_arg;

    {
      backend_libs__pseudo_type_info__succeeded = backend_libs__pseudo_type_info__IntroducedFrom__pred__construct_pseudo_type_info__103__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__closure, (MR_Integer) 5))));
    }
    return backend_libs__pseudo_type_info__succeeded;
  }
}

void MR_CALL 
backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(
  MR_Word backend_libs__pseudo_type_info__Type_5,
  MR_Integer backend_libs__pseudo_type_info__NumUnivQTvars_6,
  MR_Word backend_libs__pseudo_type_info__ExistQTvars_7,
  MR_Word * backend_libs__pseudo_type_info__PseudoTypeInfo_8)
{
  {
    MR_bool backend_libs__pseudo_type_info__succeeded;

    switch (MR_tag((MR_Word) backend_libs__pseudo_type_info__Type_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word backend_libs__pseudo_type_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__Type_5, (MR_Integer) 0)));
          MR_Integer backend_libs__pseudo_type_info__VarInt0_40;
          MR_Integer backend_libs__pseudo_type_info__VarInt_41;
          MR_Word backend_libs__pseudo_type_info__V_48_48;
          MR_Word backend_libs__pseudo_type_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__Type_5, (MR_Integer) 1)));

          {
            mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, backend_libs__pseudo_type_info__Var_38, &backend_libs__pseudo_type_info__VarInt0_40);
          }
          backend_libs__pseudo_type_info__succeeded = (backend_libs__pseudo_type_info__VarInt0_40 <= backend_libs__pseudo_type_info__NumUnivQTvars_6);
          if (!(backend_libs__pseudo_type_info__succeeded))
            {
              backend_libs__pseudo_type_info__succeeded = (backend_libs__pseudo_type_info__NumUnivQTvars_6 < (MR_Integer) 0);
            }
          if (backend_libs__pseudo_type_info__succeeded)
            backend_libs__pseudo_type_info__VarInt_41 = backend_libs__pseudo_type_info__VarInt0_40;
          else
            {
              MR_Integer backend_libs__pseudo_type_info__ExistNum0_42;

              {
                backend_libs__pseudo_type_info__succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) &backend_libs__pseudo_type_info_scalar_common_1[0], backend_libs__pseudo_type_info__ExistQTvars_7, ((MR_Box) (backend_libs__pseudo_type_info__Var_38)), &backend_libs__pseudo_type_info__ExistNum0_42);
              }
              if (backend_libs__pseudo_type_info__succeeded)
                {
                  backend_libs__pseudo_type_info__VarInt_41 = (backend_libs__pseudo_type_info__ExistNum0_42 + (MR_Integer) 512);
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
            backend_libs__pseudo_type_info__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_48_48, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_48_48, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_3));
            MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_48_48, 3) = ((MR_Box) (backend_libs__pseudo_type_info__VarInt_41));
            MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_48_48, 4) = ((MR_Box) ((MR_Integer) 1024));
          }
          {
            mercury__require__expect_4_p_0(backend_libs__pseudo_type_info__V_48_48, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "type var exceeds limit");
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *backend_libs__pseudo_type_info__PseudoTypeInfo_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (backend_libs__pseudo_type_info__VarInt_41));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word backend_libs__pseudo_type_info__TypeCtor_25;
          MR_Word backend_libs__pseudo_type_info__TypeArgs_26;
          MR_Integer backend_libs__pseudo_type_info__V_68_68;
          MR_Word backend_libs__pseudo_type_info__V_69_69;
          MR_Word backend_libs__pseudo_type_info__VarArityId_27;
          MR_Word backend_libs__pseudo_type_info__PredOrFunc_73;
          MR_Word backend_libs__pseudo_type_info___Purity_72;
          MR_Word backend_libs__pseudo_type_info__V_75_75;

          {
            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(backend_libs__pseudo_type_info__Type_5, &backend_libs__pseudo_type_info__TypeCtor_25, &backend_libs__pseudo_type_info__TypeArgs_26);
          }
          backend_libs__pseudo_type_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__TypeCtor_25, (MR_Integer) 0)));
          backend_libs__pseudo_type_info__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__TypeCtor_25, (MR_Integer) 1)));
          {
            backend_libs__pseudo_type_info__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(backend_libs__pseudo_type_info__Type_5, &backend_libs__pseudo_type_info___Purity_72, &backend_libs__pseudo_type_info__PredOrFunc_73, &backend_libs__pseudo_type_info__V_75_75);
          }
          if (backend_libs__pseudo_type_info__succeeded)
            {
              switch (backend_libs__pseudo_type_info__PredOrFunc_73) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  backend_libs__pseudo_type_info__VarArityId_27 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  backend_libs__pseudo_type_info__VarArityId_27 = (MR_Integer) 0;
                  break;
              }
              backend_libs__pseudo_type_info__succeeded = MR_TRUE;
            }
          else
            {
              MR_Word backend_libs__pseudo_type_info__V_76_76;

              {
                backend_libs__pseudo_type_info__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(backend_libs__pseudo_type_info__Type_5, &backend_libs__pseudo_type_info__V_76_76);
              }
              if (backend_libs__pseudo_type_info__succeeded)
                {
                  backend_libs__pseudo_type_info__VarArityId_27 = (MR_Integer) 2;
                  backend_libs__pseudo_type_info__succeeded = MR_TRUE;
                }
            }
          if (backend_libs__pseudo_type_info__succeeded)
            {
              MR_Word backend_libs__pseudo_type_info__PseudoArgs_30;
              MR_Word backend_libs__pseudo_type_info__V_53_53;

              {
                backend_libs__pseudo_type_info__generate_pseudo_args_4_p_0(backend_libs__pseudo_type_info__TypeArgs_26, backend_libs__pseudo_type_info__NumUnivQTvars_6, backend_libs__pseudo_type_info__ExistQTvars_7, &backend_libs__pseudo_type_info__PseudoArgs_30);
              }
              {
                backend_libs__pseudo_type_info__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_53_53, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_53_53, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_1));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_53_53, 3) = ((MR_Box) (backend_libs__pseudo_type_info__VarArityId_27));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_53_53, 4) = ((MR_Box) (backend_libs__pseudo_type_info__PseudoArgs_30));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_53_53, 5) = ((MR_Box) (backend_libs__pseudo_type_info__V_68_68));
              }
              {
                mercury__require__expect_4_p_0(backend_libs__pseudo_type_info__V_53_53, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "var arity mismatch");
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *backend_libs__pseudo_type_info__PseudoTypeInfo_8 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__pseudo_type_info__VarArityId_27));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (backend_libs__pseudo_type_info__PseudoArgs_30));
              }
            }
          else
            {
              MR_String backend_libs__pseudo_type_info__TypeName_33;
              MR_Word backend_libs__pseudo_type_info__TypeModule_34;
              MR_Word backend_libs__pseudo_type_info__RttiTypeCtor_35;
              MR_Word backend_libs__pseudo_type_info__V_59_59;
              MR_Word backend_libs__pseudo_type_info__PseudoArgs_63;

              {
                backend_libs__pseudo_type_info__TypeName_33 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__pseudo_type_info__V_69_69);
              }
              {
                mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(backend_libs__pseudo_type_info__V_69_69, (MR_Word) &backend_libs__pseudo_type_info_scalar_common_3[0], &backend_libs__pseudo_type_info__TypeModule_34);
              }
              {
                backend_libs__pseudo_type_info__RttiTypeCtor_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__RttiTypeCtor_35, 0) = ((MR_Box) (backend_libs__pseudo_type_info__TypeModule_34));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__RttiTypeCtor_35, 1) = ((MR_Box) (backend_libs__pseudo_type_info__TypeName_33));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__RttiTypeCtor_35, 2) = ((MR_Box) (backend_libs__pseudo_type_info__V_68_68));
              }
              {
                backend_libs__pseudo_type_info__generate_pseudo_args_4_p_0(backend_libs__pseudo_type_info__TypeArgs_26, backend_libs__pseudo_type_info__NumUnivQTvars_6, backend_libs__pseudo_type_info__ExistQTvars_7, &backend_libs__pseudo_type_info__PseudoArgs_63);
              }
              {
                backend_libs__pseudo_type_info__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_59_59, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_59_59, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_2));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_59_59, 3) = ((MR_Box) (backend_libs__pseudo_type_info__PseudoArgs_63));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_59_59, 4) = ((MR_Box) (backend_libs__pseudo_type_info__V_68_68));
              }
              {
                mercury__require__expect_4_p_0(backend_libs__pseudo_type_info__V_59_59, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "arity mismatch");
              }
              if ((backend_libs__pseudo_type_info__PseudoArgs_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *backend_libs__pseudo_type_info__PseudoTypeInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__pseudo_type_info__RttiTypeCtor_35);
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *backend_libs__pseudo_type_info__PseudoTypeInfo_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__pseudo_type_info__RttiTypeCtor_35));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__pseudo_type_info__PseudoArgs_63));
                }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word backend_libs__pseudo_type_info__TypeCtor_25;
          MR_Word backend_libs__pseudo_type_info__TypeArgs_26;
          MR_Integer backend_libs__pseudo_type_info__V_68_68;
          MR_Word backend_libs__pseudo_type_info__V_69_69;
          MR_Word backend_libs__pseudo_type_info__VarArityId_27;
          MR_Word backend_libs__pseudo_type_info__PredOrFunc_73;
          MR_Word backend_libs__pseudo_type_info___Purity_72;
          MR_Word backend_libs__pseudo_type_info__V_75_75;

          {
            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(backend_libs__pseudo_type_info__Type_5, &backend_libs__pseudo_type_info__TypeCtor_25, &backend_libs__pseudo_type_info__TypeArgs_26);
          }
          backend_libs__pseudo_type_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__TypeCtor_25, (MR_Integer) 0)));
          backend_libs__pseudo_type_info__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__TypeCtor_25, (MR_Integer) 1)));
          {
            backend_libs__pseudo_type_info__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(backend_libs__pseudo_type_info__Type_5, &backend_libs__pseudo_type_info___Purity_72, &backend_libs__pseudo_type_info__PredOrFunc_73, &backend_libs__pseudo_type_info__V_75_75);
          }
          if (backend_libs__pseudo_type_info__succeeded)
            {
              switch (backend_libs__pseudo_type_info__PredOrFunc_73) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  backend_libs__pseudo_type_info__VarArityId_27 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  backend_libs__pseudo_type_info__VarArityId_27 = (MR_Integer) 0;
                  break;
              }
              backend_libs__pseudo_type_info__succeeded = MR_TRUE;
            }
          else
            {
              MR_Word backend_libs__pseudo_type_info__V_76_76;

              {
                backend_libs__pseudo_type_info__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(backend_libs__pseudo_type_info__Type_5, &backend_libs__pseudo_type_info__V_76_76);
              }
              if (backend_libs__pseudo_type_info__succeeded)
                {
                  backend_libs__pseudo_type_info__VarArityId_27 = (MR_Integer) 2;
                  backend_libs__pseudo_type_info__succeeded = MR_TRUE;
                }
            }
          if (backend_libs__pseudo_type_info__succeeded)
            {
              MR_Word backend_libs__pseudo_type_info__PseudoArgs_30;
              MR_Word backend_libs__pseudo_type_info__V_53_53;

              {
                backend_libs__pseudo_type_info__generate_pseudo_args_4_p_0(backend_libs__pseudo_type_info__TypeArgs_26, backend_libs__pseudo_type_info__NumUnivQTvars_6, backend_libs__pseudo_type_info__ExistQTvars_7, &backend_libs__pseudo_type_info__PseudoArgs_30);
              }
              {
                backend_libs__pseudo_type_info__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_53_53, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_53_53, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_1));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_53_53, 3) = ((MR_Box) (backend_libs__pseudo_type_info__VarArityId_27));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_53_53, 4) = ((MR_Box) (backend_libs__pseudo_type_info__PseudoArgs_30));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_53_53, 5) = ((MR_Box) (backend_libs__pseudo_type_info__V_68_68));
              }
              {
                mercury__require__expect_4_p_0(backend_libs__pseudo_type_info__V_53_53, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "var arity mismatch");
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *backend_libs__pseudo_type_info__PseudoTypeInfo_8 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__pseudo_type_info__VarArityId_27));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (backend_libs__pseudo_type_info__PseudoArgs_30));
              }
            }
          else
            {
              MR_String backend_libs__pseudo_type_info__TypeName_33;
              MR_Word backend_libs__pseudo_type_info__TypeModule_34;
              MR_Word backend_libs__pseudo_type_info__RttiTypeCtor_35;
              MR_Word backend_libs__pseudo_type_info__V_59_59;
              MR_Word backend_libs__pseudo_type_info__PseudoArgs_63;

              {
                backend_libs__pseudo_type_info__TypeName_33 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__pseudo_type_info__V_69_69);
              }
              {
                mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(backend_libs__pseudo_type_info__V_69_69, (MR_Word) &backend_libs__pseudo_type_info_scalar_common_3[0], &backend_libs__pseudo_type_info__TypeModule_34);
              }
              {
                backend_libs__pseudo_type_info__RttiTypeCtor_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__RttiTypeCtor_35, 0) = ((MR_Box) (backend_libs__pseudo_type_info__TypeModule_34));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__RttiTypeCtor_35, 1) = ((MR_Box) (backend_libs__pseudo_type_info__TypeName_33));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__RttiTypeCtor_35, 2) = ((MR_Box) (backend_libs__pseudo_type_info__V_68_68));
              }
              {
                backend_libs__pseudo_type_info__generate_pseudo_args_4_p_0(backend_libs__pseudo_type_info__TypeArgs_26, backend_libs__pseudo_type_info__NumUnivQTvars_6, backend_libs__pseudo_type_info__ExistQTvars_7, &backend_libs__pseudo_type_info__PseudoArgs_63);
              }
              {
                backend_libs__pseudo_type_info__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_59_59, 0) = ((MR_Box) (&backend_libs__pseudo_type_info_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_59_59, 1) = ((MR_Box) (backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0_2));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_59_59, 3) = ((MR_Box) (backend_libs__pseudo_type_info__PseudoArgs_63));
                MR_hl_field(MR_mktag(0), backend_libs__pseudo_type_info__V_59_59, 4) = ((MR_Box) (backend_libs__pseudo_type_info__V_68_68));
              }
              {
                mercury__require__expect_4_p_0(backend_libs__pseudo_type_info__V_59_59, (MR_String) "backend_libs.pseudo_type_info", (MR_String) "predicate \140backend_libs.pseudo_type_info.construct_pseudo_type_info\'/4", (MR_String) "arity mismatch");
              }
              if ((backend_libs__pseudo_type_info__PseudoArgs_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *backend_libs__pseudo_type_info__PseudoTypeInfo_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__pseudo_type_info__RttiTypeCtor_35);
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *backend_libs__pseudo_type_info__PseudoTypeInfo_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__pseudo_type_info__RttiTypeCtor_35));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__pseudo_type_info__PseudoArgs_63));
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.pseudo_type_info. */
