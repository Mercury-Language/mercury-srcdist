/*
** Automatically generated from `foreign.m'
** by the Mercury compiler,
** version rotd-2017-09-02
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


/* :- module backend_libs.foreign. */
/* :- implementation. */

/*
INIT mercury__backend_libs__foreign__init
ENDINIT
*/

#include "backend_libs.foreign.mih"


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




static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0[2];

static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0;

static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1[1];

static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1;

static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_1[1];

static const MR_DuPtagLayout backend_libs__foreign__backend_libs__foreign__du_ptag_ordered_exported_type_0[2];

static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0[2];

static const MR_Integer backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0[2];

static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_exports__504__1_2_p_0(
  MR_Word WantedLang_5,
  MR_Word LambdaHeadVar__1_15);

static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_bodys__499__1_2_p_0(
  MR_Word WantedLang_5,
  MR_Word LambdaHeadVar__1_13);

static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_decls__494__1_2_p_0(
  MR_Word WantedLang_5,
  MR_Word LambdaHeadVar__1_14);

static void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(
  MR_Word TargetLanguage_7,
  MR_Word ForeignLanguage_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_Impl_0_13,
  MR_Word * STATE_VARIABLE_Impl_14);

static MR_bool MR_CALL 
backend_libs__foreign__filter_exports_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__foreign__filter_decls_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__foreign_scalar_common_1[1][1];

static /* final */ const MR_Box backend_libs__foreign_scalar_common_3[3][5];


/* sealed */ struct backend_libs__foreign__vector_common_type_2_0_s {
  const MR_String backend_libs__foreign__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct backend_libs__foreign__vector_common_type_2_0_s backend_libs__foreign_vector_common_2[24];



static /* final */ const MR_Box backend_libs__foreign_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box backend_libs__foreign_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0))
  },
};


static /* final */ const struct backend_libs__foreign__vector_common_type_2_0_s backend_libs__foreign_vector_common_2[24] = {
  /* row 0 */   {     (MR_String) "MR_Integer" },
  /* row 1 */   {     (MR_String) "MR_Unsigned" },
  /* row 2 */   {     (MR_String) "int8_t" },
  /* row 3 */   {     (MR_String) "uint8_t" },
  /* row 4 */   {     (MR_String) "int16_t" },
  /* row 5 */   {     (MR_String) "uint16_t" },
  /* row 6 */   {     (MR_String) "int32_t" },
  /* row 7 */   {     (MR_String) "uint32_t" },
  /* row 8 */   {     (MR_String) "int" },
  /* row 9 */   {     (MR_String) "uint" },
  /* row 10 */   {     (MR_String) "sbyte" },
  /* row 11 */   {     (MR_String) "byte" },
  /* row 12 */   {     (MR_String) "short" },
  /* row 13 */   {     (MR_String) "ushort" },
  /* row 14 */   {     (MR_String) "int" },
  /* row 15 */   {     (MR_String) "uint" },
  /* row 16 */   {     (MR_String) "int" },
  /* row 17 */   {     (MR_String) "int" },
  /* row 18 */   {     (MR_String) "byte" },
  /* row 19 */   {     (MR_String) "byte" },
  /* row 20 */   {     (MR_String) "short" },
  /* row 21 */   {     (MR_String) "short" },
  /* row 22 */   {     (MR_String) "int" },
  /* row 23 */   {     (MR_String) "int" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertions_0
};

static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0 = {
  (MR_String) "exported_type_foreign",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1 = {
  (MR_String) "exported_type_mercury",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0[1] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0
};

static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_1[1] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1
};

static const MR_DuPtagLayout backend_libs__foreign__backend_libs__foreign__du_ptag_ordered_exported_type_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_1
  }
};

static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0[2] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0,
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1
};

static const MR_Integer backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__foreign__backend_libs__foreign__type_ctor_info_exported_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__foreign____Unify____exported_type_0_0_10001)),
  ((MR_Box) (backend_libs__foreign____Compare____exported_type_0_0_10001)),
  (MR_String) "backend_libs.foreign",
  (MR_String) "exported_type",
  {     backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0 },
  {     backend_libs__foreign__backend_libs__foreign__du_ptag_ordered_exported_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0
};

static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_exports__504__1_2_p_0(
  MR_Word WantedLang_5,
  MR_Word LambdaHeadVar__1_15)
{
  {
    MR_bool succeeded;
    MR_Word Lang_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_15, (MR_Integer) 0)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_15, (MR_Integer) 1)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_15, (MR_Integer) 2)));
    MR_String Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_15, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_15, (MR_Integer) 4)));

    succeeded = (WantedLang_5 == Lang_20);
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_bodys__499__1_2_p_0(
  MR_Word WantedLang_5,
  MR_Word LambdaHeadVar__1_13)
{
  {
    MR_bool succeeded;
    MR_Word Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_13, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_13, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_13, (MR_Integer) 2)));

    succeeded = (WantedLang_5 == Lang_16);
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_decls__494__1_2_p_0(
  MR_Word WantedLang_5,
  MR_Word LambdaHeadVar__1_14)
{
  {
    MR_bool succeeded;
    MR_Word Lang_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_14, (MR_Integer) 0)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_14, (MR_Integer) 1)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_14, (MR_Integer) 2)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_14, (MR_Integer) 3)));

    succeeded = (WantedLang_5 == Lang_18);
    return succeeded;
  }
}

void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_8;

        mdbcomp__sym_name____Compare____sym_name_0_0(&Var_8, Var_23, ArgY1_5);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
          parse_tree__prog_data____Compare____foreign_type_assertions_0_0(HeadVar__1_1, Var_22, ArgY2_7);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, Var_24, ArgY1_16);
      }
    }
  }
}

MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____foreign_type_assertions_0_0(ArgX2_5, ArgY2_6);
      }
    }
    else
    {
      MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_7, ArgY1_8);
      }
    }
    return succeeded;
  }
}

MR_String MR_CALL 
backend_libs__foreign__decl_guard_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_String HeadVar__2_2;
    MR_String UppercaseModuleName_4;
    MR_String MangledModuleName_5;

    MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_3);
    mercury__string__to_upper_2_p_0(MangledModuleName_5, &UppercaseModuleName_4);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0(UppercaseModuleName_4, (MR_String) "_DECL_GUARD");
    return HeadVar__2_2;
  }
}

void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word _PragmaVars_2,
  MR_Word _PredName_3,
  MR_Word _PredOrFunc_4,
  MR_Word _Context_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_Impl_0_10,
  MR_Word * STATE_VARIABLE_Impl_11)
{
  backend_libs__foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_p_0(HeadVar__1_1, STATE_VARIABLE_ModuleInfo_0_6, STATE_VARIABLE_ModuleInfo_7, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_Impl_0_10, STATE_VARIABLE_Impl_11);
}

void MR_CALL 
backend_libs__foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_Impl_0_10,
  MR_Word * STATE_VARIABLE_Impl_11)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.extrude_pragma_implementation\'/11", (MR_String) "no suitable target languages available");
        return;
      }
    }
    else
    {
      MR_Word TargetLang_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ForeignLanguage_37;
      MR_Word TargetLangs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      ForeignLanguage_37 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(HeadVar__8_8);
      succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (ForeignLanguage_37)), HeadVar__1_1);
      if (succeeded)
      {
        *STATE_VARIABLE_Impl_11 = STATE_VARIABLE_Impl_0_10;
        *HeadVar__9_9 = HeadVar__8_8;
        *STATE_VARIABLE_ModuleInfo_7 = STATE_VARIABLE_ModuleInfo_0_6;
      }
      else
      {
        parse_tree__prog_data_foreign__set_foreign_language_3_p_0(TargetLang_28, HeadVar__8_8, HeadVar__9_9);
        backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(TargetLang_28, ForeignLanguage_37, STATE_VARIABLE_ModuleInfo_0_6, STATE_VARIABLE_ModuleInfo_7, STATE_VARIABLE_Impl_0_10, STATE_VARIABLE_Impl_11);
      }
    }
  }
}

static void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(
  MR_Word TargetLanguage_7,
  MR_Word ForeignLanguage_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_Impl_0_13,
  MR_Word * STATE_VARIABLE_Impl_14)
{
  {
    switch (TargetLanguage_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (ForeignLanguage_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            {
              MR_String Var_19;
              MR_String Var_21;
              MR_String Var_22;
              MR_String Var_23;
              MR_String Var_25;

              Var_22 = libs__globals__foreign_language_string_1_f_0(ForeignLanguage_8);
              Var_25 = libs__globals__foreign_language_string_1_f_0(TargetLanguage_7);
              Var_23 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", Var_25);
              Var_21 = mercury__string__f_43_43_2_f_0(Var_22, Var_23);
              Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", Var_21);
              {
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", Var_19);
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (ForeignLanguage_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            {
              MR_String Var_30;
              MR_String Var_32;
              MR_String Var_33;
              MR_String Var_34;
              MR_String Var_36;

              Var_33 = libs__globals__foreign_language_string_1_f_0(ForeignLanguage_8);
              Var_36 = libs__globals__foreign_language_string_1_f_0(TargetLanguage_7);
              Var_34 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", Var_36);
              Var_32 = mercury__string__f_43_43_2_f_0(Var_33, Var_34);
              Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", Var_32);
              {
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", Var_30);
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (ForeignLanguage_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_String Var_41;
              MR_String Var_43;
              MR_String Var_44;
              MR_String Var_45;
              MR_String Var_47;

              Var_44 = libs__globals__foreign_language_string_1_f_0(ForeignLanguage_8);
              Var_47 = libs__globals__foreign_language_string_1_f_0(TargetLanguage_7);
              Var_45 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", Var_47);
              Var_43 = mercury__string__f_43_43_2_f_0(Var_44, Var_45);
              Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", Var_43);
              {
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", Var_41);
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (ForeignLanguage_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
            {
              MR_String Var_52;
              MR_String Var_54;
              MR_String Var_55;
              MR_String Var_56;
              MR_String Var_58;

              Var_55 = libs__globals__foreign_language_string_1_f_0(ForeignLanguage_8);
              Var_58 = libs__globals__foreign_language_string_1_f_0(TargetLanguage_7);
              Var_56 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", Var_58);
              Var_54 = mercury__string__f_43_43_2_f_0(Var_55, Var_56);
              Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", Var_54);
              {
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", Var_52);
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
            }
            break;
        }
        break;
    }
    *STATE_VARIABLE_Impl_14 = STATE_VARIABLE_Impl_0_13;
    *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
  }
}

static MR_bool MR_CALL 
backend_libs__foreign__filter_exports_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_exports__504__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

void MR_CALL 
backend_libs__foreign__filter_exports_4_p_0(
  MR_Word WantedLang_5,
  MR_Word Exports0_6,
  MR_Word * LangExports_7,
  MR_Word * NotLangExports_8)
{
  {
    MR_bool succeeded;
    MR_Word IsWanted_9;

    {
      IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_exports_4_p_0_1));
      MR_hl_field(MR_mktag(0), IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), IsWanted_9, 3) = ((MR_Box) (WantedLang_5));
    }
    mercury__list__filter_4_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, IsWanted_9, Exports0_6, LangExports_7, NotLangExports_8);
  }
}

static MR_bool MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_bodys__499__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

void MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0(
  MR_Word WantedLang_5,
  MR_Word Bodys0_6,
  MR_Word * LangBodys_7,
  MR_Word * NotLangBodys_8)
{
  {
    MR_bool succeeded;
    MR_Word IsWanted_9;

    {
      IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_bodys_4_p_0_1));
      MR_hl_field(MR_mktag(0), IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), IsWanted_9, 3) = ((MR_Box) (WantedLang_5));
    }
    mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, IsWanted_9, Bodys0_6, LangBodys_7, NotLangBodys_8);
  }
}

static MR_bool MR_CALL 
backend_libs__foreign__filter_decls_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_decls__494__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

void MR_CALL 
backend_libs__foreign__filter_decls_4_p_0(
  MR_Word WantedLang_5,
  MR_Word Decls0_6,
  MR_Word * LangDecls_7,
  MR_Word * NotLangDecls_8)
{
  {
    MR_bool succeeded;
    MR_Word IsWanted_9;

    {
      IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_decls_4_p_0_1));
      MR_hl_field(MR_mktag(0), IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), IsWanted_9, 3) = ((MR_Box) (WantedLang_5));
    }
    mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, IsWanted_9, Decls0_6, LangDecls_7, NotLangDecls_8);
  }
}

MR_bool MR_CALL 
backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Body_5,
  MR_Word * UserEqComp_6)
{
  {
    MR_bool succeeded;
    MR_Word MaybeUserEqComp_8;
    MR_Word Var_7;
    MR_Word Var_9;

    backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(ModuleInfo_4, Body_5, &Var_7, &MaybeUserEqComp_8, &Var_9);
    succeeded = ((MR_tag((MR_Word) MaybeUserEqComp_8)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
      *UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeUserEqComp_8, (MR_Integer) 0)));
    return succeeded;
  }
}

void MR_CALL 
backend_libs__foreign__have_foreign_type_for_backend_3_p_0(
  MR_Word Target_4,
  MR_Word ForeignTypeBody_5,
  MR_Word * Have_6)
{
  {
    MR_bool succeeded;

    switch (Target_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 0)));
          MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 1)));
          MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 2)));
          MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 3)));
          MR_Word Var_7;

          succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0)));
            *Have_6 = (MR_Integer) 1;
          }
          else
            *Have_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 2)));
          MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 0)));
          MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 1)));
          MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 3)));
          MR_Word Var_9;

          succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 0)));
            *Have_6 = (MR_Integer) 1;
          }
          else
            *Have_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 3)));
          MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 0)));
          MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 1)));
          MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 2)));
          MR_Word Var_10;

          succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0)));
            *Have_6 = (MR_Integer) 1;
          }
          else
            *Have_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 1)));
          MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 0)));
          MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 2)));
          MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_5, (MR_Integer) 3)));
          MR_Word Var_8;

          succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0)));
            *Have_6 = (MR_Integer) 1;
          }
          else
            *Have_6 = (MR_Integer) 0;
        }
        break;
    }
  }
}

MR_String MR_CALL 
backend_libs__foreign__mercury_exported_type_to_string_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Lang_6,
  MR_Word Type_7)
{
  {
    MR_String HeadVar__4_4;
    MR_Word Var_8;

    Var_8 = backend_libs__foreign__to_exported_type_2_f_0(ModuleInfo_5, Type_7);
    HeadVar__4_4 = backend_libs__foreign__exported_type_to_string_2_f_0(Lang_6, Var_8);
    return HeadVar__4_4;
  }
}

MR_String MR_CALL 
backend_libs__foreign__exported_type_to_string_2_f_0(
  MR_Word Lang_4,
  MR_Word ExportedType_5)
{
  {
    MR_String Result_6;

    if (((MR_tag((MR_Word) ExportedType_5)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word ForeignType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedType_5, (MR_Integer) 0)));
      MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedType_5, (MR_Integer) 1)));

      switch (Lang_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if (((MR_tag((MR_Word) ForeignType_7)) == (MR_mktag((MR_Integer) 1))))
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "qualified C type");
          }
          else
            Result_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ForeignType_7, (MR_Integer) 0)));
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 2:
          Result_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ForeignType_7);
          break;
      }
    }
    else
    {
      MR_Word Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ExportedType_5, (MR_Integer) 0)));

      switch (Lang_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) Type_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Result_6 = (MR_String) "MR_Word";
              break;
            case (MR_Integer) 1:
              Result_6 = (MR_String) "MR_Word";
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_12, (MR_Integer) 0)));

                Result_6 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0(BuiltinType_13);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_12, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Result_6 = (MR_String) "MR_Tuple";
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  Result_6 = (MR_String) "MR_Word";
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "kinded type");
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) Type_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              Result_6 = (MR_String) "object";
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_12, (MR_Integer) 0)));

                Result_6 = backend_libs__foreign__exported_builtin_type_to_csharp_string_1_f_0(BuiltinType_74);
              }
              break;
            case (MR_Integer) 3:
              Result_6 = (MR_String) "object";
              break;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "erlang");
          }
          break;
        case (MR_Integer) 2:
          switch (MR_tag((MR_Word) Type_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              Result_6 = (MR_String) "java.lang.Object";
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_12, (MR_Integer) 0)));

                Result_6 = backend_libs__foreign__exported_builtin_type_to_java_string_1_f_0(BuiltinType_77);
              }
              break;
            case (MR_Integer) 3:
              Result_6 = (MR_String) "java.lang.Object";
              break;
          }
          break;
      }
    }
    return Result_6;
  }
}

MR_String MR_CALL 
backend_libs__foreign__exported_builtin_type_to_java_string_1_f_0(
  MR_Word BuiltinType_3)
{
  {
    MR_String JavaTypeName_4;

    switch (MR_tag((MR_Word) BuiltinType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(BuiltinType_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            JavaTypeName_4 = (MR_String) "double";
            break;
          case (MR_Integer) 1:
            JavaTypeName_4 = (MR_String) "java.lang.String";
            break;
          case (MR_Integer) 2:
            JavaTypeName_4 = (MR_String) "char";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntType_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), BuiltinType_3, (MR_Integer) 0)));

          JavaTypeName_4 = ((&backend_libs__foreign_vector_common_2[16 + IntType_5]))->backend_libs__foreign__vector_common_type_2_0__vct_2_f_0;
        }
        break;
    }
    return JavaTypeName_4;
  }
}

MR_String MR_CALL 
backend_libs__foreign__exported_builtin_type_to_csharp_string_1_f_0(
  MR_Word BuiltinType_3)
{
  {
    MR_String CsharpTypeName_4;

    switch (MR_tag((MR_Word) BuiltinType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(BuiltinType_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CsharpTypeName_4 = (MR_String) "double";
            break;
          case (MR_Integer) 1:
            CsharpTypeName_4 = (MR_String) "string";
            break;
          case (MR_Integer) 2:
            CsharpTypeName_4 = (MR_String) "char";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntType_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), BuiltinType_3, (MR_Integer) 0)));

          CsharpTypeName_4 = ((&backend_libs__foreign_vector_common_2[8 + IntType_5]))->backend_libs__foreign__vector_common_type_2_0__vct_2_f_0;
        }
        break;
    }
    return CsharpTypeName_4;
  }
}

MR_String MR_CALL 
backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0(
  MR_Word BuiltinType_3)
{
  {
    MR_String CTypeName_4;

    switch (MR_tag((MR_Word) BuiltinType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(BuiltinType_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CTypeName_4 = (MR_String) "MR_Float";
            break;
          case (MR_Integer) 1:
            CTypeName_4 = (MR_String) "MR_String";
            break;
          case (MR_Integer) 2:
            CTypeName_4 = (MR_String) "MR_Char";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntType_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), BuiltinType_3, (MR_Integer) 0)));

          CTypeName_4 = ((&backend_libs__foreign_vector_common_2[0 + IntType_5]))->backend_libs__foreign__vector_common_type_2_0__vct_2_f_0;
        }
        break;
    }
    return CTypeName_4;
  }
}

MR_Word MR_CALL 
backend_libs__foreign__is_foreign_type_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Assertions_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Assertions_4));
      }
    }
    else
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
backend_libs__foreign__to_exported_type_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5)
{
  {
    MR_bool succeeded;
    MR_Word ExportType_6;
    MR_Word TypeTable_7;
    MR_Word TypeDefn_9;
    MR_Word TypeCtor_8;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_7);
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_8);
    if (succeeded)
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, TypeCtor_8, &TypeDefn_9);
    if (succeeded)
    {
      MR_Word TypeBody_10;

      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_10);
      switch (MR_tag((MR_Word) TypeBody_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ForeignTypeBody_11 = (MR_Word) MR_body(((MR_Word) TypeBody_10), (MR_Integer) 0);
            MR_Word ForeignTypeName_12;
            MR_Word Assertions_14;
            MR_Word Var_13;

            backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(ModuleInfo_4, ForeignTypeBody_11, &ForeignTypeName_12, &Var_13, &Assertions_14);
            {
              ExportType_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ExportType_6, 0) = ((MR_Box) (ForeignTypeName_12));
              MR_hl_field(MR_mktag(0), ExportType_6, 1) = ((MR_Box) (Assertions_14));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ExportType_6, 0) = ((MR_Box) (Type_5));
          }
          break;
        case (MR_Integer) 3:
          {
            ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ExportType_6, 0) = ((MR_Box) (Type_5));
          }
          break;
      }
    }
    else
      {
        ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ExportType_6, 0) = ((MR_Box) (Type_5));
      }
    return ExportType_6;
  }
}

void MR_CALL 
backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ForeignTypeBody_7,
  MR_Word * Name_8,
  MR_Word * MaybeUserEqComp_9,
  MR_Word * Assertions_10)
{
  {
    MR_Word MaybeC_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_7, (MR_Integer) 0)));
    MR_Word MaybeJava_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_7, (MR_Integer) 1)));
    MR_Word MaybeCSharp_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_7, (MR_Integer) 2)));
    MR_Word MaybeErlang_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_7, (MR_Integer) 3)));
    MR_Word Globals_15;
    MR_Word Target_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_15);
    libs__globals__get_target_2_p_0(Globals_15, &Target_16);
    switch (Target_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((MaybeC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C type");
            return;
          }
        }
        else
        {
          MR_Word Data_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeC_11, (MR_Integer) 0)));
          MR_String NameStr_18;
          MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_17, (MR_Integer) 0)));

          *MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_17, (MR_Integer) 1)));
          *Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_17, (MR_Integer) 2)));
          NameStr_18 = (MR_String) Var_35;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Name_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NameStr_18));
          }
        }
        break;
      case (MR_Integer) 1:
        if ((MaybeCSharp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C# type");
            return;
          }
        }
        else
        {
          MR_Word Var_31;
          MR_Word Data_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCSharp_13, (MR_Integer) 0)));
          MR_String NameStr_37;

          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_36, (MR_Integer) 0)));
          *MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_36, (MR_Integer) 1)));
          *Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_36, (MR_Integer) 2)));
          NameStr_37 = (MR_String) Var_31;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Name_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NameStr_37));
          }
        }
        break;
      case (MR_Integer) 3:
        if ((MaybeErlang_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Erlang type");
            return;
          }
        }
        else
        {
          MR_Word Data_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeErlang_14, (MR_Integer) 0)));

          *MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_48, (MR_Integer) 1)));
          *Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_48, (MR_Integer) 2)));
          *Name_8 = (MR_Word) &backend_libs__foreign_scalar_common_1[0];
        }
        break;
      case (MR_Integer) 2:
        if ((MaybeJava_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Java type");
            return;
          }
        }
        else
        {
          MR_Word Var_27;
          MR_Word Data_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeJava_12, (MR_Integer) 0)));
          MR_String NameStr_43;

          Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_42, (MR_Integer) 0)));
          *MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_42, (MR_Integer) 1)));
          *Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Data_42, (MR_Integer) 2)));
          NameStr_43 = (MR_String) Var_27;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *Name_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NameStr_43));
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
backend_libs__foreign__non_foreign_type_1_f_0(
  MR_Word Type_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Type_3));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__foreign____Unify____exported_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__foreign____Compare____exported_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__backend_libs__foreign__init(void)
{
}

void mercury__backend_libs__foreign__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__foreign__backend_libs__foreign__type_ctor_info_exported_type_0);
}

void mercury__backend_libs__foreign__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__foreign__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module backend_libs.foreign. */
