/*
** Automatically generated from `foreign.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "mdbcomp.sym_name.mih"
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




#line 139 "backend_libs.foreign.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__foreign__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;

#line 142 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0[2];

#line 145 "backend_libs.foreign.c"
static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0;

#line 148 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1[1];

#line 151 "backend_libs.foreign.c"
static const MR_DuFunctorDesc backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1;

#line 154 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0[1];

#line 157 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_1[1];

#line 160 "backend_libs.foreign.c"
static const MR_DuPtagLayout backend_libs__foreign__backend_libs__foreign__du_ptag_ordered_exported_type_0[2];

#line 163 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0[2];

#line 166 "backend_libs.foreign.c"
static const MR_Integer backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0[2];

#line 169 "backend_libs.foreign.c"
static MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0_10001(
#line 172 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_1,
#line 174 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2);

#line 177 "backend_libs.foreign.c"
static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
#line 180 "backend_libs.foreign.c"
  MR_Box * backend_libs__foreign__wrapper_arg_1,
#line 182 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2,
#line 184 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_3);

#line 189 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_exports__189__1_2_p_0(
#line 189 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 189 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_15);

#line 184 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_imports__184__1_2_p_0(
#line 184 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 184 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_13);

#line 179 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_bodys__179__1_2_p_0(
#line 179 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 179 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_13);

#line 174 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_decls__174__1_2_p_0(
#line 174 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 174 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_14);

#line 213 "foreign.m"
static void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(
#line 213 "foreign.m"
  MR_Word backend_libs__foreign__TargetLanguage_7,
#line 213 "foreign.m"
  MR_Word backend_libs__foreign__ForeignLanguage_8,
#line 213 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11,
#line 213 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12,
#line 213 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_13,
#line 213 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_14);

#line 189 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_exports_4_p_0_1(
#line 189 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 189 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);

#line 184 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_imports_4_p_0_1(
#line 184 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 184 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);

#line 179 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0_1(
#line 179 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 179 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);

#line 174 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_decls_4_p_0_1(
#line 174 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 174 "foreign.m"
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



#line 344 "backend_libs.foreign.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__foreign__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0
  }
};

#line 352 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &backend_libs__foreign__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0
};

#line 358 "backend_libs.foreign.c"
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

#line 373 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 378 "backend_libs.foreign.c"
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

#line 393 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0[1] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0
};

#line 398 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_1[1] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1
};

#line 403 "backend_libs.foreign.c"
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

#line 417 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0[2] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0,
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1
};

#line 423 "backend_libs.foreign.c"
static const MR_Integer backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 429 "backend_libs.foreign.c"
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

#line 446 "backend_libs.foreign.c"
static MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0_10001(
#line 449 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_1,
#line 451 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2)
#line 453 "backend_libs.foreign.c"
{
#line 455 "backend_libs.foreign.c"
  {
#line 457 "backend_libs.foreign.c"
    MR_bool backend_libs__foreign__succeeded;

#line 460 "backend_libs.foreign.c"
    {
#line 462 "backend_libs.foreign.c"
      backend_libs__foreign__succeeded = backend_libs__foreign____Unify____exported_type_0_0(((MR_Word) backend_libs__foreign__wrapper_arg_1), ((MR_Word) backend_libs__foreign__wrapper_arg_2));
    }
#line 465 "backend_libs.foreign.c"
    return backend_libs__foreign__succeeded;
#line 467 "backend_libs.foreign.c"
  }
#line 469 "backend_libs.foreign.c"
}

#line 472 "backend_libs.foreign.c"
static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
#line 475 "backend_libs.foreign.c"
  MR_Box * backend_libs__foreign__wrapper_arg_1,
#line 477 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2,
#line 479 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_3)
#line 481 "backend_libs.foreign.c"
{
#line 483 "backend_libs.foreign.c"
  {
#line 485 "backend_libs.foreign.c"
    MR_Word backend_libs__foreign__conv0_HeadVar__1_1;

#line 488 "backend_libs.foreign.c"
    {
#line 490 "backend_libs.foreign.c"
      backend_libs__foreign____Compare____exported_type_0_0(&backend_libs__foreign__conv0_HeadVar__1_1, ((MR_Word) backend_libs__foreign__wrapper_arg_2), ((MR_Word) backend_libs__foreign__wrapper_arg_3));
    }
#line 493 "backend_libs.foreign.c"
    *backend_libs__foreign__wrapper_arg_1 = ((MR_Box) (backend_libs__foreign__conv0_HeadVar__1_1));
#line 495 "backend_libs.foreign.c"
  }
#line 497 "backend_libs.foreign.c"
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
#line 194 "foreign.m"
  {
#line 194 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 194 "foreign.m"
    if ((backend_libs__foreign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "foreign.m"
      {
#line 195 "foreign.m"
        {
#line 195 "foreign.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.extrude_pragma_implementation\'/11", (MR_String) "no suitable target languages available");
#line 195 "foreign.m"
          return;
        }
#line 194 "foreign.m"
      }
#line 194 "foreign.m"
    else
#line 198 "foreign.m"
      {
#line 198 "foreign.m"
        MR_Word backend_libs__foreign__TargetLang_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 198 "foreign.m"
        MR_Word backend_libs__foreign__ForeignLanguage_37;
#line 197 "foreign.m"
        MR_Word backend_libs__foreign__TargetLangs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));

#line 201 "foreign.m"
        {
#line 201 "foreign.m"
          backend_libs__foreign__ForeignLanguage_37 = parse_tree__prog_data__get_foreign_language_1_f_0(backend_libs__foreign__HeadVar__8_8);
        }
#line 205 "foreign.m"
        {
#line 205 "foreign.m"
          backend_libs__foreign__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (backend_libs__foreign__ForeignLanguage_37)), backend_libs__foreign__HeadVar__1_1);
        }
#line 207 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 206 "foreign.m"
          {
#line 206 "foreign.m"
            *backend_libs__foreign__STATE_VARIABLE_Impl_11 = backend_libs__foreign__STATE_VARIABLE_Impl_0_10;
#line 206 "foreign.m"
            *backend_libs__foreign__HeadVar__9_9 = backend_libs__foreign__HeadVar__8_8;
#line 206 "foreign.m"
            *backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7 = backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6;
#line 206 "foreign.m"
          }
#line 207 "foreign.m"
        else
#line 208 "foreign.m"
          {
#line 208 "foreign.m"
            {
#line 208 "foreign.m"
              parse_tree__prog_data__set_foreign_language_3_p_0(backend_libs__foreign__TargetLang_28, backend_libs__foreign__HeadVar__8_8, backend_libs__foreign__HeadVar__9_9);
            }
#line 209 "foreign.m"
            {
#line 209 "foreign.m"
              backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(backend_libs__foreign__TargetLang_28, backend_libs__foreign__ForeignLanguage_37, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7, backend_libs__foreign__STATE_VARIABLE_Impl_0_10, backend_libs__foreign__STATE_VARIABLE_Impl_11);
#line 209 "foreign.m"
              return;
            }
#line 208 "foreign.m"
          }
#line 198 "foreign.m"
      }
#line 194 "foreign.m"
  }
#line 136 "foreign.m"
}

#line 189 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_exports__189__1_2_p_0(
#line 189 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 189 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_15)
#line 189 "foreign.m"
{
#line 189 "foreign.m"
  {
#line 189 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 189 "foreign.m"
    MR_Word backend_libs__foreign__Lang_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 0)));
#line 189 "foreign.m"
    MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 1)));
#line 189 "foreign.m"
    MR_Integer backend_libs__foreign__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 2)));
#line 189 "foreign.m"
    MR_String backend_libs__foreign__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 3)));
#line 189 "foreign.m"
    MR_Word backend_libs__foreign__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_15, (MR_Integer) 4)));

#line 190 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_20);
#line 189 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 189 "foreign.m"
  }
#line 189 "foreign.m"
}

#line 184 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_imports__184__1_2_p_0(
#line 184 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 184 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_13)
#line 184 "foreign.m"
{
#line 184 "foreign.m"
  {
#line 184 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 184 "foreign.m"
    MR_Word backend_libs__foreign__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 0)));
#line 184 "foreign.m"
    MR_Word backend_libs__foreign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 1)));
#line 184 "foreign.m"
    MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 2)));

#line 185 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_16);
#line 184 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 184 "foreign.m"
  }
#line 184 "foreign.m"
}

#line 179 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_bodys__179__1_2_p_0(
#line 179 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 179 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_13)
#line 179 "foreign.m"
{
#line 179 "foreign.m"
  {
#line 179 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 179 "foreign.m"
    MR_Word backend_libs__foreign__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 0)));
#line 179 "foreign.m"
    MR_Word backend_libs__foreign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 1)));
#line 179 "foreign.m"
    MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_13, (MR_Integer) 2)));

#line 180 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_16);
#line 179 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 179 "foreign.m"
  }
#line 179 "foreign.m"
}

#line 174 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_decls__174__1_2_p_0(
#line 174 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 174 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_14)
#line 174 "foreign.m"
{
#line 174 "foreign.m"
  {
#line 174 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 174 "foreign.m"
    MR_Word backend_libs__foreign__Lang_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 0)));
#line 174 "foreign.m"
    MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 1)));
#line 174 "foreign.m"
    MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 2)));
#line 174 "foreign.m"
    MR_Word backend_libs__foreign__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_14, (MR_Integer) 3)));

#line 175 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_18);
#line 174 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 174 "foreign.m"
  }
#line 174 "foreign.m"
}

#line 355 "foreign.m"
void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0(
#line 355 "foreign.m"
  MR_Word * backend_libs__foreign__HeadVar__1_1,
#line 355 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_2,
#line 355 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__3_3)
#line 355 "foreign.m"
{
#line 355 "foreign.m"
  {
#line 355 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 355 "foreign.m"
    MR_Integer backend_libs__foreign__CastX_17 = (MR_Integer) backend_libs__foreign__HeadVar__2_2;
#line 355 "foreign.m"
    MR_Integer backend_libs__foreign__CastY_18 = (MR_Integer) backend_libs__foreign__HeadVar__3_3;

#line 355 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__CastX_17 == backend_libs__foreign__CastY_18);
#line 355 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 741 "backend_libs.foreign.c"
      *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 355 "foreign.m"
    else
#line 355 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 355 "foreign.m"
      {
#line 355 "foreign.m"
        MR_Word backend_libs__foreign__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 355 "foreign.m"
        MR_Word backend_libs__foreign__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));

#line 355 "foreign.m"
        if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 355 "foreign.m"
          {
#line 355 "foreign.m"
            MR_Word backend_libs__foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 355 "foreign.m"
            MR_Word backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 355 "foreign.m"
            MR_Word backend_libs__foreign__V_8_8;

#line 355 "foreign.m"
            {
#line 355 "foreign.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&backend_libs__foreign__V_8_8, backend_libs__foreign__V_23_23, backend_libs__foreign__V_6_6);
            }
#line 770 "backend_libs.foreign.c"
            backend_libs__foreign__succeeded = (backend_libs__foreign__V_8_8 == (MR_Integer) 0);
#line 355 "foreign.m"
            backend_libs__foreign__succeeded = !(backend_libs__foreign__succeeded);
#line 355 "foreign.m"
            if (backend_libs__foreign__succeeded)
#line 355 "foreign.m"
              *backend_libs__foreign__HeadVar__1_1 = backend_libs__foreign__V_8_8;
#line 355 "foreign.m"
            else
#line 355 "foreign.m"
              {
#line 355 "foreign.m"
                {
#line 355 "foreign.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__foreign_scalar_common_1[0], backend_libs__foreign__HeadVar__1_1, ((MR_Box) (backend_libs__foreign__V_22_22)), ((MR_Box) (backend_libs__foreign__V_7_7)));
#line 355 "foreign.m"
                  return;
                }
#line 355 "foreign.m"
              }
#line 355 "foreign.m"
          }
#line 355 "foreign.m"
        else
#line 795 "backend_libs.foreign.c"
          *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 1;
#line 355 "foreign.m"
      }
#line 355 "foreign.m"
    else
#line 355 "foreign.m"
      {
#line 355 "foreign.m"
        MR_Word backend_libs__foreign__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));

#line 355 "foreign.m"
        if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 808 "backend_libs.foreign.c"
          *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 2;
#line 355 "foreign.m"
        else
#line 355 "foreign.m"
          {
#line 355 "foreign.m"
            MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 0)));

#line 355 "foreign.m"
            {
#line 355 "foreign.m"
              parse_tree__prog_data____Compare____mer_type_0_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__V_24_24, backend_libs__foreign__V_16_16);
#line 355 "foreign.m"
              return;
            }
#line 355 "foreign.m"
          }
#line 355 "foreign.m"
      }
#line 355 "foreign.m"
  }
#line 355 "foreign.m"
}

#line 355 "foreign.m"
MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0(
#line 355 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1,
#line 355 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_2)
#line 355 "foreign.m"
{
#line 355 "foreign.m"
  {
#line 355 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 355 "foreign.m"
    MR_Integer backend_libs__foreign__CastX_9 = (MR_Integer) backend_libs__foreign__HeadVar__1_1;
#line 355 "foreign.m"
    MR_Integer backend_libs__foreign__CastY_10 = (MR_Integer) backend_libs__foreign__HeadVar__2_2;

#line 355 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__CastX_9 == backend_libs__foreign__CastY_10);
#line 355 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 355 "foreign.m"
      backend_libs__foreign__succeeded = MR_TRUE;
#line 355 "foreign.m"
    else
#line 355 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 355 "foreign.m"
      {
#line 355 "foreign.m"
        MR_Word backend_libs__foreign__TypeInfo_12_12;
#line 355 "foreign.m"
        MR_Word backend_libs__foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 355 "foreign.m"
        MR_Word backend_libs__foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 355 "foreign.m"
        MR_Word backend_libs__foreign__V_5_5;
#line 355 "foreign.m"
        MR_Word backend_libs__foreign__V_6_6;

#line 355 "foreign.m"
        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 355 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 355 "foreign.m"
          {
#line 355 "foreign.m"
            backend_libs__foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 355 "foreign.m"
            backend_libs__foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 884 "backend_libs.foreign.c"
            {
#line 886 "backend_libs.foreign.c"
              backend_libs__foreign__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__foreign__V_3_3, backend_libs__foreign__V_5_5);
            }
#line 355 "foreign.m"
            if (backend_libs__foreign__succeeded)
#line 355 "foreign.m"
              {
#line 893 "backend_libs.foreign.c"
                backend_libs__foreign__TypeInfo_12_12 = (MR_Word) &backend_libs__foreign_scalar_common_1[0];
#line 895 "backend_libs.foreign.c"
                {
#line 897 "backend_libs.foreign.c"
                  return backend_libs__foreign__succeeded = mercury__builtin__unify_2_p_0(backend_libs__foreign__TypeInfo_12_12, ((MR_Box) (backend_libs__foreign__V_4_4)), ((MR_Box) (backend_libs__foreign__V_6_6)));
                }
#line 355 "foreign.m"
              }
#line 355 "foreign.m"
          }
#line 355 "foreign.m"
      }
#line 355 "foreign.m"
    else
#line 355 "foreign.m"
      {
#line 355 "foreign.m"
        MR_Word backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 355 "foreign.m"
        MR_Word backend_libs__foreign__V_8_8;

#line 355 "foreign.m"
        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 355 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 355 "foreign.m"
          {
#line 355 "foreign.m"
            backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 923 "backend_libs.foreign.c"
            {
#line 925 "backend_libs.foreign.c"
              return backend_libs__foreign__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(backend_libs__foreign__V_7_7, backend_libs__foreign__V_8_8);
            }
#line 355 "foreign.m"
          }
#line 355 "foreign.m"
      }
#line 355 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 355 "foreign.m"
  }
#line 355 "foreign.m"
}

#line 213 "foreign.m"
static void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(
#line 213 "foreign.m"
  MR_Word backend_libs__foreign__TargetLanguage_7,
#line 213 "foreign.m"
  MR_Word backend_libs__foreign__ForeignLanguage_8,
#line 213 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11,
#line 213 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12,
#line 213 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_13,
#line 213 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_14)
#line 213 "foreign.m"
{
#line 219 "foreign.m"
  {
#line 219 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 237 "foreign.m"
    if ((backend_libs__foreign__TargetLanguage_7 == (MR_Integer) 0))
#line 229 "foreign.m"
      if ((backend_libs__foreign__ForeignLanguage_8 == (MR_Integer) 0))
#line 228 "foreign.m"
        {
#line 228 "foreign.m"
        }
#line 229 "foreign.m"
      else
#line 290 "foreign.m"
        {
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_19_19;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_21_21;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_22_22;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_23_23;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_25_25;

#line 292 "foreign.m"
          {
#line 292 "foreign.m"
            backend_libs__foreign__V_22_22 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
          }
#line 293 "foreign.m"
          {
#line 293 "foreign.m"
            backend_libs__foreign__V_25_25 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
          }
#line 293 "foreign.m"
          {
#line 293 "foreign.m"
            backend_libs__foreign__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_25_25);
          }
#line 292 "foreign.m"
          {
#line 292 "foreign.m"
            backend_libs__foreign__V_21_21 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_22_22, backend_libs__foreign__V_23_23);
          }
#line 292 "foreign.m"
          {
#line 292 "foreign.m"
            backend_libs__foreign__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_21_21);
          }
#line 291 "foreign.m"
          {
#line 291 "foreign.m"
            mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_19_19);
#line 291 "foreign.m"
            return;
          }
#line 290 "foreign.m"
        }
#line 237 "foreign.m"
    else
#line 237 "foreign.m"
    if ((backend_libs__foreign__TargetLanguage_7 == (MR_Integer) 1))
#line 241 "foreign.m"
      if ((backend_libs__foreign__ForeignLanguage_8 == (MR_Integer) 1))
#line 240 "foreign.m"
        {
#line 240 "foreign.m"
        }
#line 241 "foreign.m"
      else
#line 290 "foreign.m"
        {
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_30_30;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_32_32;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_33_33;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_34_34;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_36_36;

#line 292 "foreign.m"
          {
#line 292 "foreign.m"
            backend_libs__foreign__V_33_33 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
          }
#line 293 "foreign.m"
          {
#line 293 "foreign.m"
            backend_libs__foreign__V_36_36 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
          }
#line 293 "foreign.m"
          {
#line 293 "foreign.m"
            backend_libs__foreign__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_36_36);
          }
#line 292 "foreign.m"
          {
#line 292 "foreign.m"
            backend_libs__foreign__V_32_32 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_33_33, backend_libs__foreign__V_34_34);
          }
#line 292 "foreign.m"
          {
#line 292 "foreign.m"
            backend_libs__foreign__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_32_32);
          }
#line 291 "foreign.m"
          {
#line 291 "foreign.m"
            mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_30_30);
#line 291 "foreign.m"
            return;
          }
#line 290 "foreign.m"
        }
#line 237 "foreign.m"
    else
#line 237 "foreign.m"
    if ((backend_libs__foreign__TargetLanguage_7 == (MR_Integer) 4))
#line 277 "foreign.m"
      if ((backend_libs__foreign__ForeignLanguage_8 == (MR_Integer) 4))
#line 276 "foreign.m"
        {
#line 276 "foreign.m"
        }
#line 277 "foreign.m"
      else
#line 290 "foreign.m"
        {
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_41_41;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_43_43;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_44_44;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_45_45;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_47_47;

#line 292 "foreign.m"
          {
#line 292 "foreign.m"
            backend_libs__foreign__V_44_44 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
          }
#line 293 "foreign.m"
          {
#line 293 "foreign.m"
            backend_libs__foreign__V_47_47 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
          }
#line 293 "foreign.m"
          {
#line 293 "foreign.m"
            backend_libs__foreign__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_47_47);
          }
#line 292 "foreign.m"
          {
#line 292 "foreign.m"
            backend_libs__foreign__V_43_43 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_44_44, backend_libs__foreign__V_45_45);
          }
#line 292 "foreign.m"
          {
#line 292 "foreign.m"
            backend_libs__foreign__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_43_43);
          }
#line 291 "foreign.m"
          {
#line 291 "foreign.m"
            mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_41_41);
#line 291 "foreign.m"
            return;
          }
#line 290 "foreign.m"
        }
#line 237 "foreign.m"
    else
#line 237 "foreign.m"
    if ((backend_libs__foreign__TargetLanguage_7 == (MR_Integer) 3))
#line 253 "foreign.m"
      if ((backend_libs__foreign__ForeignLanguage_8 == (MR_Integer) 3))
#line 252 "foreign.m"
        {
#line 252 "foreign.m"
        }
#line 253 "foreign.m"
      else
#line 290 "foreign.m"
        {
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_52_52;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_54_54;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_55_55;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_56_56;
#line 290 "foreign.m"
          MR_String backend_libs__foreign__V_58_58;

#line 292 "foreign.m"
          {
#line 292 "foreign.m"
            backend_libs__foreign__V_55_55 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
          }
#line 293 "foreign.m"
          {
#line 293 "foreign.m"
            backend_libs__foreign__V_58_58 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
          }
#line 293 "foreign.m"
          {
#line 293 "foreign.m"
            backend_libs__foreign__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_58_58);
          }
#line 292 "foreign.m"
          {
#line 292 "foreign.m"
            backend_libs__foreign__V_54_54 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_55_55, backend_libs__foreign__V_56_56);
          }
#line 292 "foreign.m"
          {
#line 292 "foreign.m"
            backend_libs__foreign__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_54_54);
          }
#line 291 "foreign.m"
          {
#line 291 "foreign.m"
            mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_52_52);
#line 291 "foreign.m"
            return;
          }
#line 290 "foreign.m"
        }
#line 237 "foreign.m"
    else
#line 265 "foreign.m"
    if ((backend_libs__foreign__ForeignLanguage_8 == (MR_Integer) 2))
#line 264 "foreign.m"
      {
#line 264 "foreign.m"
      }
#line 265 "foreign.m"
    else
#line 290 "foreign.m"
      {
#line 290 "foreign.m"
        MR_String backend_libs__foreign__V_63_63;
#line 290 "foreign.m"
        MR_String backend_libs__foreign__V_65_65;
#line 290 "foreign.m"
        MR_String backend_libs__foreign__V_66_66;
#line 290 "foreign.m"
        MR_String backend_libs__foreign__V_67_67;
#line 290 "foreign.m"
        MR_String backend_libs__foreign__V_69_69;

#line 292 "foreign.m"
        {
#line 292 "foreign.m"
          backend_libs__foreign__V_66_66 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
        }
#line 293 "foreign.m"
        {
#line 293 "foreign.m"
          backend_libs__foreign__V_69_69 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
        }
#line 293 "foreign.m"
        {
#line 293 "foreign.m"
          backend_libs__foreign__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_69_69);
        }
#line 292 "foreign.m"
        {
#line 292 "foreign.m"
          backend_libs__foreign__V_65_65 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_66_66, backend_libs__foreign__V_67_67);
        }
#line 292 "foreign.m"
        {
#line 292 "foreign.m"
          backend_libs__foreign__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_65_65);
        }
#line 291 "foreign.m"
        {
#line 291 "foreign.m"
          mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_63_63);
#line 291 "foreign.m"
          return;
        }
#line 290 "foreign.m"
      }
#line 219 "foreign.m"
    *backend_libs__foreign__STATE_VARIABLE_Impl_14 = backend_libs__foreign__STATE_VARIABLE_Impl_0_13;
#line 219 "foreign.m"
    *backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12 = backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11;
#line 219 "foreign.m"
  }
#line 213 "foreign.m"
}

#line 145 "foreign.m"
MR_String MR_CALL 
backend_libs__foreign__decl_guard_1_f_0(
#line 145 "foreign.m"
  MR_Word backend_libs__foreign__ModuleName_3)
#line 145 "foreign.m"
{
#line 601 "foreign.m"
  {
#line 601 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 601 "foreign.m"
    MR_String backend_libs__foreign__HeadVar__2_2;
#line 601 "foreign.m"
    MR_String backend_libs__foreign__UppercaseModuleName_4;
#line 601 "foreign.m"
    MR_String backend_libs__foreign__MangledModuleName_5;

#line 602 "foreign.m"
    {
#line 602 "foreign.m"
      backend_libs__foreign__MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__foreign__ModuleName_3);
    }
#line 603 "foreign.m"
    {
#line 603 "foreign.m"
      mercury__string__to_upper_2_p_0(backend_libs__foreign__MangledModuleName_5, &backend_libs__foreign__UppercaseModuleName_4);
    }
#line 601 "foreign.m"
    {
#line 601 "foreign.m"
      return backend_libs__foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__UppercaseModuleName_4, (MR_String) "_DECL_GUARD");
    }
#line 601 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 601 "foreign.m"
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
#line 194 "foreign.m"
  {
#line 194 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 194 "foreign.m"
    {
#line 194 "foreign.m"
      backend_libs__foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_p_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7, backend_libs__foreign__HeadVar__8_8, backend_libs__foreign__HeadVar__9_9, backend_libs__foreign__STATE_VARIABLE_Impl_0_10, backend_libs__foreign__STATE_VARIABLE_Impl_11);
#line 194 "foreign.m"
      return;
    }
#line 194 "foreign.m"
  }
#line 136 "foreign.m"
}

#line 189 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_exports_4_p_0_1(
#line 189 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 189 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 189 "foreign.m"
{
#line 189 "foreign.m"
  {
#line 189 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 189 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 189 "foreign.m"
    {
#line 189 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_exports__189__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 189 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 189 "foreign.m"
  }
#line 189 "foreign.m"
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
#line 188 "foreign.m"
  {
#line 188 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 188 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 189 "foreign.m"
    {
#line 189 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 189 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[3]));
#line 189 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_exports_4_p_0_1));
#line 189 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 189 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 189 "foreign.m"
    }
#line 191 "foreign.m"
    {
#line 191 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Exports0_6, backend_libs__foreign__LangExports_7, backend_libs__foreign__NotLangExports_8);
#line 191 "foreign.m"
      return;
    }
#line 188 "foreign.m"
  }
#line 119 "foreign.m"
}

#line 184 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_imports_4_p_0_1(
#line 184 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 184 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 184 "foreign.m"
{
#line 184 "foreign.m"
  {
#line 184 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 184 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 184 "foreign.m"
    {
#line 184 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_imports__184__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 184 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 184 "foreign.m"
  }
#line 184 "foreign.m"
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
#line 183 "foreign.m"
  {
#line 183 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 183 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 184 "foreign.m"
    {
#line 184 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 184 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[2]));
#line 184 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_imports_4_p_0_1));
#line 184 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 184 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 184 "foreign.m"
    }
#line 186 "foreign.m"
    {
#line 186 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Imports0_6, backend_libs__foreign__LangImports_7, backend_libs__foreign__NotLangImports_8);
#line 186 "foreign.m"
      return;
    }
#line 183 "foreign.m"
  }
#line 110 "foreign.m"
}

#line 179 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0_1(
#line 179 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 179 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 179 "foreign.m"
{
#line 179 "foreign.m"
  {
#line 179 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 179 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 179 "foreign.m"
    {
#line 179 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_bodys__179__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 179 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 179 "foreign.m"
  }
#line 179 "foreign.m"
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
#line 178 "foreign.m"
  {
#line 178 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 178 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 179 "foreign.m"
    {
#line 179 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 179 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[1]));
#line 179 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_bodys_4_p_0_1));
#line 179 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 179 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 179 "foreign.m"
    }
#line 181 "foreign.m"
    {
#line 181 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Bodys0_6, backend_libs__foreign__LangBodys_7, backend_libs__foreign__NotLangBodys_8);
#line 181 "foreign.m"
      return;
    }
#line 178 "foreign.m"
  }
#line 103 "foreign.m"
}

#line 174 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_decls_4_p_0_1(
#line 174 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 174 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 174 "foreign.m"
{
#line 174 "foreign.m"
  {
#line 174 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 174 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 174 "foreign.m"
    {
#line 174 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_decls__174__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 174 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 174 "foreign.m"
  }
#line 174 "foreign.m"
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
#line 173 "foreign.m"
  {
#line 173 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 173 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 174 "foreign.m"
    {
#line 174 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 174 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[0]));
#line 174 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_decls_4_p_0_1));
#line 174 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 174 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 174 "foreign.m"
    }
#line 176 "foreign.m"
    {
#line 176 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Decls0_6, backend_libs__foreign__LangDecls_7, backend_libs__foreign__NotLangDecls_8);
#line 176 "foreign.m"
      return;
    }
#line 173 "foreign.m"
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
#line 464 "foreign.m"
  {
#line 464 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 464 "foreign.m"
    MR_String backend_libs__foreign__HeadVar__4_4;
#line 464 "foreign.m"
    MR_Word backend_libs__foreign__V_8_8;

#line 465 "foreign.m"
    {
#line 465 "foreign.m"
      backend_libs__foreign__V_8_8 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__foreign__ModuleInfo_5, backend_libs__foreign__Type_7);
    }
#line 465 "foreign.m"
    {
#line 465 "foreign.m"
      return backend_libs__foreign__HeadVar__4_4 = backend_libs__foreign__exported_type_to_string_2_f_0(backend_libs__foreign__Lang_6, backend_libs__foreign__V_8_8);
    }
#line 464 "foreign.m"
    return backend_libs__foreign__HeadVar__4_4;
#line 464 "foreign.m"
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
#line 469 "foreign.m"
  {
#line 469 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 469 "foreign.m"
    MR_String backend_libs__foreign__Result_6;

#line 469 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__ExportedType_5)) == (MR_mktag((MR_Integer) 0))))
#line 469 "foreign.m"
      {
#line 469 "foreign.m"
        MR_Word backend_libs__foreign__ForeignType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportedType_5, (MR_Integer) 0)));
#line 469 "foreign.m"
        MR_Word backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportedType_5, (MR_Integer) 1)));

#line 479 "foreign.m"
        if ((backend_libs__foreign__Lang_4 == (MR_Integer) 0))
#line 475 "foreign.m"
          if (((MR_tag((MR_Word) backend_libs__foreign__ForeignType_7)) == (MR_mktag((MR_Integer) 1))))
#line 476 "foreign.m"
            {
#line 477 "foreign.m"
              {
#line 477 "foreign.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "qualified C type");
              }
#line 476 "foreign.m"
            }
#line 475 "foreign.m"
          else
#line 473 "foreign.m"
            backend_libs__foreign__Result_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignType_7, (MR_Integer) 0)));
#line 479 "foreign.m"
        else
#line 485 "foreign.m"
          {
#line 485 "foreign.m"
            return backend_libs__foreign__Result_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(backend_libs__foreign__ForeignType_7);
          }
#line 469 "foreign.m"
      }
#line 469 "foreign.m"
    else
#line 488 "foreign.m"
      {
#line 488 "foreign.m"
        MR_Word backend_libs__foreign__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportedType_5, (MR_Integer) 0)));

#line 532 "foreign.m"
        if ((backend_libs__foreign__Lang_4 == (MR_Integer) 0))
#line 514 "foreign.m"
          if (((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 2))))
#line 500 "foreign.m"
            {
#line 500 "foreign.m"
              MR_Word backend_libs__foreign__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 504 "foreign.m"
              if ((backend_libs__foreign__BuiltinType_13 == (MR_Integer) 3))
#line 512 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "MR_Char";
#line 504 "foreign.m"
              else
#line 504 "foreign.m"
              if ((backend_libs__foreign__BuiltinType_13 == (MR_Integer) 1))
#line 506 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "MR_Float";
#line 504 "foreign.m"
              else
#line 504 "foreign.m"
              if ((backend_libs__foreign__BuiltinType_13 == (MR_Integer) 0))
#line 503 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "MR_Integer";
#line 504 "foreign.m"
              else
#line 509 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "MR_String";
#line 500 "foreign.m"
            }
#line 514 "foreign.m"
          else
#line 514 "foreign.m"
          if (((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 0))))
#line 527 "foreign.m"
            backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
#line 514 "foreign.m"
          else
#line 514 "foreign.m"
          if (((((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__foreign__Type_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 529 "foreign.m"
            {
#line 530 "foreign.m"
              {
#line 530 "foreign.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "kinded type");
              }
#line 529 "foreign.m"
            }
#line 514 "foreign.m"
          else
#line 514 "foreign.m"
          if (((((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__foreign__Type_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 516 "foreign.m"
            backend_libs__foreign__Result_6 = (MR_String) "MR_Tuple";
#line 514 "foreign.m"
          else
#line 524 "foreign.m"
            backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
#line 532 "foreign.m"
        else
#line 532 "foreign.m"
        if ((backend_libs__foreign__Lang_4 == (MR_Integer) 1))
#line 549 "foreign.m"
          if (((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 2))))
#line 535 "foreign.m"
            {
#line 535 "foreign.m"
              MR_Word backend_libs__foreign__BuiltinType_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 539 "foreign.m"
              if ((backend_libs__foreign__BuiltinType_74 == (MR_Integer) 3))
#line 547 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "char";
#line 539 "foreign.m"
              else
#line 539 "foreign.m"
              if ((backend_libs__foreign__BuiltinType_74 == (MR_Integer) 1))
#line 541 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "double";
#line 539 "foreign.m"
              else
#line 539 "foreign.m"
              if ((backend_libs__foreign__BuiltinType_74 == (MR_Integer) 0))
#line 538 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "int";
#line 539 "foreign.m"
              else
#line 544 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "string";
#line 535 "foreign.m"
            }
#line 549 "foreign.m"
          else
#line 559 "foreign.m"
            backend_libs__foreign__Result_6 = (MR_String) "object";
#line 532 "foreign.m"
        else
#line 532 "foreign.m"
        if ((backend_libs__foreign__Lang_4 == (MR_Integer) 4))
#line 594 "foreign.m"
          {
#line 595 "foreign.m"
            {
#line 595 "foreign.m"
              mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "erlang");
            }
#line 594 "foreign.m"
          }
#line 532 "foreign.m"
        else
#line 532 "foreign.m"
        if ((backend_libs__foreign__Lang_4 == (MR_Integer) 3))
#line 591 "foreign.m"
          {
#line 592 "foreign.m"
            {
#line 592 "foreign.m"
              mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "il");
            }
#line 591 "foreign.m"
          }
#line 532 "foreign.m"
        else
#line 578 "foreign.m"
        if (((MR_tag((MR_Word) backend_libs__foreign__Type_12)) == (MR_mktag((MR_Integer) 2))))
#line 564 "foreign.m"
          {
#line 564 "foreign.m"
            MR_Word backend_libs__foreign__BuiltinType_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 568 "foreign.m"
            if ((backend_libs__foreign__BuiltinType_77 == (MR_Integer) 3))
#line 576 "foreign.m"
              backend_libs__foreign__Result_6 = (MR_String) "char";
#line 568 "foreign.m"
            else
#line 568 "foreign.m"
            if ((backend_libs__foreign__BuiltinType_77 == (MR_Integer) 1))
#line 570 "foreign.m"
              backend_libs__foreign__Result_6 = (MR_String) "double";
#line 568 "foreign.m"
            else
#line 568 "foreign.m"
            if ((backend_libs__foreign__BuiltinType_77 == (MR_Integer) 0))
#line 567 "foreign.m"
              backend_libs__foreign__Result_6 = (MR_String) "int";
#line 568 "foreign.m"
            else
#line 573 "foreign.m"
              backend_libs__foreign__Result_6 = (MR_String) "java.lang.String";
#line 564 "foreign.m"
          }
#line 578 "foreign.m"
        else
#line 588 "foreign.m"
          backend_libs__foreign__Result_6 = (MR_String) "java.lang.Object";
#line 488 "foreign.m"
      }
#line 469 "foreign.m"
    return backend_libs__foreign__Result_6;
#line 469 "foreign.m"
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
#line 461 "foreign.m"
  {
#line 461 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 461 "foreign.m"
    MR_Word backend_libs__foreign__HeadVar__2_2;

#line 461 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 461 "foreign.m"
      {
#line 461 "foreign.m"
        MR_Word backend_libs__foreign__Assertions_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 461 "foreign.m"
        MR_Word backend_libs__foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));

#line 461 "foreign.m"
        {
#line 461 "foreign.m"
          backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 461 "foreign.m"
          MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, 0) = ((MR_Box) (backend_libs__foreign__Assertions_4));
#line 461 "foreign.m"
        }
#line 461 "foreign.m"
      }
#line 461 "foreign.m"
    else
#line 462 "foreign.m"
      backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 461 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 461 "foreign.m"
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
#line 396 "foreign.m"
  {
#line 396 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 396 "foreign.m"
    MR_Word backend_libs__foreign__MaybeIL_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 0)));
#line 396 "foreign.m"
    MR_Word backend_libs__foreign__MaybeC_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 1)));
#line 396 "foreign.m"
    MR_Word backend_libs__foreign__MaybeJava_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 2)));
#line 396 "foreign.m"
    MR_Word backend_libs__foreign__MaybeCSharp_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 3)));
#line 396 "foreign.m"
    MR_Word backend_libs__foreign__MaybeErlang_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 4)));
#line 396 "foreign.m"
    MR_Word backend_libs__foreign__Globals_16;
#line 396 "foreign.m"
    MR_Word backend_libs__foreign__Target_17;

#line 403 "foreign.m"
    {
#line 403 "foreign.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__foreign__ModuleInfo_6, &backend_libs__foreign__Globals_16);
    }
#line 404 "foreign.m"
    {
#line 404 "foreign.m"
      libs__globals__get_target_2_p_0(backend_libs__foreign__Globals_16, &backend_libs__foreign__Target_17);
    }
#line 416 "foreign.m"
    if ((backend_libs__foreign__Target_17 == (MR_Integer) 0))
#line 412 "foreign.m"
      if ((backend_libs__foreign__MaybeC_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "foreign.m"
        {
#line 414 "foreign.m"
          {
#line 414 "foreign.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C type");
#line 414 "foreign.m"
            return;
          }
#line 413 "foreign.m"
        }
#line 412 "foreign.m"
      else
#line 408 "foreign.m"
        {
#line 408 "foreign.m"
          MR_Word backend_libs__foreign__Data_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeC_12, (MR_Integer) 0)));
#line 408 "foreign.m"
          MR_String backend_libs__foreign__NameStr_19;
#line 408 "foreign.m"
          MR_Word backend_libs__foreign__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_18, (MR_Integer) 0)));

#line 409 "foreign.m"
          *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_18, (MR_Integer) 1)));
#line 409 "foreign.m"
          *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_18, (MR_Integer) 2)));
#line 409 "foreign.m"
          backend_libs__foreign__NameStr_19 = (MR_String) backend_libs__foreign__V_42_42;
#line 411 "foreign.m"
          {
#line 411 "foreign.m"
            MR_Word base;
#line 411 "foreign.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 411 "foreign.m"
            *backend_libs__foreign__Name_8 = base;
#line 411 "foreign.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_19));
#line 411 "foreign.m"
          }
#line 408 "foreign.m"
        }
#line 416 "foreign.m"
    else
#line 416 "foreign.m"
    if ((backend_libs__foreign__Target_17 == (MR_Integer) 2))
#line 433 "foreign.m"
      if ((backend_libs__foreign__MaybeCSharp_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "foreign.m"
        {
#line 435 "foreign.m"
          {
#line 435 "foreign.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C# type");
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
          MR_Word backend_libs__foreign__V_34_34;
#line 429 "foreign.m"
          MR_Word backend_libs__foreign__Data_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeCSharp_14, (MR_Integer) 0)));
#line 429 "foreign.m"
          MR_String backend_libs__foreign__NameStr_47;

#line 430 "foreign.m"
          backend_libs__foreign__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_46, (MR_Integer) 0)));
#line 430 "foreign.m"
          *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_46, (MR_Integer) 1)));
#line 430 "foreign.m"
          *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_46, (MR_Integer) 2)));
#line 430 "foreign.m"
          backend_libs__foreign__NameStr_47 = (MR_String) backend_libs__foreign__V_34_34;
#line 432 "foreign.m"
          {
#line 432 "foreign.m"
            MR_Word base;
#line 432 "foreign.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 432 "foreign.m"
            *backend_libs__foreign__Name_8 = base;
#line 432 "foreign.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_47));
#line 432 "foreign.m"
          }
#line 429 "foreign.m"
        }
#line 416 "foreign.m"
    else
#line 416 "foreign.m"
    if ((backend_libs__foreign__Target_17 == (MR_Integer) 4))
#line 455 "foreign.m"
      if ((backend_libs__foreign__MaybeErlang_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 456 "foreign.m"
        {
#line 457 "foreign.m"
          {
#line 457 "foreign.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Erlang type");
#line 457 "foreign.m"
            return;
          }
#line 456 "foreign.m"
        }
#line 455 "foreign.m"
      else
#line 451 "foreign.m"
        {
#line 451 "foreign.m"
          MR_Word backend_libs__foreign__Data_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeErlang_15, (MR_Integer) 0)));

#line 452 "foreign.m"
          *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_58, (MR_Integer) 1)));
#line 452 "foreign.m"
          *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_58, (MR_Integer) 2)));
#line 454 "foreign.m"
          *backend_libs__foreign__Name_8 = (MR_Word) &backend_libs__foreign_scalar_common_2[0];
#line 451 "foreign.m"
        }
#line 416 "foreign.m"
    else
#line 416 "foreign.m"
    if ((backend_libs__foreign__Target_17 == (MR_Integer) 1))
#line 422 "foreign.m"
      if ((backend_libs__foreign__MaybeIL_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "foreign.m"
        {
#line 424 "foreign.m"
          {
#line 424 "foreign.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no IL type");
#line 424 "foreign.m"
            return;
          }
#line 423 "foreign.m"
        }
#line 422 "foreign.m"
      else
#line 419 "foreign.m"
        {
#line 419 "foreign.m"
          MR_Word backend_libs__foreign__V_38_38;
#line 419 "foreign.m"
          MR_Word backend_libs__foreign__Data_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeIL_11, (MR_Integer) 0)));
#line 420 "foreign.m"
          MR_Word backend_libs__foreign__V_20_20;
#line 420 "foreign.m"
          MR_String backend_libs__foreign__V_21_21;

#line 420 "foreign.m"
          backend_libs__foreign__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_43, (MR_Integer) 0)));
#line 420 "foreign.m"
          *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_43, (MR_Integer) 1)));
#line 420 "foreign.m"
          *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_43, (MR_Integer) 2)));
#line 420 "foreign.m"
          backend_libs__foreign__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__V_38_38, (MR_Integer) 0)));
#line 420 "foreign.m"
          backend_libs__foreign__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__V_38_38, (MR_Integer) 1)));
#line 420 "foreign.m"
          *backend_libs__foreign__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__V_38_38, (MR_Integer) 2)));
#line 419 "foreign.m"
        }
#line 416 "foreign.m"
    else
#line 444 "foreign.m"
    if ((backend_libs__foreign__MaybeJava_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "foreign.m"
      {
#line 446 "foreign.m"
        {
#line 446 "foreign.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Java type");
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
        MR_Word backend_libs__foreign__V_30_30;
#line 440 "foreign.m"
        MR_Word backend_libs__foreign__Data_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeJava_13, (MR_Integer) 0)));
#line 440 "foreign.m"
        MR_String backend_libs__foreign__NameStr_53;

#line 441 "foreign.m"
        backend_libs__foreign__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_52, (MR_Integer) 0)));
#line 441 "foreign.m"
        *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_52, (MR_Integer) 1)));
#line 441 "foreign.m"
        *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_52, (MR_Integer) 2)));
#line 441 "foreign.m"
        backend_libs__foreign__NameStr_53 = (MR_String) backend_libs__foreign__V_30_30;
#line 443 "foreign.m"
        {
#line 443 "foreign.m"
          MR_Word base;
#line 443 "foreign.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 443 "foreign.m"
          *backend_libs__foreign__Name_8 = base;
#line 443 "foreign.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_53));
#line 443 "foreign.m"
        }
#line 440 "foreign.m"
      }
#line 396 "foreign.m"
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
#line 390 "foreign.m"
  {
#line 390 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 390 "foreign.m"
    MR_Word backend_libs__foreign__MaybeUserEqComp_8;
#line 391 "foreign.m"
    MR_Word backend_libs__foreign__V_7_7;
#line 391 "foreign.m"
    MR_Word backend_libs__foreign__V_9_9;

#line 391 "foreign.m"
    {
#line 391 "foreign.m"
      backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__foreign__ModuleInfo_4, backend_libs__foreign__Body_5, &backend_libs__foreign__V_7_7, &backend_libs__foreign__MaybeUserEqComp_8, &backend_libs__foreign__V_9_9);
    }
#line 393 "foreign.m"
    backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__MaybeUserEqComp_8)) == (MR_mktag((MR_Integer) 1)));
#line 393 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 393 "foreign.m"
      *backend_libs__foreign__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeUserEqComp_8, (MR_Integer) 0)));
#line 390 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 390 "foreign.m"
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
#line 365 "foreign.m"
  {
#line 365 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 365 "foreign.m"
    MR_Word backend_libs__foreign__ExportType_6;
#line 365 "foreign.m"
    MR_Word backend_libs__foreign__TypeTable_7;
#line 385 "foreign.m"
    MR_Word backend_libs__foreign__TypeDefn_9;
#line 368 "foreign.m"
    MR_Word backend_libs__foreign__TypeCtor_8;

#line 366 "foreign.m"
    {
#line 366 "foreign.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__foreign__ModuleInfo_4, &backend_libs__foreign__TypeTable_7);
    }
#line 368 "foreign.m"
    {
#line 368 "foreign.m"
      backend_libs__foreign__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(backend_libs__foreign__Type_5, &backend_libs__foreign__TypeCtor_8);
    }
#line 368 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 369 "foreign.m"
      {
#line 369 "foreign.m"
        backend_libs__foreign__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(backend_libs__foreign__TypeTable_7, backend_libs__foreign__TypeCtor_8, &backend_libs__foreign__TypeDefn_9);
      }
#line 385 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 371 "foreign.m"
      {
#line 371 "foreign.m"
        MR_Word backend_libs__foreign__TypeBody_10;

#line 371 "foreign.m"
        {
#line 371 "foreign.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__foreign__TypeDefn_9, &backend_libs__foreign__TypeBody_10);
        }
#line 377 "foreign.m"
        if (((MR_tag((MR_Word) backend_libs__foreign__TypeBody_10)) == (MR_mktag((MR_Integer) 0))))
#line 373 "foreign.m"
          {
#line 373 "foreign.m"
            MR_Word backend_libs__foreign__ForeignTypeBody_11 = (MR_Word) MR_body(((MR_Word) backend_libs__foreign__TypeBody_10), (MR_Integer) 0);
#line 373 "foreign.m"
            MR_Word backend_libs__foreign__ForeignTypeName_12;
#line 373 "foreign.m"
            MR_Word backend_libs__foreign__Assertions_14;
#line 374 "foreign.m"
            MR_Word backend_libs__foreign__V_13_13;

#line 374 "foreign.m"
            {
#line 374 "foreign.m"
              backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__foreign__ModuleInfo_4, backend_libs__foreign__ForeignTypeBody_11, &backend_libs__foreign__ForeignTypeName_12, &backend_libs__foreign__V_13_13, &backend_libs__foreign__Assertions_14);
            }
#line 376 "foreign.m"
            {
#line 376 "foreign.m"
              backend_libs__foreign__ExportType_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 376 "foreign.m"
              MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__ForeignTypeName_12));
#line 376 "foreign.m"
              MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportType_6, 1) = ((MR_Box) (backend_libs__foreign__Assertions_14));
#line 376 "foreign.m"
            }
#line 373 "foreign.m"
          }
#line 377 "foreign.m"
        else
#line 383 "foreign.m"
          {
#line 383 "foreign.m"
            backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 383 "foreign.m"
            MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
#line 383 "foreign.m"
          }
#line 371 "foreign.m"
      }
#line 385 "foreign.m"
    else
#line 386 "foreign.m"
      {
#line 386 "foreign.m"
        backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 386 "foreign.m"
        MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
#line 386 "foreign.m"
      }
#line 365 "foreign.m"
    return backend_libs__foreign__ExportType_6;
#line 365 "foreign.m"
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
#line 339 "foreign.m"
  {
#line 339 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 339 "foreign.m"
    if ((backend_libs__foreign__Target_4 == (MR_Integer) 0))
#line 340 "foreign.m"
      {
#line 340 "foreign.m"
        MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 340 "foreign.m"
        MR_Word backend_libs__foreign__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 340 "foreign.m"
        MR_Word backend_libs__foreign__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 340 "foreign.m"
        MR_Word backend_libs__foreign__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 340 "foreign.m"
        MR_Word backend_libs__foreign__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 4)));
#line 340 "foreign.m"
        MR_Word backend_libs__foreign__V_7_7;

#line 340 "foreign.m"
        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 340 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 340 "foreign.m"
          {
#line 340 "foreign.m"
            backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_16_16, (MR_Integer) 0)));
#line 340 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 340 "foreign.m"
          }
#line 340 "foreign.m"
        else
#line 340 "foreign.m"
          *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 340 "foreign.m"
      }
#line 339 "foreign.m"
    else
#line 339 "foreign.m"
    if ((backend_libs__foreign__Target_4 == (MR_Integer) 2))
#line 349 "foreign.m"
      {
#line 349 "foreign.m"
        MR_Word backend_libs__foreign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 349 "foreign.m"
        MR_Word backend_libs__foreign__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 349 "foreign.m"
        MR_Word backend_libs__foreign__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 349 "foreign.m"
        MR_Word backend_libs__foreign__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 349 "foreign.m"
        MR_Word backend_libs__foreign__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 4)));
#line 349 "foreign.m"
        MR_Word backend_libs__foreign__V_10_10;

#line 349 "foreign.m"
        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 349 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 349 "foreign.m"
          {
#line 349 "foreign.m"
            backend_libs__foreign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_13_13, (MR_Integer) 0)));
#line 349 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 349 "foreign.m"
          }
#line 349 "foreign.m"
        else
#line 349 "foreign.m"
          *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 349 "foreign.m"
      }
#line 339 "foreign.m"
    else
#line 339 "foreign.m"
    if ((backend_libs__foreign__Target_4 == (MR_Integer) 4))
#line 352 "foreign.m"
      {
#line 352 "foreign.m"
        MR_Word backend_libs__foreign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 4)));
#line 352 "foreign.m"
        MR_Word backend_libs__foreign__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 352 "foreign.m"
        MR_Word backend_libs__foreign__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 352 "foreign.m"
        MR_Word backend_libs__foreign__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 352 "foreign.m"
        MR_Word backend_libs__foreign__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 352 "foreign.m"
        MR_Word backend_libs__foreign__V_11_11;

#line 352 "foreign.m"
        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 352 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 352 "foreign.m"
          {
#line 352 "foreign.m"
            backend_libs__foreign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_12_12, (MR_Integer) 0)));
#line 352 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 352 "foreign.m"
          }
#line 352 "foreign.m"
        else
#line 352 "foreign.m"
          *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 352 "foreign.m"
      }
#line 339 "foreign.m"
    else
#line 339 "foreign.m"
    if ((backend_libs__foreign__Target_4 == (MR_Integer) 1))
#line 343 "foreign.m"
      {
#line 343 "foreign.m"
        MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 343 "foreign.m"
        MR_Word backend_libs__foreign__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 343 "foreign.m"
        MR_Word backend_libs__foreign__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 343 "foreign.m"
        MR_Word backend_libs__foreign__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 343 "foreign.m"
        MR_Word backend_libs__foreign__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 4)));
#line 343 "foreign.m"
        MR_Word backend_libs__foreign__V_8_8;

#line 343 "foreign.m"
        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 343 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 343 "foreign.m"
          {
#line 343 "foreign.m"
            backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_15_15, (MR_Integer) 0)));
#line 343 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 343 "foreign.m"
          }
#line 343 "foreign.m"
        else
#line 343 "foreign.m"
          *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 343 "foreign.m"
      }
#line 339 "foreign.m"
    else
#line 346 "foreign.m"
      {
#line 346 "foreign.m"
        MR_Word backend_libs__foreign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 346 "foreign.m"
        MR_Word backend_libs__foreign__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 346 "foreign.m"
        MR_Word backend_libs__foreign__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 346 "foreign.m"
        MR_Word backend_libs__foreign__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 346 "foreign.m"
        MR_Word backend_libs__foreign__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 4)));
#line 346 "foreign.m"
        MR_Word backend_libs__foreign__V_9_9;

#line 346 "foreign.m"
        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 346 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 346 "foreign.m"
          {
#line 346 "foreign.m"
            backend_libs__foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_14_14, (MR_Integer) 0)));
#line 346 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 346 "foreign.m"
          }
#line 346 "foreign.m"
        else
#line 346 "foreign.m"
          *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 346 "foreign.m"
      }
#line 339 "foreign.m"
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
#line 363 "foreign.m"
  {
#line 363 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 363 "foreign.m"
    MR_Word backend_libs__foreign__HeadVar__2_2;

#line 363 "foreign.m"
    {
#line 363 "foreign.m"
      backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 363 "foreign.m"
      MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, 0) = ((MR_Box) (backend_libs__foreign__Type_3));
#line 363 "foreign.m"
    }
#line 363 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 363 "foreign.m"
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
