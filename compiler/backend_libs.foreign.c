/*
** Automatically generated from `foreign.m'
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


/* :- module backend_libs.foreign. */
/* :- implementation. */

/*
INIT mercury__backend_libs__foreign__init
ENDINIT
*/

#include "backend_libs.foreign.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "int.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 140 "backend_libs.foreign.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__foreign__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;

#line 143 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0[2];

#line 146 "backend_libs.foreign.c"
static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0;

#line 149 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1[1];

#line 152 "backend_libs.foreign.c"
static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1;

#line 155 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0[1];

#line 158 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_1[1];

#line 161 "backend_libs.foreign.c"
static const MR_DuPtagLayout backend_libs__foreign__backend_libs__foreign__du_ptag_ordered_exported_type_0[2];

#line 164 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0[2];

#line 167 "backend_libs.foreign.c"
static const MR_Integer backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0[2];

#line 170 "backend_libs.foreign.c"
static MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0_10001(
#line 173 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_1,
#line 175 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2);

#line 178 "backend_libs.foreign.c"
static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
#line 181 "backend_libs.foreign.c"
  MR_Box * backend_libs__foreign__wrapper_arg_1,
#line 183 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2,
#line 185 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_3);

#line 178 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_exports__178__1_2_p_0(
#line 178 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 178 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_15);

#line 173 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_imports__173__1_2_p_0(
#line 173 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 173 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_13);

#line 168 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_bodys__168__1_2_p_0(
#line 168 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 168 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_13);

#line 163 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_decls__163__1_2_p_0(
#line 163 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 163 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_14);

#line 202 "foreign.m"
static void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(
#line 202 "foreign.m"
  MR_Word backend_libs__foreign__TargetLanguage_7,
#line 202 "foreign.m"
  MR_Word backend_libs__foreign__ForeignLanguage_8,
#line 202 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11,
#line 202 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12,
#line 202 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_13,
#line 202 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_14);

#line 178 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_exports_4_p_0_1(
#line 178 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 178 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);

#line 173 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_imports_4_p_0_1(
#line 173 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 173 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);

#line 168 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0_1(
#line 168 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 168 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);

#line 163 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_decls_4_p_0_1(
#line 163 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 163 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);


static /* final */ const MR_Box backend_libs__foreign_scalar_common_1[1][2];

static /* final */ const MR_Box backend_libs__foreign_scalar_common_2[1][1];

static /* final */ const MR_Box backend_libs__foreign_scalar_common_4[4][5];


#line 493 "foreign.m"
/* sealed */ struct backend_libs__foreign__vector_common_type_3_0_s {
#line 493 "foreign.m"
  const MR_String backend_libs__foreign__vector_common_type_3_0__vct_3_f_0;
#line 493 "foreign.m"
};

static /* final */ const struct backend_libs__foreign__vector_common_type_3_0_s backend_libs__foreign_vector_common_3[12];



static /* final */ const MR_Box backend_libs__foreign_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0))
  },
};

static /* final */ const MR_Box backend_libs__foreign_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box backend_libs__foreign_scalar_common_4[4][5] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0))
  },
};


static /* final */ const struct backend_libs__foreign__vector_common_type_3_0_s backend_libs__foreign_vector_common_3[12] = {
  /* row 0 */   {     (MR_String) "MR_Integer" },
  /* row 1 */   {     (MR_String) "MR_Float" },
  /* row 2 */   {     (MR_String) "MR_String" },
  /* row 3 */   {     (MR_String) "MR_Char" },
  /* row 4 */   {     (MR_String) "int" },
  /* row 5 */   {     (MR_String) "double" },
  /* row 6 */   {     (MR_String) "string" },
  /* row 7 */   {     (MR_String) "char" },
  /* row 8 */   {     (MR_String) "int" },
  /* row 9 */   {     (MR_String) "double" },
  /* row 10 */   {     (MR_String) "java.lang.String" },
  /* row 11 */   {     (MR_String) "char" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 361 "backend_libs.foreign.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__foreign__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0
  }
};

#line 369 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &backend_libs__foreign__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0
};

#line 375 "backend_libs.foreign.c"
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
  NULL
};

#line 390 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 395 "backend_libs.foreign.c"
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
  NULL
};

#line 410 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0[1] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0
};

#line 415 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_1[1] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1
};

#line 420 "backend_libs.foreign.c"
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

#line 434 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0[2] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0,
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1
};

#line 440 "backend_libs.foreign.c"
static const MR_Integer backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 446 "backend_libs.foreign.c"
const MR_TypeCtorInfo_Struct backend_libs__foreign__backend_libs__foreign__type_ctor_info_exported_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 463 "backend_libs.foreign.c"
static MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0_10001(
#line 466 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_1,
#line 468 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2)
#line 470 "backend_libs.foreign.c"
{
#line 472 "backend_libs.foreign.c"
  {
#line 474 "backend_libs.foreign.c"
    MR_bool backend_libs__foreign__succeeded;

#line 477 "backend_libs.foreign.c"
    {
#line 479 "backend_libs.foreign.c"
      backend_libs__foreign__succeeded = backend_libs__foreign____Unify____exported_type_0_0(((MR_Word) backend_libs__foreign__wrapper_arg_1), ((MR_Word) backend_libs__foreign__wrapper_arg_2));
    }
#line 482 "backend_libs.foreign.c"
    return backend_libs__foreign__succeeded;
#line 484 "backend_libs.foreign.c"
  }
#line 486 "backend_libs.foreign.c"
}

#line 489 "backend_libs.foreign.c"
static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
#line 492 "backend_libs.foreign.c"
  MR_Box * backend_libs__foreign__wrapper_arg_1,
#line 494 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2,
#line 496 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_3)
#line 498 "backend_libs.foreign.c"
{
#line 500 "backend_libs.foreign.c"
  {
#line 502 "backend_libs.foreign.c"
    MR_Word backend_libs__foreign__conv0_HeadVar__1_1;

#line 505 "backend_libs.foreign.c"
    {
#line 507 "backend_libs.foreign.c"
      backend_libs__foreign____Compare____exported_type_0_0(&backend_libs__foreign__conv0_HeadVar__1_1, ((MR_Word) backend_libs__foreign__wrapper_arg_2), ((MR_Word) backend_libs__foreign__wrapper_arg_3));
    }
#line 510 "backend_libs.foreign.c"
    *backend_libs__foreign__wrapper_arg_1 = ((MR_Box) (backend_libs__foreign__conv0_HeadVar__1_1));
#line 512 "backend_libs.foreign.c"
  }
#line 514 "backend_libs.foreign.c"
}

#line 136 "foreign.m"
void MR_CALL 
backend_libs__foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_p_0(
#line 136 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1,
#line 136 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6,
#line 136 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7,
#line 136 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__8_8,
#line 136 "foreign.m"
  MR_Word * backend_libs__foreign__HeadVar__9_9,
#line 136 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_10,
#line 136 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_11)
#line 136 "foreign.m"
{
#line 183 "foreign.m"
  {
#line 183 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 183 "foreign.m"
    if ((backend_libs__foreign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "foreign.m"
      {
#line 184 "foreign.m"
        {
#line 184 "foreign.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.extrude_pragma_implementation\'/11", (MR_String) "no suitable target languages available");
#line 184 "foreign.m"
          return;
        }
#line 183 "foreign.m"
      }
#line 183 "foreign.m"
    else
#line 187 "foreign.m"
      {
#line 187 "foreign.m"
        MR_Word backend_libs__foreign__TargetLang_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 187 "foreign.m"
        MR_Word backend_libs__foreign__ForeignLanguage_37;
#line 186 "foreign.m"
        MR_Word backend_libs__foreign__TargetLangs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));

#line 190 "foreign.m"
        {
#line 190 "foreign.m"
          backend_libs__foreign__ForeignLanguage_37 = parse_tree__prog_data__get_foreign_language_1_f_0(backend_libs__foreign__HeadVar__8_8);
        }
#line 194 "foreign.m"
        {
#line 194 "foreign.m"
          backend_libs__foreign__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (backend_libs__foreign__ForeignLanguage_37)), backend_libs__foreign__HeadVar__1_1);
        }
#line 196 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 195 "foreign.m"
          {
#line 195 "foreign.m"
            *backend_libs__foreign__STATE_VARIABLE_Impl_11 = backend_libs__foreign__STATE_VARIABLE_Impl_0_10;
#line 195 "foreign.m"
            *backend_libs__foreign__HeadVar__9_9 = backend_libs__foreign__HeadVar__8_8;
#line 195 "foreign.m"
            *backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7 = backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6;
#line 195 "foreign.m"
          }
#line 196 "foreign.m"
        else
#line 197 "foreign.m"
          {
#line 197 "foreign.m"
            {
#line 197 "foreign.m"
              parse_tree__prog_data__set_foreign_language_3_p_0(backend_libs__foreign__TargetLang_28, backend_libs__foreign__HeadVar__8_8, backend_libs__foreign__HeadVar__9_9);
            }
#line 198 "foreign.m"
            {
#line 198 "foreign.m"
              backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(backend_libs__foreign__TargetLang_28, backend_libs__foreign__ForeignLanguage_37, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7, backend_libs__foreign__STATE_VARIABLE_Impl_0_10, backend_libs__foreign__STATE_VARIABLE_Impl_11);
#line 198 "foreign.m"
              return;
            }
#line 197 "foreign.m"
          }
#line 187 "foreign.m"
      }
#line 183 "foreign.m"
  }
#line 136 "foreign.m"
}

#line 178 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_exports__178__1_2_p_0(
#line 178 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 178 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_15)
#line 178 "foreign.m"
{
#line 178 "foreign.m"
  {
#line 178 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 178 "foreign.m"
    MR_Word backend_libs__foreign__Lang_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 0)));
#line 178 "foreign.m"
    MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 1)));
#line 178 "foreign.m"
    MR_Integer backend_libs__foreign__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 2)));
#line 178 "foreign.m"
    MR_String backend_libs__foreign__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 3)));
#line 178 "foreign.m"
    MR_Word backend_libs__foreign__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 4)));

#line 179 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_20);
#line 178 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 178 "foreign.m"
  }
#line 178 "foreign.m"
}

#line 173 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_imports__173__1_2_p_0(
#line 173 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 173 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_13)
#line 173 "foreign.m"
{
#line 173 "foreign.m"
  {
#line 173 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 173 "foreign.m"
    MR_Word backend_libs__foreign__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 0)));
#line 173 "foreign.m"
    MR_Word backend_libs__foreign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 1)));
#line 173 "foreign.m"
    MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 2)));

#line 174 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_16);
#line 173 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 173 "foreign.m"
  }
#line 173 "foreign.m"
}

#line 168 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_bodys__168__1_2_p_0(
#line 168 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 168 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_13)
#line 168 "foreign.m"
{
#line 168 "foreign.m"
  {
#line 168 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 168 "foreign.m"
    MR_Word backend_libs__foreign__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 0)));
#line 168 "foreign.m"
    MR_Word backend_libs__foreign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 1)));
#line 168 "foreign.m"
    MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 2)));

#line 169 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_16);
#line 168 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 168 "foreign.m"
  }
#line 168 "foreign.m"
}

#line 163 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_decls__163__1_2_p_0(
#line 163 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 163 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_14)
#line 163 "foreign.m"
{
#line 163 "foreign.m"
  {
#line 163 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 163 "foreign.m"
    MR_Word backend_libs__foreign__Lang_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 0)));
#line 163 "foreign.m"
    MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 1)));
#line 163 "foreign.m"
    MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 2)));
#line 163 "foreign.m"
    MR_Word backend_libs__foreign__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 3)));

#line 164 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_18);
#line 163 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 163 "foreign.m"
  }
#line 163 "foreign.m"
}

#line 344 "foreign.m"
void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0(
#line 344 "foreign.m"
  MR_Word * backend_libs__foreign__HeadVar__1_1,
#line 344 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_2,
#line 344 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__3_3)
#line 344 "foreign.m"
{
#line 344 "foreign.m"
  {
#line 344 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 344 "foreign.m"
    MR_Integer backend_libs__foreign__CastX_17 = (MR_Integer) backend_libs__foreign__HeadVar__2_2;
#line 344 "foreign.m"
    MR_Integer backend_libs__foreign__CastY_18 = (MR_Integer) backend_libs__foreign__HeadVar__3_3;

#line 344 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__CastX_17 == backend_libs__foreign__CastY_18);
#line 344 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 758 "backend_libs.foreign.c"
      *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 344 "foreign.m"
    else
#line 344 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 344 "foreign.m"
      {
#line 344 "foreign.m"
        MR_Word backend_libs__foreign__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 344 "foreign.m"
        MR_Word backend_libs__foreign__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));

#line 344 "foreign.m"
        if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 344 "foreign.m"
          {
#line 344 "foreign.m"
            MR_Word backend_libs__foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 344 "foreign.m"
            MR_Word backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 344 "foreign.m"
            MR_Word backend_libs__foreign__V_8_8;

#line 344 "foreign.m"
            {
#line 344 "foreign.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&backend_libs__foreign__V_8_8, backend_libs__foreign__V_23_23, backend_libs__foreign__V_6_6);
            }
#line 787 "backend_libs.foreign.c"
            backend_libs__foreign__succeeded = (backend_libs__foreign__V_8_8 == (MR_Integer) 0);
#line 344 "foreign.m"
            backend_libs__foreign__succeeded = !(backend_libs__foreign__succeeded);
#line 344 "foreign.m"
            if (backend_libs__foreign__succeeded)
#line 344 "foreign.m"
              *backend_libs__foreign__HeadVar__1_1 = backend_libs__foreign__V_8_8;
#line 344 "foreign.m"
            else
#line 344 "foreign.m"
              {
#line 344 "foreign.m"
                {
#line 344 "foreign.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__foreign_scalar_common_1[0], backend_libs__foreign__HeadVar__1_1, ((MR_Box) (backend_libs__foreign__V_22_22)), ((MR_Box) (backend_libs__foreign__V_7_7)));
#line 344 "foreign.m"
                  return;
                }
#line 344 "foreign.m"
              }
#line 344 "foreign.m"
          }
#line 344 "foreign.m"
        else
#line 812 "backend_libs.foreign.c"
          *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 1;
#line 344 "foreign.m"
      }
#line 344 "foreign.m"
    else
#line 344 "foreign.m"
      {
#line 344 "foreign.m"
        MR_Word backend_libs__foreign__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));

#line 344 "foreign.m"
        if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 825 "backend_libs.foreign.c"
          *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 2;
#line 344 "foreign.m"
        else
#line 344 "foreign.m"
          {
#line 344 "foreign.m"
            MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 0)));

#line 344 "foreign.m"
            {
#line 344 "foreign.m"
              parse_tree__prog_data____Compare____mer_type_0_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__V_24_24, backend_libs__foreign__V_16_16);
#line 344 "foreign.m"
              return;
            }
#line 344 "foreign.m"
          }
#line 344 "foreign.m"
      }
#line 344 "foreign.m"
  }
#line 344 "foreign.m"
}

#line 344 "foreign.m"
MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0(
#line 344 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1,
#line 344 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_2)
#line 344 "foreign.m"
{
#line 344 "foreign.m"
  {
#line 344 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 344 "foreign.m"
    MR_Integer backend_libs__foreign__CastX_9 = (MR_Integer) backend_libs__foreign__HeadVar__1_1;
#line 344 "foreign.m"
    MR_Integer backend_libs__foreign__CastY_10 = (MR_Integer) backend_libs__foreign__HeadVar__2_2;

#line 344 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__CastX_9 == backend_libs__foreign__CastY_10);
#line 344 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 344 "foreign.m"
      backend_libs__foreign__succeeded = MR_TRUE;
#line 344 "foreign.m"
    else
#line 344 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 344 "foreign.m"
      {
#line 344 "foreign.m"
        MR_Word backend_libs__foreign__TypeInfo_12_12;
#line 344 "foreign.m"
        MR_Word backend_libs__foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 344 "foreign.m"
        MR_Word backend_libs__foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 344 "foreign.m"
        MR_Word backend_libs__foreign__V_5_5;
#line 344 "foreign.m"
        MR_Word backend_libs__foreign__V_6_6;

#line 344 "foreign.m"
        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 344 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 344 "foreign.m"
          {
#line 344 "foreign.m"
            backend_libs__foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 344 "foreign.m"
            backend_libs__foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 901 "backend_libs.foreign.c"
            {
#line 903 "backend_libs.foreign.c"
              backend_libs__foreign__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__foreign__V_3_3, backend_libs__foreign__V_5_5);
            }
#line 344 "foreign.m"
            if (backend_libs__foreign__succeeded)
#line 344 "foreign.m"
              {
#line 910 "backend_libs.foreign.c"
                backend_libs__foreign__TypeInfo_12_12 = (MR_Word) &backend_libs__foreign_scalar_common_1[0];
#line 912 "backend_libs.foreign.c"
                {
#line 914 "backend_libs.foreign.c"
                  return backend_libs__foreign__succeeded = mercury__builtin__unify_2_p_0(backend_libs__foreign__TypeInfo_12_12, ((MR_Box) (backend_libs__foreign__V_4_4)), ((MR_Box) (backend_libs__foreign__V_6_6)));
                }
#line 344 "foreign.m"
              }
#line 344 "foreign.m"
          }
#line 344 "foreign.m"
      }
#line 344 "foreign.m"
    else
#line 344 "foreign.m"
      {
#line 344 "foreign.m"
        MR_Word backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 344 "foreign.m"
        MR_Word backend_libs__foreign__V_8_8;

#line 344 "foreign.m"
        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 344 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 344 "foreign.m"
          {
#line 344 "foreign.m"
            backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 940 "backend_libs.foreign.c"
            {
#line 942 "backend_libs.foreign.c"
              return backend_libs__foreign__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(backend_libs__foreign__V_7_7, backend_libs__foreign__V_8_8);
            }
#line 344 "foreign.m"
          }
#line 344 "foreign.m"
      }
#line 344 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 344 "foreign.m"
  }
#line 344 "foreign.m"
}

#line 202 "foreign.m"
static void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(
#line 202 "foreign.m"
  MR_Word backend_libs__foreign__TargetLanguage_7,
#line 202 "foreign.m"
  MR_Word backend_libs__foreign__ForeignLanguage_8,
#line 202 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11,
#line 202 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12,
#line 202 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_13,
#line 202 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_14)
#line 202 "foreign.m"
{
#line 208 "foreign.m"
  {
#line 208 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 226 "foreign.m"
#line 226 "foreign.m"
    switch (backend_libs__foreign__TargetLanguage_7) {
#line 226 "foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 226 "foreign.m"
      case (MR_Integer) 0:
#line 218 "foreign.m"
#line 218 "foreign.m"
        switch (backend_libs__foreign__ForeignLanguage_8) {
#line 218 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 218 "foreign.m"
          case (MR_Integer) 0:
#line 217 "foreign.m"
            {
#line 217 "foreign.m"
            }
#line 218 "foreign.m"
            break;
#line 218 "foreign.m"
          case (MR_Integer) 1:
#line 218 "foreign.m"
          case (MR_Integer) 4:
#line 218 "foreign.m"
          case (MR_Integer) 3:
#line 218 "foreign.m"
          case (MR_Integer) 2:
#line 279 "foreign.m"
            {
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_19_19;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_21_21;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_22_22;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_23_23;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_25_25;

#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_22_22 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
#line 282 "foreign.m"
              {
#line 282 "foreign.m"
                backend_libs__foreign__V_25_25 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
#line 282 "foreign.m"
              {
#line 282 "foreign.m"
                backend_libs__foreign__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_25_25);
              }
#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_21_21 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_22_22, backend_libs__foreign__V_23_23);
              }
#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_21_21);
              }
#line 280 "foreign.m"
              {
#line 280 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_19_19);
#line 280 "foreign.m"
                return;
              }
#line 279 "foreign.m"
            }
#line 218 "foreign.m"
            break;
#line 218 "foreign.m"
        }
#line 226 "foreign.m"
        break;
#line 226 "foreign.m"
      case (MR_Integer) 1:
#line 230 "foreign.m"
#line 230 "foreign.m"
        switch (backend_libs__foreign__ForeignLanguage_8) {
#line 230 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 230 "foreign.m"
          case (MR_Integer) 0:
#line 230 "foreign.m"
          case (MR_Integer) 4:
#line 230 "foreign.m"
          case (MR_Integer) 3:
#line 230 "foreign.m"
          case (MR_Integer) 2:
#line 279 "foreign.m"
            {
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_30_30;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_32_32;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_33_33;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_34_34;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_36_36;

#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_33_33 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
#line 282 "foreign.m"
              {
#line 282 "foreign.m"
                backend_libs__foreign__V_36_36 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
#line 282 "foreign.m"
              {
#line 282 "foreign.m"
                backend_libs__foreign__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_36_36);
              }
#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_32_32 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_33_33, backend_libs__foreign__V_34_34);
              }
#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_32_32);
              }
#line 280 "foreign.m"
              {
#line 280 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_30_30);
#line 280 "foreign.m"
                return;
              }
#line 279 "foreign.m"
            }
#line 230 "foreign.m"
            break;
#line 230 "foreign.m"
          case (MR_Integer) 1:
#line 229 "foreign.m"
            {
#line 229 "foreign.m"
            }
#line 230 "foreign.m"
            break;
#line 230 "foreign.m"
        }
#line 226 "foreign.m"
        break;
#line 226 "foreign.m"
      case (MR_Integer) 4:
#line 266 "foreign.m"
#line 266 "foreign.m"
        switch (backend_libs__foreign__ForeignLanguage_8) {
#line 266 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 266 "foreign.m"
          case (MR_Integer) 0:
#line 266 "foreign.m"
          case (MR_Integer) 1:
#line 266 "foreign.m"
          case (MR_Integer) 3:
#line 266 "foreign.m"
          case (MR_Integer) 2:
#line 279 "foreign.m"
            {
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_41_41;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_43_43;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_44_44;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_45_45;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_47_47;

#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_44_44 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
#line 282 "foreign.m"
              {
#line 282 "foreign.m"
                backend_libs__foreign__V_47_47 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
#line 282 "foreign.m"
              {
#line 282 "foreign.m"
                backend_libs__foreign__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_47_47);
              }
#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_43_43 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_44_44, backend_libs__foreign__V_45_45);
              }
#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_43_43);
              }
#line 280 "foreign.m"
              {
#line 280 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_41_41);
#line 280 "foreign.m"
                return;
              }
#line 279 "foreign.m"
            }
#line 266 "foreign.m"
            break;
#line 266 "foreign.m"
          case (MR_Integer) 4:
#line 265 "foreign.m"
            {
#line 265 "foreign.m"
            }
#line 266 "foreign.m"
            break;
#line 266 "foreign.m"
        }
#line 226 "foreign.m"
        break;
#line 226 "foreign.m"
      case (MR_Integer) 3:
#line 242 "foreign.m"
#line 242 "foreign.m"
        switch (backend_libs__foreign__ForeignLanguage_8) {
#line 242 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 242 "foreign.m"
          case (MR_Integer) 0:
#line 242 "foreign.m"
          case (MR_Integer) 1:
#line 242 "foreign.m"
          case (MR_Integer) 4:
#line 242 "foreign.m"
          case (MR_Integer) 2:
#line 279 "foreign.m"
            {
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_52_52;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_54_54;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_55_55;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_56_56;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_58_58;

#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_55_55 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
#line 282 "foreign.m"
              {
#line 282 "foreign.m"
                backend_libs__foreign__V_58_58 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
#line 282 "foreign.m"
              {
#line 282 "foreign.m"
                backend_libs__foreign__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_58_58);
              }
#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_54_54 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_55_55, backend_libs__foreign__V_56_56);
              }
#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_54_54);
              }
#line 280 "foreign.m"
              {
#line 280 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_52_52);
#line 280 "foreign.m"
                return;
              }
#line 279 "foreign.m"
            }
#line 242 "foreign.m"
            break;
#line 242 "foreign.m"
          case (MR_Integer) 3:
#line 241 "foreign.m"
            {
#line 241 "foreign.m"
            }
#line 242 "foreign.m"
            break;
#line 242 "foreign.m"
        }
#line 226 "foreign.m"
        break;
#line 226 "foreign.m"
      case (MR_Integer) 2:
#line 254 "foreign.m"
#line 254 "foreign.m"
        switch (backend_libs__foreign__ForeignLanguage_8) {
#line 254 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 254 "foreign.m"
          case (MR_Integer) 0:
#line 254 "foreign.m"
          case (MR_Integer) 1:
#line 254 "foreign.m"
          case (MR_Integer) 4:
#line 254 "foreign.m"
          case (MR_Integer) 3:
#line 279 "foreign.m"
            {
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_63_63;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_65_65;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_66_66;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_67_67;
#line 279 "foreign.m"
              MR_String backend_libs__foreign__V_69_69;

#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_66_66 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
#line 282 "foreign.m"
              {
#line 282 "foreign.m"
                backend_libs__foreign__V_69_69 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
#line 282 "foreign.m"
              {
#line 282 "foreign.m"
                backend_libs__foreign__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_69_69);
              }
#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_65_65 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_66_66, backend_libs__foreign__V_67_67);
              }
#line 281 "foreign.m"
              {
#line 281 "foreign.m"
                backend_libs__foreign__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_65_65);
              }
#line 280 "foreign.m"
              {
#line 280 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_63_63);
#line 280 "foreign.m"
                return;
              }
#line 279 "foreign.m"
            }
#line 254 "foreign.m"
            break;
#line 254 "foreign.m"
          case (MR_Integer) 2:
#line 253 "foreign.m"
            {
#line 253 "foreign.m"
            }
#line 254 "foreign.m"
            break;
#line 254 "foreign.m"
        }
#line 226 "foreign.m"
        break;
#line 226 "foreign.m"
    }
#line 208 "foreign.m"
    *backend_libs__foreign__STATE_VARIABLE_Impl_14 = backend_libs__foreign__STATE_VARIABLE_Impl_0_13;
#line 208 "foreign.m"
    *backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12 = backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11;
#line 208 "foreign.m"
  }
#line 202 "foreign.m"
}

#line 145 "foreign.m"
MR_String MR_CALL 
backend_libs__foreign__decl_guard_1_f_0(
#line 145 "foreign.m"
  MR_Word backend_libs__foreign__ModuleName_3)
#line 145 "foreign.m"
{
#line 590 "foreign.m"
  {
#line 590 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 590 "foreign.m"
    MR_String backend_libs__foreign__HeadVar__2_2;
#line 590 "foreign.m"
    MR_String backend_libs__foreign__UppercaseModuleName_4;
#line 590 "foreign.m"
    MR_String backend_libs__foreign__MangledModuleName_5;

#line 591 "foreign.m"
    {
#line 591 "foreign.m"
      backend_libs__foreign__MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__foreign__ModuleName_3);
    }
#line 592 "foreign.m"
    {
#line 592 "foreign.m"
      mercury__string__to_upper_2_p_0(backend_libs__foreign__MangledModuleName_5, &backend_libs__foreign__UppercaseModuleName_4);
    }
#line 590 "foreign.m"
    {
#line 590 "foreign.m"
      return backend_libs__foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__UppercaseModuleName_4, (MR_String) "_DECL_GUARD");
    }
#line 590 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 590 "foreign.m"
  }
#line 145 "foreign.m"
}

#line 136 "foreign.m"
void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_11_p_0(
#line 136 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1,
#line 136 "foreign.m"
  MR_Word backend_libs__foreign___PragmaVars_2,
#line 136 "foreign.m"
  MR_Word backend_libs__foreign___PredName_3,
#line 136 "foreign.m"
  MR_Word backend_libs__foreign___PredOrFunc_4,
#line 136 "foreign.m"
  MR_Word backend_libs__foreign___Context_5,
#line 136 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6,
#line 136 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7,
#line 136 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__8_8,
#line 136 "foreign.m"
  MR_Word * backend_libs__foreign__HeadVar__9_9,
#line 136 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_10,
#line 136 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_11)
#line 136 "foreign.m"
{
#line 183 "foreign.m"
  {
#line 183 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 183 "foreign.m"
    {
#line 183 "foreign.m"
      backend_libs__foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_p_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7, backend_libs__foreign__HeadVar__8_8, backend_libs__foreign__HeadVar__9_9, backend_libs__foreign__STATE_VARIABLE_Impl_0_10, backend_libs__foreign__STATE_VARIABLE_Impl_11);
#line 183 "foreign.m"
      return;
    }
#line 183 "foreign.m"
  }
#line 136 "foreign.m"
}

#line 178 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_exports_4_p_0_1(
#line 178 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 178 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 178 "foreign.m"
{
#line 178 "foreign.m"
  {
#line 178 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 178 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 178 "foreign.m"
    {
#line 178 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_exports__178__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 178 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 178 "foreign.m"
  }
#line 178 "foreign.m"
}

#line 119 "foreign.m"
void MR_CALL 
backend_libs__foreign__filter_exports_4_p_0(
#line 119 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 119 "foreign.m"
  MR_Word backend_libs__foreign__Exports0_6,
#line 119 "foreign.m"
  MR_Word * backend_libs__foreign__LangExports_7,
#line 119 "foreign.m"
  MR_Word * backend_libs__foreign__NotLangExports_8)
#line 119 "foreign.m"
{
#line 177 "foreign.m"
  {
#line 177 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 177 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 178 "foreign.m"
    {
#line 178 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 178 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_4[3]));
#line 178 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_exports_4_p_0_1));
#line 178 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 178 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 178 "foreign.m"
    }
#line 180 "foreign.m"
    {
#line 180 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Exports0_6, backend_libs__foreign__LangExports_7, backend_libs__foreign__NotLangExports_8);
#line 180 "foreign.m"
      return;
    }
#line 177 "foreign.m"
  }
#line 119 "foreign.m"
}

#line 173 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_imports_4_p_0_1(
#line 173 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 173 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 173 "foreign.m"
{
#line 173 "foreign.m"
  {
#line 173 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 173 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 173 "foreign.m"
    {
#line 173 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_imports__173__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 173 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 173 "foreign.m"
  }
#line 173 "foreign.m"
}

#line 110 "foreign.m"
void MR_CALL 
backend_libs__foreign__filter_imports_4_p_0(
#line 110 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 110 "foreign.m"
  MR_Word backend_libs__foreign__Imports0_6,
#line 110 "foreign.m"
  MR_Word * backend_libs__foreign__LangImports_7,
#line 110 "foreign.m"
  MR_Word * backend_libs__foreign__NotLangImports_8)
#line 110 "foreign.m"
{
#line 172 "foreign.m"
  {
#line 172 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 172 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 173 "foreign.m"
    {
#line 173 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 173 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_4[2]));
#line 173 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_imports_4_p_0_1));
#line 173 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 173 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 173 "foreign.m"
    }
#line 175 "foreign.m"
    {
#line 175 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Imports0_6, backend_libs__foreign__LangImports_7, backend_libs__foreign__NotLangImports_8);
#line 175 "foreign.m"
      return;
    }
#line 172 "foreign.m"
  }
#line 110 "foreign.m"
}

#line 168 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0_1(
#line 168 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 168 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 168 "foreign.m"
{
#line 168 "foreign.m"
  {
#line 168 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 168 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 168 "foreign.m"
    {
#line 168 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_bodys__168__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 168 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 168 "foreign.m"
  }
#line 168 "foreign.m"
}

#line 103 "foreign.m"
void MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0(
#line 103 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 103 "foreign.m"
  MR_Word backend_libs__foreign__Bodys0_6,
#line 103 "foreign.m"
  MR_Word * backend_libs__foreign__LangBodys_7,
#line 103 "foreign.m"
  MR_Word * backend_libs__foreign__NotLangBodys_8)
#line 103 "foreign.m"
{
#line 167 "foreign.m"
  {
#line 167 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 167 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 168 "foreign.m"
    {
#line 168 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 168 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_4[1]));
#line 168 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_bodys_4_p_0_1));
#line 168 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 168 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 168 "foreign.m"
    }
#line 170 "foreign.m"
    {
#line 170 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Bodys0_6, backend_libs__foreign__LangBodys_7, backend_libs__foreign__NotLangBodys_8);
#line 170 "foreign.m"
      return;
    }
#line 167 "foreign.m"
  }
#line 103 "foreign.m"
}

#line 163 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_decls_4_p_0_1(
#line 163 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 163 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 163 "foreign.m"
{
#line 163 "foreign.m"
  {
#line 163 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 163 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 163 "foreign.m"
    {
#line 163 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_decls__163__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 163 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 163 "foreign.m"
  }
#line 163 "foreign.m"
}

#line 96 "foreign.m"
void MR_CALL 
backend_libs__foreign__filter_decls_4_p_0(
#line 96 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 96 "foreign.m"
  MR_Word backend_libs__foreign__Decls0_6,
#line 96 "foreign.m"
  MR_Word * backend_libs__foreign__LangDecls_7,
#line 96 "foreign.m"
  MR_Word * backend_libs__foreign__NotLangDecls_8)
#line 96 "foreign.m"
{
#line 162 "foreign.m"
  {
#line 162 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 162 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 163 "foreign.m"
    {
#line 163 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 163 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_4[0]));
#line 163 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_decls_4_p_0_1));
#line 163 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 163 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 163 "foreign.m"
    }
#line 165 "foreign.m"
    {
#line 165 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Decls0_6, backend_libs__foreign__LangDecls_7, backend_libs__foreign__NotLangDecls_8);
#line 165 "foreign.m"
      return;
    }
#line 162 "foreign.m"
  }
#line 96 "foreign.m"
}

#line 89 "foreign.m"
MR_String MR_CALL 
backend_libs__foreign__mercury_exported_type_to_string_3_f_0(
#line 89 "foreign.m"
  MR_Word backend_libs__foreign__ModuleInfo_5,
#line 89 "foreign.m"
  MR_Word backend_libs__foreign__Lang_6,
#line 89 "foreign.m"
  MR_Word backend_libs__foreign__Type_7)
#line 89 "foreign.m"
{
#line 453 "foreign.m"
  {
#line 453 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 453 "foreign.m"
    MR_String backend_libs__foreign__HeadVar__4_4;
#line 453 "foreign.m"
    MR_Word backend_libs__foreign__V_8_8;

#line 454 "foreign.m"
    {
#line 454 "foreign.m"
      backend_libs__foreign__V_8_8 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__foreign__ModuleInfo_5, backend_libs__foreign__Type_7);
    }
#line 454 "foreign.m"
    {
#line 454 "foreign.m"
      return backend_libs__foreign__HeadVar__4_4 = backend_libs__foreign__exported_type_to_string_2_f_0(backend_libs__foreign__Lang_6, backend_libs__foreign__V_8_8);
    }
#line 453 "foreign.m"
    return backend_libs__foreign__HeadVar__4_4;
#line 453 "foreign.m"
  }
#line 89 "foreign.m"
}

#line 88 "foreign.m"
MR_String MR_CALL 
backend_libs__foreign__exported_type_to_string_2_f_0(
#line 88 "foreign.m"
  MR_Word backend_libs__foreign__Lang_4,
#line 88 "foreign.m"
  MR_Word backend_libs__foreign__ExportedType_5)
#line 88 "foreign.m"
{
#line 458 "foreign.m"
  {
#line 458 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 458 "foreign.m"
    MR_String backend_libs__foreign__Result_6;

#line 458 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__ExportedType_5)) == (MR_mktag((MR_Integer) 0))))
#line 458 "foreign.m"
      {
#line 458 "foreign.m"
        MR_Word backend_libs__foreign__ForeignType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportedType_5, (MR_Integer) 0)));
#line 458 "foreign.m"
        MR_Word backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportedType_5, (MR_Integer) 1)));

#line 468 "foreign.m"
#line 468 "foreign.m"
        switch (backend_libs__foreign__Lang_4) {
#line 468 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 468 "foreign.m"
          case (MR_Integer) 0:
#line 464 "foreign.m"
            if (((MR_tag((MR_Word) backend_libs__foreign__ForeignType_7)) == (MR_mktag((MR_Integer) 1))))
#line 465 "foreign.m"
              {
#line 466 "foreign.m"
                {
#line 466 "foreign.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "qualified C type");
                }
#line 465 "foreign.m"
              }
#line 464 "foreign.m"
            else
#line 462 "foreign.m"
              backend_libs__foreign__Result_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignType_7, (MR_Integer) 0)));
#line 468 "foreign.m"
            break;
#line 468 "foreign.m"
          case (MR_Integer) 1:
#line 468 "foreign.m"
          case (MR_Integer) 4:
#line 468 "foreign.m"
          case (MR_Integer) 3:
#line 468 "foreign.m"
          case (MR_Integer) 2:
#line 474 "foreign.m"
            {
#line 474 "foreign.m"
              return backend_libs__foreign__Result_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(backend_libs__foreign__ForeignType_7);
            }
#line 468 "foreign.m"
            break;
#line 468 "foreign.m"
        }
#line 458 "foreign.m"
      }
#line 458 "foreign.m"
    else
#line 477 "foreign.m"
      {
#line 477 "foreign.m"
        MR_Word backend_libs__foreign__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportedType_5, (MR_Integer) 0)));

#line 521 "foreign.m"
#line 521 "foreign.m"
        switch (backend_libs__foreign__Lang_4) {
#line 521 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 521 "foreign.m"
          case (MR_Integer) 0:
#line 503 "foreign.m"
#line 503 "foreign.m"
            switch (MR_tag((MR_Word) backend_libs__foreign__Type_12)) {
#line 503 "foreign.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 503 "foreign.m"
              case (MR_Integer) 0:
#line 516 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
#line 503 "foreign.m"
                break;
#line 503 "foreign.m"
              case (MR_Integer) 1:
#line 513 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
#line 503 "foreign.m"
                break;
#line 503 "foreign.m"
              case (MR_Integer) 2:
#line 489 "foreign.m"
                {
#line 489 "foreign.m"
                  MR_Word backend_libs__foreign__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 493 "foreign.m"
                  backend_libs__foreign__Result_6 = ((&backend_libs__foreign_vector_common_3[0 + backend_libs__foreign__BuiltinType_13]))->backend_libs__foreign__vector_common_type_3_0__vct_3_f_0;
#line 489 "foreign.m"
                }
#line 503 "foreign.m"
                break;
#line 503 "foreign.m"
              case (MR_Integer) 3:
#line 503 "foreign.m"
#line 503 "foreign.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__foreign__Type_12, (MR_Integer) 0)))) {
#line 503 "foreign.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 503 "foreign.m"
                  case (MR_Integer) 0:
#line 505 "foreign.m"
                    backend_libs__foreign__Result_6 = (MR_String) "MR_Tuple";
#line 503 "foreign.m"
                    break;
#line 503 "foreign.m"
                  case (MR_Integer) 1:
#line 503 "foreign.m"
                  case (MR_Integer) 2:
#line 513 "foreign.m"
                    backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
#line 503 "foreign.m"
                    break;
#line 503 "foreign.m"
                  case (MR_Integer) 3:
#line 518 "foreign.m"
                    {
#line 519 "foreign.m"
                      {
#line 519 "foreign.m"
                        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "kinded type");
                      }
#line 518 "foreign.m"
                    }
#line 503 "foreign.m"
                    break;
#line 503 "foreign.m"
                }
#line 503 "foreign.m"
                break;
#line 503 "foreign.m"
            }
#line 521 "foreign.m"
            break;
#line 521 "foreign.m"
          case (MR_Integer) 1:
#line 538 "foreign.m"
#line 538 "foreign.m"
            switch (MR_tag((MR_Word) backend_libs__foreign__Type_12)) {
#line 538 "foreign.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 538 "foreign.m"
              case (MR_Integer) 0:
#line 538 "foreign.m"
              case (MR_Integer) 1:
#line 548 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "object";
#line 538 "foreign.m"
                break;
#line 538 "foreign.m"
              case (MR_Integer) 2:
#line 524 "foreign.m"
                {
#line 524 "foreign.m"
                  MR_Word backend_libs__foreign__BuiltinType_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 528 "foreign.m"
                  backend_libs__foreign__Result_6 = ((&backend_libs__foreign_vector_common_3[4 + backend_libs__foreign__BuiltinType_74]))->backend_libs__foreign__vector_common_type_3_0__vct_3_f_0;
#line 524 "foreign.m"
                }
#line 538 "foreign.m"
                break;
#line 538 "foreign.m"
              case (MR_Integer) 3:
#line 548 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "object";
#line 538 "foreign.m"
                break;
#line 538 "foreign.m"
            }
#line 521 "foreign.m"
            break;
#line 521 "foreign.m"
          case (MR_Integer) 4:
#line 583 "foreign.m"
            {
#line 584 "foreign.m"
              {
#line 584 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "erlang");
              }
#line 583 "foreign.m"
            }
#line 521 "foreign.m"
            break;
#line 521 "foreign.m"
          case (MR_Integer) 3:
#line 580 "foreign.m"
            {
#line 581 "foreign.m"
              {
#line 581 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "il");
              }
#line 580 "foreign.m"
            }
#line 521 "foreign.m"
            break;
#line 521 "foreign.m"
          case (MR_Integer) 2:
#line 567 "foreign.m"
#line 567 "foreign.m"
            switch (MR_tag((MR_Word) backend_libs__foreign__Type_12)) {
#line 567 "foreign.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 567 "foreign.m"
              case (MR_Integer) 0:
#line 567 "foreign.m"
              case (MR_Integer) 1:
#line 577 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "java.lang.Object";
#line 567 "foreign.m"
                break;
#line 567 "foreign.m"
              case (MR_Integer) 2:
#line 553 "foreign.m"
                {
#line 553 "foreign.m"
                  MR_Word backend_libs__foreign__BuiltinType_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 557 "foreign.m"
                  backend_libs__foreign__Result_6 = ((&backend_libs__foreign_vector_common_3[8 + backend_libs__foreign__BuiltinType_77]))->backend_libs__foreign__vector_common_type_3_0__vct_3_f_0;
#line 553 "foreign.m"
                }
#line 567 "foreign.m"
                break;
#line 567 "foreign.m"
              case (MR_Integer) 3:
#line 577 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "java.lang.Object";
#line 567 "foreign.m"
                break;
#line 567 "foreign.m"
            }
#line 521 "foreign.m"
            break;
#line 521 "foreign.m"
        }
#line 477 "foreign.m"
      }
#line 458 "foreign.m"
    return backend_libs__foreign__Result_6;
#line 458 "foreign.m"
  }
#line 88 "foreign.m"
}

#line 81 "foreign.m"
MR_Word MR_CALL 
backend_libs__foreign__is_foreign_type_1_f_0(
#line 81 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1)
#line 81 "foreign.m"
{
#line 450 "foreign.m"
  {
#line 450 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 450 "foreign.m"
    MR_Word backend_libs__foreign__HeadVar__2_2;

#line 450 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 450 "foreign.m"
      {
#line 450 "foreign.m"
        MR_Word backend_libs__foreign__Assertions_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 450 "foreign.m"
        MR_Word backend_libs__foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));

#line 450 "foreign.m"
        {
#line 450 "foreign.m"
          backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 450 "foreign.m"
          MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, 0) = ((MR_Box) (backend_libs__foreign__Assertions_4));
#line 450 "foreign.m"
        }
#line 450 "foreign.m"
      }
#line 450 "foreign.m"
    else
#line 451 "foreign.m"
      backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 450 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 450 "foreign.m"
  }
#line 81 "foreign.m"
}

#line 73 "foreign.m"
void MR_CALL 
backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(
#line 73 "foreign.m"
  MR_Word backend_libs__foreign__ModuleInfo_6,
#line 73 "foreign.m"
  MR_Word backend_libs__foreign__ForeignTypeBody_7,
#line 73 "foreign.m"
  MR_Word * backend_libs__foreign__Name_8,
#line 73 "foreign.m"
  MR_Word * backend_libs__foreign__MaybeUserEqComp_9,
#line 73 "foreign.m"
  MR_Word * backend_libs__foreign__Assertions_10)
#line 73 "foreign.m"
{
#line 385 "foreign.m"
  {
#line 385 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 385 "foreign.m"
    MR_Word backend_libs__foreign__MaybeIL_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 0)));
#line 385 "foreign.m"
    MR_Word backend_libs__foreign__MaybeC_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 1)));
#line 385 "foreign.m"
    MR_Word backend_libs__foreign__MaybeJava_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 2)));
#line 385 "foreign.m"
    MR_Word backend_libs__foreign__MaybeCSharp_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 3)));
#line 385 "foreign.m"
    MR_Word backend_libs__foreign__MaybeErlang_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 4)));
#line 385 "foreign.m"
    MR_Word backend_libs__foreign__Globals_16;
#line 385 "foreign.m"
    MR_Word backend_libs__foreign__Target_17;

#line 392 "foreign.m"
    {
#line 392 "foreign.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__foreign__ModuleInfo_6, &backend_libs__foreign__Globals_16);
    }
#line 393 "foreign.m"
    {
#line 393 "foreign.m"
      libs__globals__get_target_2_p_0(backend_libs__foreign__Globals_16, &backend_libs__foreign__Target_17);
    }
#line 405 "foreign.m"
#line 405 "foreign.m"
    switch (backend_libs__foreign__Target_17) {
#line 405 "foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 405 "foreign.m"
      case (MR_Integer) 0:
#line 401 "foreign.m"
        if ((backend_libs__foreign__MaybeC_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "foreign.m"
          {
#line 403 "foreign.m"
            {
#line 403 "foreign.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C type");
#line 403 "foreign.m"
              return;
            }
#line 402 "foreign.m"
          }
#line 401 "foreign.m"
        else
#line 397 "foreign.m"
          {
#line 397 "foreign.m"
            MR_Word backend_libs__foreign__Data_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeC_12, (MR_Integer) 0)));
#line 397 "foreign.m"
            MR_String backend_libs__foreign__NameStr_19;
#line 397 "foreign.m"
            MR_Word backend_libs__foreign__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_18, (MR_Integer) 0)));

#line 398 "foreign.m"
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_18, (MR_Integer) 1)));
#line 398 "foreign.m"
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_18, (MR_Integer) 2)));
#line 398 "foreign.m"
            backend_libs__foreign__NameStr_19 = (MR_String) backend_libs__foreign__V_42_42;
#line 400 "foreign.m"
            {
#line 400 "foreign.m"
              MR_Word base;
#line 400 "foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 400 "foreign.m"
              *backend_libs__foreign__Name_8 = base;
#line 400 "foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_19));
#line 400 "foreign.m"
            }
#line 397 "foreign.m"
          }
#line 405 "foreign.m"
        break;
#line 405 "foreign.m"
      case (MR_Integer) 2:
#line 422 "foreign.m"
        if ((backend_libs__foreign__MaybeCSharp_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "foreign.m"
          {
#line 424 "foreign.m"
            {
#line 424 "foreign.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C# type");
#line 424 "foreign.m"
              return;
            }
#line 423 "foreign.m"
          }
#line 422 "foreign.m"
        else
#line 418 "foreign.m"
          {
#line 418 "foreign.m"
            MR_Word backend_libs__foreign__V_34_34;
#line 418 "foreign.m"
            MR_Word backend_libs__foreign__Data_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeCSharp_14, (MR_Integer) 0)));
#line 418 "foreign.m"
            MR_String backend_libs__foreign__NameStr_47;

#line 419 "foreign.m"
            backend_libs__foreign__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_46, (MR_Integer) 0)));
#line 419 "foreign.m"
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_46, (MR_Integer) 1)));
#line 419 "foreign.m"
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_46, (MR_Integer) 2)));
#line 419 "foreign.m"
            backend_libs__foreign__NameStr_47 = (MR_String) backend_libs__foreign__V_34_34;
#line 421 "foreign.m"
            {
#line 421 "foreign.m"
              MR_Word base;
#line 421 "foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 421 "foreign.m"
              *backend_libs__foreign__Name_8 = base;
#line 421 "foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_47));
#line 421 "foreign.m"
            }
#line 418 "foreign.m"
          }
#line 405 "foreign.m"
        break;
#line 405 "foreign.m"
      case (MR_Integer) 4:
#line 444 "foreign.m"
        if ((backend_libs__foreign__MaybeErlang_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "foreign.m"
          {
#line 446 "foreign.m"
            {
#line 446 "foreign.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Erlang type");
#line 446 "foreign.m"
              return;
            }
#line 445 "foreign.m"
          }
#line 444 "foreign.m"
        else
#line 440 "foreign.m"
          {
#line 440 "foreign.m"
            MR_Word backend_libs__foreign__Data_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeErlang_15, (MR_Integer) 0)));

#line 441 "foreign.m"
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_58, (MR_Integer) 1)));
#line 441 "foreign.m"
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_58, (MR_Integer) 2)));
#line 443 "foreign.m"
            *backend_libs__foreign__Name_8 = (MR_Word) &backend_libs__foreign_scalar_common_2[0];
#line 440 "foreign.m"
          }
#line 405 "foreign.m"
        break;
#line 405 "foreign.m"
      case (MR_Integer) 1:
#line 411 "foreign.m"
        if ((backend_libs__foreign__MaybeIL_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "foreign.m"
          {
#line 413 "foreign.m"
            {
#line 413 "foreign.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no IL type");
#line 413 "foreign.m"
              return;
            }
#line 412 "foreign.m"
          }
#line 411 "foreign.m"
        else
#line 408 "foreign.m"
          {
#line 408 "foreign.m"
            MR_Word backend_libs__foreign__V_38_38;
#line 408 "foreign.m"
            MR_Word backend_libs__foreign__Data_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeIL_11, (MR_Integer) 0)));
#line 409 "foreign.m"
            MR_Word backend_libs__foreign__V_20_20;
#line 409 "foreign.m"
            MR_String backend_libs__foreign__V_21_21;

#line 409 "foreign.m"
            backend_libs__foreign__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_43, (MR_Integer) 0)));
#line 409 "foreign.m"
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_43, (MR_Integer) 1)));
#line 409 "foreign.m"
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_43, (MR_Integer) 2)));
#line 409 "foreign.m"
            backend_libs__foreign__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__V_38_38, (MR_Integer) 0)));
#line 409 "foreign.m"
            backend_libs__foreign__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__V_38_38, (MR_Integer) 1)));
#line 409 "foreign.m"
            *backend_libs__foreign__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__V_38_38, (MR_Integer) 2)));
#line 408 "foreign.m"
          }
#line 405 "foreign.m"
        break;
#line 405 "foreign.m"
      case (MR_Integer) 3:
#line 433 "foreign.m"
        if ((backend_libs__foreign__MaybeJava_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "foreign.m"
          {
#line 435 "foreign.m"
            {
#line 435 "foreign.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Java type");
#line 435 "foreign.m"
              return;
            }
#line 434 "foreign.m"
          }
#line 433 "foreign.m"
        else
#line 429 "foreign.m"
          {
#line 429 "foreign.m"
            MR_Word backend_libs__foreign__V_30_30;
#line 429 "foreign.m"
            MR_Word backend_libs__foreign__Data_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeJava_13, (MR_Integer) 0)));
#line 429 "foreign.m"
            MR_String backend_libs__foreign__NameStr_53;

#line 430 "foreign.m"
            backend_libs__foreign__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_52, (MR_Integer) 0)));
#line 430 "foreign.m"
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_52, (MR_Integer) 1)));
#line 430 "foreign.m"
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_52, (MR_Integer) 2)));
#line 430 "foreign.m"
            backend_libs__foreign__NameStr_53 = (MR_String) backend_libs__foreign__V_30_30;
#line 432 "foreign.m"
            {
#line 432 "foreign.m"
              MR_Word base;
#line 432 "foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 432 "foreign.m"
              *backend_libs__foreign__Name_8 = base;
#line 432 "foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_53));
#line 432 "foreign.m"
            }
#line 429 "foreign.m"
          }
#line 405 "foreign.m"
        break;
#line 405 "foreign.m"
    }
#line 385 "foreign.m"
  }
#line 73 "foreign.m"
}

#line 65 "foreign.m"
MR_bool MR_CALL 
backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(
#line 65 "foreign.m"
  MR_Word backend_libs__foreign__ModuleInfo_4,
#line 65 "foreign.m"
  MR_Word backend_libs__foreign__Body_5,
#line 65 "foreign.m"
  MR_Word * backend_libs__foreign__UserEqComp_6)
#line 65 "foreign.m"
{
#line 379 "foreign.m"
  {
#line 379 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 379 "foreign.m"
    MR_Word backend_libs__foreign__MaybeUserEqComp_8;
#line 380 "foreign.m"
    MR_Word backend_libs__foreign__V_7_7;
#line 380 "foreign.m"
    MR_Word backend_libs__foreign__V_9_9;

#line 380 "foreign.m"
    {
#line 380 "foreign.m"
      backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__foreign__ModuleInfo_4, backend_libs__foreign__Body_5, &backend_libs__foreign__V_7_7, &backend_libs__foreign__MaybeUserEqComp_8, &backend_libs__foreign__V_9_9);
    }
#line 382 "foreign.m"
    backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__MaybeUserEqComp_8)) == (MR_mktag((MR_Integer) 1)));
#line 382 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 382 "foreign.m"
      *backend_libs__foreign__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeUserEqComp_8, (MR_Integer) 0)));
#line 379 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 379 "foreign.m"
  }
#line 65 "foreign.m"
}

#line 60 "foreign.m"
MR_Word MR_CALL 
backend_libs__foreign__to_exported_type_2_f_0(
#line 60 "foreign.m"
  MR_Word backend_libs__foreign__ModuleInfo_4,
#line 60 "foreign.m"
  MR_Word backend_libs__foreign__Type_5)
#line 60 "foreign.m"
{
#line 354 "foreign.m"
  {
#line 354 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 354 "foreign.m"
    MR_Word backend_libs__foreign__ExportType_6;
#line 354 "foreign.m"
    MR_Word backend_libs__foreign__TypeTable_7;
#line 374 "foreign.m"
    MR_Word backend_libs__foreign__TypeDefn_9;
#line 357 "foreign.m"
    MR_Word backend_libs__foreign__TypeCtor_8;

#line 355 "foreign.m"
    {
#line 355 "foreign.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__foreign__ModuleInfo_4, &backend_libs__foreign__TypeTable_7);
    }
#line 357 "foreign.m"
    {
#line 357 "foreign.m"
      backend_libs__foreign__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(backend_libs__foreign__Type_5, &backend_libs__foreign__TypeCtor_8);
    }
#line 357 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 358 "foreign.m"
      {
#line 358 "foreign.m"
        backend_libs__foreign__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(backend_libs__foreign__TypeTable_7, backend_libs__foreign__TypeCtor_8, &backend_libs__foreign__TypeDefn_9);
      }
#line 374 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 360 "foreign.m"
      {
#line 360 "foreign.m"
        MR_Word backend_libs__foreign__TypeBody_10;

#line 360 "foreign.m"
        {
#line 360 "foreign.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__foreign__TypeDefn_9, &backend_libs__foreign__TypeBody_10);
        }
#line 366 "foreign.m"
#line 366 "foreign.m"
        switch (MR_tag((MR_Word) backend_libs__foreign__TypeBody_10)) {
#line 366 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 366 "foreign.m"
          case (MR_Integer) 0:
#line 362 "foreign.m"
            {
#line 362 "foreign.m"
              MR_Word backend_libs__foreign__ForeignTypeBody_11 = (MR_Word) MR_body(((MR_Word) backend_libs__foreign__TypeBody_10), (MR_Integer) 0);
#line 362 "foreign.m"
              MR_Word backend_libs__foreign__ForeignTypeName_12;
#line 362 "foreign.m"
              MR_Word backend_libs__foreign__Assertions_14;
#line 363 "foreign.m"
              MR_Word backend_libs__foreign__V_13_13;

#line 363 "foreign.m"
              {
#line 363 "foreign.m"
                backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__foreign__ModuleInfo_4, backend_libs__foreign__ForeignTypeBody_11, &backend_libs__foreign__ForeignTypeName_12, &backend_libs__foreign__V_13_13, &backend_libs__foreign__Assertions_14);
              }
#line 365 "foreign.m"
              {
#line 365 "foreign.m"
                backend_libs__foreign__ExportType_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "foreign.m"
                MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__ForeignTypeName_12));
#line 365 "foreign.m"
                MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportType_6, 1) = ((MR_Box) (backend_libs__foreign__Assertions_14));
#line 365 "foreign.m"
              }
#line 362 "foreign.m"
            }
#line 366 "foreign.m"
            break;
#line 366 "foreign.m"
          case (MR_Integer) 1:
#line 366 "foreign.m"
          case (MR_Integer) 2:
#line 372 "foreign.m"
            {
#line 372 "foreign.m"
              backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 372 "foreign.m"
              MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
#line 372 "foreign.m"
            }
#line 366 "foreign.m"
            break;
#line 366 "foreign.m"
          case (MR_Integer) 3:
#line 372 "foreign.m"
            {
#line 372 "foreign.m"
              backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 372 "foreign.m"
              MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
#line 372 "foreign.m"
            }
#line 366 "foreign.m"
            break;
#line 366 "foreign.m"
        }
#line 360 "foreign.m"
      }
#line 374 "foreign.m"
    else
#line 375 "foreign.m"
      {
#line 375 "foreign.m"
        backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 375 "foreign.m"
        MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
#line 375 "foreign.m"
      }
#line 354 "foreign.m"
    return backend_libs__foreign__ExportType_6;
#line 354 "foreign.m"
  }
#line 60 "foreign.m"
}

#line 54 "foreign.m"
void MR_CALL 
backend_libs__foreign__have_foreign_type_for_backend_3_p_0(
#line 54 "foreign.m"
  MR_Word backend_libs__foreign__Target_4,
#line 54 "foreign.m"
  MR_Word backend_libs__foreign__ForeignTypeBody_5,
#line 54 "foreign.m"
  MR_Word * backend_libs__foreign__Have_6)
#line 54 "foreign.m"
{
#line 328 "foreign.m"
  {
#line 328 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 328 "foreign.m"
#line 328 "foreign.m"
    switch (backend_libs__foreign__Target_4) {
#line 328 "foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 328 "foreign.m"
      case (MR_Integer) 0:
#line 329 "foreign.m"
        {
#line 329 "foreign.m"
          MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 329 "foreign.m"
          MR_Word backend_libs__foreign__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 329 "foreign.m"
          MR_Word backend_libs__foreign__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 329 "foreign.m"
          MR_Word backend_libs__foreign__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 329 "foreign.m"
          MR_Word backend_libs__foreign__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 4)));
#line 329 "foreign.m"
          MR_Word backend_libs__foreign__V_7_7;

#line 329 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 329 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 329 "foreign.m"
            {
#line 329 "foreign.m"
              backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_16_16, (MR_Integer) 0)));
#line 329 "foreign.m"
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 329 "foreign.m"
            }
#line 329 "foreign.m"
          else
#line 329 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 329 "foreign.m"
        }
#line 328 "foreign.m"
        break;
#line 328 "foreign.m"
      case (MR_Integer) 2:
#line 338 "foreign.m"
        {
#line 338 "foreign.m"
          MR_Word backend_libs__foreign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 338 "foreign.m"
          MR_Word backend_libs__foreign__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 338 "foreign.m"
          MR_Word backend_libs__foreign__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 338 "foreign.m"
          MR_Word backend_libs__foreign__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 338 "foreign.m"
          MR_Word backend_libs__foreign__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 4)));
#line 338 "foreign.m"
          MR_Word backend_libs__foreign__V_10_10;

#line 338 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 338 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 338 "foreign.m"
            {
#line 338 "foreign.m"
              backend_libs__foreign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_13_13, (MR_Integer) 0)));
#line 338 "foreign.m"
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 338 "foreign.m"
            }
#line 338 "foreign.m"
          else
#line 338 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 338 "foreign.m"
        }
#line 328 "foreign.m"
        break;
#line 328 "foreign.m"
      case (MR_Integer) 4:
#line 341 "foreign.m"
        {
#line 341 "foreign.m"
          MR_Word backend_libs__foreign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 4)));
#line 341 "foreign.m"
          MR_Word backend_libs__foreign__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 341 "foreign.m"
          MR_Word backend_libs__foreign__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 341 "foreign.m"
          MR_Word backend_libs__foreign__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 341 "foreign.m"
          MR_Word backend_libs__foreign__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 341 "foreign.m"
          MR_Word backend_libs__foreign__V_11_11;

#line 341 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 341 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 341 "foreign.m"
            {
#line 341 "foreign.m"
              backend_libs__foreign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_12_12, (MR_Integer) 0)));
#line 341 "foreign.m"
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 341 "foreign.m"
            }
#line 341 "foreign.m"
          else
#line 341 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 341 "foreign.m"
        }
#line 328 "foreign.m"
        break;
#line 328 "foreign.m"
      case (MR_Integer) 1:
#line 332 "foreign.m"
        {
#line 332 "foreign.m"
          MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 332 "foreign.m"
          MR_Word backend_libs__foreign__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 332 "foreign.m"
          MR_Word backend_libs__foreign__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 332 "foreign.m"
          MR_Word backend_libs__foreign__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 332 "foreign.m"
          MR_Word backend_libs__foreign__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 4)));
#line 332 "foreign.m"
          MR_Word backend_libs__foreign__V_8_8;

#line 332 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 332 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 332 "foreign.m"
            {
#line 332 "foreign.m"
              backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_15_15, (MR_Integer) 0)));
#line 332 "foreign.m"
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 332 "foreign.m"
            }
#line 332 "foreign.m"
          else
#line 332 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 332 "foreign.m"
        }
#line 328 "foreign.m"
        break;
#line 328 "foreign.m"
      case (MR_Integer) 3:
#line 335 "foreign.m"
        {
#line 335 "foreign.m"
          MR_Word backend_libs__foreign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 335 "foreign.m"
          MR_Word backend_libs__foreign__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 335 "foreign.m"
          MR_Word backend_libs__foreign__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 335 "foreign.m"
          MR_Word backend_libs__foreign__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 335 "foreign.m"
          MR_Word backend_libs__foreign__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 4)));
#line 335 "foreign.m"
          MR_Word backend_libs__foreign__V_9_9;

#line 335 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 335 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 335 "foreign.m"
            {
#line 335 "foreign.m"
              backend_libs__foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_14_14, (MR_Integer) 0)));
#line 335 "foreign.m"
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 335 "foreign.m"
            }
#line 335 "foreign.m"
          else
#line 335 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 335 "foreign.m"
        }
#line 328 "foreign.m"
        break;
#line 328 "foreign.m"
    }
#line 328 "foreign.m"
  }
#line 54 "foreign.m"
}

#line 49 "foreign.m"
MR_Word MR_CALL 
backend_libs__foreign__non_foreign_type_1_f_0(
#line 49 "foreign.m"
  MR_Word backend_libs__foreign__Type_3)
#line 49 "foreign.m"
{
#line 352 "foreign.m"
  {
#line 352 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 352 "foreign.m"
    MR_Word backend_libs__foreign__HeadVar__2_2;

#line 352 "foreign.m"
    {
#line 352 "foreign.m"
      backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 352 "foreign.m"
      MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, 0) = ((MR_Box) (backend_libs__foreign__Type_3));
#line 352 "foreign.m"
    }
#line 352 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 352 "foreign.m"
  }
#line 49 "foreign.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.foreign. */
