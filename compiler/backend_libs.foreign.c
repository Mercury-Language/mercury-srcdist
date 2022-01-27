/*
** Automatically generated from `foreign.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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

#line 163 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_exports__163__1_2_p_0(
#line 163 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 163 "foreign.m"
  MR_Word backend_libs__foreign__LambdaHeadVar__1_15);

#line 158 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_bodys__158__1_2_p_0(
#line 158 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 158 "foreign.m"
  MR_Word backend_libs__foreign__LambdaHeadVar__1_13);

#line 153 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_decls__153__1_2_p_0(
#line 153 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 153 "foreign.m"
  MR_Word backend_libs__foreign__LambdaHeadVar__1_14);

#line 187 "foreign.m"
static void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(
#line 187 "foreign.m"
  MR_Word backend_libs__foreign__TargetLanguage_7,
#line 187 "foreign.m"
  MR_Word backend_libs__foreign__ForeignLanguage_8,
#line 187 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11,
#line 187 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12,
#line 187 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_13,
#line 187 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_14);

#line 163 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_exports_4_p_0_1(
#line 163 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 163 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);

#line 158 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0_1(
#line 158 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 158 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);

#line 153 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_decls_4_p_0_1(
#line 153 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 153 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1);


static /* final */ const MR_Box backend_libs__foreign_scalar_common_1[1][1];

static /* final */ const MR_Box backend_libs__foreign_scalar_common_3[3][5];


#line 408 "foreign.m"
/* sealed */ struct backend_libs__foreign__vector_common_type_2_0_s {
#line 408 "foreign.m"
  const MR_String backend_libs__foreign__vector_common_type_2_0__vct_2_f_0;
#line 408 "foreign.m"
};

static /* final */ const struct backend_libs__foreign__vector_common_type_2_0_s backend_libs__foreign_vector_common_2[12];



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


static /* final */ const struct backend_libs__foreign__vector_common_type_2_0_s backend_libs__foreign_vector_common_2[12] = {
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



#line 324 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertions_0
};

#line 330 "backend_libs.foreign.c"
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

#line 345 "backend_libs.foreign.c"
static const MR_PseudoTypeInfo backend_libs__foreign__backend_libs__foreign__field_types_exported_type_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 350 "backend_libs.foreign.c"
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

#line 365 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_0[1] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0
};

#line 370 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_stag_ordered_exported_type_0_1[1] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1
};

#line 375 "backend_libs.foreign.c"
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

#line 389 "backend_libs.foreign.c"
static const MR_DuFunctorDescPtr backend_libs__foreign__backend_libs__foreign__du_name_ordered_exported_type_0[2] = {
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_0,
  &backend_libs__foreign__backend_libs__foreign__du_functor_desc_exported_type_0_1
};

#line 395 "backend_libs.foreign.c"
static const MR_Integer backend_libs__foreign__backend_libs__foreign__functor_number_map_exported_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 401 "backend_libs.foreign.c"
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

#line 418 "backend_libs.foreign.c"
static MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0_10001(
#line 421 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_1,
#line 423 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2)
#line 425 "backend_libs.foreign.c"
{
#line 427 "backend_libs.foreign.c"
  {
#line 429 "backend_libs.foreign.c"
    MR_bool backend_libs__foreign__succeeded;

#line 432 "backend_libs.foreign.c"
    {
#line 434 "backend_libs.foreign.c"
      backend_libs__foreign__succeeded = backend_libs__foreign____Unify____exported_type_0_0(((MR_Word) backend_libs__foreign__wrapper_arg_1), ((MR_Word) backend_libs__foreign__wrapper_arg_2));
    }
#line 437 "backend_libs.foreign.c"
    return backend_libs__foreign__succeeded;
#line 439 "backend_libs.foreign.c"
  }
#line 441 "backend_libs.foreign.c"
}

#line 444 "backend_libs.foreign.c"
static void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0_10001(
#line 447 "backend_libs.foreign.c"
  MR_Box * backend_libs__foreign__wrapper_arg_1,
#line 449 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_2,
#line 451 "backend_libs.foreign.c"
  MR_Box backend_libs__foreign__wrapper_arg_3)
#line 453 "backend_libs.foreign.c"
{
#line 455 "backend_libs.foreign.c"
  {
#line 457 "backend_libs.foreign.c"
    MR_Word backend_libs__foreign__conv0_HeadVar__1_1;

#line 460 "backend_libs.foreign.c"
    {
#line 462 "backend_libs.foreign.c"
      backend_libs__foreign____Compare____exported_type_0_0(&backend_libs__foreign__conv0_HeadVar__1_1, ((MR_Word) backend_libs__foreign__wrapper_arg_2), ((MR_Word) backend_libs__foreign__wrapper_arg_3));
    }
#line 465 "backend_libs.foreign.c"
    *backend_libs__foreign__wrapper_arg_1 = ((MR_Box) (backend_libs__foreign__conv0_HeadVar__1_1));
#line 467 "backend_libs.foreign.c"
  }
#line 469 "backend_libs.foreign.c"
}

#line 127 "foreign.m"
void MR_CALL 
backend_libs__foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_p_0(
#line 127 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1,
#line 127 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6,
#line 127 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7,
#line 127 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__8_8,
#line 127 "foreign.m"
  MR_Word * backend_libs__foreign__HeadVar__9_9,
#line 127 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_10,
#line 127 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_11)
#line 127 "foreign.m"
{
#line 168 "foreign.m"
  {
#line 168 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 168 "foreign.m"
    if ((backend_libs__foreign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "foreign.m"
      {
#line 169 "foreign.m"
        {
#line 169 "foreign.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.extrude_pragma_implementation\'/11", (MR_String) "no suitable target languages available");
#line 169 "foreign.m"
          return;
        }
#line 168 "foreign.m"
      }
#line 168 "foreign.m"
    else
#line 172 "foreign.m"
      {
#line 172 "foreign.m"
        MR_Word backend_libs__foreign__TargetLang_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 172 "foreign.m"
        MR_Word backend_libs__foreign__ForeignLanguage_37;
#line 171 "foreign.m"
        MR_Word backend_libs__foreign__TargetLangs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));

#line 175 "foreign.m"
        {
#line 175 "foreign.m"
          backend_libs__foreign__ForeignLanguage_37 = parse_tree__prog_data__get_foreign_language_1_f_0(backend_libs__foreign__HeadVar__8_8);
        }
#line 179 "foreign.m"
        {
#line 179 "foreign.m"
          backend_libs__foreign__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (backend_libs__foreign__ForeignLanguage_37)), backend_libs__foreign__HeadVar__1_1);
        }
#line 181 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 180 "foreign.m"
          {
#line 180 "foreign.m"
            *backend_libs__foreign__STATE_VARIABLE_Impl_11 = backend_libs__foreign__STATE_VARIABLE_Impl_0_10;
#line 180 "foreign.m"
            *backend_libs__foreign__HeadVar__9_9 = backend_libs__foreign__HeadVar__8_8;
#line 180 "foreign.m"
            *backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7 = backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6;
#line 180 "foreign.m"
          }
#line 181 "foreign.m"
        else
#line 182 "foreign.m"
          {
#line 182 "foreign.m"
            {
#line 182 "foreign.m"
              parse_tree__prog_data__set_foreign_language_3_p_0(backend_libs__foreign__TargetLang_28, backend_libs__foreign__HeadVar__8_8, backend_libs__foreign__HeadVar__9_9);
            }
#line 183 "foreign.m"
            {
#line 183 "foreign.m"
              backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(backend_libs__foreign__TargetLang_28, backend_libs__foreign__ForeignLanguage_37, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7, backend_libs__foreign__STATE_VARIABLE_Impl_0_10, backend_libs__foreign__STATE_VARIABLE_Impl_11);
#line 183 "foreign.m"
              return;
            }
#line 182 "foreign.m"
          }
#line 172 "foreign.m"
      }
#line 168 "foreign.m"
  }
#line 127 "foreign.m"
}

#line 163 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_exports__163__1_2_p_0(
#line 163 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 163 "foreign.m"
  MR_Word backend_libs__foreign__LambdaHeadVar__1_15)
#line 163 "foreign.m"
{
#line 163 "foreign.m"
  {
#line 163 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 163 "foreign.m"
    MR_Word backend_libs__foreign__Lang_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_15, (MR_Integer) 0)));
#line 163 "foreign.m"
    MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_15, (MR_Integer) 1)));
#line 163 "foreign.m"
    MR_Integer backend_libs__foreign__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_15, (MR_Integer) 2)));
#line 163 "foreign.m"
    MR_String backend_libs__foreign__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_15, (MR_Integer) 3)));
#line 163 "foreign.m"
    MR_Word backend_libs__foreign__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_15, (MR_Integer) 4)));

#line 164 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_20);
#line 163 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 163 "foreign.m"
  }
#line 163 "foreign.m"
}

#line 158 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_bodys__158__1_2_p_0(
#line 158 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 158 "foreign.m"
  MR_Word backend_libs__foreign__LambdaHeadVar__1_13)
#line 158 "foreign.m"
{
#line 158 "foreign.m"
  {
#line 158 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 158 "foreign.m"
    MR_Word backend_libs__foreign__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_13, (MR_Integer) 0)));
#line 158 "foreign.m"
    MR_Word backend_libs__foreign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_13, (MR_Integer) 1)));
#line 158 "foreign.m"
    MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_13, (MR_Integer) 2)));

#line 159 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_16);
#line 158 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 158 "foreign.m"
  }
#line 158 "foreign.m"
}

#line 153 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__IntroducedFrom__pred__filter_decls__153__1_2_p_0(
#line 153 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 153 "foreign.m"
  MR_Word backend_libs__foreign__LambdaHeadVar__1_14)
#line 153 "foreign.m"
{
#line 153 "foreign.m"
  {
#line 153 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 153 "foreign.m"
    MR_Word backend_libs__foreign__Lang_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_14, (MR_Integer) 0)));
#line 153 "foreign.m"
    MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_14, (MR_Integer) 1)));
#line 153 "foreign.m"
    MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_14, (MR_Integer) 2)));
#line 153 "foreign.m"
    MR_Word backend_libs__foreign__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__LambdaHeadVar__1_14, (MR_Integer) 3)));

#line 154 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__WantedLang_5 == backend_libs__foreign__Lang_18);
#line 153 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 153 "foreign.m"
  }
#line 153 "foreign.m"
}

#line 270 "foreign.m"
void MR_CALL 
backend_libs__foreign____Compare____exported_type_0_0(
#line 270 "foreign.m"
  MR_Word * backend_libs__foreign__HeadVar__1_1,
#line 270 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_2,
#line 270 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__3_3)
#line 270 "foreign.m"
{
#line 270 "foreign.m"
  {
#line 270 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 270 "foreign.m"
    MR_Integer backend_libs__foreign__CastX_17 = (MR_Integer) backend_libs__foreign__HeadVar__2_2;
#line 270 "foreign.m"
    MR_Integer backend_libs__foreign__CastY_18 = (MR_Integer) backend_libs__foreign__HeadVar__3_3;

#line 270 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__CastX_17 == backend_libs__foreign__CastY_18);
#line 270 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 684 "backend_libs.foreign.c"
      *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 270 "foreign.m"
    else
#line 270 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 270 "foreign.m"
      {
#line 270 "foreign.m"
        MR_Word backend_libs__foreign__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 270 "foreign.m"
        MR_Word backend_libs__foreign__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));

#line 270 "foreign.m"
        if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 270 "foreign.m"
          {
#line 270 "foreign.m"
            MR_Word backend_libs__foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 270 "foreign.m"
            MR_Word backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 270 "foreign.m"
            MR_Word backend_libs__foreign__V_8_8;

#line 270 "foreign.m"
            {
#line 270 "foreign.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&backend_libs__foreign__V_8_8, backend_libs__foreign__V_23_23, backend_libs__foreign__V_6_6);
            }
#line 713 "backend_libs.foreign.c"
            backend_libs__foreign__succeeded = (backend_libs__foreign__V_8_8 == (MR_Integer) 0);
#line 270 "foreign.m"
            backend_libs__foreign__succeeded = !(backend_libs__foreign__succeeded);
#line 270 "foreign.m"
            if (backend_libs__foreign__succeeded)
#line 270 "foreign.m"
              *backend_libs__foreign__HeadVar__1_1 = backend_libs__foreign__V_8_8;
#line 270 "foreign.m"
            else
#line 270 "foreign.m"
              {
#line 270 "foreign.m"
                parse_tree__prog_data____Compare____foreign_type_assertions_0_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__V_22_22, backend_libs__foreign__V_7_7);
#line 270 "foreign.m"
                return;
              }
#line 270 "foreign.m"
          }
#line 270 "foreign.m"
        else
#line 734 "backend_libs.foreign.c"
          *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 1;
#line 270 "foreign.m"
      }
#line 270 "foreign.m"
    else
#line 270 "foreign.m"
      {
#line 270 "foreign.m"
        MR_Word backend_libs__foreign__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));

#line 270 "foreign.m"
        if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 747 "backend_libs.foreign.c"
          *backend_libs__foreign__HeadVar__1_1 = (MR_Integer) 2;
#line 270 "foreign.m"
        else
#line 270 "foreign.m"
          {
#line 270 "foreign.m"
            MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__3_3, (MR_Integer) 0)));

#line 270 "foreign.m"
            {
#line 270 "foreign.m"
              parse_tree__prog_data____Compare____mer_type_0_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__V_24_24, backend_libs__foreign__V_16_16);
#line 270 "foreign.m"
              return;
            }
#line 270 "foreign.m"
          }
#line 270 "foreign.m"
      }
#line 270 "foreign.m"
  }
#line 270 "foreign.m"
}

#line 270 "foreign.m"
MR_bool MR_CALL 
backend_libs__foreign____Unify____exported_type_0_0(
#line 270 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1,
#line 270 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__2_2)
#line 270 "foreign.m"
{
#line 270 "foreign.m"
  {
#line 270 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 270 "foreign.m"
    MR_Integer backend_libs__foreign__CastX_9 = (MR_Integer) backend_libs__foreign__HeadVar__1_1;
#line 270 "foreign.m"
    MR_Integer backend_libs__foreign__CastY_10 = (MR_Integer) backend_libs__foreign__HeadVar__2_2;

#line 270 "foreign.m"
    backend_libs__foreign__succeeded = (backend_libs__foreign__CastX_9 == backend_libs__foreign__CastY_10);
#line 270 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 270 "foreign.m"
      backend_libs__foreign__succeeded = MR_TRUE;
#line 270 "foreign.m"
    else
#line 270 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 270 "foreign.m"
      {
#line 270 "foreign.m"
        MR_Word backend_libs__foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 270 "foreign.m"
        MR_Word backend_libs__foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 270 "foreign.m"
        MR_Word backend_libs__foreign__V_5_5;
#line 270 "foreign.m"
        MR_Word backend_libs__foreign__V_6_6;

#line 270 "foreign.m"
        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 270 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 270 "foreign.m"
          {
#line 270 "foreign.m"
            backend_libs__foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 270 "foreign.m"
            backend_libs__foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 821 "backend_libs.foreign.c"
            {
#line 823 "backend_libs.foreign.c"
              backend_libs__foreign__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__foreign__V_3_3, backend_libs__foreign__V_5_5);
            }
#line 270 "foreign.m"
            if (backend_libs__foreign__succeeded)
#line 828 "backend_libs.foreign.c"
              {
#line 830 "backend_libs.foreign.c"
                return backend_libs__foreign__succeeded = parse_tree__prog_data____Unify____foreign_type_assertions_0_0(backend_libs__foreign__V_4_4, backend_libs__foreign__V_6_6);
              }
#line 270 "foreign.m"
          }
#line 270 "foreign.m"
      }
#line 270 "foreign.m"
    else
#line 270 "foreign.m"
      {
#line 270 "foreign.m"
        MR_Word backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 270 "foreign.m"
        MR_Word backend_libs__foreign__V_8_8;

#line 270 "foreign.m"
        backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 270 "foreign.m"
        if (backend_libs__foreign__succeeded)
#line 270 "foreign.m"
          {
#line 270 "foreign.m"
            backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 854 "backend_libs.foreign.c"
            {
#line 856 "backend_libs.foreign.c"
              return backend_libs__foreign__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(backend_libs__foreign__V_7_7, backend_libs__foreign__V_8_8);
            }
#line 270 "foreign.m"
          }
#line 270 "foreign.m"
      }
#line 270 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 270 "foreign.m"
  }
#line 270 "foreign.m"
}

#line 187 "foreign.m"
static void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_2_6_p_0(
#line 187 "foreign.m"
  MR_Word backend_libs__foreign__TargetLanguage_7,
#line 187 "foreign.m"
  MR_Word backend_libs__foreign__ForeignLanguage_8,
#line 187 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11,
#line 187 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12,
#line 187 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_13,
#line 187 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_14)
#line 187 "foreign.m"
{
#line 193 "foreign.m"
  {
#line 193 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 210 "foreign.m"
#line 210 "foreign.m"
    switch (backend_libs__foreign__TargetLanguage_7) {
#line 210 "foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 210 "foreign.m"
      case (MR_Integer) 0:
#line 203 "foreign.m"
#line 203 "foreign.m"
        switch (backend_libs__foreign__ForeignLanguage_8) {
#line 203 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 203 "foreign.m"
          case (MR_Integer) 0:
#line 202 "foreign.m"
            {
#line 202 "foreign.m"
            }
#line 203 "foreign.m"
            break;
#line 203 "foreign.m"
          case (MR_Integer) 1:
#line 203 "foreign.m"
          case (MR_Integer) 3:
#line 203 "foreign.m"
          case (MR_Integer) 2:
#line 248 "foreign.m"
            {
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_19_19;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_21_21;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_22_22;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_23_23;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_25_25;

#line 250 "foreign.m"
              {
#line 250 "foreign.m"
                backend_libs__foreign__V_22_22 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
#line 251 "foreign.m"
              {
#line 251 "foreign.m"
                backend_libs__foreign__V_25_25 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
#line 251 "foreign.m"
              {
#line 251 "foreign.m"
                backend_libs__foreign__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_25_25);
              }
#line 250 "foreign.m"
              {
#line 250 "foreign.m"
                backend_libs__foreign__V_21_21 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_22_22, backend_libs__foreign__V_23_23);
              }
#line 250 "foreign.m"
              {
#line 250 "foreign.m"
                backend_libs__foreign__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_21_21);
              }
#line 249 "foreign.m"
              {
#line 249 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_19_19);
#line 249 "foreign.m"
                return;
              }
#line 248 "foreign.m"
            }
#line 203 "foreign.m"
            break;
#line 203 "foreign.m"
        }
#line 210 "foreign.m"
        break;
#line 210 "foreign.m"
      case (MR_Integer) 1:
#line 214 "foreign.m"
#line 214 "foreign.m"
        switch (backend_libs__foreign__ForeignLanguage_8) {
#line 214 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 214 "foreign.m"
          case (MR_Integer) 0:
#line 214 "foreign.m"
          case (MR_Integer) 3:
#line 214 "foreign.m"
          case (MR_Integer) 2:
#line 248 "foreign.m"
            {
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_30_30;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_32_32;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_33_33;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_34_34;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_36_36;

#line 250 "foreign.m"
              {
#line 250 "foreign.m"
                backend_libs__foreign__V_33_33 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
#line 251 "foreign.m"
              {
#line 251 "foreign.m"
                backend_libs__foreign__V_36_36 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
#line 251 "foreign.m"
              {
#line 251 "foreign.m"
                backend_libs__foreign__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_36_36);
              }
#line 250 "foreign.m"
              {
#line 250 "foreign.m"
                backend_libs__foreign__V_32_32 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_33_33, backend_libs__foreign__V_34_34);
              }
#line 250 "foreign.m"
              {
#line 250 "foreign.m"
                backend_libs__foreign__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_32_32);
              }
#line 249 "foreign.m"
              {
#line 249 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_30_30);
#line 249 "foreign.m"
                return;
              }
#line 248 "foreign.m"
            }
#line 214 "foreign.m"
            break;
#line 214 "foreign.m"
          case (MR_Integer) 1:
#line 213 "foreign.m"
            {
#line 213 "foreign.m"
            }
#line 214 "foreign.m"
            break;
#line 214 "foreign.m"
        }
#line 210 "foreign.m"
        break;
#line 210 "foreign.m"
      case (MR_Integer) 3:
#line 236 "foreign.m"
#line 236 "foreign.m"
        switch (backend_libs__foreign__ForeignLanguage_8) {
#line 236 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 236 "foreign.m"
          case (MR_Integer) 0:
#line 236 "foreign.m"
          case (MR_Integer) 1:
#line 236 "foreign.m"
          case (MR_Integer) 2:
#line 248 "foreign.m"
            {
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_41_41;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_43_43;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_44_44;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_45_45;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_47_47;

#line 250 "foreign.m"
              {
#line 250 "foreign.m"
                backend_libs__foreign__V_44_44 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
#line 251 "foreign.m"
              {
#line 251 "foreign.m"
                backend_libs__foreign__V_47_47 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
#line 251 "foreign.m"
              {
#line 251 "foreign.m"
                backend_libs__foreign__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_47_47);
              }
#line 250 "foreign.m"
              {
#line 250 "foreign.m"
                backend_libs__foreign__V_43_43 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_44_44, backend_libs__foreign__V_45_45);
              }
#line 250 "foreign.m"
              {
#line 250 "foreign.m"
                backend_libs__foreign__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_43_43);
              }
#line 249 "foreign.m"
              {
#line 249 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_41_41);
#line 249 "foreign.m"
                return;
              }
#line 248 "foreign.m"
            }
#line 236 "foreign.m"
            break;
#line 236 "foreign.m"
          case (MR_Integer) 3:
#line 235 "foreign.m"
            {
#line 235 "foreign.m"
            }
#line 236 "foreign.m"
            break;
#line 236 "foreign.m"
        }
#line 210 "foreign.m"
        break;
#line 210 "foreign.m"
      case (MR_Integer) 2:
#line 225 "foreign.m"
#line 225 "foreign.m"
        switch (backend_libs__foreign__ForeignLanguage_8) {
#line 225 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 225 "foreign.m"
          case (MR_Integer) 0:
#line 225 "foreign.m"
          case (MR_Integer) 1:
#line 225 "foreign.m"
          case (MR_Integer) 3:
#line 248 "foreign.m"
            {
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_52_52;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_54_54;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_55_55;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_56_56;
#line 248 "foreign.m"
              MR_String backend_libs__foreign__V_58_58;

#line 250 "foreign.m"
              {
#line 250 "foreign.m"
                backend_libs__foreign__V_55_55 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__ForeignLanguage_8);
              }
#line 251 "foreign.m"
              {
#line 251 "foreign.m"
                backend_libs__foreign__V_58_58 = libs__globals__foreign_language_string_1_f_0(backend_libs__foreign__TargetLanguage_7);
              }
#line 251 "foreign.m"
              {
#line 251 "foreign.m"
                backend_libs__foreign__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) " foreign code from ", backend_libs__foreign__V_58_58);
              }
#line 250 "foreign.m"
              {
#line 250 "foreign.m"
                backend_libs__foreign__V_54_54 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__V_55_55, backend_libs__foreign__V_56_56);
              }
#line 250 "foreign.m"
              {
#line 250 "foreign.m"
                backend_libs__foreign__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "unimplemented: calling ", backend_libs__foreign__V_54_54);
              }
#line 249 "foreign.m"
              {
#line 249 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.unimplemented_combination\'/2", backend_libs__foreign__V_52_52);
#line 249 "foreign.m"
                return;
              }
#line 248 "foreign.m"
            }
#line 225 "foreign.m"
            break;
#line 225 "foreign.m"
          case (MR_Integer) 2:
#line 224 "foreign.m"
            {
#line 224 "foreign.m"
            }
#line 225 "foreign.m"
            break;
#line 225 "foreign.m"
        }
#line 210 "foreign.m"
        break;
#line 210 "foreign.m"
    }
#line 193 "foreign.m"
    *backend_libs__foreign__STATE_VARIABLE_Impl_14 = backend_libs__foreign__STATE_VARIABLE_Impl_0_13;
#line 193 "foreign.m"
    *backend_libs__foreign__STATE_VARIABLE_ModuleInfo_12 = backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_11;
#line 193 "foreign.m"
  }
#line 187 "foreign.m"
}

#line 136 "foreign.m"
MR_String MR_CALL 
backend_libs__foreign__decl_guard_1_f_0(
#line 136 "foreign.m"
  MR_Word backend_libs__foreign__ModuleName_3)
#line 136 "foreign.m"
{
#line 502 "foreign.m"
  {
#line 502 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 502 "foreign.m"
    MR_String backend_libs__foreign__HeadVar__2_2;
#line 502 "foreign.m"
    MR_String backend_libs__foreign__UppercaseModuleName_4;
#line 502 "foreign.m"
    MR_String backend_libs__foreign__MangledModuleName_5;

#line 503 "foreign.m"
    {
#line 503 "foreign.m"
      backend_libs__foreign__MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__foreign__ModuleName_3);
    }
#line 504 "foreign.m"
    {
#line 504 "foreign.m"
      mercury__string__to_upper_2_p_0(backend_libs__foreign__MangledModuleName_5, &backend_libs__foreign__UppercaseModuleName_4);
    }
#line 502 "foreign.m"
    {
#line 502 "foreign.m"
      return backend_libs__foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(backend_libs__foreign__UppercaseModuleName_4, (MR_String) "_DECL_GUARD");
    }
#line 502 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 502 "foreign.m"
  }
#line 136 "foreign.m"
}

#line 127 "foreign.m"
void MR_CALL 
backend_libs__foreign__extrude_pragma_implementation_11_p_0(
#line 127 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__1_1,
#line 127 "foreign.m"
  MR_Word backend_libs__foreign___PragmaVars_2,
#line 127 "foreign.m"
  MR_Word backend_libs__foreign___PredName_3,
#line 127 "foreign.m"
  MR_Word backend_libs__foreign___PredOrFunc_4,
#line 127 "foreign.m"
  MR_Word backend_libs__foreign___Context_5,
#line 127 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6,
#line 127 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7,
#line 127 "foreign.m"
  MR_Word backend_libs__foreign__HeadVar__8_8,
#line 127 "foreign.m"
  MR_Word * backend_libs__foreign__HeadVar__9_9,
#line 127 "foreign.m"
  MR_Word backend_libs__foreign__STATE_VARIABLE_Impl_0_10,
#line 127 "foreign.m"
  MR_Word * backend_libs__foreign__STATE_VARIABLE_Impl_11)
#line 127 "foreign.m"
{
#line 168 "foreign.m"
  {
#line 168 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 168 "foreign.m"
    {
#line 168 "foreign.m"
      backend_libs__foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_p_0(backend_libs__foreign__HeadVar__1_1, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_0_6, backend_libs__foreign__STATE_VARIABLE_ModuleInfo_7, backend_libs__foreign__HeadVar__8_8, backend_libs__foreign__HeadVar__9_9, backend_libs__foreign__STATE_VARIABLE_Impl_0_10, backend_libs__foreign__STATE_VARIABLE_Impl_11);
#line 168 "foreign.m"
      return;
    }
#line 168 "foreign.m"
  }
#line 127 "foreign.m"
}

#line 163 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_exports_4_p_0_1(
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
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_exports__163__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 163 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 163 "foreign.m"
  }
#line 163 "foreign.m"
}

#line 110 "foreign.m"
void MR_CALL 
backend_libs__foreign__filter_exports_4_p_0(
#line 110 "foreign.m"
  MR_Word backend_libs__foreign__WantedLang_5,
#line 110 "foreign.m"
  MR_Word backend_libs__foreign__Exports0_6,
#line 110 "foreign.m"
  MR_Word * backend_libs__foreign__LangExports_7,
#line 110 "foreign.m"
  MR_Word * backend_libs__foreign__NotLangExports_8)
#line 110 "foreign.m"
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
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[2]));
#line 163 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_exports_4_p_0_1));
#line 163 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 163 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 163 "foreign.m"
    }
#line 165 "foreign.m"
    {
#line 165 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Exports0_6, backend_libs__foreign__LangExports_7, backend_libs__foreign__NotLangExports_8);
#line 165 "foreign.m"
      return;
    }
#line 162 "foreign.m"
  }
#line 110 "foreign.m"
}

#line 158 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_bodys_4_p_0_1(
#line 158 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 158 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 158 "foreign.m"
{
#line 158 "foreign.m"
  {
#line 158 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 158 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 158 "foreign.m"
    {
#line 158 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_bodys__158__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 158 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 158 "foreign.m"
  }
#line 158 "foreign.m"
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
#line 157 "foreign.m"
  {
#line 157 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 157 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 158 "foreign.m"
    {
#line 158 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 158 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[1]));
#line 158 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_bodys_4_p_0_1));
#line 158 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 158 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 158 "foreign.m"
    }
#line 160 "foreign.m"
    {
#line 160 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Bodys0_6, backend_libs__foreign__LangBodys_7, backend_libs__foreign__NotLangBodys_8);
#line 160 "foreign.m"
      return;
    }
#line 157 "foreign.m"
  }
#line 103 "foreign.m"
}

#line 153 "foreign.m"
static MR_bool MR_CALL 
backend_libs__foreign__filter_decls_4_p_0_1(
#line 153 "foreign.m"
  MR_Box backend_libs__foreign__closure_arg,
#line 153 "foreign.m"
  MR_Box backend_libs__foreign__wrapper_arg_1)
#line 153 "foreign.m"
{
#line 153 "foreign.m"
  {
#line 153 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 153 "foreign.m"
    MR_Box backend_libs__foreign__closure = backend_libs__foreign__closure_arg;

#line 153 "foreign.m"
    {
#line 153 "foreign.m"
      return backend_libs__foreign__succeeded = backend_libs__foreign__IntroducedFrom__pred__filter_decls__153__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__foreign__wrapper_arg_1));
    }
#line 153 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 153 "foreign.m"
  }
#line 153 "foreign.m"
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
#line 152 "foreign.m"
  {
#line 152 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 152 "foreign.m"
    MR_Word backend_libs__foreign__IsWanted_9;

#line 153 "foreign.m"
    {
#line 153 "foreign.m"
      backend_libs__foreign__IsWanted_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 153 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 0) = ((MR_Box) (&backend_libs__foreign_scalar_common_3[0]));
#line 153 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 1) = ((MR_Box) (backend_libs__foreign__filter_decls_4_p_0_1));
#line 153 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 153 "foreign.m"
      MR_hl_field(MR_mktag(0), backend_libs__foreign__IsWanted_9, 3) = ((MR_Box) (backend_libs__foreign__WantedLang_5));
#line 153 "foreign.m"
    }
#line 155 "foreign.m"
    {
#line 155 "foreign.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, backend_libs__foreign__IsWanted_9, backend_libs__foreign__Decls0_6, backend_libs__foreign__LangDecls_7, backend_libs__foreign__NotLangDecls_8);
#line 155 "foreign.m"
      return;
    }
#line 152 "foreign.m"
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
#line 369 "foreign.m"
  {
#line 369 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 369 "foreign.m"
    MR_String backend_libs__foreign__HeadVar__4_4;
#line 369 "foreign.m"
    MR_Word backend_libs__foreign__V_8_8;

#line 370 "foreign.m"
    {
#line 370 "foreign.m"
      backend_libs__foreign__V_8_8 = backend_libs__foreign__to_exported_type_2_f_0(backend_libs__foreign__ModuleInfo_5, backend_libs__foreign__Type_7);
    }
#line 370 "foreign.m"
    {
#line 370 "foreign.m"
      return backend_libs__foreign__HeadVar__4_4 = backend_libs__foreign__exported_type_to_string_2_f_0(backend_libs__foreign__Lang_6, backend_libs__foreign__V_8_8);
    }
#line 369 "foreign.m"
    return backend_libs__foreign__HeadVar__4_4;
#line 369 "foreign.m"
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
#line 374 "foreign.m"
  {
#line 374 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 374 "foreign.m"
    MR_String backend_libs__foreign__Result_6;

#line 374 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__ExportedType_5)) == (MR_mktag((MR_Integer) 0))))
#line 374 "foreign.m"
      {
#line 374 "foreign.m"
        MR_Word backend_libs__foreign__ForeignType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportedType_5, (MR_Integer) 0)));
#line 374 "foreign.m"
        MR_Word backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportedType_5, (MR_Integer) 1)));

#line 384 "foreign.m"
#line 384 "foreign.m"
        switch (backend_libs__foreign__Lang_4) {
#line 384 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 384 "foreign.m"
          case (MR_Integer) 0:
#line 380 "foreign.m"
            if (((MR_tag((MR_Word) backend_libs__foreign__ForeignType_7)) == (MR_mktag((MR_Integer) 1))))
#line 381 "foreign.m"
              {
#line 382 "foreign.m"
                {
#line 382 "foreign.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "qualified C type");
                }
#line 381 "foreign.m"
              }
#line 380 "foreign.m"
            else
#line 378 "foreign.m"
              backend_libs__foreign__Result_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignType_7, (MR_Integer) 0)));
#line 384 "foreign.m"
            break;
#line 384 "foreign.m"
          case (MR_Integer) 1:
#line 384 "foreign.m"
          case (MR_Integer) 3:
#line 384 "foreign.m"
          case (MR_Integer) 2:
#line 389 "foreign.m"
            {
#line 389 "foreign.m"
              return backend_libs__foreign__Result_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(backend_libs__foreign__ForeignType_7);
            }
#line 384 "foreign.m"
            break;
#line 384 "foreign.m"
        }
#line 374 "foreign.m"
      }
#line 374 "foreign.m"
    else
#line 392 "foreign.m"
      {
#line 392 "foreign.m"
        MR_Word backend_libs__foreign__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportedType_5, (MR_Integer) 0)));

#line 436 "foreign.m"
#line 436 "foreign.m"
        switch (backend_libs__foreign__Lang_4) {
#line 436 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 436 "foreign.m"
          case (MR_Integer) 0:
#line 418 "foreign.m"
#line 418 "foreign.m"
            switch (MR_tag((MR_Word) backend_libs__foreign__Type_12)) {
#line 418 "foreign.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 418 "foreign.m"
              case (MR_Integer) 0:
#line 431 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
#line 418 "foreign.m"
                break;
#line 418 "foreign.m"
              case (MR_Integer) 1:
#line 428 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
#line 418 "foreign.m"
                break;
#line 418 "foreign.m"
              case (MR_Integer) 2:
#line 404 "foreign.m"
                {
#line 404 "foreign.m"
                  MR_Word backend_libs__foreign__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 408 "foreign.m"
                  backend_libs__foreign__Result_6 = ((&backend_libs__foreign_vector_common_2[0 + backend_libs__foreign__BuiltinType_13]))->backend_libs__foreign__vector_common_type_2_0__vct_2_f_0;
#line 404 "foreign.m"
                }
#line 418 "foreign.m"
                break;
#line 418 "foreign.m"
              case (MR_Integer) 3:
#line 418 "foreign.m"
#line 418 "foreign.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__foreign__Type_12, (MR_Integer) 0)))) {
#line 418 "foreign.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 418 "foreign.m"
                  case (MR_Integer) 0:
#line 420 "foreign.m"
                    backend_libs__foreign__Result_6 = (MR_String) "MR_Tuple";
#line 418 "foreign.m"
                    break;
#line 418 "foreign.m"
                  case (MR_Integer) 1:
#line 418 "foreign.m"
                  case (MR_Integer) 2:
#line 428 "foreign.m"
                    backend_libs__foreign__Result_6 = (MR_String) "MR_Word";
#line 418 "foreign.m"
                    break;
#line 418 "foreign.m"
                  case (MR_Integer) 3:
#line 433 "foreign.m"
                    {
#line 434 "foreign.m"
                      {
#line 434 "foreign.m"
                        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "kinded type");
                      }
#line 433 "foreign.m"
                    }
#line 418 "foreign.m"
                    break;
#line 418 "foreign.m"
                }
#line 418 "foreign.m"
                break;
#line 418 "foreign.m"
            }
#line 436 "foreign.m"
            break;
#line 436 "foreign.m"
          case (MR_Integer) 1:
#line 453 "foreign.m"
#line 453 "foreign.m"
            switch (MR_tag((MR_Word) backend_libs__foreign__Type_12)) {
#line 453 "foreign.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 453 "foreign.m"
              case (MR_Integer) 0:
#line 453 "foreign.m"
              case (MR_Integer) 1:
#line 463 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "object";
#line 453 "foreign.m"
                break;
#line 453 "foreign.m"
              case (MR_Integer) 2:
#line 439 "foreign.m"
                {
#line 439 "foreign.m"
                  MR_Word backend_libs__foreign__BuiltinType_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 443 "foreign.m"
                  backend_libs__foreign__Result_6 = ((&backend_libs__foreign_vector_common_2[4 + backend_libs__foreign__BuiltinType_71]))->backend_libs__foreign__vector_common_type_2_0__vct_2_f_0;
#line 439 "foreign.m"
                }
#line 453 "foreign.m"
                break;
#line 453 "foreign.m"
              case (MR_Integer) 3:
#line 463 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "object";
#line 453 "foreign.m"
                break;
#line 453 "foreign.m"
            }
#line 436 "foreign.m"
            break;
#line 436 "foreign.m"
          case (MR_Integer) 3:
#line 495 "foreign.m"
            {
#line 496 "foreign.m"
              {
#line 496 "foreign.m"
                mercury__require__sorry_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "function \140backend_libs.foreign.exported_type_to_string\'/2", (MR_String) "erlang");
              }
#line 495 "foreign.m"
            }
#line 436 "foreign.m"
            break;
#line 436 "foreign.m"
          case (MR_Integer) 2:
#line 482 "foreign.m"
#line 482 "foreign.m"
            switch (MR_tag((MR_Word) backend_libs__foreign__Type_12)) {
#line 482 "foreign.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 482 "foreign.m"
              case (MR_Integer) 0:
#line 482 "foreign.m"
              case (MR_Integer) 1:
#line 492 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "java.lang.Object";
#line 482 "foreign.m"
                break;
#line 482 "foreign.m"
              case (MR_Integer) 2:
#line 468 "foreign.m"
                {
#line 468 "foreign.m"
                  MR_Word backend_libs__foreign__BuiltinType_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__foreign__Type_12, (MR_Integer) 0)));

#line 472 "foreign.m"
                  backend_libs__foreign__Result_6 = ((&backend_libs__foreign_vector_common_2[8 + backend_libs__foreign__BuiltinType_74]))->backend_libs__foreign__vector_common_type_2_0__vct_2_f_0;
#line 468 "foreign.m"
                }
#line 482 "foreign.m"
                break;
#line 482 "foreign.m"
              case (MR_Integer) 3:
#line 492 "foreign.m"
                backend_libs__foreign__Result_6 = (MR_String) "java.lang.Object";
#line 482 "foreign.m"
                break;
#line 482 "foreign.m"
            }
#line 436 "foreign.m"
            break;
#line 436 "foreign.m"
        }
#line 392 "foreign.m"
      }
#line 374 "foreign.m"
    return backend_libs__foreign__Result_6;
#line 374 "foreign.m"
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
#line 366 "foreign.m"
  {
#line 366 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 366 "foreign.m"
    MR_Word backend_libs__foreign__HeadVar__2_2;

#line 366 "foreign.m"
    if (((MR_tag((MR_Word) backend_libs__foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 366 "foreign.m"
      {
#line 366 "foreign.m"
        MR_Word backend_libs__foreign__Assertions_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 366 "foreign.m"
        MR_Word backend_libs__foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__HeadVar__1_1, (MR_Integer) 0)));

#line 366 "foreign.m"
        {
#line 366 "foreign.m"
          backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 366 "foreign.m"
          MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, 0) = ((MR_Box) (backend_libs__foreign__Assertions_4));
#line 366 "foreign.m"
        }
#line 366 "foreign.m"
      }
#line 366 "foreign.m"
    else
#line 367 "foreign.m"
      backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 366 "foreign.m"
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
#line 311 "foreign.m"
  {
#line 311 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 311 "foreign.m"
    MR_Word backend_libs__foreign__MaybeC_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 0)));
#line 311 "foreign.m"
    MR_Word backend_libs__foreign__MaybeJava_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 1)));
#line 311 "foreign.m"
    MR_Word backend_libs__foreign__MaybeCSharp_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 2)));
#line 311 "foreign.m"
    MR_Word backend_libs__foreign__MaybeErlang_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_7, (MR_Integer) 3)));
#line 311 "foreign.m"
    MR_Word backend_libs__foreign__Globals_15;
#line 311 "foreign.m"
    MR_Word backend_libs__foreign__Target_16;

#line 318 "foreign.m"
    {
#line 318 "foreign.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__foreign__ModuleInfo_6, &backend_libs__foreign__Globals_15);
    }
#line 319 "foreign.m"
    {
#line 319 "foreign.m"
      libs__globals__get_target_2_p_0(backend_libs__foreign__Globals_15, &backend_libs__foreign__Target_16);
    }
#line 331 "foreign.m"
#line 331 "foreign.m"
    switch (backend_libs__foreign__Target_16) {
#line 331 "foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 331 "foreign.m"
      case (MR_Integer) 0:
#line 327 "foreign.m"
        if ((backend_libs__foreign__MaybeC_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "foreign.m"
          {
#line 329 "foreign.m"
            {
#line 329 "foreign.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C type");
#line 329 "foreign.m"
              return;
            }
#line 328 "foreign.m"
          }
#line 327 "foreign.m"
        else
#line 323 "foreign.m"
          {
#line 323 "foreign.m"
            MR_Word backend_libs__foreign__Data_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeC_11, (MR_Integer) 0)));
#line 323 "foreign.m"
            MR_String backend_libs__foreign__NameStr_18;
#line 323 "foreign.m"
            MR_Word backend_libs__foreign__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_17, (MR_Integer) 0)));

#line 324 "foreign.m"
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_17, (MR_Integer) 1)));
#line 324 "foreign.m"
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_17, (MR_Integer) 2)));
#line 324 "foreign.m"
            backend_libs__foreign__NameStr_18 = (MR_String) backend_libs__foreign__V_35_35;
#line 326 "foreign.m"
            {
#line 326 "foreign.m"
              MR_Word base;
#line 326 "foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 326 "foreign.m"
              *backend_libs__foreign__Name_8 = base;
#line 326 "foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_18));
#line 326 "foreign.m"
            }
#line 323 "foreign.m"
          }
#line 331 "foreign.m"
        break;
#line 331 "foreign.m"
      case (MR_Integer) 1:
#line 338 "foreign.m"
        if ((backend_libs__foreign__MaybeCSharp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 339 "foreign.m"
          {
#line 340 "foreign.m"
            {
#line 340 "foreign.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no C# type");
#line 340 "foreign.m"
              return;
            }
#line 339 "foreign.m"
          }
#line 338 "foreign.m"
        else
#line 334 "foreign.m"
          {
#line 334 "foreign.m"
            MR_Word backend_libs__foreign__V_31_31;
#line 334 "foreign.m"
            MR_Word backend_libs__foreign__Data_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeCSharp_13, (MR_Integer) 0)));
#line 334 "foreign.m"
            MR_String backend_libs__foreign__NameStr_37;

#line 335 "foreign.m"
            backend_libs__foreign__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_36, (MR_Integer) 0)));
#line 335 "foreign.m"
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_36, (MR_Integer) 1)));
#line 335 "foreign.m"
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_36, (MR_Integer) 2)));
#line 335 "foreign.m"
            backend_libs__foreign__NameStr_37 = (MR_String) backend_libs__foreign__V_31_31;
#line 337 "foreign.m"
            {
#line 337 "foreign.m"
              MR_Word base;
#line 337 "foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 337 "foreign.m"
              *backend_libs__foreign__Name_8 = base;
#line 337 "foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_37));
#line 337 "foreign.m"
            }
#line 334 "foreign.m"
          }
#line 331 "foreign.m"
        break;
#line 331 "foreign.m"
      case (MR_Integer) 3:
#line 360 "foreign.m"
        if ((backend_libs__foreign__MaybeErlang_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "foreign.m"
          {
#line 362 "foreign.m"
            {
#line 362 "foreign.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Erlang type");
#line 362 "foreign.m"
              return;
            }
#line 361 "foreign.m"
          }
#line 360 "foreign.m"
        else
#line 356 "foreign.m"
          {
#line 356 "foreign.m"
            MR_Word backend_libs__foreign__Data_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeErlang_14, (MR_Integer) 0)));

#line 357 "foreign.m"
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_48, (MR_Integer) 1)));
#line 357 "foreign.m"
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_48, (MR_Integer) 2)));
#line 359 "foreign.m"
            *backend_libs__foreign__Name_8 = (MR_Word) &backend_libs__foreign_scalar_common_1[0];
#line 356 "foreign.m"
          }
#line 331 "foreign.m"
        break;
#line 331 "foreign.m"
      case (MR_Integer) 2:
#line 349 "foreign.m"
        if ((backend_libs__foreign__MaybeJava_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 350 "foreign.m"
          {
#line 351 "foreign.m"
            {
#line 351 "foreign.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.foreign", (MR_String) "predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", (MR_String) "no Java type");
#line 351 "foreign.m"
              return;
            }
#line 350 "foreign.m"
          }
#line 349 "foreign.m"
        else
#line 345 "foreign.m"
          {
#line 345 "foreign.m"
            MR_Word backend_libs__foreign__V_27_27;
#line 345 "foreign.m"
            MR_Word backend_libs__foreign__Data_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeJava_12, (MR_Integer) 0)));
#line 345 "foreign.m"
            MR_String backend_libs__foreign__NameStr_43;

#line 346 "foreign.m"
            backend_libs__foreign__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_42, (MR_Integer) 0)));
#line 346 "foreign.m"
            *backend_libs__foreign__MaybeUserEqComp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_42, (MR_Integer) 1)));
#line 346 "foreign.m"
            *backend_libs__foreign__Assertions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__Data_42, (MR_Integer) 2)));
#line 346 "foreign.m"
            backend_libs__foreign__NameStr_43 = (MR_String) backend_libs__foreign__V_27_27;
#line 348 "foreign.m"
            {
#line 348 "foreign.m"
              MR_Word base;
#line 348 "foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "foreign.m"
              *backend_libs__foreign__Name_8 = base;
#line 348 "foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__foreign__NameStr_43));
#line 348 "foreign.m"
            }
#line 345 "foreign.m"
          }
#line 331 "foreign.m"
        break;
#line 331 "foreign.m"
    }
#line 311 "foreign.m"
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
#line 305 "foreign.m"
  {
#line 305 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 305 "foreign.m"
    MR_Word backend_libs__foreign__MaybeUserEqComp_8;
#line 306 "foreign.m"
    MR_Word backend_libs__foreign__V_7_7;
#line 306 "foreign.m"
    MR_Word backend_libs__foreign__V_9_9;

#line 306 "foreign.m"
    {
#line 306 "foreign.m"
      backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__foreign__ModuleInfo_4, backend_libs__foreign__Body_5, &backend_libs__foreign__V_7_7, &backend_libs__foreign__MaybeUserEqComp_8, &backend_libs__foreign__V_9_9);
    }
#line 308 "foreign.m"
    backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__MaybeUserEqComp_8)) == (MR_mktag((MR_Integer) 1)));
#line 308 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 308 "foreign.m"
      *backend_libs__foreign__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__MaybeUserEqComp_8, (MR_Integer) 0)));
#line 305 "foreign.m"
    return backend_libs__foreign__succeeded;
#line 305 "foreign.m"
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
#line 280 "foreign.m"
  {
#line 280 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 280 "foreign.m"
    MR_Word backend_libs__foreign__ExportType_6;
#line 280 "foreign.m"
    MR_Word backend_libs__foreign__TypeTable_7;
#line 300 "foreign.m"
    MR_Word backend_libs__foreign__TypeDefn_9;
#line 283 "foreign.m"
    MR_Word backend_libs__foreign__TypeCtor_8;

#line 281 "foreign.m"
    {
#line 281 "foreign.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__foreign__ModuleInfo_4, &backend_libs__foreign__TypeTable_7);
    }
#line 283 "foreign.m"
    {
#line 283 "foreign.m"
      backend_libs__foreign__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(backend_libs__foreign__Type_5, &backend_libs__foreign__TypeCtor_8);
    }
#line 283 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 284 "foreign.m"
      {
#line 284 "foreign.m"
        backend_libs__foreign__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(backend_libs__foreign__TypeTable_7, backend_libs__foreign__TypeCtor_8, &backend_libs__foreign__TypeDefn_9);
      }
#line 300 "foreign.m"
    if (backend_libs__foreign__succeeded)
#line 286 "foreign.m"
      {
#line 286 "foreign.m"
        MR_Word backend_libs__foreign__TypeBody_10;

#line 286 "foreign.m"
        {
#line 286 "foreign.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__foreign__TypeDefn_9, &backend_libs__foreign__TypeBody_10);
        }
#line 292 "foreign.m"
#line 292 "foreign.m"
        switch (MR_tag((MR_Word) backend_libs__foreign__TypeBody_10)) {
#line 292 "foreign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 292 "foreign.m"
          case (MR_Integer) 0:
#line 288 "foreign.m"
            {
#line 288 "foreign.m"
              MR_Word backend_libs__foreign__ForeignTypeBody_11 = (MR_Word) MR_body(((MR_Word) backend_libs__foreign__TypeBody_10), (MR_Integer) 0);
#line 288 "foreign.m"
              MR_Word backend_libs__foreign__ForeignTypeName_12;
#line 288 "foreign.m"
              MR_Word backend_libs__foreign__Assertions_14;
#line 289 "foreign.m"
              MR_Word backend_libs__foreign__V_13_13;

#line 289 "foreign.m"
              {
#line 289 "foreign.m"
                backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__foreign__ModuleInfo_4, backend_libs__foreign__ForeignTypeBody_11, &backend_libs__foreign__ForeignTypeName_12, &backend_libs__foreign__V_13_13, &backend_libs__foreign__Assertions_14);
              }
#line 291 "foreign.m"
              {
#line 291 "foreign.m"
                backend_libs__foreign__ExportType_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "foreign.m"
                MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__ForeignTypeName_12));
#line 291 "foreign.m"
                MR_hl_field(MR_mktag(0), backend_libs__foreign__ExportType_6, 1) = ((MR_Box) (backend_libs__foreign__Assertions_14));
#line 291 "foreign.m"
              }
#line 288 "foreign.m"
            }
#line 292 "foreign.m"
            break;
#line 292 "foreign.m"
          case (MR_Integer) 1:
#line 292 "foreign.m"
          case (MR_Integer) 2:
#line 298 "foreign.m"
            {
#line 298 "foreign.m"
              backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 298 "foreign.m"
              MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
#line 298 "foreign.m"
            }
#line 292 "foreign.m"
            break;
#line 292 "foreign.m"
          case (MR_Integer) 3:
#line 298 "foreign.m"
            {
#line 298 "foreign.m"
              backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 298 "foreign.m"
              MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
#line 298 "foreign.m"
            }
#line 292 "foreign.m"
            break;
#line 292 "foreign.m"
        }
#line 286 "foreign.m"
      }
#line 300 "foreign.m"
    else
#line 301 "foreign.m"
      {
#line 301 "foreign.m"
        backend_libs__foreign__ExportType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 301 "foreign.m"
        MR_hl_field(MR_mktag(1), backend_libs__foreign__ExportType_6, 0) = ((MR_Box) (backend_libs__foreign__Type_5));
#line 301 "foreign.m"
      }
#line 280 "foreign.m"
    return backend_libs__foreign__ExportType_6;
#line 280 "foreign.m"
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
#line 257 "foreign.m"
  {
#line 257 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;

#line 257 "foreign.m"
#line 257 "foreign.m"
    switch (backend_libs__foreign__Target_4) {
#line 257 "foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 257 "foreign.m"
      case (MR_Integer) 0:
#line 258 "foreign.m"
        {
#line 258 "foreign.m"
          MR_Word backend_libs__foreign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 258 "foreign.m"
          MR_Word backend_libs__foreign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 258 "foreign.m"
          MR_Word backend_libs__foreign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 258 "foreign.m"
          MR_Word backend_libs__foreign__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 258 "foreign.m"
          MR_Word backend_libs__foreign__V_7_7;

#line 258 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 258 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 258 "foreign.m"
            {
#line 258 "foreign.m"
              backend_libs__foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_14_14, (MR_Integer) 0)));
#line 258 "foreign.m"
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 258 "foreign.m"
            }
#line 258 "foreign.m"
          else
#line 258 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 258 "foreign.m"
        }
#line 257 "foreign.m"
        break;
#line 257 "foreign.m"
      case (MR_Integer) 1:
#line 264 "foreign.m"
        {
#line 264 "foreign.m"
          MR_Word backend_libs__foreign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 264 "foreign.m"
          MR_Word backend_libs__foreign__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 264 "foreign.m"
          MR_Word backend_libs__foreign__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 264 "foreign.m"
          MR_Word backend_libs__foreign__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 264 "foreign.m"
          MR_Word backend_libs__foreign__V_9_9;

#line 264 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 264 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 264 "foreign.m"
            {
#line 264 "foreign.m"
              backend_libs__foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_12_12, (MR_Integer) 0)));
#line 264 "foreign.m"
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 264 "foreign.m"
            }
#line 264 "foreign.m"
          else
#line 264 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 264 "foreign.m"
        }
#line 257 "foreign.m"
        break;
#line 257 "foreign.m"
      case (MR_Integer) 3:
#line 267 "foreign.m"
        {
#line 267 "foreign.m"
          MR_Word backend_libs__foreign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 267 "foreign.m"
          MR_Word backend_libs__foreign__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 267 "foreign.m"
          MR_Word backend_libs__foreign__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 267 "foreign.m"
          MR_Word backend_libs__foreign__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 267 "foreign.m"
          MR_Word backend_libs__foreign__V_10_10;

#line 267 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 267 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 267 "foreign.m"
            {
#line 267 "foreign.m"
              backend_libs__foreign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_11_11, (MR_Integer) 0)));
#line 267 "foreign.m"
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 267 "foreign.m"
            }
#line 267 "foreign.m"
          else
#line 267 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 267 "foreign.m"
        }
#line 257 "foreign.m"
        break;
#line 257 "foreign.m"
      case (MR_Integer) 2:
#line 261 "foreign.m"
        {
#line 261 "foreign.m"
          MR_Word backend_libs__foreign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 1)));
#line 261 "foreign.m"
          MR_Word backend_libs__foreign__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 0)));
#line 261 "foreign.m"
          MR_Word backend_libs__foreign__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 2)));
#line 261 "foreign.m"
          MR_Word backend_libs__foreign__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__foreign__ForeignTypeBody_5, (MR_Integer) 3)));
#line 261 "foreign.m"
          MR_Word backend_libs__foreign__V_8_8;

#line 261 "foreign.m"
          backend_libs__foreign__succeeded = ((MR_tag((MR_Word) backend_libs__foreign__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 261 "foreign.m"
          if (backend_libs__foreign__succeeded)
#line 261 "foreign.m"
            {
#line 261 "foreign.m"
              backend_libs__foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__foreign__V_13_13, (MR_Integer) 0)));
#line 261 "foreign.m"
              *backend_libs__foreign__Have_6 = (MR_Integer) 1;
#line 261 "foreign.m"
            }
#line 261 "foreign.m"
          else
#line 261 "foreign.m"
            *backend_libs__foreign__Have_6 = (MR_Integer) 0;
#line 261 "foreign.m"
        }
#line 257 "foreign.m"
        break;
#line 257 "foreign.m"
    }
#line 257 "foreign.m"
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
#line 278 "foreign.m"
  {
#line 278 "foreign.m"
    MR_bool backend_libs__foreign__succeeded;
#line 278 "foreign.m"
    MR_Word backend_libs__foreign__HeadVar__2_2;

#line 278 "foreign.m"
    {
#line 278 "foreign.m"
      backend_libs__foreign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 278 "foreign.m"
      MR_hl_field(MR_mktag(1), backend_libs__foreign__HeadVar__2_2, 0) = ((MR_Box) (backend_libs__foreign__Type_3));
#line 278 "foreign.m"
    }
#line 278 "foreign.m"
    return backend_libs__foreign__HeadVar__2_2;
#line 278 "foreign.m"
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
