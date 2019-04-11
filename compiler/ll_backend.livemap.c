/*
** Automatically generated from `livemap.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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


/* :- module ll_backend.livemap. */
/* :- implementation. */

/*
INIT mercury__ll_backend__livemap__init
ENDINIT
*/

#include "ll_backend.livemap.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
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
#include "counter.mih"
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




static const MR_FA_TypeInfo_Struct1 ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__livemap__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__livemap__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static MR_bool MR_CALL 
ll_backend__livemap____Unify____livemap_0_0_10001(
  MR_Box ll_backend__livemap__wrapper_arg_1,
  MR_Box ll_backend__livemap__wrapper_arg_2);

static void MR_CALL 
ll_backend__livemap____Compare____livemap_0_0_10001(
  MR_Box * ll_backend__livemap__wrapper_arg_1,
  MR_Box ll_backend__livemap__wrapper_arg_2,
  MR_Box ll_backend__livemap__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__livemap____Unify____lvalset_0_0_10001(
  MR_Box ll_backend__livemap__wrapper_arg_1,
  MR_Box ll_backend__livemap__wrapper_arg_2);

static void MR_CALL 
ll_backend__livemap____Compare____lvalset_0_0_10001(
  MR_Box * ll_backend__livemap__wrapper_arg_1,
  MR_Box ll_backend__livemap__wrapper_arg_2,
  MR_Box ll_backend__livemap__wrapper_arg_3);

static void MR_CALL 
ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_2,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_3);

static void MR_CALL 
ll_backend__livemap__livemap_insert_label_livevals_4_p_0(
  MR_Word ll_backend__livemap__Livemap_5,
  MR_Word ll_backend__livemap__Label_6,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_10,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_11);

static void MR_CALL 
ll_backend__livemap__livemap_insert_maybe_label_livevals_4_p_0(
  MR_Word ll_backend__livemap__Livemap_5,
  MR_Word ll_backend__livemap__MaybeLabel_6,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_9,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_10);

static void MR_CALL 
ll_backend__livemap__make_live_in_rval_3_p_0(
  MR_Word ll_backend__livemap__Rval_4,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Live_0_21,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Live_22);

static void MR_CALL 
ll_backend__livemap__make_live_in_rvals_3_p_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Live_0_2,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Live_3);

static void MR_CALL 
ll_backend__livemap__livemap_special_code_addr_2_p_0(
  MR_Word ll_backend__livemap__CodeAddr_3,
  MR_Word * ll_backend__livemap__MaybeSpecial_4);

static void MR_CALL 
ll_backend__livemap__look_for_livevals_7_p_0(
  MR_Word ll_backend__livemap__Instrs0_8,
  MR_Word * ll_backend__livemap__Instrs_9,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_18,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_19,
  MR_String ll_backend__livemap__Site_11,
  MR_Word ll_backend__livemap__Compulsory_12,
  MR_Word * ll_backend__livemap__Found_13);

static void MR_CALL 
ll_backend__livemap__build_livemap_foreign_proc_inputs_3_p_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_2,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_3);

static void MR_CALL 
ll_backend__livemap__build_live_lval_info_7_p_0(
  MR_Word ll_backend__livemap__AffectsLiveness_8,
  MR_Word ll_backend__livemap__LiveLvalInfo_9,
  MR_String ll_backend__livemap__Code_10,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_15,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_16,
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_17,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18);

static void MR_CALL 
ll_backend__livemap__build_livemap_foreign_proc_components_5_p_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_2,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_3,
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_5);

static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0_1(
  MR_Box ll_backend__livemap__closure_arg,
  MR_Box ll_backend__livemap__wrapper_arg_1,
  MR_Box ll_backend__livemap__wrapper_arg_2,
  MR_Box * ll_backend__livemap__wrapper_arg_3);

static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0(
  MR_Word ll_backend__livemap__Instr0_10,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Instrs_0_100,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Instrs_101,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_102,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_103,
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livemap_0_106,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livemap_107);

static void MR_CALL 
ll_backend__livemap__livemap_do_build_6_p_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__Livevals0_2,
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_3,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_4,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livemap_0_5,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livemap_6);

static MR_bool MR_CALL 
ll_backend__livemap__equal_livemaps_keys_3_p_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__HeadVar__2_2,
  MR_Word ll_backend__livemap__HeadVar__3_3);

static void MR_CALL 
ll_backend__livemap__build_livemap_fixpoint_4_p_0(
  MR_Word ll_backend__livemap__BackInstrs_5,
  MR_Word ll_backend__livemap__Livemap0_6,
  MR_Integer ll_backend__livemap__CurIteration_7,
  MR_Word * ll_backend__livemap__MaybeLivemap_8);


static /* final */ const MR_Box ll_backend__livemap_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__livemap_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__livemap_scalar_common_3[1][7];

static /* final */ const MR_Box ll_backend__livemap_scalar_common_4[5][1];




static /* final */ const MR_Box ll_backend__livemap_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__livemap_scalar_common_4[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__livemap_scalar_common_4[3]))
  },
};

static /* final */ const MR_Box ll_backend__livemap_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__livemap_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box ll_backend__livemap_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__livemap__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__livemap__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__livemap_scalar_common_4[5][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__livemap_scalar_common_1[3])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__livemap_scalar_common_1[4])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__livemap__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__livemap__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__livemap__ll_backend__livemap__type_ctor_info_livemap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__livemap____Unify____livemap_0_0_10001)),
  ((MR_Box) (ll_backend__livemap____Compare____livemap_0_0_10001)),
  (MR_String) "ll_backend.livemap",
  (MR_String) "livemap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__livemap__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct ll_backend__livemap__ll_backend__livemap__type_ctor_info_lvalset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__livemap____Unify____lvalset_0_0_10001)),
  ((MR_Box) (ll_backend__livemap____Compare____lvalset_0_0_10001)),
  (MR_String) "ll_backend.livemap",
  (MR_String) "lvalset",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
ll_backend__livemap____Unify____livemap_0_0_10001(
  MR_Box ll_backend__livemap__wrapper_arg_1,
  MR_Box ll_backend__livemap__wrapper_arg_2)
{
  {
    MR_bool ll_backend__livemap__succeeded;

    {
      ll_backend__livemap__succeeded = ll_backend__livemap____Unify____livemap_0_0(((MR_Word) ll_backend__livemap__wrapper_arg_1), ((MR_Word) ll_backend__livemap__wrapper_arg_2));
    }
    return ll_backend__livemap__succeeded;
  }
}

static void MR_CALL 
ll_backend__livemap____Compare____livemap_0_0_10001(
  MR_Box * ll_backend__livemap__wrapper_arg_1,
  MR_Box ll_backend__livemap__wrapper_arg_2,
  MR_Box ll_backend__livemap__wrapper_arg_3)
{
  {
    MR_Word ll_backend__livemap__conv0_HeadVar__1_1;

    {
      ll_backend__livemap____Compare____livemap_0_0(&ll_backend__livemap__conv0_HeadVar__1_1, ((MR_Word) ll_backend__livemap__wrapper_arg_2), ((MR_Word) ll_backend__livemap__wrapper_arg_3));
    }
    *ll_backend__livemap__wrapper_arg_1 = ((MR_Box) (ll_backend__livemap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__livemap____Unify____lvalset_0_0_10001(
  MR_Box ll_backend__livemap__wrapper_arg_1,
  MR_Box ll_backend__livemap__wrapper_arg_2)
{
  {
    MR_bool ll_backend__livemap__succeeded;

    {
      ll_backend__livemap__succeeded = ll_backend__livemap____Unify____lvalset_0_0(((MR_Word) ll_backend__livemap__wrapper_arg_1), ((MR_Word) ll_backend__livemap__wrapper_arg_2));
    }
    return ll_backend__livemap__succeeded;
  }
}

static void MR_CALL 
ll_backend__livemap____Compare____lvalset_0_0_10001(
  MR_Box * ll_backend__livemap__wrapper_arg_1,
  MR_Box ll_backend__livemap__wrapper_arg_2,
  MR_Box ll_backend__livemap__wrapper_arg_3)
{
  {
    MR_Word ll_backend__livemap__conv0_HeadVar__1_1;

    {
      ll_backend__livemap____Compare____lvalset_0_0(&ll_backend__livemap__conv0_HeadVar__1_1, ((MR_Word) ll_backend__livemap__wrapper_arg_2), ((MR_Word) ll_backend__livemap__wrapper_arg_3));
    }
    *ll_backend__livemap__wrapper_arg_1 = ((MR_Box) (ll_backend__livemap__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
ll_backend__livemap____Compare____lvalset_0_0(
  MR_Word * ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__HeadVar__2_2,
  MR_Word ll_backend__livemap__HeadVar__3_3)
{
  {
    MR_bool ll_backend__livemap__succeeded;
    MR_Word ll_backend__livemap__Cast_HeadVar1_4 = ll_backend__livemap__HeadVar__2_2;
    MR_Word ll_backend__livemap__Cast_HeadVar2_5 = ll_backend__livemap__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__livemap_scalar_common_1[0], ll_backend__livemap__HeadVar__1_1, ((MR_Box) (ll_backend__livemap__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__livemap__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ll_backend__livemap____Unify____lvalset_0_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__HeadVar__2_2)
{
  {
    MR_bool ll_backend__livemap__succeeded;
    MR_Word ll_backend__livemap__Cast_HeadVar1_3 = ll_backend__livemap__HeadVar__1_1;
    MR_Word ll_backend__livemap__Cast_HeadVar2_4 = ll_backend__livemap__HeadVar__2_2;

    {
      ll_backend__livemap__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__livemap_scalar_common_1[0], ((MR_Box) (ll_backend__livemap__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__livemap__Cast_HeadVar2_4)));
    }
    return ll_backend__livemap__succeeded;
  }
}

void MR_CALL 
ll_backend__livemap____Compare____livemap_0_0(
  MR_Word * ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__HeadVar__2_2,
  MR_Word ll_backend__livemap__HeadVar__3_3)
{
  {
    MR_bool ll_backend__livemap__succeeded;
    MR_Word ll_backend__livemap__Cast_HeadVar1_4 = ll_backend__livemap__HeadVar__2_2;
    MR_Word ll_backend__livemap__Cast_HeadVar2_5 = ll_backend__livemap__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__livemap_scalar_common_2[0], ll_backend__livemap__HeadVar__1_1, ((MR_Box) (ll_backend__livemap__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__livemap__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ll_backend__livemap____Unify____livemap_0_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__HeadVar__2_2)
{
  {
    MR_bool ll_backend__livemap__succeeded;
    MR_Word ll_backend__livemap__Cast_HeadVar1_3 = ll_backend__livemap__HeadVar__1_1;
    MR_Word ll_backend__livemap__Cast_HeadVar2_4 = ll_backend__livemap__HeadVar__2_2;

    {
      ll_backend__livemap__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__livemap_scalar_common_2[0], ((MR_Box) (ll_backend__livemap__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__livemap__Cast_HeadVar2_4)));
    }
    return ll_backend__livemap__succeeded;
  }
}

static void MR_CALL 
ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_2,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__livemap__succeeded;

        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__livemap__STATE_VARIABLE_Livevals_3 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
        else
          {
            MR_Word ll_backend__livemap__Live_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__livemap__Livelist_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_12_12;
            MR_Word ll_backend__livemap__Var_18;
            MR_Word ll_backend__livemap__Var_19;
            MR_Word ll_backend__livemap__Var_20;

            ll_backend__livemap__succeeded = ((((MR_tag((MR_Word) ll_backend__livemap__Live_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Live_7, (MR_Integer) 0)))) == (MR_Integer) 9)));
            if (ll_backend__livemap__succeeded)
              {
                ll_backend__livemap__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Live_7, (MR_Integer) 1)));
                ll_backend__livemap__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Live_7, (MR_Integer) 2)));
                ll_backend__livemap__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Live_7, (MR_Integer) 3)));
                ll_backend__livemap__STATE_VARIABLE_Livevals_12_12 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
              }
            else
              {
                {
                  mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Live_7)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_2, &ll_backend__livemap__STATE_VARIABLE_Livevals_12_12);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__livemap__next_value_of_HeadVar__1_1 = ll_backend__livemap__Livelist_8;
              MR_Word ll_backend__livemap__next_value_of_STATE_VARIABLE_Livevals_0_2 = ll_backend__livemap__STATE_VARIABLE_Livevals_12_12;

              ll_backend__livemap__STATE_VARIABLE_Livevals_0_2 = ll_backend__livemap__next_value_of_STATE_VARIABLE_Livevals_0_2;
              ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__livemap__livemap_insert_label_livevals_4_p_0(
  MR_Word ll_backend__livemap__Livemap_5,
  MR_Word ll_backend__livemap__Label_6,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_10,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_11)
{
  {
    MR_bool ll_backend__livemap__succeeded;
    MR_Word ll_backend__livemap__LabelLivevals_8;
    MR_Box ll_backend__livemap__conv0_LabelLivevals_8;

    {
      ll_backend__livemap__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__livemap_scalar_common_1[0], ll_backend__livemap__Livemap_5, ((MR_Box) (ll_backend__livemap__Label_6)), &ll_backend__livemap__conv0_LabelLivevals_8);
    }
    if (ll_backend__livemap__succeeded)
      {
        ll_backend__livemap__LabelLivevals_8 = ((MR_Word) ll_backend__livemap__conv0_LabelLivevals_8);
        ll_backend__livemap__succeeded = MR_TRUE;
      }
    if (ll_backend__livemap__succeeded)
      {
        MR_Word ll_backend__livemap__Livelist_9;

        {
          mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__livemap__LabelLivevals_8, &ll_backend__livemap__Livelist_9);
        }
        {
          ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(ll_backend__livemap__Livelist_9, ll_backend__livemap__STATE_VARIABLE_Livevals_0_10, ll_backend__livemap__STATE_VARIABLE_Livevals_11);
        }
      }
    else
      *ll_backend__livemap__STATE_VARIABLE_Livevals_11 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_10;
  }
}

static void MR_CALL 
ll_backend__livemap__livemap_insert_maybe_label_livevals_4_p_0(
  MR_Word ll_backend__livemap__Livemap_5,
  MR_Word ll_backend__livemap__MaybeLabel_6,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_9,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_10)
{
  {
    MR_bool ll_backend__livemap__succeeded;

    if ((ll_backend__livemap__MaybeLabel_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__livemap__STATE_VARIABLE_Livevals_10 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_9;
    else
      {
        MR_Word ll_backend__livemap__Label_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeLabel_6, (MR_Integer) 0)));
        MR_Word ll_backend__livemap__LabelLivevals_17;
        MR_Box ll_backend__livemap__conv0_LabelLivevals_17;

        {
          ll_backend__livemap__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__livemap_scalar_common_1[0], ll_backend__livemap__Livemap_5, ((MR_Box) (ll_backend__livemap__Label_8)), &ll_backend__livemap__conv0_LabelLivevals_17);
        }
        if (ll_backend__livemap__succeeded)
          {
            ll_backend__livemap__LabelLivevals_17 = ((MR_Word) ll_backend__livemap__conv0_LabelLivevals_17);
            ll_backend__livemap__succeeded = MR_TRUE;
          }
        if (ll_backend__livemap__succeeded)
          {
            MR_Word ll_backend__livemap__Livelist_18;

            {
              mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__livemap__LabelLivevals_17, &ll_backend__livemap__Livelist_18);
            }
            {
              ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(ll_backend__livemap__Livelist_18, ll_backend__livemap__STATE_VARIABLE_Livevals_0_9, ll_backend__livemap__STATE_VARIABLE_Livevals_10);
            }
          }
        else
          *ll_backend__livemap__STATE_VARIABLE_Livevals_10 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_9;
      }
  }
}

static void MR_CALL 
ll_backend__livemap__make_live_in_rval_3_p_0(
  MR_Word ll_backend__livemap__Rval_4,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Live_0_21,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Live_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__livemap__succeeded;

        switch (MR_tag((MR_Word) ll_backend__livemap__Rval_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__livemap__Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Rval_4, (MR_Integer) 0)));
              MR_Word ll_backend__livemap__AccessRvals_10;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Live_31_31;
              MR_Word ll_backend__livemap__Var_7;
              MR_Word ll_backend__livemap__Var_8;
              MR_Word ll_backend__livemap__Var_9;

              ll_backend__livemap__succeeded = ((((MR_tag((MR_Word) ll_backend__livemap__Lval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_6, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (ll_backend__livemap__succeeded)
                {
                  ll_backend__livemap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_6, (MR_Integer) 1)));
                  ll_backend__livemap__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_6, (MR_Integer) 2)));
                  ll_backend__livemap__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_6, (MR_Integer) 3)));
                  ll_backend__livemap__STATE_VARIABLE_Live_31_31 = ll_backend__livemap__STATE_VARIABLE_Live_0_21;
                }
              else
                {
                  {
                    mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_6)), ll_backend__livemap__STATE_VARIABLE_Live_0_21, &ll_backend__livemap__STATE_VARIABLE_Live_31_31);
                  }
                }
              {
                ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_6, &ll_backend__livemap__AccessRvals_10);
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__AccessRvals_10, ll_backend__livemap__STATE_VARIABLE_Live_31_31, ll_backend__livemap__STATE_VARIABLE_Live_22);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.make_live_in_rval\'/3", (MR_String) "var rval should not propagate to the optimizer");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__livemap__SubRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__livemap__Rval_4, (MR_Integer) 1)));
              MR_Integer ll_backend__livemap__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__livemap__Rval_4, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__livemap__next_value_of_Rval_4 = ll_backend__livemap__SubRval_12;

                ll_backend__livemap__Rval_4 = ll_backend__livemap__next_value_of_Rval_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Rval_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__livemap__STATE_VARIABLE_Live_22 = ll_backend__livemap__STATE_VARIABLE_Live_0_21;
                break;
              case (MR_Integer) 1:
                *ll_backend__livemap__STATE_VARIABLE_Live_22 = ll_backend__livemap__STATE_VARIABLE_Live_0_21;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__livemap__SubRvalA_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Rval_4, (MR_Integer) 2)));
                  MR_Word ll_backend__livemap__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__livemap__next_value_of_Rval_4 = ll_backend__livemap__SubRvalA_16;

                    ll_backend__livemap__Rval_4 = ll_backend__livemap__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__livemap__SubRvalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Rval_4, (MR_Integer) 3)));
                  MR_Word ll_backend__livemap__STATE_VARIABLE_Live_27_27;
                  MR_Word ll_backend__livemap__SubRvalA_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Rval_4, (MR_Integer) 2)));
                  MR_Word ll_backend__livemap__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Rval_4, (MR_Integer) 1)));

                  {
                    ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__SubRvalA_33, ll_backend__livemap__STATE_VARIABLE_Live_0_21, &ll_backend__livemap__STATE_VARIABLE_Live_27_27);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__livemap__next_value_of_Rval_4 = ll_backend__livemap__SubRvalB_18;
                    MR_Word ll_backend__livemap__next_value_of_STATE_VARIABLE_Live_0_21 = ll_backend__livemap__STATE_VARIABLE_Live_27_27;

                    ll_backend__livemap__STATE_VARIABLE_Live_0_21 = ll_backend__livemap__next_value_of_STATE_VARIABLE_Live_0_21;
                    ll_backend__livemap__Rval_4 = ll_backend__livemap__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__livemap__MemRef_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Rval_4, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ll_backend__livemap__MemRef_20)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ll_backend__livemap__Rval_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__MemRef_20, (MR_Integer) 0)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__livemap__next_value_of_Rval_4 = ll_backend__livemap__Rval_39;

                          ll_backend__livemap__Rval_4 = ll_backend__livemap__next_value_of_Rval_4;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__livemap__Rval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MemRef_20, (MR_Integer) 0)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__livemap__next_value_of_Rval_4 = ll_backend__livemap__Rval_47;

                          ll_backend__livemap__Rval_4 = ll_backend__livemap__next_value_of_Rval_4;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ll_backend__livemap__CellPtrRval_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__livemap__MemRef_20, (MR_Integer) 0)));
                        MR_Word ll_backend__livemap__FieldNumRval_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__livemap__MemRef_20, (MR_Integer) 2)));
                        MR_Word ll_backend__livemap__STATE_VARIABLE_Live_12_43;
                        MR_Word ll_backend__livemap___MaybeTag_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__livemap__MemRef_20, (MR_Integer) 1)));

                        {
                          ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__CellPtrRval_40, ll_backend__livemap__STATE_VARIABLE_Live_0_21, &ll_backend__livemap__STATE_VARIABLE_Live_12_43);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__livemap__next_value_of_Rval_4 = ll_backend__livemap__FieldNumRval_42;
                          MR_Word ll_backend__livemap__next_value_of_STATE_VARIABLE_Live_0_21 = ll_backend__livemap__STATE_VARIABLE_Live_12_43;

                          ll_backend__livemap__STATE_VARIABLE_Live_0_21 = ll_backend__livemap__next_value_of_STATE_VARIABLE_Live_0_21;
                          ll_backend__livemap__Rval_4 = ll_backend__livemap__next_value_of_Rval_4;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__livemap__make_live_in_rvals_3_p_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Live_0_2,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Live_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__livemap__succeeded;

        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__livemap__STATE_VARIABLE_Live_3 = ll_backend__livemap__STATE_VARIABLE_Live_0_2;
        else
          {
            MR_Word ll_backend__livemap__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__livemap__Rvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__livemap__STATE_VARIABLE_Live_12_12;

            {
              ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Rval_7, ll_backend__livemap__STATE_VARIABLE_Live_0_2, &ll_backend__livemap__STATE_VARIABLE_Live_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__livemap__next_value_of_HeadVar__1_1 = ll_backend__livemap__Rvals_8;
              MR_Word ll_backend__livemap__next_value_of_STATE_VARIABLE_Live_0_2 = ll_backend__livemap__STATE_VARIABLE_Live_12_12;

              ll_backend__livemap__STATE_VARIABLE_Live_0_2 = ll_backend__livemap__next_value_of_STATE_VARIABLE_Live_0_2;
              ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__livemap__livemap_special_code_addr_2_p_0(
  MR_Word ll_backend__livemap__CodeAddr_3,
  MR_Word * ll_backend__livemap__MaybeSpecial_4)
{
  {
    MR_bool ll_backend__livemap__succeeded;

    switch (MR_tag((MR_Word) ll_backend__livemap__CodeAddr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__livemap__CodeAddr_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__livemap__MaybeSpecial_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__livemap_scalar_common_4[0]);
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__livemap__MaybeSpecial_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__livemap_scalar_common_4[2]);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            *ll_backend__livemap__MaybeSpecial_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *ll_backend__livemap__MaybeSpecial_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__CodeAddr_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__livemap__MaybeSpecial_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__livemap_scalar_common_4[4]);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *ll_backend__livemap__MaybeSpecial_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__livemap__look_for_livevals_7_p_0(
  MR_Word ll_backend__livemap__Instrs0_8,
  MR_Word * ll_backend__livemap__Instrs_9,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_18,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_19,
  MR_String ll_backend__livemap__Site_11,
  MR_Word ll_backend__livemap__Compulsory_12,
  MR_Word * ll_backend__livemap__Found_13)
{
  {
    MR_bool ll_backend__livemap__succeeded;
    MR_Word ll_backend__livemap__Instrs1_14;
    MR_Word ll_backend__livemap__Livevals1_15;
    MR_Word ll_backend__livemap__Instrs2_17;
    MR_Word ll_backend__livemap__Var_20;
    MR_Word ll_backend__livemap__Var_21;
    MR_String ll_backend__livemap__Var_16;

    {
      ll_backend__opt_util__skip_comments_2_p_0(ll_backend__livemap__Instrs0_8, &ll_backend__livemap__Instrs1_14);
    }
    ll_backend__livemap__succeeded = ((MR_tag((MR_Word) ll_backend__livemap__Instrs1_14)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__livemap__succeeded)
      {
        ll_backend__livemap__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__Instrs1_14, (MR_Integer) 0)));
        ll_backend__livemap__Instrs2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__Instrs1_14, (MR_Integer) 1)));
        ll_backend__livemap__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Var_20, (MR_Integer) 0)));
        ll_backend__livemap__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Var_20, (MR_Integer) 1)));
        ll_backend__livemap__succeeded = ((MR_tag((MR_Word) ll_backend__livemap__Var_21)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__livemap__succeeded)
          ll_backend__livemap__Livevals1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__livemap__Var_21, (MR_Integer) 0)));
      }
    if (ll_backend__livemap__succeeded)
      {
        MR_Word ll_backend__livemap__TypeCtorInfo_7_31 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
        MR_Word ll_backend__livemap__Livelist_29;
        MR_Word ll_backend__livemap__Livevals1_30;

        {
          mercury__set__to_sorted_list_2_p_0(ll_backend__livemap__TypeCtorInfo_7_31, ll_backend__livemap__Livevals1_15, &ll_backend__livemap__Livelist_29);
        }
        {
          mercury__set__init_1_p_0(ll_backend__livemap__TypeCtorInfo_7_31, &ll_backend__livemap__Livevals1_30);
        }
        {
          ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(ll_backend__livemap__Livelist_29, ll_backend__livemap__Livevals1_30, ll_backend__livemap__STATE_VARIABLE_Livevals_19);
        }
        *ll_backend__livemap__Instrs_9 = ll_backend__livemap__Instrs2_17;
        *ll_backend__livemap__Found_13 = (MR_Integer) 1;
      }
    else
      {
        switch (ll_backend__livemap__Compulsory_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__livemap__Instrs_9 = ll_backend__livemap__Instrs1_14;
              *ll_backend__livemap__Found_13 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__livemap__Var_25;

              {
                ll_backend__livemap__Var_25 = mercury__string__f_43_43_2_f_0(ll_backend__livemap__Site_11, (MR_String) " not preceded by livevals");
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.look_for_livevals\'/7", ll_backend__livemap__Var_25);
                return;
              }
            }
            break;
        }
        *ll_backend__livemap__STATE_VARIABLE_Livevals_19 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_18;
      }
  }
}

static void MR_CALL 
ll_backend__livemap__build_livemap_foreign_proc_inputs_3_p_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_2,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__livemap__succeeded;

        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__livemap__STATE_VARIABLE_Livevals_3 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
        else
          {
            MR_Word ll_backend__livemap__Input_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__livemap__Inputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__livemap__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 4)));
            MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_20_20;
            MR_String ll_backend__livemap__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 0)));
            MR_Word ll_backend__livemap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 1)));
            MR_Word ll_backend__livemap__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 2)));
            MR_Word ll_backend__livemap__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 3)));
            MR_Word ll_backend__livemap__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 5)));
            MR_Word ll_backend__livemap__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 6)));
            MR_Word ll_backend__livemap__Lval_17;

            ll_backend__livemap__succeeded = ((MR_tag((MR_Word) ll_backend__livemap__Rval_14)) == (MR_mktag((MR_Integer) 0)));
            if (ll_backend__livemap__succeeded)
              {
                ll_backend__livemap__Lval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Rval_14, (MR_Integer) 0)));
                {
                  MR_Word ll_backend__livemap__Var_26;
                  MR_Word ll_backend__livemap__Var_27;
                  MR_Word ll_backend__livemap__Var_28;

                  ll_backend__livemap__succeeded = ((((MR_tag((MR_Word) ll_backend__livemap__Lval_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_17, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (ll_backend__livemap__succeeded)
                    {
                      ll_backend__livemap__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_17, (MR_Integer) 1)));
                      ll_backend__livemap__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_17, (MR_Integer) 2)));
                      ll_backend__livemap__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_17, (MR_Integer) 3)));
                      ll_backend__livemap__STATE_VARIABLE_Livevals_20_20 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
                    }
                  else
                    {
                      {
                        mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_17)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_2, &ll_backend__livemap__STATE_VARIABLE_Livevals_20_20);
                      }
                    }
                }
              }
            else
              ll_backend__livemap__STATE_VARIABLE_Livevals_20_20 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__livemap__next_value_of_HeadVar__1_1 = ll_backend__livemap__Inputs_8;
              MR_Word ll_backend__livemap__next_value_of_STATE_VARIABLE_Livevals_0_2 = ll_backend__livemap__STATE_VARIABLE_Livevals_20_20;

              ll_backend__livemap__STATE_VARIABLE_Livevals_0_2 = ll_backend__livemap__next_value_of_STATE_VARIABLE_Livevals_0_2;
              ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__livemap__build_live_lval_info_7_p_0(
  MR_Word ll_backend__livemap__AffectsLiveness_8,
  MR_Word ll_backend__livemap__LiveLvalInfo_9,
  MR_String ll_backend__livemap__Code_10,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_15,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_16,
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_17,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18)
{
  {
    MR_bool ll_backend__livemap__succeeded;

    switch (ll_backend__livemap__AffectsLiveness_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18 = (MR_Integer) 1;
          *ll_backend__livemap__STATE_VARIABLE_Livevals_16 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_15;
        }
        break;
      case (MR_Integer) 2:
        {
          ll_backend__livemap__succeeded = (strcmp(ll_backend__livemap__Code_10, (MR_String) "") == 0);
          if (ll_backend__livemap__succeeded)
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_17;
          else
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18 = (MR_Integer) 1;
          *ll_backend__livemap__STATE_VARIABLE_Livevals_16 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_15;
        }
        break;
      case (MR_Integer) 1:
        if ((ll_backend__livemap__LiveLvalInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18 = (MR_Integer) 1;
            *ll_backend__livemap__STATE_VARIABLE_Livevals_16 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_15;
          }
        else
          {
            MR_Word ll_backend__livemap__LiveLvalSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__LiveLvalInfo_9, (MR_Integer) 0)));
            MR_Word ll_backend__livemap__LiveLvals_14;

            {
              mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__livemap__LiveLvalSet_13, &ll_backend__livemap__LiveLvals_14);
            }
            {
              ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(ll_backend__livemap__LiveLvals_14, ll_backend__livemap__STATE_VARIABLE_Livevals_0_15, ll_backend__livemap__STATE_VARIABLE_Livevals_16);
            }
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_17;
          }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__livemap__build_livemap_foreign_proc_components_5_p_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_2,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_3,
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__livemap__succeeded;

        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_5 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
            *ll_backend__livemap__STATE_VARIABLE_Livevals_3 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
          }
        else
          {
            MR_Word ll_backend__livemap__Component_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__livemap__Components_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32;
            MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_33_33;

            switch (MR_tag((MR_Word) ll_backend__livemap__Component_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
                  ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__livemap__Inputs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__Component_12, (MR_Integer) 0)));

                  {
                    ll_backend__livemap__build_livemap_foreign_proc_inputs_3_p_0(ll_backend__livemap__Inputs_16, ll_backend__livemap__STATE_VARIABLE_Livevals_0_2, &ll_backend__livemap__STATE_VARIABLE_Livevals_33_33);
                  }
                  ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
                }
                break;
              case (MR_Integer) 2:
                {
                  ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
                  ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ll_backend__livemap__AffectsLiveness_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 2)));
                      MR_String ll_backend__livemap__Code_20 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 3)));
                      MR_Word ll_backend__livemap__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 1)));

                      switch (ll_backend__livemap__AffectsLiveness_19) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 2:
                          {
                            ll_backend__livemap__succeeded = (strcmp(ll_backend__livemap__Code_20, (MR_String) "") == 0);
                            if (ll_backend__livemap__succeeded)
                              ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
                            else
                              ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = (MR_Integer) 1;
                          }
                          break;
                        case (MR_Integer) 1:
                          ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
                          break;
                      }
                      ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__livemap__LiveLvalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 3)));
                      MR_Word ll_backend__livemap__AffectsLiveness_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 2)));
                      MR_String ll_backend__livemap__Code_37 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 4)));
                      MR_Word ll_backend__livemap___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 1)));

                      switch (ll_backend__livemap__AffectsLiveness_36) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = (MR_Integer) 1;
                            ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            ll_backend__livemap__succeeded = (strcmp(ll_backend__livemap__Code_37, (MR_String) "") == 0);
                            if (ll_backend__livemap__succeeded)
                              ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
                            else
                              ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = (MR_Integer) 1;
                            ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
                          }
                          break;
                        case (MR_Integer) 1:
                          if ((ll_backend__livemap__LiveLvalInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = (MR_Integer) 1;
                              ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
                            }
                          else
                            {
                              MR_Word ll_backend__livemap__LiveLvalSet_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__LiveLvalInfo_22, (MR_Integer) 0)));
                              MR_Word ll_backend__livemap__LiveLvals_48;

                              {
                                mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__livemap__LiveLvalSet_47, &ll_backend__livemap__LiveLvals_48);
                              }
                              {
                                ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(ll_backend__livemap__LiveLvals_48, ll_backend__livemap__STATE_VARIABLE_Livevals_0_2, &ll_backend__livemap__STATE_VARIABLE_Livevals_33_33);
                              }
                              ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
                            }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
                      ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
                      ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
                    }
                    break;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__livemap__next_value_of_HeadVar__1_1 = ll_backend__livemap__Components_13;
              MR_Word ll_backend__livemap__next_value_of_STATE_VARIABLE_Livevals_0_2 = ll_backend__livemap__STATE_VARIABLE_Livevals_33_33;
              MR_Word ll_backend__livemap__next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_4 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32;

              ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4 = ll_backend__livemap__next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_4;
              ll_backend__livemap__STATE_VARIABLE_Livevals_0_2 = ll_backend__livemap__next_value_of_STATE_VARIABLE_Livevals_0_2;
              ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0_1(
  MR_Box ll_backend__livemap__closure_arg,
  MR_Box ll_backend__livemap__wrapper_arg_1,
  MR_Box ll_backend__livemap__wrapper_arg_2,
  MR_Box * ll_backend__livemap__wrapper_arg_3)
{
  {
    MR_Box ll_backend__livemap__closure = ll_backend__livemap__closure_arg;
    MR_Word ll_backend__livemap__conv0_STATE_VARIABLE_Livevals_10;

    {
      ll_backend__livemap__livemap_insert_maybe_label_livevals_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__livemap__wrapper_arg_1), ((MR_Word) ll_backend__livemap__wrapper_arg_2), &ll_backend__livemap__conv0_STATE_VARIABLE_Livevals_10);
    }
    *ll_backend__livemap__wrapper_arg_3 = ((MR_Box) (ll_backend__livemap__conv0_STATE_VARIABLE_Livevals_10));
  }
}

static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0(
  MR_Word ll_backend__livemap__Instr0_10,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Instrs_0_100,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Instrs_101,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_102,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_103,
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livemap_0_106,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livemap_107)
{
  {
    MR_bool ll_backend__livemap__succeeded;
    MR_Word ll_backend__livemap__Uinstr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Instr0_10, (MR_Integer) 0)));
    MR_String ll_backend__livemap__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Instr0_10, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__livemap__Uinstr0_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
          *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
          *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
          *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "livevals found in backward scan in build_livemap");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "block found in backward scan");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__livemap__Lval_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__livemap__Rvals_24;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_190_190;
              MR_Word ll_backend__livemap__Var_191;

              {
                mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_22)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_190_190);
              }
              {
                ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_22, &ll_backend__livemap__Rvals_24);
              }
              {
                ll_backend__livemap__Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_191, 0) = ((MR_Box) (ll_backend__livemap__Rval_23));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_191, 1) = ((MR_Box) (ll_backend__livemap__Rvals_24));
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Var_191, ll_backend__livemap__STATE_VARIABLE_Livevals_190_190, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__livemap__Lval_262 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__Rval_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__livemap__Rvals_264;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_190_265;
              MR_Word ll_backend__livemap__Var_266;

              {
                mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_262)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_190_265);
              }
              {
                ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_262, &ll_backend__livemap__Rvals_264);
              }
              {
                ll_backend__livemap__Var_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_266, 0) = ((MR_Box) (ll_backend__livemap__Rval_263));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_266, 1) = ((MR_Box) (ll_backend__livemap__Rvals_264));
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Var_266, ll_backend__livemap__STATE_VARIABLE_Livevals_190_265, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__livemap__Var_38;

              {
                ll_backend__livemap__look_for_livevals_7_p_0(ll_backend__livemap__STATE_VARIABLE_Instrs_0_100, ll_backend__livemap__STATE_VARIABLE_Instrs_101, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103, (MR_String) "call", (MR_Integer) 1, &ll_backend__livemap__Var_38);
              }
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 4:
            {
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__livemap__Label_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

              {
                mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__livemap_scalar_common_1[0], ((MR_Box) (ll_backend__livemap__Label_41)), ((MR_Box) (ll_backend__livemap__STATE_VARIABLE_Livevals_0_102)), ll_backend__livemap__STATE_VARIABLE_Livemap_0_106, ll_backend__livemap__STATE_VARIABLE_Livemap_107);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__livemap__CodeAddr_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__LivevalsNeeded_43;
              MR_Word ll_backend__livemap__Found_44;
              MR_Word ll_backend__livemap__MaybeSpecial_49;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_163_163;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_169_169;

              {
                ll_backend__livemap__LivevalsNeeded_43 = ll_backend__opt_util__livevals_addr_1_f_0(ll_backend__livemap__CodeAddr_42);
              }
              {
                ll_backend__livemap__look_for_livevals_7_p_0(ll_backend__livemap__STATE_VARIABLE_Instrs_0_100, ll_backend__livemap__STATE_VARIABLE_Instrs_101, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_163_163, (MR_String) "goto", ll_backend__livemap__LivevalsNeeded_43, &ll_backend__livemap__Found_44);
              }
              switch (ll_backend__livemap__Found_44) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_tag((MR_Word) ll_backend__livemap__CodeAddr_42)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ll_backend__livemap__CodeAddr_42)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 3:
                        case (MR_Integer) 4:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "unknown code_addr type");
                              return;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          ll_backend__livemap__STATE_VARIABLE_Livevals_169_169 = ll_backend__livemap__STATE_VARIABLE_Livevals_163_163;
                          break;
                        case (MR_Integer) 2:
                          ll_backend__livemap__STATE_VARIABLE_Livevals_169_169 = ll_backend__livemap__STATE_VARIABLE_Livevals_163_163;
                          break;
                        case (MR_Integer) 5:
                          ll_backend__livemap__STATE_VARIABLE_Livevals_169_169 = ll_backend__livemap__STATE_VARIABLE_Livevals_163_163;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__livemap__Var_168;
                        MR_Word ll_backend__livemap__Label_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__CodeAddr_42, (MR_Integer) 0)));

                        {
                          ll_backend__livemap__Var_168 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                        }
                        {
                          ll_backend__livemap__livemap_insert_label_livevals_4_p_0(ll_backend__livemap__STATE_VARIABLE_Livemap_0_106, ll_backend__livemap__Label_203, ll_backend__livemap__Var_168, &ll_backend__livemap__STATE_VARIABLE_Livevals_169_169);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "unknown code_addr type");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "unknown code_addr type");
                          return;
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  ll_backend__livemap__STATE_VARIABLE_Livevals_169_169 = ll_backend__livemap__STATE_VARIABLE_Livevals_163_163;
                  break;
              }
              {
                ll_backend__livemap__livemap_special_code_addr_2_p_0(ll_backend__livemap__CodeAddr_42, &ll_backend__livemap__MaybeSpecial_49);
              }
              if ((ll_backend__livemap__MaybeSpecial_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_169_169;
              else
                {
                  MR_Word ll_backend__livemap__Special_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeSpecial_49, (MR_Integer) 0)));

                  {
                    mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Special_50)), ll_backend__livemap__STATE_VARIABLE_Livevals_169_169, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                  }
                }
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__livemap__MaybeLabels_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__livemap__Var_156;
              MR_Word ll_backend__livemap__Var_157;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_158_158;
              MR_Word ll_backend__livemap__Var_160;
              MR_Word ll_backend__livemap__Rval_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Box ll_backend__livemap__conv1_STATE_VARIABLE_Livevals_103;

              {
                ll_backend__livemap__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_156, 0) = ((MR_Box) (ll_backend__livemap__Rval_208));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__livemap__Var_157 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Var_156, ll_backend__livemap__Var_157, &ll_backend__livemap__STATE_VARIABLE_Livevals_158_158);
              }
              {
                ll_backend__livemap__Var_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__livemap__Var_160, 0) = ((MR_Box) (&ll_backend__livemap_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), ll_backend__livemap__Var_160, 1) = ((MR_Box) (ll_backend__livemap__livemap_do_build_instr_9_p_0_1));
                MR_hl_field(MR_mktag(0), ll_backend__livemap__Var_160, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ll_backend__livemap__Var_160, 3) = ((MR_Box) (ll_backend__livemap__STATE_VARIABLE_Livemap_0_106));
              }
              {
                mercury__list__foldl_4_p_0((MR_Word) &ll_backend__livemap_scalar_common_1[1], (MR_Word) &ll_backend__livemap_scalar_common_1[0], ll_backend__livemap__Var_160, ll_backend__livemap__MaybeLabels_51, ((MR_Box) (ll_backend__livemap__STATE_VARIABLE_Livevals_158_158)), &ll_backend__livemap__conv1_STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ((MR_Word) ll_backend__livemap__conv1_STATE_VARIABLE_Livevals_103);
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__livemap__AffectsLiveness_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__LiveLvalInfo_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
              MR_String ll_backend__livemap__Code_89 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));

              {
                ll_backend__livemap__build_live_lval_info_7_p_0(ll_backend__livemap__AffectsLiveness_87, ll_backend__livemap__LiveLvalInfo_88, ll_backend__livemap__Code_89, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103, ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104, ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_147_147;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_154_154;
              MR_Word ll_backend__livemap__Rval_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__CodeAddr_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__livemap__Found_217;
              MR_Word ll_backend__livemap__MaybeSpecial_218;

              {
                ll_backend__livemap__look_for_livevals_7_p_0(ll_backend__livemap__STATE_VARIABLE_Instrs_0_100, ll_backend__livemap__STATE_VARIABLE_Instrs_101, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_147_147, (MR_String) "if_val", (MR_Integer) 0, &ll_backend__livemap__Found_217);
              }
              switch (ll_backend__livemap__Found_217) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__livemap__Var_150;
                    MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_151_151;
                    MR_Word ll_backend__livemap__Label_209;

                    {
                      ll_backend__livemap__Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_150, 0) = ((MR_Box) (ll_backend__livemap__Rval_214));
                      MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Var_150, ll_backend__livemap__STATE_VARIABLE_Livevals_147_147, &ll_backend__livemap__STATE_VARIABLE_Livevals_151_151);
                    }
                    ll_backend__livemap__succeeded = ((MR_tag((MR_Word) ll_backend__livemap__CodeAddr_216)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__livemap__succeeded)
                      {
                        ll_backend__livemap__Label_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__CodeAddr_216, (MR_Integer) 0)));
                        {
                          ll_backend__livemap__livemap_insert_label_livevals_4_p_0(ll_backend__livemap__STATE_VARIABLE_Livemap_0_106, ll_backend__livemap__Label_209, ll_backend__livemap__STATE_VARIABLE_Livevals_151_151, &ll_backend__livemap__STATE_VARIABLE_Livevals_154_154);
                        }
                      }
                    else
                      ll_backend__livemap__STATE_VARIABLE_Livevals_154_154 = ll_backend__livemap__STATE_VARIABLE_Livevals_151_151;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_147_147, &ll_backend__livemap__STATE_VARIABLE_Livevals_154_154);
                    }
                  }
                  break;
              }
              {
                ll_backend__livemap__livemap_special_code_addr_2_p_0(ll_backend__livemap__CodeAddr_216, &ll_backend__livemap__MaybeSpecial_218);
              }
              if ((ll_backend__livemap__MaybeSpecial_218 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_154_154;
              else
                {
                  MR_Word ll_backend__livemap__Special_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeSpecial_218, (MR_Integer) 0)));

                  {
                    mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Special_212)), ll_backend__livemap__STATE_VARIABLE_Livevals_154_154, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                  }
                }
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_144_144;
              MR_Word ll_backend__livemap__Lval_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__Rvals_221;

              {
                mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_220)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_144_144);
              }
              {
                ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_220, &ll_backend__livemap__Rvals_221);
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Rvals_221, ll_backend__livemap__STATE_VARIABLE_Livevals_144_144, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__livemap__Var_142;
              MR_Word ll_backend__livemap__Lval_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

              {
                ll_backend__livemap__Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__livemap__Var_142, 0) = ((MR_Box) (ll_backend__livemap__Lval_222));
              }
              {
                ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Var_142, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__livemap__TypeCtorInfo_258_258 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
              MR_Word ll_backend__livemap__SizeRval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 4)));
              MR_Word ll_backend__livemap__MaybeRegionRval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 7)));
              MR_Word ll_backend__livemap__MaybeReuse_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 8)));
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_135_135;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_136_136;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_137_137;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_138_138;
              MR_Word ll_backend__livemap__Lval_223 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__Rvals_224;
              MR_Word ll_backend__livemap__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__livemap__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));
              MR_Word ll_backend__livemap__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 5)));
              MR_Word ll_backend__livemap__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 6)));

              {
                mercury__set__delete_3_p_0(ll_backend__livemap__TypeCtorInfo_258_258, ((MR_Box) (ll_backend__livemap__Lval_223)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_135_135);
              }
              {
                ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_223, &ll_backend__livemap__Rvals_224);
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Rvals_224, ll_backend__livemap__STATE_VARIABLE_Livevals_135_135, &ll_backend__livemap__STATE_VARIABLE_Livevals_136_136);
              }
              {
                ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__SizeRval_55, ll_backend__livemap__STATE_VARIABLE_Livevals_136_136, &ll_backend__livemap__STATE_VARIABLE_Livevals_137_137);
              }
              if ((ll_backend__livemap__MaybeRegionRval_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__livemap__STATE_VARIABLE_Livevals_138_138 = ll_backend__livemap__STATE_VARIABLE_Livevals_137_137;
              else
                {
                  MR_Word ll_backend__livemap__RegionRval_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeRegionRval_58, (MR_Integer) 0)));

                  {
                    ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__RegionRval_60, ll_backend__livemap__STATE_VARIABLE_Livevals_137_137, &ll_backend__livemap__STATE_VARIABLE_Livevals_138_138);
                  }
                }
              if ((ll_backend__livemap__MaybeReuse_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_138_138;
              else
                {
                  MR_Word ll_backend__livemap__ReuseRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeReuse_59, (MR_Integer) 0)));
                  MR_Word ll_backend__livemap__MaybeFlagLval_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeReuse_59, (MR_Integer) 1)));
                  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_139_139;

                  {
                    ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__ReuseRval_61, ll_backend__livemap__STATE_VARIABLE_Livevals_138_138, &ll_backend__livemap__STATE_VARIABLE_Livevals_139_139);
                  }
                  if ((ll_backend__livemap__MaybeFlagLval_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_139_139;
                  else
                    {
                      MR_Word ll_backend__livemap__FlagLval_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeFlagLval_62, (MR_Integer) 0)));
                      MR_Word ll_backend__livemap__FlagRvals_64;
                      MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_140_140;

                      {
                        mercury__set__delete_3_p_0(ll_backend__livemap__TypeCtorInfo_258_258, ((MR_Box) (ll_backend__livemap__FlagLval_63)), ll_backend__livemap__STATE_VARIABLE_Livevals_139_139, &ll_backend__livemap__STATE_VARIABLE_Livevals_140_140);
                      }
                      {
                        ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__FlagLval_63, &ll_backend__livemap__FlagRvals_64);
                      }
                      {
                        ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__FlagRvals_64, ll_backend__livemap__STATE_VARIABLE_Livevals_140_140, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                      }
                    }
                }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_133_133;
              MR_Word ll_backend__livemap__Lval_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__Rvals_226;

              {
                mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_225)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_133_133);
              }
              {
                ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_225, &ll_backend__livemap__Rvals_226);
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Rvals_226, ll_backend__livemap__STATE_VARIABLE_Livevals_133_133, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__livemap__Var_130;
              MR_Word ll_backend__livemap__Rval_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

              {
                ll_backend__livemap__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_130, 0) = ((MR_Box) (ll_backend__livemap__Rval_227));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Var_130, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__livemap__Var_127;
              MR_Word ll_backend__livemap__Rval_228 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

              {
                ll_backend__livemap__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_127, 0) = ((MR_Box) (ll_backend__livemap__Rval_228));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Var_127, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 16:
            {
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__livemap__IdRval_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));
              MR_Word ll_backend__livemap__NumLval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 4)));
              MR_Word ll_backend__livemap__AddrLval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 5)));
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_122_122;
              MR_Word ll_backend__livemap__Var_123;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_124_124;
              MR_Word ll_backend__livemap__Var_125;
              MR_Word ll_backend__livemap___FillOp_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap___EmbeddedStackFrame_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));

              {
                ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__IdRval_68, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_122_122);
              }
              {
                ll_backend__livemap__Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__livemap__Var_123, 0) = ((MR_Box) (ll_backend__livemap__NumLval_69));
              }
              {
                ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Var_123, ll_backend__livemap__STATE_VARIABLE_Livevals_122_122, &ll_backend__livemap__STATE_VARIABLE_Livevals_124_124);
              }
              {
                ll_backend__livemap__Var_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__livemap__Var_125, 0) = ((MR_Box) (ll_backend__livemap__AddrLval_70));
              }
              {
                ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Var_125, ll_backend__livemap__STATE_VARIABLE_Livevals_124_124, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__livemap__ValueRval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));
              MR_Word ll_backend__livemap___SetOp_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap___EmbeddedStackFrame_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));

              {
                ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__ValueRval_72, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 19:
            {
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_119_119;
              MR_Word ll_backend__livemap__Lval_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__Rvals_236;

              {
                mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_235)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_119_119);
              }
              {
                ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_235, &ll_backend__livemap__Rvals_236);
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Rvals_236, ll_backend__livemap__STATE_VARIABLE_Livevals_119_119, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__livemap__Rval_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap___Reason_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));

              {
                ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Rval_237, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_116_116;
              MR_Word ll_backend__livemap__Lval_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__Rvals_239;

              {
                mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_238)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_116_116);
              }
              {
                ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_238, &ll_backend__livemap__Rvals_239);
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Rvals_239, ll_backend__livemap__STATE_VARIABLE_Livevals_116_116, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__livemap__Rval_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

              {
                ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Rval_240, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 24:
            {
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 25:
            {
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 26:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "decr_sp_and_return");
                return;
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__livemap__Components_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__livemap__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));
              MR_Word ll_backend__livemap__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 4)));
              MR_Word ll_backend__livemap__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 5)));
              MR_Word ll_backend__livemap__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 6)));
              MR_Word ll_backend__livemap__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 7)));
              MR_Word ll_backend__livemap__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 8)));
              MR_Word ll_backend__livemap__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 9)));
              MR_Word ll_backend__livemap__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 10)));

              {
                ll_backend__livemap__build_livemap_foreign_proc_components_5_p_0(ll_backend__livemap__Components_91, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103, ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104, ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 28:
            {
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 29:
            {
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 30:
            {
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word ll_backend__livemap__Lval_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
              MR_Integer ll_backend__livemap___NumSlots_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

              {
                mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_199)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__livemap__LCRval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__LCSLval_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__livemap__LCSAccessRvals_29;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_186_186;
              MR_Word ll_backend__livemap__Var_187;
              MR_Word ll_backend__livemap___InternalLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));

              {
                mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__LCSLval_27)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_186_186);
              }
              {
                ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__LCSLval_27, &ll_backend__livemap__LCSAccessRvals_29);
              }
              {
                ll_backend__livemap__Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_187, 0) = ((MR_Box) (ll_backend__livemap__LCRval_26));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_187, 1) = ((MR_Box) (ll_backend__livemap__LCSAccessRvals_29));
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Var_187, ll_backend__livemap__STATE_VARIABLE_Livevals_186_186, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__livemap__LCSRval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__livemap__Child_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));
              MR_Word ll_backend__livemap__Var_181;
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_182_182;
              MR_Word ll_backend__livemap__Var_183;
              MR_Word ll_backend__livemap__LCRval_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

              {
                ll_backend__livemap__Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_183, 0) = ((MR_Box) (ll_backend__livemap__LCSRval_30));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__livemap__Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_181, 0) = ((MR_Box) (ll_backend__livemap__LCRval_200));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_181, 1) = ((MR_Box) (ll_backend__livemap__Var_183));
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Var_181, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_182_182);
              }
              {
                ll_backend__livemap__livemap_insert_label_livevals_4_p_0(ll_backend__livemap__STATE_VARIABLE_Livemap_0_106, ll_backend__livemap__Child_31, ll_backend__livemap__STATE_VARIABLE_Livevals_182_182, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__livemap__Var_176;
              MR_Word ll_backend__livemap__Var_177;
              MR_Word ll_backend__livemap__Var_179;
              MR_Word ll_backend__livemap__LCRval_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__livemap__LCSRval_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));

              {
                ll_backend__livemap__Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_179, 0) = ((MR_Box) (ll_backend__livemap__LCSRval_202));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__livemap__Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_176, 0) = ((MR_Box) (ll_backend__livemap__LCRval_201));
                MR_hl_field(MR_mktag(1), ll_backend__livemap__Var_176, 1) = ((MR_Box) (ll_backend__livemap__Var_179));
              }
              {
                ll_backend__livemap__Var_177 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
              {
                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Var_176, ll_backend__livemap__Var_177, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
              }
              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__livemap__livemap_do_build_6_p_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__Livevals0_2,
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_3,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_4,
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livemap_0_5,
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livemap_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__livemap__succeeded;

        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__livemap__STATE_VARIABLE_Livemap_6 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_5;
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_4 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_3;
          }
        else
          {
            MR_Word ll_backend__livemap__Instr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__livemap__Instrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__livemap__Instrs1_19;
            MR_Word ll_backend__livemap__Livevals1_20;
            MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_25_25;
            MR_Word ll_backend__livemap__STATE_VARIABLE_Livemap_26_26;

            {
              ll_backend__livemap__livemap_do_build_instr_9_p_0(ll_backend__livemap__Instr0_14, ll_backend__livemap__Instrs0_15, &ll_backend__livemap__Instrs1_19, ll_backend__livemap__Livevals0_2, &ll_backend__livemap__Livevals1_20, ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_3, &ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_25_25, ll_backend__livemap__STATE_VARIABLE_Livemap_0_5, &ll_backend__livemap__STATE_VARIABLE_Livemap_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__livemap__next_value_of_HeadVar__1_1 = ll_backend__livemap__Instrs1_19;
              MR_Word ll_backend__livemap__next_value_of_Livevals0_2 = ll_backend__livemap__Livevals1_20;
              MR_Word ll_backend__livemap__next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_3 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_25_25;
              MR_Word ll_backend__livemap__next_value_of_STATE_VARIABLE_Livemap_0_5 = ll_backend__livemap__STATE_VARIABLE_Livemap_26_26;

              ll_backend__livemap__STATE_VARIABLE_Livemap_0_5 = ll_backend__livemap__next_value_of_STATE_VARIABLE_Livemap_0_5;
              ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_3 = ll_backend__livemap__next_value_of_STATE_VARIABLE_ContainsBadUserCode_0_3;
              ll_backend__livemap__Livevals0_2 = ll_backend__livemap__next_value_of_Livevals0_2;
              ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__livemap__equal_livemaps_keys_3_p_0(
  MR_Word ll_backend__livemap__HeadVar__1_1,
  MR_Word ll_backend__livemap__HeadVar__2_2,
  MR_Word ll_backend__livemap__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__livemap__succeeded;

        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__livemap__succeeded = MR_TRUE;
        else
          {
            MR_Word ll_backend__livemap__TypeCtorInfo_12_12 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
            MR_Word ll_backend__livemap__TypeInfo_13_13 = (MR_Word) &ll_backend__livemap_scalar_common_1[0];
            MR_Word ll_backend__livemap__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__livemap__Labels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__livemap__Liveset1_10;
            MR_Word ll_backend__livemap__Liveset2_11;
            MR_Box ll_backend__livemap__conv0_Liveset1_10;
            MR_Box ll_backend__livemap__conv1_Liveset2_11;

            {
              mercury__map__lookup_3_p_0(ll_backend__livemap__TypeCtorInfo_12_12, ll_backend__livemap__TypeInfo_13_13, ll_backend__livemap__HeadVar__2_2, ((MR_Box) (ll_backend__livemap__Label_6)), &ll_backend__livemap__conv0_Liveset1_10);
            }
            ll_backend__livemap__Liveset1_10 = ((MR_Word) ll_backend__livemap__conv0_Liveset1_10);
            {
              mercury__map__lookup_3_p_0(ll_backend__livemap__TypeCtorInfo_12_12, ll_backend__livemap__TypeInfo_13_13, ll_backend__livemap__HeadVar__3_3, ((MR_Box) (ll_backend__livemap__Label_6)), &ll_backend__livemap__conv1_Liveset2_11);
            }
            ll_backend__livemap__Liveset2_11 = ((MR_Word) ll_backend__livemap__conv1_Liveset2_11);
            {
              ll_backend__livemap__succeeded = mercury__set__equal_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__livemap__Liveset1_10, ll_backend__livemap__Liveset2_11);
            }
            if (ll_backend__livemap__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__livemap__next_value_of_HeadVar__1_1 = ll_backend__livemap__Labels_7;

                  ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ll_backend__livemap__succeeded;
      }
      break;
    }
}

static void MR_CALL 
ll_backend__livemap__build_livemap_fixpoint_4_p_0(
  MR_Word ll_backend__livemap__BackInstrs_5,
  MR_Word ll_backend__livemap__Livemap0_6,
  MR_Integer ll_backend__livemap__CurIteration_7,
  MR_Word * ll_backend__livemap__MaybeLivemap_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__livemap__succeeded;
        MR_Word ll_backend__livemap__Livevals0_9;
        MR_Word ll_backend__livemap__ContainsBadUserCode_10;
        MR_Word ll_backend__livemap__Livemap1_11;

        {
          mercury__set__init_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, &ll_backend__livemap__Livevals0_9);
        }
        {
          ll_backend__livemap__livemap_do_build_6_p_0(ll_backend__livemap__BackInstrs_5, ll_backend__livemap__Livevals0_9, (MR_Integer) 0, &ll_backend__livemap__ContainsBadUserCode_10, ll_backend__livemap__Livemap0_6, &ll_backend__livemap__Livemap1_11);
        }
        switch (ll_backend__livemap__ContainsBadUserCode_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__livemap__TypeCtorInfo_6_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
              MR_Word ll_backend__livemap__TypeInfo_7_21 = (MR_Word) &ll_backend__livemap_scalar_common_1[0];
              MR_Word ll_backend__livemap__Labels_19;
              MR_Word ll_backend__livemap__Var_22;

              {
                mercury__map__keys_2_p_0(ll_backend__livemap__TypeCtorInfo_6_20, ll_backend__livemap__TypeInfo_7_21, ll_backend__livemap__Livemap0_6, &ll_backend__livemap__Labels_19);
              }
              {
                mercury__map__keys_2_p_0(ll_backend__livemap__TypeCtorInfo_6_20, ll_backend__livemap__TypeInfo_7_21, ll_backend__livemap__Livemap1_11, &ll_backend__livemap__Var_22);
              }
              {
                ll_backend__livemap__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__livemap_scalar_common_1[2], ((MR_Box) (ll_backend__livemap__Labels_19)), ((MR_Box) (ll_backend__livemap__Var_22)));
              }
              if (ll_backend__livemap__succeeded)
                {
                  ll_backend__livemap__succeeded = ll_backend__livemap__equal_livemaps_keys_3_p_0(ll_backend__livemap__Labels_19, ll_backend__livemap__Livemap0_6, ll_backend__livemap__Livemap1_11);
                }
              if (ll_backend__livemap__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__livemap__MaybeLivemap_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__livemap__Livemap1_11));
                }
              else
                {
                  ll_backend__livemap__succeeded = (ll_backend__livemap__CurIteration_7 < (MR_Integer) 5);
                  if (ll_backend__livemap__succeeded)
                    {
                      MR_Integer ll_backend__livemap__Var_14 = (ll_backend__livemap__CurIteration_7 + (MR_Integer) 1);

                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__livemap__next_value_of_Livemap0_6 = ll_backend__livemap__Livemap1_11;
                        MR_Integer ll_backend__livemap__next_value_of_CurIteration_7 = ll_backend__livemap__Var_14;

                        ll_backend__livemap__CurIteration_7 = ll_backend__livemap__next_value_of_CurIteration_7;
                        ll_backend__livemap__Livemap0_6 = ll_backend__livemap__next_value_of_Livemap0_6;
                      }
                      continue;
                    }
                  else
                    *ll_backend__livemap__MaybeLivemap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
            }
            break;
          case (MR_Integer) 1:
            *ll_backend__livemap__MaybeLivemap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
      }
      break;
    }
}

void MR_CALL 
ll_backend__livemap__build_livemap_2_p_0(
  MR_Word ll_backend__livemap__Instrs_3,
  MR_Word * ll_backend__livemap__MaybeLivemap_4)
{
  {
    MR_bool ll_backend__livemap__succeeded;
    MR_Word ll_backend__livemap__Livemap0_5;
    MR_Word ll_backend__livemap__BackInstrs_6;

    {
      mercury__map__init_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__livemap_scalar_common_1[0], &ll_backend__livemap__Livemap0_5);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__livemap__Instrs_3, &ll_backend__livemap__BackInstrs_6);
    }
    {
      ll_backend__livemap__build_livemap_fixpoint_4_p_0(ll_backend__livemap__BackInstrs_6, ll_backend__livemap__Livemap0_5, (MR_Integer) 0, ll_backend__livemap__MaybeLivemap_4);
    }
  }
}

void mercury__ll_backend__livemap__init(void)
{
}

void mercury__ll_backend__livemap__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__livemap__ll_backend__livemap__type_ctor_info_livemap_0);
	MR_register_type_ctor_info(&ll_backend__livemap__ll_backend__livemap__type_ctor_info_lvalset_0);
}

void mercury__ll_backend__livemap__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__livemap__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.livemap. */
