/*
** Automatically generated from `foreign.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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




#line 137 "backend_libs.foreign.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__foreign__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;

#line 140 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0[2];

#line 143 "backend_libs.foreign.c"
static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0;

#line 146 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1[1];

#line 149 "backend_libs.foreign.c"
static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1;

#line 152 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0[1];

#line 155 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_1[1];

#line 158 "backend_libs.foreign.c"
static const MR_DuPtagLayout backend_libs__foreign__backend_libs__foreign__du_ptag_ordered_exported_type_0[2];

#line 161 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0[2];

#line 164 "backend_libs.foreign.c"
static const MR_Integer backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0[2];

#line 167 "backend_libs.foreign.c"
static MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0_10001(
#line 170 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_1,
#line 172 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2);

#line 175 "backend_libs.foreign.c"
static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
#line 178 "backend_libs.foreign.c"
  MR_Box * backend_libs__foreign__wrapper_arg_1,
#line 180 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2,
#line 182 "backend_libs.foreign.c"
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



#line 342 "backend_libs.foreign.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__foreign__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0
  }
};

#line 350 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &backend_libs__foreign__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0
};

#line 356 "backend_libs.foreign.c"
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

#line 371 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 376 "backend_libs.foreign.c"
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

#line 391 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0[1] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0
};

#line 396 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_1[1] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1
};

#line 401 "backend_libs.foreign.c"
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

#line 415 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0[2] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0,
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1
};

#line 421 "backend_libs.foreign.c"
static const MR_Integer backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 427 "backend_libs.foreign.c"
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

#line 448 "backend_libs.foreign.c"
static MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0_10001(
#line 451 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_1,
#line 453 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2)
#line 455 "backend_libs.foreign.c"
{
#line 457 "backend_libs.foreign.c"
  {
#line 459 "backend_libs.foreign.c"
    MR_bool backend_libs__foreign__succeeded;

#line 462 "backend_libs.foreign.c"
    {
#line 464 "backend_libs.foreign.c"
      backend_libs__foreign__succeeded = backend_libs__foreign____Unify____exported_type_0_0(((MR_Word) backend_libs__foreign__wrapper_arg_1), ((MR_Word) backend_libs__foreign__wrapper_arg_2));
    }
#line 467 "backend_libs.foreign.c"
    return backend_libs__foreign__succeeded;
#line 469 "backend_libs.foreign.c"
  }
#line 471 "backend_libs.foreign.c"
}

#line 474 "backend_libs.foreign.c"
static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
#line 477 "backend_libs.foreign.c"
  MR_Box * backend_libs__foreign__wrapper_arg_1,
#line 479 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2,
#line 481 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_3)
#line 483 "backend_libs.foreign.c"
{
#line 485 "backend_libs.foreign.c"
  {
#line 487 "backend_libs.foreign.c"
    MR_Word backend_libs__foreign__conv0_HeadVar__1_1;

#line 490 "backend_libs.foreign.c"
    {
#line 492 "backend_libs.foreign.c"
      backend_libs__foreign____Compare____exported_type_0_0(&backend_libs__foreign__conv0_HeadVar__1_1, ((MR_Word) backend_libs__foreign__wrapper_arg_2), ((MR_Word) backend_libs__foreign__wrapper_arg_3));
    }
#line 495 "backend_libs.foreign.c"
    *backend_libs__foreign__wrapper_arg_1 = ((MR_Box) (backend_libs__foreign__conv0_HeadVar__1_1));
#line 497 "backend_libs.foreign.c"
  }
#line 499 "backend_libs.foreign.c"
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
#line 200 "foreign.m"
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
    MR_String backend_libs__foreign__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 1)));
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
    MR_String backend_libs__foreign__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 2)));
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

#line 397 "foreign.m"
void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0(
#line 397 "foreign.m"
  MR_Word * backend_libs__foreign__HeadVar__1_1,
#line 397 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_2,
#line 397 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__3_3)
#line 397 "foreign.m"
{
#line 397 "foreign.m"
  {
#line 397 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 397 "foreign.m"
    MR_Integer backend_libs__foreign__CastX_17 = (MR_Integer) backend_libs__foreign__HeadVar__2_2;
#line 397 "foreign.m"
    MR_Integer backend_libs__foreign__CastY_18 = (MR_Integer) backend_libs__foreign__HeadVar__3_3;

#line 397 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__CastX_17 == backend_libs__foreign__CastY_18);
#line 397 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 743 "backend_libs.foreign.c"
      *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 397 "foreign.m"
    else
#line 397 "foreign.m"
      if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 397 "foreign.m"
        {
#line 397 "foreign.m"
          MR_Word backend_libs__foreign__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "foreign.m"
          MR_Word backend_libs__foreign__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));

#line 397 "foreign.m"
          if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 397 "foreign.m"
            {
#line 397 "foreign.m"
              MR_Word backend_libs__foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 397 "foreign.m"
              MR_Word backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 397 "foreign.m"
              MR_Word backend_libs__foreign__V_8_8;

#line 397 "foreign.m"
              {
#line 397 "foreign.m"
                mdbcomp__prim_data____Compare____sym_name_0_0(&backend_libs__foreign__V_8_8, backend_libs__foreign__V_23_23, backend_libs__foreign__V_6_6);
              }
#line 772 "backend_libs.foreign.c"
              backend_libs__foreign__succeeded = (backend_libs__foreign__V_8_8 == (MR_Integer) 0);
#line 397 "foreign.m"
              backend_libs__foreign__succeeded = !(backend_libs__foreign__succeeded);
#line 397 "foreign.m"
              if (backend_libs__foreign__succeeded)
#line 397 "foreign.m"
                *backend_libs__foreign__HeadVar__1_1 = backend_libs__foreign__V_8_8;
#line 397 "foreign.m"
              else
#line 397 "foreign.m"
                {
#line 397 "foreign.m"
                  {
#line 397 "foreign.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__foreign_scalar_common_1[0], backend_libs__foreign__HeadVar__1_1, ((MR_Box) (backend_libs__foreign__V_22_22)), ((MR_Box) (backend_libs__foreign__V_7_7)));
#line 397 "foreign.m"
                    return;
                  }
#line 397 "foreign.m"
                }
#line 397 "foreign.m"
            }
#line 397 "foreign.m"
          else
#line 797 "backend_libs.foreign.c"
            *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 1;
#line 397 "foreign.m"
        }
#line 397 "foreign.m"
      else
#line 397 "foreign.m"
        {
#line 397 "foreign.m"
          MR_Word backend_libs__foreign__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));

#line 397 "foreign.m"
          if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 810 "backend_libs.foreign.c"
            *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 2;
#line 397 "foreign.m"
          else
#line 397 "foreign.m"
            {
#line 397 "foreign.m"
              MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 0)));

#line 397 "foreign.m"
              {
#line 397 "foreign.m"
                parse_tree__prog_data____Compare____mer_type_0_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__V_24_24, backend_libs__foreign__V_16_16);
#line 397 "foreign.m"
                return;
              }
#line 397 "foreign.m"
            }
#line 397 "foreign.m"
        }
#line 397 "foreign.m"
  }
#line 397 "foreign.m"
}

#line 397 "foreign.m"
MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0(
#line 397 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1,
#line 397 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_2)
#line 397 "foreign.m"
{
#line 397 "foreign.m"
  {
#line 397 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 397 "foreign.m"
    MR_Integer backend_libs__foreign__CastX_9 = (MR_Integer) backend_libs__foreign__HeadVar__1_1;
#line 397 "foreign.m"
    MR_Integer backend_libs__foreign__CastY_10 = (MR_Integer) backend_libs__foreign__HeadVar__2_2;

#line 397 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__CastX_9 == backend_libs__foreign__CastY_10);
#line 397 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 397 "foreign.m"
      backend_libs__foreign__succeeded = MR_TRUE;
#line 397 "foreign.m"
    else
#line 397 "foreign.m"
      if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 397 "foreign.m"
        {
#line 397 "foreign.m"
          MR_Word backend_libs__foreign__TypeInfo_12_12;
#line 397 "foreign.m"
          MR_Word backend_libs__foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 397 "foreign.m"
          MR_Word backend_libs__foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 397 "foreign.m"
          MR_Word backend_libs__foreign__V_5_5;
#line 397 "foreign.m"
          MR_Word backend_libs__foreign__V_6_6;

#line 397 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 397 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 397 "foreign.m"
            {
#line 397 "foreign.m"
              backend_libs__foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "foreign.m"
              backend_libs__foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 886 "backend_libs.foreign.c"
              {
#line 888 "backend_libs.foreign.c"
                backend_libs__foreign__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__foreign__V_3_3, backend_libs__foreign__V_5_5);
              }
#line 397 "foreign.m"
              if (backend_libs__foreign__succeeded)
#line 397 "foreign.m"
                {
#line 895 "backend_libs.foreign.c"
                  backend_libs__foreign__TypeInfo_12_12 = (MR_Word) &backend_libs__foreign_scalar_common_1[0];
#line 897 "backend_libs.foreign.c"
                  {
#line 899 "backend_libs.foreign.c"
                    return backend_libs__foreign__succeeded = mercury__builtin__unify_2_p_0(backend_libs__foreign__TypeInfo_12_12, ((MR_Box) (backend_libs__foreign__V_4_4)), ((MR_Box) (backend_libs__foreign__V_6_6)));
                  }
#line 397 "foreign.m"
                }
#line 397 "foreign.m"
            }
#line 397 "foreign.m"
        }
#line 397 "foreign.m"
      else
#line 397 "foreign.m"
        {
#line 397 "foreign.m"
          MR_Word backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 397 "foreign.m"
          MR_Word backend_libs__foreign__V_8_8;

#line 397 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 397 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 397 "foreign.m"
            {
#line 397 "foreign.m"
              backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 925 "backend_libs.foreign.c"
              {
#line 927 "backend_libs.foreign.c"
                return backend_libs__foreign__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(backend_libs__foreign__V_7_7, backend_libs__foreign__V_8_8);
              }
#line 397 "foreign.m"
            }
#line 397 "foreign.m"
        }
#line 397 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 397 "foreign.m"
  }
#line 397 "foreign.m"
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
#line 308 "foreign.m"
          {
#line 308 "foreign.m"
            backend_libs__foreign__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_25_25);
          }
#line 308 "foreign.m"
          {
#line 308 "foreign.m"
            backend_libs__foreign__V_21_21 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_22_22, backend_libs__foreign__V_23_23);
          }
#line 307 "foreign.m"
          {
#line 307 "foreign.m"
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
#line 308 "foreign.m"
            {
#line 308 "foreign.m"
              backend_libs__foreign__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_36_36);
            }
#line 308 "foreign.m"
            {
#line 308 "foreign.m"
              backend_libs__foreign__V_32_32 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_33_33, backend_libs__foreign__V_34_34);
            }
#line 307 "foreign.m"
            {
#line 307 "foreign.m"
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
#line 308 "foreign.m"
              {
#line 308 "foreign.m"
                backend_libs__foreign__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_47_47);
              }
#line 308 "foreign.m"
              {
#line 308 "foreign.m"
                backend_libs__foreign__V_43_43 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_44_44, backend_libs__foreign__V_45_45);
              }
#line 307 "foreign.m"
              {
#line 307 "foreign.m"
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
#line 308 "foreign.m"
                {
#line 308 "foreign.m"
                  backend_libs__foreign__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_58_58);
                }
#line 308 "foreign.m"
                {
#line 308 "foreign.m"
                  backend_libs__foreign__V_54_54 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_55_55, backend_libs__foreign__V_56_56);
                }
#line 307 "foreign.m"
                {
#line 307 "foreign.m"
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
#line 308 "foreign.m"
                {
#line 308 "foreign.m"
                  backend_libs__foreign__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_69_69);
                }
#line 308 "foreign.m"
                {
#line 308 "foreign.m"
                  backend_libs__foreign__V_65_65 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_66_66, backend_libs__foreign__V_67_67);
                }
#line 307 "foreign.m"
                {
#line 307 "foreign.m"
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
#line 654 "foreign.m"
  {
#line 654 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 654 "foreign.m"
    MR_String backend_libs__foreign__HeadVar__2_2;
#line 654 "foreign.m"
    MR_String backend_libs__foreign__UppercaseModuleName_4;
#line 654 "foreign.m"
    MR_String backend_libs__foreign__MangledModuleName_5;

#line 655 "foreign.m"
    {
#line 655 "foreign.m"
      backend_libs__foreign__MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__foreign__ModuleName_3);
    }
#line 656 "foreign.m"
    {
#line 656 "foreign.m"
      mercury__string__to_upper_2_p_0(backend_libs__foreign__MangledModuleName_5, &backend_libs__foreign__UppercaseModuleName_4);
    }
#line 654 "foreign.m"
    {
#line 654 "foreign.m"
      return backend_libs__foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__UppercaseModuleName_4, (MR_String) "_DECL_GUARD");
    }
#line 654 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 654 "foreign.m"
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
#line 517 "foreign.m"
  {
#line 517 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 517 "foreign.m"
    MR_String backend_libs__foreign__HeadVar__4_4;
#line 517 "foreign.m"
    MR_Word backend_libs__foreign__V_8_8;

#line 518 "foreign.m"
    {
#line 518 "foreign.m"
      backend_libs__foreign__V_8_8 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__foreign__ModuleInfo_5, backend_libs__foreign__Type_7);
    }
#line 517 "foreign.m"
    {
#line 517 "foreign.m"
      return backend_libs__foreign__HeadVar__4_4 = backend_libs__foreign__exported_type_to_string_2_f_0(backend_libs__foreign__Lang_6, backend_libs__foreign__V_8_8);
    }
#line 517 "foreign.m"
    return backend_libs__foreign__HeadVar__4_4;
#line 517 "foreign.m"
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
#line 522 "foreign.m"
  {
#line 522 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 522 "foreign.m"
    MR_String backend_libs__foreign__Result_6;

#line 522 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__ExportedType_5)) == (MR_mktag((MR_Integer) 0))))
#line 522 "foreign.m"
      {
#line 522 "foreign.m"
        MR_Word backend_libs__foreign__ForeignType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportedType_5, (MR_Integer) 0)));
#line 522 "foreign.m"
        MR_Word backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportedType_5, (MR_Integer) 1)));

#line 532 "foreign.m"
        if ((backend_libs__foreign__Lang_4 == (MR_Integer) 0))
#line 528 "foreign.m"
          if (((MR_tag((MR_Word) backend_libs__foreign__ForeignType_7)) == (MR_mktag((MR_Integer) 1))))
#line 529 "foreign.m"
            {
#line 530 "foreign.m"
              {
#line 530 "foreign.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "qualified C type");
              }
#line 529 "foreign.m"
            }
#line 528 "foreign.m"
          else
#line 526 "foreign.m"
            backend_libs__foreign__Result_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignType_7, (MR_Integer) 0)));
#line 532 "foreign.m"
        else
#line 538 "foreign.m"
          {
#line 538 "foreign.m"
            return backend_libs__foreign__Result_6 = mdbcomp__prim_data__sym_name_to_string_1_f_0(backend_libs__foreign__ForeignType_7);
          }
#line 522 "foreign.m"
      }
#line 522 "foreign.m"
    else
#line 541 "foreign.m"
      {
#line 541 "foreign.m"
        MR_Word backend_libs__foreign__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportedType_5, (MR_Integer) 0)));

#line 585 "foreign.m"
        if ((backend_libs__foreign__Lang_4 == (MR_Integer) 0))
#line 567 "foreign.m"
          if (((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 2))))
#line 553 "foreign.m"
            {
#line 553 "foreign.m"
              MR_Word backend_libs__foreign__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 557 "foreign.m"
              if ((backend_libs__foreign__BuiltinType_13 == (MR_Integer) 3))
#line 565 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "MR_Char";
#line 557 "foreign.m"
              else
#line 557 "foreign.m"
                if ((backend_libs__foreign__BuiltinType_13 == (MR_Integer) 1))
#line 559 "foreign.m"
                  backend_libs__foreign__Result_6 = (MR_String) "MR_Float";
#line 557 "foreign.m"
                else
#line 557 "foreign.m"
                  if ((backend_libs__foreign__BuiltinType_13 == (MR_Integer) 0))
#line 556 "foreign.m"
                    backend_libs__foreign__Result_6 = (MR_String) "MR_Integer";
#line 557 "foreign.m"
                  else
#line 562 "foreign.m"
                    backend_libs__foreign__Result_6 = (MR_String) "MR_String";
#line 553 "foreign.m"
            }
#line 567 "foreign.m"
          else
#line 567 "foreign.m"
            if (((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 0))))
#line 580 "foreign.m"
              backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
#line 567 "foreign.m"
            else
#line 567 "foreign.m"
              if (((((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__foreign__Type_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 582 "foreign.m"
                {
#line 583 "foreign.m"
                  {
#line 583 "foreign.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "kinded type");
                  }
#line 582 "foreign.m"
                }
#line 567 "foreign.m"
              else
#line 567 "foreign.m"
                if (((((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__foreign__Type_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 569 "foreign.m"
                  backend_libs__foreign__Result_6 = (MR_String) "MR_Tuple";
#line 567 "foreign.m"
                else
#line 577 "foreign.m"
                  backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
#line 585 "foreign.m"
        else
#line 585 "foreign.m"
          if ((backend_libs__foreign__Lang_4 == (MR_Integer) 1))
#line 602 "foreign.m"
            if (((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 2))))
#line 588 "foreign.m"
              {
#line 588 "foreign.m"
                MR_Word backend_libs__foreign__BuiltinType_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 592 "foreign.m"
                if ((backend_libs__foreign__BuiltinType_74 == (MR_Integer) 3))
#line 600 "foreign.m"
                  backend_libs__foreign__Result_6 = (MR_String) "char";
#line 592 "foreign.m"
                else
#line 592 "foreign.m"
                  if ((backend_libs__foreign__BuiltinType_74 == (MR_Integer) 1))
#line 594 "foreign.m"
                    backend_libs__foreign__Result_6 = (MR_String) "double";
#line 592 "foreign.m"
                  else
#line 592 "foreign.m"
                    if ((backend_libs__foreign__BuiltinType_74 == (MR_Integer) 0))
#line 591 "foreign.m"
                      backend_libs__foreign__Result_6 = (MR_String) "int";
#line 592 "foreign.m"
                    else
#line 597 "foreign.m"
                      backend_libs__foreign__Result_6 = (MR_String) "string";
#line 588 "foreign.m"
              }
#line 602 "foreign.m"
            else
#line 612 "foreign.m"
              backend_libs__foreign__Result_6 = (MR_String) "object";
#line 585 "foreign.m"
          else
#line 585 "foreign.m"
            if ((backend_libs__foreign__Lang_4 == (MR_Integer) 4))
#line 647 "foreign.m"
              {
#line 648 "foreign.m"
                {
#line 648 "foreign.m"
                  mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "erlang");
                }
#line 647 "foreign.m"
              }
#line 585 "foreign.m"
            else
#line 585 "foreign.m"
              if ((backend_libs__foreign__Lang_4 == (MR_Integer) 3))
#line 644 "foreign.m"
                {
#line 645 "foreign.m"
                  {
#line 645 "foreign.m"
                    mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "il");
                  }
#line 644 "foreign.m"
                }
#line 585 "foreign.m"
              else
#line 631 "foreign.m"
                if (((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 2))))
#line 617 "foreign.m"
                  {
#line 617 "foreign.m"
                    MR_Word backend_libs__foreign__BuiltinType_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 621 "foreign.m"
                    if ((backend_libs__foreign__BuiltinType_77 == (MR_Integer) 3))
#line 629 "foreign.m"
                      backend_libs__foreign__Result_6 = (MR_String) "char";
#line 621 "foreign.m"
                    else
#line 621 "foreign.m"
                      if ((backend_libs__foreign__BuiltinType_77 == (MR_Integer) 1))
#line 623 "foreign.m"
                        backend_libs__foreign__Result_6 = (MR_String) "double";
#line 621 "foreign.m"
                      else
#line 621 "foreign.m"
                        if ((backend_libs__foreign__BuiltinType_77 == (MR_Integer) 0))
#line 620 "foreign.m"
                          backend_libs__foreign__Result_6 = (MR_String) "int";
#line 621 "foreign.m"
                        else
#line 626 "foreign.m"
                          backend_libs__foreign__Result_6 = (MR_String) "java.lang.String";
#line 617 "foreign.m"
                  }
#line 631 "foreign.m"
                else
#line 641 "foreign.m"
                  backend_libs__foreign__Result_6 = (MR_String) "java.lang.Object";
#line 541 "foreign.m"
      }
#line 522 "foreign.m"
    return backend_libs__foreign__Result_6;
#line 522 "foreign.m"
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
#line 514 "foreign.m"
  {
#line 514 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 514 "foreign.m"
    MR_Word backend_libs__foreign__HeadVar__2_2;

#line 514 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 514 "foreign.m"
      {
#line 514 "foreign.m"
        MR_Word backend_libs__foreign__Assertions_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 514 "foreign.m"
        MR_Word backend_libs__foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));

#line 514 "foreign.m"
        {
#line 514 "foreign.m"
          backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 514 "foreign.m"
          MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, 0) = ((MR_Box) (backend_libs__foreign__Assertions_4));
#line 514 "foreign.m"
        }
#line 514 "foreign.m"
      }
#line 514 "foreign.m"
    else
#line 515 "foreign.m"
      backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 514 "foreign.m"
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
#line 438 "foreign.m"
  {
#line 438 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 438 "foreign.m"
    MR_Word backend_libs__foreign__MaybeIL_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 0)));
#line 438 "foreign.m"
    MR_Word backend_libs__foreign__MaybeC_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 1)));
#line 438 "foreign.m"
    MR_Word backend_libs__foreign__MaybeJava_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 2)));
#line 438 "foreign.m"
    MR_Word backend_libs__foreign__MaybeCSharp_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 3)));
#line 438 "foreign.m"
    MR_Word backend_libs__foreign__MaybeErlang_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 4)));
#line 438 "foreign.m"
    MR_Word backend_libs__foreign__Globals_16;
#line 438 "foreign.m"
    MR_Word backend_libs__foreign__Target_17;

#line 445 "foreign.m"
    {
#line 445 "foreign.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__foreign__ModuleInfo_6, &backend_libs__foreign__Globals_16);
    }
#line 446 "foreign.m"
    {
#line 446 "foreign.m"
      libs__globals__get_target_2_p_0(backend_libs__foreign__Globals_16, &backend_libs__foreign__Target_17);
    }
#line 458 "foreign.m"
    if ((backend_libs__foreign__Target_17 == (MR_Integer) 0))
#line 454 "foreign.m"
      if ((backend_libs__foreign__MaybeC_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "foreign.m"
        {
#line 456 "foreign.m"
          {
#line 456 "foreign.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C type");
#line 456 "foreign.m"
            return;
          }
#line 455 "foreign.m"
        }
#line 454 "foreign.m"
      else
#line 450 "foreign.m"
        {
#line 450 "foreign.m"
          MR_Word backend_libs__foreign__Data_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeC_12, (MR_Integer) 0)));
#line 450 "foreign.m"
          MR_String backend_libs__foreign__NameStr_19;
#line 450 "foreign.m"
          MR_Word backend_libs__foreign__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_18, (MR_Integer) 0)));

#line 451 "foreign.m"
          *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_18, (MR_Integer) 1)));
#line 451 "foreign.m"
          *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_18, (MR_Integer) 2)));
#line 451 "foreign.m"
          backend_libs__foreign__NameStr_19 = (MR_String) backend_libs__foreign__V_46_46;
#line 453 "foreign.m"
          {
#line 453 "foreign.m"
            MR_Word base;
#line 453 "foreign.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 453 "foreign.m"
            *backend_libs__foreign__Name_8 = base;
#line 453 "foreign.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_19));
#line 453 "foreign.m"
          }
#line 450 "foreign.m"
        }
#line 458 "foreign.m"
    else
#line 458 "foreign.m"
      if ((backend_libs__foreign__Target_17 == (MR_Integer) 2))
#line 475 "foreign.m"
        if ((backend_libs__foreign__MaybeCSharp_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "foreign.m"
          {
#line 477 "foreign.m"
            {
#line 477 "foreign.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C# type");
#line 477 "foreign.m"
              return;
            }
#line 476 "foreign.m"
          }
#line 475 "foreign.m"
        else
#line 471 "foreign.m"
          {
#line 471 "foreign.m"
            MR_Word backend_libs__foreign__V_38_38;
#line 471 "foreign.m"
            MR_Word backend_libs__foreign__Data_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeCSharp_14, (MR_Integer) 0)));
#line 471 "foreign.m"
            MR_String backend_libs__foreign__NameStr_51;

#line 472 "foreign.m"
            backend_libs__foreign__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_50, (MR_Integer) 0)));
#line 472 "foreign.m"
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_50, (MR_Integer) 1)));
#line 472 "foreign.m"
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_50, (MR_Integer) 2)));
#line 472 "foreign.m"
            backend_libs__foreign__NameStr_51 = (MR_String) backend_libs__foreign__V_38_38;
#line 474 "foreign.m"
            {
#line 474 "foreign.m"
              MR_Word base;
#line 474 "foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 474 "foreign.m"
              *backend_libs__foreign__Name_8 = base;
#line 474 "foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_51));
#line 474 "foreign.m"
            }
#line 471 "foreign.m"
          }
#line 458 "foreign.m"
      else
#line 458 "foreign.m"
        if ((backend_libs__foreign__Target_17 == (MR_Integer) 5))
#line 497 "foreign.m"
          if ((backend_libs__foreign__MaybeErlang_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 498 "foreign.m"
            {
#line 499 "foreign.m"
              {
#line 499 "foreign.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Erlang type");
#line 499 "foreign.m"
                return;
              }
#line 498 "foreign.m"
            }
#line 497 "foreign.m"
          else
#line 493 "foreign.m"
            {
#line 493 "foreign.m"
              MR_Word backend_libs__foreign__Data_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeErlang_15, (MR_Integer) 0)));

#line 494 "foreign.m"
              *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_62, (MR_Integer) 1)));
#line 494 "foreign.m"
              *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_62, (MR_Integer) 2)));
#line 496 "foreign.m"
              *backend_libs__foreign__Name_8 = (MR_Word) &backend_libs__foreign_scalar_common_2[0];
#line 493 "foreign.m"
            }
#line 458 "foreign.m"
        else
#line 458 "foreign.m"
          if ((backend_libs__foreign__Target_17 == (MR_Integer) 1))
#line 464 "foreign.m"
            if ((backend_libs__foreign__MaybeIL_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "foreign.m"
              {
#line 466 "foreign.m"
                {
#line 466 "foreign.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no IL type");
#line 466 "foreign.m"
                  return;
                }
#line 465 "foreign.m"
              }
#line 464 "foreign.m"
            else
#line 461 "foreign.m"
              {
#line 461 "foreign.m"
                MR_Word backend_libs__foreign__V_42_42;
#line 461 "foreign.m"
                MR_Word backend_libs__foreign__Data_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeIL_11, (MR_Integer) 0)));
#line 462 "foreign.m"
                MR_Word backend_libs__foreign__V_20_20;
#line 462 "foreign.m"
                MR_String backend_libs__foreign__V_21_21;

#line 462 "foreign.m"
                backend_libs__foreign__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_47, (MR_Integer) 0)));
#line 462 "foreign.m"
                *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_47, (MR_Integer) 1)));
#line 462 "foreign.m"
                *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_47, (MR_Integer) 2)));
#line 462 "foreign.m"
                backend_libs__foreign__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__V_42_42, (MR_Integer) 0)));
#line 462 "foreign.m"
                backend_libs__foreign__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__V_42_42, (MR_Integer) 1)));
#line 462 "foreign.m"
                *backend_libs__foreign__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__V_42_42, (MR_Integer) 2)));
#line 461 "foreign.m"
              }
#line 458 "foreign.m"
          else
#line 458 "foreign.m"
            if ((backend_libs__foreign__Target_17 == (MR_Integer) 3))
#line 486 "foreign.m"
              if ((backend_libs__foreign__MaybeJava_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "foreign.m"
                {
#line 488 "foreign.m"
                  {
#line 488 "foreign.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Java type");
#line 488 "foreign.m"
                    return;
                  }
#line 487 "foreign.m"
                }
#line 486 "foreign.m"
              else
#line 482 "foreign.m"
                {
#line 482 "foreign.m"
                  MR_Word backend_libs__foreign__V_34_34;
#line 482 "foreign.m"
                  MR_Word backend_libs__foreign__Data_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeJava_13, (MR_Integer) 0)));
#line 482 "foreign.m"
                  MR_String backend_libs__foreign__NameStr_57;

#line 483 "foreign.m"
                  backend_libs__foreign__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_56, (MR_Integer) 0)));
#line 483 "foreign.m"
                  *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_56, (MR_Integer) 1)));
#line 483 "foreign.m"
                  *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_56, (MR_Integer) 2)));
#line 483 "foreign.m"
                  backend_libs__foreign__NameStr_57 = (MR_String) backend_libs__foreign__V_34_34;
#line 485 "foreign.m"
                  {
#line 485 "foreign.m"
                    MR_Word base;
#line 485 "foreign.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 485 "foreign.m"
                    *backend_libs__foreign__Name_8 = base;
#line 485 "foreign.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_57));
#line 485 "foreign.m"
                  }
#line 482 "foreign.m"
                }
#line 458 "foreign.m"
            else
#line 508 "foreign.m"
              if ((backend_libs__foreign__MaybeC_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "foreign.m"
                {
#line 510 "foreign.m"
                  {
#line 510 "foreign.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C type");
#line 510 "foreign.m"
                    return;
                  }
#line 509 "foreign.m"
                }
#line 508 "foreign.m"
              else
#line 504 "foreign.m"
                {
#line 504 "foreign.m"
                  MR_Word backend_libs__foreign__V_25_25;
#line 504 "foreign.m"
                  MR_Word backend_libs__foreign__Data_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeC_12, (MR_Integer) 0)));
#line 504 "foreign.m"
                  MR_String backend_libs__foreign__NameStr_66;

#line 505 "foreign.m"
                  backend_libs__foreign__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_65, (MR_Integer) 0)));
#line 505 "foreign.m"
                  *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_65, (MR_Integer) 1)));
#line 505 "foreign.m"
                  *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_65, (MR_Integer) 2)));
#line 505 "foreign.m"
                  backend_libs__foreign__NameStr_66 = (MR_String) backend_libs__foreign__V_25_25;
#line 507 "foreign.m"
                  {
#line 507 "foreign.m"
                    MR_Word base;
#line 507 "foreign.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 507 "foreign.m"
                    *backend_libs__foreign__Name_8 = base;
#line 507 "foreign.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_66));
#line 507 "foreign.m"
                  }
#line 504 "foreign.m"
                }
#line 438 "foreign.m"
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
#line 432 "foreign.m"
  {
#line 432 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 432 "foreign.m"
    MR_Word backend_libs__foreign__MaybeUserEqComp_8;
#line 433 "foreign.m"
    MR_Word backend_libs__foreign__V_7_7;
#line 433 "foreign.m"
    MR_Word backend_libs__foreign__V_9_9;

#line 433 "foreign.m"
    {
#line 433 "foreign.m"
      backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__foreign__ModuleInfo_4, backend_libs__foreign__Body_5, &backend_libs__foreign__V_7_7, &backend_libs__foreign__MaybeUserEqComp_8, &backend_libs__foreign__V_9_9);
    }
#line 435 "foreign.m"
    backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__MaybeUserEqComp_8)) == (MR_mktag((MR_Integer) 1)));
#line 435 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 435 "foreign.m"
      *backend_libs__foreign__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeUserEqComp_8, (MR_Integer) 0)));
#line 432 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 432 "foreign.m"
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
#line 407 "foreign.m"
  {
#line 407 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 407 "foreign.m"
    MR_Word backend_libs__foreign__ExportType_6;
#line 407 "foreign.m"
    MR_Word backend_libs__foreign__TypeTable_7;
#line 427 "foreign.m"
    MR_Word backend_libs__foreign__TypeDefn_9;
#line 410 "foreign.m"
    MR_Word backend_libs__foreign__TypeCtor_8;

#line 408 "foreign.m"
    {
#line 408 "foreign.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__foreign__ModuleInfo_4, &backend_libs__foreign__TypeTable_7);
    }
#line 410 "foreign.m"
    {
#line 410 "foreign.m"
      backend_libs__foreign__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(backend_libs__foreign__Type_5, &backend_libs__foreign__TypeCtor_8);
    }
#line 410 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 411 "foreign.m"
      {
#line 411 "foreign.m"
        backend_libs__foreign__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(backend_libs__foreign__TypeTable_7, backend_libs__foreign__TypeCtor_8, &backend_libs__foreign__TypeDefn_9);
      }
#line 427 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 413 "foreign.m"
      {
#line 413 "foreign.m"
        MR_Word backend_libs__foreign__TypeBody_10;

#line 413 "foreign.m"
        {
#line 413 "foreign.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__foreign__TypeDefn_9, &backend_libs__foreign__TypeBody_10);
        }
#line 419 "foreign.m"
        if (((MR_tag((MR_Word) backend_libs__foreign__TypeBody_10)) == (MR_mktag((MR_Integer) 0))))
#line 415 "foreign.m"
          {
#line 415 "foreign.m"
            MR_Word backend_libs__foreign__ForeignTypeBody_11 = (MR_Word) MR_body(((MR_Word) backend_libs__foreign__TypeBody_10), (MR_Integer) 0);
#line 415 "foreign.m"
            MR_Word backend_libs__foreign__ForeignTypeName_12;
#line 415 "foreign.m"
            MR_Word backend_libs__foreign__Assertions_14;
#line 416 "foreign.m"
            MR_Word backend_libs__foreign__V_13_13;

#line 416 "foreign.m"
            {
#line 416 "foreign.m"
              backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__foreign__ModuleInfo_4, backend_libs__foreign__ForeignTypeBody_11, &backend_libs__foreign__ForeignTypeName_12, &backend_libs__foreign__V_13_13, &backend_libs__foreign__Assertions_14);
            }
#line 418 "foreign.m"
            {
#line 418 "foreign.m"
              backend_libs__foreign__ExportType_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 418 "foreign.m"
              MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__ForeignTypeName_12));
#line 418 "foreign.m"
              MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportType_6, 1) = ((MR_Box) (backend_libs__foreign__Assertions_14));
#line 418 "foreign.m"
            }
#line 415 "foreign.m"
          }
#line 419 "foreign.m"
        else
#line 425 "foreign.m"
          {
#line 425 "foreign.m"
            backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 425 "foreign.m"
            MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
#line 425 "foreign.m"
          }
#line 413 "foreign.m"
      }
#line 427 "foreign.m"
    else
#line 428 "foreign.m"
      {
#line 428 "foreign.m"
        backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 428 "foreign.m"
        MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
#line 428 "foreign.m"
      }
#line 407 "foreign.m"
    return backend_libs__foreign__ExportType_6;
#line 407 "foreign.m"
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
  MR_Word * backend_libs__foreign__Result_3)
#line 53 "foreign.m"
{
#line 384 "foreign.m"
  while (MR_TRUE)
#line 384 "foreign.m"
    {
#line 384 "foreign.m"
      /* tailcall optimized into a loop */
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
            MR_Word backend_libs__foreign__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 0)));
#line 385 "foreign.m"
            MR_Word backend_libs__foreign__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 2)));
#line 385 "foreign.m"
            MR_Word backend_libs__foreign__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 3)));
#line 385 "foreign.m"
            MR_Word backend_libs__foreign__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 4)));
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
#line 384 "foreign.m"
                *backend_libs__foreign__Result_3 = (MR_Integer) 1;
#line 385 "foreign.m"
              }
#line 385 "foreign.m"
            else
#line 384 "foreign.m"
              *backend_libs__foreign__Result_3 = (MR_Integer) 0;
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
              MR_Word backend_libs__foreign__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 0)));
#line 391 "foreign.m"
              MR_Word backend_libs__foreign__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 1)));
#line 391 "foreign.m"
              MR_Word backend_libs__foreign__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 2)));
#line 391 "foreign.m"
              MR_Word backend_libs__foreign__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 4)));
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
#line 390 "foreign.m"
                  *backend_libs__foreign__Result_3 = (MR_Integer) 1;
#line 391 "foreign.m"
                }
#line 391 "foreign.m"
              else
#line 390 "foreign.m"
                *backend_libs__foreign__Result_3 = (MR_Integer) 0;
#line 390 "foreign.m"
            }
#line 384 "foreign.m"
          else
#line 384 "foreign.m"
            if ((backend_libs__foreign__HeadVar__1_1 == (MR_Integer) 5))
#line 392 "foreign.m"
              {
#line 393 "foreign.m"
                MR_Word backend_libs__foreign__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 4)));
#line 393 "foreign.m"
                MR_Word backend_libs__foreign__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 0)));
#line 393 "foreign.m"
                MR_Word backend_libs__foreign__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 1)));
#line 393 "foreign.m"
                MR_Word backend_libs__foreign__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 2)));
#line 393 "foreign.m"
                MR_Word backend_libs__foreign__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 3)));
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
#line 392 "foreign.m"
                    *backend_libs__foreign__Result_3 = (MR_Integer) 1;
#line 393 "foreign.m"
                  }
#line 393 "foreign.m"
                else
#line 392 "foreign.m"
                  *backend_libs__foreign__Result_3 = (MR_Integer) 0;
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
                  MR_Word backend_libs__foreign__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 1)));
#line 387 "foreign.m"
                  MR_Word backend_libs__foreign__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 2)));
#line 387 "foreign.m"
                  MR_Word backend_libs__foreign__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 3)));
#line 387 "foreign.m"
                  MR_Word backend_libs__foreign__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 4)));
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
#line 386 "foreign.m"
                      *backend_libs__foreign__Result_3 = (MR_Integer) 1;
#line 387 "foreign.m"
                    }
#line 387 "foreign.m"
                  else
#line 386 "foreign.m"
                    *backend_libs__foreign__Result_3 = (MR_Integer) 0;
#line 386 "foreign.m"
                }
#line 384 "foreign.m"
              else
#line 384 "foreign.m"
                if ((backend_libs__foreign__HeadVar__1_1 == (MR_Integer) 3))
#line 388 "foreign.m"
                  {
#line 389 "foreign.m"
                    MR_Word backend_libs__foreign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 2)));
#line 389 "foreign.m"
                    MR_Word backend_libs__foreign__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 0)));
#line 389 "foreign.m"
                    MR_Word backend_libs__foreign__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 1)));
#line 389 "foreign.m"
                    MR_Word backend_libs__foreign__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 3)));
#line 389 "foreign.m"
                    MR_Word backend_libs__foreign__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_2, (MR_Integer) 4)));
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
#line 388 "foreign.m"
                        *backend_libs__foreign__Result_3 = (MR_Integer) 1;
#line 389 "foreign.m"
                      }
#line 389 "foreign.m"
                    else
#line 388 "foreign.m"
                      *backend_libs__foreign__Result_3 = (MR_Integer) 0;
#line 388 "foreign.m"
                  }
#line 384 "foreign.m"
                else
#line 394 "foreign.m"
                  {
#line 395 "foreign.m"
                    /* direct tailcall eliminated */
#line 395 "foreign.m"
                    {
#line 395 "foreign.m"
                      backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 395 "foreign.m"
                    }
#line 395 "foreign.m"
                    continue;
#line 394 "foreign.m"
                  }
#line 384 "foreign.m"
      }
#line 384 "foreign.m"
      break;
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
#line 405 "foreign.m"
  {
#line 405 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 405 "foreign.m"
    MR_Word backend_libs__foreign__HeadVar__2_2;

#line 405 "foreign.m"
    {
#line 405 "foreign.m"
      backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 405 "foreign.m"
      MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, 0) = ((MR_Box) (backend_libs__foreign__Type_3));
#line 405 "foreign.m"
    }
#line 405 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 405 "foreign.m"
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
