/*
** Automatically generated from `foreign.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "backend_libs.foreign.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__foreign__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;

#line 141 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0[2];

#line 144 "backend_libs.foreign.c"
static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0;

#line 147 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1[1];

#line 150 "backend_libs.foreign.c"
static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1;

#line 153 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0[1];

#line 156 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_1[1];

#line 159 "backend_libs.foreign.c"
static const MR_DuPtagLayout backend_libs__foreign__backend_libs__foreign__du_ptag_ordered_exported_type_0[2];

#line 162 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0[2];

#line 165 "backend_libs.foreign.c"
static const MR_Integer backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0[2];

#line 168 "backend_libs.foreign.c"
static MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0_10001(
#line 171 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_1,
#line 173 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2);

#line 176 "backend_libs.foreign.c"
static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
#line 179 "backend_libs.foreign.c"
  MR_Box * backend_libs__foreign__wrapper_arg_1,
#line 181 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2,
#line 183 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_3);

#line 191 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_exports__191__1_2_p_0(
#line 191 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 191 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_15);

#line 186 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_bodys__186__1_2_p_0(
#line 186 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 186 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_13);

#line 181 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_imports__181__1_2_p_0(
#line 181 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 181 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_13);

#line 176 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_decls__176__1_2_p_0(
#line 176 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 176 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_14);

#line 215 "foreign.m"
static void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(
#line 215 "foreign.m"
  MR_Word backend_libs__foreign__TargetLanguage_7,
#line 215 "foreign.m"
  MR_Word backend_libs__foreign__ForeignLanguage_8,
#line 215 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11,
#line 215 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12,
#line 215 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_13,
#line 215 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_14);

#line 191 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_exports_4_p_0_1(
#line 191 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 191 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);

#line 186 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0_1(
#line 186 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 186 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);

#line 181 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_imports_4_p_0_1(
#line 181 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 181 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);

#line 176 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_decls_4_p_0_1(
#line 176 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 176 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);


static /* final */ const MR_Box backend_libs__foreign_scalar_common_1[1][2];

static /* final */ const MR_Box backend_libs__foreign_scalar_common_2[1][1];

static /* final */ const MR_Box backend_libs__foreign_scalar_common_3[4][5];




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

static /* final */ const MR_Box backend_libs__foreign_scalar_common_3[4][5] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0))
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 343 "backend_libs.foreign.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__foreign__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0
  }
};

#line 351 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &backend_libs__foreign__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0
};

#line 357 "backend_libs.foreign.c"
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

#line 372 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 377 "backend_libs.foreign.c"
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

#line 392 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0[1] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0
};

#line 397 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_1[1] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1
};

#line 402 "backend_libs.foreign.c"
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

#line 416 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0[2] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0,
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1
};

#line 422 "backend_libs.foreign.c"
static const MR_Integer backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 428 "backend_libs.foreign.c"
const MR_TypeCtorInfo_Struct backend_libs__foreign__backend_libs__foreign__type_ctor_info_exported_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__foreign____Unify____exported_type_0_0_10001)),
  ((MR_Box) (backend_libs__foreign____Compare____exported_type_0_0_10001)),
  (MR_String) "backend_libs.foreign",
  (MR_String) "exported_type",
  {
    backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0
  },
  {
    backend_libs__foreign__backend_libs__foreign__du_ptag_ordered_exported_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0
};

#line 449 "backend_libs.foreign.c"
static MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0_10001(
#line 452 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_1,
#line 454 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2)
#line 456 "backend_libs.foreign.c"
{
#line 458 "backend_libs.foreign.c"
  {
#line 460 "backend_libs.foreign.c"
    MR_bool backend_libs__foreign__succeeded;

#line 463 "backend_libs.foreign.c"
    {
#line 465 "backend_libs.foreign.c"
      backend_libs__foreign__succeeded = backend_libs__foreign____Unify____exported_type_0_0(((MR_Word) backend_libs__foreign__wrapper_arg_1), ((MR_Word) backend_libs__foreign__wrapper_arg_2));
    }
#line 468 "backend_libs.foreign.c"
    return backend_libs__foreign__succeeded;
#line 470 "backend_libs.foreign.c"
  }
#line 472 "backend_libs.foreign.c"
}

#line 475 "backend_libs.foreign.c"
static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
#line 478 "backend_libs.foreign.c"
  MR_Box * backend_libs__foreign__wrapper_arg_1,
#line 480 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2,
#line 482 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_3)
#line 484 "backend_libs.foreign.c"
{
#line 486 "backend_libs.foreign.c"
  {
#line 488 "backend_libs.foreign.c"
    MR_Word backend_libs__foreign__conv0_HeadVar__1_1;

#line 491 "backend_libs.foreign.c"
    {
#line 493 "backend_libs.foreign.c"
      backend_libs__foreign____Compare____exported_type_0_0(&backend_libs__foreign__conv0_HeadVar__1_1, ((MR_Word) backend_libs__foreign__wrapper_arg_2), ((MR_Word) backend_libs__foreign__wrapper_arg_3));
    }
#line 496 "backend_libs.foreign.c"
    *backend_libs__foreign__wrapper_arg_1 = ((MR_Box) (backend_libs__foreign__conv0_HeadVar__1_1));
#line 498 "backend_libs.foreign.c"
  }
#line 500 "backend_libs.foreign.c"
}

#line 135 "foreign.m"
void MR_CALL 
backend_libs__foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_p_0(
#line 135 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1,
#line 135 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6,
#line 135 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7,
#line 135 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__8_8,
#line 135 "foreign.m"
  MR_Word * backend_libs__foreign__HeadVar__9_9,
#line 135 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_10,
#line 135 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_11)
#line 135 "foreign.m"
{
#line 196 "foreign.m"
  {
#line 196 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 196 "foreign.m"
    if ((backend_libs__foreign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 196 "foreign.m"
      {
#line 197 "foreign.m"
        {
#line 197 "foreign.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.extrude_pragma_implementation\'/11", (MR_String) "no suitable target languages available");
#line 197 "foreign.m"
          return;
        }
#line 196 "foreign.m"
      }
#line 196 "foreign.m"
    else
#line 200 "foreign.m"
      {
#line 200 "foreign.m"
        MR_Word backend_libs__foreign__TargetLang_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 200 "foreign.m"
        MR_Word backend_libs__foreign__ForeignLanguage_37;
#line 199 "foreign.m"
        MR_Word backend_libs__foreign__TargetLangs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));

#line 203 "foreign.m"
        {
#line 203 "foreign.m"
          backend_libs__foreign__ForeignLanguage_37 = parse_tree__prog_data__get_foreign_language_1_f_0(backend_libs__foreign__HeadVar__8_8);
        }
#line 207 "foreign.m"
        {
#line 207 "foreign.m"
          backend_libs__foreign__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (backend_libs__foreign__ForeignLanguage_37)), backend_libs__foreign__HeadVar__1_1);
        }
#line 209 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 208 "foreign.m"
          {
#line 208 "foreign.m"
            *backend_libs__foreign__STATE_VARIABLE_Impl_11 = backend_libs__foreign__STATE_VARIABLE_Impl_0_10;
#line 208 "foreign.m"
            *backend_libs__foreign__HeadVar__9_9 = backend_libs__foreign__HeadVar__8_8;
#line 208 "foreign.m"
            *backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7 = backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6;
#line 208 "foreign.m"
          }
#line 209 "foreign.m"
        else
#line 210 "foreign.m"
          {
#line 210 "foreign.m"
            {
#line 210 "foreign.m"
              parse_tree__prog_data__set_foreign_language_3_p_0(backend_libs__foreign__TargetLang_28, backend_libs__foreign__HeadVar__8_8, backend_libs__foreign__HeadVar__9_9);
            }
#line 211 "foreign.m"
            {
#line 211 "foreign.m"
              backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(backend_libs__foreign__TargetLang_28, backend_libs__foreign__ForeignLanguage_37, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7, backend_libs__foreign__STATE_VARIABLE_Impl_0_10, backend_libs__foreign__STATE_VARIABLE_Impl_11);
#line 211 "foreign.m"
              return;
            }
#line 210 "foreign.m"
          }
#line 200 "foreign.m"
      }
#line 196 "foreign.m"
  }
#line 135 "foreign.m"
}

#line 191 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_exports__191__1_2_p_0(
#line 191 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 191 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_15)
#line 191 "foreign.m"
{
#line 191 "foreign.m"
  {
#line 191 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 191 "foreign.m"
    MR_Word backend_libs__foreign__Lang_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 0)));
#line 191 "foreign.m"
    MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 1)));
#line 191 "foreign.m"
    MR_Integer backend_libs__foreign__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 2)));
#line 191 "foreign.m"
    MR_String backend_libs__foreign__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 3)));
#line 191 "foreign.m"
    MR_Word backend_libs__foreign__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 4)));

#line 192 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_20);
#line 191 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 191 "foreign.m"
  }
#line 191 "foreign.m"
}

#line 186 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_bodys__186__1_2_p_0(
#line 186 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 186 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_13)
#line 186 "foreign.m"
{
#line 186 "foreign.m"
  {
#line 186 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 186 "foreign.m"
    MR_Word backend_libs__foreign__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 0)));
#line 186 "foreign.m"
    MR_Word backend_libs__foreign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 1)));
#line 186 "foreign.m"
    MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 2)));

#line 187 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_16);
#line 186 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 186 "foreign.m"
  }
#line 186 "foreign.m"
}

#line 181 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_imports__181__1_2_p_0(
#line 181 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 181 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_13)
#line 181 "foreign.m"
{
#line 181 "foreign.m"
  {
#line 181 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 181 "foreign.m"
    MR_Word backend_libs__foreign__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 0)));
#line 181 "foreign.m"
    MR_Word backend_libs__foreign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 1)));
#line 181 "foreign.m"
    MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 2)));

#line 182 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_16);
#line 181 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 181 "foreign.m"
  }
#line 181 "foreign.m"
}

#line 176 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_decls__176__1_2_p_0(
#line 176 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 176 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_14)
#line 176 "foreign.m"
{
#line 176 "foreign.m"
  {
#line 176 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 176 "foreign.m"
    MR_Word backend_libs__foreign__Lang_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 0)));
#line 176 "foreign.m"
    MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 1)));
#line 176 "foreign.m"
    MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 2)));
#line 176 "foreign.m"
    MR_Word backend_libs__foreign__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 3)));

#line 177 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_18);
#line 176 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 176 "foreign.m"
  }
#line 176 "foreign.m"
}

#line 395 "foreign.m"
void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0(
#line 395 "foreign.m"
  MR_Word * backend_libs__foreign__HeadVar__1_1,
#line 395 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_2,
#line 395 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__3_3)
#line 395 "foreign.m"
{
#line 395 "foreign.m"
  {
#line 395 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 395 "foreign.m"
    MR_Integer backend_libs__foreign__CastX_17 = (MR_Integer) backend_libs__foreign__HeadVar__2_2;
#line 395 "foreign.m"
    MR_Integer backend_libs__foreign__CastY_18 = (MR_Integer) backend_libs__foreign__HeadVar__3_3;

#line 395 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__CastX_17 == backend_libs__foreign__CastY_18);
#line 395 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 744 "backend_libs.foreign.c"
      *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 395 "foreign.m"
    else
#line 395 "foreign.m"
      if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 395 "foreign.m"
        {
#line 395 "foreign.m"
          MR_Word backend_libs__foreign__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "foreign.m"
          MR_Word backend_libs__foreign__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));

#line 395 "foreign.m"
          if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 395 "foreign.m"
            {
#line 395 "foreign.m"
              MR_Word backend_libs__foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 395 "foreign.m"
              MR_Word backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 395 "foreign.m"
              MR_Word backend_libs__foreign__V_8_8;

#line 395 "foreign.m"
              {
#line 395 "foreign.m"
                mdbcomp__prim_data____Compare____sym_name_0_0(&backend_libs__foreign__V_8_8, backend_libs__foreign__V_23_23, backend_libs__foreign__V_6_6);
              }
#line 773 "backend_libs.foreign.c"
              backend_libs__foreign__succeeded = (backend_libs__foreign__V_8_8 == (MR_Integer) 0);
#line 395 "foreign.m"
              backend_libs__foreign__succeeded = !(backend_libs__foreign__succeeded);
#line 395 "foreign.m"
              if (backend_libs__foreign__succeeded)
#line 395 "foreign.m"
                *backend_libs__foreign__HeadVar__1_1 = backend_libs__foreign__V_8_8;
#line 395 "foreign.m"
              else
#line 395 "foreign.m"
                {
#line 395 "foreign.m"
                  {
#line 395 "foreign.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__foreign_scalar_common_1[0], backend_libs__foreign__HeadVar__1_1, ((MR_Box) (backend_libs__foreign__V_22_22)), ((MR_Box) (backend_libs__foreign__V_7_7)));
#line 395 "foreign.m"
                    return;
                  }
#line 395 "foreign.m"
                }
#line 395 "foreign.m"
            }
#line 395 "foreign.m"
          else
#line 798 "backend_libs.foreign.c"
            *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 1;
#line 395 "foreign.m"
        }
#line 395 "foreign.m"
      else
#line 395 "foreign.m"
        {
#line 395 "foreign.m"
          MR_Word backend_libs__foreign__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));

#line 395 "foreign.m"
          if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 811 "backend_libs.foreign.c"
            *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 2;
#line 395 "foreign.m"
          else
#line 395 "foreign.m"
            {
#line 395 "foreign.m"
              MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 0)));

#line 395 "foreign.m"
              {
#line 395 "foreign.m"
                parse_tree__prog_data____Compare____mer_type_0_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__V_24_24, backend_libs__foreign__V_16_16);
#line 395 "foreign.m"
                return;
              }
#line 395 "foreign.m"
            }
#line 395 "foreign.m"
        }
#line 395 "foreign.m"
  }
#line 395 "foreign.m"
}

#line 395 "foreign.m"
MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0(
#line 395 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1,
#line 395 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_2)
#line 395 "foreign.m"
{
#line 395 "foreign.m"
  {
#line 395 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 395 "foreign.m"
    MR_Integer backend_libs__foreign__CastX_9 = (MR_Integer) backend_libs__foreign__HeadVar__1_1;
#line 395 "foreign.m"
    MR_Integer backend_libs__foreign__CastY_10 = (MR_Integer) backend_libs__foreign__HeadVar__2_2;

#line 395 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__CastX_9 == backend_libs__foreign__CastY_10);
#line 395 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 395 "foreign.m"
      backend_libs__foreign__succeeded = MR_TRUE;
#line 395 "foreign.m"
    else
#line 395 "foreign.m"
      if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 395 "foreign.m"
        {
#line 395 "foreign.m"
          MR_Word backend_libs__foreign__TypeInfo_12_12;
#line 395 "foreign.m"
          MR_Word backend_libs__foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 395 "foreign.m"
          MR_Word backend_libs__foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 395 "foreign.m"
          MR_Word backend_libs__foreign__V_5_5;
#line 395 "foreign.m"
          MR_Word backend_libs__foreign__V_6_6;

#line 395 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 395 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 395 "foreign.m"
            {
#line 395 "foreign.m"
              backend_libs__foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 395 "foreign.m"
              backend_libs__foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 887 "backend_libs.foreign.c"
              {
#line 889 "backend_libs.foreign.c"
                backend_libs__foreign__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__foreign__V_3_3, backend_libs__foreign__V_5_5);
              }
#line 395 "foreign.m"
              if (backend_libs__foreign__succeeded)
#line 395 "foreign.m"
                {
#line 896 "backend_libs.foreign.c"
                  backend_libs__foreign__TypeInfo_12_12 = (MR_Word) &backend_libs__foreign_scalar_common_1[0];
#line 898 "backend_libs.foreign.c"
                  {
#line 900 "backend_libs.foreign.c"
                    return backend_libs__foreign__succeeded = mercury__builtin__unify_2_p_0(backend_libs__foreign__TypeInfo_12_12, ((MR_Box) (backend_libs__foreign__V_4_4)), ((MR_Box) (backend_libs__foreign__V_6_6)));
                  }
#line 395 "foreign.m"
                }
#line 395 "foreign.m"
            }
#line 395 "foreign.m"
        }
#line 395 "foreign.m"
      else
#line 395 "foreign.m"
        {
#line 395 "foreign.m"
          MR_Word backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 395 "foreign.m"
          MR_Word backend_libs__foreign__V_8_8;

#line 395 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 395 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 395 "foreign.m"
            {
#line 395 "foreign.m"
              backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 926 "backend_libs.foreign.c"
              {
#line 928 "backend_libs.foreign.c"
                return backend_libs__foreign__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(backend_libs__foreign__V_7_7, backend_libs__foreign__V_8_8);
              }
#line 395 "foreign.m"
            }
#line 395 "foreign.m"
        }
#line 395 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 395 "foreign.m"
  }
#line 395 "foreign.m"
}

#line 215 "foreign.m"
static void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(
#line 215 "foreign.m"
  MR_Word backend_libs__foreign__TargetLanguage_7,
#line 215 "foreign.m"
  MR_Word backend_libs__foreign__ForeignLanguage_8,
#line 215 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11,
#line 215 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12,
#line 215 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_13,
#line 215 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_14)
#line 215 "foreign.m"
{
#line 240 "foreign.m"
  {
#line 240 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 253 "foreign.m"
    if ((backend_libs__foreign__TargetLanguage_7 == (MR_Integer) 0))
#line 245 "foreign.m"
      if ((backend_libs__foreign__ForeignLanguage_8 == (MR_Integer) 0))
#line 244 "foreign.m"
        {
#line 244 "foreign.m"
        }
#line 245 "foreign.m"
      else
#line 306 "foreign.m"
        {
#line 306 "foreign.m"
          MR_String backend_libs__foreign__V_19_19;
#line 306 "foreign.m"
          MR_String backend_libs__foreign__V_21_21;
#line 306 "foreign.m"
          MR_String backend_libs__foreign__V_22_22;
#line 306 "foreign.m"
          MR_String backend_libs__foreign__V_23_23;
#line 306 "foreign.m"
          MR_String backend_libs__foreign__V_25_25;

#line 308 "foreign.m"
          {
#line 308 "foreign.m"
            backend_libs__foreign__V_22_22 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
          }
#line 309 "foreign.m"
          {
#line 309 "foreign.m"
            backend_libs__foreign__V_25_25 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
          }
#line 309 "foreign.m"
          {
#line 309 "foreign.m"
            backend_libs__foreign__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_25_25);
          }
#line 308 "foreign.m"
          {
#line 308 "foreign.m"
            backend_libs__foreign__V_21_21 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_22_22, backend_libs__foreign__V_23_23);
          }
#line 308 "foreign.m"
          {
#line 308 "foreign.m"
            backend_libs__foreign__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_21_21);
          }
#line 307 "foreign.m"
          {
#line 307 "foreign.m"
            mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_19_19);
#line 307 "foreign.m"
            return;
          }
#line 306 "foreign.m"
        }
#line 253 "foreign.m"
    else
#line 253 "foreign.m"
      if ((backend_libs__foreign__TargetLanguage_7 == (MR_Integer) 1))
#line 257 "foreign.m"
        if ((backend_libs__foreign__ForeignLanguage_8 == (MR_Integer) 1))
#line 256 "foreign.m"
          {
#line 256 "foreign.m"
          }
#line 257 "foreign.m"
        else
#line 306 "foreign.m"
          {
#line 306 "foreign.m"
            MR_String backend_libs__foreign__V_30_30;
#line 306 "foreign.m"
            MR_String backend_libs__foreign__V_32_32;
#line 306 "foreign.m"
            MR_String backend_libs__foreign__V_33_33;
#line 306 "foreign.m"
            MR_String backend_libs__foreign__V_34_34;
#line 306 "foreign.m"
            MR_String backend_libs__foreign__V_36_36;

#line 308 "foreign.m"
            {
#line 308 "foreign.m"
              backend_libs__foreign__V_33_33 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
            }
#line 309 "foreign.m"
            {
#line 309 "foreign.m"
              backend_libs__foreign__V_36_36 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
            }
#line 309 "foreign.m"
            {
#line 309 "foreign.m"
              backend_libs__foreign__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_36_36);
            }
#line 308 "foreign.m"
            {
#line 308 "foreign.m"
              backend_libs__foreign__V_32_32 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_33_33, backend_libs__foreign__V_34_34);
            }
#line 308 "foreign.m"
            {
#line 308 "foreign.m"
              backend_libs__foreign__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_32_32);
            }
#line 307 "foreign.m"
            {
#line 307 "foreign.m"
              mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_30_30);
#line 307 "foreign.m"
              return;
            }
#line 306 "foreign.m"
          }
#line 253 "foreign.m"
      else
#line 253 "foreign.m"
        if ((backend_libs__foreign__TargetLanguage_7 == (MR_Integer) 4))
#line 293 "foreign.m"
          if ((backend_libs__foreign__ForeignLanguage_8 == (MR_Integer) 4))
#line 292 "foreign.m"
            {
#line 292 "foreign.m"
            }
#line 293 "foreign.m"
          else
#line 306 "foreign.m"
            {
#line 306 "foreign.m"
              MR_String backend_libs__foreign__V_41_41;
#line 306 "foreign.m"
              MR_String backend_libs__foreign__V_43_43;
#line 306 "foreign.m"
              MR_String backend_libs__foreign__V_44_44;
#line 306 "foreign.m"
              MR_String backend_libs__foreign__V_45_45;
#line 306 "foreign.m"
              MR_String backend_libs__foreign__V_47_47;

#line 308 "foreign.m"
              {
#line 308 "foreign.m"
                backend_libs__foreign__V_44_44 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
#line 309 "foreign.m"
              {
#line 309 "foreign.m"
                backend_libs__foreign__V_47_47 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
#line 309 "foreign.m"
              {
#line 309 "foreign.m"
                backend_libs__foreign__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_47_47);
              }
#line 308 "foreign.m"
              {
#line 308 "foreign.m"
                backend_libs__foreign__V_43_43 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_44_44, backend_libs__foreign__V_45_45);
              }
#line 308 "foreign.m"
              {
#line 308 "foreign.m"
                backend_libs__foreign__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_43_43);
              }
#line 307 "foreign.m"
              {
#line 307 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_41_41);
#line 307 "foreign.m"
                return;
              }
#line 306 "foreign.m"
            }
#line 253 "foreign.m"
        else
#line 253 "foreign.m"
          if ((backend_libs__foreign__TargetLanguage_7 == (MR_Integer) 3))
#line 269 "foreign.m"
            if ((backend_libs__foreign__ForeignLanguage_8 == (MR_Integer) 3))
#line 268 "foreign.m"
              {
#line 268 "foreign.m"
              }
#line 269 "foreign.m"
            else
#line 306 "foreign.m"
              {
#line 306 "foreign.m"
                MR_String backend_libs__foreign__V_52_52;
#line 306 "foreign.m"
                MR_String backend_libs__foreign__V_54_54;
#line 306 "foreign.m"
                MR_String backend_libs__foreign__V_55_55;
#line 306 "foreign.m"
                MR_String backend_libs__foreign__V_56_56;
#line 306 "foreign.m"
                MR_String backend_libs__foreign__V_58_58;

#line 308 "foreign.m"
                {
#line 308 "foreign.m"
                  backend_libs__foreign__V_55_55 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
                }
#line 309 "foreign.m"
                {
#line 309 "foreign.m"
                  backend_libs__foreign__V_58_58 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
                }
#line 309 "foreign.m"
                {
#line 309 "foreign.m"
                  backend_libs__foreign__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_58_58);
                }
#line 308 "foreign.m"
                {
#line 308 "foreign.m"
                  backend_libs__foreign__V_54_54 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_55_55, backend_libs__foreign__V_56_56);
                }
#line 308 "foreign.m"
                {
#line 308 "foreign.m"
                  backend_libs__foreign__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_54_54);
                }
#line 307 "foreign.m"
                {
#line 307 "foreign.m"
                  mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_52_52);
#line 307 "foreign.m"
                  return;
                }
#line 306 "foreign.m"
              }
#line 253 "foreign.m"
          else
#line 281 "foreign.m"
            if ((backend_libs__foreign__ForeignLanguage_8 == (MR_Integer) 2))
#line 280 "foreign.m"
              {
#line 280 "foreign.m"
              }
#line 281 "foreign.m"
            else
#line 306 "foreign.m"
              {
#line 306 "foreign.m"
                MR_String backend_libs__foreign__V_63_63;
#line 306 "foreign.m"
                MR_String backend_libs__foreign__V_65_65;
#line 306 "foreign.m"
                MR_String backend_libs__foreign__V_66_66;
#line 306 "foreign.m"
                MR_String backend_libs__foreign__V_67_67;
#line 306 "foreign.m"
                MR_String backend_libs__foreign__V_69_69;

#line 308 "foreign.m"
                {
#line 308 "foreign.m"
                  backend_libs__foreign__V_66_66 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
                }
#line 309 "foreign.m"
                {
#line 309 "foreign.m"
                  backend_libs__foreign__V_69_69 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
                }
#line 309 "foreign.m"
                {
#line 309 "foreign.m"
                  backend_libs__foreign__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_69_69);
                }
#line 308 "foreign.m"
                {
#line 308 "foreign.m"
                  backend_libs__foreign__V_65_65 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_66_66, backend_libs__foreign__V_67_67);
                }
#line 308 "foreign.m"
                {
#line 308 "foreign.m"
                  backend_libs__foreign__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_65_65);
                }
#line 307 "foreign.m"
                {
#line 307 "foreign.m"
                  mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_63_63);
#line 307 "foreign.m"
                  return;
                }
#line 306 "foreign.m"
              }
#line 299 "foreign.m"
    *backend_libs__foreign__STATE_VARIABLE_Impl_14 = backend_libs__foreign__STATE_VARIABLE_Impl_0_13;
#line 299 "foreign.m"
    *backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12 = backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11;
#line 240 "foreign.m"
  }
#line 215 "foreign.m"
}

#line 144 "foreign.m"
MR_String MR_CALL 
backend_libs__foreign__decl_guard_1_f_0(
#line 144 "foreign.m"
  MR_Word backend_libs__foreign__ModuleName_3)
#line 144 "foreign.m"
{
#line 641 "foreign.m"
  {
#line 641 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 641 "foreign.m"
    MR_String backend_libs__foreign__HeadVar__2_2;
#line 641 "foreign.m"
    MR_String backend_libs__foreign__UppercaseModuleName_4;
#line 641 "foreign.m"
    MR_String backend_libs__foreign__MangledModuleName_5;

#line 642 "foreign.m"
    {
#line 642 "foreign.m"
      backend_libs__foreign__MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__foreign__ModuleName_3);
    }
#line 643 "foreign.m"
    {
#line 643 "foreign.m"
      mercury__string__to_upper_2_p_0(backend_libs__foreign__MangledModuleName_5, &backend_libs__foreign__UppercaseModuleName_4);
    }
#line 641 "foreign.m"
    {
#line 641 "foreign.m"
      return backend_libs__foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__UppercaseModuleName_4, (MR_String) "_DECL_GUARD");
    }
#line 641 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 641 "foreign.m"
  }
#line 144 "foreign.m"
}

#line 135 "foreign.m"
void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_11_p_0(
#line 135 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1,
#line 135 "foreign.m"
  MR_Word backend_libs__foreign___PragmaVars_2,
#line 135 "foreign.m"
  MR_Word backend_libs__foreign___PredName_3,
#line 135 "foreign.m"
  MR_Word backend_libs__foreign___PredOrFunc_4,
#line 135 "foreign.m"
  MR_Word backend_libs__foreign___Context_5,
#line 135 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6,
#line 135 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7,
#line 135 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__8_8,
#line 135 "foreign.m"
  MR_Word * backend_libs__foreign__HeadVar__9_9,
#line 135 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_10,
#line 135 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_11)
#line 135 "foreign.m"
{
#line 196 "foreign.m"
  {
#line 196 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 196 "foreign.m"
    {
#line 196 "foreign.m"
      backend_libs__foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_p_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7, backend_libs__foreign__HeadVar__8_8, backend_libs__foreign__HeadVar__9_9, backend_libs__foreign__STATE_VARIABLE_Impl_0_10, backend_libs__foreign__STATE_VARIABLE_Impl_11);
#line 196 "foreign.m"
      return;
    }
#line 196 "foreign.m"
  }
#line 135 "foreign.m"
}

#line 191 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_exports_4_p_0_1(
#line 191 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 191 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 191 "foreign.m"
{
#line 191 "foreign.m"
  {
#line 191 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 191 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 191 "foreign.m"
    {
#line 191 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_exports__191__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 191 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 191 "foreign.m"
  }
#line 191 "foreign.m"
}

#line 118 "foreign.m"
void MR_CALL 
backend_libs__foreign__filter_exports_4_p_0(
#line 118 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 118 "foreign.m"
  MR_Word backend_libs__foreign__Exports0_6,
#line 118 "foreign.m"
  MR_Word * backend_libs__foreign__LangExports_7,
#line 118 "foreign.m"
  MR_Word * backend_libs__foreign__NotLangExports_8)
#line 118 "foreign.m"
{
#line 190 "foreign.m"
  {
#line 190 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 190 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 191 "foreign.m"
    {
#line 191 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 191 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[3]));
#line 191 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_exports_4_p_0_1));
#line 191 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 191 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 191 "foreign.m"
    }
#line 193 "foreign.m"
    {
#line 193 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Exports0_6, backend_libs__foreign__LangExports_7, backend_libs__foreign__NotLangExports_8);
#line 193 "foreign.m"
      return;
    }
#line 190 "foreign.m"
  }
#line 118 "foreign.m"
}

#line 186 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0_1(
#line 186 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 186 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 186 "foreign.m"
{
#line 186 "foreign.m"
  {
#line 186 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 186 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 186 "foreign.m"
    {
#line 186 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_bodys__186__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 186 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 186 "foreign.m"
  }
#line 186 "foreign.m"
}

#line 111 "foreign.m"
void MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0(
#line 111 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 111 "foreign.m"
  MR_Word backend_libs__foreign__Bodys0_6,
#line 111 "foreign.m"
  MR_Word * backend_libs__foreign__LangBodys_7,
#line 111 "foreign.m"
  MR_Word * backend_libs__foreign__NotLangBodys_8)
#line 111 "foreign.m"
{
#line 185 "foreign.m"
  {
#line 185 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 185 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 186 "foreign.m"
    {
#line 186 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 186 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[2]));
#line 186 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_bodys_4_p_0_1));
#line 186 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 186 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 186 "foreign.m"
    }
#line 188 "foreign.m"
    {
#line 188 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Bodys0_6, backend_libs__foreign__LangBodys_7, backend_libs__foreign__NotLangBodys_8);
#line 188 "foreign.m"
      return;
    }
#line 185 "foreign.m"
  }
#line 111 "foreign.m"
}

#line 181 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_imports_4_p_0_1(
#line 181 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 181 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 181 "foreign.m"
{
#line 181 "foreign.m"
  {
#line 181 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 181 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 181 "foreign.m"
    {
#line 181 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_imports__181__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 181 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 181 "foreign.m"
  }
#line 181 "foreign.m"
}

#line 102 "foreign.m"
void MR_CALL 
backend_libs__foreign__filter_imports_4_p_0(
#line 102 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 102 "foreign.m"
  MR_Word backend_libs__foreign__Imports0_6,
#line 102 "foreign.m"
  MR_Word * backend_libs__foreign__LangImports_7,
#line 102 "foreign.m"
  MR_Word * backend_libs__foreign__NotLangImports_8)
#line 102 "foreign.m"
{
#line 180 "foreign.m"
  {
#line 180 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 180 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 181 "foreign.m"
    {
#line 181 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 181 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[1]));
#line 181 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_imports_4_p_0_1));
#line 181 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 181 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 181 "foreign.m"
    }
#line 183 "foreign.m"
    {
#line 183 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Imports0_6, backend_libs__foreign__LangImports_7, backend_libs__foreign__NotLangImports_8);
#line 183 "foreign.m"
      return;
    }
#line 180 "foreign.m"
  }
#line 102 "foreign.m"
}

#line 176 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_decls_4_p_0_1(
#line 176 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 176 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 176 "foreign.m"
{
#line 176 "foreign.m"
  {
#line 176 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 176 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 176 "foreign.m"
    {
#line 176 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_decls__176__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 176 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 176 "foreign.m"
  }
#line 176 "foreign.m"
}

#line 95 "foreign.m"
void MR_CALL 
backend_libs__foreign__filter_decls_4_p_0(
#line 95 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 95 "foreign.m"
  MR_Word backend_libs__foreign__Decls0_6,
#line 95 "foreign.m"
  MR_Word * backend_libs__foreign__LangDecls_7,
#line 95 "foreign.m"
  MR_Word * backend_libs__foreign__NotLangDecls_8)
#line 95 "foreign.m"
{
#line 175 "foreign.m"
  {
#line 175 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 175 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 176 "foreign.m"
    {
#line 176 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 176 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[0]));
#line 176 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_decls_4_p_0_1));
#line 176 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 176 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 176 "foreign.m"
    }
#line 178 "foreign.m"
    {
#line 178 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Decls0_6, backend_libs__foreign__LangDecls_7, backend_libs__foreign__NotLangDecls_8);
#line 178 "foreign.m"
      return;
    }
#line 175 "foreign.m"
  }
#line 95 "foreign.m"
}

#line 88 "foreign.m"
MR_String MR_CALL 
backend_libs__foreign__mercury_exported_type_to_string_3_f_0(
#line 88 "foreign.m"
  MR_Word backend_libs__foreign__ModuleInfo_5,
#line 88 "foreign.m"
  MR_Word backend_libs__foreign__Lang_6,
#line 88 "foreign.m"
  MR_Word backend_libs__foreign__Type_7)
#line 88 "foreign.m"
{
#line 504 "foreign.m"
  {
#line 504 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 504 "foreign.m"
    MR_String backend_libs__foreign__HeadVar__4_4;
#line 504 "foreign.m"
    MR_Word backend_libs__foreign__V_8_8;

#line 505 "foreign.m"
    {
#line 505 "foreign.m"
      backend_libs__foreign__V_8_8 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__foreign__ModuleInfo_5, backend_libs__foreign__Type_7);
    }
#line 505 "foreign.m"
    {
#line 505 "foreign.m"
      return backend_libs__foreign__HeadVar__4_4 = backend_libs__foreign__exported_type_to_string_2_f_0(backend_libs__foreign__Lang_6, backend_libs__foreign__V_8_8);
    }
#line 504 "foreign.m"
    return backend_libs__foreign__HeadVar__4_4;
#line 504 "foreign.m"
  }
#line 88 "foreign.m"
}

#line 87 "foreign.m"
MR_String MR_CALL 
backend_libs__foreign__exported_type_to_string_2_f_0(
#line 87 "foreign.m"
  MR_Word backend_libs__foreign__Lang_4,
#line 87 "foreign.m"
  MR_Word backend_libs__foreign__ExportedType_5)
#line 87 "foreign.m"
{
#line 509 "foreign.m"
  {
#line 509 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 509 "foreign.m"
    MR_String backend_libs__foreign__Result_6;

#line 509 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__ExportedType_5)) == (MR_mktag((MR_Integer) 0))))
#line 509 "foreign.m"
      {
#line 509 "foreign.m"
        MR_Word backend_libs__foreign__ForeignType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportedType_5, (MR_Integer) 0)));
#line 509 "foreign.m"
        MR_Word backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportedType_5, (MR_Integer) 1)));

#line 519 "foreign.m"
        if ((backend_libs__foreign__Lang_4 == (MR_Integer) 0))
#line 515 "foreign.m"
          if (((MR_tag((MR_Word) backend_libs__foreign__ForeignType_7)) == (MR_mktag((MR_Integer) 1))))
#line 516 "foreign.m"
            {
#line 517 "foreign.m"
              {
#line 517 "foreign.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "qualified C type");
              }
#line 516 "foreign.m"
            }
#line 515 "foreign.m"
          else
#line 513 "foreign.m"
            backend_libs__foreign__Result_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignType_7, (MR_Integer) 0)));
#line 519 "foreign.m"
        else
#line 525 "foreign.m"
          {
#line 525 "foreign.m"
            return backend_libs__foreign__Result_6 = mdbcomp__prim_data__sym_name_to_string_1_f_0(backend_libs__foreign__ForeignType_7);
          }
#line 509 "foreign.m"
      }
#line 509 "foreign.m"
    else
#line 528 "foreign.m"
      {
#line 528 "foreign.m"
        MR_Word backend_libs__foreign__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportedType_5, (MR_Integer) 0)));

#line 572 "foreign.m"
        if ((backend_libs__foreign__Lang_4 == (MR_Integer) 0))
#line 554 "foreign.m"
          if (((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 2))))
#line 540 "foreign.m"
            {
#line 540 "foreign.m"
              MR_Word backend_libs__foreign__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 544 "foreign.m"
              if ((backend_libs__foreign__BuiltinType_13 == (MR_Integer) 3))
#line 552 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "MR_Char";
#line 544 "foreign.m"
              else
#line 544 "foreign.m"
                if ((backend_libs__foreign__BuiltinType_13 == (MR_Integer) 1))
#line 546 "foreign.m"
                  backend_libs__foreign__Result_6 = (MR_String) "MR_Float";
#line 544 "foreign.m"
                else
#line 544 "foreign.m"
                  if ((backend_libs__foreign__BuiltinType_13 == (MR_Integer) 0))
#line 543 "foreign.m"
                    backend_libs__foreign__Result_6 = (MR_String) "MR_Integer";
#line 544 "foreign.m"
                  else
#line 549 "foreign.m"
                    backend_libs__foreign__Result_6 = (MR_String) "MR_String";
#line 540 "foreign.m"
            }
#line 554 "foreign.m"
          else
#line 554 "foreign.m"
            if (((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 0))))
#line 567 "foreign.m"
              backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
#line 554 "foreign.m"
            else
#line 554 "foreign.m"
              if (((((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__foreign__Type_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 569 "foreign.m"
                {
#line 570 "foreign.m"
                  {
#line 570 "foreign.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "kinded type");
                  }
#line 569 "foreign.m"
                }
#line 554 "foreign.m"
              else
#line 554 "foreign.m"
                if (((((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__foreign__Type_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 556 "foreign.m"
                  backend_libs__foreign__Result_6 = (MR_String) "MR_Tuple";
#line 554 "foreign.m"
                else
#line 564 "foreign.m"
                  backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
#line 572 "foreign.m"
        else
#line 572 "foreign.m"
          if ((backend_libs__foreign__Lang_4 == (MR_Integer) 1))
#line 589 "foreign.m"
            if (((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 2))))
#line 575 "foreign.m"
              {
#line 575 "foreign.m"
                MR_Word backend_libs__foreign__BuiltinType_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 579 "foreign.m"
                if ((backend_libs__foreign__BuiltinType_74 == (MR_Integer) 3))
#line 587 "foreign.m"
                  backend_libs__foreign__Result_6 = (MR_String) "char";
#line 579 "foreign.m"
                else
#line 579 "foreign.m"
                  if ((backend_libs__foreign__BuiltinType_74 == (MR_Integer) 1))
#line 581 "foreign.m"
                    backend_libs__foreign__Result_6 = (MR_String) "double";
#line 579 "foreign.m"
                  else
#line 579 "foreign.m"
                    if ((backend_libs__foreign__BuiltinType_74 == (MR_Integer) 0))
#line 578 "foreign.m"
                      backend_libs__foreign__Result_6 = (MR_String) "int";
#line 579 "foreign.m"
                    else
#line 584 "foreign.m"
                      backend_libs__foreign__Result_6 = (MR_String) "string";
#line 575 "foreign.m"
              }
#line 589 "foreign.m"
            else
#line 599 "foreign.m"
              backend_libs__foreign__Result_6 = (MR_String) "object";
#line 572 "foreign.m"
          else
#line 572 "foreign.m"
            if ((backend_libs__foreign__Lang_4 == (MR_Integer) 4))
#line 634 "foreign.m"
              {
#line 635 "foreign.m"
                {
#line 635 "foreign.m"
                  mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "erlang");
                }
#line 634 "foreign.m"
              }
#line 572 "foreign.m"
            else
#line 572 "foreign.m"
              if ((backend_libs__foreign__Lang_4 == (MR_Integer) 3))
#line 631 "foreign.m"
                {
#line 632 "foreign.m"
                  {
#line 632 "foreign.m"
                    mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "il");
                  }
#line 631 "foreign.m"
                }
#line 572 "foreign.m"
              else
#line 618 "foreign.m"
                if (((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 2))))
#line 604 "foreign.m"
                  {
#line 604 "foreign.m"
                    MR_Word backend_libs__foreign__BuiltinType_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 608 "foreign.m"
                    if ((backend_libs__foreign__BuiltinType_77 == (MR_Integer) 3))
#line 616 "foreign.m"
                      backend_libs__foreign__Result_6 = (MR_String) "char";
#line 608 "foreign.m"
                    else
#line 608 "foreign.m"
                      if ((backend_libs__foreign__BuiltinType_77 == (MR_Integer) 1))
#line 610 "foreign.m"
                        backend_libs__foreign__Result_6 = (MR_String) "double";
#line 608 "foreign.m"
                      else
#line 608 "foreign.m"
                        if ((backend_libs__foreign__BuiltinType_77 == (MR_Integer) 0))
#line 607 "foreign.m"
                          backend_libs__foreign__Result_6 = (MR_String) "int";
#line 608 "foreign.m"
                        else
#line 613 "foreign.m"
                          backend_libs__foreign__Result_6 = (MR_String) "java.lang.String";
#line 604 "foreign.m"
                  }
#line 618 "foreign.m"
                else
#line 628 "foreign.m"
                  backend_libs__foreign__Result_6 = (MR_String) "java.lang.Object";
#line 528 "foreign.m"
      }
#line 509 "foreign.m"
    return backend_libs__foreign__Result_6;
#line 509 "foreign.m"
  }
#line 87 "foreign.m"
}

#line 80 "foreign.m"
MR_Word MR_CALL 
backend_libs__foreign__is_foreign_type_1_f_0(
#line 80 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1)
#line 80 "foreign.m"
{
#line 501 "foreign.m"
  {
#line 501 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 501 "foreign.m"
    MR_Word backend_libs__foreign__HeadVar__2_2;

#line 501 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 501 "foreign.m"
      {
#line 501 "foreign.m"
        MR_Word backend_libs__foreign__Assertions_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 501 "foreign.m"
        MR_Word backend_libs__foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));

#line 501 "foreign.m"
        {
#line 501 "foreign.m"
          backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 501 "foreign.m"
          MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, 0) = ((MR_Box) (backend_libs__foreign__Assertions_4));
#line 501 "foreign.m"
        }
#line 501 "foreign.m"
      }
#line 501 "foreign.m"
    else
#line 502 "foreign.m"
      backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 501 "foreign.m"
  }
#line 80 "foreign.m"
}

#line 72 "foreign.m"
void MR_CALL 
backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(
#line 72 "foreign.m"
  MR_Word backend_libs__foreign__ModuleInfo_6,
#line 72 "foreign.m"
  MR_Word backend_libs__foreign__ForeignTypeBody_7,
#line 72 "foreign.m"
  MR_Word * backend_libs__foreign__Name_8,
#line 72 "foreign.m"
  MR_Word * backend_libs__foreign__MaybeUserEqComp_9,
#line 72 "foreign.m"
  MR_Word * backend_libs__foreign__Assertions_10)
#line 72 "foreign.m"
{
#line 436 "foreign.m"
  {
#line 436 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 436 "foreign.m"
    MR_Word backend_libs__foreign__MaybeIL_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 0)));
#line 436 "foreign.m"
    MR_Word backend_libs__foreign__MaybeC_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 1)));
#line 436 "foreign.m"
    MR_Word backend_libs__foreign__MaybeJava_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 2)));
#line 436 "foreign.m"
    MR_Word backend_libs__foreign__MaybeCSharp_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 3)));
#line 436 "foreign.m"
    MR_Word backend_libs__foreign__MaybeErlang_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 4)));
#line 436 "foreign.m"
    MR_Word backend_libs__foreign__Globals_16;
#line 436 "foreign.m"
    MR_Word backend_libs__foreign__Target_17;

#line 443 "foreign.m"
    {
#line 443 "foreign.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__foreign__ModuleInfo_6, &backend_libs__foreign__Globals_16);
    }
#line 444 "foreign.m"
    {
#line 444 "foreign.m"
      libs__globals__get_target_2_p_0(backend_libs__foreign__Globals_16, &backend_libs__foreign__Target_17);
    }
#line 456 "foreign.m"
    if ((backend_libs__foreign__Target_17 == (MR_Integer) 0))
#line 452 "foreign.m"
      if ((backend_libs__foreign__MaybeC_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "foreign.m"
        {
#line 454 "foreign.m"
          {
#line 454 "foreign.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C type");
#line 454 "foreign.m"
            return;
          }
#line 453 "foreign.m"
        }
#line 452 "foreign.m"
      else
#line 448 "foreign.m"
        {
#line 448 "foreign.m"
          MR_Word backend_libs__foreign__Data_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeC_12, (MR_Integer) 0)));
#line 448 "foreign.m"
          MR_String backend_libs__foreign__NameStr_19;
#line 448 "foreign.m"
          MR_Word backend_libs__foreign__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_18, (MR_Integer) 0)));

#line 449 "foreign.m"
          *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_18, (MR_Integer) 1)));
#line 449 "foreign.m"
          *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_18, (MR_Integer) 2)));
#line 449 "foreign.m"
          backend_libs__foreign__NameStr_19 = (MR_String) backend_libs__foreign__V_42_42;
#line 451 "foreign.m"
          {
#line 451 "foreign.m"
            MR_Word base;
#line 451 "foreign.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 451 "foreign.m"
            *backend_libs__foreign__Name_8 = base;
#line 451 "foreign.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_19));
#line 451 "foreign.m"
          }
#line 448 "foreign.m"
        }
#line 456 "foreign.m"
    else
#line 456 "foreign.m"
      if ((backend_libs__foreign__Target_17 == (MR_Integer) 2))
#line 473 "foreign.m"
        if ((backend_libs__foreign__MaybeCSharp_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 474 "foreign.m"
          {
#line 475 "foreign.m"
            {
#line 475 "foreign.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C# type");
#line 475 "foreign.m"
              return;
            }
#line 474 "foreign.m"
          }
#line 473 "foreign.m"
        else
#line 469 "foreign.m"
          {
#line 469 "foreign.m"
            MR_Word backend_libs__foreign__V_34_34;
#line 469 "foreign.m"
            MR_Word backend_libs__foreign__Data_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeCSharp_14, (MR_Integer) 0)));
#line 469 "foreign.m"
            MR_String backend_libs__foreign__NameStr_47;

#line 470 "foreign.m"
            backend_libs__foreign__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_46, (MR_Integer) 0)));
#line 470 "foreign.m"
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_46, (MR_Integer) 1)));
#line 470 "foreign.m"
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_46, (MR_Integer) 2)));
#line 470 "foreign.m"
            backend_libs__foreign__NameStr_47 = (MR_String) backend_libs__foreign__V_34_34;
#line 472 "foreign.m"
            {
#line 472 "foreign.m"
              MR_Word base;
#line 472 "foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 472 "foreign.m"
              *backend_libs__foreign__Name_8 = base;
#line 472 "foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_47));
#line 472 "foreign.m"
            }
#line 469 "foreign.m"
          }
#line 456 "foreign.m"
      else
#line 456 "foreign.m"
        if ((backend_libs__foreign__Target_17 == (MR_Integer) 4))
#line 495 "foreign.m"
          if ((backend_libs__foreign__MaybeErlang_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 496 "foreign.m"
            {
#line 497 "foreign.m"
              {
#line 497 "foreign.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Erlang type");
#line 497 "foreign.m"
                return;
              }
#line 496 "foreign.m"
            }
#line 495 "foreign.m"
          else
#line 491 "foreign.m"
            {
#line 491 "foreign.m"
              MR_Word backend_libs__foreign__Data_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeErlang_15, (MR_Integer) 0)));

#line 492 "foreign.m"
              *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_58, (MR_Integer) 1)));
#line 492 "foreign.m"
              *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_58, (MR_Integer) 2)));
#line 494 "foreign.m"
              *backend_libs__foreign__Name_8 = (MR_Word) &backend_libs__foreign_scalar_common_2[0];
#line 491 "foreign.m"
            }
#line 456 "foreign.m"
        else
#line 456 "foreign.m"
          if ((backend_libs__foreign__Target_17 == (MR_Integer) 1))
#line 462 "foreign.m"
            if ((backend_libs__foreign__MaybeIL_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "foreign.m"
              {
#line 464 "foreign.m"
                {
#line 464 "foreign.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no IL type");
#line 464 "foreign.m"
                  return;
                }
#line 463 "foreign.m"
              }
#line 462 "foreign.m"
            else
#line 459 "foreign.m"
              {
#line 459 "foreign.m"
                MR_Word backend_libs__foreign__V_38_38;
#line 459 "foreign.m"
                MR_Word backend_libs__foreign__Data_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeIL_11, (MR_Integer) 0)));
#line 460 "foreign.m"
                MR_Word backend_libs__foreign__V_20_20;
#line 460 "foreign.m"
                MR_String backend_libs__foreign__V_21_21;

#line 460 "foreign.m"
                backend_libs__foreign__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_43, (MR_Integer) 0)));
#line 460 "foreign.m"
                *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_43, (MR_Integer) 1)));
#line 460 "foreign.m"
                *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_43, (MR_Integer) 2)));
#line 460 "foreign.m"
                backend_libs__foreign__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__V_38_38, (MR_Integer) 0)));
#line 460 "foreign.m"
                backend_libs__foreign__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__V_38_38, (MR_Integer) 1)));
#line 460 "foreign.m"
                *backend_libs__foreign__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__V_38_38, (MR_Integer) 2)));
#line 459 "foreign.m"
              }
#line 456 "foreign.m"
          else
#line 484 "foreign.m"
            if ((backend_libs__foreign__MaybeJava_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "foreign.m"
              {
#line 486 "foreign.m"
                {
#line 486 "foreign.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Java type");
#line 486 "foreign.m"
                  return;
                }
#line 485 "foreign.m"
              }
#line 484 "foreign.m"
            else
#line 480 "foreign.m"
              {
#line 480 "foreign.m"
                MR_Word backend_libs__foreign__V_30_30;
#line 480 "foreign.m"
                MR_Word backend_libs__foreign__Data_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeJava_13, (MR_Integer) 0)));
#line 480 "foreign.m"
                MR_String backend_libs__foreign__NameStr_53;

#line 481 "foreign.m"
                backend_libs__foreign__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_52, (MR_Integer) 0)));
#line 481 "foreign.m"
                *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_52, (MR_Integer) 1)));
#line 481 "foreign.m"
                *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_52, (MR_Integer) 2)));
#line 481 "foreign.m"
                backend_libs__foreign__NameStr_53 = (MR_String) backend_libs__foreign__V_30_30;
#line 483 "foreign.m"
                {
#line 483 "foreign.m"
                  MR_Word base;
#line 483 "foreign.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 483 "foreign.m"
                  *backend_libs__foreign__Name_8 = base;
#line 483 "foreign.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_53));
#line 483 "foreign.m"
                }
#line 480 "foreign.m"
              }
#line 436 "foreign.m"
  }
#line 72 "foreign.m"
}

#line 64 "foreign.m"
MR_bool MR_CALL 
backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(
#line 64 "foreign.m"
  MR_Word backend_libs__foreign__ModuleInfo_4,
#line 64 "foreign.m"
  MR_Word backend_libs__foreign__Body_5,
#line 64 "foreign.m"
  MR_Word * backend_libs__foreign__UserEqComp_6)
#line 64 "foreign.m"
{
#line 430 "foreign.m"
  {
#line 430 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 430 "foreign.m"
    MR_Word backend_libs__foreign__MaybeUserEqComp_8;
#line 431 "foreign.m"
    MR_Word backend_libs__foreign__V_7_7;
#line 431 "foreign.m"
    MR_Word backend_libs__foreign__V_9_9;

#line 431 "foreign.m"
    {
#line 431 "foreign.m"
      backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__foreign__ModuleInfo_4, backend_libs__foreign__Body_5, &backend_libs__foreign__V_7_7, &backend_libs__foreign__MaybeUserEqComp_8, &backend_libs__foreign__V_9_9);
    }
#line 433 "foreign.m"
    backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__MaybeUserEqComp_8)) == (MR_mktag((MR_Integer) 1)));
#line 433 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 433 "foreign.m"
      *backend_libs__foreign__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeUserEqComp_8, (MR_Integer) 0)));
#line 430 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 430 "foreign.m"
  }
#line 64 "foreign.m"
}

#line 59 "foreign.m"
MR_Word MR_CALL 
backend_libs__foreign__to_exported_type_2_f_0(
#line 59 "foreign.m"
  MR_Word backend_libs__foreign__ModuleInfo_4,
#line 59 "foreign.m"
  MR_Word backend_libs__foreign__Type_5)
#line 59 "foreign.m"
{
#line 405 "foreign.m"
  {
#line 405 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 405 "foreign.m"
    MR_Word backend_libs__foreign__ExportType_6;
#line 405 "foreign.m"
    MR_Word backend_libs__foreign__TypeTable_7;
#line 425 "foreign.m"
    MR_Word backend_libs__foreign__TypeDefn_9;
#line 408 "foreign.m"
    MR_Word backend_libs__foreign__TypeCtor_8;

#line 406 "foreign.m"
    {
#line 406 "foreign.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__foreign__ModuleInfo_4, &backend_libs__foreign__TypeTable_7);
    }
#line 408 "foreign.m"
    {
#line 408 "foreign.m"
      backend_libs__foreign__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(backend_libs__foreign__Type_5, &backend_libs__foreign__TypeCtor_8);
    }
#line 408 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 409 "foreign.m"
      {
#line 409 "foreign.m"
        backend_libs__foreign__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(backend_libs__foreign__TypeTable_7, backend_libs__foreign__TypeCtor_8, &backend_libs__foreign__TypeDefn_9);
      }
#line 425 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 411 "foreign.m"
      {
#line 411 "foreign.m"
        MR_Word backend_libs__foreign__TypeBody_10;

#line 411 "foreign.m"
        {
#line 411 "foreign.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__foreign__TypeDefn_9, &backend_libs__foreign__TypeBody_10);
        }
#line 417 "foreign.m"
        if (((MR_tag((MR_Word) backend_libs__foreign__TypeBody_10)) == (MR_mktag((MR_Integer) 0))))
#line 413 "foreign.m"
          {
#line 413 "foreign.m"
            MR_Word backend_libs__foreign__ForeignTypeBody_11 = (MR_Word) MR_body(((MR_Word) backend_libs__foreign__TypeBody_10), (MR_Integer) 0);
#line 413 "foreign.m"
            MR_Word backend_libs__foreign__ForeignTypeName_12;
#line 413 "foreign.m"
            MR_Word backend_libs__foreign__Assertions_14;
#line 414 "foreign.m"
            MR_Word backend_libs__foreign__V_13_13;

#line 414 "foreign.m"
            {
#line 414 "foreign.m"
              backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__foreign__ModuleInfo_4, backend_libs__foreign__ForeignTypeBody_11, &backend_libs__foreign__ForeignTypeName_12, &backend_libs__foreign__V_13_13, &backend_libs__foreign__Assertions_14);
            }
#line 416 "foreign.m"
            {
#line 416 "foreign.m"
              backend_libs__foreign__ExportType_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "foreign.m"
              MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__ForeignTypeName_12));
#line 416 "foreign.m"
              MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportType_6, 1) = ((MR_Box) (backend_libs__foreign__Assertions_14));
#line 416 "foreign.m"
            }
#line 413 "foreign.m"
          }
#line 417 "foreign.m"
        else
#line 423 "foreign.m"
          {
#line 423 "foreign.m"
            backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 423 "foreign.m"
            MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
#line 423 "foreign.m"
          }
#line 411 "foreign.m"
      }
#line 425 "foreign.m"
    else
#line 426 "foreign.m"
      {
#line 426 "foreign.m"
        backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 426 "foreign.m"
        MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
#line 426 "foreign.m"
      }
#line 405 "foreign.m"
    return backend_libs__foreign__ExportType_6;
#line 405 "foreign.m"
  }
#line 59 "foreign.m"
}

#line 53 "foreign.m"
void MR_CALL 
backend_libs__foreign__have_foreign_type_for_backend_3_p_0(
#line 53 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1,
#line 53 "foreign.m"
  MR_Word backend_libs__foreign__ForeignTypeBody_2,
#line 53 "foreign.m"
  MR_Word * backend_libs__foreign__HeadVar__3_3)
#line 53 "foreign.m"
{
#line 384 "foreign.m"
  {
#line 384 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 384 "foreign.m"
    if ((backend_libs__foreign__HeadVar__1_1 == (MR_Integer) 0))
#line 384 "foreign.m"
      {
#line 385 "foreign.m"
        MR_Word backend_libs__foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 1)));
#line 385 "foreign.m"
        MR_Word backend_libs__foreign__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 0)));
#line 385 "foreign.m"
        MR_Word backend_libs__foreign__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 2)));
#line 385 "foreign.m"
        MR_Word backend_libs__foreign__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 3)));
#line 385 "foreign.m"
        MR_Word backend_libs__foreign__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 4)));
#line 385 "foreign.m"
        MR_Word backend_libs__foreign__V_5_5;

#line 385 "foreign.m"
        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 385 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 385 "foreign.m"
          {
#line 385 "foreign.m"
            backend_libs__foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_6_6, (MR_Integer) 0)));
#line 385 "foreign.m"
            *backend_libs__foreign__HeadVar__3_3 = (MR_Integer) 1;
#line 385 "foreign.m"
          }
#line 385 "foreign.m"
        else
#line 385 "foreign.m"
          *backend_libs__foreign__HeadVar__3_3 = (MR_Integer) 0;
#line 384 "foreign.m"
      }
#line 384 "foreign.m"
    else
#line 384 "foreign.m"
      if ((backend_libs__foreign__HeadVar__1_1 == (MR_Integer) 2))
#line 390 "foreign.m"
        {
#line 391 "foreign.m"
          MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 3)));
#line 391 "foreign.m"
          MR_Word backend_libs__foreign__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 0)));
#line 391 "foreign.m"
          MR_Word backend_libs__foreign__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 1)));
#line 391 "foreign.m"
          MR_Word backend_libs__foreign__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 2)));
#line 391 "foreign.m"
          MR_Word backend_libs__foreign__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 4)));
#line 391 "foreign.m"
          MR_Word backend_libs__foreign__V_14_14;

#line 391 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 391 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 391 "foreign.m"
            {
#line 391 "foreign.m"
              backend_libs__foreign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_15_15, (MR_Integer) 0)));
#line 391 "foreign.m"
              *backend_libs__foreign__HeadVar__3_3 = (MR_Integer) 1;
#line 391 "foreign.m"
            }
#line 391 "foreign.m"
          else
#line 391 "foreign.m"
            *backend_libs__foreign__HeadVar__3_3 = (MR_Integer) 0;
#line 390 "foreign.m"
        }
#line 384 "foreign.m"
      else
#line 384 "foreign.m"
        if ((backend_libs__foreign__HeadVar__1_1 == (MR_Integer) 4))
#line 392 "foreign.m"
          {
#line 393 "foreign.m"
            MR_Word backend_libs__foreign__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 4)));
#line 393 "foreign.m"
            MR_Word backend_libs__foreign__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 0)));
#line 393 "foreign.m"
            MR_Word backend_libs__foreign__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 1)));
#line 393 "foreign.m"
            MR_Word backend_libs__foreign__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 2)));
#line 393 "foreign.m"
            MR_Word backend_libs__foreign__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 3)));
#line 393 "foreign.m"
            MR_Word backend_libs__foreign__V_17_17;

#line 393 "foreign.m"
            backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 393 "foreign.m"
            if (backend_libs__foreign__succeeded)
#line 393 "foreign.m"
              {
#line 393 "foreign.m"
                backend_libs__foreign__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_18_18, (MR_Integer) 0)));
#line 393 "foreign.m"
                *backend_libs__foreign__HeadVar__3_3 = (MR_Integer) 1;
#line 393 "foreign.m"
              }
#line 393 "foreign.m"
            else
#line 393 "foreign.m"
              *backend_libs__foreign__HeadVar__3_3 = (MR_Integer) 0;
#line 392 "foreign.m"
          }
#line 384 "foreign.m"
        else
#line 384 "foreign.m"
          if ((backend_libs__foreign__HeadVar__1_1 == (MR_Integer) 1))
#line 386 "foreign.m"
            {
#line 387 "foreign.m"
              MR_Word backend_libs__foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 0)));
#line 387 "foreign.m"
              MR_Word backend_libs__foreign__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 1)));
#line 387 "foreign.m"
              MR_Word backend_libs__foreign__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 2)));
#line 387 "foreign.m"
              MR_Word backend_libs__foreign__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 3)));
#line 387 "foreign.m"
              MR_Word backend_libs__foreign__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 4)));
#line 387 "foreign.m"
              MR_Word backend_libs__foreign__V_8_8;

#line 387 "foreign.m"
              backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 387 "foreign.m"
              if (backend_libs__foreign__succeeded)
#line 387 "foreign.m"
                {
#line 387 "foreign.m"
                  backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_9_9, (MR_Integer) 0)));
#line 387 "foreign.m"
                  *backend_libs__foreign__HeadVar__3_3 = (MR_Integer) 1;
#line 387 "foreign.m"
                }
#line 387 "foreign.m"
              else
#line 387 "foreign.m"
                *backend_libs__foreign__HeadVar__3_3 = (MR_Integer) 0;
#line 386 "foreign.m"
            }
#line 384 "foreign.m"
          else
#line 388 "foreign.m"
            {
#line 389 "foreign.m"
              MR_Word backend_libs__foreign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 2)));
#line 389 "foreign.m"
              MR_Word backend_libs__foreign__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 0)));
#line 389 "foreign.m"
              MR_Word backend_libs__foreign__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 1)));
#line 389 "foreign.m"
              MR_Word backend_libs__foreign__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 3)));
#line 389 "foreign.m"
              MR_Word backend_libs__foreign__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 4)));
#line 389 "foreign.m"
              MR_Word backend_libs__foreign__V_11_11;

#line 389 "foreign.m"
              backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 389 "foreign.m"
              if (backend_libs__foreign__succeeded)
#line 389 "foreign.m"
                {
#line 389 "foreign.m"
                  backend_libs__foreign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_12_12, (MR_Integer) 0)));
#line 389 "foreign.m"
                  *backend_libs__foreign__HeadVar__3_3 = (MR_Integer) 1;
#line 389 "foreign.m"
                }
#line 389 "foreign.m"
              else
#line 389 "foreign.m"
                *backend_libs__foreign__HeadVar__3_3 = (MR_Integer) 0;
#line 388 "foreign.m"
            }
#line 384 "foreign.m"
  }
#line 53 "foreign.m"
}

#line 48 "foreign.m"
MR_Word MR_CALL 
backend_libs__foreign__non_foreign_type_1_f_0(
#line 48 "foreign.m"
  MR_Word backend_libs__foreign__Type_3)
#line 48 "foreign.m"
{
#line 403 "foreign.m"
  {
#line 403 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 403 "foreign.m"
    MR_Word backend_libs__foreign__HeadVar__2_2;

#line 403 "foreign.m"
    {
#line 403 "foreign.m"
      backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "foreign.m"
      MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, 0) = ((MR_Box) (backend_libs__foreign__Type_3));
#line 403 "foreign.m"
    }
#line 403 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 403 "foreign.m"
  }
#line 48 "foreign.m"
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
