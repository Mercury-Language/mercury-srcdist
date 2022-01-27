/*
** Automatically generated from `hlds_error_util.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module hlds.hlds_error_util. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_error_util__init
ENDINIT
*/

#include "hlds.hlds_error_util.mih"


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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 146 "hlds.hlds_error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

#line 149 "hlds.hlds_error_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_error_util__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__type_ctor_info_context_0;

#line 152 "hlds.hlds_error_util.c"
static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0;

#line 155 "hlds.hlds_error_util.c"
static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1;

#line 158 "hlds.hlds_error_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_value_ordered_should_module_qualify_0[2];

#line 161 "hlds.hlds_error_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0[2];

#line 164 "hlds.hlds_error_util.c"
static const MR_Integer hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_should_module_qualify_0[2];

#line 167 "hlds.hlds_error_util.c"
static MR_bool MR_CALL 
hlds__hlds_error_util____Unify____should_module_qualify_0_0_10001(
#line 170 "hlds.hlds_error_util.c"
  MR_Box hlds__hlds_error_util__wrapper_arg_1,
#line 172 "hlds.hlds_error_util.c"
  MR_Box hlds__hlds_error_util__wrapper_arg_2);

#line 175 "hlds.hlds_error_util.c"
static void MR_CALL 
hlds__hlds_error_util____Compare____should_module_qualify_0_0_10001(
#line 178 "hlds.hlds_error_util.c"
  MR_Box * hlds__hlds_error_util__wrapper_arg_1,
#line 180 "hlds.hlds_error_util.c"
  MR_Box hlds__hlds_error_util__wrapper_arg_2,
#line 182 "hlds.hlds_error_util.c"
  MR_Box hlds__hlds_error_util__wrapper_arg_3);

#line 261 "hlds_error_util.m"
static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_3_f_0_1(
#line 261 "hlds_error_util.m"
  MR_Box hlds__hlds_error_util__closure_arg,
#line 261 "hlds_error_util.m"
  MR_Box hlds__hlds_error_util__wrapper_arg_1);

#line 245 "hlds_error_util.m"
static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_3_f_0_1(
#line 245 "hlds_error_util.m"
  MR_Box hlds__hlds_error_util__closure_arg,
#line 245 "hlds_error_util.m"
  MR_Box hlds__hlds_error_util__wrapper_arg_1);

#line 223 "hlds_error_util.m"
static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_3_f_0_1(
#line 223 "hlds_error_util.m"
  MR_Box hlds__hlds_error_util__closure_arg,
#line 223 "hlds_error_util.m"
  MR_Box hlds__hlds_error_util__wrapper_arg_1);


static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_1[12][2];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_3[3][7];




static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type constructor"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type class method implementation"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type class"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "method"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at"))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_error_util__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 333 "hlds.hlds_error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 341 "hlds.hlds_error_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_error_util__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 350 "hlds.hlds_error_util.c"
static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0 = {
  (MR_String) "should_module_qualify",
  (MR_Integer) 0
};

#line 356 "hlds.hlds_error_util.c"
static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1 = {
  (MR_String) "should_not_module_qualify",
  (MR_Integer) 1
};

#line 362 "hlds.hlds_error_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_value_ordered_should_module_qualify_0[2] = {
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1
};

#line 368 "hlds.hlds_error_util.c"
static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0[2] = {
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1
};

#line 374 "hlds.hlds_error_util.c"
static const MR_Integer hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_should_module_qualify_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 380 "hlds.hlds_error_util.c"
const MR_TypeCtorInfo_Struct hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_error_util____Unify____should_module_qualify_0_0_10001)),
  ((MR_Box) (hlds__hlds_error_util____Compare____should_module_qualify_0_0_10001)),
  (MR_String) "hlds.hlds_error_util",
  (MR_String) "should_module_qualify",
  {     hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0 },
  {     hlds__hlds_error_util__hlds__hlds_error_util__enum_value_ordered_should_module_qualify_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_should_module_qualify_0
};

#line 397 "hlds.hlds_error_util.c"
static MR_bool MR_CALL 
hlds__hlds_error_util____Unify____should_module_qualify_0_0_10001(
#line 400 "hlds.hlds_error_util.c"
  MR_Box hlds__hlds_error_util__wrapper_arg_1,
#line 402 "hlds.hlds_error_util.c"
  MR_Box hlds__hlds_error_util__wrapper_arg_2)
#line 404 "hlds.hlds_error_util.c"
{
#line 406 "hlds.hlds_error_util.c"
  {
#line 408 "hlds.hlds_error_util.c"
    MR_bool hlds__hlds_error_util__succeeded;

#line 411 "hlds.hlds_error_util.c"
    {
#line 413 "hlds.hlds_error_util.c"
      hlds__hlds_error_util__succeeded = hlds__hlds_error_util____Unify____should_module_qualify_0_0(((MR_Word) hlds__hlds_error_util__wrapper_arg_1), ((MR_Word) hlds__hlds_error_util__wrapper_arg_2));
    }
#line 416 "hlds.hlds_error_util.c"
    return hlds__hlds_error_util__succeeded;
#line 418 "hlds.hlds_error_util.c"
  }
#line 420 "hlds.hlds_error_util.c"
}

#line 423 "hlds.hlds_error_util.c"
static void MR_CALL 
hlds__hlds_error_util____Compare____should_module_qualify_0_0_10001(
#line 426 "hlds.hlds_error_util.c"
  MR_Box * hlds__hlds_error_util__wrapper_arg_1,
#line 428 "hlds.hlds_error_util.c"
  MR_Box hlds__hlds_error_util__wrapper_arg_2,
#line 430 "hlds.hlds_error_util.c"
  MR_Box hlds__hlds_error_util__wrapper_arg_3)
#line 432 "hlds.hlds_error_util.c"
{
#line 434 "hlds.hlds_error_util.c"
  {
#line 436 "hlds.hlds_error_util.c"
    MR_Word hlds__hlds_error_util__conv0_HeadVar__1_1;

#line 439 "hlds.hlds_error_util.c"
    {
#line 441 "hlds.hlds_error_util.c"
      hlds__hlds_error_util____Compare____should_module_qualify_0_0(&hlds__hlds_error_util__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_error_util__wrapper_arg_2), ((MR_Word) hlds__hlds_error_util__wrapper_arg_3));
    }
#line 444 "hlds.hlds_error_util.c"
    *hlds__hlds_error_util__wrapper_arg_1 = ((MR_Box) (hlds__hlds_error_util__conv0_HeadVar__1_1));
#line 446 "hlds.hlds_error_util.c"
  }
#line 448 "hlds.hlds_error_util.c"
}

#line 41 "hlds_error_util.m"
void MR_CALL 
hlds__hlds_error_util____Compare____should_module_qualify_0_0(
#line 41 "hlds_error_util.m"
  MR_Word * hlds__hlds_error_util__HeadVar__1_1,
#line 41 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__HeadVar__2_2,
#line 41 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__HeadVar__3_3)
#line 41 "hlds_error_util.m"
{
#line 41 "hlds_error_util.m"
  {
#line 41 "hlds_error_util.m"
    MR_bool hlds__hlds_error_util__succeeded;
#line 41 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_error_util__HeadVar__2_2;
#line 41 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_error_util__HeadVar__3_3;

#line 41 "hlds_error_util.m"
    {
#line 41 "hlds_error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_error_util__HeadVar__1_1, hlds__hlds_error_util__Cast_HeadVar1_4, hlds__hlds_error_util__Cast_HeadVar2_5);
    }
#line 41 "hlds_error_util.m"
  }
#line 41 "hlds_error_util.m"
}

#line 41 "hlds_error_util.m"
MR_bool MR_CALL 
hlds__hlds_error_util____Unify____should_module_qualify_0_0(
#line 41 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__HeadVar__2_1,
#line 41 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__HeadVar__2_2)
#line 41 "hlds_error_util.m"
{
#line 490 "hlds.hlds_error_util.c"
  {
#line 492 "hlds.hlds_error_util.c"
    MR_bool hlds__hlds_error_util__succeeded = (hlds__hlds_error_util__HeadVar__2_1 == hlds__hlds_error_util__HeadVar__2_2);

#line 495 "hlds.hlds_error_util.c"
    return hlds__hlds_error_util__succeeded;
#line 497 "hlds.hlds_error_util.c"
  }
#line 41 "hlds_error_util.m"
}

#line 110 "hlds_error_util.m"
void MR_CALL 
hlds__hlds_error_util__maybe_write_out_errors_8_p_0(
#line 110 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__Verbose_9,
#line 110 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__Globals_10,
#line 110 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__STATE_VARIABLE_HLDS_0_16,
#line 110 "hlds_error_util.m"
  MR_Word * hlds__hlds_error_util__STATE_VARIABLE_HLDS_17,
#line 110 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__STATE_VARIABLE_Specs_0_18,
#line 110 "hlds_error_util.m"
  MR_Word * hlds__hlds_error_util__STATE_VARIABLE_Specs_19)
#line 110 "hlds_error_util.m"
{
#line 300 "hlds_error_util.m"
  {
#line 300 "hlds_error_util.m"
    MR_bool hlds__hlds_error_util__succeeded;

#line 300 "hlds_error_util.m"
#line 300 "hlds_error_util.m"
    switch (hlds__hlds_error_util__Verbose_9) {
#line 300 "hlds_error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 300 "hlds_error_util.m"
      case (MR_Integer) 0:
#line 300 "hlds_error_util.m"
        {
#line 300 "hlds_error_util.m"
          *hlds__hlds_error_util__STATE_VARIABLE_HLDS_17 = hlds__hlds_error_util__STATE_VARIABLE_HLDS_0_16;
#line 300 "hlds_error_util.m"
          *hlds__hlds_error_util__STATE_VARIABLE_Specs_19 = hlds__hlds_error_util__STATE_VARIABLE_Specs_0_18;
#line 300 "hlds_error_util.m"
        }
#line 300 "hlds_error_util.m"
        break;
#line 300 "hlds_error_util.m"
      case (MR_Integer) 1:
#line 302 "hlds_error_util.m"
        {
#line 302 "hlds_error_util.m"
          MR_Integer hlds__hlds_error_util__NumErrors_15;
#line 303 "hlds_error_util.m"
          MR_Integer hlds__hlds_error_util___NumWarnings_14;

#line 303 "hlds_error_util.m"
          {
#line 303 "hlds_error_util.m"
            parse_tree__error_util__write_error_specs_8_p_0(hlds__hlds_error_util__STATE_VARIABLE_Specs_0_18, hlds__hlds_error_util__Globals_10, (MR_Integer) 0, &hlds__hlds_error_util___NumWarnings_14, (MR_Integer) 0, &hlds__hlds_error_util__NumErrors_15);
          }
#line 305 "hlds_error_util.m"
          {
#line 305 "hlds_error_util.m"
            hlds__hlds_module__module_info_incr_num_errors_3_p_0(hlds__hlds_error_util__NumErrors_15, hlds__hlds_error_util__STATE_VARIABLE_HLDS_0_16, hlds__hlds_error_util__STATE_VARIABLE_HLDS_17);
          }
#line 306 "hlds_error_util.m"
          *hlds__hlds_error_util__STATE_VARIABLE_Specs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 302 "hlds_error_util.m"
        }
#line 300 "hlds_error_util.m"
        break;
#line 300 "hlds_error_util.m"
    }
#line 300 "hlds_error_util.m"
  }
#line 110 "hlds_error_util.m"
}

#line 106 "hlds_error_util.m"
void MR_CALL 
hlds__hlds_error_util__definitely_write_out_errors_6_p_0(
#line 106 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__Globals_7,
#line 106 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__STATE_VARIABLE_HLDS_0_13,
#line 106 "hlds_error_util.m"
  MR_Word * hlds__hlds_error_util__STATE_VARIABLE_HLDS_14,
#line 106 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__Specs_9)
#line 106 "hlds_error_util.m"
{
#line 291 "hlds_error_util.m"
  {
#line 291 "hlds_error_util.m"
    MR_bool hlds__hlds_error_util__succeeded;
#line 291 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util__NumErrors_12;
#line 292 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util___NumWarnings_11;

#line 292 "hlds_error_util.m"
    {
#line 292 "hlds_error_util.m"
      parse_tree__error_util__write_error_specs_8_p_0(hlds__hlds_error_util__Specs_9, hlds__hlds_error_util__Globals_7, (MR_Integer) 0, &hlds__hlds_error_util___NumWarnings_11, (MR_Integer) 0, &hlds__hlds_error_util__NumErrors_12);
    }
#line 294 "hlds_error_util.m"
    {
#line 294 "hlds_error_util.m"
      hlds__hlds_module__module_info_incr_num_errors_3_p_0(hlds__hlds_error_util__NumErrors_12, hlds__hlds_error_util__STATE_VARIABLE_HLDS_0_13, hlds__hlds_error_util__STATE_VARIABLE_HLDS_14);
    }
#line 291 "hlds_error_util.m"
  }
#line 106 "hlds_error_util.m"
}

#line 261 "hlds_error_util.m"
static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_3_f_0_1(
#line 261 "hlds_error_util.m"
  MR_Box hlds__hlds_error_util__closure_arg,
#line 261 "hlds_error_util.m"
  MR_Box hlds__hlds_error_util__wrapper_arg_1)
#line 261 "hlds_error_util.m"
{
#line 261 "hlds_error_util.m"
  {
#line 261 "hlds_error_util.m"
    MR_Box hlds__hlds_error_util__wrapper_arg_2;
#line 261 "hlds_error_util.m"
    MR_Box hlds__hlds_error_util__closure = hlds__hlds_error_util__closure_arg;
#line 261 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__conv0_Pieces_9;

#line 261 "hlds_error_util.m"
    {
#line 261 "hlds_error_util.m"
      hlds__hlds_error_util__conv0_Pieces_9 = hlds__hlds_error_util__describe_one_call_site_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_error_util__wrapper_arg_1));
    }
#line 261 "hlds_error_util.m"
    hlds__hlds_error_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_error_util__conv0_Pieces_9));
#line 261 "hlds_error_util.m"
    return hlds__hlds_error_util__wrapper_arg_2;
#line 261 "hlds_error_util.m"
  }
#line 261 "hlds_error_util.m"
}

#line 69 "hlds_error_util.m"
MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_3_f_0(
#line 69 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ModuleInfo_5,
#line 69 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ShouldModuleQualify_6,
#line 69 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__Sites_7)
#line 69 "hlds_error_util.m"
{
#line 259 "hlds_error_util.m"
  {
#line 259 "hlds_error_util.m"
    MR_bool hlds__hlds_error_util__succeeded;
#line 259 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__Pieces_8;
#line 259 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__PiecesList_9;
#line 259 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_10_10;

#line 261 "hlds_error_util.m"
    {
#line 261 "hlds_error_util.m"
      hlds__hlds_error_util__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 261 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_3[2]));
#line 261 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_call_sites_3_f_0_1));
#line 261 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 261 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 3) = ((MR_Box) (hlds__hlds_error_util__ModuleInfo_5));
#line 261 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 4) = ((MR_Box) (hlds__hlds_error_util__ShouldModuleQualify_6));
#line 261 "hlds_error_util.m"
    }
#line 260 "hlds_error_util.m"
    {
#line 260 "hlds_error_util.m"
      hlds__hlds_error_util__PiecesList_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_error_util_scalar_common_2[0], (MR_Word) &hlds__hlds_error_util_scalar_common_1[0], hlds__hlds_error_util__V_10_10, hlds__hlds_error_util__Sites_7);
    }
#line 263 "hlds_error_util.m"
    {
#line 263 "hlds_error_util.m"
      hlds__hlds_error_util__Pieces_8 = parse_tree__error_util__component_lists_to_pieces_1_f_0(hlds__hlds_error_util__PiecesList_9);
    }
#line 259 "hlds_error_util.m"
    return hlds__hlds_error_util__Pieces_8;
#line 259 "hlds_error_util.m"
  }
#line 69 "hlds_error_util.m"
}

#line 66 "hlds_error_util.m"
MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_call_site_3_f_0(
#line 66 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ModuleInfo_5,
#line 66 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ShouldModuleQualify_6,
#line 66 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__HeadVar__3_3)
#line 66 "hlds_error_util.m"
{
#line 250 "hlds_error_util.m"
  {
#line 250 "hlds_error_util.m"
    MR_bool hlds__hlds_error_util__succeeded;
#line 250 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__Pieces_9;
#line 250 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 250 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 250 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__ProcNamePieces_10;
#line 250 "hlds_error_util.m"
    MR_String hlds__hlds_error_util__FileName_11;
#line 250 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util__LineNumber_12;
#line 250 "hlds_error_util.m"
    MR_String hlds__hlds_error_util__LineNumberStr_13;
#line 250 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_14_14;
#line 250 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_17_17;
#line 250 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_18_18;
#line 250 "hlds_error_util.m"
    MR_String hlds__hlds_error_util__V_19_19;
#line 250 "hlds_error_util.m"
    MR_String hlds__hlds_error_util__V_20_20;

#line 251 "hlds_error_util.m"
    {
#line 251 "hlds_error_util.m"
      hlds__hlds_error_util__ProcNamePieces_10 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(hlds__hlds_error_util__ModuleInfo_5, hlds__hlds_error_util__ShouldModuleQualify_6, hlds__hlds_error_util__PPId_7);
    }
#line 253 "hlds_error_util.m"
    {
#line 253 "hlds_error_util.m"
      mercury__term__context_file_2_p_0(hlds__hlds_error_util__Context_8, &hlds__hlds_error_util__FileName_11);
    }
#line 254 "hlds_error_util.m"
    {
#line 254 "hlds_error_util.m"
      mercury__term__context_line_2_p_0(hlds__hlds_error_util__Context_8, &hlds__hlds_error_util__LineNumber_12);
    }
#line 255 "hlds_error_util.m"
    {
#line 255 "hlds_error_util.m"
      mercury__string__int_to_string_2_p_0(hlds__hlds_error_util__LineNumber_12, &hlds__hlds_error_util__LineNumberStr_13);
    }
#line 257 "hlds_error_util.m"
    {
#line 257 "hlds_error_util.m"
      hlds__hlds_error_util__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) ":", hlds__hlds_error_util__LineNumberStr_13);
    }
#line 257 "hlds_error_util.m"
    {
#line 257 "hlds_error_util.m"
      hlds__hlds_error_util__V_19_19 = mercury__string__f_43_43_2_f_0(hlds__hlds_error_util__FileName_11, hlds__hlds_error_util__V_20_20);
    }
#line 257 "hlds_error_util.m"
    {
#line 257 "hlds_error_util.m"
      hlds__hlds_error_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 257 "hlds_error_util.m"
      MR_hl_field(MR_mktag(2), hlds__hlds_error_util__V_18_18, 0) = ((MR_Box) (hlds__hlds_error_util__V_19_19));
#line 257 "hlds_error_util.m"
    }
#line 257 "hlds_error_util.m"
    {
#line 257 "hlds_error_util.m"
      hlds__hlds_error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_17_17, 0) = ((MR_Box) (hlds__hlds_error_util__V_18_18));
#line 257 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "hlds_error_util.m"
    }
#line 257 "hlds_error_util.m"
    {
#line 257 "hlds_error_util.m"
      hlds__hlds_error_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[11])));
#line 257 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_14_14, 1) = ((MR_Box) (hlds__hlds_error_util__V_17_17));
#line 257 "hlds_error_util.m"
    }
#line 256 "hlds_error_util.m"
    {
#line 256 "hlds_error_util.m"
      hlds__hlds_error_util__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_error_util__ProcNamePieces_10, hlds__hlds_error_util__V_14_14);
    }
#line 250 "hlds_error_util.m"
    return hlds__hlds_error_util__Pieces_9;
#line 250 "hlds_error_util.m"
  }
#line 66 "hlds_error_util.m"
}

#line 245 "hlds_error_util.m"
static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_3_f_0_1(
#line 245 "hlds_error_util.m"
  MR_Box hlds__hlds_error_util__closure_arg,
#line 245 "hlds_error_util.m"
  MR_Box hlds__hlds_error_util__wrapper_arg_1)
#line 245 "hlds_error_util.m"
{
#line 245 "hlds_error_util.m"
  {
#line 245 "hlds_error_util.m"
    MR_Box hlds__hlds_error_util__wrapper_arg_2;
#line 245 "hlds_error_util.m"
    MR_Box hlds__hlds_error_util__closure = hlds__hlds_error_util__closure_arg;
#line 245 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__conv0_Pieces_9;

#line 245 "hlds_error_util.m"
    {
#line 245 "hlds_error_util.m"
      hlds__hlds_error_util__conv0_Pieces_9 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_error_util__wrapper_arg_1));
    }
#line 245 "hlds_error_util.m"
    hlds__hlds_error_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_error_util__conv0_Pieces_9));
#line 245 "hlds_error_util.m"
    return hlds__hlds_error_util__wrapper_arg_2;
#line 245 "hlds_error_util.m"
  }
#line 245 "hlds_error_util.m"
}

#line 63 "hlds_error_util.m"
MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_3_f_0(
#line 63 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ModuleInfo_5,
#line 63 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ShouldModuleQualify_6,
#line 63 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__PPIds_7)
#line 63 "hlds_error_util.m"
{
#line 243 "hlds_error_util.m"
  {
#line 243 "hlds_error_util.m"
    MR_bool hlds__hlds_error_util__succeeded;
#line 243 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__Pieces_8;
#line 243 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__PiecesList_9;
#line 243 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_10_10;

#line 245 "hlds_error_util.m"
    {
#line 245 "hlds_error_util.m"
      hlds__hlds_error_util__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 245 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_3[1]));
#line 245 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_proc_names_3_f_0_1));
#line 245 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 245 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 3) = ((MR_Box) (hlds__hlds_error_util__ModuleInfo_5));
#line 245 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 4) = ((MR_Box) (hlds__hlds_error_util__ShouldModuleQualify_6));
#line 245 "hlds_error_util.m"
    }
#line 244 "hlds_error_util.m"
    {
#line 244 "hlds_error_util.m"
      hlds__hlds_error_util__PiecesList_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_error_util_scalar_common_1[0], hlds__hlds_error_util__V_10_10, hlds__hlds_error_util__PPIds_7);
    }
#line 247 "hlds_error_util.m"
    {
#line 247 "hlds_error_util.m"
      hlds__hlds_error_util__Pieces_8 = parse_tree__error_util__component_lists_to_pieces_1_f_0(hlds__hlds_error_util__PiecesList_9);
    }
#line 243 "hlds_error_util.m"
    return hlds__hlds_error_util__Pieces_8;
#line 243 "hlds_error_util.m"
  }
#line 63 "hlds_error_util.m"
}

#line 60 "hlds_error_util.m"
MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(
#line 60 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ModuleInfo_5,
#line 60 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ShouldModuleQualify_6,
#line 60 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__HeadVar__3_3)
#line 60 "hlds_error_util.m"
{
#line 236 "hlds_error_util.m"
  {
#line 236 "hlds_error_util.m"
    MR_bool hlds__hlds_error_util__succeeded;
#line 236 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__Pieces_9;
#line 236 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 236 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 236 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__ProcInfo_11;
#line 236 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__ArgModes_12;
#line 236 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__InstVarSet_13;
#line 237 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_10_10;

#line 237 "hlds_error_util.m"
    {
#line 237 "hlds_error_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__hlds_error_util__ModuleInfo_5, hlds__hlds_error_util__PredId_7, hlds__hlds_error_util__ProcId_8, &hlds__hlds_error_util__V_10_10, &hlds__hlds_error_util__ProcInfo_11);
    }
#line 238 "hlds_error_util.m"
    {
#line 238 "hlds_error_util.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_error_util__ProcInfo_11, &hlds__hlds_error_util__ArgModes_12);
    }
#line 239 "hlds_error_util.m"
    {
#line 239 "hlds_error_util.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(hlds__hlds_error_util__ProcInfo_11, &hlds__hlds_error_util__InstVarSet_13);
    }
#line 240 "hlds_error_util.m"
    {
#line 240 "hlds_error_util.m"
      hlds__hlds_error_util__Pieces_9 = hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0(hlds__hlds_error_util__ModuleInfo_5, hlds__hlds_error_util__ShouldModuleQualify_6, hlds__hlds_error_util__PredId_7, hlds__hlds_error_util__InstVarSet_13, hlds__hlds_error_util__ArgModes_12);
    }
#line 236 "hlds_error_util.m"
    return hlds__hlds_error_util__Pieces_9;
#line 236 "hlds_error_util.m"
  }
#line 60 "hlds_error_util.m"
}

#line 57 "hlds_error_util.m"
MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_3_f_0(
#line 57 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ModuleInfo_5,
#line 57 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ShouldModuleQualify_6,
#line 57 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__HeadVar__3_3)
#line 57 "hlds_error_util.m"
{
#line 228 "hlds_error_util.m"
  {
#line 228 "hlds_error_util.m"
    MR_bool hlds__hlds_error_util__succeeded;
#line 228 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__Pieces_9;
#line 228 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 228 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util__ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 228 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__PredPieces_10;
#line 228 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util__ProcIdInt_11;
#line 228 "hlds_error_util.m"
    MR_String hlds__hlds_error_util__ProcIdStr_12;
#line 228 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_13_13;
#line 228 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_16_16;
#line 228 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_17_17;
#line 228 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__PredInfo_24;

#line 137 "hlds_error_util.m"
    {
#line 137 "hlds_error_util.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_error_util__ModuleInfo_5, hlds__hlds_error_util__PredId_7, &hlds__hlds_error_util__PredInfo_24);
    }
#line 138 "hlds_error_util.m"
    {
#line 138 "hlds_error_util.m"
      hlds__hlds_error_util__PredPieces_10 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0(hlds__hlds_error_util__ShouldModuleQualify_6, hlds__hlds_error_util__PredInfo_24);
    }
#line 231 "hlds_error_util.m"
    {
#line 231 "hlds_error_util.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_error_util__ProcId_8, &hlds__hlds_error_util__ProcIdInt_11);
    }
#line 232 "hlds_error_util.m"
    {
#line 232 "hlds_error_util.m"
      mercury__string__int_to_string_2_p_0(hlds__hlds_error_util__ProcIdInt_11, &hlds__hlds_error_util__ProcIdStr_12);
    }
#line 233 "hlds_error_util.m"
    {
#line 233 "hlds_error_util.m"
      hlds__hlds_error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "hlds_error_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 233 "hlds_error_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_17_17, 1) = ((MR_Box) (hlds__hlds_error_util__ProcIdStr_12));
#line 233 "hlds_error_util.m"
    }
#line 233 "hlds_error_util.m"
    {
#line 233 "hlds_error_util.m"
      hlds__hlds_error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_16_16, 0) = ((MR_Box) (hlds__hlds_error_util__V_17_17));
#line 233 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "hlds_error_util.m"
    }
#line 233 "hlds_error_util.m"
    {
#line 233 "hlds_error_util.m"
      hlds__hlds_error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[10])));
#line 233 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_13_13, 1) = ((MR_Box) (hlds__hlds_error_util__V_16_16));
#line 233 "hlds_error_util.m"
    }
#line 233 "hlds_error_util.m"
    {
#line 233 "hlds_error_util.m"
      hlds__hlds_error_util__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_error_util__PredPieces_10, hlds__hlds_error_util__V_13_13);
    }
#line 228 "hlds_error_util.m"
    return hlds__hlds_error_util__Pieces_9;
#line 228 "hlds_error_util.m"
  }
#line 57 "hlds_error_util.m"
}

#line 223 "hlds_error_util.m"
static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_3_f_0_1(
#line 223 "hlds_error_util.m"
  MR_Box hlds__hlds_error_util__closure_arg,
#line 223 "hlds_error_util.m"
  MR_Box hlds__hlds_error_util__wrapper_arg_1)
#line 223 "hlds_error_util.m"
{
#line 223 "hlds_error_util.m"
  {
#line 223 "hlds_error_util.m"
    MR_Box hlds__hlds_error_util__wrapper_arg_2;
#line 223 "hlds_error_util.m"
    MR_Box hlds__hlds_error_util__closure = hlds__hlds_error_util__closure_arg;
#line 223 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__conv0_Pieces_8;

#line 223 "hlds_error_util.m"
    {
#line 223 "hlds_error_util.m"
      hlds__hlds_error_util__conv0_Pieces_8 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__closure, (MR_Integer) 4))), ((MR_Word) hlds__hlds_error_util__wrapper_arg_1));
    }
#line 223 "hlds_error_util.m"
    hlds__hlds_error_util__wrapper_arg_2 = ((MR_Box) (hlds__hlds_error_util__conv0_Pieces_8));
#line 223 "hlds_error_util.m"
    return hlds__hlds_error_util__wrapper_arg_2;
#line 223 "hlds_error_util.m"
  }
#line 223 "hlds_error_util.m"
}

#line 54 "hlds_error_util.m"
MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_3_f_0(
#line 54 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ModuleInfo_5,
#line 54 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ShouldModuleQualify_6,
#line 54 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__PredIds_7)
#line 54 "hlds_error_util.m"
{
#line 221 "hlds_error_util.m"
  {
#line 221 "hlds_error_util.m"
    MR_bool hlds__hlds_error_util__succeeded;
#line 221 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__Pieces_8;
#line 221 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__PiecesList_9;
#line 221 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_10_10;

#line 223 "hlds_error_util.m"
    {
#line 223 "hlds_error_util.m"
      hlds__hlds_error_util__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 223 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_3[0]));
#line 223 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_pred_names_3_f_0_1));
#line 223 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 223 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 3) = ((MR_Box) (hlds__hlds_error_util__ModuleInfo_5));
#line 223 "hlds_error_util.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_10_10, 4) = ((MR_Box) (hlds__hlds_error_util__ShouldModuleQualify_6));
#line 223 "hlds_error_util.m"
    }
#line 222 "hlds_error_util.m"
    {
#line 222 "hlds_error_util.m"
      hlds__hlds_error_util__PiecesList_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_error_util_scalar_common_1[0], hlds__hlds_error_util__V_10_10, hlds__hlds_error_util__PredIds_7);
    }
#line 225 "hlds_error_util.m"
    {
#line 225 "hlds_error_util.m"
      hlds__hlds_error_util__Pieces_8 = parse_tree__error_util__component_lists_to_pieces_1_f_0(hlds__hlds_error_util__PiecesList_9);
    }
#line 221 "hlds_error_util.m"
    return hlds__hlds_error_util__Pieces_8;
#line 221 "hlds_error_util.m"
  }
#line 54 "hlds_error_util.m"
}

#line 51 "hlds_error_util.m"
MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0(
#line 51 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ModuleInfo_7,
#line 51 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ShouldModuleQualify_8,
#line 51 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__PredId_9,
#line 51 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__InstVarSet_10,
#line 51 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ArgModes0_11)
#line 51 "hlds_error_util.m"
{
#line 189 "hlds_error_util.m"
  {
#line 189 "hlds_error_util.m"
    MR_bool hlds__hlds_error_util__succeeded;
#line 189 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__Pieces_12;
#line 189 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__TypeCtorInfo_45_45;
#line 189 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__PredInfo_13;
#line 189 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__ModuleName_14;
#line 189 "hlds_error_util.m"
    MR_String hlds__hlds_error_util__PredName_15;
#line 189 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util__Arity_16;
#line 189 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__PredOrFunc_17;
#line 189 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util__NumArgModes_18;
#line 189 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__StrippedArgModes_20;
#line 189 "hlds_error_util.m"
    MR_String hlds__hlds_error_util__ArgModesPart_21;
#line 189 "hlds_error_util.m"
    MR_String hlds__hlds_error_util__Descr_24;
#line 189 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_34_34;
#line 189 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_36_36;
#line 189 "hlds_error_util.m"
    MR_String hlds__hlds_error_util__V_37_37;
#line 189 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_38_38;
#line 189 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_39_39;
#line 189 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_41_41;
#line 189 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__V_43_43;
#line 198 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__ArgModes_19;
#line 198 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util__V_25_25;

#line 190 "hlds_error_util.m"
    {
#line 190 "hlds_error_util.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_error_util__ModuleInfo_7, hlds__hlds_error_util__PredId_9, &hlds__hlds_error_util__PredInfo_13);
    }
#line 191 "hlds_error_util.m"
    {
#line 191 "hlds_error_util.m"
      hlds__hlds_error_util__ModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_error_util__PredInfo_13);
    }
#line 192 "hlds_error_util.m"
    {
#line 192 "hlds_error_util.m"
      hlds__hlds_error_util__PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_error_util__PredInfo_13);
    }
#line 193 "hlds_error_util.m"
    {
#line 193 "hlds_error_util.m"
      hlds__hlds_error_util__Arity_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_error_util__PredInfo_13);
    }
#line 194 "hlds_error_util.m"
    {
#line 194 "hlds_error_util.m"
      hlds__hlds_error_util__PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_error_util__PredInfo_13);
    }
#line 1221 "hlds.hlds_error_util.c"
    hlds__hlds_error_util__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 195 "hlds_error_util.m"
    {
#line 195 "hlds_error_util.m"
      mercury__list__length_2_p_0(hlds__hlds_error_util__TypeCtorInfo_45_45, hlds__hlds_error_util__ArgModes0_11, &hlds__hlds_error_util__NumArgModes_18);
    }
#line 198 "hlds_error_util.m"
    hlds__hlds_error_util__V_25_25 = (hlds__hlds_error_util__NumArgModes_18 - hlds__hlds_error_util__Arity_16);
#line 198 "hlds_error_util.m"
    {
#line 198 "hlds_error_util.m"
      hlds__hlds_error_util__succeeded = mercury__list__drop_3_p_0(hlds__hlds_error_util__TypeCtorInfo_45_45, hlds__hlds_error_util__V_25_25, hlds__hlds_error_util__ArgModes0_11, &hlds__hlds_error_util__ArgModes_19);
    }
#line 198 "hlds_error_util.m"
    if (hlds__hlds_error_util__succeeded)
#line 199 "hlds_error_util.m"
      {
#line 199 "hlds_error_util.m"
        parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(hlds__hlds_error_util__ArgModes_19, &hlds__hlds_error_util__StrippedArgModes_20);
      }
#line 198 "hlds_error_util.m"
    else
#line 201 "hlds_error_util.m"
      {
#line 201 "hlds_error_util.m"
        {
#line 201 "hlds_error_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_error_util", (MR_String) "function \140hlds.hlds_error_util.describe_one_pred_name_mode\'/5", (MR_String) "bad argument list");
        }
#line 201 "hlds_error_util.m"
      }
#line 206 "hlds_error_util.m"
#line 206 "hlds_error_util.m"
    switch (hlds__hlds_error_util__PredOrFunc_17) {
#line 206 "hlds_error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 206 "hlds_error_util.m"
      case (MR_Integer) 1:
#line 207 "hlds_error_util.m"
        {
#line 207 "hlds_error_util.m"
          MR_Word hlds__hlds_error_util__FuncArgModes_22;
#line 207 "hlds_error_util.m"
          MR_Word hlds__hlds_error_util__FuncRetMode_23;
#line 207 "hlds_error_util.m"
          MR_String hlds__hlds_error_util__V_29_29;
#line 207 "hlds_error_util.m"
          MR_String hlds__hlds_error_util__V_30_30;
#line 207 "hlds_error_util.m"
          MR_String hlds__hlds_error_util__V_32_32;
#line 208 "hlds_error_util.m"
          MR_Box hlds__hlds_error_util__conv0_FuncRetMode_23;

#line 208 "hlds_error_util.m"
          {
#line 208 "hlds_error_util.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(hlds__hlds_error_util__TypeCtorInfo_45_45, hlds__hlds_error_util__StrippedArgModes_20, &hlds__hlds_error_util__FuncArgModes_22, &hlds__hlds_error_util__conv0_FuncRetMode_23);
          }
#line 208 "hlds_error_util.m"
          hlds__hlds_error_util__FuncRetMode_23 = ((MR_Word) hlds__hlds_error_util__conv0_FuncRetMode_23);
#line 280 "hlds_error_util.m"
          if ((hlds__hlds_error_util__FuncArgModes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "hlds_error_util.m"
            hlds__hlds_error_util__V_29_29 = (MR_String) "";
#line 280 "hlds_error_util.m"
          else
#line 283 "hlds_error_util.m"
            {
#line 283 "hlds_error_util.m"
              MR_String hlds__hlds_error_util__ArgsStr_51;
#line 283 "hlds_error_util.m"
              MR_String hlds__hlds_error_util__V_54_54;

#line 284 "hlds_error_util.m"
              {
#line 284 "hlds_error_util.m"
                hlds__hlds_error_util__ArgsStr_51 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0((MR_Integer) 1, hlds__hlds_error_util__InstVarSet_10, hlds__hlds_error_util__FuncArgModes_22);
              }
#line 286 "hlds_error_util.m"
              {
#line 286 "hlds_error_util.m"
                hlds__hlds_error_util__V_54_54 = mercury__string__f_43_43_2_f_0(hlds__hlds_error_util__ArgsStr_51, (MR_String) ")");
              }
#line 286 "hlds_error_util.m"
              {
#line 286 "hlds_error_util.m"
                hlds__hlds_error_util__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_error_util__V_54_54);
              }
#line 283 "hlds_error_util.m"
            }
#line 210 "hlds_error_util.m"
          {
#line 210 "hlds_error_util.m"
            hlds__hlds_error_util__V_32_32 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0((MR_Integer) 1, hlds__hlds_error_util__InstVarSet_10, hlds__hlds_error_util__FuncRetMode_23);
          }
#line 210 "hlds_error_util.m"
          {
#line 210 "hlds_error_util.m"
            hlds__hlds_error_util__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) " = ", hlds__hlds_error_util__V_32_32);
          }
#line 209 "hlds_error_util.m"
          {
#line 209 "hlds_error_util.m"
            hlds__hlds_error_util__ArgModesPart_21 = mercury__string__f_43_43_2_f_0(hlds__hlds_error_util__V_29_29, hlds__hlds_error_util__V_30_30);
          }
#line 207 "hlds_error_util.m"
        }
#line 206 "hlds_error_util.m"
        break;
#line 206 "hlds_error_util.m"
      case (MR_Integer) 0:
#line 280 "hlds_error_util.m"
        if ((hlds__hlds_error_util__StrippedArgModes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "hlds_error_util.m"
          hlds__hlds_error_util__ArgModesPart_21 = (MR_String) "";
#line 280 "hlds_error_util.m"
        else
#line 283 "hlds_error_util.m"
          {
#line 283 "hlds_error_util.m"
            MR_String hlds__hlds_error_util__ArgsStr_61;
#line 283 "hlds_error_util.m"
            MR_String hlds__hlds_error_util__V_64_64;

#line 284 "hlds_error_util.m"
            {
#line 284 "hlds_error_util.m"
              hlds__hlds_error_util__ArgsStr_61 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0((MR_Integer) 1, hlds__hlds_error_util__InstVarSet_10, hlds__hlds_error_util__StrippedArgModes_20);
            }
#line 286 "hlds_error_util.m"
            {
#line 286 "hlds_error_util.m"
              hlds__hlds_error_util__V_64_64 = mercury__string__f_43_43_2_f_0(hlds__hlds_error_util__ArgsStr_61, (MR_String) ")");
            }
#line 286 "hlds_error_util.m"
            {
#line 286 "hlds_error_util.m"
              hlds__hlds_error_util__ArgModesPart_21 = mercury__string__f_43_43_2_f_0((MR_String) "(", hlds__hlds_error_util__V_64_64);
            }
#line 283 "hlds_error_util.m"
          }
#line 206 "hlds_error_util.m"
        break;
#line 206 "hlds_error_util.m"
    }
#line 269 "hlds_error_util.m"
#line 269 "hlds_error_util.m"
    switch (hlds__hlds_error_util__ShouldModuleQualify_8) {
#line 269 "hlds_error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 269 "hlds_error_util.m"
      case (MR_Integer) 0:
#line 269 "hlds_error_util.m"
        {
#line 269 "hlds_error_util.m"
          MR_String hlds__hlds_error_util__V_69_69;

#line 270 "hlds_error_util.m"
          {
#line 270 "hlds_error_util.m"
            hlds__hlds_error_util__V_69_69 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_error_util__ModuleName_14);
          }
#line 270 "hlds_error_util.m"
          {
#line 270 "hlds_error_util.m"
            hlds__hlds_error_util__V_37_37 = mercury__string__f_43_43_2_f_0(hlds__hlds_error_util__V_69_69, (MR_String) ".");
          }
#line 269 "hlds_error_util.m"
        }
#line 269 "hlds_error_util.m"
        break;
#line 269 "hlds_error_util.m"
      case (MR_Integer) 1:
#line 273 "hlds_error_util.m"
        hlds__hlds_error_util__V_37_37 = (MR_String) "";
#line 269 "hlds_error_util.m"
        break;
#line 269 "hlds_error_util.m"
    }
#line 217 "hlds_error_util.m"
    {
#line 217 "hlds_error_util.m"
      hlds__hlds_error_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_41_41, 0) = ((MR_Box) (hlds__hlds_error_util__ArgModesPart_21));
#line 217 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "hlds_error_util.m"
    }
#line 216 "hlds_error_util.m"
    {
#line 216 "hlds_error_util.m"
      hlds__hlds_error_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_39_39, 0) = ((MR_Box) ((MR_String) "\'"));
#line 216 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_39_39, 1) = ((MR_Box) (hlds__hlds_error_util__V_41_41));
#line 216 "hlds_error_util.m"
    }
#line 215 "hlds_error_util.m"
    {
#line 215 "hlds_error_util.m"
      hlds__hlds_error_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_38_38, 0) = ((MR_Box) (hlds__hlds_error_util__PredName_15));
#line 215 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_38_38, 1) = ((MR_Box) (hlds__hlds_error_util__V_39_39));
#line 215 "hlds_error_util.m"
    }
#line 214 "hlds_error_util.m"
    {
#line 214 "hlds_error_util.m"
      hlds__hlds_error_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_36_36, 0) = ((MR_Box) (hlds__hlds_error_util__V_37_37));
#line 214 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_36_36, 1) = ((MR_Box) (hlds__hlds_error_util__V_38_38));
#line 214 "hlds_error_util.m"
    }
#line 213 "hlds_error_util.m"
    {
#line 213 "hlds_error_util.m"
      hlds__hlds_error_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_34_34, 0) = ((MR_Box) ((MR_String) "\140"));
#line 213 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_34_34, 1) = ((MR_Box) (hlds__hlds_error_util__V_36_36));
#line 213 "hlds_error_util.m"
    }
#line 212 "hlds_error_util.m"
    {
#line 212 "hlds_error_util.m"
      mercury__string__append_list_2_p_0(hlds__hlds_error_util__V_34_34, &hlds__hlds_error_util__Descr_24);
    }
#line 218 "hlds_error_util.m"
    {
#line 218 "hlds_error_util.m"
      hlds__hlds_error_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "hlds_error_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 218 "hlds_error_util.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_43_43, 1) = ((MR_Box) (hlds__hlds_error_util__Descr_24));
#line 218 "hlds_error_util.m"
    }
#line 218 "hlds_error_util.m"
    {
#line 218 "hlds_error_util.m"
      hlds__hlds_error_util__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__Pieces_12, 0) = ((MR_Box) (hlds__hlds_error_util__V_43_43));
#line 218 "hlds_error_util.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__Pieces_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "hlds_error_util.m"
    }
#line 189 "hlds_error_util.m"
    return hlds__hlds_error_util__Pieces_12;
#line 189 "hlds_error_util.m"
  }
#line 51 "hlds_error_util.m"
}

#line 48 "hlds_error_util.m"
MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_pred_info_name_2_f_0(
#line 48 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ShouldModuleQualify_4,
#line 48 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__PredInfo_5)
#line 48 "hlds_error_util.m"
{
#line 140 "hlds_error_util.m"
  {
#line 140 "hlds_error_util.m"
    MR_bool hlds__hlds_error_util__succeeded;
#line 140 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__Pieces_6;
#line 140 "hlds_error_util.m"
    MR_String hlds__hlds_error_util__PredName_7;
#line 140 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__ModuleName_8;
#line 140 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util__Arity_9;
#line 140 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__PredOrFunc_10;
#line 140 "hlds_error_util.m"
    MR_Integer hlds__hlds_error_util__OrigArity_11;
#line 140 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__Markers_12;
#line 140 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__Origin_13;
#line 150 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__SpecialId_14;
#line 150 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__TypeCtor_15;

#line 143 "hlds_error_util.m"
    {
#line 143 "hlds_error_util.m"
      hlds__hlds_error_util__PredName_7 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_error_util__PredInfo_5);
    }
#line 144 "hlds_error_util.m"
    {
#line 144 "hlds_error_util.m"
      hlds__hlds_error_util__ModuleName_8 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_error_util__PredInfo_5);
    }
#line 145 "hlds_error_util.m"
    {
#line 145 "hlds_error_util.m"
      hlds__hlds_error_util__Arity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_error_util__PredInfo_5);
    }
#line 146 "hlds_error_util.m"
    {
#line 146 "hlds_error_util.m"
      hlds__hlds_error_util__PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_error_util__PredInfo_5);
    }
#line 147 "hlds_error_util.m"
    {
#line 147 "hlds_error_util.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__hlds_error_util__PredOrFunc_10, &hlds__hlds_error_util__OrigArity_11, hlds__hlds_error_util__Arity_9);
    }
#line 148 "hlds_error_util.m"
    {
#line 148 "hlds_error_util.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__hlds_error_util__PredInfo_5, &hlds__hlds_error_util__Markers_12);
    }
#line 149 "hlds_error_util.m"
    {
#line 149 "hlds_error_util.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_error_util__PredInfo_5, &hlds__hlds_error_util__Origin_13);
    }
#line 150 "hlds_error_util.m"
    hlds__hlds_error_util__succeeded = ((MR_tag((MR_Word) hlds__hlds_error_util__Origin_13)) == (MR_mktag((MR_Integer) 0)));
#line 150 "hlds_error_util.m"
    if (hlds__hlds_error_util__succeeded)
#line 150 "hlds_error_util.m"
      {
#line 150 "hlds_error_util.m"
        hlds__hlds_error_util__SpecialId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__Origin_13, (MR_Integer) 0)));
#line 150 "hlds_error_util.m"
        hlds__hlds_error_util__TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__Origin_13, (MR_Integer) 1)));
#line 151 "hlds_error_util.m"
        {
#line 151 "hlds_error_util.m"
          MR_String hlds__hlds_error_util__Descr_16;
#line 151 "hlds_error_util.m"
          MR_Word hlds__hlds_error_util__TypeSymName0_17;
#line 151 "hlds_error_util.m"
          MR_Integer hlds__hlds_error_util__TypeArity_18;
#line 151 "hlds_error_util.m"
          MR_Word hlds__hlds_error_util__TypeSymName_19;

#line 151 "hlds_error_util.m"
          {
#line 151 "hlds_error_util.m"
            hlds__special_pred__special_pred_description_2_p_0(hlds__hlds_error_util__SpecialId_14, &hlds__hlds_error_util__Descr_16);
          }
#line 152 "hlds_error_util.m"
          hlds__hlds_error_util__TypeSymName0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__TypeCtor_15, (MR_Integer) 0)));
#line 152 "hlds_error_util.m"
          hlds__hlds_error_util__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_error_util__TypeCtor_15, (MR_Integer) 1)));
#line 156 "hlds_error_util.m"
#line 156 "hlds_error_util.m"
          switch (hlds__hlds_error_util__ShouldModuleQualify_4) {
#line 156 "hlds_error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 156 "hlds_error_util.m"
            case (MR_Integer) 0:
#line 155 "hlds_error_util.m"
              hlds__hlds_error_util__TypeSymName_19 = hlds__hlds_error_util__TypeSymName0_17;
#line 156 "hlds_error_util.m"
              break;
#line 156 "hlds_error_util.m"
            case (MR_Integer) 1:
#line 157 "hlds_error_util.m"
              {
#line 157 "hlds_error_util.m"
                MR_String hlds__hlds_error_util__V_23_23;

#line 158 "hlds_error_util.m"
                {
#line 158 "hlds_error_util.m"
                  hlds__hlds_error_util__V_23_23 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__hlds_error_util__TypeSymName0_17);
                }
#line 158 "hlds_error_util.m"
                {
#line 158 "hlds_error_util.m"
                  hlds__hlds_error_util__TypeSymName_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 158 "hlds_error_util.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_error_util__TypeSymName_19, 0) = ((MR_Box) (hlds__hlds_error_util__V_23_23));
#line 158 "hlds_error_util.m"
                }
#line 157 "hlds_error_util.m"
              }
#line 156 "hlds_error_util.m"
              break;
#line 156 "hlds_error_util.m"
          }
#line 160 "hlds_error_util.m"
          hlds__hlds_error_util__succeeded = (hlds__hlds_error_util__TypeArity_18 == (MR_Integer) 0);
#line 160 "hlds_error_util.m"
          if (hlds__hlds_error_util__succeeded)
#line 161 "hlds_error_util.m"
            {
#line 161 "hlds_error_util.m"
              MR_Word hlds__hlds_error_util__V_24_24;
#line 161 "hlds_error_util.m"
              MR_Word hlds__hlds_error_util__V_25_25;
#line 161 "hlds_error_util.m"
              MR_Word hlds__hlds_error_util__V_28_28;
#line 161 "hlds_error_util.m"
              MR_Word hlds__hlds_error_util__V_29_29;

#line 161 "hlds_error_util.m"
              {
#line 161 "hlds_error_util.m"
                hlds__hlds_error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "hlds_error_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 161 "hlds_error_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_24_24, 1) = ((MR_Box) (hlds__hlds_error_util__Descr_16));
#line 161 "hlds_error_util.m"
              }
#line 162 "hlds_error_util.m"
              {
#line 162 "hlds_error_util.m"
                hlds__hlds_error_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "hlds_error_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 162 "hlds_error_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_29_29, 1) = ((MR_Box) (hlds__hlds_error_util__TypeSymName_19));
#line 162 "hlds_error_util.m"
              }
#line 162 "hlds_error_util.m"
              {
#line 162 "hlds_error_util.m"
                hlds__hlds_error_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "hlds_error_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_28_28, 0) = ((MR_Box) (hlds__hlds_error_util__V_29_29));
#line 162 "hlds_error_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 162 "hlds_error_util.m"
              }
#line 161 "hlds_error_util.m"
              {
#line 161 "hlds_error_util.m"
                hlds__hlds_error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "hlds_error_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[1])));
#line 161 "hlds_error_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_25_25, 1) = ((MR_Box) (hlds__hlds_error_util__V_28_28));
#line 161 "hlds_error_util.m"
              }
#line 161 "hlds_error_util.m"
              {
#line 161 "hlds_error_util.m"
                hlds__hlds_error_util__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "hlds_error_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_error_util__Pieces_6, 0) = ((MR_Box) (hlds__hlds_error_util__V_24_24));
#line 161 "hlds_error_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_error_util__Pieces_6, 1) = ((MR_Box) (hlds__hlds_error_util__V_25_25));
#line 161 "hlds_error_util.m"
              }
#line 161 "hlds_error_util.m"
            }
#line 160 "hlds_error_util.m"
          else
#line 164 "hlds_error_util.m"
            {
#line 164 "hlds_error_util.m"
              MR_Word hlds__hlds_error_util__V_31_31;
#line 164 "hlds_error_util.m"
              MR_Word hlds__hlds_error_util__V_32_32;
#line 164 "hlds_error_util.m"
              MR_Word hlds__hlds_error_util__V_35_35;
#line 164 "hlds_error_util.m"
              MR_Word hlds__hlds_error_util__V_36_36;

#line 164 "hlds_error_util.m"
              {
#line 164 "hlds_error_util.m"
                hlds__hlds_error_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "hlds_error_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 164 "hlds_error_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_31_31, 1) = ((MR_Box) (hlds__hlds_error_util__Descr_16));
#line 164 "hlds_error_util.m"
              }
#line 165 "hlds_error_util.m"
              {
#line 165 "hlds_error_util.m"
                hlds__hlds_error_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "hlds_error_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 165 "hlds_error_util.m"
                MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_36_36, 1) = ((MR_Box) (hlds__hlds_error_util__TypeSymName_19));
#line 165 "hlds_error_util.m"
              }
#line 165 "hlds_error_util.m"
              {
#line 165 "hlds_error_util.m"
                hlds__hlds_error_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "hlds_error_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_35_35, 0) = ((MR_Box) (hlds__hlds_error_util__V_36_36));
#line 165 "hlds_error_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 165 "hlds_error_util.m"
              }
#line 164 "hlds_error_util.m"
              {
#line 164 "hlds_error_util.m"
                hlds__hlds_error_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "hlds_error_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[2])));
#line 164 "hlds_error_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_32_32, 1) = ((MR_Box) (hlds__hlds_error_util__V_35_35));
#line 164 "hlds_error_util.m"
              }
#line 164 "hlds_error_util.m"
              {
#line 164 "hlds_error_util.m"
                hlds__hlds_error_util__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "hlds_error_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_error_util__Pieces_6, 0) = ((MR_Box) (hlds__hlds_error_util__V_31_31));
#line 164 "hlds_error_util.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_error_util__Pieces_6, 1) = ((MR_Box) (hlds__hlds_error_util__V_32_32));
#line 164 "hlds_error_util.m"
              }
#line 164 "hlds_error_util.m"
            }
#line 151 "hlds_error_util.m"
        }
#line 150 "hlds_error_util.m"
      }
#line 150 "hlds_error_util.m"
    else
#line 167 "hlds_error_util.m"
      {
#line 167 "hlds_error_util.m"
        {
#line 167 "hlds_error_util.m"
          hlds__hlds_error_util__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__hlds_error_util__Markers_12, (MR_Integer) 10);
        }
#line 167 "hlds_error_util.m"
        if (hlds__hlds_error_util__succeeded)
#line 168 "hlds_error_util.m"
          {
#line 168 "hlds_error_util.m"
            hlds__hlds_error_util__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_error_util_scalar_common_1[4]);
#line 168 "hlds_error_util.m"
          }
#line 167 "hlds_error_util.m"
        else
#line 169 "hlds_error_util.m"
          {
#line 169 "hlds_error_util.m"
            MR_Word hlds__hlds_error_util__PromiseType_20;

#line 169 "hlds_error_util.m"
            {
#line 169 "hlds_error_util.m"
              hlds__hlds_error_util__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(hlds__hlds_error_util__PredInfo_5, &hlds__hlds_error_util__PromiseType_20);
            }
#line 169 "hlds_error_util.m"
            if (hlds__hlds_error_util__succeeded)
#line 170 "hlds_error_util.m"
              {
#line 170 "hlds_error_util.m"
                MR_Word hlds__hlds_error_util__V_42_42;
#line 170 "hlds_error_util.m"
                MR_String hlds__hlds_error_util__V_43_43;

#line 170 "hlds_error_util.m"
                {
#line 170 "hlds_error_util.m"
                  hlds__hlds_error_util__V_43_43 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__hlds_error_util__PromiseType_20);
                }
#line 170 "hlds_error_util.m"
                {
#line 170 "hlds_error_util.m"
                  hlds__hlds_error_util__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "hlds_error_util.m"
                  MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 170 "hlds_error_util.m"
                  MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_42_42, 1) = ((MR_Box) (hlds__hlds_error_util__V_43_43));
#line 170 "hlds_error_util.m"
                }
#line 170 "hlds_error_util.m"
                {
#line 170 "hlds_error_util.m"
                  hlds__hlds_error_util__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "hlds_error_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_error_util__Pieces_6, 0) = ((MR_Box) (hlds__hlds_error_util__V_42_42));
#line 170 "hlds_error_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_error_util__Pieces_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_error_util_scalar_common_1[6])));
#line 170 "hlds_error_util.m"
                }
#line 170 "hlds_error_util.m"
              }
#line 169 "hlds_error_util.m"
            else
#line 177 "hlds_error_util.m"
              {
#line 177 "hlds_error_util.m"
                MR_Word hlds__hlds_error_util__Prefix_21;
#line 177 "hlds_error_util.m"
                MR_Word hlds__hlds_error_util__PredSymName_22;
#line 177 "hlds_error_util.m"
                MR_Word hlds__hlds_error_util__V_59_59;
#line 177 "hlds_error_util.m"
                MR_Word hlds__hlds_error_util__V_60_60;
#line 177 "hlds_error_util.m"
                MR_Word hlds__hlds_error_util__V_61_61;

#line 173 "hlds_error_util.m"
                {
#line 173 "hlds_error_util.m"
                  hlds__hlds_error_util__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__hlds_error_util__Markers_12, (MR_Integer) 9);
                }
#line 173 "hlds_error_util.m"
                if (hlds__hlds_error_util__succeeded)
#line 174 "hlds_error_util.m"
                  {
#line 174 "hlds_error_util.m"
                    MR_Word hlds__hlds_error_util__V_51_51;
#line 174 "hlds_error_util.m"
                    MR_Word hlds__hlds_error_util__V_52_52;

#line 174 "hlds_error_util.m"
                    {
#line 174 "hlds_error_util.m"
                      hlds__hlds_error_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 174 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_52_52, 1) = ((MR_Box) (hlds__hlds_error_util__PredOrFunc_10));
#line 174 "hlds_error_util.m"
                    }
#line 174 "hlds_error_util.m"
                    {
#line 174 "hlds_error_util.m"
                      hlds__hlds_error_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_51_51, 0) = ((MR_Box) (hlds__hlds_error_util__V_52_52));
#line 174 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_error_util_scalar_common_1[9])));
#line 174 "hlds_error_util.m"
                    }
#line 174 "hlds_error_util.m"
                    {
#line 174 "hlds_error_util.m"
                      hlds__hlds_error_util__Prefix_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__Prefix_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[7])));
#line 174 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__Prefix_21, 1) = ((MR_Box) (hlds__hlds_error_util__V_51_51));
#line 174 "hlds_error_util.m"
                    }
#line 174 "hlds_error_util.m"
                  }
#line 173 "hlds_error_util.m"
                else
#line 176 "hlds_error_util.m"
                  {
#line 176 "hlds_error_util.m"
                    MR_Word hlds__hlds_error_util__V_57_57;

#line 176 "hlds_error_util.m"
                    {
#line 176 "hlds_error_util.m"
                      hlds__hlds_error_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 176 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_57_57, 1) = ((MR_Box) (hlds__hlds_error_util__PredOrFunc_10));
#line 176 "hlds_error_util.m"
                    }
#line 176 "hlds_error_util.m"
                    {
#line 176 "hlds_error_util.m"
                      hlds__hlds_error_util__Prefix_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__Prefix_21, 0) = ((MR_Box) (hlds__hlds_error_util__V_57_57));
#line 176 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__Prefix_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 176 "hlds_error_util.m"
                    }
#line 176 "hlds_error_util.m"
                  }
#line 181 "hlds_error_util.m"
#line 181 "hlds_error_util.m"
                switch (hlds__hlds_error_util__ShouldModuleQualify_4) {
#line 181 "hlds_error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 181 "hlds_error_util.m"
                  case (MR_Integer) 0:
#line 180 "hlds_error_util.m"
                    {
#line 180 "hlds_error_util.m"
                      hlds__hlds_error_util__PredSymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__PredSymName_22, 0) = ((MR_Box) (hlds__hlds_error_util__ModuleName_8));
#line 180 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(1), hlds__hlds_error_util__PredSymName_22, 1) = ((MR_Box) (hlds__hlds_error_util__PredName_7));
#line 180 "hlds_error_util.m"
                    }
#line 181 "hlds_error_util.m"
                    break;
#line 181 "hlds_error_util.m"
                  case (MR_Integer) 1:
#line 183 "hlds_error_util.m"
                    {
#line 183 "hlds_error_util.m"
                      hlds__hlds_error_util__PredSymName_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 183 "hlds_error_util.m"
                      MR_hl_field(MR_mktag(0), hlds__hlds_error_util__PredSymName_22, 0) = ((MR_Box) (hlds__hlds_error_util__PredName_7));
#line 183 "hlds_error_util.m"
                    }
#line 181 "hlds_error_util.m"
                    break;
#line 181 "hlds_error_util.m"
                }
#line 185 "hlds_error_util.m"
                {
#line 185 "hlds_error_util.m"
                  hlds__hlds_error_util__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "hlds_error_util.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_61_61, 0) = ((MR_Box) (hlds__hlds_error_util__PredSymName_22));
#line 185 "hlds_error_util.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_error_util__V_61_61, 1) = ((MR_Box) (hlds__hlds_error_util__OrigArity_11));
#line 185 "hlds_error_util.m"
                }
#line 185 "hlds_error_util.m"
                {
#line 185 "hlds_error_util.m"
                  hlds__hlds_error_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "hlds_error_util.m"
                  MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 185 "hlds_error_util.m"
                  MR_hl_field(MR_mktag(3), hlds__hlds_error_util__V_60_60, 1) = ((MR_Box) (hlds__hlds_error_util__V_61_61));
#line 185 "hlds_error_util.m"
                }
#line 185 "hlds_error_util.m"
                {
#line 185 "hlds_error_util.m"
                  hlds__hlds_error_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "hlds_error_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_59_59, 0) = ((MR_Box) (hlds__hlds_error_util__V_60_60));
#line 185 "hlds_error_util.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_error_util__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "hlds_error_util.m"
                }
#line 185 "hlds_error_util.m"
                {
#line 185 "hlds_error_util.m"
                  hlds__hlds_error_util__Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__hlds_error_util__Prefix_21, hlds__hlds_error_util__V_59_59);
                }
#line 177 "hlds_error_util.m"
              }
#line 169 "hlds_error_util.m"
          }
#line 167 "hlds_error_util.m"
      }
#line 140 "hlds_error_util.m"
    return hlds__hlds_error_util__Pieces_6;
#line 140 "hlds_error_util.m"
  }
#line 48 "hlds_error_util.m"
}

#line 45 "hlds_error_util.m"
MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_3_f_0(
#line 45 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ModuleInfo_5,
#line 45 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__ShouldModuleQualify_6,
#line 45 "hlds_error_util.m"
  MR_Word hlds__hlds_error_util__PredId_7)
#line 45 "hlds_error_util.m"
{
#line 136 "hlds_error_util.m"
  {
#line 136 "hlds_error_util.m"
    MR_bool hlds__hlds_error_util__succeeded;
#line 136 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__Pieces_8;
#line 136 "hlds_error_util.m"
    MR_Word hlds__hlds_error_util__PredInfo_9;

#line 137 "hlds_error_util.m"
    {
#line 137 "hlds_error_util.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_error_util__ModuleInfo_5, hlds__hlds_error_util__PredId_7, &hlds__hlds_error_util__PredInfo_9);
    }
#line 138 "hlds_error_util.m"
    {
#line 138 "hlds_error_util.m"
      hlds__hlds_error_util__Pieces_8 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0(hlds__hlds_error_util__ShouldModuleQualify_6, hlds__hlds_error_util__PredInfo_9);
    }
#line 136 "hlds_error_util.m"
    return hlds__hlds_error_util__Pieces_8;
#line 136 "hlds_error_util.m"
  }
#line 45 "hlds_error_util.m"
}

void mercury__hlds__hlds_error_util__init(void)
{
}

void mercury__hlds__hlds_error_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0);
}

void mercury__hlds__hlds_error_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_error_util. */
