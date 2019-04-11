/*
** Automatically generated from `foreign.m'
** by the Mercury compiler,
** version rotd-2017-06-12
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
backend_libs__foreign____Unify____exported_type_0_0_10001(
  MR_Box backend_libs__foreign__wrapper_arg_1,
  MR_Box backend_libs__foreign__wrapper_arg_2);

static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
  MR_Box * backend_libs__foreign__wrapper_arg_1,
  MR_Box backend_libs__foreign__wrapper_arg_2,
  MR_Box backend_libs__foreign__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_exports__441__1_2_p_0(
  MR_Word backend_libs__foreign__WantedLang_5,
  MR_Word backend_libs__foreign__LambdaHeadVar__1_15);

static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_bodys__436__1_2_p_0(
  MR_Word backend_libs__foreign__WantedLang_5,
  MR_Word backend_libs__foreign__LambdaHeadVar__1_13);

static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_decls__431__1_2_p_0(
  MR_Word backend_libs__foreign__WantedLang_5,
  MR_Word backend_libs__foreign__LambdaHeadVar__1_14);

static void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(
  MR_Word backend_libs__foreign__TargetLanguage_7,
  MR_Word backend_libs__foreign__ForeignLanguage_8,
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12,
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_13,
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_14);

static MR_bool MR_CALL 
backend_libs__foreign__filter_exports_4_p_0_1(
  MR_Box backend_libs__foreign__closure_arg,
  MR_Box backend_libs__foreign__wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0_1(
  MR_Box backend_libs__foreign__closure_arg,
  MR_Box backend_libs__foreign__wrapper_arg_1);

static MR_bool MR_CALL 
backend_libs__foreign__filter_decls_4_p_0_1(
  MR_Box backend_libs__foreign__closure_arg,
  MR_Box backend_libs__foreign__wrapper_arg_1);


static /* final */ const MR_Box backend_libs__foreign_scalar_common_2[1][1];

static /* final */ const MR_Box backend_libs__foreign_scalar_common_3[3][5];


/* sealed */ struct backend_libs__foreign__vector_common_type_1_0_s {
  const MR_String backend_libs__foreign__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct backend_libs__foreign__vector_common_type_1_0_s backend_libs__foreign_vector_common_1[30];



static /* final */ const MR_Box backend_libs__foreign_scalar_common_2[1][1] = {
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


static /* final */ const struct backend_libs__foreign__vector_common_type_1_0_s backend_libs__foreign_vector_common_1[30] = {
  /* row 0 */   {     (MR_String) "MR_Integer" },
  /* row 1 */   {     (MR_String) "MR_Unsigned" },
  /* row 2 */   {     (MR_String) "MR_Float" },
  /* row 3 */   {     (MR_String) "MR_String" },
  /* row 4 */   {     (MR_String) "MR_Char" },
  /* row 5 */   {     (MR_String) "int" },
  /* row 6 */   {     (MR_String) "uint" },
  /* row 7 */   {     (MR_String) "double" },
  /* row 8 */   {     (MR_String) "string" },
  /* row 9 */   {     (MR_String) "char" },
  /* row 10 */   {     (MR_String) "int" },
  /* row 11 */   {     (MR_String) "int" },
  /* row 12 */   {     (MR_String) "double" },
  /* row 13 */   {     (MR_String) "java.lang.String" },
  /* row 14 */   {     (MR_String) "char" },
  /* row 15 */   {     (MR_String) "MR_Integer" },
  /* row 16 */   {     (MR_String) "MR_Unsigned" },
  /* row 17 */   {     (MR_String) "MR_Float" },
  /* row 18 */   {     (MR_String) "MR_String" },
  /* row 19 */   {     (MR_String) "MR_Char" },
  /* row 20 */   {     (MR_String) "int" },
  /* row 21 */   {     (MR_String) "uint" },
  /* row 22 */   {     (MR_String) "double" },
  /* row 23 */   {     (MR_String) "string" },
  /* row 24 */   {     (MR_String) "char" },
  /* row 25 */   {     (MR_String) "int" },
  /* row 26 */   {     (MR_String) "int" },
  /* row 27 */   {     (MR_String) "double" },
  /* row 28 */   {     (MR_String) "java.lang.String" },
  /* row 29 */   {     (MR_String) "char" },
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1 = {
  (MR_String) "exported_type_mercury",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
backend_libs__foreign____Unify____exported_type_0_0_10001(
  MR_Box backend_libs__foreign__wrapper_arg_1,
  MR_Box backend_libs__foreign__wrapper_arg_2)
{
  {
    MR_bool backend_libs__foreign__succeeded;

    {
      backend_libs__foreign__succeeded = backend_libs__foreign____Unify____exported_type_0_0(((MR_Word) backend_libs__foreign__wrapper_arg_1), ((MR_Word) backend_libs__foreign__wrapper_arg_2));
    }
    return backend_libs__foreign__succeeded;
  }
}

static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
  MR_Box * backend_libs__foreign__wrapper_arg_1,
  MR_Box backend_libs__foreign__wrapper_arg_2,
  MR_Box backend_libs__foreign__wrapper_arg_3)
{
  {
    MR_Word backend_libs__foreign__conv0_HeadVar__1_1;

    {
      backend_libs__foreign____Compare____exported_type_0_0(&backend_libs__foreign__conv0_HeadVar__1_1, ((MR_Word) backend_libs__foreign__wrapper_arg_2), ((MR_Word) backend_libs__foreign__wrapper_arg_3));
    }
    *backend_libs__foreign__wrapper_arg_1 = ((MR_Box) (backend_libs__foreign__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
backend_libs__foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_p_0(
  MR_Word backend_libs__foreign__HeadVar__1_1,
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7,
  MR_Word backend_libs__foreign__HeadVar__8_8,
  MR_Word * backend_libs__foreign__HeadVar__9_9,
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_10,
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_11)
{
  {
    MR_bool backend_libs__foreign__succeeded;

    if ((backend_libs__foreign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.extrude_pragma_implementation\'/11", (MR_String) "no suitable target languages available");
          return;
        }
      }
    else
      {
        MR_Word backend_libs__foreign__TargetLang_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__foreign__ForeignLanguage_37;
        MR_Word backend_libs__foreign__TargetLangs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));

        {
          backend_libs__foreign__ForeignLanguage_37 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(backend_libs__foreign__HeadVar__8_8);
        }
        {
          backend_libs__foreign__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (backend_libs__foreign__ForeignLanguage_37)), backend_libs__foreign__HeadVar__1_1);
        }
        if (backend_libs__foreign__succeeded)
          {
            *backend_libs__foreign__STATE_VARIABLE_Impl_11 = backend_libs__foreign__STATE_VARIABLE_Impl_0_10;
            *backend_libs__foreign__HeadVar__9_9 = backend_libs__foreign__HeadVar__8_8;
            *backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7 = backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6;
          }
        else
          {
            {
              parse_tree__prog_data_foreign__set_foreign_language_3_p_0(backend_libs__foreign__TargetLang_28, backend_libs__foreign__HeadVar__8_8, backend_libs__foreign__HeadVar__9_9);
            }
            {
              backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(backend_libs__foreign__TargetLang_28, backend_libs__foreign__ForeignLanguage_37, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7, backend_libs__foreign__STATE_VARIABLE_Impl_0_10, backend_libs__foreign__STATE_VARIABLE_Impl_11);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_exports__441__1_2_p_0(
  MR_Word backend_libs__foreign__WantedLang_5,
  MR_Word backend_libs__foreign__LambdaHeadVar__1_15)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Word backend_libs__foreign__Lang_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_15, (MR_Integer) 0)));
    MR_Word backend_libs__foreign__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_15, (MR_Integer) 1)));
    MR_Integer backend_libs__foreign__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_15, (MR_Integer) 2)));
    MR_String backend_libs__foreign__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_15, (MR_Integer) 3)));
    MR_Word backend_libs__foreign__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_15, (MR_Integer) 4)));

    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_20);
    return backend_libs__foreign__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_bodys__436__1_2_p_0(
  MR_Word backend_libs__foreign__WantedLang_5,
  MR_Word backend_libs__foreign__LambdaHeadVar__1_13)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Word backend_libs__foreign__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_13, (MR_Integer) 0)));
    MR_Word backend_libs__foreign__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_13, (MR_Integer) 1)));
    MR_Word backend_libs__foreign__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_13, (MR_Integer) 2)));

    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_16);
    return backend_libs__foreign__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_decls__431__1_2_p_0(
  MR_Word backend_libs__foreign__WantedLang_5,
  MR_Word backend_libs__foreign__LambdaHeadVar__1_14)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Word backend_libs__foreign__Lang_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_14, (MR_Integer) 0)));
    MR_Word backend_libs__foreign__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_14, (MR_Integer) 1)));
    MR_Word backend_libs__foreign__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_14, (MR_Integer) 2)));
    MR_Word backend_libs__foreign__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_14, (MR_Integer) 3)));

    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_18);
    return backend_libs__foreign__succeeded;
  }
}

void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0(
  MR_Word * backend_libs__foreign__HeadVar__1_1,
  MR_Word backend_libs__foreign__HeadVar__2_2,
  MR_Word backend_libs__foreign__HeadVar__3_3)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Integer backend_libs__foreign__CastX_17 = (MR_Integer) backend_libs__foreign__HeadVar__2_2;
    MR_Integer backend_libs__foreign__CastY_18 = (MR_Integer) backend_libs__foreign__HeadVar__3_3;

    backend_libs__foreign__succeeded = (backend_libs__foreign__CastX_17 == backend_libs__foreign__CastY_18);
    if (backend_libs__foreign__succeeded)
      *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word backend_libs__foreign__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word backend_libs__foreign__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word backend_libs__foreign__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word backend_libs__foreign__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word backend_libs__foreign__Var_8;

            {
              mdbcomp__sym_name____Compare____sym_name_0_0(&backend_libs__foreign__Var_8, backend_libs__foreign__Var_23, backend_libs__foreign__Var_6);
            }
            backend_libs__foreign__succeeded = (backend_libs__foreign__Var_8 == (MR_Integer) 0);
            backend_libs__foreign__succeeded = !(backend_libs__foreign__succeeded);
            if (backend_libs__foreign__succeeded)
              *backend_libs__foreign__HeadVar__1_1 = backend_libs__foreign__Var_8;
            else
              {
                parse_tree__prog_data____Compare____foreign_type_assertions_0_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__Var_22, backend_libs__foreign__Var_7);
              }
          }
        else
          *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word backend_libs__foreign__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word backend_libs__foreign__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 0)));

            {
              parse_tree__prog_data____Compare____mer_type_0_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__Var_24, backend_libs__foreign__Var_16);
            }
          }
      }
  }
}

MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0(
  MR_Word backend_libs__foreign__HeadVar__1_1,
  MR_Word backend_libs__foreign__HeadVar__2_2)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Integer backend_libs__foreign__CastX_9 = (MR_Integer) backend_libs__foreign__HeadVar__1_1;
    MR_Integer backend_libs__foreign__CastY_10 = (MR_Integer) backend_libs__foreign__HeadVar__2_2;

    backend_libs__foreign__succeeded = (backend_libs__foreign__CastX_9 == backend_libs__foreign__CastY_10);
    if (backend_libs__foreign__succeeded)
      backend_libs__foreign__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word backend_libs__foreign__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__foreign__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word backend_libs__foreign__Var_5;
        MR_Word backend_libs__foreign__Var_6;

        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (backend_libs__foreign__succeeded)
          {
            backend_libs__foreign__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));
            backend_libs__foreign__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 1)));
            {
              backend_libs__foreign__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__foreign__Var_3, backend_libs__foreign__Var_5);
            }
            if (backend_libs__foreign__succeeded)
              {
                backend_libs__foreign__succeeded = parse_tree__prog_data____Unify____foreign_type_assertions_0_0(backend_libs__foreign__Var_4, backend_libs__foreign__Var_6);
              }
          }
      }
    else
      {
        MR_Word backend_libs__foreign__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__foreign__Var_8;

        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__foreign__succeeded)
          {
            backend_libs__foreign__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));
            {
              backend_libs__foreign__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(backend_libs__foreign__Var_7, backend_libs__foreign__Var_8);
            }
          }
      }
    return backend_libs__foreign__succeeded;
  }
}

static void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(
  MR_Word backend_libs__foreign__TargetLanguage_7,
  MR_Word backend_libs__foreign__ForeignLanguage_8,
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12,
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_13,
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_14)
{
  {
    MR_bool backend_libs__foreign__succeeded;

    switch (backend_libs__foreign__TargetLanguage_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (backend_libs__foreign__ForeignLanguage_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            {
              MR_String backend_libs__foreign__Var_19;
              MR_String backend_libs__foreign__Var_21;
              MR_String backend_libs__foreign__Var_22;
              MR_String backend_libs__foreign__Var_23;
              MR_String backend_libs__foreign__Var_25;

              {
                backend_libs__foreign__Var_22 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
              {
                backend_libs__foreign__Var_25 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
              {
                backend_libs__foreign__Var_23 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__Var_25);
              }
              {
                backend_libs__foreign__Var_21 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__Var_22, backend_libs__foreign__Var_23);
              }
              {
                backend_libs__foreign__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__Var_21);
              }
              {
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__Var_19);
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (backend_libs__foreign__ForeignLanguage_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            {
              MR_String backend_libs__foreign__Var_30;
              MR_String backend_libs__foreign__Var_32;
              MR_String backend_libs__foreign__Var_33;
              MR_String backend_libs__foreign__Var_34;
              MR_String backend_libs__foreign__Var_36;

              {
                backend_libs__foreign__Var_33 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
              {
                backend_libs__foreign__Var_36 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
              {
                backend_libs__foreign__Var_34 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__Var_36);
              }
              {
                backend_libs__foreign__Var_32 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__Var_33, backend_libs__foreign__Var_34);
              }
              {
                backend_libs__foreign__Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__Var_32);
              }
              {
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__Var_30);
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
        switch (backend_libs__foreign__ForeignLanguage_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_String backend_libs__foreign__Var_41;
              MR_String backend_libs__foreign__Var_43;
              MR_String backend_libs__foreign__Var_44;
              MR_String backend_libs__foreign__Var_45;
              MR_String backend_libs__foreign__Var_47;

              {
                backend_libs__foreign__Var_44 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
              {
                backend_libs__foreign__Var_47 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
              {
                backend_libs__foreign__Var_45 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__Var_47);
              }
              {
                backend_libs__foreign__Var_43 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__Var_44, backend_libs__foreign__Var_45);
              }
              {
                backend_libs__foreign__Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__Var_43);
              }
              {
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__Var_41);
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
        switch (backend_libs__foreign__ForeignLanguage_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
            {
              MR_String backend_libs__foreign__Var_52;
              MR_String backend_libs__foreign__Var_54;
              MR_String backend_libs__foreign__Var_55;
              MR_String backend_libs__foreign__Var_56;
              MR_String backend_libs__foreign__Var_58;

              {
                backend_libs__foreign__Var_55 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
              {
                backend_libs__foreign__Var_58 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
              {
                backend_libs__foreign__Var_56 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__Var_58);
              }
              {
                backend_libs__foreign__Var_54 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__Var_55, backend_libs__foreign__Var_56);
              }
              {
                backend_libs__foreign__Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__Var_54);
              }
              {
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__Var_52);
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
    *backend_libs__foreign__STATE_VARIABLE_Impl_14 = backend_libs__foreign__STATE_VARIABLE_Impl_0_13;
    *backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12 = backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11;
  }
}

MR_String MR_CALL 
backend_libs__foreign__decl_guard_1_f_0(
  MR_Word backend_libs__foreign__ModuleName_3)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_String backend_libs__foreign__HeadVar__2_2;
    MR_String backend_libs__foreign__UppercaseModuleName_4;
    MR_String backend_libs__foreign__MangledModuleName_5;

    {
      backend_libs__foreign__MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__foreign__ModuleName_3);
    }
    {
      mercury__string__to_upper_2_p_0(backend_libs__foreign__MangledModuleName_5, &backend_libs__foreign__UppercaseModuleName_4);
    }
    {
      backend_libs__foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__UppercaseModuleName_4, (MR_String) "_DECL_GUARD");
    }
    return backend_libs__foreign__HeadVar__2_2;
  }
}

void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_11_p_0(
  MR_Word backend_libs__foreign__HeadVar__1_1,
  MR_Word backend_libs__foreign___PragmaVars_2,
  MR_Word backend_libs__foreign___PredName_3,
  MR_Word backend_libs__foreign___PredOrFunc_4,
  MR_Word backend_libs__foreign___Context_5,
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7,
  MR_Word backend_libs__foreign__HeadVar__8_8,
  MR_Word * backend_libs__foreign__HeadVar__9_9,
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_10,
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_11)
{
  {
    MR_bool backend_libs__foreign__succeeded;

    {
      backend_libs__foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_p_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7, backend_libs__foreign__HeadVar__8_8, backend_libs__foreign__HeadVar__9_9, backend_libs__foreign__STATE_VARIABLE_Impl_0_10, backend_libs__foreign__STATE_VARIABLE_Impl_11);
    }
  }
}

static MR_bool MR_CALL 
backend_libs__foreign__filter_exports_4_p_0_1(
  MR_Box backend_libs__foreign__closure_arg,
  MR_Box backend_libs__foreign__wrapper_arg_1)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

    {
      backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_exports__441__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
    return backend_libs__foreign__succeeded;
  }
}

void MR_CALL 
backend_libs__foreign__filter_exports_4_p_0(
  MR_Word backend_libs__foreign__WantedLang_5,
  MR_Word backend_libs__foreign__Exports0_6,
  MR_Word * backend_libs__foreign__LangExports_7,
  MR_Word * backend_libs__foreign__NotLangExports_8)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Word backend_libs__foreign__IsWanted_9;

    {
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_exports_4_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
    }
    {
      mercury__list__filter_4_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Exports0_6, backend_libs__foreign__LangExports_7, backend_libs__foreign__NotLangExports_8);
    }
  }
}

static MR_bool MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0_1(
  MR_Box backend_libs__foreign__closure_arg,
  MR_Box backend_libs__foreign__wrapper_arg_1)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

    {
      backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_bodys__436__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
    return backend_libs__foreign__succeeded;
  }
}

void MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0(
  MR_Word backend_libs__foreign__WantedLang_5,
  MR_Word backend_libs__foreign__Bodys0_6,
  MR_Word * backend_libs__foreign__LangBodys_7,
  MR_Word * backend_libs__foreign__NotLangBodys_8)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Word backend_libs__foreign__IsWanted_9;

    {
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_bodys_4_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
    }
    {
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Bodys0_6, backend_libs__foreign__LangBodys_7, backend_libs__foreign__NotLangBodys_8);
    }
  }
}

static MR_bool MR_CALL 
backend_libs__foreign__filter_decls_4_p_0_1(
  MR_Box backend_libs__foreign__closure_arg,
  MR_Box backend_libs__foreign__wrapper_arg_1)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

    {
      backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_decls__431__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
    return backend_libs__foreign__succeeded;
  }
}

void MR_CALL 
backend_libs__foreign__filter_decls_4_p_0(
  MR_Word backend_libs__foreign__WantedLang_5,
  MR_Word backend_libs__foreign__Decls0_6,
  MR_Word * backend_libs__foreign__LangDecls_7,
  MR_Word * backend_libs__foreign__NotLangDecls_8)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Word backend_libs__foreign__IsWanted_9;

    {
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_decls_4_p_0_1));
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
    }
    {
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Decls0_6, backend_libs__foreign__LangDecls_7, backend_libs__foreign__NotLangDecls_8);
    }
  }
}

MR_bool MR_CALL 
backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(
  MR_Word backend_libs__foreign__ModuleInfo_4,
  MR_Word backend_libs__foreign__Body_5,
  MR_Word * backend_libs__foreign__UserEqComp_6)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Word backend_libs__foreign__MaybeUserEqComp_8;
    MR_Word backend_libs__foreign__Var_7;
    MR_Word backend_libs__foreign__Var_9;

    {
      backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__foreign__ModuleInfo_4, backend_libs__foreign__Body_5, &backend_libs__foreign__Var_7, &backend_libs__foreign__MaybeUserEqComp_8, &backend_libs__foreign__Var_9);
    }
    backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__MaybeUserEqComp_8)) == (MR_mktag((MR_Integer) 1)));
    if (backend_libs__foreign__succeeded)
      *backend_libs__foreign__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeUserEqComp_8, (MR_Integer) 0)));
    return backend_libs__foreign__succeeded;
  }
}

void MR_CALL 
backend_libs__foreign__have_foreign_type_for_backend_3_p_0(
  MR_Word backend_libs__foreign__Target_4,
  MR_Word backend_libs__foreign__ForeignTypeBody_5,
  MR_Word * backend_libs__foreign__Have_6)
{
  {
    MR_bool backend_libs__foreign__succeeded;

    switch (backend_libs__foreign__Target_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word backend_libs__foreign__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
          MR_Word backend_libs__foreign__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
          MR_Word backend_libs__foreign__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
          MR_Word backend_libs__foreign__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
          MR_Word backend_libs__foreign__Var_7;

          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__Var_14)) == (MR_mktag((MR_Integer) 1)));
          if (backend_libs__foreign__succeeded)
            {
              backend_libs__foreign__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__Var_14, (MR_Integer) 0)));
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
            }
          else
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__foreign__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
          MR_Word backend_libs__foreign__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
          MR_Word backend_libs__foreign__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
          MR_Word backend_libs__foreign__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
          MR_Word backend_libs__foreign__Var_9;

          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__Var_12)) == (MR_mktag((MR_Integer) 1)));
          if (backend_libs__foreign__succeeded)
            {
              backend_libs__foreign__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__Var_12, (MR_Integer) 0)));
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
            }
          else
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word backend_libs__foreign__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
          MR_Word backend_libs__foreign__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
          MR_Word backend_libs__foreign__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
          MR_Word backend_libs__foreign__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
          MR_Word backend_libs__foreign__Var_10;

          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__Var_11)) == (MR_mktag((MR_Integer) 1)));
          if (backend_libs__foreign__succeeded)
            {
              backend_libs__foreign__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__Var_11, (MR_Integer) 0)));
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
            }
          else
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word backend_libs__foreign__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
          MR_Word backend_libs__foreign__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
          MR_Word backend_libs__foreign__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
          MR_Word backend_libs__foreign__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
          MR_Word backend_libs__foreign__Var_8;

          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__Var_13)) == (MR_mktag((MR_Integer) 1)));
          if (backend_libs__foreign__succeeded)
            {
              backend_libs__foreign__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__Var_13, (MR_Integer) 0)));
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
            }
          else
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(
  MR_Word backend_libs__foreign__ModuleInfo_6,
  MR_Word backend_libs__foreign__ForeignTypeBody_7,
  MR_Word * backend_libs__foreign__Name_8,
  MR_Word * backend_libs__foreign__MaybeUserEqComp_9,
  MR_Word * backend_libs__foreign__Assertions_10)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Word backend_libs__foreign__MaybeC_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 0)));
    MR_Word backend_libs__foreign__MaybeJava_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 1)));
    MR_Word backend_libs__foreign__MaybeCSharp_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 2)));
    MR_Word backend_libs__foreign__MaybeErlang_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 3)));
    MR_Word backend_libs__foreign__Globals_15;
    MR_Word backend_libs__foreign__Target_16;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__foreign__ModuleInfo_6, &backend_libs__foreign__Globals_15);
    }
    {
      libs__globals__get_target_2_p_0(backend_libs__foreign__Globals_15, &backend_libs__foreign__Target_16);
    }
    switch (backend_libs__foreign__Target_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((backend_libs__foreign__MaybeC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C type");
              return;
            }
          }
        else
          {
            MR_Word backend_libs__foreign__Data_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeC_11, (MR_Integer) 0)));
            MR_String backend_libs__foreign__NameStr_18;
            MR_Word backend_libs__foreign__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_17, (MR_Integer) 0)));

            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_17, (MR_Integer) 1)));
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_17, (MR_Integer) 2)));
            backend_libs__foreign__NameStr_18 = (MR_String) backend_libs__foreign__Var_35;
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *backend_libs__foreign__Name_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_18));
            }
          }
        break;
      case (MR_Integer) 1:
        if ((backend_libs__foreign__MaybeCSharp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C# type");
              return;
            }
          }
        else
          {
            MR_Word backend_libs__foreign__Var_31;
            MR_Word backend_libs__foreign__Data_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeCSharp_13, (MR_Integer) 0)));
            MR_String backend_libs__foreign__NameStr_37;

            backend_libs__foreign__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_36, (MR_Integer) 0)));
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_36, (MR_Integer) 1)));
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_36, (MR_Integer) 2)));
            backend_libs__foreign__NameStr_37 = (MR_String) backend_libs__foreign__Var_31;
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *backend_libs__foreign__Name_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_37));
            }
          }
        break;
      case (MR_Integer) 3:
        if ((backend_libs__foreign__MaybeErlang_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Erlang type");
              return;
            }
          }
        else
          {
            MR_Word backend_libs__foreign__Data_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeErlang_14, (MR_Integer) 0)));

            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_48, (MR_Integer) 1)));
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_48, (MR_Integer) 2)));
            *backend_libs__foreign__Name_8 = (MR_Word) &backend_libs__foreign_scalar_common_2[0];
          }
        break;
      case (MR_Integer) 2:
        if ((backend_libs__foreign__MaybeJava_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Java type");
              return;
            }
          }
        else
          {
            MR_Word backend_libs__foreign__Var_27;
            MR_Word backend_libs__foreign__Data_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeJava_12, (MR_Integer) 0)));
            MR_String backend_libs__foreign__NameStr_43;

            backend_libs__foreign__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_42, (MR_Integer) 0)));
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_42, (MR_Integer) 1)));
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_42, (MR_Integer) 2)));
            backend_libs__foreign__NameStr_43 = (MR_String) backend_libs__foreign__Var_27;
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *backend_libs__foreign__Name_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_43));
            }
          }
        break;
    }
  }
}

MR_String MR_CALL 
backend_libs__foreign__exported_builtin_type_to_java_string_1_f_0(
  MR_Word backend_libs__foreign__BuiltinType_3)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_String backend_libs__foreign__JavaTypeName_4 = ((&backend_libs__foreign_vector_common_1[25 + backend_libs__foreign__BuiltinType_3]))->backend_libs__foreign__vector_common_type_1_0__vct_1_f_0;

    return backend_libs__foreign__JavaTypeName_4;
  }
}

MR_String MR_CALL 
backend_libs__foreign__exported_builtin_type_to_csharp_string_1_f_0(
  MR_Word backend_libs__foreign__BuiltinType_3)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_String backend_libs__foreign__CsharpTypeName_4 = ((&backend_libs__foreign_vector_common_1[20 + backend_libs__foreign__BuiltinType_3]))->backend_libs__foreign__vector_common_type_1_0__vct_1_f_0;

    return backend_libs__foreign__CsharpTypeName_4;
  }
}

MR_String MR_CALL 
backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0(
  MR_Word backend_libs__foreign__BuiltinType_3)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_String backend_libs__foreign__CTypeName_4 = ((&backend_libs__foreign_vector_common_1[15 + backend_libs__foreign__BuiltinType_3]))->backend_libs__foreign__vector_common_type_1_0__vct_1_f_0;

    return backend_libs__foreign__CTypeName_4;
  }
}

MR_String MR_CALL 
backend_libs__foreign__exported_type_to_string_2_f_0(
  MR_Word backend_libs__foreign__Lang_4,
  MR_Word backend_libs__foreign__ExportedType_5)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_String backend_libs__foreign__Result_6;

    if (((MR_tag((MR_Word) backend_libs__foreign__ExportedType_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word backend_libs__foreign__ForeignType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportedType_5, (MR_Integer) 0)));
        MR_Word backend_libs__foreign__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportedType_5, (MR_Integer) 1)));

        switch (backend_libs__foreign__Lang_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if (((MR_tag((MR_Word) backend_libs__foreign__ForeignType_7)) == (MR_mktag((MR_Integer) 1))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "qualified C type");
                }
              }
            else
              backend_libs__foreign__Result_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignType_7, (MR_Integer) 0)));
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            {
              backend_libs__foreign__Result_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(backend_libs__foreign__ForeignType_7);
            }
            break;
        }
      }
    else
      {
        MR_Word backend_libs__foreign__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportedType_5, (MR_Integer) 0)));

        switch (backend_libs__foreign__Lang_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) backend_libs__foreign__Type_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
                break;
              case (MR_Integer) 1:
                backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
                break;
              case (MR_Integer) 2:
                {
                  MR_Word backend_libs__foreign__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

                  backend_libs__foreign__Result_6 = ((&backend_libs__foreign_vector_common_1[0 + backend_libs__foreign__BuiltinType_13]))->backend_libs__foreign__vector_common_type_1_0__vct_1_f_0;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__foreign__Type_12, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    backend_libs__foreign__Result_6 = (MR_String) "MR_Tuple";
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
                    break;
                  case (MR_Integer) 3:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "kinded type");
                      }
                    }
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) backend_libs__foreign__Type_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                backend_libs__foreign__Result_6 = (MR_String) "object";
                break;
              case (MR_Integer) 2:
                {
                  MR_Word backend_libs__foreign__BuiltinType_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

                  backend_libs__foreign__Result_6 = ((&backend_libs__foreign_vector_common_1[5 + backend_libs__foreign__BuiltinType_74]))->backend_libs__foreign__vector_common_type_1_0__vct_1_f_0;
                }
                break;
              case (MR_Integer) 3:
                backend_libs__foreign__Result_6 = (MR_String) "object";
                break;
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "erlang");
              }
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) backend_libs__foreign__Type_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                backend_libs__foreign__Result_6 = (MR_String) "java.lang.Object";
                break;
              case (MR_Integer) 2:
                {
                  MR_Word backend_libs__foreign__BuiltinType_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

                  backend_libs__foreign__Result_6 = ((&backend_libs__foreign_vector_common_1[10 + backend_libs__foreign__BuiltinType_77]))->backend_libs__foreign__vector_common_type_1_0__vct_1_f_0;
                }
                break;
              case (MR_Integer) 3:
                backend_libs__foreign__Result_6 = (MR_String) "java.lang.Object";
                break;
            }
            break;
        }
      }
    return backend_libs__foreign__Result_6;
  }
}

MR_String MR_CALL 
backend_libs__foreign__mercury_exported_type_to_string_3_f_0(
  MR_Word backend_libs__foreign__ModuleInfo_5,
  MR_Word backend_libs__foreign__Lang_6,
  MR_Word backend_libs__foreign__Type_7)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_String backend_libs__foreign__HeadVar__4_4;
    MR_Word backend_libs__foreign__Var_8;

    {
      backend_libs__foreign__Var_8 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__foreign__ModuleInfo_5, backend_libs__foreign__Type_7);
    }
    {
      backend_libs__foreign__HeadVar__4_4 = backend_libs__foreign__exported_type_to_string_2_f_0(backend_libs__foreign__Lang_6, backend_libs__foreign__Var_8);
    }
    return backend_libs__foreign__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
backend_libs__foreign__is_foreign_type_1_f_0(
  MR_Word backend_libs__foreign__HeadVar__1_1)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Word backend_libs__foreign__HeadVar__2_2;

    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word backend_libs__foreign__Assertions_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word backend_libs__foreign__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));

        {
          backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, 0) = ((MR_Box) (backend_libs__foreign__Assertions_4));
        }
      }
    else
      backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return backend_libs__foreign__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
backend_libs__foreign__to_exported_type_2_f_0(
  MR_Word backend_libs__foreign__ModuleInfo_4,
  MR_Word backend_libs__foreign__Type_5)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Word backend_libs__foreign__ExportType_6;
    MR_Word backend_libs__foreign__TypeTable_7;
    MR_Word backend_libs__foreign__TypeDefn_9;
    MR_Word backend_libs__foreign__TypeCtor_8;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__foreign__ModuleInfo_4, &backend_libs__foreign__TypeTable_7);
    }
    {
      backend_libs__foreign__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(backend_libs__foreign__Type_5, &backend_libs__foreign__TypeCtor_8);
    }
    if (backend_libs__foreign__succeeded)
      {
        backend_libs__foreign__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(backend_libs__foreign__TypeTable_7, backend_libs__foreign__TypeCtor_8, &backend_libs__foreign__TypeDefn_9);
      }
    if (backend_libs__foreign__succeeded)
      {
        MR_Word backend_libs__foreign__TypeBody_10;

        {
          hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__foreign__TypeDefn_9, &backend_libs__foreign__TypeBody_10);
        }
        switch (MR_tag((MR_Word) backend_libs__foreign__TypeBody_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word backend_libs__foreign__ForeignTypeBody_11 = (MR_Word) MR_body(((MR_Word) backend_libs__foreign__TypeBody_10), (MR_Integer) 0);
              MR_Word backend_libs__foreign__ForeignTypeName_12;
              MR_Word backend_libs__foreign__Assertions_14;
              MR_Word backend_libs__foreign__Var_13;

              {
                backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__foreign__ModuleInfo_4, backend_libs__foreign__ForeignTypeBody_11, &backend_libs__foreign__ForeignTypeName_12, &backend_libs__foreign__Var_13, &backend_libs__foreign__Assertions_14);
              }
              {
                backend_libs__foreign__ExportType_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__ForeignTypeName_12));
                MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportType_6, 1) = ((MR_Box) (backend_libs__foreign__Assertions_14));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
            }
            break;
          case (MR_Integer) 3:
            {
              backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
            }
            break;
        }
      }
    else
      {
        backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
      }
    return backend_libs__foreign__ExportType_6;
  }
}

MR_Word MR_CALL 
backend_libs__foreign__non_foreign_type_1_f_0(
  MR_Word backend_libs__foreign__Type_3)
{
  {
    MR_bool backend_libs__foreign__succeeded;
    MR_Word backend_libs__foreign__HeadVar__2_2;

    {
      backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, 0) = ((MR_Box) (backend_libs__foreign__Type_3));
    }
    return backend_libs__foreign__HeadVar__2_2;
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
